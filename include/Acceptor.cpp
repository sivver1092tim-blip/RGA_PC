#include "stdafx.h"
#include "Acceptor.h"
#include "AcceptHandler.h"
#include "string.h"

namespace	net {

CAcceptor::CAcceptor()
{
	m_acceptHandler = NULL;
	m_port = -1;
	m_socket = INVALID_SOCKET;
	m_backlog = 5;
}

CAcceptor::~CAcceptor()
{
	Stop();
}

void CAcceptor::Init(CAcceptHandler* acceptHandler,int port,int backlog)
{
	assert(NULL != acceptHandler);
	m_acceptHandler = acceptHandler;
	m_port = port;
	m_backlog = 0;
}

bool CAcceptor::Bind()
{
	assert(NULL != m_acceptHandler);
	assert(-1 != m_port);

	m_socket = WSASocket(AF_INET, SOCK_STREAM, 0, NULL, 0, WSA_FLAG_OVERLAPPED);
	if (INVALID_SOCKET == m_socket)
		return false;

	int nOn = 1;
	if (SOCKET_ERROR == setsockopt(m_socket, SOL_SOCKET, SO_REUSEADDR, (char*)& nOn, sizeof(nOn)))
	{
		closesocket(m_socket);
		return false;
	}

	SOCKADDR_IN addr;
	memset((void*) &addr, 0, sizeof(SOCKADDR_IN));
	addr.sin_family = AF_INET;
	addr.sin_addr.S_un.S_addr = htonl(INADDR_ANY);
	addr.sin_port = htons(m_port);

	if (bind(m_socket, (struct sockaddr*) &addr, sizeof(SOCKADDR_IN)) == SOCKET_ERROR)
		return false;

	return true;
}

bool CAcceptor::Listen()
{
	assert(NULL != m_acceptHandler);
	assert(-1 != m_port);
	assert(INVALID_SOCKET != m_socket);

	if (listen(m_socket, m_backlog) == SOCKET_ERROR)
		return false;

	return true;
}

int CAcceptor::Run()
{
	assert(NULL != m_acceptHandler);
	assert(-1 != m_port);

	if (Bind() == FALSE) {
		printf("CAcceptor::Run(): bind fail");
		ExitProcess(0);
		return -1;
	}

	if (Listen() == FALSE) {
		printf("CAcceptor::Run(): listen fail");
		ExitProcess(0);
		return -1;
	}

	int len;
	SOCKADDR_IN remoteAddr;
	SOCKET accepted;
	struct linger lingerOpt;

	while (m_stop == false) {
		len = sizeof(remoteAddr);

		if (INVALID_SOCKET == m_socket) {
			continue;
		}

		accepted = WSAAccept(m_socket, (struct sockaddr*) &remoteAddr, &len, NULL, 0);

		if (INVALID_SOCKET == accepted)
			continue;

		lingerOpt.l_onoff = 1;
		lingerOpt.l_linger = 0;
		if (SOCKET_ERROR == setsockopt(accepted, SOL_SOCKET, SO_LINGER, (char*) &lingerOpt, sizeof(lingerOpt))) {
			closesocket(accepted);
			continue;
		}


		char temp[128];

		memset(temp, 0x00, 128);

		//strcpy(temp, "Accept ");

		//strcat(temp, inet_ntoa(remoteAddr.sin_addr));

		//printf(temp);

		m_acceptHandler->OnAccept(accepted, remoteAddr.sin_addr.S_un.S_addr);
	}

	return 0;
}

void CAcceptor::Stop(DWORD timeOut)
{
	if (INVALID_SOCKET != m_socket)
		closesocket(m_socket);
	m_socket = INVALID_SOCKET;

	CThread::Stop(timeOut);
}

} //end namespace imcServerNet