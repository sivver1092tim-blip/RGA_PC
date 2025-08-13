#ifndef __ACCEPTHANDLER
#define __ACCEPTHANDLER

namespace	net {

/** 
 *  @brief ���ο� ������ �뺸�޴� Ŭ����
 */
class	CAcceptHandler {
public:
	/** 
	 *  @brief
	 *  @return virtual
	 */
	virtual			~CAcceptHandler() {};

	/** 
	 *  @brief ���ӿ� �����Ͽ��� ��� ȣ��ȴ�.
	 *  @param socket ���ӵ� ����
	 *  @param ip ���ӵ� ������ IP
	 *  @return virtual void
	 */
	virtual void	OnAccept(SOCKET socket,DWORD ip) = 0;
};

} //end namespace imcServerNet

#endif
