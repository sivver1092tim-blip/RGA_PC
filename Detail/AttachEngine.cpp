#include "stdafx.h"
#include "AttachEngine.h"
#include "VMAttachEngine.h"
#include "Aria.h"
#include "NTProcessInfo.h"
#include "dbgSerial.h"

#pragma comment(lib, "iphlpapi.lib")
#pragma comment(lib, "Version.lib")

CClient				g_cClient;
BYTE				g_pbKey[20];

CDetailDlg*			g_pAppDlg = NULL;

Align_Info*			g_pAlignInfo = NULL;

WCHAR				g_szAutoID[MAX_PATH] = {0,};
WCHAR				g_szGameID[MAX_PATH] = {0,};
WCHAR				g_szGamePW[MAX_PATH] = {0,};

int					g_nGameServer = 0;

HANDLE				g_hGamePipe = NULL;

int					g_nIndex = 0;
BOOL				g_bAutoConnect = FALSE;

DWORD				g_dwExeVersion = 0;

CLIENTSTATUS*		g_pStatusInfo = NULL;
CRITICAL_SECTION	g_hStatusSection;
HANDLE				g_hStatusEvent = NULL;
HANDLE				g_hAnswerEvent = NULL;

CRITICAL_SECTION	g_csAddrSection;

DWORD				g_dwClientTID = 0;
DWORD				g_dwGameTID = 0;
DWORD				g_dwStartTime = 0;

HANDLE				g_hProcessMutex = NULL;

DetailSettingInfo*	g_dwGamePID = NULL;

GAME_MAPPING*		g_pGameMapping = NULL;
GAME_INFO*			g_pGameInfo = NULL;

CRITICAL_SECTION	g_csScheduleTime;

int					g_nScheduleInitTime = -1;
int					g_nScheduleInitDate = 0;

int					g_nScheduleStartTime = 0;
int					g_nScheduleDelayTime = 0;

int					g_nScheduleCount = 0;
Schedule_Time*		g_pScheduleTime = NULL;

BOOL				g_bScheduleSettingChange = FALSE;

int					g_nScheduleCountTemp = 0;
Schedule_Time*		g_pScheduleTimeTemp = NULL;

WORD				g_wLanguageID = 0x804;
DWORD				g_dwInitRealKeyword = 0;

BOOL				g_bScheduleTimeCheck = FALSE;
int					g_nScheduleTimeValue = 0;
DWORD64				g_qwScheduleTimeTick = 0;

WCHAR				g_szGamePath[MAX_PATH] = _T("");

BOOL				g_bInitDaum = TRUE;
int					g_nDelayTime = 10;

BOOL				g_bRandomSchedule = FALSE;

typedef LONG (NTAPI *NtSuspendProcess)(IN HANDLE ProcessHandle);
typedef LONG (NTAPI *NtResumeProcess)(IN HANDLE ProcessHandle);

#define	WND_GAMENAME			L"ROM : Remember Of Majesty"
#define	WNDCLASS_GAMENAME		L"UnityWndClass"

void AJLog(WCHAR* szFormat, ...)
{
#ifdef	_PRINT_LOG_

	FILE* fp = _wfopen(L"C:\\Log\\Detail-Log.txt", L"a+");
	if (!fp)
		return;

	char* aszLog;
	WCHAR* szLog;
	va_list	arg;

	szLog = new WCHAR[100000];
	va_start(arg, szFormat);
	vswprintf(szLog, szFormat, arg);
	va_end(arg);
	aszLog = new char[wcslen(szLog) * 2 + 20];
	WideCharToMultiByte(CP_ACP, 0, szLog, (int)wcslen(szLog) + 1, aszLog, (int)wcslen(szLog) * 2 + 2, 0, 0);
	strcat(aszLog, "\n");
	fprintf(fp, aszLog);
	fclose(fp);

	OutputDebugString(szLog);

	delete[] aszLog;
	delete[] szLog;

#endif
}


IP_ADAPTER_INFO* GetNetworkAdaptersInfo()
{
	DWORD dwBufLen = 0;
	DWORD dwStatus = GetAdaptersInfo(NULL, &dwBufLen);
	IP_ADAPTER_INFO* pAdapterInfo = (IP_ADAPTER_INFO*)malloc(dwBufLen);
	dwStatus = GetAdaptersInfo(pAdapterInfo, &dwBufLen);
	if (dwStatus != ERROR_SUCCESS)
	{
		free(pAdapterInfo);
		return NULL;
	}

	return pAdapterInfo;
}



