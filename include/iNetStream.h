#ifndef __NET_NETSTREAM
#define __NET_NETSTREAM

namespace  net {

enum {
	NETSTREAM_DisConnectED = -1
};

/** 
 *  @brief ����� ���Ͽ� �����͸� �����ϰų�, �޴´�
 */
class	INetStream {
public:
	virtual			~INetStream() {}
	/** 
	 *  @brief �о���ϼ� �ִٸ� �޾Ƴ��� ť���� �о���δ�.
	 *  @param data ���� ����Ʈ�迭�� ������ ������
	 *  @param len �а��� ���ϴ� ũ��.
	 *  @return virtual int ���� �о���� ũ��.
	 */
	virtual	int		CheckRecv(char * data,int len) = 0;

	/** 
	 *  @brief �����͸� Send Queue�� �����Ѵ�. Send Queue�� �����͸� ���ۿ�û�Ѵ�.
	 *  @param data ���� �������� ������
	 *  @param len ���� �������� ũ��
	 *  @return virtual int ������ ������ �������� ũ��
	 */
	virtual	int		Send(char * data,int len) = 0;

	/** 
	 *  @brief �������Ḧ ��û�Ѵ�.
	 *  @return virtual void
	 */
	virtual	void	RequestDisConnect() = 0;

	/** 
	 *  @brief �������Ḧ ��û�Ѵ�.
	 *  @return virtual void
	 */
	virtual	void	RequestForceDisConnect() = 0;

	/** 
	 *  @brief IP�� ��´�
	 *  @return virtual DWORD
	 */
	virtual DWORD	GetIP() = 0;

	/** 
	 *  @brief ������ ����Ǿ����� Ȯ���Ѵ�
	 *  @return virtual bool
	 */
	virtual bool	IsDisConnect() = 0;

	virtual int		GetStreamCSCount() = 0;
};

} 

#endif