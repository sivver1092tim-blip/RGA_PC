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
 *  @brief OVERLAPPED ����ü�� Ȯ��
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
	 *  @brief ���θ� û��?�Ѵ�
	 *  @return void
	 */
	void			Clear();

	/** 
	 *  @brief WSAOVERLAPPED�� �����͸� �Ѱ��ش�.
	 *  @return WSAOVERLAPPED *
	 */
	WSAOVERLAPPED *	GetWSAOVERLAPPED();

	/** 
	 *  @brief WSABUF�� �����͸� �Ѱ��ش�.
	 *  @return WSABUF *
	 */
	WSABUF *		GetWSABUF();

	/** 
	 *  @brief ����� �۾��� ������ ��´�.
	 *  @return DWORD ����� �۾��� ����.
	 */
	DWORD			GetWorkType();

	/** 
	 *  @brief ����� �۾��� ������ �����Ѵ�.
	 *  @param workType ����� �۾��� ����.
	 *  @return void
	 */
	void			SetWorkType(DWORD workType);

	/** 
	 *  @brief ������ �����͸� �Ѱ��ش�.
	 *  @return BYTE * ������ ������.
	 */
	BYTE *			GetBuffer();

	/** 
	 *  @brief ������ ũ�⸦ �����Ѵ�.
	 *  @param size ������ ũ��.
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