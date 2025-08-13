#ifndef __CIRCLEQUEUE
#define __CIRCLEQUEUE

namespace	net {

/** 
 *  @brief ����Ʈ�迭�� ��� ����ť
 */
class	CCircleQueue {
public:
	/** 
	 *  @brief
	 *  @return 
	 */
			CCircleQueue();

	/** 
	 *  @brief ť�� ����
	 *  @param size ť��ũ�� 
	 *  @return 
	 */
			CCircleQueue(int size);

	/** 
	 *  @brief
	 *  @return 
	 */
			~CCircleQueue();

	/** 
	 *  @brief ť�� ����
	 *  @param size ť�� ũ��
	 *  @return void
	 */
	bool	Create(int size);

	/** 
	 *  @brief ť�� ����
	 *  @return void
	 */
	void	Destroy();

	/** 
	 *  @brief ť�� ����Ʈ�迭 �߰�
	 *  @param data �ְ��� �ϴ� ����Ʈ�迭
	 *  @param len �ְ��� �ϴ� ����Ʈ�迭�� ũ��
	 *  @return bool �߰��� ��������
	 */
	bool	Push(char * data,int len);

	/** 
	 *  @brief ť�� �����͸� �����´�
	 *  @param data ������ �����͸� ������ ������
	 *  @param len ���������� �ϴ� �������� ũ��
	 *  @return int ������ �������� ũ��
	 */
	int		Pop(char * data);

	/** 
	 *  @brief ť�� �����͸� �����Ѵ�
	 *  @param len �����ϰ��� �ϴ� ũ��
	 *  @return int ������ ������ ũ��
	 */
	int		Remove(int len);

	/** 
	 *  @brief ť�� �����͸� �б⸸ �Ѵ�
	 *  @param data �о���� �����͸� ������ ������
	 *  @param len �а��� �ϴ� �������� ũ��
	 *  @return int ���� �о�鿩�� �������� ũ��
	 */
	int		Read(char * data,int len) const;

	/** 
	 *  @brief ť�� ��ü ũ���� 
	 *  @return int ť�� ��üũ��
	 */
	int		GetSize() const;

	/** 
	 *  @brief ť���� �����Ͱ� �׿��ִ� ũ����.
	 *  @return int ť�� �׿��� �������� ũ��.
	 */
	int		GetKeepingSize() const;

	/** 
	 *  @brief ť ��ü���� ����Ҽ� �ִ� �� ������ ũ����.
	 *  @return int ť ��ü���� ����Ҽ� �ִ� �� ������ ũ��
	 */
	int		GetRemainSize() const;

private:

	/** 
	 *  @brief ť�� �� ���������� Ȯ���Ѵ�.
	 *  @param len �־ ũ��
	 *  @return bool �����͸� �߰��Ҽ� �ִ����� ����
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
