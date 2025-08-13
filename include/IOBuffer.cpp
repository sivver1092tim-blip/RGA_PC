#include "stdafx.h"
#include "IOBuffer.h"


namespace	net {

CIOBuffer::CIOBuffer()
{
	memset(&m_overlapped, 0, sizeof(m_overlapped));
	m_workType = 0;
	memset(&m_wsaBuf, 0, sizeof(m_wsaBuf));
	m_bufferSize = 0;
	memset(m_buffer, 0, sizeof(m_buffer));
	m_wsaBuf.buf = (char*)m_buffer;
	m_wsaBuf.len = IO_BUFFERSIZE;
}

CIOBuffer::~CIOBuffer()
{
}

void CIOBuffer::Clear()
{
	memset(&m_overlapped, 0, sizeof(m_overlapped));
}

WSAOVERLAPPED * CIOBuffer::GetWSAOVERLAPPED()
{
	return &m_overlapped;
}

WSABUF * CIOBuffer::GetWSABUF()
{
	return &m_wsaBuf;
}

DWORD CIOBuffer::GetWorkType()
{
	return m_workType;
}

void CIOBuffer::SetWorkType(DWORD workType)
{
	m_workType = workType;
}

BYTE * CIOBuffer::GetBuffer()
{
	return m_buffer;
}

void CIOBuffer::SetBufferSize(int size)
{
	m_wsaBuf.len = m_bufferSize = size;
}

} //end namespace imcServerNet