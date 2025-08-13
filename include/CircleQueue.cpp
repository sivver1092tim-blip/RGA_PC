#include "stdafx.h"
#include "CircleQueue.h"

//#include "imcmemdbgon.h"

namespace	net {

CCircleQueue::CCircleQueue()
{
	m_size = 0;
	m_buffer = NULL;
	m_current = 0;
	m_head = 0;
	m_tail = 0;
}

CCircleQueue::CCircleQueue(int size)
{
	m_size = 0;
	m_buffer = NULL;
	m_current = 0;
	m_head = 0;
	m_tail = 0;

	Create(size);
}

CCircleQueue::~CCircleQueue()
{
	Destroy();
}

bool CCircleQueue::Create(int size)
{
	Destroy();

	m_buffer = new char[size];
	if (NULL == m_buffer)
		return false;

	memset(m_buffer, 0, size);
	m_size = size;

	return true;
}

void CCircleQueue::Destroy()
{
	if (NULL != m_buffer)
		delete[] m_buffer;

	m_size = 0;
	m_buffer = NULL;
	m_current = 0;
	m_head = 0;
	m_tail = 0;
}

bool CCircleQueue::Push(char * data,int len)
{
	assert(m_buffer != NULL);
	assert(len > 0);	

	if (true == IsOverFlow(len))
		return false;

	int len1 = m_size - m_tail;
	if (len > len1) {
		int len2 = len - len1;
		memcpy(m_buffer + m_tail, data, len1);
		memcpy(m_buffer, data + len1, len2);
		m_tail = len2;
	} else {
		memcpy(m_buffer + m_tail, data, len);
		m_tail += len;
	}
	m_current += len;
	return true;
}

int CCircleQueue::Pop(char * data)
{
	assert(m_buffer != NULL);

	int keeping = GetKeepingSize();
	if(0 == keeping)
		return 0;

	if(!data)
		return keeping;

	int len1 = m_size - m_head;
	if (len1 < keeping) {
		int len2 = keeping - len1;
		memcpy(data, m_buffer + m_head, len1);
		memcpy(data + len1, m_buffer, len2);
		m_head = len2;
	} else {
		memcpy(data, m_buffer + m_head, keeping);
		m_head += keeping;
	}
	m_current -= keeping;
	if (m_head == m_tail) {
		m_head = 0; 
		m_tail = 0;
	}

	return keeping;
}

int CCircleQueue::Remove(int len)
{
	assert(m_buffer != NULL);
	assert(len > 0);

	int keeping = GetKeepingSize();
	if(0 == keeping)
		return 0;

	if (keeping < len)
		len = keeping;

	int len1 = m_size - m_head;

	if (len1 < len) {
		m_head = len - len1;
	} else {
		m_head += len;
	}
	m_current -= len;
	if (m_head == m_tail) {
		m_head = 0; 
		m_tail = 0;
	}
	return len;
}

int CCircleQueue::Read(char * data,int len) const
{
	assert(m_buffer != NULL);
	assert(len > 0);

	int keeping = GetKeepingSize();
	if(0 == keeping)
		return 0;

	if (keeping < len)
		len = keeping;

	int len1 = m_size - m_head;
	if (len1 < len) {
		int len2 = len - len1;
		memcpy(data, m_buffer + m_head, len1);
		memcpy(data + len1, m_buffer, len2);
	} else {
		memcpy(data, m_buffer + m_head, len);
	}
	return len;
}

int CCircleQueue::GetSize() const
{
	assert(m_buffer != NULL);
	return m_size;
}

int CCircleQueue::GetKeepingSize() const
{
	assert(m_buffer != NULL);

	return m_current;

	/*if (m_tail >= m_head)
		return m_tail - m_head;

	return (m_size - m_head) + m_tail;*/
}

int CCircleQueue::GetRemainSize() const
{
	assert(m_buffer != NULL);
	return m_size - GetKeepingSize();
}

bool CCircleQueue::IsOverFlow(int len)
{
	if ((m_current + len) > m_size)
		return true;
	return false;
}

} //end namespace imcServerNet