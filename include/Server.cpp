#include "StdAfx.h"
//#include "u:/Devo/components/src/net/NetStream.h"
#include "Server.h"
#include "Proactor.h"
#include "NetStream.h"

namespace	net {

CServer	g_server;

bool InitWinsock()
{
	WORD versionRequested = MAKEWORD(2, 2);	

	WSADATA wsaData;
	int result = WSAStartup(versionRequested, &wsaData);
	if (result != 0) {
		printf("can't load winsock.dll!\n");	
		return	FALSE;
	}

	if (LOBYTE(wsaData.wVersion) != 2 || HIBYTE(wsaData.wVersion) != 2) {
		printf("winsock.dll version mismatch (not 2.2)!");
		WSACleanup();
		return false;
	}

	return true;
}

void ExitWinsock()
{
	WSACleanup();
}

void GetIPFromDWORD(char* str, DWORD ip)
{
	WORD wFront = LOWORD(ip);
	WORD wRear = HIWORD(ip);
	sprintf(str, "%d.%d.%d.%d",LOBYTE(wFront),HIBYTE(wFront),LOBYTE(wRear),HIBYTE(wRear));	
}

int	Start()
{
	return g_server.Start();
}

void Stop()
{
	g_server.Stop();
}

bool AddAcceptHandler(CAcceptHandler * acceptHandler,int port)
{
	return g_server.AddAcceptHandler(acceptHandler, port);
}

INetStream*	CreateNetStream(SOCKET socket, DWORD ip, int sendQueueSize, int recvQueueSize)
{
	return g_server.CreateNetStream(socket, ip, sendQueueSize, recvQueueSize);
}

void DestroyNetStream(INetStream * stream)
{
	g_server.DestroyNetStream(stream);
}

void Destroy()
{
	g_server.Destroy();
}


//	CServer
int CServer::Start()
{
	SYSTEM_INFO SI;
	GetSystemInfo(&SI); 

	m_proactor.CreateIOWorkers((int) SI.dwNumberOfProcessors* 2);

	CAcceptor* acceptor = NULL;
	ACCEPTORS::iterator itr;
	for (itr = m_acceptors.begin(); itr != m_acceptors.end(); ++itr) {
		acceptor = *itr;
		acceptor->Start();
	}

	return	0;
}

void CServer::Stop()
{
	CAcceptor* acceptor = NULL;
	ACCEPTORS::iterator itr;
	for (itr = m_acceptors.begin(); itr != m_acceptors.end(); ++itr) {
	
		acceptor = *itr;
		acceptor->Stop();		
	}
}

bool CServer::AddAcceptHandler(CAcceptHandler* acceptHandler,int port)
{
	CAcceptor* acceptor = new CAcceptor;
	if (NULL == acceptor)
		return false;

	acceptor->Init(acceptHandler, port, SOMAXCONN);
	m_acceptors.push_back(acceptor);
	return true;
}

INetStream* CServer::CreateNetStream(SOCKET socket,DWORD ip,int sendQueueSize,int recvQueueSize)
{
	CNetStream* stream = new CNetStream;
	if (NULL == stream)
		return NULL;

	if (false == stream->Init(socket, ip, sendQueueSize, recvQueueSize)) {
		delete stream;
		stream = NULL;
		return NULL;
	}

	if (false == m_proactor.AddNetStream(stream)) {
		delete stream;
		stream = NULL;
		return NULL;
	}

	if (false == stream->RequestRecv()) {
		delete stream;
		stream = NULL;
		return NULL;
	}

	return stream;
}

void CServer::DestroyNetStream(INetStream* stream)
{
	if (!stream->IsDisConnect())
		stream->RequestDisConnect();

	m_proactor.RemoveNetStream((CNetStream*)stream);

	int refCnt = ((CNetStream*)stream)->GetRef();
	if (0 < refCnt) {
		printf("CServer::DestroyNetStream(): invalid referance count\n");
	}

	delete stream;
	stream = NULL;
}

void CServer::Destroy()
{
	Stop();

	CAcceptor* acceptor = NULL;
	ACCEPTORS::iterator itr;
	for (itr = m_acceptors.begin(); itr != m_acceptors.end(); ++itr) {
		acceptor = *itr;
		//SAFE_DELETE(acceptor);
		if (acceptor)
		{
			delete acceptor;
			acceptor = NULL;
		}
	}
	m_acceptors.clear();

	m_proactor.Destroy();
}

} //end namespace imcServerNet
