#ifndef __PACKETLEN
#define __PACKETLEN

//	Todo: ���� ���̺귯�������� �ʿ���� ����̹Ƿ� ���ø����̼� ������ �ű��

namespace net {
	
const	MAX_PACKET_NUM = 0xffff;
	
class	CPacketLen {
public:
			CPacketLen();
			~CPacketLen();

	int		GetPacketSize(int packet_num) { return ((packet_num >= 0 && packet_num < MAX_PACKET_NUM) ? m_nPacketSize[packet_num]: -1); };
	void	AddPacketSize(int packet_num, int size);
	
private:		
	int		m_nPacketSize[MAX_PACKET_NUM];
};

CPacketLen *	GetPacketLen();

}

#endif
