#ifndef __ACCEPTOR
#define __ACCEPTOR

#include "Win32Thread.h"

namespace	net {

class CAcceptHandler;

/** 
 *  @brief ���� ������� ���ο� ������ ó���Ѵ�. ���Ἲ���� CAcceptHandler::OnAccept()�� ���� �˸���.
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
	 *  @brief ���ο� ������ �˸��� �޴� Ŭ������ ����.
	 *  @param acceptHandler ���ο� ������ �˸��� �޴� Ŭ������ ������.
	 *  @return void
	 */
	void					Init(CAcceptHandler * acceptHandler,int port,int backlog = SOMAXCONN);

	/** 
	 *  @brief �����û�� ���� ó���� �����Ѵ�.
	 *  @param timeOut ������ ���� ó���� ����ϴ� �ð�.
	 *  @return virtual void
	 */
	virtual void			Stop(DWORD timeOut = INFINITE);

protected:
	/** 
	 *  @brief ��Ʈ�� ���ε� �Ѵ�.
	 *  @return bool ���ε��� ��������.
	 */
	bool					Bind();


	/** 
	 *  @brief �����û�� �޾Ƶ��̱� �����Ѵ�.
	 *  @return bool ��������.
	 */
	bool					Listen();


	/** 
	 *  @brief �����û�� �޾Ƶ��̴� ������ �Լ�, ����Ǹ� CAcceptHandler::OnAccept()�� ȣ���Ѵ�.
	 *  @return virtual int ��������. (-1 ����������, 0 ��������)
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
