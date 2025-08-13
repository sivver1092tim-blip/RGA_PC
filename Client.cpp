#include "StdAfx.h"
#include "Client.h"
#include "VMProtectSDK.h"

//#define VM_PROTECT_CLIENT

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

pCryptAcquireContextW	New_CryptAcquireContext = NULL;
pCryptCreateHash		New_CryptCreateHash = NULL;
pCryptHashData			New_CryptHashData = NULL;
pCryptDeriveKey			New_CryptDeriveKey = NULL;
pCryptEncrypt			New_CryptEncrypt = NULL;
pCryptDecrypt			New_CryptDecrypt = NULL;
pCryptDestroyHash		New_CryptDestroyHash = NULL;
pCryptDestroyKey		New_CryptDestroyKey = NULL;
pCryptReleaseContext	New_CryptReleaseContext = NULL;

CClient::CClient()
{
	WSADATA wsaData;
	WSAStartup(MAKEWORD(2, 2), &wsaData);

	m_socket = INVALID_SOCKET;
	m_bConnect = FALSE;
	m_fnOnDisConnect = NULL;

	HMODULE hModule = LoadLibrary(L"Cryptsp.dll");
	if(hModule)
	{
		New_CryptAcquireContext = (pCryptAcquireContextW)GetProcAddress(hModule, "CryptAcquireContextW");
		New_CryptCreateHash = (pCryptCreateHash)GetProcAddress(hModule, "CryptCreateHash");
		New_CryptHashData = (pCryptHashData)GetProcAddress(hModule, "CryptHashData");
		New_CryptDeriveKey = (pCryptDeriveKey)GetProcAddress(hModule, "CryptDeriveKey");
		New_CryptEncrypt = (pCryptEncrypt)GetProcAddress(hModule, "CryptEncrypt");
		New_CryptDecrypt = (pCryptDecrypt)GetProcAddress(hModule, "CryptDecrypt");
		New_CryptDestroyHash = (pCryptDestroyHash)GetProcAddress(hModule, "CryptDestroyHash");
		New_CryptDestroyKey = (pCryptDestroyKey)GetProcAddress(hModule, "CryptDestroyKey");
		New_CryptReleaseContext = (pCryptReleaseContext)GetProcAddress(hModule, "CryptReleaseContext");
	}
}

CClient::~CClient()
{
	WSACleanup();
}

BOOL	CClient::Connect(char *szIP, int nPort)
{
#ifdef	VM_PROTECT_CLIENT
	VMProtectBeginUltra("CClient::Connect");
#endif

	SOCKADDR_IN		saddr;
	LINGER			LingerStruct;

	if(m_bConnect)
		return TRUE;
	m_socket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	if(m_socket == INVALID_SOCKET)
	{
		DWORD dwError = GetLastError();

		if(m_fnOnDisConnect)
			m_fnOnDisConnect();
		return FALSE;
	}
	LingerStruct.l_onoff=1;
	LingerStruct.l_linger=0;
	setsockopt(m_socket, SOL_SOCKET, SO_LINGER, (char*)&LingerStruct, sizeof(LingerStruct));

	saddr.sin_family = AF_INET;
#ifdef	VM_PROTECT_CLIENT
	saddr.sin_addr.s_addr = inet_addr(szIP?szIP:VMProtectDecryptStringA(DEFAULTIP));
#else
	saddr.sin_addr.s_addr = inet_addr(szIP?szIP:DEFAULTIP);
#endif
	saddr.sin_port = htons(nPort?nPort:DEFAULTPORT);
	if(connect(m_socket, (SOCKADDR*)&saddr, sizeof(saddr)))
	{
		closesocket(m_socket);
		m_socket = INVALID_SOCKET;
		if(m_fnOnDisConnect)
			m_fnOnDisConnect();
		return FALSE;
	}
	m_bConnect = TRUE;

#ifdef	VM_PROTECT_CLIENT
	VMProtectEnd();
#endif
	return TRUE;
}

BOOL	CClient::Send(BYTE *pbBuffer, int nLen)
{
	int		nTotalLen;

	if(!m_bConnect)
		return FALSE;

	nTotalLen = nLen+4;
	if(send(m_socket, (char *)&nTotalLen, 4, 0) <= 0)
	{
		if(m_fnOnDisConnect)
			m_fnOnDisConnect();
		return FALSE;
	}
	if(nLen)
	{
		if(send(m_socket, (char *)pbBuffer, nLen, 0) <= 0)
		{
			if(m_fnOnDisConnect)
				m_fnOnDisConnect();
			return FALSE;
		}
	}

	return TRUE;
}