BOOL OnLoginAuto(BYTE &nAddrCount, BYTE* pbAddrInfo)
{
	VMProtectBeginUltra("OnLoginAuto");

	// ---------------------- 로그인에 필요한 정보들을 얻자 ---------------------- //

	char szAutoID[50] = { 0, };
	sprintf(szAutoID, VMProtectDecryptStringA("%S"), g_szAutoID);											// Auto ID

	char szGameID[50] = { 0, };
	sprintf(szGameID, VMProtectDecryptStringA("%S"), g_szGameID);											// Game ID

	char szHostName[50] = { 0, };
	gethostname(szHostName, sizeof(szHostName));															// Host Name

	char szLocalIP[50] = { 0, };
	char szMacAddress[50] = { 0, };

	IP_ADAPTER_INFO* pAdaptersInfoList = GetNetworkAdaptersInfo();
	IP_ADAPTER_INFO* pAdapterInfo = pAdaptersInfoList;
	while (NULL != pAdapterInfo)
	{
		if (MIB_IF_TYPE_ETHERNET == pAdapterInfo->Type || IF_TYPE_IEEE80211 == pAdapterInfo->Type)
		{
			char* szGateWay = pAdapterInfo->GatewayList.IpAddress.String;
			//if (strcmp(szGateWay, VMProtectDecryptStringA("0.0.0.0")))
			{
				memset(szLocalIP, 0, sizeof(szLocalIP));
				strcpy(szLocalIP, pAdapterInfo->IpAddressList.IpAddress.String);								// Local IP

				memset(szMacAddress, 0, sizeof(szMacAddress));
				for (int i = 0; i < min(6, (int)pAdapterInfo->AddressLength); i++)								// Mac Address
				{
					if (i == pAdapterInfo->AddressLength - 1)
						sprintf(szMacAddress + strlen(szMacAddress), VMProtectDecryptStringA("%02X"), pAdapterInfo->Address[i]);
					else
						sprintf(szMacAddress + strlen(szMacAddress), VMProtectDecryptStringA("%02X-"), pAdapterInfo->Address[i]);
				}

				strupr(pAdapterInfo->Description);
				if (strstr(pAdapterInfo->Description, VMProtectDecryptStringA("REALTEK")))
					break;
			}
		}
		pAdapterInfo = pAdapterInfo->Next;
	}

	free(pAdaptersInfoList);

	int regs[4] = { 0 };																						// Cpu ID
	__cpuid(regs, 0);

	DWORD dwHddNumber = 0;
	GetVolumeInformation(VMProtectDecryptStringW(L"C://"), NULL, NULL, &dwHddNumber, NULL, NULL, NULL, NULL);	// Hdd Number

	// ---------------------- 해당 정보들을 검증하자 ---------------------- //

	int nErrorCode = 0;
	if (!strcmp(szAutoID, ""))
		nErrorCode = 1;
	else if (!strcmp(szGameID, ""))
		nErrorCode = 2;
	else if (!strcmp(szHostName, ""))
		nErrorCode = 3;
	else if (!strcmp(szLocalIP, ""))
		nErrorCode = 4;
	else if (!strcmp(szMacAddress, ""))
		nErrorCode = 5;
	else if (dwHddNumber == 0)
		nErrorCode = 6;

	if (nErrorCode != 0)
	{
		SetStatus(STATUS_AUTHERROR, nErrorCode);
		return FALSE;
	}

	// ---------------------- 서버에 로그인 진행하자 ---------------------- //

	g_cClient.Initialize(NULL, NULL);
	if (g_cClient.m_bConnect)
		g_cClient.DisConnect();

	if(!g_cClient.Connect(NULL, NULL))
	{
		SetStatus(STATUS_CONNECTFAIL);
		return FALSE;
	}

	BYTE* pbRecvData;
	int nRecvLen = 0;
	if (!g_cClient.Recv(&pbRecvData, &nRecvLen))
	{
		g_cClient.DisConnect();
		SetStatus(STATUS_CONNECTFAIL);
		return FALSE;
	}

	memcpy(g_pbKey, pbRecvData, 20);
	delete[] pbRecvData;
	pbRecvData = NULL;

	int nSendLen = 400;
	BYTE pbSendData[1024] = { 0, };	
	MakeRandData(pbSendData, nSendLen);

	*(BYTE*)(pbSendData + 12) = OPCODE_USERLOGIN;

	int nNameLen = (int)strlen(szAutoID);
	memcpy(pbSendData + 33, (BYTE*)szAutoID, nNameLen);
	pbSendData[33 + nNameLen] = 0;

	nNameLen = (int)strlen(szGameID);
	memcpy(pbSendData + 89, (BYTE*)szGameID, nNameLen);
	pbSendData[89 + nNameLen] = 0;

	nNameLen = (int)strlen(szHostName);
	memcpy(pbSendData + 144, (BYTE*)szHostName, nNameLen);
	pbSendData[144 + nNameLen] = 0;

	nNameLen = (int)strlen(szLocalIP);
	memcpy(pbSendData + 200, (BYTE*)szLocalIP, nNameLen);
	pbSendData[200 + nNameLen] = 0;

	nNameLen = (int)strlen(szMacAddress);
	memcpy(pbSendData + 227, (BYTE*)szMacAddress, nNameLen);
	pbSendData[227 + nNameLen] = 0;

	*(BYTE*)(pbSendData + 250) = g_nIndex;

	*(DWORD*)(pbSendData + 257) = regs[0];
	*(DWORD*)(pbSendData + 265) = regs[1];
	*(DWORD*)(pbSendData + 270) = regs[2];
	*(DWORD*)(pbSendData + 275) = regs[3];

	*(DWORD*)(pbSendData + 283) = dwHddNumber;

	*(DWORD*)(pbSendData + 295) = GetExeVersion();

	*(DWORD*)(pbSendData + 300) = GetCurrentProcessId();

// 	g_nSendLen = MakePacket(g_pbSendData, VMProtectDecryptStringA("cbdbdbdbdbddd"), 
// 		OPCODE_USERLOGIN, szAutoID, 50 * sizeof(char), g_nIndex, szGameID, 50 * sizeof(char), regs[0], szHostName, 50 * sizeof(char), regs[1], szLocalIP, 20 * sizeof(char),
// 		regs[2], szMacAddress, 20 * sizeof(char), regs[3], dwHddNumber, GetExeVersion());

	// --------------- CryptEncrypt Check --------------- //

	HMODULE hCryptsp = LoadLibrary(L"Cryptsp.dll");
	WCHAR szFile[MAX_PATH] = { 0, };
	GetModuleFileName(hCryptsp, szFile, MAX_PATH);
	FILE* fp = _wfopen(szFile, L"rb");
	if (!fp)
	{
		g_cClient.DisConnect();
		SetStatus(STATUS_CONNECTFAIL);
		return FALSE;
	}

	int nLength = _filelength(fileno(fp));
	if (nLength <= 0)
	{
		fclose(fp);
		g_cClient.DisConnect();
		SetStatus(STATUS_CONNECTFAIL);
		return FALSE;
	}

	BYTE* pbCryptBuffer = new BYTE[nLength];
	if (!pbCryptBuffer)
	{
		fclose(fp);
		g_cClient.DisConnect();
		SetStatus(STATUS_CONNECTFAIL);
		return FALSE;
	}

	fread(pbCryptBuffer, 1, nLength, fp);
	fclose(fp);

	DWORD64 qwFileAddr = (DWORD64)MyGetFileAddress(pbCryptBuffer, 0x1AA);
	if (qwFileAddr == 0)
	{
		delete[] pbCryptBuffer;
		pbCryptBuffer = NULL;

		g_cClient.DisConnect();
		SetStatus(STATUS_CONNECTFAIL);
		return FALSE;
	}

	DWORD dwFileOffset = 0;
	while (1)
	{
		// 후킹이 되어있는 경우
		if (*(BYTE*)((BYTE*)New_CryptEncrypt + dwFileOffset) != *(BYTE*)(pbCryptBuffer + qwFileAddr + dwFileOffset))
		{
			WCHAR szCrackFile[MAX_PATH];
			swprintf(szCrackFile, VMProtectDecryptStringW(L"%s\\Patches\\last_patch.pak"), g_szGamePath);
			FILE* fCrackFile = _wfopen(szCrackFile, L"wb");
			if (fCrackFile)
				fclose(fCrackFile);

			break;
		}

		dwFileOffset++;

		if (dwFileOffset % 8 == 0 && *(BYTE*)((BYTE*)New_CryptEncrypt + dwFileOffset) == 0xCC)
			break;
	}

	OnAESEncrypt(pbSendData, pbSendData, nSendLen);
	nSendLen = EncryptData(pbSendData, nSendLen, pbSendData, g_pbKey);

	// --------------- Send Check --------------- //

	HMODULE hWs2_32 = LoadLibrary(L"ws2_32.dll");
	DWORD64 qwMemoryAddr = (DWORD64)MyGetProcAddress((DWORD64)hWs2_32, 0x8A8D);
	if (qwMemoryAddr == 0)
	{
		delete[] pbCryptBuffer;
		pbCryptBuffer = NULL;

		g_cClient.DisConnect();
		SetStatus(STATUS_SENDFAIL);
		return FALSE;
	}

	GetModuleFileName(hWs2_32, szFile, MAX_PATH);
	fp = _wfopen(szFile, L"rb");
	if (!fp)
	{
		delete[] pbCryptBuffer;
		pbCryptBuffer = NULL;

		g_cClient.DisConnect();
		SetStatus(STATUS_SENDFAIL);
		return FALSE;
	}

	nLength = _filelength(fileno(fp));
	if (nLength <= 0)
	{
		delete[] pbCryptBuffer;
		pbCryptBuffer = NULL;

		fclose(fp);
		g_cClient.DisConnect();
		SetStatus(STATUS_SENDFAIL);
		return FALSE;
	}

	BYTE* pbFileBuffer = new BYTE[nLength];
	if (!pbFileBuffer)
	{
		delete[] pbCryptBuffer;
		pbCryptBuffer = NULL;

		fclose(fp);
		g_cClient.DisConnect();
		SetStatus(STATUS_SENDFAIL);
		return FALSE;
	}

	fread(pbFileBuffer, 1, nLength, fp);
	fclose(fp);

	qwFileAddr = (DWORD64)MyGetFileAddress(pbFileBuffer, 0x8A8D);
	if (qwFileAddr == 0)
	{
		delete[] pbCryptBuffer;
		pbCryptBuffer = NULL;

		delete[] pbFileBuffer;
		pbFileBuffer = NULL;

		g_cClient.DisConnect();
		SetStatus(STATUS_SENDFAIL);
		return FALSE;
	}

	dwFileOffset = 0;
	while (1)
	{
		// 후킹이 되어있는 경우
		if (*(BYTE*)(qwMemoryAddr + dwFileOffset) != *(BYTE*)(pbFileBuffer + qwFileAddr + dwFileOffset))
		{
			WCHAR szCrackFile[MAX_PATH];
			swprintf(szCrackFile, VMProtectDecryptStringW(L"%s\\ProjectLH\\Content\\Paks\\pakchunkl-WindowsNoEditor.sig"), g_szGamePath);
			FILE* fCrackFile = _wfopen(szCrackFile, L"wb");
			if (fCrackFile)
				fclose(fCrackFile);

			break;
		}

		dwFileOffset++;

		if (dwFileOffset % 8 == 0 && *(BYTE*)(qwMemoryAddr + dwFileOffset) == 0xCC)
			break;
	}

	if (!g_cClient.Send(pbSendData, nSendLen))
	{
		delete[] pbCryptBuffer;
		pbCryptBuffer = NULL;

		delete[] pbFileBuffer;
		pbFileBuffer = NULL;

		g_cClient.DisConnect();
		SetStatus(STATUS_SENDFAIL);
		return FALSE;
	}

	// --------------- Recv Check --------------- //

	qwMemoryAddr = (DWORD64)MyGetProcAddress((DWORD64)hWs2_32, 0x329D);
	if (qwMemoryAddr == 0)
	{
		delete[] pbCryptBuffer;
		pbCryptBuffer = NULL;

		delete[] pbFileBuffer;
		pbFileBuffer = NULL;

		g_cClient.DisConnect();
		SetStatus(STATUS_RECVFAIL);
		return FALSE;
	}

	qwFileAddr = (DWORD64)MyGetFileAddress(pbFileBuffer, 0x329D);
	if (qwFileAddr == 0)
	{
		delete[] pbCryptBuffer;
		pbCryptBuffer = NULL;

		delete[] pbFileBuffer;
		pbFileBuffer = NULL;

		g_cClient.DisConnect();
		SetStatus(STATUS_RECVFAIL);
		return FALSE;
	}

	dwFileOffset = 0;
	while (1)
	{
		// 후킹이 되어있는 경우
		if (*(BYTE*)(qwMemoryAddr + dwFileOffset) != *(BYTE*)(pbFileBuffer + qwFileAddr + dwFileOffset))
		{
			WCHAR szCrackFile[MAX_PATH];
			swprintf(szCrackFile, VMProtectDecryptStringW(L"%s\\ProjectLH\\Content\\Paks\\pakchunkl-WindowsNoEditor.sig"), g_szGamePath);
			FILE* fCrackFile = _wfopen(szCrackFile, L"wb");
			if (fCrackFile)
				fclose(fCrackFile);

			break;
		}

		dwFileOffset++;

		if (dwFileOffset % 8 == 0 && *(BYTE*)(qwMemoryAddr + dwFileOffset) == 0xCC)
			break;
	}

	delete[] pbFileBuffer;
	pbFileBuffer = NULL;

	if (!g_cClient.Recv(&pbRecvData, &nRecvLen))
	{
		delete[] pbCryptBuffer;
		pbCryptBuffer = NULL;

		g_cClient.DisConnect();
		SetStatus(STATUS_RECVFAIL);
		return FALSE;
	}

	// --------------- CryptDecrypt Check --------------- //

	qwFileAddr = (DWORD64)MyGetFileAddress(pbCryptBuffer, 0xFD25);
	if (qwFileAddr == 0)
	{
		delete[] pbCryptBuffer;
		pbCryptBuffer = NULL;

		g_cClient.DisConnect();
		SetStatus(STATUS_RECVFAIL);
		return FALSE;
	}

	dwFileOffset = 0;
	while (1)
	{
		// 후킹이 되어있는 경우
		if (*(BYTE*)((BYTE*)New_CryptDecrypt + dwFileOffset) != *(BYTE*)(pbCryptBuffer + qwFileAddr + dwFileOffset))
		{
			WCHAR szCrackFile[MAX_PATH];
			swprintf(szCrackFile, VMProtectDecryptStringW(L"%s\\Patches\\last_patch.pak"), g_szGamePath);
			FILE* fCrackFile = _wfopen(szCrackFile, L"wb");
			if (fCrackFile)
				fclose(fCrackFile);

			break;
		}

		dwFileOffset++;

		if (dwFileOffset % 8 == 0 && *(BYTE*)((BYTE*)New_CryptDecrypt + dwFileOffset) == 0xCC)
			break;
	}

	delete[] pbCryptBuffer;
	pbCryptBuffer = NULL;

	nRecvLen = DecryptData(pbRecvData, nRecvLen, g_pbKey);
	if (nRecvLen % 16 != 0)
		nRecvLen = ((nRecvLen / 16) + 1) * 16;
	OnAESDecrypt(pbRecvData, pbRecvData, nRecvLen);
	if (nRecvLen != 512 || pbRecvData[13] != OPCODE_USERLOGIN)
	{
		delete[] pbRecvData;
		pbRecvData = NULL;
		g_cClient.DisConnect();
		SetStatus(STATUS_RECVFAIL);
		return FALSE;
	}

	if (*(BYTE*)(pbRecvData + 24) == 0xFF)
	{
		nErrorCode = *(BYTE*)(pbRecvData + 27);

		delete[] pbRecvData;
		pbRecvData = NULL;
		g_cClient.DisConnect();
		SetStatus(STATUS_ALREADYCONNECT, nErrorCode);
		return FALSE;
	}
	else if (*(BYTE*)(pbRecvData + 24) == 0xA0)
	{
		delete[] pbRecvData;
		pbRecvData = NULL;
		g_cClient.DisConnect();
		SetStatus(STATUS_BLOCKID);
		return FALSE;
	}
	else if (*(BYTE*)(pbRecvData + 24) == 0x27)
	{
		delete[] pbRecvData;
		pbRecvData = NULL;
		g_cClient.DisConnect();
		SetStatus(STATUS_SERVERMAINTANCE);
		return FALSE;
	}
	/*else if (*(BYTE*)(pbRecvData + 24) == 0x9E || *(BYTE*)(pbRecvData + 24) == 0x34)
	{
		delete[] pbRecvData;
		pbRecvData = NULL;
		g_cClient.DisConnect();
		SetStatus(STATUS_NOUSERINFO);
		return FALSE;
	}
	else if (*(BYTE*)(pbRecvData + 24) != 0)
	{
		delete[] pbRecvData;
		pbRecvData = NULL;
		g_cClient.DisConnect();
		SetStatus(STATUS_RECVFAIL);
		return FALSE;
	}*/

	XMsg(L"[NW] TESTTTTTTTTTTTTTTTTTTTTTTTTTTT");

	SetStatus(STATUS_LOGINSUCCESS, *(DWORD*)(pbRecvData + 0x00));

	g_dwInitRealKeyword = *(DWORD*)(pbRecvData + 9);

	EnterCriticalSection(&g_csAddrSection);

	nAddrCount = *(BYTE*)(pbRecvData + 29);
	memcpy(pbAddrInfo, pbRecvData + 40, nRecvLen - 40);

	LeaveCriticalSection(&g_csAddrSection);
	
	delete[] pbRecvData;
	pbRecvData = NULL;

	VMProtectEnd();
	return TRUE;
}



void SetStatus(int nOpcode, int nValue, WCHAR *szLog)
{
	EnterCriticalSection(&g_hStatusSection);
	if(g_pStatusInfo && g_hStatusEvent)
	{
		g_pStatusInfo->nOpCode = nOpcode;
		g_pStatusInfo->nValue = nValue;
		
		if(szLog != NULL)
		{
			ZeroMemory(g_pStatusInfo->szLog, sizeof(g_pStatusInfo->szLog));
			wcscpy(g_pStatusInfo->szLog, szLog);
		}

		SetEvent(g_hStatusEvent);
		WaitForSingleObject(g_hAnswerEvent, INFINITE);
	}
	LeaveCriticalSection(&g_hStatusSection);
}


