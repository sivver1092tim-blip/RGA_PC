#ifndef __PACKETLEN
#define __PACKETLEN

//	Todo: 서버 라이브러리에서는 필요없는 기능이므로 어플리케이션 쪽으로 옮긴다

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
