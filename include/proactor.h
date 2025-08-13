#ifndef __PROACTOR
#define __PROACTOR

#include "Win32Thread.h"
#include "IOCP.h"
//#include "utlLinkedlist.h"

namespace	net {

class CIOWorker;
class CNetStream;

typedef std::list<CIOWorker *> IOWorkerList;

/** 
 *  @brief 입출력 작업용 스레드의 생성, 생성한 입출력스레드의 처리목록에 CNetStream의 등록, 삭제하는 클래스.
 */
class	CProactor {
public:	
	/** 
	 *  @brief
	 *  @return 
	 */
					CProactor();

	/** 
	 *  @brief
	 *  @return 
	 */
					~CProactor();

	/** 
	 *  @brief IOCP를 얻는다.
	 *  @return CIOCP *
	 */
	CIOCP *			GetIOCP();

	/** 
	 *  @brief 스트림클래스를 등록하여 작업스레드에 의해서 입출력 처리하도록 한다.
	 *  @param stream 작업스레드의 입출력 처리를 요청할 스트림클래스.
	 *  @return bool 성공여부
	 */
	bool			AddNetStream(CNetStream * stream);

	/** 
	 *  @brief 작업스레드에서 더이상 처리하지 않도록 작업목록에서 삭제한다.
	 *  @param stream 작업목록에서 삭제할 스트림클래스.
	 *  @return void
	 */
	void			RemoveNetStream(CNetStream * stream);

	/** 
	 *  @brief 스트림의 입출력을 처리할 작업스레드를 생성한다.
	 *  @param count 스레드의 갯수.
	 *  @return void
	 */
	bool			CreateIOWorkers(int count);

	/** 
	 *  @brief 모든 입출력 처리용 스레드의 작업을 중지한다.
	 *  @return void
	 */
	void			StopIOWorkers();

	/** 
	 *  @brief 인위적으로 작업처리완료를 IOCP에 통보한다.
	 *  @param netStream 어떤 스트림인가?
	 *  @param bytes ??
	 *  @param overlapped 작업의 내용
	 *  @return void
	 */
	void			PostStatus(CNetStream * stream,DWORD transfered,OVERLAPPED * overlapped);
	
	/** 
	 *  @brief 스레드 종료, 객체 소멸..
	 */
	void			Destroy();

private:
	CIOCP			m_IOCP;
	IOWorkerList	m_IOWorkers;
};

} //end namespace imcServerNet

#endif