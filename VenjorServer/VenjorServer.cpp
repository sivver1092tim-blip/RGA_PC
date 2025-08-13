// VenjorServer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "io.h"
#include "AES.h"
#include "psapi.h"
#include "direct.h"
#include "atltime.h"
#include "iServer.h"
#include "wincrypt.h"
#include "iNetStream.h"
#include "Win32Thread.h"
#include "AcceptHandler.h"

#pragma comment(lib, "psapi.lib")

//#define PATCH_SERVER

#define OPCODE_VERSIONCHECK		0
#define OPCODE_USERLOGIN		1
#define OPCODE_RELOGIN			2
#define OPCODE_TIMEEXPIRED		3
#define OPCODE_PATCHDOWN		4
#define OPCODE_USERINFO			5

#define OPCODE_SUPERLOGIN		100
#define OPCODE_USERCREATE		101
#define OPCODE_USERREMOVE		102
#define	OPCODE_USERDBDOWN		103
#define OPCODE_USEREXTEND		104
#define OPCODE_USERCHANGE		105
#define OPCODE_PATCHEXE			106
#define OPCODE_PATCHADDR		107
#define OPCODE_ADMINALIVE		108
#define OPCODE_VIEWSTATUS		109
#define OPCODE_DISCONUSER		110
#define OPCODE_SERVERSTATUS		111

#define OPCODE_SCREENACEPT		112
#define OPCODE_SYSTEM			113

#define LEVEL_NONE				0
#define LEVEL_USER				1
#define LEVEL_ADMIN				2
#define LEVEL_SUPERVISOR		3

#define	ENCRYPT_ALGORITHM		CALG_RC4 
#define	ENCRYPT_BLOCK_SIZE		8 
#define	KEYLENGTH				0x00800000

typedef struct _USERINFO
{
	char	szID[50];		//	아이디 (코드)
	BYTE	nType;			//	날자류형 (2시간, 1일, 3일, 7일, 15일, 30일)
	DWORD	dwCreateTime;	//	발급날자
	DWORD	dwChargedTime;	//	충전날자
	DWORD	dwExpire;		//	종료시간
	BYTE	bEnable;		//	승인/페기기발
	char	szAdmin[50];	//	생성한 관리자
}USERINFO;

typedef struct _USERCONINFO
{
	char	szID[50];
	DWORD	dwIp;
	DWORD	dwConTime;
	int		nGameServer;
	WCHAR	szCharName[50];
}USERCONINFO;

class CUserAceptHandler : public net::CAcceptHandler
{
private:
	DWORD dwIp;
public:

	CUserAceptHandler()
	{
		dwIp = 0xFFFFFFFF;
	}

	~CUserAceptHandler(){}

	void OnAccept(SOCKET socket,DWORD ip);
};

class CPatchAceptHandler : public net::CAcceptHandler
{
private:
	DWORD dwIp;
public:

	CPatchAceptHandler(){}
	~CPatchAceptHandler(){}

	void OnAccept(SOCKET socket, DWORD ip);
};

class CUsers
{
public:
	CUsers()
	{
		memset(&UserInfo, 0, sizeof(USERINFO));
		memset(bKey, 0, 20);

		dwIp = 0xFFFFFFFF;
		dwConnectTime = 0x00000000;
		dwLastTime = 0x00000000;
		
		nLevel = LEVEL_NONE;
		
		nGameServer = -1;
		memset(szCharName, 0, sizeof(WCHAR) * 50);

		nMultiIndex = -1;
		memset(szGameID, 0, sizeof(char) * 50);
		memset(szHostName, 0, sizeof(char) * 50);
		memset(szLocalIP, 0, sizeof(char) * 20);
		memset(szMacAddr, 0, sizeof(char) * 20);
		memset(dwCPUID, 0, sizeof(DWORD) * 4);
		dwHddSerial = 0xFFFFFFFF;
		dwRealKeyword = 0;
		dwClientPID = 0;
	}

	void Update();

	net::INetStream*	m_pStream;		// 스트림객체

	USERINFO			UserInfo;		// 사용자정보
	BYTE				bKey[20];		// 키열쇠

	DWORD				dwIp;			// 아이피주소
	DWORD				dwConnectTime;	// 접속시간
	DWORD				dwLastTime;		// 마감통신시간

	BYTE				nLevel;			// 관리자 or 일반유저
	
	int					nGameServer;	// 현재 접속한 게임서버
	WCHAR				szCharName[50];	// 현재 접속한 게임캐릭
	
	int					nMultiIndex;	// 멀티 번호
	char				szGameID[50];	// Game ID
	char				szHostName[50];	// Host Name
	char				szLocalIP[20];	// Local IP
	char				szMacAddr[20];	// Mac Address
	DWORD				dwCPUID[4];		// Cpu ID
	DWORD				dwHddSerial;	// Hdd Serial
	DWORD				dwRealKeyword;	// 실시간 통신할때마다 바꾸는 키 (재접속시 필요)
	DWORD				dwExeVersion;	// Exe 버젼 (현재 실행중인 파일)
	DWORD				dwClientPID;	// Client PID
};

class CPatch
{
public:

	CPatch(){
		nLevel = LEVEL_NONE;
		dwLastTime = 0;
	}

	void Update();

	net::INetStream*	m_pStream;
	BYTE				bKey[20];
	BYTE				nLevel;
	DWORD				dwIp;
	char				szID[50];
	DWORD				dwLastTime;
};

typedef std::list<CUsers*> UserListType;
typedef std::list<CPatch*> PatchListType;

WCHAR		g_szAppPath[MAX_PATH];

CUserAceptHandler	g_Aceptor;
CPatchAceptHandler	g_PatchAceptor;

CCriticalSection	g_cs;
CCriticalSection	g_csPatch;
CCriticalSection	g_csUser;
CCriticalSection	g_csAddr;
CCriticalSection	g_csLog;

UserListType		g_users;
PatchListType		g_patchs;

int					g_nUserNum = 0;
USERINFO			*g_pUserInfo = NULL;
USERINFO			*g_pTempUserInfo = NULL;

DWORD				g_dwPatchVersion = 0x00000000;

int					g_nPatchSize = 0;
BYTE				*g_pbPatchBytes = NULL;

USERCONINFO			*g_pConInfo = NULL;

int					g_nAddrCount;
DWORD				*g_pAddrInfo;

BOOL				g_bServerStop = FALSE;

DWORD				g_dwServerIP = 0;
DWORD				g_dwPatchServerIP = 0;
DWORD				g_dwPatchServerPort = 0;



typedef struct _ERROR_INFO_
{
	DWORD	dwAddr;
	int		nReference;
	int		bInit;
}ERROR_INFO;


void		Log(char *szFormat, ...);
void		SaveAddrInfo();
void		LoadAddrInfo();
void		SaveUserInfo();
void		LoadUserInfo();
void		CleanUserInfo();
void		SavePatchInfo();
void		LoadPatchInfo();
void		GenerateKey(BYTE *pbBuffer, int Len);
int			EncryptData(BYTE *pbSrc, int nSrcLen, BYTE *pbDest, BYTE *pbKey);
int			DecryptData(BYTE *pbData, int nLen, BYTE *pbKey);
int			MakePacket(BYTE *pbPacket, char *szFormat, ...);
LONG		VectoredHandler(struct _EXCEPTION_POINTERS *ExceptionInfo);
int			GenerateCard(BYTE nType, int nCount, char *szPrefix, char *szCreator);
BOOL		IsDirExist(WCHAR *szPath);
void		BytesToString(CHAR *szBuffer, BYTE *pbBuffer, int nLen);
BOOL		IsFileExist(WCHAR *szPath);
BOOL		EncryptAddr(BYTE* pbBuffer, char *szID, DWORD dwPID, int nIndex, char *szGameID);
DWORD		GetIDHashValue(const CHAR* szString);

DWORD SetBreak(DWORD dwAddr)
{
	if (!dwAddr)
		return dwAddr;

	DWORD	dwOldProtect;

	if (VirtualProtect((LPVOID)dwAddr, 1, PAGE_EXECUTE_READWRITE, &dwOldProtect))
	{
		*(BYTE*)dwAddr = 0xCC;
		VirtualProtect((LPVOID)dwAddr, 1, dwOldProtect, &dwOldProtect);

		return dwAddr;
	}

	return NULL;
}


DWORD SetBreak(WCHAR* szDLL, char* szProc, DWORD dwOffset)
{
	DWORD	dwAddr;

	dwAddr = dwOffset + (DWORD)GetProcAddress(LoadLibrary(szDLL), szProc);
	SetBreak(dwAddr);
	return dwAddr;
}


void RestoreBreak(DWORD dwAddr, BYTE bOrg)
{
	DWORD	dwOldProtect;

	if (VirtualProtect((LPVOID)dwAddr, 1, PAGE_EXECUTE_READWRITE, &dwOldProtect))
	{
		*(BYTE*)dwAddr = bOrg;
		VirtualProtect((LPVOID)dwAddr, 1, dwOldProtect, &dwOldProtect);
	}
}

typedef PVOID (WINAPI *NewAddVectoredExceptionHandler)(_In_ ULONG FirstHandler,_In_ PVECTORED_EXCEPTION_HANDLER VectoredHandler);

int _tmain(int argc, _TCHAR* argv[])
{
	WCHAR szPath[MAX_PATH];

	HANDLE hEvent = OpenEvent(EVENT_ALL_ACCESS, 0, L"Odin Korea Server");
	if(hEvent)
	{
		CloseHandle(hEvent);
		return 0;
	}

	srand((unsigned int)time(NULL));

	hEvent = CreateEvent(0, 0, 0, L"Odin Korea Server");

	GetModuleFileName(0, g_szAppPath, MAX_PATH);
	int i = wcslen(g_szAppPath);
	while(g_szAppPath[i] != L'\\')
		i--;
	g_szAppPath[i] = 0;

	swprintf(szPath, L"%s\\Log", g_szAppPath);
	if(!IsDirExist(szPath))
	{
		char *aszLog = new char[wcslen(szPath)*2+20];
		WideCharToMultiByte(CP_ACP, 0, szPath, wcslen(szPath)+1, aszLog, wcslen(szPath)*2+2, 0, 0);
		_mkdir(aszLog);
		delete[] aszLog;
	}

	DWORD dwAddr = (DWORD)GetProcAddress(GetModuleHandle(L"KernelBase.dll"), "AddVectoredExceptionHandler");
	if (dwAddr == 0)
		dwAddr = (DWORD)GetProcAddress(GetModuleHandle(L"Kernel32.dll"), "AddVectoredExceptionHandler");

	if (dwAddr == 0)
		return 0;

	OnAESGenerateKey();

	net::InitWinsock();

	Log("------------------- Odin Korea Server -------------------");

	//CleanUserInfo();
	LoadUserInfo();
	LoadPatchInfo();
	LoadAddrInfo();
	
	swprintf(szPath, L"%s\\Info.ini", g_szAppPath);
	g_bServerStop = GetPrivateProfileInt(L"SEVERINFO", L"STATUS", 0, szPath);

	net::AddAcceptHandler(&g_Aceptor, 37564);
	net::AddAcceptHandler(&g_PatchAceptor, 34732);

	net::Start();

// 	AddVectoredExceptionHandler(0, (PVECTORED_EXCEPTION_HANDLER)VectoredHandler);
// 	SetUnhandledExceptionFilter(VectoredHandler);

	NewAddVectoredExceptionHandler pFuncAddVectoredExceptionHandler = (NewAddVectoredExceptionHandler)dwAddr;
	pFuncAddVectoredExceptionHandler(1, (PVECTORED_EXCEPTION_HANDLER)VectoredHandler);

	int nUserCount, nPatchCount, nGarbageUser = 0, nGarbagePatch = 0;
	int nPrevUserCount, nPrevPatchCount;

	nPrevUserCount = 0;
	nPrevPatchCount = 0;

	while(true)
	{
		nUserCount = 0;
		nPatchCount = 0;
		nGarbageUser = 0;
		nGarbagePatch = 0;

		g_cs.Enter();

		for (UserListType::iterator itr = g_users.begin(); itr != g_users.end(); )
		{
			CUsers* user = *itr;
			user->Update();

			if(user->dwLastTime && GetTickCount() >= user->dwLastTime + 15 * 60 * 1000)				// 15분이상 통신이 없으면 그냥 꺼치우자
			{
				char ipStr[256];
				sprintf(ipStr, "%u.%u.%u.%u", (unsigned int)((unsigned char*)&user->dwIp)[0], (unsigned int)((unsigned char*)&user->dwIp)[1], (unsigned int)((unsigned char*)&user->dwIp)[2], (unsigned int)((unsigned char*)&user->dwIp)[3]);

				if (user->nLevel == LEVEL_USER)
					Log("%s User Time Disconnect From %s", user->UserInfo.szID, ipStr);
				else if(user->nLevel == LEVEL_ADMIN)
					Log("Admin(%s) Time DisConnect From %s", user->UserInfo.szID, ipStr);
				else if(user->nLevel == LEVEL_SUPERVISOR)
					Log("Supervisor Time DisConnected From %s", ipStr);

				user->nLevel = LEVEL_NONE;
				user->m_pStream->RequestForceDisConnect();
			}

			itr++;
		}
		
		g_cs.Leave();

		g_cs.Enter();

		for (UserListType::iterator itr = g_users.begin(); itr != g_users.end(); )
		{
			CUsers* user = *itr;
			if ((user->m_pStream && user->m_pStream->IsDisConnect()))								// 종료 기발이 다 섰으면 제거하자
			{
				char ipStr[256];
				sprintf(ipStr, "%u.%u.%u.%u", (unsigned int)((unsigned char*)&user->dwIp)[0], (unsigned int)((unsigned char*)&user->dwIp)[1], (unsigned int)((unsigned char*)&user->dwIp)[2], (unsigned int)((unsigned char*)&user->dwIp)[3]);

				switch(user->nLevel)
				{
				case LEVEL_USER:
					{
						Log("%s User DisConnected From %s", user->UserInfo.szID, ipStr);
					}
					break;
				case LEVEL_ADMIN:
					{
						Log("Admin(%s) DisConnected From %s", user->UserInfo.szID, ipStr);
					}
					break;
				case LEVEL_SUPERVISOR:
					{
						Log("Supervisor DisConnected From %s", ipStr);
					}
					break;
				}

				if(user->m_pStream)
				{
					net::DestroyNetStream(user->m_pStream);
					user->m_pStream = NULL;
				}

				delete user;
				user = NULL;
				g_users.erase(itr++);
				continue;
			}
			
			if(user->nLevel == LEVEL_USER)
				nUserCount ++;
			else if(user->nLevel == LEVEL_NONE)
				nGarbageUser ++;

			itr++;
		}

		g_cs.Leave();

		g_cs.Enter();

		for (PatchListType::iterator itr = g_patchs.begin(); itr != g_patchs.end(); )
		{
			CPatch* user = *itr;
			user->Update();

			if(user->dwLastTime && GetTickCount() >= user->dwLastTime + 60 * 60 * 1000)
			{
				char ipStr[256];
				sprintf(ipStr, "%u.%u.%u.%u", (unsigned int)((unsigned char*)&user->dwIp)[0], (unsigned int)((unsigned char*)&user->dwIp)[1], (unsigned int)((unsigned char*)&user->dwIp)[2], (unsigned int)((unsigned char*)&user->dwIp)[3]);

				if(user->nLevel == LEVEL_ADMIN)
					Log("Admin(%s) Time DisConnect From %s", user->szID, ipStr);
				else if(user->nLevel == LEVEL_SUPERVISOR)
					Log("Supervisor Time DisConnected From %s", ipStr);

				user->nLevel = LEVEL_NONE;
				user->m_pStream->RequestForceDisConnect();
			}

			itr++;
		}

		g_cs.Leave();

		g_cs.Enter();

		for (PatchListType::iterator itr = g_patchs.begin(); itr != g_patchs.end(); )
		{
			CPatch* user = *itr;
			if ((user->m_pStream && user->m_pStream->IsDisConnect()))
			{
				char ipStr[256];
				sprintf(ipStr, "%u.%u.%u.%u", (unsigned int)((unsigned char*)&user->dwIp)[0], (unsigned int)((unsigned char*)&user->dwIp)[1], (unsigned int)((unsigned char*)&user->dwIp)[2], (unsigned int)((unsigned char*)&user->dwIp)[3]);

				switch(user->nLevel)
				{
				case LEVEL_USER:
					{
						Log("%s User Patch DisConnected From %s", user->szID, ipStr);
					}
					break;
				case LEVEL_ADMIN:
					{
						Log("Admin(%s) DisConnected From %s", user->szID, ipStr);
					}
					break;
				case LEVEL_SUPERVISOR:
					{
						Log("Supervisor DisConnected From %s", ipStr);
					}
					break;
				}

				if(user->m_pStream)
				{
					net::DestroyNetStream(user->m_pStream);
					user->m_pStream = NULL;
				}

				delete user;
				user = NULL;
				g_patchs.erase(itr++);
				continue;
			}
			
#ifdef	PATCH_SERVER
			nPatchCount++;
#else
			if (user->nLevel != LEVEL_NONE)
				nPatchCount++;
			else
				nGarbagePatch ++;
#endif

			itr++;
		}

		g_cs.Leave();

		if(nPrevUserCount != nUserCount || nPrevPatchCount != nPatchCount)
		{
			nPrevUserCount = nUserCount;
			nPrevPatchCount = nPatchCount;

			WCHAR szConsole[200];
			swprintf(szConsole, L"Korea Server( User: %d, Patch: %d) (Garbage: %d / %d)", nUserCount, nPatchCount, nGarbageUser, nGarbagePatch);
			SetConsoleTitle(szConsole);
		}

		Sleep(1);
	}

	net::Stop();
	net::ExitWinsock();

	CloseHandle(hEvent);

	return 0;
}




