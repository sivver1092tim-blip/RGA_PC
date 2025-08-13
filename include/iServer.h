#ifndef __ISERVER
#define __ISERVER


#define SENDQUEUE_SIZE 8192 
#define	RECVQUEUE_SIZE 8192 


namespace	net {

class INetStream;
class CAcceptHandler;

/** 
*  @brief CProactor에 입출력 처리용 스레드를 활성화 시키고, 등록되어진 CAcceptHandler들의 처리를 시작한다.
*  @return virtual int 종료이유.
*/
int	Start();

/** 
*  @brief 입출력 처리를 중지한다.
*  @return virtual void
*/
void Stop();

/** 
*  @brief 사용자에 의해 작성된 CAcceptHandler와 포트를 받아 새로운 연결요청을 허락한다.
*  @param acceptHandler 연결된 소켓은 CAcceptHandler::OnAccept()에 의해 알려진다.
*  @param port 바인딩할 포트
*  @return virtual void
*/
bool AddAcceptHandler(CAcceptHandler * acceptHandler,int port);
	
/** 
*  @brief CAcceptHandler::OnAccept()에 의해 연결이 허락된 소켓에 대해서 새로운 스트림 객체를 생성한다.
*  @param socket 스트림과 함께할 소켓
*  @param ip 연결된 소켓의 IP주소
*  @return virtual INetStream * 새롭게 만들어진 스트림.
*/
INetStream*	CreateNetStream(SOCKET socket,DWORD ip,int sendQueueSize = SENDQUEUE_SIZE,int recvQueueSize = RECVQUEUE_SIZE);

/** 
*  @brief 스트림을 파괴한다.
*  @param stream 파괴할 스트림.
*  @return virtual void
*/
void DestroyNetStream(INetStream * stream);

/** 
*  @brief 네트웍관련 객체들의 정리
*/
void Destroy();

/** 
 *  @brief 윈속의 초기화.
 *  @return bool 성공여부
 */
bool InitWinsock();

/** 
 *  @brief 원속의 파괴.
 *  @return void
 */
void ExitWinsock();

/** 
 *  @brief DWORD 형 IP 를 문자열 IP 로 변환해준다
 *  @return void
 */
void GetIPFromDWORD(char * str, DWORD ip);

}	// namespace imcServerNet

#endif	// __IMCSERVER