BOOL	CClient::Recv(BYTE **ppbBuffer, int *pnLen)
{
#ifdef	VM_PROTECT_CLIENT
	VMProtectBeginUltra("CClient::Recv");
#endif

	int		nRecvedLen, i;

	if(!m_bConnect)
		return FALSE;
	nRecvedLen = 0;
	(*pnLen) = 0;

	while(nRecvedLen < 4)
	{
		i = recv(m_socket, ((char*)pnLen)+nRecvedLen, 4-nRecvedLen, 0);
		if(i <= 0 && WSAGetLastError() == WSAEWOULDBLOCK)
			continue;
		if(i <= 0)
		{
			if(m_fnOnDisConnect)
				m_fnOnDisConnect();
			return FALSE;
		}
		nRecvedLen += i;
	}	
	(*pnLen) = max(0, (*pnLen)-4);
	if(!(*pnLen))
	{		
		*ppbBuffer = 0;
		return TRUE;
	}
	*ppbBuffer = new BYTE[(*pnLen)];
	nRecvedLen = 0;
	if(!m_fnOnRecvProgress)
	{		
		while(nRecvedLen < (*pnLen))
		{
			i = recv(m_socket, ((char*)*ppbBuffer)+nRecvedLen, (*pnLen)-nRecvedLen, 0);
			if(i <= 0)
			{
				(*pnLen) = 0;
				if(m_fnOnDisConnect)
					m_fnOnDisConnect();
				return FALSE;
			}
			nRecvedLen += i;
		}
	}
	else
	{
		int		nStepLen, nTempLen;

		nStepLen = max(1, (*pnLen) / 100);

		while(nRecvedLen < (*pnLen))
		{
			if((*pnLen)-nRecvedLen > nStepLen)
				nTempLen = nStepLen;
			else
				nTempLen = (*pnLen)-nRecvedLen;

			m_fnOnRecvProgress((int)((nRecvedLen / (float)(*pnLen)) * 100));

			i = recv(m_socket, ((char*)*ppbBuffer)+nRecvedLen, nTempLen, 0);
			if(i <= 0)
			{
				(*pnLen) = 0;
				if(m_fnOnDisConnect)
					m_fnOnDisConnect();
				return FALSE;
			}

			nRecvedLen += i;
		}
	}

#ifdef	VM_PROTECT_CLIENT
	VMProtectEnd();
#endif
	return TRUE;
}

DWORD	CClient::DisConnectThread(LPVOID pParam)
{
	CClient		*pClient = (CClient *)pParam;
	BYTE		*pbBuffer;
	int			nLen;

	pClient->Send(0, 0);
	pClient->Recv(&pbBuffer, &nLen);
	return 0;
}

BOOL	CClient::DisConnect()
{
	OnDisConnectType pFn;

// 	BYTE		pbBuffer[1024];
// 	int			nLen = 1024;
// 
// 	send(m_socket, 0, 0, 0);
// 	recv(m_socket, (char*)&pbBuffer, nLen, 0);

	pFn = m_fnOnDisConnect;
	m_fnOnDisConnect = NULL;
	m_bConnect = FALSE;	
	closesocket(m_socket);
	m_fnOnDisConnect = pFn;
	return (GetLastError() != WAIT_TIMEOUT);
}