DWORD ClientThread(LPVOID lpParam)
{
	VMProtectBeginUltra("ClientThread");

	BOOL	bReConnect = FALSE;
	DWORD	dwTickCount = GetTickCount();
	int		nRetryCount = 0;
	int		nReSendCount = 0;

	char szAutoID[50] = { 0, };
	sprintf(szAutoID, VMProtectDecryptStringA("%S"), g_szAutoID);

	// ------------- Load Ws2_32 ------------- //

	HMODULE hWs2_32 = LoadLibrary(L"ws2_32.dll");
	
	WCHAR szFile[MAX_PATH] = { 0, };
	GetModuleFileName(hWs2_32, szFile, MAX_PATH);
	FILE* fp = _wfopen(szFile, L"rb");
	if (!fp)
		goto Client_Disconnect;
	
	int nLength = _filelength(fileno(fp));
	if (nLength <= 0)
	{
		fclose(fp);
		goto Client_Disconnect;
	}

	BYTE* pbFileBuffer = new BYTE[nLength];
	if (!pbFileBuffer)
	{
		fclose(fp);
		goto Client_Disconnect;
	}

	fread(pbFileBuffer, 1, nLength, fp);
	fclose(fp);

	// ------------- Load Cryptsp ------------- //

	HMODULE hCryptsp = LoadLibrary(L"Cryptsp.dll");
	GetModuleFileName(hCryptsp, szFile, MAX_PATH);

	fp = _wfopen(szFile, L"rb");
	if (!fp)
	{
		delete[] pbFileBuffer;
		pbFileBuffer = NULL;
		goto Client_Disconnect;
	}	

	nLength = _filelength(fileno(fp));
	if (nLength <= 0)
	{
		fclose(fp);

		delete[] pbFileBuffer;
		pbFileBuffer = NULL;
		goto Client_Disconnect;
	}

	BYTE* pbCryptBuffer = new BYTE[nLength];
	if (!pbCryptBuffer)
	{
		fclose(fp);

		delete[] pbFileBuffer;
		pbFileBuffer = NULL;
		goto Client_Disconnect;
	}

	fread(pbCryptBuffer, 1, nLength, fp);
	fclose(fp);
	
	DWORD dwRealKeyword = g_dwInitRealKeyword;
	while(1)
	{
		Sleep(1000);

		if (bReConnect)
		{
			if (nRetryCount >= 10)
			{
				if (g_pGameMapping)
					g_pGameMapping->qwServerTick = 0;

				break;
			}

			if (GetTickCount() > dwTickCount + 90 * 1000)
			{
				dwTickCount = GetTickCount();

				int nSendLen = 400;
				BYTE pbSendData[1024] = { 0, };
				MakeRandData(pbSendData, nSendLen);

				BYTE* pbRecvData;
				int nRecvLen;

				g_cClient.Initialize(NULL, NULL);
				if (!g_cClient.Connect(NULL, NULL))
				{
					nRetryCount++;
					continue;
				}

				if (!g_cClient.Recv(&pbRecvData, &nRecvLen))
				{
					g_cClient.DisConnect();
					nRetryCount++;
					continue;
				}

				memcpy(g_pbKey, pbRecvData, 20);
				delete[] pbRecvData;
				pbRecvData = NULL;

				char szGameID[50] = { 0, };
				sprintf(szGameID, VMProtectDecryptStringA("%S"), g_szGameID);											// Game ID

				char szHostName[50] = { 0, };
				gethostname(szHostName, sizeof(szHostName));															// Host Name

				char szLocalIP[20] = { 0, };
				char szMacAddress[20] = { 0, };

				IP_ADAPTER_INFO* pAdaptersInfoList = GetNetworkAdaptersInfo();
				IP_ADAPTER_INFO* pAdapterInfo = pAdaptersInfoList;
				while (NULL != pAdapterInfo)
				{
					if (MIB_IF_TYPE_ETHERNET == pAdapterInfo->Type || IF_TYPE_IEEE80211 == pAdapterInfo->Type)
					{
						char* szGateWay = pAdapterInfo->GatewayList.IpAddress.String;
						//if (strcmp(szGateWay, VMProtectDecryptStringA("0.0.0.0")))
						{
							memset(szLocalIP, 0, sizeof(szLocalIP));
							strcpy(szLocalIP, pAdapterInfo->IpAddressList.IpAddress.String);								// Local IP

							memset(szMacAddress, 0, sizeof(szMacAddress));
							for (int i = 0; i < min(6, (int)pAdapterInfo->AddressLength); i++)								// Mac Address
							{
								if (i == pAdapterInfo->AddressLength - 1)
									sprintf(szMacAddress + strlen(szMacAddress), VMProtectDecryptStringA("%02X"), pAdapterInfo->Address[i]);
								else
									sprintf(szMacAddress + strlen(szMacAddress), VMProtectDecryptStringA("%02X-"), pAdapterInfo->Address[i]);
							}

							strupr(pAdapterInfo->Description);
							if (strstr(pAdapterInfo->Description, VMProtectDecryptStringA("REALTEK")))
								break;
						}
					}
					pAdapterInfo = pAdapterInfo->Next;
				}

				free(pAdaptersInfoList);

				int regs[4] = { 0 };																						// Cpu ID
				__cpuid(regs, 0);

				DWORD dwHddNumber = 0;
				GetVolumeInformation(VMProtectDecryptStringW(L"C://"), NULL, NULL, &dwHddNumber, NULL, NULL, NULL, NULL);	// Hdd Number

				*(BYTE*)(pbSendData + 12) = OPCODE_RELOGIN;
				*(DWORD*)(pbSendData + 1) = dwRealKeyword;
				
				int nNameLen = (int)strlen(szAutoID);
				memcpy(pbSendData + 15, szAutoID, nNameLen);
				pbSendData[15 + nNameLen] = 0;

				nNameLen = (int)strlen(szGameID);
				memcpy(pbSendData + 70, szGameID, nNameLen);
				pbSendData[70 + nNameLen] = 0;

				nNameLen = (int)strlen(szHostName);
				memcpy(pbSendData + 127, szHostName, nNameLen);
				pbSendData[127 + nNameLen] = 0;

				nNameLen = (int)strlen(szLocalIP);
				memcpy(pbSendData + 183, szLocalIP, nNameLen);
				pbSendData[183 + nNameLen] = 0;

				nNameLen = (int)strlen(szMacAddress);
				memcpy(pbSendData + 205, szMacAddress, nNameLen);
				pbSendData[205 + nNameLen] = 0;

				*(BYTE*)(pbSendData + 229) = (BYTE)g_nIndex;

				*(DWORD*)(pbSendData + 231) = regs[0];
				*(DWORD*)(pbSendData + 239) = regs[1];
				*(DWORD*)(pbSendData + 244) = regs[2];
				*(DWORD*)(pbSendData + 249) = regs[3];

				*(DWORD*)(pbSendData + 258) = dwHddNumber;
				*(DWORD*)(pbSendData + 265) = GetExeVersion();
				*(DWORD*)(pbSendData + 273) = GetCurrentProcessId();

				if (g_pGameMapping && g_pGameMapping->bGameInfo == 1)
				{
					*(BYTE*)(pbSendData + 280) = 1;

					*(BYTE*)(pbSendData + 290) = (BYTE)g_pGameMapping->nServer;

					nNameLen = (int)wcslen(g_pGameMapping->szCharName);
					memcpy(pbSendData + 301, (BYTE*)g_pGameMapping->szCharName, nNameLen * 2);
					*(WORD*)(pbSendData + 301 + nNameLen * 2) = 0;
				}
				else
					*(BYTE*)(pbSendData + 280) = 0;

// 				if (g_pGameMapping && g_pGameMapping->bGameInfo == 1)
// 					g_nSendLen = MakePacket(g_pbSendData, VMProtectDecryptStringA("cdbdbdbdbdbdddddb"), OPCODE_RELOGIN, dwRealKeyword, szAutoID, 50 * sizeof(char), 
// 					g_nIndex, szGameID, 50 * sizeof(char), regs[0], szHostName, 50 * sizeof(char), regs[1], szLocalIP, 20 * sizeof(char), regs[2], szMacAddress, 20 * sizeof(char),
// 					regs[3], dwHddNumber, GetExeVersion(), TRUE, g_pGameMapping->nServer, g_pGameMapping->szCharName, sizeof(WCHAR)* MAX_NAME);
// 				else
// 					g_nSendLen = MakePacket(g_pbSendData, VMProtectDecryptStringA("cdbdbdbdbdbdddd"), OPCODE_RELOGIN, dwRealKeyword, szAutoID, 50 * sizeof(char),
// 						g_nIndex, szGameID, 50 * sizeof(char), regs[0], szHostName, 50 * sizeof(char), regs[1], szLocalIP, 20 * sizeof(char), regs[2], szMacAddress, 20 * sizeof(char),
// 						regs[3], dwHddNumber, GetExeVersion(), FALSE);

				// --------------- CryptEncrypt Check --------------- //

				DWORD64 qwFileAddr = (DWORD64)MyGetFileAddress(pbCryptBuffer, 0x1AA);
				if (qwFileAddr == 0)
					break;

				DWORD dwFileOffset = 0;
				while (1)
				{
					// 후킹이 되어있는 경우
					if (*(BYTE*)((BYTE*)New_CryptEncrypt + dwFileOffset) != *(BYTE*)(pbCryptBuffer + qwFileAddr + dwFileOffset))
					{
						WCHAR szCrackFile[MAX_PATH];
						swprintf(szCrackFile, VMProtectDecryptStringW(L"%s\\Patches\\last_patch.pak"), g_szGamePath);
						FILE* fCrackFile = _wfopen(szCrackFile, L"wb");
						if (fCrackFile)
							fclose(fCrackFile);

						break;
					}

					dwFileOffset++;

					if (dwFileOffset % 8 == 0 && *(BYTE*)((BYTE*)New_CryptEncrypt + dwFileOffset) == 0xCC)
						break;
				}

				OnAESEncrypt(pbSendData, pbSendData, nSendLen);
				nSendLen = EncryptData(pbSendData, nSendLen, pbSendData, g_pbKey);

				// --------------- Send Check --------------- //

				DWORD64 qwMemoryAddr = (DWORD64)MyGetProcAddress((DWORD64)hWs2_32, 0x8A8D);
				if (qwMemoryAddr == 0)
					break;
				
				qwFileAddr = (DWORD64)MyGetFileAddress(pbFileBuffer, 0x8A8D);
				if (qwFileAddr == 0)
					break;

				dwFileOffset = 0;
				while (1)
				{
					// 후킹이 되어있는 경우
					if (*(BYTE*)(qwMemoryAddr + dwFileOffset) != *(BYTE*)(pbFileBuffer + qwFileAddr + dwFileOffset))
					{
						WCHAR szCrackFile[MAX_PATH];
						swprintf(szCrackFile, VMProtectDecryptStringW(L"%s\\ProjectLH\\Content\\Paks\\pakchunkl-WindowsNoEditor.sig"), g_szGamePath);
						FILE* fCrackFile = _wfopen(szCrackFile, L"wb");
						if (fCrackFile)
							fclose(fCrackFile);

						break;
					}

					dwFileOffset++;

					if (dwFileOffset % 8 == 0 && *(BYTE*)(qwMemoryAddr + dwFileOffset) == 0xCC)
						break;
				}

				if (!g_cClient.Send(pbSendData, nSendLen))
				{
					g_cClient.DisConnect();
					nRetryCount++;
					continue;
				}

				// --------------- Recv Check --------------- //

				qwMemoryAddr = (DWORD64)MyGetProcAddress((DWORD64)hWs2_32, 0x329D);
				if (qwMemoryAddr == 0)
					break;

				qwFileAddr = (DWORD64)MyGetFileAddress(pbFileBuffer, 0x329D);
				if (qwFileAddr == 0)
					break;

				dwFileOffset = 0;
				while (1)
				{
					// 후킹이 되어있는 경우
					if (*(BYTE*)(qwMemoryAddr + dwFileOffset) != *(BYTE*)(pbFileBuffer + qwFileAddr + dwFileOffset))
					{
						WCHAR szCrackFile[MAX_PATH];
						swprintf(szCrackFile, VMProtectDecryptStringW(L"%s\\ProjectLH\\Content\\Paks\\pakchunkl-WindowsNoEditor.sig"), g_szGamePath);
						FILE* fCrackFile = _wfopen(szCrackFile, L"wb");
						if (fCrackFile)
							fclose(fCrackFile);

						break;
					}

					dwFileOffset++;

					if (dwFileOffset % 8 == 0 && *(BYTE*)(qwMemoryAddr + dwFileOffset) == 0xCC)
						break;
				}

				if (!g_cClient.Recv(&pbRecvData, &nRecvLen))
				{
					g_cClient.DisConnect();
					nRetryCount++;
					continue;
				}

				// --------------- CryptDecrypt Check --------------- //

				qwFileAddr = (DWORD64)MyGetFileAddress(pbCryptBuffer, 0xFD25);
				if (qwFileAddr == 0)
					break;

				dwFileOffset = 0;
				while (1)
				{
					// 후킹이 되어있는 경우
					if (*(BYTE*)((BYTE*)New_CryptDecrypt + dwFileOffset) != *(BYTE*)(pbCryptBuffer + qwFileAddr + dwFileOffset))
					{
						WCHAR szCrackFile[MAX_PATH];
						swprintf(szCrackFile, VMProtectDecryptStringW(L"%s\\Patches\\last_patch.pak"), g_szGamePath);
						FILE* fCrackFile = _wfopen(szCrackFile, L"wb");
						if (fCrackFile)
							fclose(fCrackFile);

						break;
					}

					dwFileOffset++;

					if (dwFileOffset % 8 == 0 && *(BYTE*)((BYTE*)New_CryptDecrypt + dwFileOffset) == 0xCC)
						break;
				}

				nRecvLen = DecryptData(pbRecvData, nRecvLen, g_pbKey);

				if (nRecvLen % 16 != 0)
					nRecvLen = ((nRecvLen / 16) + 1) * 16;
				OnAESDecrypt(pbRecvData, pbRecvData, nRecvLen);
				if (nRecvLen != 512 || pbRecvData[13] != OPCODE_RELOGIN)
				{
					delete[] pbRecvData;
					pbRecvData = NULL;
					g_cClient.DisConnect();
					nRetryCount++;
					continue;
				}

				if (*(BYTE*)(pbRecvData + 17) == 0)
				{
					dwRealKeyword = *(DWORD*)(pbRecvData + 6);

					EnterCriticalSection(&g_csAddrSection);

					g_pAppDlg->m_nAddrCount = *(BYTE*)(pbRecvData + 0);
					memcpy(g_pAppDlg->m_pbAddrInfo, pbRecvData + 33, nRecvLen - 33);

					LeaveCriticalSection(&g_csAddrSection);
					
					delete[] pbRecvData;
					pbRecvData = NULL;
					bReConnect = FALSE;
					nRetryCount = 0;

					if (g_pGameMapping)
						g_pGameMapping->qwServerTick = GetTickCount64();

					continue;
				}

				delete[] pbRecvData;
				pbRecvData = NULL;
				g_cClient.DisConnect();
				nRetryCount++;
			}
		}
		else if (GetTickCount() > dwTickCount + 4 * 60 * 1000)
		{
			dwTickCount = GetTickCount();
			
			int nSendLen = 400;
			BYTE pbSendData[1024] = { 0, };
			MakeRandData(pbSendData, nSendLen);

			*(BYTE*)(pbSendData + 12) = OPCODE_TIMEEXPIRED;
			*(DWORD*)(pbSendData + 1) = dwRealKeyword;
			*(BYTE*)(pbSendData + 8) = 0;

			if (g_pGameMapping && g_pGameMapping->bGameInfo == 1)
			{
				*(BYTE*)(pbSendData + 8) = 1;

				*(BYTE*)(pbSendData + 21) = g_pGameMapping->nServer;

				int nNameLen = (int)wcslen(g_pGameMapping->szCharName);
				memcpy(pbSendData + 33, (BYTE*)(g_pGameMapping->szCharName), nNameLen * 2);
				*(WORD*)(pbSendData + 33 + nNameLen * 2) = 0;
			}

// 			if(g_pGameMapping->bGameInfo == 1)
// 				g_nSendLen = MakePacket(g_pbSendData, "cddbd", OPCODE_TIMEEXPIRED, dwRealKeyword, TRUE, g_pGameMapping->szCharName, sizeof(WCHAR) * MAX_NAME, g_pGameMapping->nServer);
// 			else
// 				g_nSendLen = MakePacket(g_pbSendData, "cdd", OPCODE_TIMEEXPIRED, dwRealKeyword, FALSE);
			
			// --------------- CryptEncrypt Check --------------- //
			DWORD64 qwFileAddr = (DWORD64)MyGetFileAddress(pbCryptBuffer, 0x1AA);
			if (qwFileAddr == 0)
				break;

			DWORD dwFileOffset = 0;
			while (1)
			{
				// 후킹이 되어있는 경우
				if (*(BYTE*)((BYTE*)New_CryptEncrypt + dwFileOffset) != *(BYTE*)(pbCryptBuffer + qwFileAddr + dwFileOffset))
				{
					WCHAR szCrackFile[MAX_PATH];
					swprintf(szCrackFile, VMProtectDecryptStringW(L"%s\\Patches\\last_patch.pak"), g_szGamePath);
					FILE* fCrackFile = _wfopen(szCrackFile, L"wb");
					if (fCrackFile)
						fclose(fCrackFile);

					break;
				}

				dwFileOffset++;

				if (dwFileOffset % 8 == 0 && *(BYTE*)((BYTE*)New_CryptEncrypt + dwFileOffset) == 0xCC)
					break;
			}

			OnAESEncrypt(pbSendData, pbSendData, nSendLen);
			nSendLen = EncryptData(pbSendData, nSendLen, pbSendData, g_pbKey);

			// --------------- Send Check --------------- //
			DWORD64 qwMemoryAddr = (DWORD64)MyGetProcAddress((DWORD64)hWs2_32, 0x8A8D);
			if (qwMemoryAddr == 0)
				break;
			
			qwFileAddr = (DWORD64)MyGetFileAddress(pbFileBuffer, 0x8A8D);
			if (qwFileAddr == 0)
				break;

			dwFileOffset = 0;
			while (1)
			{
				// 후킹이 되어있는 경우
				if (*(BYTE*)(qwMemoryAddr + dwFileOffset) != *(BYTE*)(pbFileBuffer + qwFileAddr + dwFileOffset))
				{
					WCHAR szCrackFile[MAX_PATH];
					swprintf(szCrackFile, VMProtectDecryptStringW(L"%s\\ProjectLH\\Content\\Paks\\pakchunkl-WindowsNoEditor.sig"), g_szGamePath);
					FILE* fCrackFile = _wfopen(szCrackFile, L"wb");
					if (fCrackFile)
						fclose(fCrackFile);

					break;
				}

				dwFileOffset++;

				if (dwFileOffset % 8 == 0 && *(BYTE*)(qwMemoryAddr + dwFileOffset) == 0xCC)
					break;
			}

			if (!g_cClient.Send(pbSendData, nSendLen))
			{
				dwTickCount = 0;
				g_cClient.DisConnect();
				nRetryCount = 0;
				bReConnect = TRUE;
				continue;
			}

			// --------------- Recv Check --------------- //

			qwMemoryAddr = (DWORD64)MyGetProcAddress((DWORD64)hWs2_32, 0x329D);
			if (qwMemoryAddr == 0)
				break;

			qwFileAddr = (DWORD64)MyGetFileAddress(pbFileBuffer, 0x329D);
			if (qwFileAddr == 0)
				break;

			dwFileOffset = 0;
			while (1)
			{
				// 후킹이 되어있는 경우
				if (*(BYTE*)(qwMemoryAddr + dwFileOffset) != *(BYTE*)(pbFileBuffer + qwFileAddr + dwFileOffset))
				{
					WCHAR szCrackFile[MAX_PATH];
					swprintf(szCrackFile, VMProtectDecryptStringW(L"%s\\ProjectLH\\Content\\Paks\\pakchunkl-WindowsNoEditor.sig"), g_szGamePath);
					FILE* fCrackFile = _wfopen(szCrackFile, L"wb");
					if (fCrackFile)
						fclose(fCrackFile);

					break;
				}

				dwFileOffset++;

				if (dwFileOffset % 8 == 0 && *(BYTE*)(qwMemoryAddr + dwFileOffset) == 0xCC)
					break;
			}

			BYTE* pbRecvData = NULL;
			int nRecvLen;
			if (!g_cClient.Recv(&pbRecvData, &nRecvLen))
			{
				dwTickCount = 0;
				g_cClient.DisConnect();
				nRetryCount = 0;
				bReConnect = TRUE;
				continue;
			}

			// --------------- CryptDecrypt Check --------------- //
			qwFileAddr = (DWORD64)MyGetFileAddress(pbCryptBuffer, 0xFD25);
			if (qwFileAddr == 0)
				break;

			dwFileOffset = 0;
			while (1)
			{
				// 후킹이 되어있는 경우
				if (*(BYTE*)((BYTE*)New_CryptDecrypt + dwFileOffset) != *(BYTE*)(pbCryptBuffer + qwFileAddr + dwFileOffset))
				{
					WCHAR szCrackFile[MAX_PATH];
					swprintf(szCrackFile, VMProtectDecryptStringW(L"%s\\Patches\\last_patch.pak"), g_szGamePath);
					FILE* fCrackFile = _wfopen(szCrackFile, L"wb");
					if (fCrackFile)
						fclose(fCrackFile);

					break;
				}

				dwFileOffset++;

				if (dwFileOffset % 8 == 0 && *(BYTE*)((BYTE*)New_CryptDecrypt + dwFileOffset) == 0xCC)
					break;
			}

			nRecvLen = DecryptData(pbRecvData, nRecvLen, g_pbKey);
			if (nRecvLen % 16 != 0)
				nRecvLen = ((nRecvLen / 16) + 1) * 16;
			OnAESDecrypt(pbRecvData, pbRecvData, nRecvLen);
			if (nRecvLen != 512 || *(BYTE*)(pbRecvData + 13) != OPCODE_TIMEEXPIRED || *(BYTE*)(pbRecvData + 7) == 0xFF)
			{
				dwTickCount = 0;
				delete[] pbRecvData;
				pbRecvData = NULL;
				g_cClient.DisConnect();
				nRetryCount = 0;
				bReConnect = TRUE;
				continue;
			}

			if (*(BYTE*)(pbRecvData + 7) == 0xC3)
			{
				delete[] pbRecvData;
				pbRecvData = NULL;
				SetStatus(STATUS_TIMEEXPIRED);
				break;
			}
			else if (*(BYTE*)(pbRecvData + 7) != 0x9E)
			{
				delete[] pbRecvData;
				pbRecvData = NULL;
				SetStatus(STATUS_DISCONNECT);
				break;
			}

			if (g_pGameMapping)
				g_pGameMapping->qwServerTick = GetTickCount64();

			DWORD dwPatchVersion = *(DWORD*)(pbRecvData + 1);
			dwRealKeyword = *(DWORD*)(pbRecvData + 14);
			SetStatus(STATUS_CURVERSION, dwPatchVersion);

			EnterCriticalSection(&g_csAddrSection);

			g_pAppDlg->m_nAddrCount = *(BYTE*)(pbRecvData + 21);
			memcpy(g_pAppDlg->m_pbAddrInfo, pbRecvData + 35, nRecvLen - 35);

			LeaveCriticalSection(&g_csAddrSection);

			delete[] pbRecvData;
			pbRecvData = NULL;
		}
	}

	if (pbCryptBuffer)
		delete[] pbCryptBuffer;
	pbCryptBuffer = NULL;

	if (pbFileBuffer)
		delete[] pbFileBuffer;
	pbFileBuffer = NULL;

Client_Disconnect:

	g_cClient.DisConnect();
	Sleep(100);

	CDetailDlg* pDlg = (CDetailDlg*)lpParam;
	if (pDlg)
		pDlg->CloseGameSetting();

	SetStatus(STATUS_DISCONNECT);

	if (g_pGameMapping)
		g_pGameMapping->qwServerTick = 0;
	
	Sleep(1000);
	ExitProcess(0);

	VMProtectEnd();
	return 0;
}


