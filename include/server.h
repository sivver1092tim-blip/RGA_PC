#ifndef __SERVER
#define __SERVER

#include "iServer.h"
#include "Acceptor.h"
//#include "UtlLinkedlist.h"
#include "Proactor.h"

namespace	net {

class CAcceptHandler;

typedef std::list<CAcceptor *> ACCEPTORS;

/** 
 *  @brief ���ο� ������ ó���� CAcceptHandler�� ���, �������� ���ο� ��Ʈ���� ����, �������� ����ϴ� Ŭ����.
 */
class	CServer {
public:
	/** 
	 *  @brief
	 *  @return 
	 */
					CServer() {};

	/** 
	 *  @brief
	 *  @return virtual
	 */
					~CServer() {};

	/** 
	 *  @brief CProactor�� ����� ó���� �����带 Ȱ��ȭ ��Ű��, ��ϵǾ��� CAcceptHandler���� ó���� �����Ѵ�.
	 *  @return virtual int ��������.
	 */
	int				Start();

	/** 
	 *  @brief ����� ó���� �����Ѵ�.
	 *  @return virtual void
	 */
	void			Stop();

	/** 
	 *  @brief ����ڿ� ���� �ۼ��� CAcceptHandler�� ��Ʈ�� �޾� ���ο� �����û�� ����Ѵ�.
	 *  @param acceptHandler ����� ������ CAcceptHandler::OnAccept()�� ���� �˷�����.
	 *  @param port ���ε��� ��Ʈ
	 *  @return virtual void
	 */
		bool		AddAcceptHandler(CAcceptHandler * acceptHandler,int port);

	/** 
	 *  @brief CAcceptHandler::OnAccept()�� ���� ������ ����� ���Ͽ� ���ؼ� ���ο� ��Ʈ�� ��ü�� �����Ѵ�.
	 *  @param socket ��Ʈ���� �Բ��� ����
	 *  @param ip ����� ������ IP�ּ�
	 *  @return virtual INetStream * ���Ӱ� ������� ��Ʈ��.
	 */
	INetStream *	CreateNetStream(SOCKET socket,DWORD ip,int sendQueueSize = SENDQUEUE_SIZE,int recvQueueSize = RECVQUEUE_SIZE);

	/** 
	 *  @brief ��Ʈ���� �ı��Ѵ�.
	 *  @param stream �ı��� ��Ʈ��.
	 *  @return virtual void
	 */
	void			DestroyNetStream(INetStream * stream);
	
	/** 
	 *  @brief ��Ʈ������ ��ü���� ����
	 */
	void			Destroy();

private:
	ACCEPTORS		m_acceptors;
	CProactor		m_proactor;

};

} //end namespace imcServerNet

#endif
