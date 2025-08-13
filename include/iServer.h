#ifndef __ISERVER
#define __ISERVER


#define SENDQUEUE_SIZE 8192 
#define	RECVQUEUE_SIZE 8192 


namespace	net {

class INetStream;
class CAcceptHandler;

/** 
*  @brief CProactor�� ����� ó���� �����带 Ȱ��ȭ ��Ű��, ��ϵǾ��� CAcceptHandler���� ó���� �����Ѵ�.
*  @return virtual int ��������.
*/
int	Start();

/** 
*  @brief ����� ó���� �����Ѵ�.
*  @return virtual void
*/
void Stop();

/** 
*  @brief ����ڿ� ���� �ۼ��� CAcceptHandler�� ��Ʈ�� �޾� ���ο� �����û�� ����Ѵ�.
*  @param acceptHandler ����� ������ CAcceptHandler::OnAccept()�� ���� �˷�����.
*  @param port ���ε��� ��Ʈ
*  @return virtual void
*/
bool AddAcceptHandler(CAcceptHandler * acceptHandler,int port);
	
/** 
*  @brief CAcceptHandler::OnAccept()�� ���� ������ ����� ���Ͽ� ���ؼ� ���ο� ��Ʈ�� ��ü�� �����Ѵ�.
*  @param socket ��Ʈ���� �Բ��� ����
*  @param ip ����� ������ IP�ּ�
*  @return virtual INetStream * ���Ӱ� ������� ��Ʈ��.
*/
INetStream*	CreateNetStream(SOCKET socket,DWORD ip,int sendQueueSize = SENDQUEUE_SIZE,int recvQueueSize = RECVQUEUE_SIZE);

/** 
*  @brief ��Ʈ���� �ı��Ѵ�.
*  @param stream �ı��� ��Ʈ��.
*  @return virtual void
*/
void DestroyNetStream(INetStream * stream);

/** 
*  @brief ��Ʈ������ ��ü���� ����
*/
void Destroy();

/** 
 *  @brief ������ �ʱ�ȭ.
 *  @return bool ��������
 */
bool InitWinsock();

/** 
 *  @brief ������ �ı�.
 *  @return void
 */
void ExitWinsock();

/** 
 *  @brief DWORD �� IP �� ���ڿ� IP �� ��ȯ���ش�
 *  @return void
 */
void GetIPFromDWORD(char * str, DWORD ip);

}	// namespace imcServerNet

#endif	// __IMCSERVER