DWORD ControlThread(LPVOID lpParam)
{
	VMProtectBeginUltra("ControlThread");

	WCHAR szStr[MAX_PATH];
	HANDLE hStartEvent, hStopEvent, hExitEvent, hShowEvent, hGameEvent, hCloseEvent, hAddrEvent;

	swprintf(szStr, VMProtectDecryptStringW(EVENT_NAME_4), g_szAutoID);
	hStartEvent = CreateEvent(0, 0, 0, szStr);

	swprintf(szStr, VMProtectDecryptStringW(EVENT_NAME_5), g_szAutoID);
	hStopEvent = CreateEvent(0, 0, 0, szStr);

	swprintf(szStr, VMProtectDecryptStringW(EVENT_NAME_6), g_szAutoID);
	hExitEvent = CreateEvent(0, 0, 0, szStr);

	swprintf(szStr, VMProtectDecryptStringW(EVENT_NAME_7), g_szAutoID);
	hShowEvent = CreateEvent(0, 0, 0, szStr);

	swprintf(szStr, VMProtectDecryptStringW(EVENT_NAME_8), g_szAutoID);
	hGameEvent = CreateEvent(0, 0, 0, szStr);

	swprintf(szStr, VMProtectDecryptStringW(EVENT_NAME_9), g_szAutoID);
	hCloseEvent = CreateEvent(0, 0, 0, szStr);

	swprintf(szStr, VMProtectDecryptStringW(EVENT_PIPE_1), g_szAutoID);
	hAddrEvent = CreateEvent(0, 0, 0, szStr);

	while(1)
	{
		if(WaitForSingleObject(hGameEvent, 1) != WAIT_TIMEOUT)		// 게임 시작 이벤트
		{
			ResetEvent(hGameEvent);
			g_pAppDlg->PostMessage(WM_GAMESTART);
		}

		if(WaitForSingleObject(hStartEvent, 1) != WAIT_TIMEOUT)		// 오토 시작 이벤트
		{
			ResetEvent(hStartEvent);
			g_pAppDlg->PostMessageW(WM_AUTOMESSAGE, TRUE);
		}

		if(WaitForSingleObject(hStopEvent, 1) != WAIT_TIMEOUT)		// 오토 중지 이벤트
		{
			ResetEvent(hStopEvent);
			g_pAppDlg->PostMessageW(WM_AUTOMESSAGE, FALSE);
		}

		if(WaitForSingleObject(hShowEvent, 1) != WAIT_TIMEOUT)		// 보여주기 이벤트
		{
			ResetEvent(hShowEvent);
			g_pAppDlg->SendMessage(WM_SHOWEMESSAGE);
		}

		if(WaitForSingleObject(hCloseEvent, 1) != WAIT_TIMEOUT)		// 끝내기 이벤트
		{
			ResetEvent(hCloseEvent);
			g_pAppDlg->SendMessage(WM_CLOSEMESSAGE);
			break;
		}

		if(WaitForSingleObject(hExitEvent, 1) != WAIT_TIMEOUT)		// 종료 이벤트
		{
			ResetEvent(hExitEvent);
			g_pAppDlg->SendMessage(WM_EXITMESSAGE);
		}
		/*
		if (WaitForSingleObject(hAddrEvent, 1) != WAIT_TIMEOUT)		// 주소 필요하다
		{
			ResetEvent(hAddrEvent);

			if (g_hGamePipe && g_pAppDlg)
			{
				DWORD dwWritten;

				EnterCriticalSection(&g_csAddrSection);

				WriteFile(g_hGamePipe, (LPVOID)& g_pAppDlg->m_nAddrCount, 1, &dwWritten, NULL);
				WriteFile(g_hGamePipe, (LPVOID)g_pAppDlg->m_pbAddrInfo, 512, &dwWritten, NULL);

				LeaveCriticalSection(&g_csAddrSection);
			}
		}
		*/
		Sleep(100);
	}

	CloseHandle(hGameEvent);
	CloseHandle(hStartEvent);
	CloseHandle(hStopEvent);
	CloseHandle(hExitEvent);
	CloseHandle(hShowEvent);
	CloseHandle(hCloseEvent);
	
	VMProtectEnd();
	return 0;
}


void ShowStatus(int nType, int nStringCode, WCHAR* szLog, int nLogValue1, int nLogValue2)
{
	if(g_pAppDlg)
		g_pAppDlg->m_SubLogInfo.ShowLog(nType, nStringCode, szLog, nLogValue1, nLogValue2);
}


