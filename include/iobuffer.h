#ifndef __IOBUFFER
#define __IOBUFFER



namespace	net {

enum {
	IOWORKTYPE_SEND = 1,
	IOWORKTYPE_RECV = 2,
};

const int IO_BUFFERSIZE = 8192;

#pragma pack(1)

/** 
 *  @brief OVERLAPPED 구조체를 확장
 */
class	CIOBuffer {
public:
	/** 
	 *  @brief
	 *  @return 
	 */
					CIOBuffer();

	/** 
	 *  @brief
	 *  @return 
	 */
					~CIOBuffer();

	/** 
	 *  @brief 내부를 청소?한다
	 *  @return void
	 */
	void			Clear();

	/** 
	 *  @brief WSAOVERLAPPED의 포인터를 넘겨준다.
	 *  @return WSAOVERLAPPED *
	 */
	WSAOVERLAPPED *	GetWSAOVERLAPPED();

	/** 
	 *  @brief WSABUF의 포인터를 넘겨준다.
	 *  @return WSABUF *
	 */
	WSABUF *		GetWSABUF();

	/** 
	 *  @brief 입출력 작업의 종류를 얻는다.
	 *  @return DWORD 입출력 작업의 종류.
	 */
	DWORD			GetWorkType();

	/** 
	 *  @brief 입출력 작업의 종류를 설정한다.
	 *  @param workType 입출력 작업의 종류.
	 *  @return void
	 */
	void			SetWorkType(DWORD workType);

	/** 
	 *  @brief 버퍼의 포인터를 넘겨준다.
	 *  @return BYTE * 버퍼의 포인터.
	 */
	BYTE *			GetBuffer();

	/** 
	 *  @brief 버퍼의 크기를 설정한다.
	 *  @param size 버퍼의 크기.
	 *  @return void
	 */
	void			SetBufferSize(int size);

private:
	WSAOVERLAPPED	m_overlapped;
	DWORD			m_workType;
	WSABUF			m_wsaBuf;
	int				m_bufferSize;
	BYTE			m_buffer[IO_BUFFERSIZE];
};

#pragma pack()

} //end namespace imcServerNet

#endif