int EncryptData(BYTE *pbSrc, int nSrcLen, BYTE *pbDest, BYTE *pbKey)
{
#ifdef	VM_PROTECT_CLIENT
	VMProtectBeginUltra("EncryptData");
#endif

	HCRYPTPROV	hCryptProv = NULL; 
	HCRYPTKEY	hKey = NULL; 
	HCRYPTKEY	hXchgKey = NULL; 
	HCRYPTHASH	hHash = NULL; 
	int			nDestLen, nTemp; 

	nDestLen = ((nSrcLen + 4 + ENCRYPT_BLOCK_SIZE - 1) / ENCRYPT_BLOCK_SIZE) * ENCRYPT_BLOCK_SIZE;
	if(!pbDest)
		return nDestLen;

	if(!pbSrc || !nSrcLen || !pbKey)
		return -1;

	if(New_CryptAcquireContext && !New_CryptAcquireContext(&hCryptProv, NULL, MS_ENHANCED_PROV, PROV_RSA_FULL, 0))
	{
		if(!New_CryptAcquireContext(&hCryptProv, NULL, MS_ENHANCED_PROV, PROV_RSA_FULL, CRYPT_NEWKEYSET))
		{
			if (GetLastError() != NTE_EXISTS || !New_CryptAcquireContext(&hCryptProv, NULL, MS_ENHANCED_PROV, PROV_RSA_FULL, CRYPT_MACHINE_KEYSET))
			{
				return -1;
			}
		}
	}

	if(New_CryptCreateHash && !New_CryptCreateHash(hCryptProv, CALG_SHA1, 0, 0, &hHash))
	{
		if(New_CryptReleaseContext)
			New_CryptReleaseContext(hCryptProv,0);

		return -1;
	}

	if(New_CryptHashData && !New_CryptHashData(hHash, pbKey, 20, 0))
	{
		if(New_CryptDestroyHash)
			New_CryptDestroyHash(hHash);

		if(New_CryptReleaseContext)
			New_CryptReleaseContext(hCryptProv,0);

		return -1;
	}

	if(New_CryptDeriveKey && !New_CryptDeriveKey(hCryptProv, ENCRYPT_ALGORITHM, hHash, KEYLENGTH, &hKey))
	{
		if(New_CryptDestroyHash)
			New_CryptDestroyHash(hHash);

		if(New_CryptReleaseContext)
			New_CryptReleaseContext(hCryptProv,0);

		return -1;
	}

	memmove(pbDest+4, pbSrc, nDestLen);
	*(int *)pbDest = nSrcLen;
	nTemp = nDestLen;

	if(New_CryptEncrypt && !New_CryptEncrypt(hKey, NULL, TRUE, 0, pbDest, (DWORD *)&nTemp, nDestLen))
	{
		if(New_CryptDestroyHash)
			New_CryptDestroyHash(hHash);

		if(New_CryptDestroyKey)
			New_CryptDestroyKey(hKey);

		if(New_CryptReleaseContext)
			New_CryptReleaseContext(hCryptProv, 0);

		return -1;
	}

	if(New_CryptDestroyHash)
		New_CryptDestroyHash(hHash);

	if(New_CryptDestroyKey)
		New_CryptDestroyKey(hKey);

	if(New_CryptReleaseContext)
		New_CryptReleaseContext(hCryptProv, 0);

#ifdef	VM_PROTECT_CLIENT
	VMProtectEnd();
#endif
	return nDestLen; 
}

int DecryptData(BYTE *pbData, int nLen, BYTE *pbKey)
{
#ifdef	VM_PROTECT_CLIENT
	VMProtectBeginUltra("DecryptData");
#endif

	HCRYPTPROV	hCryptProv = NULL; 
	HCRYPTKEY	hKey = NULL; 
	HCRYPTKEY	hXchgKey = NULL; 
	HCRYPTHASH	hHash = NULL; 
	int			i, nDataLen;

	if(!pbData || !nLen || !pbKey)
		return -1;

	if(New_CryptAcquireContext && !New_CryptAcquireContext(&hCryptProv, NULL, MS_ENHANCED_PROV, PROV_RSA_FULL, 0))
	{
		if(!New_CryptAcquireContext(&hCryptProv, NULL, MS_ENHANCED_PROV, PROV_RSA_FULL, CRYPT_NEWKEYSET))
		{
			if(GetLastError() != NTE_EXISTS || !New_CryptAcquireContext(&hCryptProv, NULL, MS_ENHANCED_PROV, PROV_RSA_FULL, CRYPT_MACHINE_KEYSET))
				return -1;
		}
	}

	if(New_CryptCreateHash && !New_CryptCreateHash(hCryptProv, CALG_SHA1, 0, 0, &hHash))
	{
		if(New_CryptReleaseContext)
			New_CryptReleaseContext(hCryptProv,0);

		return -1;
	}

	if(New_CryptHashData && !New_CryptHashData(hHash, pbKey, 20, 0))
	{
		if(New_CryptDestroyHash)
			New_CryptDestroyHash(hHash);

		if(New_CryptReleaseContext)
			New_CryptReleaseContext(hCryptProv,0);

		return -1;
	}

	if(New_CryptDeriveKey && !New_CryptDeriveKey(hCryptProv, ENCRYPT_ALGORITHM, hHash, KEYLENGTH, &hKey))
	{
		if(New_CryptDestroyHash)
			New_CryptDestroyHash(hHash);

		if(New_CryptReleaseContext)
			New_CryptReleaseContext(hCryptProv,0);

		return -1;
	}

	if(New_CryptDecrypt && !New_CryptDecrypt(hKey, NULL, TRUE, 0, pbData, (DWORD *)&nLen))
	{
		if(New_CryptDestroyHash)
			New_CryptDestroyHash(hHash);

		if(New_CryptDestroyKey)
			New_CryptDestroyKey(hKey);

		if(New_CryptReleaseContext)
			New_CryptReleaseContext(hCryptProv, 0);

		return -1;
	}

	nDataLen = *(DWORD *)pbData;
	if(nDataLen > nLen)
		return 0;

	for(i = 0; i < nDataLen; i++)
		pbData[i] = pbData[i+4];

	if(New_CryptDestroyHash)
		New_CryptDestroyHash(hHash);

	if(New_CryptDestroyKey)
		New_CryptDestroyKey(hKey);

	if(New_CryptReleaseContext)
		New_CryptReleaseContext(hCryptProv, 0);

#ifdef	VM_PROTECT_CLIENT
	VMProtectEnd();
#endif
	return nDataLen; 
}

