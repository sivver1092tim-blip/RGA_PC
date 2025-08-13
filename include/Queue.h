#ifndef __SIMPLEMSGQUEUE
#define __SIMPLEMSGQUEUE

//  TSimpleMsgQueue<T>
//  ------------------
//
//	Purpose:	CriticalSection으로 동기화된 큐
//				pop, push는 일반 큐와 동일하다
//	Note:		int 같은 간단한 데이타만 보내야 한다 (삽입, 삭제시 데이타는 copy 된다)

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
