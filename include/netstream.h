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
 *  @brief 연결된 소켓에 데이터를 전송하거나, 받는다
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
	 *  @brief 참조카운트를 증가시킨다.
	 *  @return void
	 */
	void					AddRef();

	/** 
	 *  @brief 참조카운트를 감소시킨다.
	 *  @return void
	 */
	void					DesRef();

	/** 
	 *  @brief 참조카운트를 얻는다.
	 *  @return int
	 */
	int						GetRef();

	/** 
	 *  @brief 읽어들일수 있다면 받아놓은 큐에서 읽어들인다.
	 *  @param data 읽은 바이트배열을 저장할 포인터
	 *  @param len 읽고자 원하는 크기.
	 *  @return int 실제 읽어들인 크기.
	 */
	int						CheckRecv(char * data,int len);

	/** 
	 *  @brief 데이터를 Send Queue에 삽입한다. Send Queue의 데이터를 전송요청한다.
	 *  @param data 보낼 데이터의 포인터
	 *  @param len 보낼 데이터의 크기
	 *  @return int 실제로 보내진 데이터의 크기
	 */
	int						Send(char * data,int len);

	/** 
	 *  @brief 소켓으로 스트림객체를 초기화한다.
	 *  @param socket 소켓
	 *  @param ip 소켓의 IP
	 *  @return void
	 */
	bool					Init(SOCKET socket,DWORD ip,int sendQueueSize,int recvQueueSize);

	/** 
	 *  @brief 수신 요청이 완료되었다.
	 *  @param ioBuffer 수신받은 데이터
	 *  @param size 수신받은 데이터의 크기 
	 *  @return bool 성공여부
	 */
	bool					OnRecvCompletion(CIOBuffer * IOBuffer,int size);

	/** 
	 *  @brief 전송이 완료되었다
	 *  @param size 전송이 완료된 바이트갯수
	 *  @return bool 성공여부
	 */
	bool					OnSendCompletion(int size);

	/** 
	 *  @brief 소켓을 얻는다.
	 *  @return SOCKET 소켓.
	 */
	SOCKET					GetSocket();

	void CloseSocket();

	/** 
	 *  @brief IP를 얻는다.
	 *  @return DWORD IP
	 */
	DWORD					GetIP();

	/** 
	 *  @brief 접속종료를 요청한다.
	 *  @return virtual void
	 */
	void					RequestDisConnect();

	/** 
	 *  @brief 접속종료를 요청한다.
	 *  @return virtual void
	 */
	void					RequestForceDisConnect();

	/** 
	 *  @brief 데이터 수신을 요청한다.
	 *  @return bool 성공여부.
	 */
	bool					RequestRecv();

	/** 
	 *  @brief 접속이 종료되었는지 확인한다
	 *  @return virtual bool
	 */
	bool					IsDisConnect();

private:
	/** 
	 *  @brief 접속중인지?
	 *  @return bool
	 */
	bool					_IsDisConnect();

	/** 
	 *  @brief 데이터 수신을 요청한다.
	 *  @return bool 성공여부.
	 */
	bool					_RequestRecv();

	/** 
	 *  @brief 센드큐의 데이터를 뽑아서, 전송요청한다.
	 *  @return bool 성공여부
	 */
	bool					_RequestSend();

	/** 
	 *  @brief 접속종료를 요청한다.
	 *  @return virtual void
	 */
	void					_RequestDisConnect();

	// 테스트 결과 위해
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
