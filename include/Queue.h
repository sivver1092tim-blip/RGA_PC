#ifndef __SIMPLEMSGQUEUE
#define __SIMPLEMSGQUEUE

//  TSimpleMsgQueue<T>
//  ------------------
//
//	Purpose:	CriticalSection���� ����ȭ�� ť
//				pop, push�� �Ϲ� ť�� �����ϴ�
//	Note:		int ���� ������ ����Ÿ�� ������ �Ѵ� (����, ������ ����Ÿ�� copy �ȴ�)

#include "Win32Thread.h"

namespace net {

template <class T>			
class	TSimpleMsgQueue {
public:
			TSimpleMsgQueue() { m_size = 0; }
			~TSimpleMsgQueue() {}
	void	Push(const T &data)		//	enqueue copied data to queue
	{
		imc::CLock	lock(&m_CS);	//  lock
		m_size++;
		m_queue.push(data);		
	}
	bool	Pop(T *dest)			//	data is copied to dest and removed from queue
	{
		imc::CLock	lock(&m_CS);	//  lock
		
		if (m_queue.empty()) 
			return	false;
		m_size--;	
		*dest = m_queue.front();
		m_queue.pop();
		return true;
	}
	int		GetSize() 
	{ 
		imc::CLock	lock(&m_CS);	//  lock
		return m_size; 
	}

private:
	std::queue<T>		m_queue;
	int					m_size;
	imc::CCriticalSection	m_CS;
};

}

#endif
