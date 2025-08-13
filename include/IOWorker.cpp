#include "stdafx.h"
#include "IOWorker.h"
#include "IOBuffer.h"
#include "IOCP.h"
#include "NetStream.h"

namespace	net {

CIOWorker::CIOWorker()
{
}

CIOWorker::~CIOWorker()
{
}

void CIOWorker::SetIOCP(CIOCP* IOCP)
{
	m_IOCP = IOCP;
}

void CIOWorker::PrintIOCPError()
{
	LPVOID lpMsgBuf;
	FormatMessage(FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_IGNORE_INSERTS, NULL, GetLastError(), MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT), (LPTSTR) & lpMsgBuf, 0, NULL);
	printf("GetQueuedCompletionStatus error %d, %s\n", GetLastError(), (char*)lpMsgBuf);
	LocalFree(lpMsgBuf);
}

int CIOWorker::Run()
{
	bool result = false;
	DWORD transferred = 0;
	DWORD completionKey = 0;
	CIOBuffer* IOBuffer;

	while (m_stop == false) {
		transferred = 0;
		completionKey = 0;
		IOBuffer = NULL;

		result = m_IOCP->GetStatus(&completionKey, &transferred, (OVERLAPPED**) &IOBuffer, 1000);
	
		CNetStream* stream = (CNetStream*) completionKey;
		
		if (false == result) {
			if (NULL != stream) {
				stream->DesRef();
			}
			continue;
		}

		if (NULL == IOBuffer) {
			if (NULL != stream) {
				stream->DesRef();
			}
			continue;
		}

		if (transferred <= 0) {
			if (NULL != stream) {
				stream->DesRef();
			}
			continue;
		}

		if (IOBuffer->GetWorkType() == IOWORKTYPE_SEND) {
			if(false == stream->OnSendCompletion(transferred)) {
			} else {
			}
		} else
		if (IOBuffer->GetWorkType() == IOWORKTYPE_RECV) {
			if(false == stream->OnRecvCompletion(IOBuffer, transferred)) {
			} else {
			}
		}

		stream->DesRef();
	}

	return 0;
}

} //end namespace imcServerNet
