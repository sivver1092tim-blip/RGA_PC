#include "stdafx.h"
#include "Connector.h"

namespace net {

CConnector g_connector;

SOCKET Connect(DWORD ip,int port)
{
	return g_connector.Connect(ip, port);
}

//	CConnector
CConnector::CConnector()
{
}

CConnector::~CConnector()
{
}

SOCKET CConnector::Connect(DWORD ip,int port)
{
	SOCKET connection;

	connection = WSASocket(AF_INET, SOCK_STREAM, 0, NULL, 0, WSA_FLAG_OVERLAPPED);
	if (connection == INVALID_SOCKET)
		return INVALID_SOCKET;

	struct sockaddr_in addr;
	addr.sin_family = AF_INET;
	addr.sin_port = htons(port);
	addr.sin_addr.s_addr = ip;

	if (SOCKET_ERROR == WSAConnect(connection, (struct sockaddr *) &addr, sizeof(addr), NULL, NULL, NULL, NULL)) {
		closesocket(connection);
		return INVALID_SOCKET;
	}

	struct linger lingerOpt;
	lingerOpt.l_onoff = 1;
	lingerOpt.l_linger = 0;

	if (SOCKET_ERROR == setsockopt(connection, SOL_SOCKET, SO_LINGER, (char *) &lingerOpt, sizeof(lingerOpt))) {
		closesocket(connection);
		return INVALID_SOCKET;
	}

	return connection;
}

} //end namespace imcServerNet
