#ifndef __WIN32THREAD
#define __WIN32THREAD

//  	  CThread 
//  	  -------   			   
//  	  History:  	 2003. 7. 23		kjs		최초 작성, 구현
//

#include <stdio.h>
#include <process.h>
#include <winbase.h>

void LogDump(BYTE nType, DWORD dwAddr);
/**
 @brief Critical section
 */
class	CCriticalSection {
public:
	CCriticalSection()
	{
		m_nRefCount = 0;
		::InitializeCriticalSection(&m_cs);
	}
	~CCriticalSection()
	{
		if(m_nRefCount > 0)
			printf("Critical Delete Error: %d\n", m_nRefCount);

		::DeleteCriticalSection(&m_cs);
	}
	void Enter()
	{
		::EnterCriticalSection(&m_cs);
		
		m_nRefCount ++;
	}
	void Leave()
	{
		m_nRefCount --;
		::LeaveCriticalSection(&m_cs);
	}

	void EnterCriticalSection()
	{
		::EnterCriticalSection(&m_cs);
		
		m_nRefCount ++;
	}
	void LeaveCriticalSection()
	{
		m_nRefCount --;
		
		::LeaveCriticalSection(&m_cs);
	}

	// criticalsection 걸수 없는 상태면 FALSE 리턴
	// 이 함수는 NT, 2000이상에서만 사용할 수 있습니다. 
	// _WIN32_WINNT=0x0500 프로젝트세팅에 추가 바람 (C++ - preprocess)
#ifdef _WIN32_WINNT == 0X0500
	BOOL TryEnter()
	{
		LogDump(5, (DWORD)&m_cs);
		return ::TryEnterCriticalSection(&m_cs);
	}
#endif

private:
	CRITICAL_SECTION	m_cs;
public:
	int					m_nRefCount;
};


/**
 @brief CriticalSection Lock version
 */
class	CLock {
public:
	CLock(CCriticalSection * cs)
	{
		m_cs = cs; m_cs->Enter();
	}
	~CLock()
	{
		m_cs->Leave();
	}

private:
	CCriticalSection *	m_cs;
};


/**
 @brief CriticalSection Try lock
 */
#ifdef _WIN32_WINNT == 0X0500
class	CTryLock {
public:
	CTryLock(CCriticalSection * cs)
	{
		m_cs = cs; m_bIsLock = m_cs->TryEnter();
	}
	~CTryLock()
	{
		if (m_bIsLock)
			m_cs->Leave();
	}

	BOOL IsLocked()
	{
		return !m_bIsLock;
	}

protected:
	CCriticalSection *	m_cs;
	BOOL				m_bIsLock;
};

#endif
/**
 @brief thread class
 */
class	CThread {
public:
	CThread()
	{
		m_handle = INVALID_HANDLE_VALUE; 
		m_stop = false;
	}

	virtual ~CThread()
	{
		if (m_handle != INVALID_HANDLE_VALUE) {
			DWORD	exitCode;
			GetExitCodeThread(m_handle, &exitCode);
			if (exitCode == STILL_ACTIVE)
				Stop(2000);
		}
	}

	HANDLE GetHandle()
	{
		return m_handle;
	}

	virtual bool Start()
	{
		if (m_handle == INVALID_HANDLE_VALUE) {
			m_handle = (HANDLE) ::_beginthread(ThreadFunction, 0, (void *)this);	
			//			printf("[%d] thread start\n", m_handle);		
			return (m_handle != INVALID_HANDLE_VALUE);
		} else
			return false;
	}

	virtual void Stop(DWORD time = INFINITE)
	{
		if (m_handle == INVALID_HANDLE_VALUE)
			return;

		m_stop = true;
		if (WAIT_OBJECT_0 == ::WaitForSingleObject(m_handle, time)) {
			//			printf("[%d] thread stop\n", m_handle);
			m_handle = INVALID_HANDLE_VALUE;
			m_stop = false;
		} else {
			//			printf("[%d] thread nonsignal.\n", m_handle);
		}
	}

	BOOL		SetPriority(int priority)
	{
		return SetThreadPriority(m_handle, priority);
	}

protected:
	volatile bool	m_stop;
	HANDLE			m_handle;
	static void __cdecl ThreadFunction(void * p)
	{
		CThread *	thread = (CThread *) p;		
		if (thread)
			thread->Run();
	}
	virtual int	Run() = 0;
};

#endif