void Log(char *szFormat, ...)
{
	g_csLog.Enter();

	WCHAR szPath[MAX_PATH];
	SYSTEMTIME time;

	GetLocalTime(&time);
	swprintf(szPath, L"%s\\Log\\%02d-%02d-%02d.log", g_szAppPath, time.wYear, time.wMonth, time.wDay);

	va_list	arg;
	char szLog[1000];

	memset(szLog, 0, 1000);
	va_start(arg, szFormat);
	vsprintf(szLog, szFormat, arg);
	va_end(arg);

	strcat(szLog, "\n");

	FILE *fp = _wfopen(szPath, L"a+");
	if(fp)
	{	
		fprintf(fp, "%02d:%02d:%02d -> %s", time.wHour, time.wMinute, time.wSecond, szLog);
		fclose(fp);
	}

	printf(szLog);

	g_csLog.Leave();
}



void SaveUserInfo()
{
	WCHAR	szPath[MAX_PATH];

	swprintf(szPath, L"%s\\UserInfo.db", g_szAppPath);

	FILE *fp = _wfopen(szPath, L"wb");
	if(fp)
	{
		if(g_pUserInfo)
		{
			fwrite((const void*)&g_nUserNum, sizeof(int), 1, fp);
			if(g_nUserNum > 0)
			{
				fwrite(g_pUserInfo, sizeof(USERINFO) * g_nUserNum, 1, fp);
			}
		}
		else
		{
			g_nUserNum = 0;
			fwrite((const void*)&g_nUserNum, sizeof(int), 1, fp);
		}

		fclose(fp);
	}

	Log("User Info Save Success");
}



void CleanUserInfo()
{
	LoadUserInfo();

	if(g_nUserNum > 0)
	{
		g_pTempUserInfo = new USERINFO[g_nUserNum];
		ZeroMemory(g_pTempUserInfo, g_nUserNum * sizeof(USERINFO));

		int nTempNum = g_nUserNum;

		SYSTEMTIME time;
		GetLocalTime(&time);

		DWORD dwCurTime = ((((time.wYear % 100) * 100 + time.wMonth) * 100 + time.wDay) * 100 + time.wHour) * 100 + time.wMinute;
		dwCurTime = 2112010000;

		int nCount = 0;
		for(int i = 0; i < g_nUserNum; i++)
		{
			if(g_pUserInfo[i].dwExpire == 0 || g_pUserInfo[i].dwExpire > dwCurTime)
			{
				memcpy(&g_pTempUserInfo[nCount], &g_pUserInfo[i], sizeof(USERINFO));
				nCount ++;
			}
		}

		delete[] g_pUserInfo;
		g_pUserInfo = g_pTempUserInfo;
		g_pTempUserInfo = NULL;
		g_nUserNum = nCount;

		if(nTempNum != g_nUserNum)
			SaveUserInfo();
	}
}



void LoadUserInfo()
{
	WCHAR	szPath[MAX_PATH];

	swprintf(szPath, L"%s\\UserInfo.db", g_szAppPath);

	g_csUser.Enter();

	if(g_pUserInfo)
		delete[] g_pUserInfo;
	g_pUserInfo = NULL;

	FILE *fp = _wfopen(szPath, L"rb");
	if(fp)
	{
		fread(&g_nUserNum, sizeof(int), 1, fp);
		if(g_nUserNum > 0)
		{
			g_pUserInfo = new USERINFO[g_nUserNum];
			memset(g_pUserInfo, 0, sizeof(USERINFO) * g_nUserNum);

			fread(g_pUserInfo, sizeof(USERINFO) * g_nUserNum, 1, fp);
		}

		fclose(fp);
	}
	else
	{
		g_nUserNum = 0;
	}

	g_csUser.Leave();

	Log("UserInfo Load Success");
}


void SavePatchInfo()
{
	WCHAR	szPath[MAX_PATH];

	swprintf(szPath, L"%s\\PatchInfo.db", g_szAppPath);

	g_csPatch.Enter();

	FILE *fp = _wfopen(szPath, L"wb");
	if(fp)
	{
		if(g_pbPatchBytes)
		{
			fwrite((const void*)&g_dwPatchVersion, sizeof(DWORD), 1, fp);
			fwrite((const void*)&g_nPatchSize, sizeof(int), 1, fp);
			fwrite(g_pbPatchBytes, g_nPatchSize, 1, fp);
		}
		else
		{
			g_nPatchSize = 0;
			fwrite((const void*)&g_dwPatchVersion, sizeof(DWORD), 1, fp);
			fwrite((const void*)&g_nPatchSize, sizeof(int), 1, fp);
		}
		fclose(fp);
	}

	g_csPatch.Leave();

	Log("Patch Data Save Success");
}



void LoadPatchInfo()
{
	WCHAR	szPath[MAX_PATH];

	g_dwPatchServerIP = GetPrivateProfileInt(L"PatchServer", L"IP", 0, L"C:\\PatchServer.ini");
	g_dwPatchServerPort = GetPrivateProfileInt(L"PatchServer", L"Port", 0, L"C:\\PatchServer.ini");

	swprintf(szPath, L"%s\\PatchInfo.db", g_szAppPath);

	g_csPatch.Enter();

	if(g_pbPatchBytes)
		delete[] g_pbPatchBytes;
	g_pbPatchBytes = NULL;

	FILE *fp = _wfopen(szPath, L"rb");
	if(fp)
	{
		if(g_pbPatchBytes)
		{
			delete[] g_pbPatchBytes;
			g_pbPatchBytes = NULL;
		}

		fread(&g_dwPatchVersion, sizeof(DWORD), 1, fp);
		fread(&g_nPatchSize, sizeof(int), 1, fp);
		if(g_nPatchSize > 0)
		{
			g_pbPatchBytes = new BYTE[g_nPatchSize];
			memset(g_pbPatchBytes, 0, g_nPatchSize);

			fread(g_pbPatchBytes, g_nPatchSize, 1, fp);
		}

		fclose(fp);

		Log("Patch Data Load [Version: %08X]", g_dwPatchVersion);
	}
	else
	{
		g_dwPatchVersion = 0x00000000;
		g_nPatchSize = 0;
	}

	g_csPatch.Leave();
}




void CUserAceptHandler::OnAccept(SOCKET socket,DWORD ip)
{
	g_cs.Enter();

	if(g_dwServerIP == 0)
	{
		SOCKADDR_IN addr;
		int len = sizeof(SOCKADDR_IN);

		memset(&addr, 0, sizeof(SOCKADDR_IN));
		if(!getsockname(socket, (sockaddr*)&addr, &len))
		{
			g_dwServerIP = (DWORD)addr.sin_addr.S_un.S_addr;
			Log("Server IP: %u.%u.%u.%u", (unsigned int)((unsigned char*)&g_dwServerIP)[0], (unsigned int)((unsigned char*)&g_dwServerIP)[1], (unsigned int)((unsigned char*)&g_dwServerIP)[2], (unsigned int)((unsigned char*)&g_dwServerIP)[3]);
		}
	}

	CUsers* client = NULL;
	client = new CUsers;

	memset(client, 0, sizeof(CUsers));

	char ipStr[256];

	client->m_pStream = net::CreateNetStream(socket, ip, 1024, 1024);
	if(client->m_pStream)
	{
		client->dwIp = ip;
		GenerateKey(client->bKey, 20);
		g_users.push_back(client);

		DWORD dwCurIP = (client->dwIp % 0x100) * 0x1000000 + ((client->dwIp % 0x10000) / 0x100) * 0x10000 + ((client->dwIp % 0x1000000) / 0x10000) * 0x100 + client->dwIp / 0x1000000;
		
		memset(ipStr, 0, 256);
		memcpy(ipStr, client->bKey, 20);

		client->dwLastTime = GetTickCount();
		client->m_pStream->Send(ipStr, 20);
	}
	else
	{
		delete client;
		client = NULL;
	}

	g_cs.Leave();
}



void CPatchAceptHandler::OnAccept(SOCKET socket,DWORD ip)
{
	g_cs.Enter();

	if(g_dwServerIP == 0)
	{
		SOCKADDR_IN addr;
		int len = sizeof(SOCKADDR_IN);

		memset(&addr, 0, sizeof(SOCKADDR_IN));
		if(!getsockname(socket, (sockaddr*)&addr, &len))
		{
			g_dwServerIP = (DWORD)addr.sin_addr.S_un.S_addr;
			Log("Server IP: %u.%u.%u.%u", (unsigned int)((unsigned char*)&g_dwServerIP)[0], (unsigned int)((unsigned char*)&g_dwServerIP)[1], (unsigned int)((unsigned char*)&g_dwServerIP)[2], (unsigned int)((unsigned char*)&g_dwServerIP)[3]);
		}
	}

	int nCount = 0;
	for (PatchListType::iterator itr = g_patchs.begin(); itr != g_patchs.end(); ++itr)
		nCount++;

	CPatch* client = NULL;
	client = new CPatch;

	memset(client, 0, sizeof(CPatch));

	if(nCount >= 90)
	{
		client->m_pStream = net::CreateNetStream(socket, ip, 1024, 1024);
		if(client->m_pStream)
		{	
			client->dwIp = ip;
			g_patchs.push_back(client);

			char ipStr[256];
			memset(ipStr, 0, 256);
			memset(client->bKey, 1, 20);
			memcpy(ipStr, client->bKey, 20);

			client->dwLastTime = GetTickCount();
			client->m_pStream->Send(ipStr, 20);
			client->m_pStream->RequestForceDisConnect();
		}
		else
		{
			delete client;
			client = NULL;
		}
	}
	else
	{
#ifdef	PATCH_SERVER
		client->m_pStream = net::CreateNetStream(socket, ip, 0x1CA0000, 0x500000);
#else
		client->m_pStream = net::CreateNetStream(socket, ip, 0x1000000, 0x1000000);
#endif
		if(client->m_pStream)
		{	
			client->dwIp = ip;
			GenerateKey(client->bKey, 20);
			g_patchs.push_back(client);

			char ipStr[256];
			memset(ipStr, 0, 256);
			memcpy(ipStr, client->bKey, 20);

			client->dwLastTime = GetTickCount();
			client->m_pStream->Send(ipStr, 20);
		}
		else
		{
			delete client;
			client = NULL;
		}
	}

	g_cs.Leave();
}