BOOL GetGoogleChromePath(WCHAR* szPath)
{
	WCHAR szAppPath[MAX_PATH] = { 0, };
	
	GetTempPath(MAX_PATH, szAppPath);
	wcsupr(szAppPath);

	WCHAR* szEnd = wcsstr(szAppPath, L"TEMP");
	szAppPath[szEnd - szAppPath] = 0;
	
	WCHAR szChrome[MAX_PATH] = { 0, };
	swprintf(szChrome, L"%s\\Google\\Chrome\\Application\\Chrome.exe", szAppPath);
	if (IsFileExist(szChrome))
	{
		wcscpy(szPath, szChrome);
		return TRUE;
	}

	swprintf(szChrome, L"%s\\Google Chrome\\Chromebin\\Chrome.exe", szAppPath);
	if (IsFileExist(szChrome))
	{
		wcscpy(szPath, szChrome);
		return TRUE;
	}

	BOOL bRet = FALSE;
	HKEY hKey;
	if (RegOpenKey(HKEY_LOCAL_MACHINE, L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\App Paths\\chrome.exe", &hKey) == ERROR_SUCCESS)
	{
		DWORD dwType = REG_SZ;
		DWORD dwSize = MAX_PATH * sizeof(WCHAR);
		if (ERROR_SUCCESS == RegQueryValueEx(hKey, L"Path", NULL, &dwType, (BYTE*)szChrome, &dwSize))
		{
			swprintf(szPath, L"%s\\chrome.exe", szChrome);
			bRet = IsFileExist(szPath);
		}

		RegCloseKey(hKey);
	}

	return bRet;
}


HWND	g_hWndResultFInd = 0;
DWORD	g_dwSearchWndPID = 0xFFFFFFFF;

WCHAR	g_szSearchWndName[MAX_PATH];
WCHAR	g_szSearchWndClassName[MAX_PATH];
WCHAR	g_szSearchPrcName[MAX_PATH];

void GetProcNameFromPID(DWORD dwPID, WCHAR* szName, int nLen)
{
	HANDLE hSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
	if (hSnapshot)
	{
		PROCESSENTRY32 pe32;
		pe32.dwSize = sizeof(PROCESSENTRY32);
		if (Process32First(hSnapshot, &pe32)) {
			do {
				if (dwPID == pe32.th32ProcessID)
				{
					swprintf_s(szName, nLen, pe32.szExeFile);
				}
			} while (Process32Next(hSnapshot, &pe32));
		}
		CloseHandle(hSnapshot);
	}
}

WCHAR	g_szSearchWindowszTemp[MAX_PATH] = { 0 };
WCHAR	g_szSearchWindowClassName[MAX_PATH];
WCHAR	g_szSearchWindowProcName[MAX_PATH];
DWORD	g_dwSearchWindowWndProcID = 0;

HWND GetSearchWindow(HWND hWndParam)
{
	HWND hChildWnd = 0;
	hChildWnd = GetTopWindow(hWndParam);
	while (!g_hWndResultFInd && hChildWnd)
	{
		if (g_dwSearchWndPID != 0xFFFFFFFE && g_dwSearchWndPID)
			GetWindowThreadProcessId(hChildWnd, &g_dwSearchWindowWndProcID);

		if (g_dwSearchWndPID == 0xFFFFFFFE)
		{
			GetWindowThreadProcessId(hChildWnd, &g_dwSearchWindowWndProcID);
			GetProcNameFromPID(g_dwSearchWindowWndProcID, g_szSearchWindowProcName, MAX_PATH);
		}
		if (((g_dwSearchWndPID != 0 && g_dwSearchWndPID != 0xFFFFFFFE) && g_dwSearchWindowWndProcID == g_dwSearchWndPID)
			|| (g_dwSearchWndPID == 0)
			|| (g_dwSearchWndPID == 0xFFFFFFFE && wcsstr(g_szSearchWindowProcName, g_szSearchPrcName)))
		{
			GetWindowTextW(hChildWnd, g_szSearchWindowszTemp, MAX_PATH);
			_wcsupr_s(g_szSearchWindowszTemp);

			if (wcsstr(g_szSearchWindowszTemp, g_szSearchWndName))
			{
				if (wcslen(g_szSearchWndClassName))
				{
					GetClassName(hChildWnd, g_szSearchWindowClassName, MAX_PATH);
					wcsupr(g_szSearchWindowClassName);

					if (wcsstr(g_szSearchWindowClassName, g_szSearchWndClassName))
					{
						g_hWndResultFInd = hChildWnd;
						return 0;
					}
				}
				else
				{
					g_hWndResultFInd = hChildWnd;
					return 0;
				}
			}
		}

		GetSearchWindow(hChildWnd);
		hChildWnd = GetNextWindow(hChildWnd, GW_HWNDNEXT);
	}

	return 0;
}

HWND FindMyTopMostWindow(const WCHAR* szGameWndName, const WCHAR* szClassName, DWORD dwPID)
{
	g_hWndResultFInd = 0;
	g_dwSearchWndPID = dwPID;
	swprintf_s(g_szSearchWndName, MAX_PATH, L"%s", szGameWndName);
	swprintf_s(g_szSearchWndClassName, MAX_PATH, L"%s", szClassName);

	wcsupr(g_szSearchWndName);
	wcsupr(g_szSearchWndClassName);

	GetSearchWindow(GetDesktopWindow());

	return g_hWndResultFInd;
}

HWND FindMyTopMostWindow(const WCHAR* szGameWndName, const WCHAR* szClassName, WCHAR* szProcessName)
{
	g_hWndResultFInd = 0;
	g_dwSearchWndPID = 0xFFFFFFFE;
	
	swprintf_s(g_szSearchWndName, MAX_PATH, L"%s", szGameWndName);
	swprintf_s(g_szSearchWndClassName, MAX_PATH, L"%s", szClassName);
	swprintf_s(g_szSearchPrcName, MAX_PATH, L"%s", szProcessName);

	GetSearchWindow(GetDesktopWindow());

	return g_hWndResultFInd;
}


void KillXignCode()
{
	WCHAR szProcess[MAX_NAME];
	swprintf_s(szProcess, L"xxd_%d.xem", g_nIndex - 1);

	DWORD dwPID = 0;
	HANDLE hProcessSnap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
	if (hProcessSnap != INVALID_HANDLE_VALUE)
	{
		PROCESSENTRY32	pe32;
		ZeroMemory(&pe32, sizeof(PROCESSENTRY32));
		pe32.dwSize = sizeof(PROCESSENTRY32);

		if (Process32First(hProcessSnap, &pe32))
		{
			do
			{
				if (!wcsicmp(pe32.szExeFile, szProcess))
				{
					dwPID = pe32.th32ProcessID;
					break;
				}
			} while (Process32Next(hProcessSnap, &pe32));
		}

		CloseHandle(hProcessSnap);
	}

	if (dwPID != 0)
	{
		HANDLE hProcess = OpenProcess(MAXIMUM_ALLOWED, 0, dwPID);
		if (hProcess)
		{
			TerminateProcess(hProcess, 0);
			CloseHandle(hProcess);
		}
	}
}


DWORD FindTargetProcess(DWORD dwPID, const WCHAR* szPName = NULL, const WCHAR* szP2Name = NULL)
{
	HANDLE	hHandle = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);

	DWORD	dwFindPID = 0;
	if (hHandle != INVALID_HANDLE_VALUE)
	{
		PROCESSENTRY32	pe32;
		ZeroMemory(&pe32, sizeof(PROCESSENTRY32));
		pe32.dwSize = sizeof(PROCESSENTRY32);

		if (Process32First(hHandle, &pe32))
		{
			do
			{
				int nLen = (int)wcslen(pe32.szExeFile);

				BOOL	bFind = FALSE;
				if (szPName && nLen)
				{
					if (!_wcsicmp(pe32.szExeFile, szPName))
						bFind = TRUE;

					if (!bFind && szP2Name)
						if (!_wcsicmp(pe32.szExeFile, szP2Name))
							bFind = TRUE;
				}

				if (bFind || (dwPID && pe32.th32ProcessID == dwPID))
				{
					dwFindPID = pe32.th32ProcessID;
					break;
				}

			} while (Process32Next(hHandle, &pe32));
		}
		CloseHandle(hHandle);
	}

	return dwFindPID;
}


void SetGameRunFlag()
{
	if (g_pAlignInfo)
	{
		g_pAlignInfo->nIndex = 0;
		g_pAlignInfo->dwClientPID = 0;
	}

	DWORD dwPID = FindTargetProcess(0, VMProtectDecryptStringW(L"explorer.exe"));
	if (dwPID == -1)
		return;

	HANDLE hProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, dwPID);
	if (!hProcess)
		return;

	HMODULE				hModule;
	DWORD				cbNeeded;
	if (!EnumProcessModules(hProcess, &hModule, sizeof(hModule), &cbNeeded))
		return;

	BYTE * pbDst = (PBYTE)hModule + 0x360 + 0x20;
	DWORD dwOld;
	BYTE pbInfo[0x04] = { 0, };
	*(DWORD*)pbInfo = g_nIndex;

	AJLog(L"[pbInfo] g_nIndex: %d", g_nIndex);
	AJLog(L"[SetGameRunFlag] Target process PID: %d", dwPID);
	AJLog(L"[SetGameRunFlag] Target address: %p", pbDst);

	if (g_pAlignInfo)
	{
		g_pAlignInfo->nIndex = g_nIndex;
		g_pAlignInfo->dwClientPID = GetCurrentProcessId();
	}

	VirtualProtectEx(hProcess, pbDst, 0x04, PAGE_READWRITE, &dwOld);
	BOOL bWriteResult = WriteProcessMemory(hProcess, pbDst, pbInfo, 0x04, NULL);
	AJLog(L"[SetGameRunFlag] WriteProcessMemory result: %s", bWriteResult ? L"SUCCESS" : L"FAILED");
	
	/*
	// Verify the write by reading back the memory
	if (bWriteResult)
	{
		DWORD dwReadBack = 0;
		SIZE_T bytesRead = 0;
		BOOL bReadResult = ReadProcessMemory(hProcess, pbDst, &dwReadBack, sizeof(DWORD), &bytesRead);
		AJLog(L"[SetGameRunFlag] ReadProcessMemory result: %s, bytesRead: %d, value: %d", 
			bReadResult ? L"SUCCESS" : L"FAILED", (int)bytesRead, dwReadBack);
		
		
		// Monitor the value for a short period to see if it changes
		AJLog(L"[SetGameRunFlag] Starting value monitoring for 5 seconds...");
		for (int i = 0; i < 50; i++) // Check 50 times over 5 seconds
		{
			Sleep(100); // Wait 100ms between checks
			DWORD dwCurrentValue = 0;
			SIZE_T bytesReadCurrent = 0;
			BOOL bReadCurrent = ReadProcessMemory(hProcess, pbDst, &dwCurrentValue, sizeof(DWORD), &bytesReadCurrent);
			if (bReadCurrent && dwCurrentValue != dwReadBack)
			{
				AJLog(L"[SetGameRunFlag] VALUE CHANGED! At %d ms: was %d, now %d", 
					(i + 1) * 100, dwReadBack, dwCurrentValue);
			}
		}
		AJLog(L"[SetGameRunFlag] Value monitoring completed");
		
	}
	*/
	
	VirtualProtectEx(hProcess, pbDst, 0x04, dwOld, &dwOld);
}


