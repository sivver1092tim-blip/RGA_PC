#include "stdafx.h"
#include "IOCP.h"

void PrintLastError(char * fmt, va_list args )
{
}

namespace  net {

CIOCP::CIOCP(int concurrentThread)
{
	m_IOCP = ::CreateIoCompletionPort(INVALID_HANDLE_VALUE, NULL, 0, concurrentThread);
}

CIOCP::~CIOCP()
{
	::CloseHandle(m_IOCP);
}

bool CIOCP::CreatePort(HANDLE handle,DWORD completionKey)
{
	if (m_IOCP != ::CreateIoCompletionPort(handle, m_IOCP, completionKey, 0)) {\
		//char error[1024];
		//int errorID = GetLastErrorString(error);
		//Warning("CIOCP::CreatePort(): can't create 'IOCP' (%s, %d)\n", error, errorID);
		printf("CIOCP::CreatePort(): can't create 'IOCP'");
		return false;
	}
	return true;
}

void CIOCP::PostStatus(DWORD completionKey,DWORD transferredBytes,OVERLAPPED * overlapped)
{
	if (0 == ::PostQueuedCompletionStatus(m_IOCP, transferredBytes, completionKey, overlapped))
		printf("PostQueuedCompletionStatus() fail! %d\n", ::GetLastError());
}

bool CIOCP::GetStatus(DWORD * completionKey,DWORD * transferred,OVERLAPPED ** overlapped,DWORD timeOut)
{
	if (0 == ::GetQueuedCompletionStatus(m_IOCP, transferred, completionKey, overlapped, timeOut)) {
		DWORD error = ::GetLastError();
// 		if (error != WAIT_TIMEOUT && error != 64)
// 			printf("GetQueuedCompletionStatus() fail! %d\n", error);
		return false;
	}
	return true;
}

} // end namespace imcServerNet
