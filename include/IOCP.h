#ifndef __IOCP
#define __IOCP

namespace  net {

/** 
 *  @brief �񵿱� ������� ����ϰų�, ����� �뺸�޴� Ŭ����.
 */
class	CIOCP {
public:
	/** 
	 *  @brief �⺻ ����� ��Ʈ�� �����Ѵ�.
	 *  @param concurrentThread �������Ʈ ������ �����尹��.
	 *  @return 
	 */
			CIOCP(int concurrentThread = 0);

	/** 
	 *  @brief
	 *  @return 
	 */
			~CIOCP();

	/** 
	 *  @brief �⺻ ����� ��Ʈ�� ���ο� ��Ʈ�� �߰��Ѵ�.
	 *  @param handle ���� ����� ��Ʈ�� �ڵ�.
	 *  @param completionKey �Ϸ�Ű.
	 *  @return bool ��������.
	 */
	bool	CreatePort(HANDLE handle,DWORD completionKey);

	/** 
	 *  @brief �������Ʈ�� ������ �ϷḦ �뺸�Ѵ�.
	 *  @param completionKey �Ϸ�Ű.
	 *  @param transferredBytes ���۵Ǿ��� ����Ʈ�� ũ��.
	 *  @param overlapped ������.
	 *  @return void 
	 */
	void	PostStatus(DWORD completionKey,DWORD transferredBytes,OVERLAPPED * overlapped = NULL);

	/** 
	 *  @brief ����� ����� ��´�.
	 *  @param completionKey �Ϸ�Ű.
	 *  @param transferredBytes ���۵Ǿ��� ����Ʈ�� ũ��.
	 *  @param overlapped ������
	 *  @param timeOut ����� �������� ��ٸ��� �ð�.
	 *  @return bool ��������.
	 */
	bool	GetStatus(DWORD * completionKey,DWORD * transferredBytes,OVERLAPPED ** overlapped,DWORD timeOut = INFINITE);

private:
	HANDLE	m_IOCP;
};

} // end namespace imcServerNet

#endif
