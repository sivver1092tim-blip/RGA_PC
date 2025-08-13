#ifndef __LOGGER__
#define __LOGGER__

//	Logger
//	--------
//
//	History:	2004.1.15	raiders		¿€º∫ 
//				

namespace net {

struct	LOG_INFO_BASE {
	UINT	type;
};


template <class T>
class	CLogger {
public:
			CLogger();
	virtual	~CLogger();

	void	Init(int threadCount); 
	void	Log(int severity, UINT type, ...);
	void	SetSeverity(int severity);

protected:
	virtual	LOG_INFO_BASE *		CreateLog(UINT type, va_list& marker) = 0;

private:
	imcDB::CDBProxy <T>		m_proxy;			
	int						m_key;
	int						m_threadCount;
	int						m_severity;
};


template <class T>
CLogger<T>::CLogger() 
{
	m_key			= 0;
	m_threadCount	= 0;
	m_severity		= 0;
}

template <class T>
CLogger<T>::~CLogger() 
{
}

template <class T>
void CLogger<T>::SetSeverity(int severity)
{
	m_severity = severity;
}

template <class T>
void CLogger<T>::Init(int threadCount)
{
	m_proxy.Start(threadCount);
	m_threadCount = threadCount;
}

template <class T>
void CLogger<T>::Log(int severity, UINT type, ...)
{
	if (severity < m_severity)
		return;

	LOG_INFO_BASE *	info = NULL;

	va_list		marker;
	va_start(marker, type);    
	
	info = CreateLog(type, marker);

	va_end(marker);              

	if (info) {
		int		key = m_key++;
		if (key > m_threadCount)
			key = 0;

		m_proxy.PostRequest(key, (void *)info);
	}
}

} // 

#endif // __LOGGER__