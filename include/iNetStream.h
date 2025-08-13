#ifndef __NET_NETSTREAM
#define __NET_NETSTREAM

namespace  net {

enum {
	NETSTREAM_DisConnectED = -1
};

/** 
 *  @brief 연결된 소켓에 데이터를 전송하거나, 받는다
 */
class	INetStream {
public:
	virtual			~INetStream() {}
	/** 
	 *  @brief 읽어들일수 있다면 받아놓은 큐에서 읽어들인다.
	 *  @param data 읽은 바이트배열을 저장할 포인터
	 *  @param len 읽고자 원하는 크기.
	 *  @return virtual int 실제 읽어들인 크기.
	 */
	virtual	int		CheckRecv(char * data,int len) = 0;

	/** 
	 *  @brief 데이터를 Send Queue에 삽입한다. Send Queue의 데이터를 전송요청한다.
	 *  @param data 보낼 데이터의 포인터
	 *  @param len 보낼 데이터의 크기
	 *  @return virtual int 실제로 보내진 데이터의 크기
	 */
	virtual	int		Send(char * data,int len) = 0;

	/** 
	 *  @brief 접속종료를 요청한다.
	 *  @return virtual void
	 */
	virtual	void	RequestDisConnect() = 0;

	/** 
	 *  @brief 접속종료를 요청한다.
	 *  @return virtual void
	 */
	virtual	void	RequestForceDisConnect() = 0;

	/** 
	 *  @brief IP를 얻는다
	 *  @return virtual DWORD
	 */
	virtual DWORD	GetIP() = 0;

	/** 
	 *  @brief 접속이 종료되었는지 확인한다
	 *  @return virtual bool
	 */
	virtual bool	IsDisConnect() = 0;

	virtual int		GetStreamCSCount() = 0;
};

} 

#endif