void GenerateKey(BYTE *pbBuffer, int Len)
{
	HCRYPTPROV	hCryptProv;
	HCRYPTHASH	hHash;
	DWORD		dwLen = Len;

	if(!CryptAcquireContext(&hCryptProv, NULL, MS_ENHANCED_PROV, PROV_RSA_FULL, 0))
	{
		if(!CryptAcquireContext(&hCryptProv, NULL, MS_ENHANCED_PROV, PROV_RSA_FULL, CRYPT_NEWKEYSET))
		{
			if(GetLastError() != NTE_EXISTS || !CryptAcquireContext(&hCryptProv, NULL, MS_ENHANCED_PROV, PROV_RSA_FULL, CRYPT_MACHINE_KEYSET))
				return;
		}
	}
	if(!CryptCreateHash(hCryptProv, CALG_SHA1, 0, 0, &hHash)) 
		return;
	memset(pbBuffer, 0, Len);
	*(DWORD *)pbBuffer = GetTickCount();
	CryptHashData(hHash, pbBuffer, Len, 0);
	CryptGetHashParam(hHash, HP_HASHVAL, pbBuffer, &dwLen, 0);
	CryptDestroyHash(hHash);
	CryptReleaseContext(hCryptProv,0);
}



BYTE *g_pbuserRecv = NULL;
void CUsers::Update()
{
	if(!m_pStream)
		return;

	int nRecvLen = m_pStream->CheckRecv(NULL, 512);
	if(nRecvLen <= 0)
		return;

	g_pbuserRecv = new BYTE[nRecvLen];
	ZeroMemory(g_pbuserRecv, nRecvLen);

	m_pStream->CheckRecv((CHAR*)g_pbuserRecv, 512);
	nRecvLen = DecryptData(g_pbuserRecv, nRecvLen, bKey);
	if (nRecvLen <= 0)
	{
		delete[] g_pbuserRecv;
		return;
	}

	if (nRecvLen % 16 != 0)
		nRecvLen = ((nRecvLen / 16) + 1) * 16;
	OnAESDecrypt(g_pbuserRecv, g_pbuserRecv, nRecvLen);

	if(nLevel != LEVEL_NONE)
		dwLastTime = GetTickCount();

	BOOL bPatchServer = FALSE;
#ifdef	PATCH_SERVER
	bPatchServer = TRUE;
#endif

	BYTE bOpCode = *(BYTE*)(g_pbuserRecv + 12);
	
	int nSendLen = 512;
	BYTE bSendData[1024] = { 0, };
	for (int i = 0; i < 512; i++)
		bSendData[i] = (BYTE)rand();
	*(BYTE*)(bSendData + 13) = bOpCode;

	switch(bOpCode)
	{
	case OPCODE_VERSIONCHECK:
		{
			if(bPatchServer || nLevel != LEVEL_NONE || g_bServerStop || nRecvLen != 400)
			{
				*(DWORD*)(bSendData + 25) = 0xFFFFFFFF;
				//nLen = MakePacket(SendData, "cd", OPCODE_VERSIONCHECK, 0xFFFFFFFF);
			}
			else
			{
				DWORD dwVersion = *(DWORD*)(g_pbuserRecv + 22);
				DWORD dwValue = 0xFFFFFFFF;
				DWORD dwServerIP = g_dwPatchServerIP;
				DWORD dwServerPort = g_dwPatchServerPort;

				if(dwVersion == g_dwPatchVersion)
				{
					dwValue = 0x00000000;
					dwServerIP = 0;
					dwServerPort = 0;
				}

				*(DWORD*)(bSendData + 25) = dwValue;
				*(DWORD*)(bSendData + 32) = dwServerIP;
				*(DWORD*)(bSendData + 47) = dwServerPort;
				*(DWORD*)(bSendData + 58) = dwIp;

				//nLen = MakePacket(SendData, "cdddd", OPCODE_VERSIONCHECK, dwValue, dwServerIP, dwServerPort, dwIp);
			}

			OnAESEncrypt(bSendData, bSendData, nSendLen);
			nSendLen = EncryptData(bSendData, nSendLen, bSendData, bKey);
			m_pStream->Send((char*)bSendData, nSendLen);
			m_pStream->RequestForceDisConnect();
		}
		break;
	case OPCODE_USERLOGIN:
		{
			if(bPatchServer || nLevel != LEVEL_NONE || nRecvLen != 400)
			{
				*(BYTE*)(bSendData + 24) = 0xFE;
				//nLen = MakePacket(SendData, "cd", OPCODE_USERLOGIN, 0xFFFFFFFE);

				OnAESEncrypt(bSendData, bSendData, nSendLen);
				nSendLen = EncryptData(bSendData, nSendLen, bSendData, bKey);
				m_pStream->Send((char*)bSendData, nSendLen);
				m_pStream->RequestDisConnect();
			}
			// 서버 점검중이다
			else if (g_bServerStop)
			{
				*(BYTE*)(bSendData + 24) = 0x27;
				//nLen = MakePacket(SendData, "cd", OPCODE_USERLOGIN, 0x08443927);

				OnAESEncrypt(bSendData, bSendData, nSendLen);
				nSendLen = EncryptData(bSendData, nSendLen, bSendData, bKey);
				m_pStream->Send((char*)bSendData, nSendLen);
				m_pStream->RequestDisConnect();
			}
			// 주소가 없다
			else if (g_nAddrCount <= 0)
			{
				*(BYTE*)(bSendData + 24) = 0x26;
				//nLen = MakePacket(SendData, "cd", OPCODE_USERLOGIN, 0x08443926);

				OnAESEncrypt(bSendData, bSendData, nSendLen);
				nSendLen = EncryptData(bSendData, nSendLen, bSendData, bKey);
				m_pStream->Send((char*)bSendData, nSendLen);
				m_pStream->RequestDisConnect();
			}
			else
			{
				char* m_szAutoID		= (char*) (g_pbuserRecv + 33);
				char* m_szGameID		= (char*) (g_pbuserRecv + 89);
				char* m_szHostName		= (char*) (g_pbuserRecv + 144);
				char* m_szLocalIP		= (char*) (g_pbuserRecv + 200);
				char* m_szMacAddress	= (char*) (g_pbuserRecv + 227);
				int m_nMultiIndex		= *(BYTE*)(g_pbuserRecv + 250);

				int m_nCpuID[4] = { 0, };				
				m_nCpuID[0]				= *(int*) (g_pbuserRecv + 257);
				m_nCpuID[1]				= *(int*) (g_pbuserRecv + 265);
				m_nCpuID[2]				= *(int*) (g_pbuserRecv + 270);
				m_nCpuID[3]				= *(int*) (g_pbuserRecv + 275);
				
				DWORD m_dwHddNumber		= *(DWORD*)(g_pbuserRecv + 283);
				DWORD m_dwExeVersion	= *(DWORD*)(g_pbuserRecv + 295);
				DWORD m_dwClientPID		= *(DWORD*)(g_pbuserRecv + 300);

				// 인증에 필요한 정보들이 부족하다
				if (!strcmp(m_szGameID, "") || !strcmp(m_szHostName, "") || 
					!strcmp(m_szLocalIP, "") || !strcmp(m_szMacAddress, "") || m_dwHddNumber == 0)
				{
					*(BYTE*)(bSendData + 24) = 0xFE;
					//nLen = MakePacket(SendData, "cd", OPCODE_USERLOGIN, 0xFFFFFFFE);

					OnAESEncrypt(bSendData, bSendData, nSendLen);
					nSendLen = EncryptData(bSendData, nSendLen, bSendData, bKey);
					m_pStream->Send((char*)bSendData, nSendLen);
					m_pStream->RequestDisConnect();
					break;
				}

				g_csUser.Enter();

				int nIndex = -1;
				for (int i = 0; i < g_nUserNum; i++)
				{
					if (!stricmp(g_pUserInfo[i].szID, m_szAutoID))
					{
						nIndex = i;
						break;
					}
				}

				// 사용자 정보가 없다
				if (nIndex == -1)
				{
					*(BYTE*)(bSendData + 24) = 0x34;
					//nLen = MakePacket(SendData, "cd", OPCODE_USERLOGIN, 0xE0844934);

					OnAESEncrypt(bSendData, bSendData, nSendLen);
					nSendLen = EncryptData(bSendData, nSendLen, bSendData, bKey);
					m_pStream->Send((char*)bSendData, nSendLen);
				}
				// 정지된 계정이다
				else if (!g_pUserInfo[nIndex].bEnable)
				{
					*(BYTE*)(bSendData + 24) = 0xA0;
					//nLen = MakePacket(SendData, "cd", OPCODE_USERLOGIN, 0xEFABC5A0);

					OnAESEncrypt(bSendData, bSendData, nSendLen);
					nSendLen = EncryptData(bSendData, nSendLen, bSendData, bKey);
					m_pStream->Send((char*)bSendData, nSendLen);
					m_pStream->RequestDisConnect();
				}
				else
				{
					// 현재 접속된 계정이 있는지 체크하자
					BOOL bConnected = FALSE;
					int nSkipIndex = 0;
					for (UserListType::iterator itr = g_users.begin(); itr != g_users.end(); ++itr)
					{
						CUsers* user = *itr;
						if (user->nLevel != LEVEL_USER)
							continue;

						if (stricmp(user->UserInfo.szID, m_szAutoID))
							continue;

						// 일단 접속 못한다고 기발 설정하자
						bConnected = TRUE;

						// 호스트 이름이 다르다
						if (stricmp(m_szHostName, user->szHostName))
						{
							nSkipIndex = 1;
							break;
						}							
						
						// 로컬 아이피가 다르다
						if (stricmp(m_szLocalIP, user->szLocalIP))
						{
							nSkipIndex = 2;
							break;
						}
						
						// Mac 주소가 다르다
						if (stricmp(m_szMacAddress, user->szMacAddr))
						{
							nSkipIndex = 3;
							break;
						}
						
						// CPU ID가 다르다
						if (m_nCpuID[0] != user->dwCPUID[0] || m_nCpuID[1] != user->dwCPUID[1] ||
							m_nCpuID[2] != user->dwCPUID[2] || m_nCpuID[3] != user->dwCPUID[3])
						{
							nSkipIndex = 4;
							break;
						}
						
						// 하드 번호가 다르다
						if (m_dwHddNumber != user->dwHddSerial)
						{
							nSkipIndex = 5;
							break;
						}
						
						// 접속하는 번호가 다르다
						if (m_nMultiIndex != user->nMultiIndex)
						{
							nSkipIndex = 6;
							break;
						}
						
						// 이미 접속한 계정 강제 종료시키자					
						user->nLevel = LEVEL_NONE;
						user->m_pStream->RequestForceDisConnect();

						Log("%s (Login) Force Disconnect From %u.%u.%u.%u", g_pUserInfo[nIndex].szID, (unsigned int)((unsigned char*)& dwIp)[0], (unsigned int)((unsigned char*)& dwIp)[1], (unsigned int)((unsigned char*)& dwIp)[2], (unsigned int)((unsigned char*)& dwIp)[3]);
						bConnected = FALSE;
						break;
					}

					// 다른 컴에서 접속한 상태다
					if (bConnected)
					{
						*(BYTE*)(bSendData + 24) = 0xFF;
						*(BYTE*)(bSendData + 27) = (BYTE)nSkipIndex;
						//nLen = MakePacket(SendData, "cdd", OPCODE_USERLOGIN, 0xFFFFFFFF, nSkipIndex);

						OnAESEncrypt(bSendData, bSendData, nSendLen);
						nSendLen = EncryptData(bSendData, nSendLen, bSendData, bKey);
						m_pStream->Send((char*)bSendData, nSendLen);
						m_pStream->RequestDisConnect();
					}
					else
					{
						SYSTEMTIME time;
						GetLocalTime(&time);

						DWORD dwCurTime = ((((time.wYear % 100) * 100 + time.wMonth) * 100 + time.wDay) * 100 + time.wHour) * 100 + time.wMinute;
						if (g_pUserInfo[nIndex].dwExpire == 0)
						{
							CTime CurTime(time.wYear, time.wMonth, time.wDay, time.wHour, time.wMinute, 0);
							DWORD dwAddTime = 0;
							switch (g_pUserInfo[nIndex].nType)
							{
							case 0:								// 2시간
								{
									dwAddTime = 2 * 100;
								}
								break;
							case 1:								// 1 일
								{
									dwAddTime = 1 * 10000;
								}
								break;
							case 2:								// 3 일
								{
									dwAddTime = 3 * 10000;
								}
								break;
							case 3:								// 7 일
								{
									dwAddTime = 7 * 10000;
								}
								break;
							case 4:								// 15 일
								{
									dwAddTime = 15 * 10000;
								}
								break;
							case 5:								// 30 일
								{
									dwAddTime = 30 * 10000;
								}
								break;
							case 6:								// 37 일
								{
									dwAddTime = 37 * 10000;
								}
								break;
							default:
								{
									dwAddTime = 0;
								}
								break;
							}

							if (dwAddTime > 0)
							{
								CTime ExpTime = CurTime + CTimeSpan((dwAddTime % 1000000) / 10000, (dwAddTime % 10000) / 100, dwAddTime % 100, 0);
								g_pUserInfo[nIndex].dwExpire = (ExpTime.GetYear() % 100) * 100000000 + ExpTime.GetMonth() * 1000000 + ExpTime.GetDay() * 10000 + ExpTime.GetHour() * 100 + ExpTime.GetMinute();
								g_pUserInfo[nIndex].dwChargedTime = dwCurTime;

								SaveUserInfo();
							}
						}

						if (dwCurTime < g_pUserInfo[nIndex].dwExpire)
						{
							strcpy(UserInfo.szID, m_szAutoID);
							this->dwConnectTime = dwCurTime;
							this->nLevel = LEVEL_USER;
							this->dwRealKeyword = GetTickCount();
							this->dwExeVersion = m_dwExeVersion;
							this->nMultiIndex = m_nMultiIndex;
							strcpy(this->szGameID, m_szGameID);
							strcpy(this->szHostName, m_szHostName);
							strcpy(this->szLocalIP, m_szLocalIP);
							strcpy(this->szMacAddr, m_szMacAddress);
							this->dwCPUID[0] = m_nCpuID[0];		this->dwCPUID[1] = m_nCpuID[1];		this->dwCPUID[2] = m_nCpuID[2];		this->dwCPUID[3] = m_nCpuID[3];
							this->dwHddSerial = m_dwHddNumber;
							this->dwClientPID = m_dwClientPID;
							
							*(BYTE*)(bSendData + 29) = g_nAddrCount;
							EncryptAddr(bSendData + 40, this->UserInfo.szID, this->dwClientPID, 
								this->nMultiIndex, this->szGameID);
							
							*(BYTE*)(bSendData + 24) = 0x00;
							*(DWORD*)(bSendData + 0) = g_pUserInfo[nIndex].dwExpire;
							*(DWORD*)(bSendData + 9) = this->dwRealKeyword;
// 							nLen = MakePacket(SendData, "cddddb", OPCODE_USERLOGIN, 0x00000000, g_pUserInfo[nIndex].dwExpire, this->dwRealKeyword,
// 								g_nAddrCount, pbEncData, nEncLen);						// 인증 성공

							OnAESEncrypt(bSendData, bSendData, nSendLen);
							nSendLen = EncryptData(bSendData, nSendLen, bSendData, bKey);
							m_pStream->Send((char*)bSendData, nSendLen);

							Log("%s (%s) Logined From %u.%u.%u.%u", g_pUserInfo[nIndex].szID, m_szGameID, (unsigned int)((unsigned char*)& dwIp)[0], (unsigned int)((unsigned char*)& dwIp)[1], (unsigned int)((unsigned char*)& dwIp)[2], (unsigned int)((unsigned char*)& dwIp)[3]);
						}
						else
						{
							*(BYTE*)(bSendData + 24) = 0x9E;
							//nLen = MakePacket(SendData, "cd", OPCODE_USERLOGIN, 0xEFDD809E);												// 사용기간이 만료

							OnAESEncrypt(bSendData, bSendData, nSendLen);
							nSendLen = EncryptData(bSendData, nSendLen, bSendData, bKey);
							m_pStream->Send((char*)bSendData, nSendLen);
						}
					}
				}

				g_csUser.Leave();
			}
		}
		break;
	case OPCODE_TIMEEXPIRED:
		{
			if(bPatchServer || nLevel != LEVEL_USER || nRecvLen != 400 || g_bServerStop)
			{
				*(BYTE*)(bSendData + 7) = 0x44;
				//nLen = MakePacket(SendData, "cd", OPCODE_TIMEEXPIRED, 0xE02D3844);

				OnAESEncrypt(bSendData, bSendData, nSendLen);
				nSendLen = EncryptData(bSendData, nSendLen, bSendData, bKey);
				m_pStream->Send((char*)bSendData, nSendLen);
				m_pStream->RequestDisConnect();
			}
			else
			{
				DWORD dwClientKeyWord = *(DWORD*)(g_pbuserRecv + 1);
				BYTE bGameInfo = *(BYTE*)(g_pbuserRecv + 8);

				int m_nGameServer = -1;
				WCHAR* m_szCharName = NULL;

				if (bGameInfo == 1)
				{
					m_nGameServer = *(BYTE*)(g_pbuserRecv + 21);
					m_szCharName = (WCHAR*)(g_pbuserRecv + 33);
					m_szCharName[50] = 0;
				}

				if(!strcmp(UserInfo.szID, "") || this->dwRealKeyword != dwClientKeyWord)
				{
					*(BYTE*)(bSendData + 7) = 0x44;
					//nLen = MakePacket(SendData, "cd", OPCODE_TIMEEXPIRED, 0xE02D3844);

					OnAESEncrypt(bSendData, bSendData, nSendLen);
					nSendLen = EncryptData(bSendData, nSendLen, bSendData, bKey);
					m_pStream->Send((char*)bSendData, nSendLen);
					m_pStream->RequestDisConnect();
				}
				else
				{
					SYSTEMTIME time;
					GetLocalTime(&time);

					DWORD dwCurTime = ((((time.wYear % 100) * 100 + time.wMonth) * 100 + time.wDay) * 100 + time.wHour) * 100 + time.wMinute;
					DWORD dwTimeExpired = 0;

					BOOL bFound = FALSE;

					g_csUser.Enter();

					for(int i = 0 ; i < g_nUserNum; i++)
					{
						if(!g_pUserInfo[i].bEnable)
							continue;

						if(!stricmp(g_pUserInfo[i].szID, UserInfo.szID))
						{
							dwTimeExpired = g_pUserInfo[i].dwExpire;
							bFound = TRUE;

							break;
						}
					}

					g_csUser.Leave();

					if(bFound)
					{
						if(dwTimeExpired <= dwCurTime)
						{
							nLevel = LEVEL_NONE;

							*(BYTE*)(bSendData + 7) = 0xC3;
							//nLen = MakePacket(SendData, "cd", OPCODE_TIMEEXPIRED, 0x09E38AC3);

							OnAESEncrypt(bSendData, bSendData, nSendLen);
							nSendLen = EncryptData(bSendData, nSendLen, bSendData, bKey);
							m_pStream->Send((char*)bSendData, nSendLen);
							m_pStream->RequestForceDisConnect();
						}
						else
						{
							if (bGameInfo == 1 && m_szCharName != NULL)
							{
								this->nGameServer = m_nGameServer;
								if (memcmp((BYTE*)this->szCharName, (BYTE*)m_szCharName, sizeof(WCHAR) * 50))
								{
									memset(this->szCharName, 0, sizeof(WCHAR) * 50);
									wcscpy(this->szCharName, m_szCharName);
								}
							}
							else if (this->nGameServer != -1)
							{
								this->nGameServer = -1;
								memset(this->szCharName, 0, sizeof(WCHAR) * 50);
							}
							
							this->dwRealKeyword = GetTickCount();

							*(BYTE*)(bSendData + 21) = g_nAddrCount;
							EncryptAddr(bSendData + 35, this->UserInfo.szID, this->dwClientPID,
								this->nMultiIndex, this->szGameID);

							*(BYTE*)(bSendData + 7) = 0x9E;
							*(DWORD*)(bSendData + 1) = g_dwPatchVersion;
							*(DWORD*)(bSendData + 14) = this->dwRealKeyword;

// 							nLen = MakePacket(SendData, "cddddb", OPCODE_TIMEEXPIRED, 0xFEDAC79E, g_dwPatchVersion, this->dwRealKeyword, 
// 								g_nAddrCount, pbEncData, nEncLen);

							OnAESEncrypt(bSendData, bSendData, nSendLen);
							nSendLen = EncryptData(bSendData, nSendLen, bSendData, bKey);
							m_pStream->Send((char*)bSendData, nSendLen);
						}
					}
					else
					{
						nLevel = LEVEL_NONE;
						*(BYTE*)(bSendData + 7) = 0xFF;
						//nLen = MakePacket(SendData, "cd", OPCODE_TIMEEXPIRED, 0xFFFFFFFF);

						OnAESEncrypt(bSendData, bSendData, nSendLen);
						nSendLen = EncryptData(bSendData, nSendLen, bSendData, bKey);
						m_pStream->Send((char*)bSendData, nSendLen);
						m_pStream->RequestForceDisConnect();
					}
				}
			}
		}
		break;
	case OPCODE_RELOGIN:
		{
			if (bPatchServer || nRecvLen != 400 || nLevel != LEVEL_NONE || g_bServerStop || g_nAddrCount <= 0)
			{
				*(BYTE*)(bSendData + 17) = 0xFF;
				//nLen = MakePacket(SendData, "cd", OPCODE_RELOGIN, 0xFFFFFFFF);

				OnAESEncrypt(bSendData, bSendData, nSendLen);
				nSendLen = EncryptData(bSendData, nSendLen, bSendData, bKey);
				m_pStream->Send((char*)bSendData, nSendLen);
				m_pStream->RequestDisConnect();
			}
			else
			{
				DWORD m_dwRealKey		= *(DWORD*)(g_pbuserRecv + 1);
				char* m_szAutoID		= (char*)  (g_pbuserRecv + 15);
				char* m_szGameID		= (char*)  (g_pbuserRecv + 70);
				char* m_szHostName		= (char*)  (g_pbuserRecv + 127);
				char* m_szLocalIP		= (char*)  (g_pbuserRecv + 183);
				char* m_szMacAddr		= (char*)  (g_pbuserRecv + 205);
				int m_nMultiIndex		= *(BYTE*) (g_pbuserRecv + 229);

				int m_nCpuRegs[4] = { 0, };
				m_nCpuRegs[0]			= *(int*)  (g_pbuserRecv + 231);
				m_nCpuRegs[1]			= *(int*)  (g_pbuserRecv + 239);
				m_nCpuRegs[2]			= *(int*)  (g_pbuserRecv + 244);
				m_nCpuRegs[3]			= *(int*)  (g_pbuserRecv + 249);
				
				DWORD m_dwHddSerial		= *(DWORD*)(g_pbuserRecv + 258);
				DWORD m_dwExeVersion	= *(DWORD*)(g_pbuserRecv + 265);
				DWORD m_dwClientPID		= *(DWORD*)(g_pbuserRecv + 273);

				int	m_nGameServer = -1;
				WCHAR* m_szGameChar = NULL;

				BYTE m_bGameInfo		= *(BYTE*) (g_pbuserRecv + 280);
				if (m_bGameInfo == 1)
				{
					m_nGameServer		= *(BYTE*) (g_pbuserRecv + 290);
					m_szGameChar		= (WCHAR*) (g_pbuserRecv + 301);
					m_szGameChar[40] = 0;
				}

				BOOL bNetworkError = FALSE;

				BOOL bConnected = FALSE;
				for (UserListType::iterator itr = g_users.begin(); itr != g_users.end(); ++itr)
				{
					CUsers* user = *itr;
					if(user->nLevel != LEVEL_USER)
						continue;

					if(stricmp(user->UserInfo.szID, m_szAutoID))
						continue;
					
					bConnected = TRUE;

					if (user->nMultiIndex != m_nMultiIndex)
						break;

					if (stricmp(user->szGameID, m_szGameID))
						break;

					if (user->dwRealKeyword != m_dwRealKey)
						break;

					if (stricmp(user->szHostName, m_szHostName))
						break;

					if (stricmp(user->szLocalIP, m_szLocalIP))
						break;

					if (stricmp(user->szMacAddr, m_szMacAddr))
						break;

					if (user->dwCPUID[0] != m_nCpuRegs[0] || user->dwCPUID[1] != m_nCpuRegs[1] || user->dwCPUID[2] != m_nCpuRegs[2] || user->dwCPUID[3] != m_nCpuRegs[3])
						break;

					if (user->dwHddSerial != m_dwHddSerial)
						break;

					bConnected = FALSE;
					bNetworkError = TRUE;

					user->nLevel = LEVEL_NONE;
					user->m_pStream->RequestForceDisConnect();
					break;
				}

				if(bConnected)
				{
					*(BYTE*)(bSendData + 17) = 0xFF;
					//nLen = MakePacket(SendData, "cd", OPCODE_RELOGIN, 0xFFFFFFFF);			// 이미 접속된 유저가 있음

					OnAESEncrypt(bSendData, bSendData, nSendLen);
					nSendLen = EncryptData(bSendData, nSendLen, bSendData, bKey);
					m_pStream->Send((char*)bSendData, nSendLen);
					m_pStream->RequestDisConnect();
				}
				else
				{
					g_csUser.Enter();

					int nIndex = -1;
					for(int i = 0; i < g_nUserNum; i++)
					{
						if(!stricmp(g_pUserInfo[i].szID, m_szAutoID))
						{
							nIndex = i;
							break;
						}
					}

					if(nIndex == -1)
					{
						*(BYTE*)(bSendData + 17) = 0x09;
						//nLen = MakePacket(SendData, "cd", OPCODE_RELOGIN, 0xDBCEFA09);		// 사용자정보가 없음
						
						OnAESEncrypt(bSendData, bSendData, nSendLen);
						nSendLen = EncryptData(bSendData, nSendLen, bSendData, bKey);
						m_pStream->Send((char*)bSendData, nSendLen);
						m_pStream->RequestDisConnect();
					}
					else if(!g_pUserInfo[nIndex].bEnable)
					{
						*(BYTE*)(bSendData + 17) = 0xA0;
						//nLen = MakePacket(SendData, "cd", OPCODE_RELOGIN, 0xEFABC5A0);		// 임시중지된 사용자
						
						OnAESEncrypt(bSendData, bSendData, nSendLen);
						nSendLen = EncryptData(bSendData, nSendLen, bSendData, bKey);
						m_pStream->Send((char*)bSendData, nSendLen);
						m_pStream->RequestDisConnect();
					}
					else
					{
						SYSTEMTIME time;
						GetLocalTime(&time);

						DWORD	dwCurTime = ((((time.wYear % 100) * 100 + time.wMonth) * 100 + time.wDay) * 100 + time.wHour) * 100 + time.wMinute;
						if(dwCurTime < g_pUserInfo[nIndex].dwExpire)
						{
							this->dwConnectTime = dwCurTime;
							this->nLevel = LEVEL_USER;

							strcpy(UserInfo.szID, m_szAutoID);
							this->nMultiIndex = m_nMultiIndex;
							strcpy(this->szGameID, m_szGameID);
							strcpy(this->szHostName, m_szHostName);
							strcpy(this->szLocalIP, m_szLocalIP);
							strcpy(this->szMacAddr, m_szMacAddr);
							this->dwExeVersion = m_dwExeVersion;
							this->dwClientPID = m_dwClientPID;

							this->dwCPUID[0] = m_nCpuRegs[0];		this->dwCPUID[1] = m_nCpuRegs[1];		this->dwCPUID[2] = m_nCpuRegs[2];		this->dwCPUID[3] = m_nCpuRegs[3];
							this->dwHddSerial = m_dwHddSerial;
							
							this->dwRealKeyword = GetTickCount();

							if (m_bGameInfo != 0 && m_szGameChar != NULL)
							{
								this->nGameServer = m_nGameServer;
								if (memcmp((BYTE*)this->szCharName, (BYTE*)m_szGameChar, sizeof(WCHAR) * 50))
								{
									memset(this->szCharName, 0, sizeof(WCHAR) * 50);
									wcscpy(this->szCharName, m_szGameChar);
								}
							}
							else if (this->nGameServer != -1)
							{
								this->nGameServer = -1;
								memset(this->szCharName, 0, sizeof(WCHAR) * 50);
							}

							*(BYTE*)(bSendData + 0) = g_nAddrCount;
							EncryptAddr(bSendData + 33, this->UserInfo.szID, this->dwClientPID,
								this->nMultiIndex, this->szGameID);

							*(BYTE*)(bSendData + 17) = 0x00;
							*(DWORD*)(bSendData + 6) = this->dwRealKeyword;
							
							//nLen = MakePacket(SendData, "cdddb", OPCODE_RELOGIN, 0x00000000, this->dwRealKeyword, g_nAddrCount, pbEncData, nEncLen);		// 인증 성공

							OnAESEncrypt(bSendData, bSendData, nSendLen);
							nSendLen = EncryptData(bSendData, nSendLen, bSendData, bKey);
							m_pStream->Send((char*)bSendData, nSendLen);

							if(bNetworkError)
								Log("%s (Network) Relogined From %u.%u.%u.%u", g_pUserInfo[nIndex].szID, (unsigned int)((unsigned char*)&dwIp)[0], (unsigned int)((unsigned char*)&dwIp)[1], (unsigned int)((unsigned char*)&dwIp)[2], (unsigned int)((unsigned char*)&dwIp)[3]);
							else
								Log("%s Relogined From %u.%u.%u.%u", g_pUserInfo[nIndex].szID, (unsigned int)((unsigned char*)& dwIp)[0], (unsigned int)((unsigned char*)& dwIp)[1], (unsigned int)((unsigned char*)& dwIp)[2], (unsigned int)((unsigned char*)& dwIp)[3]);
						}
						else
						{
							*(BYTE*)(bSendData + 17) = 0x9E;
							//nLen = MakePacket(SendData, "cd", OPCODE_RELOGIN, 0xEFDD809E);		// 사용기간이 만료

							OnAESEncrypt(bSendData, bSendData, nSendLen);
							nSendLen = EncryptData(bSendData, nSendLen, bSendData, bKey);
							m_pStream->Send((char*)bSendData, nSendLen);
						}
					}

					g_csUser.Leave();
				}
			}
		}
		break;
	}

	if(g_pbuserRecv)
		delete[] g_pbuserRecv;
	g_pbuserRecv = NULL;
}


