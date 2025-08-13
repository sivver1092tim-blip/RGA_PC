#include "stdafx.h"
#include "NetStream.h"
#include "Proactor.h"

//#include "imcmemdbgon.h"

namespace	net {

CNetStream::CNetStream()
{
	m_refCnt = 0;
	m_isDisConnectPending = FALSE;
	m_recvIO.SetWorkType(IOWORKTYPE_RECV);
	m_sendIO.SetWorkType(IOWORKTYPE_SEND);
	m_ip = 0;
	m_socket = INVALID_SOCKET;

	m_bRetired = false;

	m_bRecvFinish = TRUE;
	m_nTotalSize = 0;
}

CNetStream::~CNetStream()
{
}

void CNetStream::CloseSocket()
{
	::closesocket(m_socket);
	m_socket = NULL;
}

void CNetStream::AddRef()
{
	//CLock lock(&m_netStreamCS);

	m_netStreamCS.Enter();

	assert(m_refCnt >= 0);
	m_refCnt++;

	m_netStreamCS.Leave();
}

void CNetStream::DesRef()
{
	//CLock lock(&m_netStreamCS);

	m_netStreamCS.Enter();
	
	m_refCnt--;
	assert(m_refCnt >= 0);

	m_netStreamCS.Leave();
}

int CNetStream::GetRef()
{
	m_netStreamCS.Enter();
	//{
		int refCnt = m_refCnt;
	//}
	m_netStreamCS.Leave();
	return refCnt;
}

int CNetStream::CheckRecv(char * data,int len)
{
	if(len <=0)
		return 0;
	
	//CLock lock(&m_netStreamCS);

	m_netStreamCS.Enter();

	if (true == _IsDisConnect())
	{
		m_netStreamCS.Leave();
		return NETSTREAM_DisConnectED;
	}

	if(!m_bRecvFinish)
	{
		m_netStreamCS.Leave();
		return 0;
	}

	int received = m_recvQueue.Pop(data);

	m_netStreamCS.Leave();
	return received;
}

int CNetStream::Send(char * data,int len)
{
	//CLock lock(&m_netStreamCS);

	m_netStreamCS.Enter();

	if (true == _IsDisConnect())
	{
		m_netStreamCS.Leave();
		return NETSTREAM_DisConnectED;
	}

	int nLen = len + 4;
	char *pdata = new char[nLen + 4];

	memcpy(pdata , &nLen , 4);
	if(nLen)
		memcpy(pdata + 4 , data , nLen);

	if (m_sendQueue.GetKeepingSize() > 0) {
		if (false == m_sendQueue.Push(pdata, nLen)) 
		{
			delete[] pdata;
			_RequestDisConnect();

			m_netStreamCS.Leave();
			return 0;
		}
	} else {

		if (false == m_sendQueue.Push(pdata, nLen)) {
			delete[] pdata;
			_RequestDisConnect();

			m_netStreamCS.Leave();
			return 0;
		}

		if (false == _RequestSend()) {
			delete[] pdata;
			_RequestDisConnect();

			m_netStreamCS.Leave();
			return 0;
		}
	}

	delete[] pdata;
	
	m_netStreamCS.Leave();
	return len;
}

bool CNetStream::Init(SOCKET socket,DWORD ip,int sendQueueSize,int recvQueueSize)
{
	//CLock lock(&m_netStreamCS);

	m_netStreamCS.Enter();

	m_socket = socket;
	m_ip = ip;

	if (false == m_sendQueue.Create(sendQueueSize))
	{
		m_netStreamCS.Leave();
		return false;
	}

	if (false == m_recvQueue.Create(recvQueueSize))
	{
		m_netStreamCS.Leave();
		return false;
	}

	m_netStreamCS.Leave();
	return true;
}

bool CNetStream::OnRecvCompletion(CIOBuffer * IOBuffer,int size)
{
	//CLock lock(&m_netStreamCS);

	m_netStreamCS.Enter();

	assert(IOBuffer == &m_recvIO);
	assert(size > 0);

	if (true == _IsDisConnect())
	{
		m_netStreamCS.Leave();
		return false;
	}
	
	int nRecvSize = size;
	BYTE* pbRecvBuffer = m_recvIO.GetBuffer();

	if (m_bRecvFinish && nRecvSize >= 4)
	{
		m_bRecvFinish = FALSE;
		m_nTotalSize = *(DWORD*)(pbRecvBuffer) - 4;

		nRecvSize -= 4;
		pbRecvBuffer += 0x04;
			
		if(nRecvSize == 0)
		{
			m_recvIO.Clear();
			if (false == _RequestRecv()) {
				_RequestDisConnect();
				m_netStreamCS.Leave();
				return false;
			}
		}		
	}
	
	if (!m_bRecvFinish && nRecvSize > 0)
	{
		int result = m_recvQueue.Push((char *)pbRecvBuffer, nRecvSize);
		if (0 == result) {
			_RequestDisConnect();
			m_netStreamCS.Leave();
			return false;
		}

		m_recvIO.Clear();
		if (false == _RequestRecv()) {
			_RequestDisConnect();
			m_netStreamCS.Leave();
			return false;
		}

		if(m_recvQueue.GetKeepingSize() == m_nTotalSize)
			m_bRecvFinish = TRUE;
	}

	m_netStreamCS.Leave();
	return true;
}

bool CNetStream::OnSendCompletion(int size)
{
	//CLock lock(&m_netStreamCS);

	m_netStreamCS.Enter();

	assert(size > 0);

	if (true == _IsDisConnect())
	{
		m_netStreamCS.Leave();
		return false;
	}

	m_sendQueue.Remove(size);

	if (m_sendQueue.GetKeepingSize() > 0) 
	{
		m_sendIO.Clear();
		if (false == _RequestSend()) {
			_RequestDisConnect();

			m_netStreamCS.Leave();
			return false;
		}
	}
	if(m_bRetired&&m_sendQueue.GetKeepingSize()==0){
		_RequestDisConnect();
	}

	m_netStreamCS.Leave();
	return true;
}

SOCKET CNetStream::GetSocket()
{
	m_netStreamCS.Enter();
	//{
		SOCKET socket = m_socket;
	//}
	m_netStreamCS.Leave();
	return socket;
}

DWORD CNetStream::GetIP()
{
	m_netStreamCS.Enter();
	//{
		DWORD ip = m_ip;
	//}
	m_netStreamCS.Leave();
	return ip;
}

void CNetStream::RequestDisConnect()
{
	//CLock lock(&m_netStreamCS);

	m_netStreamCS.Enter();

	_RequestDisConnect();

	m_netStreamCS.Leave();
}

void CNetStream::RequestForceDisConnect()
{
	//CLock lock(&m_netStreamCS);
	m_netStreamCS.Enter();
	if (m_isDisConnectPending == FALSE) {

		shutdown(m_socket, SD_BOTH);
		m_isDisConnectPending = TRUE;
	}
	m_netStreamCS.Leave();
}

bool CNetStream::RequestRecv()
{
	//CLock lock(&m_netStreamCS);
	return _RequestRecv();
}

bool CNetStream::_IsDisConnect()
{
	if (TRUE == m_isDisConnectPending) {
		if (0 >= m_refCnt)
			return true;
		return false;
	} else if (0 >= m_refCnt) {
		return true;
	}

	return false;
}


int CNetStream::GetStreamCSCount()
{
	return m_netStreamCS.m_nRefCount;
}

void CNetStream::_RequestDisConnect()
{
	if (m_isDisConnectPending == FALSE) {

		shutdown(m_socket, SD_RECEIVE);
		m_isDisConnectPending = TRUE;
	}
	
}

bool CNetStream::_RequestRecv()
{
	m_netStreamCS.Enter();

	DWORD flags = 0;
	DWORD recved = 0;
	int result = WSARecv(m_socket, m_recvIO.GetWSABUF(), 1, &recved, &flags, (LPWSAOVERLAPPED)&m_recvIO, NULL);
	if (0 != result) {
		DWORD error = WSAGetLastError();
		if (error != ERROR_IO_PENDING) {
			printf("WSARecv Error (%d)\n", error);
			m_netStreamCS.Leave();
			return false;
		}
	}

	m_refCnt++;
	m_netStreamCS.Leave();
	return true;
}

bool CNetStream::_RequestSend()
{
	int len = m_sendQueue.GetKeepingSize();
	assert(len > 0);
	if (len > IO_BUFFERSIZE)
		len = IO_BUFFERSIZE - 1;

	DWORD sendBytes = m_sendQueue.Read((char *) m_sendIO.GetBuffer(), len);
	m_sendIO.SetBufferSize(sendBytes);
	
	int result = WSASend(m_socket, m_sendIO.GetWSABUF(), 1, &sendBytes, 0, (LPWSAOVERLAPPED)&m_sendIO, NULL);
	if (0 != result) {
		int error = WSAGetLastError();
		if (error != ERROR_IO_PENDING) {
			printf("WSASend Error (%d)\n", error);
			return false;
		}
	}

	m_refCnt++;

	return true;
}

bool CNetStream::IsDisConnect()
{
	return _IsDisConnect();
}

} //end namespace imcServerNet
