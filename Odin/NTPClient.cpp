#include "stdafx.h"
#include "ntpclient.h"

/******************************************************************************
 * Class Member Function Definitions
 *****************************************************************************/
void Timestamp::ReverseEndian(void) {
    ReverseEndianInt(seconds);
    ReverseEndianInt(fraction);
}

time_t Timestamp::to_time_t(void) {
    return (seconds - 0x83AA7E80) &0x7fffffff;
}

void NTPMessage::ReverseEndian(void) {
    ref.ReverseEndian();
    orig.ReverseEndian();
    rx.ReverseEndian();
    tx.ReverseEndian();
}

int NTPMessage::RecvNTPMessage(int sock) {
    int ret = recv(sock, (char*)this, sizeof(*this), 0);
    ReverseEndian();
    return ret;
}

int NTPMessage::SendToNTPMessage(int sock, struct sockaddr_in* srv_addr) {
    ReverseEndian();
    int ret = sendto(sock, (const char*)this, sizeof(*this), 0, (sockaddr*)srv_addr, sizeof(*srv_addr));
    ReverseEndian();
    return ret;
}

void NTPMessage::Clear() {
    memset(this, 0, sizeof(*this));
}


void dns_lookup(const char *host, sockaddr_in *out)
{
	struct addrinfo *result;
	int ret = getaddrinfo(host, "ntp", NULL, &result);
	for (struct addrinfo *p = result; p; p = p->ai_next)
	{
		if (p->ai_family != AF_INET)
			continue;

		memcpy(out, p->ai_addr, sizeof(*out));
	}
	freeaddrinfo(result);
}