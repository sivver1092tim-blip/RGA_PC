#include "stdafx.h"
#include "Proactor.h"
#include "NetStream.h"
#include "IOWorker.h"


namespace	net {

CProactor::CProactor()
{
}

CProactor::~CProactor()
{
	Destroy();
}

CIOCP * CProactor::GetIOCP()
{
	return &m_IOCP;
}

bool CProactor::AddNetStream(CNetStream * stream)
{
	assert(NULL != stream);

	if (false == m_IOCP.CreatePort((HANDLE) stream->GetSocket(), (DWORD) stream)) {
		printf("CProactor::AddStream - Create port error");
		return false;
	}

	return true;
}

void CProactor::RemoveNetStream(CNetStream * stream)
{
	stream->CloseSocket();
}

bool CProactor::CreateIOWorkers(int count)
{
	for (int i = 0; i < count; i++) {
		CIOWorker * worker = new CIOWorker;
		if (NULL == worker)
			return false;

		worker->SetIOCP(&m_IOCP);
		worker->Start();

		m_IOWorkers.push_back(worker);
	}

	return true;
}

void CProactor::StopIOWorkers()
{
	CIOWorker * IOWorker;
	int worker = m_IOWorkers.size();
	//for (int i = 0; i < worker; i++) 
	for (IOWorkerList::iterator itr = m_IOWorkers.begin(); itr != m_IOWorkers.end(); ++itr)
	{

		IOWorker = *itr;
		IOWorker->Stop();
	}
}

void CProactor::PostStatus(CNetStream * stream,DWORD transfered,OVERLAPPED * overlapped)
{
	m_IOCP.PostStatus((DWORD) stream, transfered, overlapped);
}

void CProactor::Destroy()
{
	StopIOWorkers();

	CIOWorker * IOWorker;
	
	IOWorkerList::iterator itr;
	
	for (itr = m_IOWorkers.begin(); itr != m_IOWorkers.end(); itr++) {
		IOWorker = *itr;
		delete IOWorker;
		IOWorker = NULL;
	}
	
	m_IOWorkers.clear();
}

} //end namespace imcServerNet
