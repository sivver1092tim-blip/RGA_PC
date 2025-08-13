#ifndef __CONNECTOR
#define __CONNECTOR

namespace net{

/** 
*  @brief 네트워크에 연결한뒤, 연결된 소켓을 돌려준다.
*  @param ip 연결하고자하는 네트워크의 주소.
*  @param port 연결하고자하는 네트워크의 포트
*  @return SOCKET 연결되어진 소켓.
*/
SOCKET	Connect(DWORD ip,int port);

} //end namespace imcServerNet

#endif