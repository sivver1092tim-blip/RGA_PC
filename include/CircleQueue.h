#ifndef __CIRCLEQUEUE
#define __CIRCLEQUEUE

namespace	net {

/** 
 *  @brief 바이트배열을 담는 원형큐
 */
class	CCircleQueue {
public:
	/** 
	 *  @brief
	 *  @return 
	 */
			CCircleQueue();

	/** 
	 *  @brief 큐의 생성
	 *  @param size 큐의크기 
	 *  @return 
	 */
			CCircleQueue(int size);

	/** 
	 *  @brief
	 *  @return 
	 */
			~CCircleQueue();

	/** 
	 *  @brief 큐의 생성
	 *  @param size 큐의 크기
	 *  @return void
	 */
	bool	Create(int size);

	/** 
	 *  @brief 큐의 삭제
	 *  @return void
	 */
	void	Destroy();

	/** 
	 *  @brief 큐에 바이트배열 추가
	 *  @param data 넣고자 하는 바이트배열
	 *  @param len 넣고자 하는 바이트배열의 크기
	 *  @return bool 추가의 성공여부
	 */
	bool	Push(char * data,int len);

	/** 
	 *  @brief 큐의 데이터를 꺼내온다
	 *  @param data 꺼내온 데이터를 저장할 포인터
	 *  @param len 꺼내오고자 하는 데이터의 크기
	 *  @return int 실제로 꺼내어진 크기
	 */
	int		Pop(char * data);

	/** 
	 *  @brief 큐의 데이터를 삭제한다
	 *  @param len 삭제하고자 하는 크기
	 *  @return int 실제로 삭제된 크기
	 */
	int		Remove(int len);

	/** 
	 *  @brief 큐의 데이터를 읽기만 한다
	 *  @param data 읽어들인 데이터를 저장할 포인터
	 *  @param len 읽고자 하는 데이터의 크기
	 *  @return int 실제 읽어들여진 데이터의 크기
	 */
	int		Read(char * data,int len) const;

	/** 
	 *  @brief 큐의 전체 크기얻기 
	 *  @return int 큐의 전체크기
	 */
	int		GetSize() const;

	/** 
	 *  @brief 큐에서 데이터가 쌓여있는 크기얻기.
	 *  @return int 큐의 쌓여진 데이터의 크기.
	 */
	int		GetKeepingSize() const;

	/** 
	 *  @brief 큐 전체에서 사용할수 있는 빈 공간의 크기얻기.
	 *  @return int 큐 전체에서 사용할수 있는 빈 공간의 크기
	 */
	int		GetRemainSize() const;

private:

	/** 
	 *  @brief 큐가 다 쓰여졌는지 확인한다.
	 *  @param len 넣어볼 크기
	 *  @return bool 데이터를 추가할수 있는지의 여부
	 */
	bool	IsOverFlow(int len);

private:
	int		m_size;
	char *	m_buffer;
	int		m_current;
	int		m_head;
	int		m_tail;
};

} //end namespace imcServerNet

#endif
