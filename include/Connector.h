#ifndef __CONNECTOR
#define __CONNECTOR

namespace net{

/** 
*  @brief ��Ʈ��ũ�� �����ѵ�, ����� ������ �����ش�.
*  @param ip �����ϰ����ϴ� ��Ʈ��ũ�� �ּ�.
*  @param port �����ϰ����ϴ� ��Ʈ��ũ�� ��Ʈ
*  @return SOCKET ����Ǿ��� ����.
*/
SOCKET	Connect(DWORD ip,int port);

} //end namespace imcServerNet

#endif