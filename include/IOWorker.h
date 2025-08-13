#ifndef __IOWORKER
#define __IOWORKER

#include "Win32Thread.h"

namespace	net {

class CIOCP;

/** 
 *  @brief CIOCP�� �����ϸ�, ���� ����¿� ���� ó���� ����ϴ� ������ Ŭ����
 */
class	CIOWorker : public CThread {
public:
	/** 
	 *  @brief
	 */
				CIOWorker();

	/** 
	 *  @brief
	 *  @return 
	 */
				~CIOWorker();

	/** 
	 *  @brief IOCP�ڵ��� �����Ѵ�.
	 *  @param iocp IOCP�ڵ� 
	 *  @return void
	 */
	void		SetIOCP(CIOCP * IOCP);

	/** 
	 *  @brief GetQueuedCompletionStatus() ȣ���� �ַ��� ���� ������ ����Ѵ�.
	 *  @return void
	 */
	void		PrintIOCPError();

private:
	/** 
	 *  @brief ���� �����ó���� ���� ������ �Լ�.
	 *  @return virtual int ��������. (0 ��������)
	 */
	virtual int	Run();

private:
	CIOCP *		m_IOCP;
};

} //end namespace imcServerNet

#endif