BYTE *g_pbPatchRecv = NULL;
void CPatch::Update()
{
	if(!m_pStream)
		return;

	BYTE SendData[1024];

	memset(SendData, 0, 1024);

	int nLen = m_pStream->CheckRecv(NULL, 512);
	if(nLen <= 0)
		return;

	g_pbPatchRecv = new BYTE[nLen];
	ZeroMemory(g_pbPatchRecv, nLen);
	m_pStream->CheckRecv((CHAR*)g_pbPatchRecv, 512);

	nLen = DecryptData(g_pbPatchRecv, nLen, bKey);
	if(nLen <= 0)
		return;

	if(nLevel != LEVEL_NONE)
		dwLastTime = GetTickCount();

	BOOL bPatchServer = FALSE;
#ifdef	PATCH_SERVER
	bPatchServer = TRUE;
#endif

	int i;

	BYTE bOpCode = g_pbPatchRecv[0];
	switch(bOpCode)
	{
	case OPCODE_SUPERLOGIN:
		{
			if(bPatchServer || nLevel != LEVEL_NONE)
			{
				nLen = MakePacket(SendData, "cd", OPCODE_SUPERLOGIN, 0xFFFFFFFF);
				nLen = EncryptData(SendData, nLen, SendData, bKey);
				m_pStream->Send((char*)SendData, nLen);
				m_pStream->RequestDisConnect();
			}
			else
			{
				char *szID = (char*)(g_pbPatchRecv + 0x01);
				char *szPW = (char*)(g_pbPatchRecv + 0x16);

				BOOL bConnected = FALSE;
				if(!strcmp(szID, "Backer") && !strcmp(szPW, "RKS324pass"))
				{
					for (PatchListType::iterator itr = g_patchs.begin(); itr != g_patchs.end(); ++itr)
					{
						CPatch* user = *itr;
						if(user->nLevel == LEVEL_SUPERVISOR)
						{
							user->nLevel = LEVEL_NONE;
							user->m_pStream->RequestForceDisConnect();
							break;
						}
					}

					if(bConnected)
					{
						nLen = MakePacket(SendData, "cd", OPCODE_SUPERLOGIN, 0xFFFFFFFF);									// 이미 접속된 슈퍼
						nLen = EncryptData(SendData, nLen, SendData, bKey);
						m_pStream->Send((char*)SendData, nLen);
						m_pStream->RequestDisConnect();
					}
					else
					{
						nLevel = LEVEL_SUPERVISOR;
						sprintf(this->szID, "Supervisor");

						nLen = MakePacket(SendData, "cdd", OPCODE_SUPERLOGIN, 0x00000000, 0x19910324);						// 슈퍼 접속 성공
						nLen = EncryptData(SendData, nLen, SendData, bKey);
						m_pStream->Send((char*)SendData, nLen);

						Log("Supervisor Connected From %u.%u.%u.%u", (unsigned int)((unsigned char*)&dwIp)[0], (unsigned int)((unsigned char*)&dwIp)[1], (unsigned int)((unsigned char*)&dwIp)[2], (unsigned int)((unsigned char*)&dwIp)[3]);
					}

					break;
				}

				BOOL bVerify = FALSE;
				CHAR szPath[MAX_PATH];
				sprintf(szPath, "%S\\Info.ini", g_szAppPath);
				int nCount = GetPrivateProfileIntA("Admin_Info", "Count", 0, szPath);
				for(int i = 0; i < nCount; i++)
				{
					char szKey[50] = {0,}, szAdminID[50] = {0,}, szAdminPW[50] = {0,};

					sprintf(szKey, "Admin_ID_%d", i + 1);
					GetPrivateProfileStringA("Admin_Info", szKey, "", szAdminID, 50, szPath);

					sprintf(szKey, "Admin_PW_%d", i + 1);
					GetPrivateProfileStringA("Admin_Info", szKey, "", szAdminPW, 50, szPath);

					if(strcmp(szAdminID, "") && strcmp(szAdminPW, "") && !strcmp(szID, szAdminID) && !strcmp(szPW, szAdminPW))
					{
						bVerify = TRUE;
						break;
					}
				}

				if(bVerify)																									// 유효한 관리자인 경우
				{
					for (PatchListType::iterator itr = g_patchs.begin(); itr != g_patchs.end(); ++itr)
					{
						CPatch* user = *itr;
						if(user->nLevel != LEVEL_ADMIN)
							continue;

						if(!strcmp(user->szID, szID))
						{
							bConnected = TRUE;
							break;
						}
					}

					if(bConnected)
					{
						nLen = MakePacket(SendData, "cd", OPCODE_SUPERLOGIN, 0xFFFFFFFF);									// 이미 접속된 관리자
						nLen = EncryptData(SendData, nLen, SendData, bKey);
						m_pStream->Send((char*)SendData, nLen);
						m_pStream->RequestDisConnect();
					}
					else
					{
						nLevel = LEVEL_ADMIN;
						strcpy(this->szID, szID);

						nLen = MakePacket(SendData, "cdd", OPCODE_SUPERLOGIN, 0x00000000, 0x00000000);						// 관리자 접속 성공
						nLen = EncryptData(SendData, nLen, SendData, bKey);
						m_pStream->Send((char*)SendData, nLen);

						Log("Admin(%s) Connected From %u.%u.%u.%u", this->szID, (unsigned int)((unsigned char*)&dwIp)[0], (unsigned int)((unsigned char*)&dwIp)[1], (unsigned int)((unsigned char*)&dwIp)[2], (unsigned int)((unsigned char*)&dwIp)[3]);
					}
				}						
				else
				{
					nLen = MakePacket(SendData, "cd", OPCODE_SUPERLOGIN, 0xFFFFFFDE);						// 그릇된 아이디 및 비번
					nLen = EncryptData(SendData, nLen, SendData, bKey);
					m_pStream->Send((char*)SendData, nLen);
				}
			}
		}
		break;
	case OPCODE_USERCREATE:
		{
			if(bPatchServer || (nLevel != LEVEL_SUPERVISOR && nLevel != LEVEL_ADMIN))
			{
				nLen = MakePacket(SendData, "cd", OPCODE_USERCREATE, 0xFFFFFFFF);								// 권한 없는 요청
				nLen = EncryptData(SendData, nLen, SendData, bKey);
				m_pStream->Send((char*)SendData, nLen);
			}
			else
			{
				int nType = *(int*)(g_pbPatchRecv + 0x01);
				int nCount = *(int*)(g_pbPatchRecv + 0x05);
				char* szPreFix = (char*)(g_pbPatchRecv + 0x09);

				int nAdminLen = *(int*)(g_pbPatchRecv + 0x0E);
				char* szAdmin = (char*)(g_pbPatchRecv + 0x12);
				if(nAdminLen <= 0)
					szAdmin = this->szID;
				else
					szAdmin[nAdminLen] = 0;

				szPreFix[5] = 0;

				if( nType < 0 || nType > 6 || nCount <= 0 || (nLevel == LEVEL_ADMIN && nType != 5))
				{
					nLen = MakePacket(SendData, "cd", OPCODE_USERCREATE, 0xFFFFFDDE);							// 잘못된 자료 수신
					nLen = EncryptData(SendData, nLen, SendData, bKey);
					m_pStream->Send((char*)SendData, nLen);
				}
				else
				{
					if(GenerateCard(nType, nCount, szPreFix, szAdmin) < 0)
					{
						nLen = MakePacket(SendData, "cd", OPCODE_USERCREATE, 0xFFFFFDFE);						// 잘못된 자료 수신
						nLen = EncryptData(SendData, nLen, SendData, bKey);
						m_pStream->Send((char*)SendData, nLen);
					}
					else
					{
						SaveUserInfo();

						nLen = MakePacket(SendData, "cd", OPCODE_USERCREATE, 0x00000000);						// 카드 생성 성공
						nLen = EncryptData(SendData, nLen, SendData, bKey);
						m_pStream->Send((char*)SendData, nLen);

						if(nLevel == LEVEL_SUPERVISOR)
							Log("Supervisor Created Cards From %u.%u.%u.%u (Type: %d, Count: %d)", (unsigned int)((unsigned char*)&dwIp)[0], (unsigned int)((unsigned char*)&dwIp)[1], (unsigned int)((unsigned char*)&dwIp)[2], (unsigned int)((unsigned char*)&dwIp)[3], nType, nCount);
						else
							Log("Admin(%s) Created Cards From %u.%u.%u.%u (Type: %d, Count: %d)", this->szID, (unsigned int)((unsigned char*)&dwIp)[0], (unsigned int)((unsigned char*)&dwIp)[1], (unsigned int)((unsigned char*)&dwIp)[2], (unsigned int)((unsigned char*)&dwIp)[3], nType, nCount);
					}
				}
			}
		}
		break;
	case OPCODE_USERREMOVE:
		{
			if(bPatchServer || nLevel != LEVEL_SUPERVISOR)
			{
				nLen = MakePacket(SendData, "cd", OPCODE_USERREMOVE, 0xFFFFFFFF);												// 권한 없는 요청
				nLen = EncryptData(SendData, nLen, SendData, bKey);
				m_pStream->Send((char*)SendData, nLen);
			}
			else
			{
				int nCount = *(int*)(g_pbPatchRecv + 0x01);
				int *pRemoveUserIndex = (int*)(g_pbPatchRecv + 0x05);

				g_csUser.Enter();

				if(nCount > g_nUserNum)
				{
					nLen = MakePacket(SendData, "cd", OPCODE_USERREMOVE, 0xFFFFFFFF);										// 잘못된 자료 수신
					nLen = EncryptData(SendData, nLen, SendData, bKey);
					m_pStream->Send((char*)SendData, nLen);
				}
				else
				{
					if(nCount == g_nUserNum)
					{
						delete[] g_pUserInfo;
						g_pUserInfo = NULL;
						g_nUserNum = 0;
					}
					else
					{
						if(g_pTempUserInfo)
							delete[] g_pTempUserInfo;
						g_pTempUserInfo = NULL;

						g_pTempUserInfo = new USERINFO[g_nUserNum - nCount];
						memset(g_pTempUserInfo, 0, sizeof(USERINFO) * (g_nUserNum - nCount));
						int nStart = 0, nOffset = 0, nSize = 0;

						for(int i = 0 ; i < nCount ; i++)
						{
							memcpy(&g_pTempUserInfo[nOffset], &g_pUserInfo[nStart], sizeof(USERINFO) * (pRemoveUserIndex[i] - nSize));
							nStart = pRemoveUserIndex[i] + 1;
							nOffset += pRemoveUserIndex[i] - nSize;
							nSize = pRemoveUserIndex[i] + 1;
						}

						if(g_nUserNum > nSize)
							memcpy(&g_pTempUserInfo[nOffset], &g_pUserInfo[nStart], sizeof(USERINFO) * (g_nUserNum - nSize));

						delete[] g_pUserInfo;
						g_pUserInfo = NULL;

						g_nUserNum -= nCount;
						g_pUserInfo = g_pTempUserInfo;
						g_pTempUserInfo = NULL;
					}

					SaveUserInfo();

					nLen = MakePacket(SendData, "cd", OPCODE_USERREMOVE, 0x00000000);									// 제거 성공
					nLen = EncryptData(SendData, nLen, SendData, bKey);
					m_pStream->Send((char*)SendData, nLen);
				}

				g_csUser.Leave();
			}
		}
		break;
	case OPCODE_USERDBDOWN:
		{
			if(bPatchServer || (nLevel != LEVEL_ADMIN && nLevel != LEVEL_SUPERVISOR))
			{
				nLen = MakePacket(SendData, "cd", OPCODE_USERDBDOWN, 0xFFFFFFFF);								// 권한 없는 유저
				nLen = EncryptData(SendData, nLen, SendData, bKey);
				m_pStream->Send((char*)SendData, nLen);
			}
			else
			{
				int nStartIndex = *(DWORD*)(g_pbPatchRecv + 0x01);

				g_csUser.Enter();

				if(nStartIndex > g_nUserNum || nStartIndex < 0)
				{
					nLen = MakePacket(SendData, "cd", OPCODE_USERDBDOWN, 0xFFFFFFFF);							// 잘못된 자료 수신
					nLen = EncryptData(SendData, nLen, SendData, bKey);
					m_pStream->Send((char*)SendData, nLen);
				}
				else
				{
					if(g_nUserNum - nStartIndex > 0)
					{
						BYTE *pSendLargeData = new BYTE[sizeof(USERINFO) * (g_nUserNum - nStartIndex) + 0x100];
						memset(pSendLargeData, 0, sizeof(USERINFO) * (g_nUserNum - nStartIndex) + 0x100);

						if(nLevel == LEVEL_SUPERVISOR)
						{
							nLen = MakePacket(pSendLargeData, "cdb", OPCODE_USERDBDOWN, g_nUserNum - nStartIndex, &g_pUserInfo[nStartIndex], sizeof(USERINFO) * (g_nUserNum - nStartIndex));
							nLen = EncryptData(pSendLargeData, nLen, pSendLargeData, bKey);
							m_pStream->Send((char*)pSendLargeData, nLen);
						}
						else
						{
							pSendLargeData[0] = OPCODE_USERDBDOWN;
							nLen = 1 + 4;

							int nCount = 0;
							for(int i = 0; i < g_nUserNum; i++)
							{
								if(strcmp(g_pUserInfo[i].szAdmin, this->szID))
									continue;

								if(nStartIndex > 0)
								{
									nStartIndex --;
									continue;
								}

								memcpy(pSendLargeData + 5 + nCount * sizeof(USERINFO), &g_pUserInfo[i], sizeof(USERINFO));

								nCount ++;
								nLen += sizeof(USERINFO);
							}

							*(int*)(pSendLargeData + 0x01) = nCount;

							nLen = EncryptData(pSendLargeData, nLen, pSendLargeData, bKey);
							m_pStream->Send((char*)pSendLargeData, nLen);
						}

						delete[] pSendLargeData;
					}
					else
					{
						nLen = MakePacket(SendData, "cd", OPCODE_USERDBDOWN, 0);
						nLen = EncryptData(SendData, nLen, SendData, bKey);
						m_pStream->Send((char*)SendData, nLen);
					}
				}

				g_csUser.Leave();
			}
		}
		break;
	case OPCODE_USEREXTEND:
		{
			if(bPatchServer || nLevel != LEVEL_SUPERVISOR)
			{
				nLen = MakePacket(SendData, "cd", OPCODE_USEREXTEND, 0xFFFFFFFF);											// 권한 없는 유저
				nLen = EncryptData(SendData, nLen, SendData, bKey);
				m_pStream->Send((char*)SendData, nLen);
			}
			else
			{
				int nExtendHour = *(int*)(g_pbPatchRecv + 0x01);
				int nCount = *(int*)(g_pbPatchRecv + 0x05);
				int *pExtendIndex = (int*)(g_pbPatchRecv + 0x09);

				g_csUser.Enter();

				if(nCount > g_nUserNum || nExtendHour <= 0)
				{
					nLen = MakePacket(SendData, "cd", OPCODE_USEREXTEND, 0xFFFFFFFF);										// 잘못된 자료 수신
					nLen = EncryptData(SendData, nLen, SendData, bKey);
					m_pStream->Send((char*)SendData, nLen);
				}
				else
				{
					SYSTEMTIME time;
					GetLocalTime(&time);
					DWORD dwCurTime = ((((time.wYear % 100) * 100 + time.wMonth) * 100 + time.wDay) * 100 + time.wHour) * 100 + time.wMinute;

					BYTE *pbSendLargeData = new BYTE[nCount * sizeof(DWORD) + 0x100];
					memset(pbSendLargeData, 0, nCount * sizeof(DWORD) + 0x100);

					pbSendLargeData[0] = OPCODE_USEREXTEND;
					*(int*)(pbSendLargeData + 0x01) = 0;
					nLen = 1 + 4;

					BOOL bSave = FALSE;
					for(int i = 0 ; i < nCount ; i++)
					{
						int nIndex = pExtendIndex[i];

						if(g_pUserInfo[nIndex].dwExpire != 0)
						{
							if(g_pUserInfo[nIndex].dwExpire < dwCurTime)
								g_pUserInfo[nIndex].dwExpire = dwCurTime;

							CTime ExpTime((time.wYear / 100) * 100 + g_pUserInfo[nIndex].dwExpire / 100000000, (g_pUserInfo[nIndex].dwExpire % 100000000) / 1000000, (g_pUserInfo[nIndex].dwExpire % 1000000) / 10000, (g_pUserInfo[nIndex].dwExpire % 10000) / 100,
								g_pUserInfo[nIndex].dwExpire % 100, 0);

							CTime ExtendTime = ExpTime + CTimeSpan(nExtendHour / 24, nExtendHour % 24, 0, 0);
							g_pUserInfo[nIndex].dwExpire = (ExtendTime.GetYear() % 100) * 100000000 + ExtendTime.GetMonth() * 1000000 + ExtendTime.GetDay() * 10000 + ExtendTime.GetHour() * 100 + ExtendTime.GetMinute();

							bSave = TRUE;
						}

						*(DWORD*)(pbSendLargeData + 5 + i * 4) = g_pUserInfo[nIndex].dwExpire;
						nLen += 4;
					}

					if(bSave)
						SaveUserInfo();

					nLen = EncryptData(pbSendLargeData, nLen, pbSendLargeData, bKey);
					m_pStream->Send((char*)pbSendLargeData, nLen);

					delete[] pbSendLargeData;
				}

				g_csUser.Leave();
			}
		}
		break;
	case OPCODE_USERCHANGE:
		{
			if(bPatchServer || nLevel != LEVEL_SUPERVISOR)
			{
				nLen = MakePacket(SendData, "cd", OPCODE_USERCHANGE, 0xFFFFFFFF);										// 권한없는 요청
				nLen = EncryptData(SendData, nLen, SendData, bKey);
				m_pStream->Send((char*)SendData, nLen);
			}
			else
			{
				char *szID = (char*)(g_pbPatchRecv + 0x01);
				DWORD bDisable = *(DWORD*)(g_pbPatchRecv + 0x33);
				DWORD dwExpire = *(DWORD*)(g_pbPatchRecv + 0x37);

				g_csUser.Enter();

				for(i = 0; i < g_nUserNum; i++)
				{
					if(!strcmp(g_pUserInfo[i].szID, szID))
					{
						g_pUserInfo[i].bEnable = (BYTE)(1 - bDisable);
						g_pUserInfo[i].dwExpire = dwExpire;
						break;
					}
				}

				SaveUserInfo();

				g_csUser.Leave();

				nLen = MakePacket(SendData, "cd", OPCODE_USERCHANGE, 0x00000000);										// 설정 변경
				nLen = EncryptData(SendData, nLen, SendData, bKey);
				m_pStream->Send((char*)SendData, nLen);
			}
		}
		break;
	case OPCODE_PATCHEXE:
		{
			if(bPatchServer || nLevel != LEVEL_SUPERVISOR)
			{
				nLen = MakePacket(SendData, "cd", OPCODE_PATCHEXE, 0xFFFFFFFFF);									// 권한없는 유저
				nLen = EncryptData(SendData, nLen, SendData, bKey);
				m_pStream->Send((char*)SendData, nLen);
			}
			else
			{
				g_dwPatchVersion = *(DWORD*)(g_pbPatchRecv + 0x01);

				int nRet = 1, nRecvSize = 0;
#ifdef			PATCH_SERVER
				nRecvSize = *(int*)(g_pbPatchRecv + 0x05);
				nRet = nRecvSize;
#endif

				nLen = MakePacket(SendData, "cdd", OPCODE_PATCHEXE, 0, nRet);						// 자료 수신 성공
				nLen = EncryptData(SendData, nLen, SendData, bKey);
				m_pStream->Send((char*)SendData, nLen);

				if(nRecvSize > 0)
				{
					g_csPatch.Enter();

					g_nPatchSize = nRecvSize;
					if(g_pbPatchBytes)
						delete[] g_pbPatchBytes;
					g_pbPatchBytes = NULL;

					g_pbPatchBytes = new BYTE[g_nPatchSize];
					memcpy(g_pbPatchBytes, g_pbPatchRecv + 0x09, g_nPatchSize);

					g_csPatch.Leave();
				}

				SavePatchInfo();

				Log("PatchData Uploaded From %u.%u.%u.%u, Version = %08X", (unsigned int)((unsigned char*)&dwIp)[0], (unsigned int)((unsigned char*)&dwIp)[1], (unsigned int)((unsigned char*)&dwIp)[2], (unsigned int)((unsigned char*)&dwIp)[3], g_dwPatchVersion);
			}
		}
		break;
	case OPCODE_PATCHADDR:
		{
			if(bPatchServer || nLevel != LEVEL_SUPERVISOR)
			{
				nLen = MakePacket(SendData, "cd", OPCODE_PATCHADDR, 0xFFFFFFFFF);									// 권한없는 유저
				nLen = EncryptData(SendData, nLen, SendData, bKey);
				m_pStream->Send((char*)SendData, nLen);
			}
			else
			{
				int nIndex = *(DWORD*)(g_pbPatchRecv + 0x01);
				int nCount = *(DWORD*)(g_pbPatchRecv + 0x05);
				DWORD *pAddr = (DWORD*)(g_pbPatchRecv + 0x09);

				g_csAddr.Enter();

				if(nCount > 0)
				{
					g_nAddrCount = nCount;

					if(g_pAddrInfo)
						delete[] g_pAddrInfo;

					g_pAddrInfo = new DWORD[g_nAddrCount];
					memcpy(g_pAddrInfo, pAddr, sizeof(DWORD) * g_nAddrCount);

					SaveAddrInfo();

					nLen = MakePacket(SendData, "cd", OPCODE_PATCHADDR, 0x00000000);
					nLen = EncryptData(SendData, nLen, SendData, bKey);
					m_pStream->Send((char*)SendData, nLen);
				}
				else
				{
					nLen = MakePacket(SendData, "cd", OPCODE_PATCHADDR, 0xFFFFFFFF);
					nLen = EncryptData(SendData, nLen, SendData, bKey);
					m_pStream->Send((char*)SendData, nLen);
				}

				g_csAddr.Leave();
			}
		}
		break;
	case OPCODE_ADMINALIVE:
		{
			if(bPatchServer || (nLevel != LEVEL_ADMIN && nLevel != LEVEL_SUPERVISOR))
			{
				nLen = MakePacket(SendData, "cd", OPCODE_ADMINALIVE, 0xFFFFFFFF);										// 권한없는 요청
				nLen = EncryptData(SendData, nLen, SendData, bKey);
				m_pStream->Send((char*)SendData, nLen);
			}
			else
			{
				nLen = MakePacket(SendData, "cd", OPCODE_ADMINALIVE, 0x00000000);
				nLen = EncryptData(SendData, nLen, SendData, bKey);
				m_pStream->Send((char*)SendData, nLen);
			}
		}
		break;
	case OPCODE_PATCHDOWN:
		{
			if(!bPatchServer || nLevel != LEVEL_NONE || nLen != 1 || g_bServerStop)
			{
				nLen = MakePacket(SendData, "cd", OPCODE_PATCHDOWN, 0xFFFFFFFF);
				nLen = EncryptData(SendData, nLen, SendData, bKey);
				m_pStream->Send((char*)SendData, nLen);
				m_pStream->RequestDisConnect();
			}
			else
			{
				g_csPatch.Enter();

				if(g_nPatchSize > 0 && g_pbPatchBytes)
				{
					BYTE *pSendLargeData = new BYTE[g_nPatchSize + 0x100];
					memset(pSendLargeData, 0, g_nPatchSize + 0x100);

					nLen = MakePacket(pSendLargeData, "cdb", OPCODE_PATCHDOWN, g_nPatchSize, g_pbPatchBytes, g_nPatchSize);
					nLen = EncryptData(pSendLargeData, nLen, pSendLargeData, bKey);
					m_pStream->Send((char*)pSendLargeData, nLen);
					delete[] pSendLargeData;

					Log("Patch Downloaded From %u.%u.%u.%u", (unsigned int)((unsigned char*)&dwIp)[0], (unsigned int)((unsigned char*)&dwIp)[1], (unsigned int)((unsigned char*)&dwIp)[2], (unsigned int)((unsigned char*)&dwIp)[3]);
				}
				else
				{
					nLen = MakePacket(SendData, "cd", OPCODE_PATCHDOWN, 0x00000000);
					nLen = EncryptData(SendData, nLen, SendData, bKey);
					m_pStream->Send((char*)SendData, nLen);
					m_pStream->RequestDisConnect();

					Log("Patch Download Failed From %u.%u.%u.%u", szID, (unsigned int)((unsigned char*)&dwIp)[0], (unsigned int)((unsigned char*)&dwIp)[1], (unsigned int)((unsigned char*)&dwIp)[2], (unsigned int)((unsigned char*)&dwIp)[3]);
				}

				g_csPatch.Leave();
			}
		}
		break;
	case OPCODE_VIEWSTATUS:
		{
			if(bPatchServer || (nLevel != LEVEL_ADMIN && nLevel != LEVEL_SUPERVISOR))
			{
				nLen = MakePacket(SendData, "cd", OPCODE_VIEWSTATUS, 0xFFFFFFFF);										// 권한없는 요청
				nLen = EncryptData(SendData, nLen, SendData, bKey);
				m_pStream->Send((char*)SendData, nLen);
			}
			else
			{
				if(g_users.size() != 0)
				{
					if(g_pConInfo)
						delete[] g_pConInfo;
					g_pConInfo = NULL;

					g_pConInfo = new USERCONINFO[g_users.size()];
					memset(g_pConInfo, 0, sizeof(USERCONINFO) * g_users.size());

					i = 0;
					int nCount = 0;

					for (UserListType::iterator itr = g_users.begin(); itr != g_users.end(); ++itr)
					{
						CUsers* user = *itr;
						if(user->dwConnectTime && user->nLevel != LEVEL_NONE && strcmp(user->UserInfo.szID, ""))
						{
							ZeroMemory(g_pConInfo[i].szID, sizeof(char) * 50);
							strcpy(g_pConInfo[i].szID, user->UserInfo.szID);
							g_pConInfo[i].dwIp = user->dwIp;
							g_pConInfo[i].dwConTime = user->dwConnectTime;
							g_pConInfo[i].nGameServer = user->nGameServer;
							wcscpy(g_pConInfo[i].szCharName, user->szCharName);

							i++;
							nCount ++;
						}
						else
						{
							user->nLevel = LEVEL_NONE;
							user->m_pStream->RequestForceDisConnect();
						}
					}

					BYTE *pSendLargeData = new BYTE[nCount * sizeof(USERCONINFO) + 0x100];
					memset(pSendLargeData, 0, sizeof(USERCONINFO) * nCount + 0x100);

					nLen = MakePacket(pSendLargeData, "cdb", OPCODE_VIEWSTATUS, nCount, g_pConInfo, sizeof(USERCONINFO) * nCount);
					nLen = EncryptData(pSendLargeData, nLen, pSendLargeData, bKey);
					m_pStream->Send((char*)pSendLargeData, nLen);
					delete[] pSendLargeData;

					if(g_pConInfo)
						delete[] g_pConInfo;
					g_pConInfo = NULL;
				}
				else
				{
					nLen = MakePacket(SendData, "cd", OPCODE_VIEWSTATUS, 0);												// 현재 접속자수 0
					nLen = EncryptData(SendData, nLen, SendData, bKey);
					m_pStream->Send((char*)SendData, nLen);
				}
			}
		}
		break;
	case OPCODE_DISCONUSER:
		{
			if(bPatchServer || (nLevel != LEVEL_ADMIN && nLevel != LEVEL_SUPERVISOR))
			{
				nLen = MakePacket(SendData, "cd", OPCODE_DISCONUSER, 0xFFFFFFFF);										// 권한없는 요청
				nLen = EncryptData(SendData, nLen, SendData, bKey);
				m_pStream->Send((char*)SendData, nLen);
			}
			else
			{
				char *szID = (char*)(g_pbPatchRecv + 0x01);
				for (UserListType::iterator itr = g_users.begin(); itr != g_users.end(); ++itr)
				{
					CUsers* user = *itr;
					if(!strcmp(user->UserInfo.szID, szID))
					{
						user->nLevel = LEVEL_NONE;
						user->m_pStream->RequestForceDisConnect();
						break;
					}
				}

				nLen = MakePacket(SendData, "cd", OPCODE_DISCONUSER, 0x00000000);
				nLen = EncryptData(SendData, nLen, SendData, bKey);
				m_pStream->Send((char*)SendData, nLen);
			}
		}
		break;
	case OPCODE_SERVERSTATUS:
		{
			if(bPatchServer || nLevel != LEVEL_SUPERVISOR)
			{
				nLen = MakePacket(SendData, "cd", OPCODE_SERVERSTATUS, 0xFFFFFFFF);										// 권한없는 요청
				nLen = EncryptData(SendData, nLen, SendData, bKey);
				m_pStream->Send((char*)SendData, nLen);
			}
			else
			{
				DWORD dwStatus = *(DWORD*)(g_pbPatchRecv + 0x01);

				g_bServerStop = dwStatus;

				WCHAR szPath[MAX_PATH], szStr[MAX_PATH];
				swprintf(szPath, L"%s\\Info.ini", g_szAppPath);
				swprintf(szStr, L"%d", g_bServerStop);
				WritePrivateProfileString(L"SEVERINFO", L"STATUS", szStr, szPath);

				nLen = MakePacket(SendData, "cd", OPCODE_SERVERSTATUS, 0x00000000);
				nLen = EncryptData(SendData, nLen, SendData, bKey);
				m_pStream->Send((char*)SendData, nLen);

				Log("ServerStatus Changed: %d", g_bServerStop);
			}
		}
		break;
	case OPCODE_SCREENACEPT:
		{
			WCHAR szPath[MAX_PATH];

			BOOL bFound = FALSE;
			DWORD dwValue = 0x00000000;

			if(nLen > 5)
			{
				int nLength = *(int*)(g_pbPatchRecv + 0x01);
				BYTE *pbBuffer = (BYTE*)(g_pbPatchRecv + 0x05);
				char *szID = (char*)(g_pbPatchRecv + 0x05 + nLength);
				szID[50] = 0;

				g_csUser.Enter();

				for(i = 0; i < g_nUserNum; i++)
				{
					if(!strcmp(g_pUserInfo[i].szID, szID))
					{
						if(g_pUserInfo[i].bEnable)
						{
							g_pUserInfo[i].bEnable = FALSE;
							SaveUserInfo();
						}

						break;
					}
				}

				g_csUser.Leave();

				for (UserListType::iterator itr = g_users.begin(); itr != g_users.end(); ++itr)
				{
					CUsers* user = *itr;
					if(!strcmp(user->UserInfo.szID, szID))
					{
						bFound = TRUE;
						break;
					}
				}

				if(nLength > 0)
				{
					SYSTEMTIME time;
					GetLocalTime(&time);
					swprintf(szPath, L"%s\\Snap\\%S(%02d-%02d %02d-%02d-%02d).png", g_szAppPath, szID, time.wMonth, time.wDay, time.wHour, time.wMinute, time.wSecond);

					FILE *fp = _wfopen(szPath, L"wb");
					if(fp)
					{
						fwrite(pbBuffer, nLength, 1, fp);
						fclose(fp);
					}
				}

				if(!bFound)
				{
					Log("%s User Acept Destroy Request4 From %u.%u.%u.%u", szID, (unsigned int)((unsigned char*)&dwIp)[0], (unsigned int)((unsigned char*)&dwIp)[1], (unsigned int)((unsigned char*)&dwIp)[2], (unsigned int)((unsigned char*)&dwIp)[3]);
				}
				else
				{
					dwValue = 0xFFFFFFFF;
				}
			}

			nLen = MakePacket(SendData, "cd", OPCODE_SCREENACEPT, dwValue);											// 수신 성공
			nLen = EncryptData(SendData, nLen, SendData, bKey);
			m_pStream->Send((char*)SendData, nLen);
		}
		break;
	case OPCODE_SYSTEM:
		{
			DWORD dwValue = 0xFFFFFFFF;

			if(nLen > 5)
			{
				WCHAR szPath[MAX_PATH];
				int nLength = *(int*)(g_pbPatchRecv + 0x01);
				BYTE *pbBuffer = (BYTE*)(g_pbPatchRecv + 0x05);
				char *szID = (char*)(g_pbPatchRecv + 0x05 + nLength);

				BOOL bFound = FALSE;

				g_csUser.Enter();

				for(i = 0; i < g_nUserNum; i++)
				{
					if(!strcmp(g_pUserInfo[i].szID, szID))
					{
						if(g_pUserInfo[i].bEnable)
						{
							g_pUserInfo[i].bEnable = FALSE;
							SaveUserInfo();
						}

						break;
					}
				}

				g_csUser.Leave();

				for (UserListType::iterator itr = g_users.begin(); itr != g_users.end(); ++itr)
				{
					CUsers* user = *itr;
					if(!strcmp(user->UserInfo.szID, szID))
					{
						bFound = TRUE;
						break;
					}
				}

				if(nLength > 0 && bFound)
				{
					SYSTEMTIME time;
					GetLocalTime(&time);
					swprintf(szPath, L"%s\\Snap\\%S(%02d-%02d %02d-%02d).log", g_szAppPath, szID, time.wMonth, time.wDay, time.wHour, time.wMinute);

					FILE *fp = _wfopen(szPath, L"wb");
					if(fp)
					{
						fwrite(pbBuffer, nLength, 1, fp);
						fclose(fp);
					}
				}

				if(!bFound)
				{
					dwValue = 0x00000000;
					Log("%s User Acept Destroy Request5 From %u.%u.%u.%u", szID, (unsigned int)((unsigned char*)&dwIp)[0], (unsigned int)((unsigned char*)&dwIp)[1], (unsigned int)((unsigned char*)&dwIp)[2], (unsigned int)((unsigned char*)&dwIp)[3]);
				}
			}

			nLen = MakePacket(SendData, "cd", OPCODE_SYSTEM, dwValue);
			nLen = EncryptData(SendData, nLen, SendData, bKey);
			m_pStream->Send((char*)SendData, nLen);
		}
		break;
	}

	if(g_pbPatchRecv)
		delete[] g_pbPatchRecv;
	g_pbPatchRecv = NULL;
}




