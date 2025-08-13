#ifndef __ACCEPTOR
#define __ACCEPTOR

#include "Win32Thread.h"

namespace	net {

class CAcceptHandler;

/** 
 *  @brief 내부 스레드로 새로운 연결을 처리한다. 연결성공시 CAcceptHandler::OnAccept()를 통해 알린다.
 */
class	CAcceptor : public CThread {
public:
	/** 
	 *  @brief
	 *  @return 
	 */
							CAcceptor();

	/** 
	 *  @brief
	 *  @return virtual
	 */
	virtual					~CAcceptor();

	/** 
	 *  @brief 새로운 연결의 알림을 받는 클래스를 설정.
	 *  @param acceptHandler 새로운 연결의 알림을 받는 클래스의 포인터.
	 *  @return void
	 */
	void					Init(CAcceptHandler * acceptHandler,int port,int backlog = SOMAXCONN);

	/** 
	 *  @brief 연결요청에 대한 처리를 중지한다.
	 *  @param timeOut 중지에 대한 처리를 대기하는 시간.
	 *  @return virtual void
	 */
	virtual void			Stop(DWORD timeOut = INFINITE);

protected:
	/** 
	 *  @brief 포트를 바인딩 한다.
	 *  @return bool 바인딩의 성공여부.
	 */
	bool					Bind();


	/** 
	 *  @brief 연결요청을 받아들이기 시작한다.
	 *  @return bool 성공여부.
	 */
	bool					Listen();


	/** 
	 *  @brief 연결요청을 받아들이는 스레드 함수, 연결되면 CAcceptHandler::OnAccept()를 호출한다.
	 *  @return virtual int 종료이유. (-1 비정상종료, 0 정상종료)
	 */
	virtual int				Run();

protected:
	CAcceptHandler *		m_acceptHandler;
	int						m_port;
	SOCKET					m_socket;
	int						m_backlog;
};

} //end namespace imcServerNet

#endif
