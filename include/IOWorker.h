#ifndef __IOWORKER
#define __IOWORKER

#include "Win32Thread.h"

namespace	net {

class CIOCP;

/** 
 *  @brief CIOCP를 포함하며, 소켓 입출력에 대한 처리를 담당하는 스레드 클래스
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
	 *  @brief IOCP핸들을 설정한다.
	 *  @param iocp IOCP핸들 
	 *  @return void
	 */
	void		SetIOCP(CIOCP * IOCP);

	/** 
	 *  @brief GetQueuedCompletionStatus() 호출의 애러에 대한 정보를 출력한다.
	 *  @return void
	 */
	void		PrintIOCPError();

private:
	/** 
	 *  @brief 소켓 입출력처리를 위한 스레드 함수.
	 *  @return virtual int 종료이유. (0 정상종료)
	 */
	virtual int	Run();

private:
	CIOCP *		m_IOCP;
};

} //end namespace imcServerNet

#endif