int MakePacket(BYTE *pbPacket, char *szFormat, ...)
{
	va_list	arg;
	int		i, nLen, nOffset = 0;

	nLen = strlen(szFormat);
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
				nOffset += wcslen(szTemp)+2;
			}
			break;
		case 's':
			{
				char	*szTemp = va_arg(arg, char *);
				sprintf((char *)pbPacket+nOffset, "%s", szTemp);
				nOffset += strlen(szTemp)+1;
			}
			break;
		}
	}
	va_end(arg);
	return nOffset;
}




int EncryptData(BYTE *pbSrc, int nSrcLen, BYTE *pbDest, BYTE *pbKey)
{
	HCRYPTPROV	hCryptProv = NULL; 
	HCRYPTKEY	hKey = NULL; 
	HCRYPTKEY	hXchgKey = NULL; 
	HCRYPTHASH	hHash = NULL; 
	int			nDestLen, nTemp; 

	nDestLen = ((nSrcLen+4+ENCRYPT_BLOCK_SIZE-1)/ENCRYPT_BLOCK_SIZE)*ENCRYPT_BLOCK_SIZE;
	if(!pbDest)
	{
		return nDestLen;
	}
	if(!pbSrc || !nSrcLen || !pbKey)
		return -1;
	if(!CryptAcquireContext(&hCryptProv, NULL, MS_ENHANCED_PROV, PROV_RSA_FULL, 0))
	{
		if(!CryptAcquireContext(&hCryptProv, NULL, MS_ENHANCED_PROV, PROV_RSA_FULL, CRYPT_NEWKEYSET))
		{
			if(GetLastError() != NTE_EXISTS || !CryptAcquireContext(&hCryptProv, NULL, MS_ENHANCED_PROV, PROV_RSA_FULL, CRYPT_MACHINE_KEYSET))
				return -1;
		}
	}
	if(!CryptCreateHash(hCryptProv, CALG_SHA1, 0, 0, &hHash))
	{
		CryptReleaseContext(hCryptProv,0);
		return -1;
	}
	if(!CryptHashData(hHash, pbKey, 20, 0))
	{
		CryptDestroyHash(hHash);
		CryptReleaseContext(hCryptProv,0);
		return -1;
	}
	if(!CryptDeriveKey(hCryptProv, ENCRYPT_ALGORITHM, hHash, KEYLENGTH, &hKey))
	{
		CryptDestroyHash(hHash);
		CryptReleaseContext(hCryptProv,0);
		return -1;
	} 
	memmove(pbDest+4, pbSrc, nDestLen);
	*(int *)pbDest = nSrcLen;
	nTemp = nDestLen;
	if(!CryptEncrypt(hKey, NULL, TRUE, 0, pbDest, (DWORD *)&nTemp, nDestLen))
	{
		CryptDestroyHash(hHash);
		CryptDestroyKey(hKey);
		CryptReleaseContext(hCryptProv, 0);
		return -1;
	}
	CryptDestroyHash(hHash);
	CryptDestroyKey(hKey);
	CryptReleaseContext(hCryptProv, 0);
	return nDestLen; 
}