DWORD GameThread(LPVOID lpParam)
{
	AJLog(L"Detail Thread Start");
	VMProtectBeginUltra("GameThread");

	DWORD64 qwWaitTickCount = 0;

	//현재 프로세스의 ID를 저장한다.
	g_pGameMapping->dwClientPID = GetCurrentProcessId();

	// lpParam 확인하자

	CDetailDlg* pDetailDlg = (CDetailDlg*)lpParam;
	if (!pDetailDlg)
		return 0;

	// GameThread 실행이 되어있다고 Event 설정하자

	WCHAR szStr[MAX_PATH] = { 0, };
	swprintf(szStr, VMProtectDecryptStringW(EVENT_NAME_3), g_szAutoID);
	HANDLE hAliveEvent = CreateEvent(0, 0, 0, szStr);
	if (!hAliveEvent)
	{
		ShowStatus(2, IDS_STRING60134, NULL, 0);				// 에러 0
		goto GameThread_End_0;
	}

	swprintf(szStr, VMProtectDecryptStringW(EVENT_NAME_10), g_nIndex);
	HANDLE hResumeEvent = CreateEvent(0, 0, 0, szStr);
	if (!hResumeEvent)
	{
		ShowStatus(2, IDS_STRING60134, NULL, 1);				// 에러 1
		goto GameThread_End_1;
	}

	swprintf(szStr, VMProtectDecryptStringW(EVENT_NAME_11), g_nIndex);
	AJLog(L"szStr = %s", szStr);
	HANDLE hFinishEvent = CreateEvent(0, 0, 0, szStr);
	if (!hFinishEvent)
	{
		ShowStatus(2, IDS_STRING60134, NULL, 2);				// 에러 2
		goto GameThread_End_2;
	}
	
	swprintf_s(szStr, VMProtectDecryptStringW(EVENT_NAME_12), g_szGameID);
	HANDLE hWaitEvent = CreateEvent(0, 0, 0, szStr);

	swprintf_s(szStr, VMProtectDecryptStringW(EVENT_NAME_13), g_szGameID);
	HANDLE hAnswerEvent = CreateEvent(0, 0, 0, szStr);

	if(g_dwGamePID)
		g_dwGamePID[g_nIndex - 1].dwGamePID = 0;

	// Suspend, Resume 함수 주소를 구하자

	NtSuspendProcess pfnSuspendProcess = (NtSuspendProcess)GetProcAddress(GetModuleHandle(L"ntdll.dll") , "NtSuspendProcess");
	NtResumeProcess pfnResumeProcess = (NtResumeProcess)GetProcAddress(GetModuleHandle(L"ntdll.dll") , "NtResumeProcess");

	if(pfnSuspendProcess == NULL || pfnResumeProcess == NULL)
	{
		ShowStatus(2, IDS_STRING60134, NULL, 3);				// 에러 3
		goto GameThread_End_3;
	}

	// 크롬 경로 구하자

	WCHAR szChrome[MAX_PATH] = { 0, };
	if (!GetGoogleChromePath(szChrome))
	{
		ShowStatus(0, IDS_STRING60282);							// 구글 크롬 찾을수 없습니다
		goto GameThread_End_3;
	}

	// 실행 시간 설정하자

	SYSTEMTIME time;
	GetLocalTime(&time);

	g_dwStartTime = (time.wYear % 100);
	g_dwStartTime = g_dwStartTime * 100 + time.wMonth;
	g_dwStartTime = g_dwStartTime * 100 + time.wDay;
	g_dwStartTime = g_dwStartTime * 100 + time.wHour;
	g_dwStartTime = g_dwStartTime * 100 + time.wMinute;

	// 스케줄 타이머 돌리자

	g_bScheduleTimeCheck = FALSE;
	g_nScheduleTimeValue = 0;
	g_qwScheduleTimeTick = 0;
	pDetailDlg->SetTimer(0x20180213, 1000, NULL);

	// DLL 리소스 확인하자 

// 	HRSRC hRSrc = FindResource(GetModuleHandle(0), MAKEINTRESOURCE(IDR_ENGINE), RT_RCDATA);
// 	if(!hRSrc)
// 	{
// 		ShowStatus(2, IDS_STRING60134, NULL, 4);				// 에러 4
// 		goto GameThread_End_4;
// 	}
// 
// 	int nLength = SizeofResource(GetModuleHandle(0), hRSrc);
// 	HGLOBAL hGlobal = LoadResource(GetModuleHandle(0), hRSrc);
// 	if(!hGlobal || nLength <= 0)
// 	{
// 		ShowStatus(2, IDS_STRING60134, NULL, 5);				// 에러 5
// 		goto GameThread_End_4;
// 	}
// 
// 	BYTE *pbResource = (BYTE *)LockResource(hGlobal);

	// 종료 Event 만들자

	swprintf(szStr, EVENT_NAME_14, g_nIndex);
	HANDLE hExitEvent = CreateEvent(0, 0, 0, szStr);
	if (!hExitEvent)
	{
		ShowStatus(2, IDS_STRING60134, NULL, 6);				// 에러 6
		goto GameThread_End_4;
	}

	// 실행 Mutex 대기하자

	if (g_hProcessMutex == NULL)
		g_hProcessMutex = OpenMutex(MUTEX_ALL_ACCESS, 0, VMProtectDecryptStringW(MUTEX_NAME_1));

	if (g_hProcessMutex == NULL)
	{
		ShowStatus(2, IDS_STRING60134, NULL, 7);				// 에러 7
		goto GameThread_End_4;
	}

	// 실행에 필요한 파라메터 구하자

	int nEncCount = 4;
	BYTE bEncKey[4] = { 3, 5, 7, 9 };

	WCHAR szGameID[MAX_PATH] = { 0, }, szGamePW[MAX_PATH] = { 0, };
	for (int i = 0; i < (int)wcslen(g_szGameID); i++)
		swprintf(szGameID + wcslen(szGameID), L"%02X", g_szGameID[i] ^ bEncKey[i % nEncCount]);

	for (int i = 0; i < (int)wcslen(g_szGamePW); i++)
		swprintf(szGamePW + wcslen(szGamePW), L"%02X", g_szGamePW[i] ^ bEncKey[i % nEncCount]);

	// Daum 실행 파일을 복사하자

	WCHAR szDaumPath[MAX_PATH] = { 0, }, szDaumName[MAX_PATH] = { 0, };
	WCHAR szPath[MAX_PATH] = { 0, };

	swprintf(szPath, L"%s\\Data\\Daum.bin", g_szAppPath);
	swprintf(szDaumPath, L"%s\\Data\\Daum%d.bin", g_szAppPath, g_nIndex);
	swprintf(szDaumName, L"Daum%d.bin", g_nIndex);

	CopyFile(szPath, szDaumPath, FALSE);

Game_Start:

	// 게임 정보 기발 초기화 하자

	ResetEvent(hFinishEvent);
	ResetEvent(hExitEvent);

	if (qwWaitTickCount != 0)
	{
		int nTime = (int)(qwWaitTickCount / 60 / 1000);
		DWORD64 qwStartTickCount = GetTickCount64();
		ShowStatus(2, IDS_STRING60402, NULL, nTime);
		while (1)
		{															// 종료 기발 설정이 된 경우
			if (WaitForSingleObject(hExitEvent, 100) != WAIT_TIMEOUT)
				goto GameThread_End_5;

			if (GetTickCount64() >= qwStartTickCount + qwWaitTickCount)
				break;
		}
	}

	KillXignCode();

	qwWaitTickCount = 0;

	// Mutex 대기하자 (실행번호)

	ShowStatus(0, IDS_STRING60135);								// 실행순서를 기다립니다

	while (1)
	{															// 종료 기발 설정이 된 경우
		
		if (WaitForSingleObject(hExitEvent, 100) != WAIT_TIMEOUT)
			goto GameThread_End_5;
																// 순번인 경우
		if(WaitForSingleObject(g_hProcessMutex, 100) != WAIT_TIMEOUT)
			break;
	}

	swprintf(szPath, L"%s\\Setting.dat", g_szAppPath);
	BOOL m_bDaumKeep = GetPrivateProfileInt(L"Daum", L"Keep", 0, szPath);

	Sleep(1000);
	
	// 주소 매핑 다시 창조하자

	if (g_hGamePipe != NULL)
		CloseHandle(g_hGamePipe);
	g_hGamePipe = NULL;

	swprintf(szStr, VMProtectDecryptStringW(PIPE_NAME_1), g_nIndex);
	g_hGamePipe = CreateNamedPipe(szStr, PIPE_ACCESS_OUTBOUND, PIPE_TYPE_BYTE | PIPE_READMODE_BYTE | PIPE_WAIT,
		1, 1024, 1024, INFINITE, NULL);

	g_pGameMapping->bGameInfo = 0;

	// 단계 돌리면서 게임 실행하자

	DWORD dwDaumPID, dwLauncherPID, dwGamePID, dwParentPID;
	DWORD64 qwRunTickCount = 0;
	int nRunStep = 0, nRetryCount = 0;
	while (1)
	{
		dwDaumPID = 0;		dwLauncherPID = 0;		dwGamePID = 0;		dwParentPID = 0;
		
		// 실행 PID 구하자
		
		HANDLE hProcessSnap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
		if (hProcessSnap != INVALID_HANDLE_VALUE)
		{
			
			PROCESSENTRY32	pe32;
			ZeroMemory(&pe32, sizeof(PROCESSENTRY32));
			pe32.dwSize = sizeof(PROCESSENTRY32);

			if (Process32First(hProcessSnap, &pe32))
			{
				do
				{
					if (!wcsicmp(pe32.szExeFile, szDaumName))
						dwDaumPID = pe32.th32ProcessID;
					
					if (!wcsicmp(pe32.szExeFile, L"KakaoGames.Launcher.exe"))
						dwLauncherPID = pe32.th32ProcessID;

					if (!wcsicmp(pe32.szExeFile, L"ROMGoldenAge.exe"))
					{
						AJLog(L"dwDaumPID = %p", dwDaumPID);
						BOOL bExist = FALSE;
						if (g_dwGamePID)
						{
							for (int i = 0; i < 50; i++)
							{
								if (g_dwGamePID[i].dwGamePID == pe32.th32ProcessID)
								{
									bExist = TRUE;
									break;
								}
							}
						}

						if (!bExist)
						{
							dwGamePID = pe32.th32ProcessID;
							dwParentPID = pe32.th32ParentProcessID;
						}
					}
				} while (Process32Next(hProcessSnap, &pe32));
			}

			CloseHandle(hProcessSnap);
		}

		// 종료 기발이 설정이 되어있으면
		if (WaitForSingleObject(hExitEvent, 100) != WAIT_TIMEOUT)
		{
			ReleaseMutex(g_hProcessMutex);
			goto GameThread_End_6;
		}

		switch (nRunStep)
		{
		case 0:																		// 이미 실행된 보조 풀 종료하자
		{
			if ((dwDaumPID == 0 || (m_bDaumKeep && !g_bInitDaum)) && dwLauncherPID == 0 && dwGamePID == 0)
			{
				g_bInitDaum = FALSE;
				qwRunTickCount = 0;
				nRunStep++;

				break;
			}

			if (dwDaumPID != 0 && (!m_bDaumKeep || g_bInitDaum))
			{
				HANDLE hProcess = OpenProcess(MAXIMUM_ALLOWED, 0, dwDaumPID);
				if (hProcess)
				{
					TerminateProcess(hProcess, 0);
					CloseHandle(hProcess);
				}				

				g_bInitDaum = FALSE;
				dwDaumPID = 0;
			}

			if (dwLauncherPID != 0)
			{
				HANDLE hProcess = OpenProcess(MAXIMUM_ALLOWED, 0, dwLauncherPID);
				if (hProcess)
				{
					TerminateProcess(hProcess, 0);
					CloseHandle(hProcess);
				}

				dwLauncherPID = 0;
			}

			if (dwGamePID != 0)
			{
				HANDLE hProcess = OpenProcess(MAXIMUM_ALLOWED, 0, dwGamePID);
				if (hProcess)
				{
					TerminateProcess(hProcess, 0);
					CloseHandle(hProcess);
				}

				dwGamePID = 0;
			}

			Sleep(500);
		}
			break;
		case 1:
		{
			// Daum.bin 실행되어있으면 게임 시작 신호를 보내자
			if (m_bDaumKeep && dwDaumPID != 0)
			{
				swprintf(szPath, L"%s\\Data\\Signal", g_szAppPath);
				_wmkdir(szPath);

				swprintf(szPath, L"%s\\Data\\Signal\\%d", g_szAppPath, g_nIndex);
				FILE* fp = _wfopen(szPath, L"wb");
				if (fp)
					fclose(fp);

				g_nDelayTime = 2;
				qwRunTickCount = GetTickCount64();
				nRunStep++;
			}
 			else
			{
/*
#ifdef _TEST_VERSION_

				nRunStep = 2;
				break;

#endif // _TEST_VERSION
*/
				if (!IsFileExist(szDaumPath))
				{
					ShowStatus(2, IDS_STRING60281, NULL, 2);							// 실행에 필요한 파일이 없습니다 (오류 1)
					goto GameThread_End_5;
				}

				WCHAR szCmd[2000] = { 0, };
				//swprintf(szCmd, L"%s %d %s %s \"%s\"", szDaumPath, g_nIndex, szGameID, szGamePW, szChrome);
				swprintf(szCmd, L"D:\\redlabgames\\ROMGoldenAge\\ROMGoldenAge_Launcher.exe");

				STARTUPINFO si;
				PROCESS_INFORMATION pi;
				ZeroMemory(&si, sizeof(STARTUPINFO));
				CreateProcess(NULL, szCmd, NULL, NULL, TRUE, NORMAL_PRIORITY_CLASS, NULL, g_szAppPath, &si, &pi);

				ShowStatus(0, IDS_STRING60283);											// 카카오 로그인을 진행합니다

				g_nDelayTime = 10;
				qwRunTickCount = GetTickCount64();
				nRunStep++;
			}

			Sleep(1000);
		}
			break;
		case 2:
		{
			if (dwLauncherPID != 0)													// 련처가 실행되면 다음 단계 넘어가자
			{
				ShowStatus(0, IDS_STRING60286);										// 게임 실행을 대기합니다
				nRetryCount = 0;
				qwRunTickCount = 0;
				nRunStep++;
				break;
			}
#ifndef _TEST_VERSION_
																					// Daum 꺼졋?10분이상 접속이 안되면	
			if (dwDaumPID == 0 || GetTickCount64() >= qwRunTickCount + g_nDelayTime * 60 * 1000)
			{
				if (nRetryCount >= 3)												// 재접속 3번이상이면 그냥 오류로 처리하고 종료하자
				{
					ShowStatus(0, IDS_STRING60284);
					
					ReleaseMutex(g_hProcessMutex);
					goto GameThread_End_6;
				}

				nRetryCount++;
				if (nRetryCount >= 2)
				{
					if (dwDaumPID != 0)
					{
						HANDLE hProcess = OpenProcess(MAXIMUM_ALLOWED, 0, dwDaumPID);
						if (hProcess)
						{
							TerminateProcess(hProcess, 0);
							CloseHandle(hProcess);
						}

						dwDaumPID = 0;
					}

					g_bInitDaum = FALSE;
 				}

				qwRunTickCount = 0;
				nRunStep = 0;
				ShowStatus(2, IDS_STRING60285, NULL, nRetryCount);					// 5분이상 접속에 실패하여 다시 시도합니다
			}

#endif // !_TEST_VERSION_
		}
			break;
		case 3:
		{
			if (dwGamePID != 0)														// 게임 실행되었으면 다음 단계 넘어가자
			{
				ShowStatus(0, IDS_STRING60138);										// 게임이 실행되었습니다
				goto Game_Attach;
			}

			if (dwLauncherPID == 0)													// 런쳐 종료된 경우
			{
				if (qwRunTickCount == 0)
					qwRunTickCount = GetTickCount64();

				if (GetTickCount64() >= qwRunTickCount + 1 * 60 * 1000)				// 런쳐 종료된후 1분 지났는데도 게임 실행 안하면
				{
					qwRunTickCount = 0;
					nRunStep = 0;
				}
			}
		}
			break;
		default:
		{
			nRunStep = 0;
			nRetryCount = 0;
		}
			break;
		}
	}

	// 게임에 DLL 붙이자

Game_Attach:

	if (!m_bDaumKeep && dwDaumPID != 0)
	{
		HANDLE hProcess = OpenProcess(MAXIMUM_ALLOWED, 0, dwDaumPID);
		if (hProcess)
		{
			TerminateProcess(hProcess, 0);
			CloseHandle(hProcess);
		}

		dwDaumPID = 0;
	}
	
	g_nDelayTime = 2;
	ShowStatus(2, IDS_STRING60287, NULL, 1);

	HANDLE hGameProcess = OpenProcess(PROCESS_ALL_ACCESS, 0, dwGamePID);
	if (hGameProcess == NULL)														// 게임 프로세스 얻지 못한 상태 (재접속 진행하자)
	{
		ShowStatus(2, IDS_STRING60134, NULL, 8);									// 에러 8

		ReleaseMutex(g_hProcessMutex);
		
		int nWaitTime = 0;
		if (!m_bDaumKeep)
		{
			WCHAR szSetting[MAX_PATH];
			swprintf(szSetting, L"%s\\Setting.dat", g_szAppPath);

			BOOL bEnableWait = GetPrivateProfileInt(L"WaitDelay", L"Enable", 1, szSetting);
			int nMinDelay = GetPrivateProfileInt(L"WaitDelay", L"MinValue", 1, szSetting);
			int nMaxDelay = GetPrivateProfileInt(L"WaitDelay", L"MaxValue", 5, szSetting);
			if (nMaxDelay < nMinDelay)
				nMaxDelay = nMinDelay;

			if (bEnableWait)
			{
				if (nMaxDelay == nMinDelay)
					nWaitTime = nMinDelay;
				else
				{
					srand(GetTickCount());
					nWaitTime = (rand() % (nMaxDelay - nMinDelay)) + nMinDelay;
				}
			}
		}

		qwWaitTickCount = nWaitTime * 60 * 1000;

		goto Game_Start;
	}

	pfnSuspendProcess(hGameProcess);

// 	BYTE* pbBuffer = new BYTE[nLength];
// 	if (!pbBuffer)
// 	{
// 		TerminateProcess(hGameProcess, 0);
// 		CloseHandle(hGameProcess);
// 
// 		ShowStatus(2, IDS_STRING60134, NULL, 9);									// 에러 9
// 
// 		ReleaseMutex(g_hProcessMutex);
// 
// 		int nWaitTime = 0;
// 		if (!m_bDaumKeep)
// 		{
// 			WCHAR szSetting[MAX_PATH];
// 			swprintf(szSetting, L"%s\\Setting.dat", g_szAppPath);
// 
// 			BOOL bEnableWait = GetPrivateProfileInt(L"WaitDelay", L"Enable", 1, szSetting);
// 			int nMinDelay = GetPrivateProfileInt(L"WaitDelay", L"MinValue", 1, szSetting);
// 			int nMaxDelay = GetPrivateProfileInt(L"WaitDelay", L"MaxValue", 5, szSetting);
// 			if (nMaxDelay < nMinDelay)
// 				nMaxDelay = nMinDelay;
// 
// 			if (bEnableWait)
// 			{
// 				if (nMaxDelay == nMinDelay)
// 					nWaitTime = nMinDelay;
// 				else
// 				{
// 					srand(GetTickCount());
// 					nWaitTime = (rand() % (nMaxDelay - nMinDelay)) + nMinDelay;
// 				}
// 			}
// 		}
// 
// 		qwWaitTickCount = nWaitTime * 60 * 1000;
// 
// 		goto Game_Start;
// 	}

	ResetEvent(hResumeEvent);

//	memcpy(pbBuffer, pbResource, nLength);

	ShowStatus(2, IDS_STRING60287, NULL, 2);

	// ----------- WriteProcessMemory Check ----------- //

// 	HMODULE hKernel32 = LoadLibrary(L"Kernel32.dll");
// 	HMODULE hKernelBase = LoadLibrary(L"KernelBase.dll");
// 
// 	DWORD64 qwMemoryAddr = (DWORD64)MyGetProcAddress((DWORD64)hKernel32, 0xAC75);
// 	if (qwMemoryAddr == 0)
// 	{
// WriteProcessMemory_Detect:
// 		
// 		PIMAGE_NT_HEADERS64 pINH = (PIMAGE_NT_HEADERS64)(pbBuffer + ((PIMAGE_DOS_HEADER)pbBuffer)->e_lfanew);
// 		PIMAGE_SECTION_HEADER pISH = IMAGE_FIRST_SECTION(pINH);
// 		for (int i = 0; i < pINH->FileHeader.NumberOfSections; i++)
// 		{
// 			for (DWORD j = 0; j < pISH->SizeOfRawData - 1; j++)
// 				pbBuffer[j + pISH->PointerToRawData] += pbBuffer[j + 1 + pISH->PointerToRawData];
// 
// 			pISH++;
// 		}
// 
// 		goto Attach_Engine;
// 	}
// 
// 	WCHAR szFile[MAX_PATH] = { 0, };
// 	GetModuleFileName(hKernel32, szFile, MAX_PATH);
// 
// 	FILE *fp = _wfopen(szFile, L"rb");
// 	if (!fp)
// 		goto WriteProcessMemory_Detect;
// 
// 	int nFileLen = _filelength(fileno(fp));
// 	if (nFileLen <= 0)
// 	{
// 		fclose(fp);
// 		goto WriteProcessMemory_Detect;
// 	}
// 
// 	BYTE* pbFileBuffer = new BYTE[nFileLen];
// 	fread(pbFileBuffer, 1, nFileLen, fp);
// 	fclose(fp);
// 
// 	DWORD64 qwFileAddr = (DWORD64)MyGetFileAddress(pbFileBuffer, 0xAC75);
// 	if (qwFileAddr == 0)
// 	{
// 		delete[] pbFileBuffer;
// 		pbFileBuffer = NULL;
// 
// 		goto WriteProcessMemory_Detect;
// 	}
// 
// 	DWORD dwFileOffset = 0;
// 	while (1)
// 	{
// 		// 후킹이 되어있는 경우
// 		if (*(BYTE*)(qwMemoryAddr + dwFileOffset) != *(BYTE*)(pbFileBuffer + qwFileAddr + dwFileOffset))
// 		{
// 			delete[] pbFileBuffer;
// 			pbFileBuffer = NULL;
// 			goto WriteProcessMemory_Detect;
// 		}
// 				
// 		dwFileOffset++;
// 		if (dwFileOffset % 8 == 0 && *(BYTE*)(qwMemoryAddr + dwFileOffset) == 0xCC)
// 			break;
// 	}
// 
// 	delete[] pbFileBuffer;
// 	pbFileBuffer = NULL;
// 
// 	qwMemoryAddr = (DWORD64)MyGetProcAddress((DWORD64)hKernelBase, 0xAC75);
// 	if (qwMemoryAddr == 0)
// 		goto WriteProcessMemory_Detect;
// 
// 	GetModuleFileName(hKernelBase, szFile, MAX_PATH);
// 
// 	fp = _wfopen(szFile, L"rb");
// 	if (!fp)
// 		goto WriteProcessMemory_Detect;
// 
// 	nFileLen = _filelength(fileno(fp));
// 	if (nFileLen <= 0)
// 	{
// 		fclose(fp);
// 		goto WriteProcessMemory_Detect;
// 	}
// 
// 	pbFileBuffer = new BYTE[nFileLen];
// 	fread(pbFileBuffer, 1, nFileLen, fp);
// 	fclose(fp);
// 
// 	qwFileAddr = (DWORD64)MyGetFileAddress(pbFileBuffer, 0xAC75);
// 	if (qwFileAddr == 0)
// 	{
// 		delete[] pbFileBuffer;
// 		pbFileBuffer = NULL;
// 
// 		goto WriteProcessMemory_Detect;
// 	}
// 
// 	dwFileOffset = 0;
// 	while (1)
// 	{
// 		// 후킹이 되어있는 경우
// 		if (*(BYTE*)(qwMemoryAddr + dwFileOffset) != *(BYTE*)(pbFileBuffer + qwFileAddr + dwFileOffset))
// 		{
// 			delete[] pbFileBuffer;
// 			pbFileBuffer = NULL;
// 			goto WriteProcessMemory_Detect;
// 		}
// 
// 		dwFileOffset++;
// 		if (dwFileOffset % 8 == 0 && *(BYTE*)(qwMemoryAddr + dwFileOffset) == 0xCC)
// 			break;
// 	}
// 
// 	delete[] pbFileBuffer;
// 	pbFileBuffer = NULL;
	
	// ----------- Attach Engine DLL ----------- //

//Attach_Engine:

	pfnResumeProcess(hGameProcess);

// 	HANDLE hModule = LoadRemoteLibraryR(hGameProcess, (LPVOID)pbBuffer, nLength, (LPVOID)(g_nIndex + GetCurrentProcessId() * 100));	
// 	delete[] pbBuffer;
// 	
// 	if (!hModule)																	// DLL 붙지 못한 상태면 
// 	{
// 		TerminateProcess(hGameProcess, 0);
// 		CloseHandle(hGameProcess);
// 
// 		ShowStatus(2, IDS_STRING60134, NULL, 10);									// 에러 10
// 		
// 		ReleaseMutex(g_hProcessMutex);
// 
// 		int nWaitTime = 0;
// 		if (!m_bDaumKeep)
// 		{
// 			WCHAR szSetting[MAX_PATH];
// 			swprintf(szSetting, L"%s\\Setting.dat", g_szAppPath);
// 
// 			BOOL bEnableWait = GetPrivateProfileInt(L"WaitDelay", L"Enable", 1, szSetting);
// 			int nMinDelay = GetPrivateProfileInt(L"WaitDelay", L"MinValue", 1, szSetting);
// 			int nMaxDelay = GetPrivateProfileInt(L"WaitDelay", L"MaxValue", 5, szSetting);
// 			if (nMaxDelay < nMinDelay)
// 				nMaxDelay = nMinDelay;
// 
// 			if (bEnableWait)
// 			{
// 				if (nMaxDelay == nMinDelay)
// 					nWaitTime = nMinDelay;
// 				else
// 				{
// 					srand(GetTickCount());
// 					nWaitTime = (rand() % (nMaxDelay - nMinDelay)) + nMinDelay;
// 				}
// 			}
// 		}
// 
// 		qwWaitTickCount = nWaitTime * 60 * 1000;
// 
// 		goto Game_Start;
// 	}

	SetGameRunFlag();

	if (g_dwGamePID)
		g_dwGamePID[g_nIndex - 1].dwGamePID = dwGamePID;

	// 게임 Resume 신호를 기다리자

	ShowStatus(2, IDS_STRING60287, NULL, 3);
	
// 	qwRunTickCount = GetTickCount64();
// 	while (1)
// 	{
// 		if (WaitForSingleObject(hExitEvent, 100) != WAIT_TIMEOUT)					// 종료 기발이 설정되어있으면
// 		{
// 			ReleaseMutex(g_hProcessMutex);
// 			goto GameThread_End_6;
// 		}
// 
// 		if (WaitForSingleObject(hResumeEvent, 100) != WAIT_TIMEOUT)					// Resume 기발이 도착한 경우
// 		{
// 			pfnResumeProcess(hGameProcess);
// 			break;
// 		}
// 																					// 2분이상 Resume 신호가 없으면 오류로 설정하자
// 		if (WaitForSingleObject(hGameProcess, 1) != WAIT_TIMEOUT || GetTickCount64() >= qwRunTickCount + 2 * 60 * 1000)
// 		{
// 			TerminateProcess(hGameProcess, 0);
// 			CloseHandle(hGameProcess);
// 
// 			ReleaseMutex(g_hProcessMutex);
// 			ShowStatus(2, IDS_STRING60134, NULL, 11);								// 에러 11
// 			goto Game_Start;
// 		}
// 	}

	// 게임 창문을 얻어서 넘겨주자

	ShowStatus(2, IDS_STRING60287, NULL, 4);

	g_pGameMapping->hGameWnd = 0;
	qwRunTickCount = GetTickCount64();
	while (1)
	{
		if (WaitForSingleObject(hExitEvent, 100) != WAIT_TIMEOUT)					// 종료 기발이 설정되어있으면
		{
			ReleaseMutex(g_hProcessMutex);
			goto GameThread_End_6;
		}

		HWND hGameWnd = FindMyTopMostWindow((WCHAR*)WND_GAMENAME, (WCHAR*)WNDCLASS_GAMENAME, dwGamePID);
		if (hGameWnd != NULL)
		{
			g_pGameMapping->hGameWnd = hGameWnd;
			break;
		}

		if (WaitForSingleObject(hGameProcess, 1) != WAIT_TIMEOUT || GetTickCount64() >= qwRunTickCount + 2 * 60 * 1000)
		{
			TerminateProcess(hGameProcess, 0);
			CloseHandle(hGameProcess);

			ShowStatus(0, IDS_STRING60387);
			
			ReleaseMutex(g_hProcessMutex);

			int nWaitTime = 0;
			if (!m_bDaumKeep)
			{
				WCHAR szSetting[MAX_PATH];
				swprintf(szSetting, L"%s\\Setting.dat", g_szAppPath);

				BOOL bEnableWait = GetPrivateProfileInt(L"WaitDelay", L"Enable", 1, szSetting);
				int nMinDelay = GetPrivateProfileInt(L"WaitDelay", L"MinValue", 1, szSetting);
				int nMaxDelay = GetPrivateProfileInt(L"WaitDelay", L"MaxValue", 5, szSetting);
				if (nMaxDelay < nMinDelay)
					nMaxDelay = nMinDelay;

				if (bEnableWait)
				{
					if (nMaxDelay == nMinDelay)
						nWaitTime = nMinDelay;
					else
					{
						srand(GetTickCount());
						nWaitTime = (rand() % (nMaxDelay - nMinDelay)) + nMinDelay;
					}
				}
			}

			qwWaitTickCount = nWaitTime * 60 * 1000;

			goto Game_Start;
		}
	}

	// 게임 다 실행했다 신호 기다리자


	ShowStatus(2, IDS_STRING60287, NULL, 5);

	qwRunTickCount = GetTickCount64();
	while (1)
	{
		if (WaitForSingleObject(hExitEvent, 100) != WAIT_TIMEOUT)
		{
			ReleaseMutex(g_hProcessMutex);
			goto GameThread_End_6;
		}

		if (WaitForSingleObject(hFinishEvent, 100) != WAIT_TIMEOUT)
		{
			AJLog(L"Status 4...");
			ReleaseMutex(g_hProcessMutex);
			break;
		}
		
		if (WaitForSingleObject(hGameProcess, 1) != WAIT_TIMEOUT || GetTickCount64() >= qwRunTickCount + 2 * 60 * 1000)
		{
			AJLog(L"Status 5...");
			TerminateProcess(hGameProcess, 0);
			CloseHandle(hGameProcess);

			//ShowStatus(2, IDS_STRING60134, NULL, 13);								// 에러 13
			ShowStatus(0, IDS_STRING60387);
			
			ReleaseMutex(g_hProcessMutex);

			int nWaitTime = 0;
			if (!m_bDaumKeep)
			{
				WCHAR szSetting[MAX_PATH];
				swprintf(szSetting, L"%s\\Setting.dat", g_szAppPath);

				BOOL bEnableWait = GetPrivateProfileInt(L"WaitDelay", L"Enable", 1, szSetting);
				int nMinDelay = GetPrivateProfileInt(L"WaitDelay", L"MinValue", 1, szSetting);
				int nMaxDelay = GetPrivateProfileInt(L"WaitDelay", L"MaxValue", 5, szSetting);
				if (nMaxDelay < nMinDelay)
					nMaxDelay = nMinDelay;

				if (bEnableWait)
				{
					if (nMaxDelay == nMinDelay)
						nWaitTime = nMinDelay;
					else
					{
						srand(GetTickCount());
						nWaitTime = (rand() % (nMaxDelay - nMinDelay)) + nMinDelay;
					}
				}
			}

			qwWaitTickCount = nWaitTime * 60 * 1000;

			goto Game_Start;
		}
	}

	// 게임 팅김 체크하자
	AJLog(L"Finished Address Update");
	ShowStatus(2, IDS_STRING60287, NULL, 6);

	DWORD64 qwTimerTick = GetTickCount64();
	DWORD64 qwTimerValue = 0;
	while (1)
	{
		//AJLog(L"After Address Update");
		if (WaitForSingleObject(hExitEvent, 10) != WAIT_TIMEOUT)
			break;
		//AJLog(L"hExitEvent Not Triggered");

		if (WaitForSingleObject(hGameProcess, 10) != WAIT_TIMEOUT)
		{
			//ShowStatus(0, IDS_STRING60137);
			AJLog(L"hGameProcess Event Triggered");

			int nWaitTime = 0;
			if (!m_bDaumKeep)
			{
				WCHAR szSetting[MAX_PATH];
				swprintf(szSetting, L"%s\\Setting.dat", g_szAppPath);

				BOOL bEnableWait = GetPrivateProfileInt(L"WaitDelay", L"Enable", 1, szSetting);
				int nMinDelay = GetPrivateProfileInt(L"WaitDelay", L"MinValue", 1, szSetting);
				int nMaxDelay = GetPrivateProfileInt(L"WaitDelay", L"MaxValue", 5, szSetting);
				if (nMaxDelay < nMinDelay)
					nMaxDelay = nMinDelay;

				if (bEnableWait)
				{
					if (nMaxDelay == nMinDelay)
						nWaitTime = nMinDelay;
					else
					{
						srand(GetTickCount());
						nWaitTime = (rand() % (nMaxDelay - nMinDelay)) + nMinDelay;
					}
						
				}
			}

			if (nWaitTime == 0)
			{
				ShowStatus(0, IDS_STRING60387);
			}
			else
			{
				qwWaitTickCount = nWaitTime * 60 * 1000;
				ShowStatus(2, IDS_STRING60424, NULL, nWaitTime);
			}

			goto Game_Start;
		}

		if (WaitForSingleObject(hWaitEvent, 10) != WAIT_TIMEOUT)
		{
			AJLog(L"hWaitEvent Triggered");

			memset(szStr, 0, MAX_NAME * sizeof(WCHAR));
			if (wcscmp(g_pGameMapping->szLog, L""))
				wcscpy(szStr, g_pGameMapping->szLog);

			SetEvent(hAnswerEvent);

			ShowStatus(g_pGameMapping->nLogType, g_pGameMapping->nStringCode, szStr, g_pGameMapping->nLogValue1, g_pGameMapping->nLogValue2);

			if (g_pGameMapping->bLogType)			// 1 - 스케줄 변경됨, 2 - 스케줄 완료됨, 3 - 오토 변경
			{
				pDetailDlg->PostMessage(WM_SCHEDULEMESSAGE, g_pGameMapping->bLogType);
				g_pGameMapping->bLogType = 0;
			}

			if (g_pGameMapping->nStringCode == 60189)		// 서버 점검이면 그냥 밑으로 내려가자
			{
				Sleep(1000);
				break;
			}
		}

		if (qwTimerValue != g_pGameMapping->qwTimerTick)
		{
			qwTimerValue = g_pGameMapping->qwTimerTick;
			qwTimerTick = GetTickCount64();
		}
		else if(GetTickCount64() > qwTimerTick + 5 * 60 * 1000)
		{
			TerminateProcess(hGameProcess, 0);
			CloseHandle(hGameProcess);

			int nWaitTime = 0;
			if (!m_bDaumKeep)
			{
				WCHAR szSetting[MAX_PATH];
				swprintf(szSetting, L"%s\\Setting.dat", g_szAppPath);

				BOOL bEnableWait = GetPrivateProfileInt(L"WaitDelay", L"Enable", 1, szSetting);
				int nMinDelay = GetPrivateProfileInt(L"WaitDelay", L"MinValue", 1, szSetting);
				int nMaxDelay = GetPrivateProfileInt(L"WaitDelay", L"MaxValue", 5, szSetting);
				if (nMaxDelay < nMinDelay)
					nMaxDelay = nMinDelay;

				if (bEnableWait)
				{
					if (nMaxDelay == nMinDelay)
						nWaitTime = nMinDelay;
					else
					{
						srand(GetTickCount());
						nWaitTime = (rand() % (nMaxDelay - nMinDelay)) + nMinDelay;
					}
				}
			}

			if (nWaitTime == 0)
			{
				ShowStatus(0, IDS_STRING60366);
			}
			else
			{
				qwWaitTickCount = nWaitTime * 60 * 1000;
				ShowStatus(2, IDS_STRING60424, NULL, nWaitTime);
			}

			goto Game_Start;
		}
	}
	
	// 종료 로직 처리하자

GameThread_End_6:

	if (!m_bDaumKeep && dwDaumPID != 0)
	{
		HANDLE hProcess = OpenProcess(MAXIMUM_ALLOWED, 0, dwDaumPID);
		if (hProcess)
		{
			TerminateProcess(hProcess, 0);
			CloseHandle(hProcess);
		}

		dwDaumPID = 0;
	}

	if (dwLauncherPID != 0)
	{
		HANDLE hProcess = OpenProcess(MAXIMUM_ALLOWED, 0, dwLauncherPID);
		if (hProcess)
		{
			TerminateProcess(hProcess, 0);
			CloseHandle(hProcess);
		}

		dwLauncherPID = 0;
	}

	if (dwGamePID != 0)
	{
		HANDLE hProcess = OpenProcess(MAXIMUM_ALLOWED, 0, dwGamePID);
		if (hProcess)
		{
			TerminateProcess(hProcess, 0);
			CloseHandle(hProcess);
		}

		dwGamePID = 0;
	}

GameThread_End_5:
	CloseHandle(hExitEvent);

GameThread_End_4:

	g_dwStartTime = 0;
	g_bScheduleTimeCheck = FALSE;
	g_nScheduleTimeValue = 0;
	g_qwScheduleTimeTick = 0;
	pDetailDlg->KillTimer(0x20180213);

GameThread_End_3:
	CloseHandle(hWaitEvent);
	CloseHandle(hAnswerEvent);
	CloseHandle(hFinishEvent);

GameThread_End_2:
	CloseHandle(hResumeEvent);

GameThread_End_1:
	CloseHandle(hAliveEvent);

GameThread_End_0:

	if (g_hGamePipe != NULL)
		CloseHandle(g_hGamePipe);
	g_hGamePipe = NULL;

	g_dwGameTID = 0;
	pDetailDlg->PostMessageW(WM_RESETMESSAGE);

	VMProtectEnd();
	return 0;
}


