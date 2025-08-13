#ifndef __IOCP
#define __IOCP

namespace  net {

/** 
 *  @brief 비동기 입출력을 등록하거나, 결과를 통보받는 클래스.
 */
class	CIOCP {
public:
	/** 
	 *  @brief 기본 입출력 포트를 생성한다.
	 *  @param concurrentThread 입출력포트 내부의 스레드갯수.
	 *  @return 
	 */
			CIOCP(int concurrentThread = 0);

	/** 
	 *  @brief
	 *  @return 
	 */
			~CIOCP();

	/** 
	 *  @brief 기본 입출력 포트에 새로운 포트를 추가한다.
	 *  @param handle 새로 등록할 포트의 핸들.
	 *  @param completionKey 완료키.
	 *  @return bool 성공여부.
	 */
	bool	CreatePort(HANDLE handle,DWORD completionKey);

	/** 
	 *  @brief 입출력포트에 강제로 완료를 통보한다.
	 *  @param completionKey 완료키.
	 *  @param transferredBytes 전송되어진 바이트의 크기.
	 *  @param overlapped 오버랩.
	 *  @return void 
	 */
	void	PostStatus(DWORD completionKey,DWORD transferredBytes,OVERLAPPED * overlapped = NULL);

	/** 
	 *  @brief 입출력 결과를 얻는다.
	 *  @param completionKey 완료키.
	 *  @param transferredBytes 전송되어진 바이트의 크기.
	 *  @param overlapped 오버랩
	 *  @param timeOut 결과를 얻기까지의 기다리는 시간.
	 *  @return bool 성공여부.
	 */
	bool	GetStatus(DWORD * completionKey,DWORD * transferredBytes,OVERLAPPED ** overlapped,DWORD timeOut = INFINITE);

private:
	HANDLE	m_IOCP;
};

} // end namespace imcServerNet

#endif