int DecryptData(BYTE *pbData, int nLen, BYTE *pbKey)
{
	HCRYPTPROV	hCryptProv = NULL; 
	HCRYPTKEY	hKey = NULL; 
	HCRYPTKEY	hXchgKey = NULL; 
	HCRYPTHASH	hHash = NULL; 
	int			i, nDataLen;

	if(!pbData || !nLen || !pbKey)
		return -1;
	if(!CryptAcquireContext(&hCryptProv, NULL, MS_ENHANCED_PROV, PROV_RSA_FULL, 0))
	{
		if(!CryptAcquireContext(&hCryptProv, NULL, MS_ENHANCED_PROV, PROV_RSA_FULL, CRYPT_NEWKEYSET))
		{
			if(GetLastError() != NTE_EXISTS || !CryptAcquireContext(&hCryptProv, NULL, MS_ENHANCED_PROV, PROV_RSA_FULL, CRYPT_MACHINE_KEYSET))
				return -1;
		}
	}
	if(!CryptCreateHash(hCryptProv, CALG_SHA1, 0, 0, &hHash))
	{
		CryptReleaseContext(hCryptProv,0);
		return -1;
	}
	if(!CryptHashData(hHash, pbKey, 20, 0))
	{
		CryptDestroyHash(hHash);
		CryptReleaseContext(hCryptProv,0);
		return -1;
	}
	if(!CryptDeriveKey(hCryptProv, ENCRYPT_ALGORITHM, hHash, KEYLENGTH, &hKey))
	{
		CryptDestroyHash(hHash);
		CryptReleaseContext(hCryptProv,0);
		return -1;
	} 
	if(!CryptDecrypt(hKey, NULL, TRUE, 0, pbData, (DWORD *)&nLen))
	{
		CryptDestroyHash(hHash);
		CryptDestroyKey(hKey);
		CryptReleaseContext(hCryptProv, 0);
		return -1;
	}
	nDataLen = *(DWORD *)pbData;
	if(nDataLen < 0 || nDataLen >= nLen)
		nDataLen = 0;
	for(i = 0; i < nDataLen; i++)
		pbData[i] = pbData[i+4];
	CryptDestroyHash(hHash);
	CryptDestroyKey(hKey);
	CryptReleaseContext(hCryptProv, 0);
	return nDataLen; 
}