void	CClient::Initialize(OnDisConnectType fnOnDisConnect, OnRecvProgressType fnOnRecvProgress)
{
	m_fnOnDisConnect = fnOnDisConnect;
	m_fnOnRecvProgress = fnOnRecvProgress;
}

int MakePacket(BYTE *pbPacket, const char *szFormat, ...)
{
#ifdef	VM_PROTECT_CLIENT
	VMProtectBeginUltra("MakePacket");
#endif

	va_list	arg;
	int		i, nLen, nOffset = 0;

	nLen = (int)strlen(szFormat);
	va_start(arg, szFormat);
	for(i = 0; i < nLen; i++)
	{
		switch(szFormat[i])
		{
		case 'c':
			*(BYTE *)(pbPacket+nOffset) = va_arg(arg, char);
			nOffset += 1;
			break;
		case 'h':
			*(WORD *)(pbPacket+nOffset) = va_arg(arg, WORD);
			nOffset += 2;
			break;
		case 'd':
			*(DWORD *)(pbPacket+nOffset) = va_arg(arg, DWORD);
			nOffset += 4;
			break;
		case 'b':
			{
				BYTE	*pbTemp = va_arg(arg, BYTE *);
				int		n = va_arg(arg, int);
				if(n)
				{
					memcpy(pbPacket+nOffset, pbTemp, n);
					nOffset += n;
				}
			}
			break;
		case 'z':
			{
				int		n = va_arg(arg, int);
				memset(pbPacket+nOffset, 0, n);
				nOffset += n;
			}
			break;
		case 'S':
			{
				WCHAR	*szTemp = va_arg(arg, WCHAR *);
				sprintf((char *)pbPacket+nOffset, "%S", szTemp);
				nOffset += (int)wcslen(szTemp)+2;
			}
			break;
		case 's':
			{
				char	*szTemp = va_arg(arg, char *);
				sprintf((char *)pbPacket+nOffset, "%s", szTemp);
				nOffset += (int)strlen(szTemp)+1;
			}
			break;
		}
	}
	va_end(arg);

#ifdef	VM_PROTECT_CLIENT
	VMProtectEnd();
#endif
	return nOffset;
}


void	GenerateKey(BYTE *pbBuffer)
{
#ifdef	VM_PROTECT_CLIENT
	VMProtectBeginUltra("GenerateKey");
#endif

	HCRYPTPROV	hCryptProv;
	HCRYPTHASH	hHash;
	DWORD		dwLen = 20;

	if(!CryptAcquireContext(&hCryptProv, NULL, MS_ENHANCED_PROV, PROV_RSA_FULL, 0))
	{
		if(!CryptAcquireContext(&hCryptProv, NULL, MS_ENHANCED_PROV, PROV_RSA_FULL, CRYPT_NEWKEYSET))
		{
			if(GetLastError() != NTE_EXISTS || !New_CryptAcquireContext(&hCryptProv, NULL, MS_ENHANCED_PROV, PROV_RSA_FULL, CRYPT_MACHINE_KEYSET))
				return;
		}
	}

	if(!CryptCreateHash(hCryptProv, CALG_SHA1, 0, 0, &hHash))
		return;

	memset(pbBuffer, 0, 20);
	*(DWORD *)pbBuffer = GetTickCount();
	CryptHashData(hHash, pbBuffer, 20, 0);
	CryptGetHashParam(hHash, HP_HASHVAL, pbBuffer, &dwLen, 0);
	CryptDestroyHash(hHash);
	CryptReleaseContext(hCryptProv,0);

#ifdef	VM_PROTECT_CLIENT
	VMProtectEnd();
#endif
}