DWORD GetExeVersion()
{
	DWORD dwVersion = 0;

	WCHAR szFilePath[MAX_PATH];
	DWORD dwInfoSize = 0;
	BYTE* pBuffer = NULL;
	VS_FIXEDFILEINFO* pFineInfo = NULL;
	UINT bufLen = 0;

	swprintf(szFilePath, L"%s\\HongLong.exe", g_szAppPath);
	dwInfoSize = GetFileVersionInfoSize(szFilePath, 0);
	if (dwInfoSize)
	{
		pBuffer = new BYTE[dwInfoSize];
		if (pBuffer)
		{
			if (GetFileVersionInfo(szFilePath, 0, dwInfoSize, pBuffer) && VerQueryValue(pBuffer, L"\\", (LPVOID*)& pFineInfo, &bufLen))
			{
				WORD majorVer, minorVer, buildNum, revisionNum;
				majorVer = HIWORD(pFineInfo->dwFileVersionMS);
				minorVer = LOWORD(pFineInfo->dwFileVersionMS);
				buildNum = HIWORD(pFineInfo->dwFileVersionLS);
				revisionNum = LOWORD(pFineInfo->dwFileVersionLS);

				dwVersion = (majorVer << 12) + (minorVer << 8) + (buildNum << 4) + revisionNum;
			}

			delete[] pBuffer;
		}
	}

	return dwVersion;
}


void BytesToString(WCHAR* szBuffer, BYTE* pbBuffer, int nLen)
{
	int i;

	szBuffer[0] = L'\0';
	for (i = 0; i < nLen; i++)
		swprintf(szBuffer + i * 2, L"%02X", pbBuffer[i]);
	szBuffer[i * 2] = L'\0';
}