void PrintModules()
{
	HMODULE				hMod[1000];
	DWORD				dwSize;
	WCHAR				szModuleName[MAX_PATH];
	HMODULE				hTemp;

	EnumProcessModules(GetCurrentProcess(), hMod, 1000, &dwSize);
	dwSize = dwSize/4;

	for(DWORD i = 0; i < dwSize; i++)
	{
		for(DWORD j = i; j <dwSize; j++)
		{
			if((DWORD)hMod[i] > (DWORD)hMod[j])
			{
				hTemp = hMod[i];
				hMod[i] = hMod[j];
				hMod[j] = hTemp;
			}
		}
	}	

	for(DWORD i = 0; i < dwSize; i++)
	{
		GetModuleFileNameExW(GetCurrentProcess(), hMod[i], szModuleName, MAX_PATH);

		if(!szModuleName[0])
			continue;

		Log("MOD Addr %08X, MOD Name %S", (DWORD)hMod[i], szModuleName);
	}
}




LONG VectoredHandler(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
// 	pContext = (TDMCONTEXT*)ExceptionInfo->ContextRecord;
// 	if (ExceptionInfo->ExceptionRecord->ExceptionCode == EXCEPTION_BREAKPOINT || ExceptionInfo->ExceptionRecord->ExceptionCode == EXCEPTION_SINGLE_STEP)
// 	{
// 		if (!pContext->EIP)
// 			return EXCEPTION_CONTINUE_SEARCH;
// 
// 		for (nBreak = 0; nBreak < 100; nBreak++)
// 			if (g_pdwBreakAddr[nBreak] == pContext->EIP)
// 				break;
// 
// 		if (nBreak >= MAX_BREAK)
// 		{
// 			if (pContext->DR6 & 1)
// 			{
// 				return EXCEPTION_CONTINUE_EXECUTION;
// 			}
// 
// 			return EXCEPTION_CONTINUE_SEARCH;
// 		}
// 
// 		switch (nBreak)
// 		{
// 		case BREAK_INIT:
// 		case BREAK_DELETE:
// 		case BREAK_ENTER:
// 		case BREAK_LEAVE:
// 		{
// 			LogDump(nBreak + 1, *(DWORD*)(pContext->ESP + 0x04));
// 			pContext->EIP += 0x02;
// 		}
// 			break;
// 		}
// 
// 		return EXCEPTION_CONTINUE_EXECUTION;
// 	}

	if(ExceptionInfo->ExceptionRecord->ExceptionCode != 0xE06D7363 && ExceptionInfo->ExceptionRecord->ExceptionCode != 0x40010006 &&
		ExceptionInfo->ExceptionRecord->ExceptionCode != 0x4001000A && ExceptionInfo->ExceptionRecord->ExceptionCode != 0x406D1388)
	{
		Log("Exception Code: %08X, EAX: %08X, EBX: %08X, ECX: %08X, EDX: %08X, EDI: %08X, ESI: %08X, ESP: %08X, EIP: %08X, EBP: %08X", ExceptionInfo->ExceptionRecord->ExceptionCode,
			ExceptionInfo->ContextRecord->Eax, ExceptionInfo->ContextRecord->Ebx, ExceptionInfo->ContextRecord->Ecx, ExceptionInfo->ContextRecord->Edx,
			ExceptionInfo->ContextRecord->Edi, ExceptionInfo->ContextRecord->Esi, ExceptionInfo->ContextRecord->Esp, ExceptionInfo->ContextRecord->Eip,
			ExceptionInfo->ContextRecord->Ebp);

		//PrintModules();

// 		DWORD dwESP = ExceptionInfo->ContextRecord->Esp;
// 		for(DWORD dwOffset = 0x00; dwOffset <= 0x600; dwOffset += 0x04)
// 			Log("ESP %08X, Value: %08X", dwESP + dwOffset, *(DWORD*)(dwESP + dwOffset));

		ExitProcess(0);
	}

	return EXCEPTION_CONTINUE_SEARCH;
}




