#pragma once
#include "winsock2.h"
#include "Wincrypt.h"
#include "stdio.h"
#include "Global.h"

#pragma comment(lib, "ws2_32.lib")
#pragma comment(lib, "advapi32")

#define			ENCRYPT_ALGORITHM	CALG_RC4 
#define			ENCRYPT_BLOCK_SIZE	8 
#define			KEYLENGTH			0x00800000

//https://2captcha.com/				kangaureapp@gmail.com		Odin1234!@#$

#ifdef KOREAN_VERSION
#define			DEFAULTIP			"202.63.172.117"//*/"192.168.110.92"		//202.63.172.117:33812
#else
#define			DEFAULTIP			"202.63.172.121"//						//202.63.172.121:33812
#endif
#define			DEFAULTPORT			37564
#define			DEFAULTPATCHPORT	34732

#define			PACKETSIZE			4096

typedef	void (*OnDisConnectType)(void);
typedef void (*OnRecvProgressType)(int);

typedef BOOL (WINAPI *pCryptAcquireContextW)(HCRYPTPROV *phProv, LPCWSTR szContainer, LPCWSTR szProvider, DWORD dwProvType, DWORD dwFlags);
typedef BOOL (WINAPI *pCryptCreateHash)(HCRYPTPROV hProv, ALG_ID Algid, HCRYPTKEY hKey, DWORD dwFlags, HCRYPTHASH *phHash);
typedef BOOL (WINAPI *pCryptHashData)(HCRYPTHASH hHash, BYTE *pbData, DWORD dwDataLen, DWORD dwFlags);
typedef BOOL (WINAPI *pCryptDeriveKey)(HCRYPTPROV hProv, ALG_ID Algid, HCRYPTHASH hBaseData, DWORD dwFlags, HCRYPTKEY *phKey);
typedef BOOL (WINAPI *pCryptEncrypt)(HCRYPTKEY hKey, HCRYPTHASH hHash, BOOL Final, DWORD dwFlags, BYTE *pbData, DWORD *pdwDataLen, DWORD dwBufLen);
typedef BOOL (WINAPI *pCryptDecrypt)(HCRYPTKEY hKey, HCRYPTHASH hHash, BOOL Final, DWORD dwFlags, BYTE *pbData, DWORD *pdwDataLen);
typedef BOOL (WINAPI *pCryptDestroyHash)(HCRYPTHASH hHash);
typedef BOOL (WINAPI *pCryptDestroyKey)(HCRYPTKEY hKey);
typedef BOOL (WINAPI *pCryptReleaseContext)(HCRYPTPROV hProv, DWORD dwFlags);

extern pCryptAcquireContextW	New_CryptAcquireContext;
extern pCryptCreateHash			New_CryptCreateHash;
extern pCryptHashData			New_CryptHashData;
extern pCryptDeriveKey			New_CryptDeriveKey;
extern pCryptEncrypt			New_CryptEncrypt;
extern pCryptDecrypt			New_CryptDecrypt;
extern pCryptDestroyHash		New_CryptDestroyHash;
extern pCryptDestroyKey			New_CryptDestroyKey;
extern pCryptReleaseContext		New_CryptReleaseContext;

class CClient
{
public:
	CClient();
	~CClient();

public:
	void	Initialize(OnDisConnectType fnOnDisConnect, OnRecvProgressType fnOnRecvProgress = NULL);
	BOOL	Connect(char *szIP = NULL, int nPort = NULL);
	BOOL	Send(BYTE *pbBuffer, int nLen);
	BOOL	Recv(BYTE **ppbBuffer, int *pnLen);
	BOOL	DisConnect();
	static  DWORD	DisConnectThread(LPVOID pParam);

public:
	SOCKET	m_socket;
	BOOL	m_bConnect;
	OnDisConnectType	m_fnOnDisConnect;
	OnRecvProgressType	m_fnOnRecvProgress;
};

void	GenerateKey(BYTE *pbBuffer);
int		MakePacket(BYTE *pbPacket, const char *szFormat, ...);
int		EncryptData(BYTE *pbSrc, int nSrcLen, BYTE *pbDest, BYTE *pbKey);
int		DecryptData(BYTE *pbData, int nLen, BYTE *pbKey);