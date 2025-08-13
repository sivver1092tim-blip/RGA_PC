#ifndef __NETSTREAM
#define __NETSTREAM

//#include "mempool.h"
#include "Win32Thread.h"
#include "iNetStream.h"
// #include "imcDefaultstruct.h"
#include "IOBuffer.h"
#include "CircleQueue.h"

namespace	net {

/** 
 *  @brief ����� ���Ͽ� �����͸� �����ϰų�, �޴´�
 */
class	CNetStream : public net::INetStream {
public:
	/** 
	 *  @brief
	 *  @return 
	 */
							CNetStream();

	/** 
	 *  @brief
	 *  @return virtual
	 */
	virtual					~CNetStream();

	/** 
	 *  @brief ����ī��Ʈ�� ������Ų��.
	 *  @return void
	 */
	void					AddRef();

	/** 
	 *  @brief ����ī��Ʈ�� ���ҽ�Ų��.
	 *  @return void
	 */
	void					DesRef();

	/** 
	 *  @brief ����ī��Ʈ�� ��´�.
	 *  @return int
	 */
	int						GetRef();

	/** 
	 *  @brief �о���ϼ� �ִٸ� �޾Ƴ��� ť���� �о���δ�.
	 *  @param data ���� ����Ʈ�迭�� ������ ������
	 *  @param len �а��� ���ϴ� ũ��.
	 *  @return int ���� �о���� ũ��.
	 */
	int						CheckRecv(char * data,int len);

	/** 
	 *  @brief �����͸� Send Queue�� �����Ѵ�. Send Queue�� �����͸� ���ۿ�û�Ѵ�.
	 *  @param data ���� �������� ������
	 *  @param len ���� �������� ũ��
	 *  @return int ������ ������ �������� ũ��
	 */
	int						Send(char * data,int len);

	/** 
	 *  @brief �������� ��Ʈ����ü�� �ʱ�ȭ�Ѵ�.
	 *  @param socket ����
	 *  @param ip ������ IP
	 *  @return void
	 */
	bool					Init(SOCKET socket,DWORD ip,int sendQueueSize,int recvQueueSize);

	/** 
	 *  @brief ���� ��û�� �Ϸ�Ǿ���.
	 *  @param ioBuffer ���Ź��� ������
	 *  @param size ���Ź��� �������� ũ�� 
	 *  @return bool ��������
	 */
	bool					OnRecvCompletion(CIOBuffer * IOBuffer,int size);

	/** 
	 *  @brief ������ �Ϸ�Ǿ���
	 *  @param size ������ �Ϸ�� ����Ʈ����
	 *  @return bool ��������
	 */
	bool					OnSendCompletion(int size);

	/** 
	 *  @brief ������ ��´�.
	 *  @return SOCKET ����.
	 */
	SOCKET					GetSocket();

	void CloseSocket();

	/** 
	 *  @brief IP�� ��´�.
	 *  @return DWORD IP
	 */
	DWORD					GetIP();

	/** 
	 *  @brief �������Ḧ ��û�Ѵ�.
	 *  @return virtual void
	 */
	void					RequestDisConnect();

	/** 
	 *  @brief �������Ḧ ��û�Ѵ�.
	 *  @return virtual void
	 */
	void					RequestForceDisConnect();

	/** 
	 *  @brief ������ ������ ��û�Ѵ�.
	 *  @return bool ��������.
	 */
	bool					RequestRecv();

	/** 
	 *  @brief ������ ����Ǿ����� Ȯ���Ѵ�
	 *  @return virtual bool
	 */
	bool					IsDisConnect();

private:
	/** 
	 *  @brief ����������?
	 *  @return bool
	 */
	bool					_IsDisConnect();

	/** 
	 *  @brief ������ ������ ��û�Ѵ�.
	 *  @return bool ��������.
	 */
	bool					_RequestRecv();

	/** 
	 *  @brief ����ť�� �����͸� �̾Ƽ�, ���ۿ�û�Ѵ�.
	 *  @return bool ��������
	 */
	bool					_RequestSend();

	/** 
	 *  @brief �������Ḧ ��û�Ѵ�.
	 *  @return virtual void
	 */
	void					_RequestDisConnect();

	// �׽�Ʈ ��� ����
	int						GetStreamCSCount();

private:
	bool					m_bRetired;
	LONG					m_refCnt;
	BOOL					m_isDisConnectPending;
	CIOBuffer				m_recvIO;
	CIOBuffer				m_sendIO;
	CCircleQueue			m_sendQueue;
	CCircleQueue			m_recvQueue;
	DWORD					m_ip;
	SOCKET					m_socket;
	int						m_nTotalSize;
	BOOL					m_bRecvFinish;
	CCriticalSection		m_netStreamCS;
};

} //end namespace imcServerNet

#endif