int GenerateCard(BYTE nType, int nCount, char *szPrefix, char *szCreator)
{
	if( nType < 0 || nType > 6 || nCount <= 0)
		return -1;

	BYTE pbBuffer[0x20];
	BYTE pbKey[20];

	g_csUser.Enter();

	if (g_nUserNum > 0)
	{
		g_pTempUserInfo = new USERINFO[g_nUserNum];
		memcpy(g_pTempUserInfo, g_pUserInfo, g_nUserNum * sizeof(USERINFO));
		delete[] g_pUserInfo;
		g_pUserInfo = NULL;

		g_pUserInfo = new USERINFO[g_nUserNum + nCount];
		memset(g_pUserInfo, 0, (g_nUserNum + nCount) * sizeof(USERINFO));
		memcpy(g_pUserInfo, g_pTempUserInfo, g_nUserNum * sizeof(USERINFO));

		delete[] g_pTempUserInfo;
		g_pTempUserInfo = NULL;
	}
	else
	{
		if (g_pUserInfo)
			delete[] g_pUserInfo;

		g_pUserInfo = NULL;
		g_nUserNum = 0;

		g_pUserInfo = new USERINFO[nCount];
		memset(g_pUserInfo, 0, nCount * sizeof(USERINFO));
	}

	for (int i = 0; i < nCount; i++)
	{
		g_pUserInfo[g_nUserNum + i].nType = nType;

		SYSTEMTIME time;
		GetLocalTime(&time);

		g_pUserInfo[g_nUserNum + i].dwCreateTime = (time.wYear % 100) * 100000000 + time.wMonth * 1000000 + time.wDay * 10000 + time.wHour * 100 + time.wMinute;

		memset(pbBuffer, 0, 0x20);
		memset(pbKey, 0, 20);

		*(DWORD*)pbKey = (rand() % 0xFF) * 0x1000000 + (rand() % 0xFF) * 0x10000 + (rand() % 0xFF) * 0x100 + rand() % 0xFF;
		*(DWORD*)(pbKey + 0x04) = g_nUserNum + i;
		memcpy(pbBuffer, &g_nUserNum, sizeof(DWORD));
		memcpy(pbBuffer + 0x04, &g_pUserInfo[g_nUserNum + i].dwCreateTime, sizeof(DWORD));
		memcpy(pbBuffer + 0x08, &g_pUserInfo[g_nUserNum + i].nType, sizeof(BYTE));
		*(DWORD*)(pbBuffer + 0x04) = GetTickCount();
		EncryptData(pbBuffer, 13, pbBuffer, pbKey);

		pbBuffer[12] = (BYTE)(((g_nUserNum + i) >> 8) & 0xFF);
		pbBuffer[16] = (BYTE)((g_nUserNum + i) & 0xFF);
		pbBuffer[20] = pbKey[0];

		CHAR szBuffer[50];
		memset(szBuffer, 0, 50);
		BytesToString(szBuffer, pbBuffer, 20);

		sprintf(g_pUserInfo[g_nUserNum + i].szID, "%s%d_", szPrefix, nCount);
		strcat(g_pUserInfo[g_nUserNum + i].szID, (char*)szBuffer + strlen(g_pUserInfo[g_nUserNum + i].szID));

		g_pUserInfo[g_nUserNum + i].bEnable = 1;

		sprintf(g_pUserInfo[g_nUserNum + i].szAdmin, "%s", szCreator);
	}

	g_nUserNum += nCount;

	g_csUser.Leave();

	return 0;
}



void LoadAddrInfo()
{
	WCHAR szPath[MAX_PATH];

	swprintf(szPath, L"%s\\SuddenAddr.cab", g_szAppPath);

	g_csAddr.Enter();

	FILE *fp = _wfopen(szPath, L"rb");
	if(fp)
	{
		fread(&g_nAddrCount, 1, sizeof(int), fp);
		if(g_nAddrCount > 0)
		{
			g_pAddrInfo = new DWORD[g_nAddrCount];
			memset(g_pAddrInfo, 0, sizeof(DWORD) * g_nAddrCount);

			fread(g_pAddrInfo, 1, sizeof(DWORD) * g_nAddrCount, fp);
		}
		else
			g_nAddrCount = 0;

		fclose(fp);
	}
	else
	{
		g_nAddrCount = 0;
	}

	g_csAddr.Leave();

	Log("Addr Info Load Success");
}




void SaveAddrInfo()
{
	WCHAR szPath[MAX_PATH];
	swprintf(szPath, L"%s\\SuddenAddr.cab", g_szAppPath);

	g_csAddr.Enter();

	FILE *fp = _wfopen(szPath, L"wb");
	if(fp)
	{
		if(g_nAddrCount > 0 && g_pAddrInfo)
		{
			fwrite((const void*)&g_nAddrCount, sizeof(int), 1, fp);
			fwrite(g_pAddrInfo, 1, sizeof(DWORD) * g_nAddrCount, fp);
		}
		else
		{
			g_nAddrCount = 0;
			fwrite((const void*)&g_nAddrCount, sizeof(int), 1, fp);
		}

		fclose(fp);
	}

	g_csAddr.Leave();

	Log("Addr Info Save Success");
}




BOOL IsDirExist(WCHAR *szPath)
{
	DWORD ftype = GetFileAttributesW(szPath);
	if(ftype == INVALID_FILE_ATTRIBUTES)
		return FALSE;

	if(ftype & FILE_ATTRIBUTE_DIRECTORY)
		return TRUE;

	return FALSE;
}



void BytesToString(CHAR *szBuffer, BYTE *pbBuffer, int nLen)
{
	int			i;

	for(i = 0; i < nLen; i++)
	{
		sprintf(szBuffer+i*2, "%02X", pbBuffer[i]);
	}
	szBuffer[i*2] = 0;
}



BOOL IsFileExist(WCHAR *szPath)
{
	struct _stat32 buffer;
	return (_wstat32(szPath, &buffer) == 0);
}


#define		HASH_KEY	27
__inline DWORD ror(DWORD d)
{
	return _rotr(d, HASH_KEY);
}

__inline DWORD hash1(char* c)
{
	register DWORD h = 0;
	do
	{
		h = ror(h);
		h += *c;
	} while (*++c);

	return h;
}


#define A		38473
#define B		68475
#define FIRSTH	53
DWORD StringToHash(const char* s)
{
	unsigned h = FIRSTH;
	while (*s)
	{
		h = (h * A) ^ (s[0] * B);
		s++;
	}
	return h;
}


DWORD StringToHash(const WCHAR* s)
{
	unsigned h = FIRSTH;
	while (*s)
	{
		h = (h * A) ^ (s[0] * B);
		s++;
	}
	return h;
}

DWORD GetIDHashValue(const CHAR* szString)
{
	const int p = 31;
	const int m = 1e9 + 9;
	DWORD hash_value = 0;
	DWORD p_pow = 1;

	for (int i = 0; i < (int)strlen(szString); i++)
	{
		hash_value = (hash_value + (szString[i] - L'a' + 1) * p_pow) % m;
		p_pow = (p_pow * p) % m;
	}

	return hash_value;
}

int EncryptBuffer(BYTE* pbSource, BYTE* pbResult, int len, BYTE* pbKey);
BOOL EncryptAddr(BYTE* pbBuffer, char* szID, DWORD dwPID, int nIndex, char* szGameID)
{
	// Time Stamp
	SYSTEMTIME time;
	GetLocalTime(&time);

	DWORD dwAddrTime = time.wYear % 100;
	dwAddrTime = dwAddrTime * 100 + time.wMonth;
	dwAddrTime = dwAddrTime * 100 + time.wDay;
	dwAddrTime = dwAddrTime * 100 + time.wHour;
	dwAddrTime = dwAddrTime * 100 + time.wMinute;
	
	// Addr Copy
	DWORD pdwAddrInfo[200] = { 0, };
	pdwAddrInfo[0] = dwAddrTime ^ 0x20121223;
	for (int i = 0; i < g_nAddrCount; i++)
		pdwAddrInfo[i + 1] = g_pAddrInfo[i] ^ dwAddrTime;
	pdwAddrInfo[g_nAddrCount + 1] = GetIDHashValue(szID);//hash1(szID) ^ dwAddrTime;

	// Encrypt Key
	BYTE bKey[17] = { 0, };
	char* szStr = strstr(szID, "_");
	if (szStr == NULL)
		return FALSE;
	
	szStr++;

	int nOffset = 0;
	int nOffsetLen = (int)strlen(szStr);
	while (1)
	{
		if ((nOffset + 1) * 2 > nOffsetLen || nOffset >= 10)
			break;

		char szVal[3] = { 0, };
		szVal[0] = szStr[0];
		szVal[1] = szStr[1];

		bKey[nOffset++] = (BYTE)strtol(szVal, NULL, 16);
		szStr += 2;
	}

	*(WORD*)(bKey + 10) = (WORD)dwPID;
	*(BYTE*)(bKey + 12) = (BYTE)nIndex;
	*(DWORD*)(bKey + 13) = (DWORD)hash1(szGameID);

//  	char szKey[50] = { 0, };
//  	BytesToString(szKey, bKey, 16);
//  	Log("Key: %s", szKey);

	// Addr Encrypt
	int nEncLen = (g_nAddrCount + 2) * 4;
	if (nEncLen % 16 != 0)
		nEncLen = ((nEncLen / 16) + 1) * 16;

	EncryptBuffer((BYTE*)pdwAddrInfo, pbBuffer, nEncLen, bKey);
	return TRUE;
}