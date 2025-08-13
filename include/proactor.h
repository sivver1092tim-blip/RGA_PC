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
 *  @brief ����� �۾��� �������� ����, ������ ����½������� ó����Ͽ� CNetStream�� ���, �����ϴ� Ŭ����.
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
	 *  @brief IOCP�� ��´�.
	 *  @return CIOCP *
	 */
	CIOCP *			GetIOCP();

	/** 
	 *  @brief ��Ʈ��Ŭ������ ����Ͽ� �۾������忡 ���ؼ� ����� ó���ϵ��� �Ѵ�.
	 *  @param stream �۾��������� ����� ó���� ��û�� ��Ʈ��Ŭ����.
	 *  @return bool ��������
	 */
	bool			AddNetStream(CNetStream * stream);

	/** 
	 *  @brief �۾������忡�� ���̻� ó������ �ʵ��� �۾���Ͽ��� �����Ѵ�.
	 *  @param stream �۾���Ͽ��� ������ ��Ʈ��Ŭ����.
	 *  @return void
	 */
	void			RemoveNetStream(CNetStream * stream);

	/** 
	 *  @brief ��Ʈ���� ������� ó���� �۾������带 �����Ѵ�.
	 *  @param count �������� ����.
	 *  @return void
	 */
	bool			CreateIOWorkers(int count);

	/** 
	 *  @brief ��� ����� ó���� �������� �۾��� �����Ѵ�.
	 *  @return void
	 */
	void			StopIOWorkers();

	/** 
	 *  @brief ���������� �۾�ó���ϷḦ IOCP�� �뺸�Ѵ�.
	 *  @param netStream � ��Ʈ���ΰ�?
	 *  @param bytes ??
	 *  @param overlapped �۾��� ����
	 *  @return void
	 */
	void			PostStatus(CNetStream * stream,DWORD transfered,OVERLAPPED * overlapped);
	
	/** 
	 *  @brief ������ ����, ��ü �Ҹ�..
	 */
	void			Destroy();

private:
	CIOCP			m_IOCP;
	IOWorkerList	m_IOWorkers;
};

} //end namespace imcServerNet

#endif