#include "stdafx.h"
#include "AES.h"
#include "ws2tcpip.h"
#include "NTPClient.h"
#include "AttachEngine.h"
#include "Global.h"
#include "VMAttachEngine.h"

#pragma comment(lib, "psapi.lib")
#pragma comment(lib, "Version.lib")

COdinDlg*	g_pAppDlg;
DWORD		g_dwPatchVersion;
DWORD		g_dwLocalIP;

BOOL		g_bUpdatable = FALSE;

CRITICAL_SECTION g_csRunSection;
CRITICAL_SECTION g_csArraySection;

int			g_nArrayCount;
BYTE		g_pbArray[100];

WORD		g_wLanguageID = 0x804;		// Chinese PRC

CString FormatCurrency(unsigned int nCurrency)
{
	CString strCurrency;
	strCurrency.Empty();

	int nPrice = nCurrency;
	int nIndex = 0;
	while (1)
	{
		int nValue = nPrice % 10;
		nPrice /= 10;

		strCurrency.Insert(0, L'0' + nValue);
		nIndex++;

		if (nPrice == 0)
			break;

		if (nIndex == 3)
		{
			nIndex = 0;

			strCurrency.Insert(0, L",");
		}
	}

	return strCurrency;
}

void AJLog(WCHAR* szFormat, ...)
{
#ifdef	_PRINT_LOG_

	FILE* fp = _wfopen(L"C:\\Log.txt", L"a+");
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

void DeleteTempFile()
{
	WIN32_FIND_DATA		wfd;
	WCHAR				szFind[260];
	HANDLE				hFind;

	swprintf(szFind, L"%s\\*.*", g_szAppPath);
	hFind = FindFirstFile(szFind, &wfd);
	if (hFind == INVALID_HANDLE_VALUE)
		return;

	do
	{
		if (wfd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)
			continue;

		if (wfd.cFileName[0] == L'.')
			continue;

		swprintf(szFind, L"%s", wfd.cFileName);
		if (wcslen(szFind) >= 4 && !wcsicmp(szFind + wcslen(szFind) - 4, L".bin"))
		{
			swprintf(szFind, L"%s\\%s", g_szAppPath, wfd.cFileName);
			DeleteFile(szFind);
		}
	} while (FindNextFile(hFind, &wfd));
	FindClose(hFind);
}



int CheckLastVersion(DWORD &dwServerIP, DWORD &dwServerPort)
{
	VMProtectBeginUltra("CheckLastVersion");

	OnAESGenerateKey();

	CClient m_cClient;
	m_cClient.Initialize(NULL, NULL);
	if (!m_cClient.Connect())
	{
		CString strLabel;
		strLabel.LoadString(NULL, IDS_VERSIONCHECK, g_wLanguageID);

		CString strAlert;
		strAlert.LoadString(NULL, IDS_ALERT, g_wLanguageID);
		MessageBox(0, strLabel.GetBuffer(), strAlert.GetBuffer(), 0);
		return -1;
	}

#ifndef	_TEST_VERSION_

	// 서버 접속된 아이피와 포트 다시 확인해보자

	SOCKADDR_IN addr;
	int len = sizeof(SOCKADDR_IN);

	DWORD dwCrcServerIP = 0;
	DWORD nCrcServerPort = 0;
	memset(&addr, 0, sizeof(SOCKADDR_IN));
	if (!getpeername(m_cClient.m_socket, (sockaddr*)& addr, &len))
	{
		dwCrcServerIP = (DWORD)addr.sin_addr.S_un.S_addr;
		//nCrcServerPort = ntohs(addr.sin_port);
	}
	//	123.57.129.123 / 47564
	DWORD dwValue = 0x79AC3FCA;
#ifdef KOREAN_VERSION
	dwValue = 0x75AC3FCA;
#endif // KOREAN_VERSION
	if ((dwCrcServerIP ^ 0xE03D8371) != (dwValue ^ 0xE03D8371))
	{
		HKEY hKey;
		if (RegCreateKeyEx(HKEY_LOCAL_MACHINE, VMProtectDecryptStringW(L"SOFTWARE\\Microsoft\\RoczwE"), 0, NULL,
			REG_OPTION_NON_VOLATILE, KEY_ALL_ACCESS, NULL, &hKey, NULL) == ERROR_SUCCESS)
			RegCloseKey(hKey);
	}

#endif

	BYTE *pbRecvData;
	int nRecvLen;
	if (!m_cClient.Recv(&pbRecvData, &nRecvLen))
	{
		m_cClient.DisConnect();
		
		CString strLabel;
		strLabel.LoadString(NULL, IDS_VERSIONCHECK, g_wLanguageID);

		CString strAlert;
		strAlert.LoadString(NULL, IDS_ALERT, g_wLanguageID);
		MessageBox(0, strLabel.GetBuffer(), strAlert.GetBuffer(), 0);
		return -1;
	}

	BYTE m_pbKey[20];
	memcpy(m_pbKey, pbRecvData, 20);
	delete[] pbRecvData;
	pbRecvData = NULL;

	BYTE pbSendData[1024];
	memset(pbSendData, 0, 1024);
	MakeRandData(pbSendData, 512);

	g_dwPatchVersion = GetExeVersion();
	//int nSendLen = MakePacket(pbSendData, VMProtectDecryptStringA("cd"), OPCODE_VERSIONCHECK, g_dwPatchVersion);

	int nSendLen = 400;
	*(BYTE*)(pbSendData + 12) = OPCODE_VERSIONCHECK;
	*(DWORD*)(pbSendData + 22) = g_dwPatchVersion;
	OnAESEncrypt(pbSendData, pbSendData, nSendLen);
	nSendLen = EncryptData(pbSendData, nSendLen, pbSendData, m_pbKey);
	if (!m_cClient.Send(pbSendData, nSendLen))
	{
		m_cClient.DisConnect();

		CString strLabel;
		strLabel.LoadString(NULL, IDS_VERSIONCHECK, g_wLanguageID);

		CString strAlert;
		strAlert.LoadString(NULL, IDS_ALERT, g_wLanguageID);
		MessageBox(0, strLabel.GetBuffer(), strAlert.GetBuffer(), 0);
		return -1;
	}
	if (!m_cClient.Recv(&pbRecvData, &nRecvLen))
	{
		m_cClient.DisConnect();

		CString strLabel;
		strLabel.LoadString(NULL, IDS_VERSIONCHECK, g_wLanguageID);

		CString strAlert;
		strAlert.LoadString(NULL, IDS_ALERT, g_wLanguageID);
		MessageBox(0, strLabel.GetBuffer(), strAlert.GetBuffer(), 0);
		return -1;
	}
	nRecvLen = DecryptData(pbRecvData, nRecvLen, m_pbKey);
	if (nRecvLen % 16 != 0)
		nRecvLen = ((nRecvLen / 16) + 1) * 16;
	OnAESDecrypt(pbRecvData, pbRecvData, nRecvLen);
	if (nRecvLen != 512)
	{
		delete[] pbRecvData;
		m_cClient.DisConnect();

		CString strLabel;
		strLabel.LoadString(NULL, IDS_VERSIONCHECK, g_wLanguageID);

		CString strAlert;
		strAlert.LoadString(NULL, IDS_ALERT, g_wLanguageID);
		MessageBox(0, strLabel.GetBuffer(), strAlert.GetBuffer(), 0);
		return -1;
	}

	if (pbRecvData[13] != OPCODE_VERSIONCHECK)
	{
		delete[] pbRecvData;
		m_cClient.DisConnect();

		CString strLabel;
		strLabel.LoadString(NULL, IDS_VERSIONCHECK, g_wLanguageID);

		CString strAlert;
		strAlert.LoadString(NULL, IDS_ALERT, g_wLanguageID);
		MessageBox(0, strLabel.GetBuffer(), strAlert.GetBuffer(), 0);
		return -1;
	}

	BOOL bRet = *(DWORD*)(pbRecvData + 25) == 0x00000000;
	dwServerIP = *(DWORD*)(pbRecvData + 32);
	dwServerPort = *(DWORD*)(pbRecvData + 47);
	g_dwLocalIP = *(DWORD*)(pbRecvData + 58);

	delete[] pbRecvData;
	m_cClient.DisConnect();

	VMProtectEnd();
	return bRet;
}



DWORD GetExeVersion()
{
	DWORD dwVersion = 0;

	WCHAR szFilePath[MAX_PATH];
	DWORD dwInfoSize = 0;
	BYTE  *pBuffer = NULL;
	VS_FIXEDFILEINFO *pFineInfo = NULL;
	UINT bufLen = 0;

	GetModuleFileName(GetModuleHandle(NULL) , szFilePath  , MAX_PATH);
	dwInfoSize = GetFileVersionInfoSize(szFilePath , 0);
	if(dwInfoSize)
	{
		pBuffer = new BYTE[dwInfoSize];
		if(pBuffer)
		{
			if(GetFileVersionInfo(szFilePath , 0 , dwInfoSize , pBuffer) && VerQueryValue(pBuffer , L"\\" , (LPVOID*)&pFineInfo, &bufLen))
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


DWORD TraceThread(int nIndex)		// 실행 쓰레드
{
	VMProtectBeginUltra("TraceThread");

	CString strLabel;

	WCHAR szPath[MAX_PATH], szCmdLine[MAX_PATH], szStr[MAX_PATH];
	HANDLE hParamFile = NULL, hEvent = NULL, hEventAnswer = NULL;

	g_pAppDlg->m_lstUser.SetItemText(nIndex, 7, L"");
	g_pAppDlg->m_lstUser.SetItemText(nIndex, 8, L"");
	g_pAppDlg->m_lstUser.SetItemText(nIndex, 10, L"");
	g_pAppDlg->m_lstUser.SetItemText(nIndex, 11, L"");
	g_pAppDlg->m_lstUser.SetItemText(nIndex, 12, L"");
	g_pAppDlg->m_lstUser.SetItemText(nIndex, 13, L"");
	g_pAppDlg->m_lstUser.SetItemText(nIndex, 14, L"");
	g_pAppDlg->m_nClientDia[nIndex] = 0;

	WCHAR szGamePath[MAX_PATH] = { 0, };
	DWORD cbData = MAX_PATH;
	RegGetValue(HKEY_CURRENT_USER, L"Software\\DaumGames\\Odin_Client", L"InstallPath", RRF_RT_REG_SZ,
		NULL, szGamePath, &cbData);
	wcscpy_s(szGamePath, L"D:\\redlabgames\\ROMGoldenAge\\client\\ROMGoldenAge.exe");
	cbData = (wcslen(szGamePath) + 1) * sizeof(wchar_t);
	if (!wcscmp(szGamePath, L""))															// 게임이 설치가 안되어있으면
	{
		strLabel.LoadString(NULL, IDS_GAMENOTFOUND, g_wLanguageID);
		g_pAppDlg->m_lstUser.SetItemText(nIndex, 8, strLabel.GetBuffer());

		g_pAppDlg->m_lstUser.SetItemData(nIndex, 0);

		EnterCriticalSection(&g_csArraySection);
		for (int i = 0; i < g_nArrayCount; i++)
		{
			if (g_pbArray[i] == nIndex)
			{
				if (g_nArrayCount > i + 1)
					memcpy(&g_pbArray[i], &g_pbArray[i + 1], g_nArrayCount - i - 1);

				g_nArrayCount--;
				break;
			}
		}
		LeaveCriticalSection(&g_csArraySection);

		return 0;
	}

	// Data 갱신이 안된 경우다
	swprintf(szGamePath, L"%s\\Data\\Settings%d", g_szAppPath, nIndex + 1);
	if (!IsFileExist(szGamePath))
	{
		strLabel.LoadString(NULL, IDS_NEEDDATAUPGRADE, g_wLanguageID);
		g_pAppDlg->m_lstUser.SetItemText(nIndex, 8, strLabel.GetBuffer());

		g_pAppDlg->m_lstUser.SetItemData(nIndex, 0);

		EnterCriticalSection(&g_csArraySection);
		for (int i = 0; i < g_nArrayCount; i++)
		{
			if (g_pbArray[i] == nIndex)
			{
				if (g_nArrayCount > i + 1)
					memcpy(&g_pbArray[i], &g_pbArray[i + 1], g_nArrayCount - i - 1);

				g_nArrayCount--;
				break;
			}
		}
		LeaveCriticalSection(&g_csArraySection);

		return 0;
	}

	swprintf(szStr, VMProtectDecryptStringW(MUTEX_NAME_2), g_pAppDlg->m_lstUser.GetItemText(nIndex, 1).GetBuffer());
	HANDLE hMutex = OpenMutex(MUTEX_ALL_ACCESS, 0, szStr);
	if(hMutex)
	{
		CloseHandle(hMutex);

		strLabel.LoadString(NULL, IDS_ALREADYRUN, g_wLanguageID);
		g_pAppDlg->m_lstUser.SetItemText(nIndex, 8, strLabel.GetBuffer());

		g_pAppDlg->m_lstUser.SetItemData(nIndex, 0);

		EnterCriticalSection(&g_csArraySection);
		for(int i = 0; i < g_nArrayCount; i++)
		{
			if(g_pbArray[i] == nIndex)
			{
				if(g_nArrayCount > i + 1)
					memcpy(&g_pbArray[i], &g_pbArray[i + 1], g_nArrayCount - i - 1);

				g_nArrayCount --;
				break;
			}
		}
		LeaveCriticalSection(&g_csArraySection);

		return 0;
	}

	swprintf(szStr, VMProtectDecryptStringW(MAPPING_NAME_5), g_pAppDlg->m_lstUser.GetItemText(nIndex, 1).GetBuffer());
	hParamFile = CreateFileMapping(INVALID_HANDLE_VALUE , NULL , PAGE_READWRITE , 0 , sizeof(CLIENTSTATUS), szStr);
	if(hParamFile == NULL)
	{
		strLabel.LoadString(NULL, IDS_CLIENTMAPPINGERROR, g_wLanguageID);
		g_pAppDlg->m_lstUser.SetItemText(nIndex, 8, strLabel.GetBuffer());

		g_pAppDlg->m_lstUser.SetItemData(nIndex, 0);

		EnterCriticalSection(&g_csArraySection);
		for(int i = 0; i < g_nArrayCount; i++)
		{
			if(g_pbArray[i] == nIndex)
			{
				if(g_nArrayCount > i + 1)
					memcpy(&g_pbArray[i], &g_pbArray[i + 1], g_nArrayCount - i - 1);

				g_nArrayCount --;
				break;
			}
		}
		LeaveCriticalSection(&g_csArraySection);

		return 0;
	}

	CLIENTSTATUS *pStatusInfo = (CLIENTSTATUS*)MapViewOfFile(hParamFile, FILE_MAP_ALL_ACCESS, 0, 0, sizeof(CLIENTSTATUS));
	ZeroMemory(pStatusInfo, sizeof(CLIENTSTATUS));

	swprintf(szStr, VMProtectDecryptStringW(EVENT_NAME_15), g_pAppDlg->m_lstUser.GetItemText(nIndex, 1).GetBuffer());
	hEvent = CreateEvent(0, 0, 0, szStr);

	swprintf(szStr, VMProtectDecryptStringW(EVENT_NAME_16), g_pAppDlg->m_lstUser.GetItemText(nIndex, 1).GetBuffer());
	hEventAnswer = CreateEvent(0, 0, 0, szStr);

	g_pAppDlg->m_lstUser.SetItemText(nIndex, 8, L"");
	
	HRSRC hRSrc = FindResource(GetModuleHandle(0), MAKEINTRESOURCE(IDR_CLIENT), RT_RCDATA);
	if(!hRSrc)
	{
		strLabel.LoadString(NULL, IDS_RESOURCECRCERROR, g_wLanguageID);
		g_pAppDlg->m_lstUser.SetItemText(nIndex, 8, strLabel.GetBuffer());

		g_pAppDlg->m_lstUser.SetItemData(nIndex, 0);

		CloseHandle(hEvent);
		CloseHandle(hEventAnswer);
		CloseHandle(hParamFile);

		EnterCriticalSection(&g_csArraySection);
		for(int i = 0; i < g_nArrayCount; i++)
		{
			if(g_pbArray[i] == nIndex)
			{
				if(g_nArrayCount > i + 1)
					memcpy(&g_pbArray[i], &g_pbArray[i + 1], g_nArrayCount - i - 1);

				g_nArrayCount --;
				break;
			}
		}
		LeaveCriticalSection(&g_csArraySection);

		return 0;
	}

	int nLen = SizeofResource(GetModuleHandle(0), hRSrc);
	HGLOBAL hGlobal = LoadResource(GetModuleHandle(0), hRSrc);
	if(!hGlobal || nLen <= 0)
	{
		strLabel.LoadString(NULL, IDS_RESOURCECRCERROR, g_wLanguageID);
		g_pAppDlg->m_lstUser.SetItemText(nIndex, 8, strLabel.GetBuffer());

		g_pAppDlg->m_lstUser.SetItemData(nIndex, 0);

		CloseHandle(hEvent);
		CloseHandle(hEventAnswer);
		CloseHandle(hParamFile);

		EnterCriticalSection(&g_csArraySection);
		for(int i = 0; i < g_nArrayCount; i++)
		{
			if(g_pbArray[i] == nIndex)
			{
				if(g_nArrayCount > i + 1)
					memcpy(&g_pbArray[i], &g_pbArray[i + 1], g_nArrayCount - i - 1);

				g_nArrayCount --;
				break;
			}
		}
		LeaveCriticalSection(&g_csArraySection);

		return 0;
	}

	swprintf(szPath, VMProtectDecryptStringW(L"%s\\Run"), g_szAppPath);
	_wmkdir(szPath);

	swprintf(szPath, VMProtectDecryptStringW(L"%s\\Run\\%d.dat"), g_szAppPath, nIndex);
	if(IsFileExist(szPath))
		DeleteFile(szPath);

	BYTE *pbBuffer = (BYTE *)LockResource(hGlobal);
	FILE *fp = _wfopen(szPath, VMProtectDecryptStringW(L"wb"));
	if(!fp)
	{
		strLabel.LoadString(NULL, IDS_RESOURCECREATEFAIL, g_wLanguageID);
		g_pAppDlg->m_lstUser.SetItemText(nIndex, 8, strLabel.GetBuffer());

		g_pAppDlg->m_lstUser.SetItemData(nIndex, 0);

		CloseHandle(hEvent);
		CloseHandle(hEventAnswer);
		CloseHandle(hParamFile);

		EnterCriticalSection(&g_csArraySection);
		for(int i = 0; i < g_nArrayCount; i++)
		{
			if(g_pbArray[i] == nIndex)
			{
				if(g_nArrayCount > i + 1)
					memcpy(&g_pbArray[i], &g_pbArray[i + 1], g_nArrayCount - i - 1);

				g_nArrayCount --;
				break;
			}
		}
		LeaveCriticalSection(&g_csArraySection);

		return 0;
	}

	fwrite(pbBuffer, nLen, 1, fp);
	fclose(fp);

	// Create Process Hooking Detect //

	HMODULE hKernel32 = LoadLibrary(L"Kernel32.dll");
	DWORD64 qwMemoryAddr = (DWORD64)MyGetProcAddress((DWORD64)hKernel32, 0x1938);
	if (qwMemoryAddr == 0)
	{
		strLabel.LoadString(NULL, IDS_LOADSETTING, g_wLanguageID);
		swprintf(szStr, strLabel.GetBuffer(), 1);
		g_pAppDlg->m_lstUser.SetItemText(nIndex, 8, szStr);

		g_pAppDlg->m_lstUser.SetItemData(nIndex, 0);

		CloseHandle(hEvent);
		CloseHandle(hEventAnswer);
		CloseHandle(hParamFile);

		EnterCriticalSection(&g_csArraySection);
		for (int i = 0; i < g_nArrayCount; i++)
		{
			if (g_pbArray[i] == nIndex)
			{
				if (g_nArrayCount > i + 1)
					memcpy(&g_pbArray[i], &g_pbArray[i + 1], g_nArrayCount - i - 1);

				g_nArrayCount--;
				break;
			}
		}
		LeaveCriticalSection(&g_csArraySection);

		return 0;
	}

	WCHAR szFile[MAX_PATH] = { 0, };
	GetModuleFileName(hKernel32, szFile, MAX_PATH);

	fp = _wfopen(szFile, L"rb");
	if (!fp)
	{
		strLabel.LoadString(NULL, IDS_LOADSETTING, g_wLanguageID);
		swprintf(szStr, strLabel.GetBuffer(), 2);
		g_pAppDlg->m_lstUser.SetItemText(nIndex, 8, szStr);

		g_pAppDlg->m_lstUser.SetItemData(nIndex, 0);

		CloseHandle(hEvent);
		CloseHandle(hEventAnswer);
		CloseHandle(hParamFile);

		EnterCriticalSection(&g_csArraySection);
		for (int i = 0; i < g_nArrayCount; i++)
		{
			if (g_pbArray[i] == nIndex)
			{
				if (g_nArrayCount > i + 1)
					memcpy(&g_pbArray[i], &g_pbArray[i + 1], g_nArrayCount - i - 1);

				g_nArrayCount--;
				break;
			}
		}
		LeaveCriticalSection(&g_csArraySection);

		return 0;
	}
	
	int nLength = _filelength(fileno(fp));
	if (nLength <= 0)
	{
		fclose(fp);

		strLabel.LoadString(NULL, IDS_LOADSETTING, g_wLanguageID);
		swprintf(szStr, strLabel.GetBuffer(), 3);
		g_pAppDlg->m_lstUser.SetItemText(nIndex, 8, szStr);

		g_pAppDlg->m_lstUser.SetItemData(nIndex, 0);

		CloseHandle(hEvent);
		CloseHandle(hEventAnswer);
		CloseHandle(hParamFile);

		EnterCriticalSection(&g_csArraySection);
		for (int i = 0; i < g_nArrayCount; i++)
		{
			if (g_pbArray[i] == nIndex)
			{
				if (g_nArrayCount > i + 1)
					memcpy(&g_pbArray[i], &g_pbArray[i + 1], g_nArrayCount - i - 1);

				g_nArrayCount--;
				break;
			}
		}
		LeaveCriticalSection(&g_csArraySection);

		return 0;
	}
	
	BYTE* pbFileBuffer = new BYTE[nLength];
	if (!pbFileBuffer)
	{
		fclose(fp);

		strLabel.LoadString(NULL, IDS_LOADSETTING, g_wLanguageID);
		swprintf(szStr, strLabel.GetBuffer(), 4);
		g_pAppDlg->m_lstUser.SetItemText(nIndex, 8, szStr);

		g_pAppDlg->m_lstUser.SetItemData(nIndex, 0);

		CloseHandle(hEvent);
		CloseHandle(hEventAnswer);
		CloseHandle(hParamFile);

		EnterCriticalSection(&g_csArraySection);
		for (int i = 0; i < g_nArrayCount; i++)
		{
			if (g_pbArray[i] == nIndex)
			{
				if (g_nArrayCount > i + 1)
					memcpy(&g_pbArray[i], &g_pbArray[i + 1], g_nArrayCount - i - 1);

				g_nArrayCount--;
				break;
			}
		}
		LeaveCriticalSection(&g_csArraySection);

		return 0;
	}
	
	fread(pbFileBuffer, 1, nLength, fp);
	fclose(fp);

	DWORD64 qwFileAddr = (DWORD64)MyGetFileAddress(pbFileBuffer, 0x1938);
	if (qwFileAddr == 0)
	{
		delete[] pbFileBuffer;
		pbFileBuffer = NULL;

		strLabel.LoadString(NULL, IDS_LOADSETTING, g_wLanguageID);
		swprintf(szStr, strLabel.GetBuffer(), 5);
		g_pAppDlg->m_lstUser.SetItemText(nIndex, 8, szStr);

		g_pAppDlg->m_lstUser.SetItemData(nIndex, 0);

		CloseHandle(hEvent);
		CloseHandle(hEventAnswer);
		CloseHandle(hParamFile);

		EnterCriticalSection(&g_csArraySection);
		for (int i = 0; i < g_nArrayCount; i++)
		{
			if (g_pbArray[i] == nIndex)
			{
				if (g_nArrayCount > i + 1)
					memcpy(&g_pbArray[i], &g_pbArray[i + 1], g_nArrayCount - i - 1);

				g_nArrayCount--;
				break;
			}
		}
		LeaveCriticalSection(&g_csArraySection);

		return 0;
	}

	DWORD dwFileOffset = 0;
	while (1)
	{
		// 후킹이 되어있는 경우
		if (*(BYTE*)(qwMemoryAddr + dwFileOffset) != *(BYTE*)(pbFileBuffer + qwFileAddr + dwFileOffset))
		{
			HKEY hKey;
			if (RegCreateKeyEx(HKEY_LOCAL_MACHINE, VMProtectDecryptStringW(L"SOFTWARE\\Secutyz"), 0, NULL,
				REG_OPTION_NON_VOLATILE, KEY_ALL_ACCESS, NULL, &hKey, NULL) == ERROR_SUCCESS)
				RegCloseKey(hKey);

			break;
		}

		dwFileOffset++;

		if (dwFileOffset % 8 == 0 && *(BYTE*)(qwMemoryAddr + dwFileOffset) == 0xCC)
			break;
	}

	delete[] pbFileBuffer;
	pbFileBuffer = NULL;
	
	// ----------------------------- //

	PROCESS_INFORMATION	pi;
	STARTUPINFO			si;

	ZeroMemory(&si , sizeof(STARTUPINFO));
	si.cb = sizeof(STARTUPINFO);

	swprintf(szCmdLine, VMProtectDecryptStringW(L"%s %d %d %d"), szPath, nIndex, _wtoi(g_pAppDlg->m_lstUser.GetItemText(nIndex, 9).GetBuffer()), g_dwPatchVersion);
	PathRemoveFileSpec(szPath);

	if(!CreateProcess(NULL, szCmdLine, NULL , NULL , 0 , 0, NULL , szPath, &si , &pi))
	{
		strLabel.LoadString(NULL, IDS_CLIENTRUNFAIL, g_wLanguageID);
		g_pAppDlg->m_lstUser.SetItemText(nIndex, 8, strLabel.GetBuffer());

		g_pAppDlg->m_lstUser.SetItemData(nIndex, 0);

		CloseHandle(hEvent);
		CloseHandle(hEventAnswer);
		CloseHandle(hParamFile);

		EnterCriticalSection(&g_csArraySection);
		for(int i = 0; i < g_nArrayCount; i++)
		{
			if(g_pbArray[i] == nIndex)
			{
				if(g_nArrayCount > i + 1)
					memcpy(&g_pbArray[i], &g_pbArray[i + 1], g_nArrayCount - i - 1);

				g_nArrayCount --;
				break;
			}
		}
		LeaveCriticalSection(&g_csArraySection);
		return 0;
	}		

	HANDLE hProcess = OpenProcess(MAXIMUM_ALLOWED, 0, pi.dwProcessId);
	if(hProcess == NULL)
	{
		strLabel.LoadString(NULL, IDS_CLIENTRUNFAIL, g_wLanguageID);
		g_pAppDlg->m_lstUser.SetItemText(nIndex, 8, strLabel.GetBuffer());

		g_pAppDlg->m_lstUser.SetItemData(nIndex, 0);

		CloseHandle(hEvent);
		CloseHandle(hEventAnswer);
		CloseHandle(hParamFile);

		EnterCriticalSection(&g_csArraySection);
		for(int i = 0; i < g_nArrayCount; i++)
		{
			if(g_pbArray[i] == nIndex)
			{
				if(g_nArrayCount > i + 1)
					memcpy(&g_pbArray[i], &g_pbArray[i + 1], g_nArrayCount - i - 1);

				g_nArrayCount --;
				break;
			}
		}
		LeaveCriticalSection(&g_csArraySection);
		return 0;
	}

	swprintf(szStr, VMProtectDecryptStringW(EVENT_NAME_2), g_pAppDlg->m_lstUser.GetItemText(nIndex, 1).GetBuffer());

	while(1)
	{
		if(WaitForSingleObject(hProcess, 1) != WAIT_TIMEOUT)	// 종료된 상태이면 다시 실행해준다
		{
			TerminateProcess(hProcess, 0);
			CloseHandle(hProcess);

			if(hParamFile)
				CloseHandle(hParamFile);

			if(hEvent)
				CloseHandle(hEvent);

			if(hEventAnswer)
				CloseHandle(hEventAnswer);

			EnterCriticalSection(&g_csArraySection);

			BOOL bExist = FALSE;
			for(int j = 0; j < g_nArrayCount; j++)
			{
				if(g_pbArray[j] == nIndex)
				{
					bExist = TRUE;
					break;
				}
			}

			if(!bExist && g_nArrayCount < 100)
				g_pbArray[g_nArrayCount++] = nIndex;

			LeaveCriticalSection(&g_csArraySection);

			g_pAppDlg->m_lstUser.SetItemData(nIndex, 0);
			return 0;
		}

		if(WaitForSingleObject(hEvent, 1) != WAIT_TIMEOUT)		// 현재 상태 전달받는다
		{
			ResetEvent(hEvent);

			switch(pStatusInfo->nOpCode)
			{
			case STATUS_CONNECTFAIL:
			case STATUS_SENDFAIL:
			case STATUS_RECVFAIL:
				{
					strLabel.LoadString(NULL, IDS_CONNECTFAIL, g_wLanguageID);
					g_pAppDlg->m_lstUser.SetItemText(nIndex, 8, strLabel.GetBuffer());

					SetEvent(hEventAnswer);
					goto CLIENT_END;
				}
				break;
			case STATUS_ALREADYCONNECT:
				{
					strLabel.LoadString(NULL, IDS_ALREADYCONNECT, g_wLanguageID);
					swprintf_s(szStr, MAX_PATH, strLabel.GetBuffer(), pStatusInfo->nValue);
					g_pAppDlg->m_lstUser.SetItemText(nIndex, 8, szStr);

					SetEvent(hEventAnswer);
					goto CLIENT_END;
				}
				break;
			case STATUS_WRONGIDPW:
				{
					strLabel.LoadString(NULL, IDS_WRONGIDPW, g_wLanguageID);
					g_pAppDlg->m_lstUser.SetItemText(nIndex, 8, strLabel.GetBuffer());

					SetEvent(hEventAnswer);
					goto CLIENT_END;
				}
				break;
			case STATUS_BLOCKID:
				{
					strLabel.LoadString(NULL, IDS_BLOCKID, g_wLanguageID);
					g_pAppDlg->m_lstUser.SetItemText(nIndex, 8, strLabel.GetBuffer());

					SetEvent(hEventAnswer);
					goto CLIENT_END;
				}
				break;
			case STATUS_SERVERMAINTANCE:
				{
					strLabel.LoadString(NULL, IDS_SERVERCHECK, g_wLanguageID);
					g_pAppDlg->m_lstUser.SetItemText(nIndex, 8, strLabel.GetBuffer());

					SetEvent(hEventAnswer);
					goto CLIENT_END;
				}
				break;
			case STATUS_WRONGHWID:
				{
					strLabel.LoadString(NULL, IDS_WRONGHWID, g_wLanguageID);
					g_pAppDlg->m_lstUser.SetItemText(nIndex, 8, strLabel.GetBuffer());

					SetEvent(hEventAnswer);
					goto CLIENT_END;
				}
				break;
			case STATUS_NOUSERINFO:
				{
					strLabel.LoadString(NULL, IDS_NOACCOUNT, g_wLanguageID);
					g_pAppDlg->m_lstUser.SetItemText(nIndex, 8, strLabel.GetBuffer());

					SetEvent(hEventAnswer);
					goto CLIENT_END;
				}
				break;
			case STATUS_LOGINSUCCESS:
				{
					//unsigned int nValue = (unsigned int)pStatusInfo->nValue;

					//int nDate = nValue / 100000000;
					//nDate = nDate * 100 + (nValue % 100000000) / 1000000;
					//nDate = nDate * 100 + (nValue % 1000000) / 10000;
					//swprintf_s(szStr, MAX_PATH, L"%d", nDate);
					//g_pAppDlg->m_lstUser.SetItemText(nIndex, 16, szStr);

					//swprintf_s(szStr, MAX_PATH, VMProtectDecryptStringW(L"%02d-%02d-%02d %02d:%02d"), nValue / 100000000, (nValue % 100000000) / 1000000,
					//	(nValue % 1000000) / 10000, (nValue % 10000) / 100, nValue % 100);
					//g_pAppDlg->m_lstUser.SetItemText(nIndex, 6, szStr);

					strLabel.LoadString(NULL, IDS_AUTHSUCCESS, g_wLanguageID);
					g_pAppDlg->m_lstUser.SetItemText(nIndex, 8, strLabel.GetBuffer());
				}
				break;
			case STATUS_ADDRINVALID:
				{
					strLabel.LoadString(NULL, IDS_UPDATEERROR, g_wLanguageID);
					g_pAppDlg->m_lstUser.SetItemText(nIndex, 8, strLabel.GetBuffer());
					SetEvent(hEventAnswer);
					goto CLIENT_END;
				}
				break;
			case STATUS_DISCONNECT:
				{
					strLabel.LoadString(NULL, IDS_SERVERERROR, g_wLanguageID);
					g_pAppDlg->m_lstUser.SetItemText(nIndex, 8, strLabel.GetBuffer());
					SetEvent(hEventAnswer);
					goto CLIENT_END;
				}
				break;
			case STATUS_TIMEEXPIRED:
				{
					strLabel.LoadString(NULL, IDS_TIMEEXPIRED, g_wLanguageID);
					g_pAppDlg->m_lstUser.SetItemText(nIndex, 8, strLabel.GetBuffer());
					SetEvent(hEventAnswer);
					goto CLIENT_END;
				}
				break;
			case STATUS_CURVERSION:
				{
					if(!g_bUpdatable && g_dwPatchVersion != pStatusInfo->nValue)
					{
						g_bUpdatable = TRUE;

						g_pAppDlg->KillTimer(0x19910324);

						strLabel.LoadString(NULL, IDS_UPDATEALRAM, g_wLanguageID);
						swprintf(szStr, strLabel.GetBuffer(), g_dwPatchVersion);
						g_pAppDlg->SetWindowText(szStr);
					}
				}
				break;
			case STATUS_GAMESTATUSLOG:
				{
					g_pAppDlg->m_lstUser.SetItemText(nIndex, 8, pStatusInfo->szLog);
				}
				break;
			case STATUS_AUTHERROR:
				{
					strLabel.LoadString(NULL, IDS_AUTHERROR, g_wLanguageID);
					swprintf_s(szStr, MAX_PATH, strLabel.GetBuffer(), pStatusInfo->nValue);
					g_pAppDlg->m_lstUser.SetItemText(nIndex, 8, szStr);
				}
				break;
			case STATUS_GAMECHARLOG:
				{
					swprintf(szStr, L"Lv.%d", pStatusInfo->nLevel);
					g_pAppDlg->m_lstUser.SetItemText(nIndex, 10, szStr);

					swprintf(szStr, L"%s (%s)", pStatusInfo->szChar, pStatusInfo->szServer);
					g_pAppDlg->m_lstUser.SetItemText(nIndex, 11, szStr);
					g_pAppDlg->m_lstUser.SetItemText(nIndex, 12, pStatusInfo->szRegion);

					strLabel = FormatCurrency(pStatusInfo->nGold);
					g_pAppDlg->m_lstUser.SetItemText(nIndex, 13, strLabel.GetBuffer());

					strLabel = FormatCurrency(pStatusInfo->nDia);
					g_pAppDlg->m_lstUser.SetItemText(nIndex, 14, strLabel.GetBuffer());

					if (g_pAppDlg->m_nClientDia[nIndex] != pStatusInfo->nDia)
					{
						g_pAppDlg->m_nClientDia[nIndex] = pStatusInfo->nDia;
						g_pAppDlg->PostMessageW(WM_REFRESHDIA, 0, 0);
					}
				}
				break;
			}

			SetEvent(hEventAnswer);
		}
	}

CLIENT_END:

	CloseHandle(hParamFile);
	CloseHandle(hEvent);
	CloseHandle(hEventAnswer);

	TerminateProcess(hProcess, 0);
	CloseHandle(hProcess);

	swprintf(szStr, VMProtectDecryptStringW(EVENT_NAME_6), g_pAppDlg->m_lstUser.GetItemText(nIndex, 1).GetBuffer());
	hEvent = CreateEvent(0, 0, 0, szStr);
	if(hEvent)
	{
		SetEvent(hEvent);
		CloseHandle(hEvent);
	}

	swprintf(szStr, VMProtectDecryptStringW(EVENT_NAME_9), g_pAppDlg->m_lstUser.GetItemText(nIndex, 1).GetBuffer());
	hEvent = CreateEvent(0, 0, 0, szStr);
	if(hEvent)
	{
		SetEvent(hEvent);
		CloseHandle(hEvent);
	}

	EnterCriticalSection(&g_csArraySection);
	for(int i = 0; i < g_nArrayCount; i++)
	{
		if(g_pbArray[i] == nIndex)
		{
			if(g_nArrayCount > i + 1)
				memcpy(&g_pbArray[i], &g_pbArray[i + 1], g_nArrayCount - i - 1);

			g_nArrayCount --;
			break;
		}
	}
	LeaveCriticalSection(&g_csArraySection);

	g_pAppDlg->m_lstUser.SetItemData(nIndex, 0);
	VMProtectEnd();
	return 0;
}


typedef struct _DETAIL_ITEM_OLD
{
	BYTE	bEnable;
	WCHAR	szName[MAX_NAME];
	BYTE	nMode;

	int		nMarketCount;
	BYTE	nMarketMode;
	int		nMarketIndex;
	int		nMarketPrice;
}DETAIL_ITEM_OLD;
void ChangeItemSetting(WCHAR* szDir)
{
	WCHAR szOld[MAX_PATH] = { 0, };
	WCHAR szNew[MAX_PATH] = { 0, };

	swprintf(szOld, L"%s\\Item.dat", szDir);
	swprintf(szNew, L"%s\\Items.dat", szDir);

	FILE * fpOld, * fpNew;
	_wfopen_s(&fpOld, szOld, L"rb");

	BOOL bWrite = FALSE;
	if (fpOld)
	{
		_wfopen_s(&fpNew, szNew, L"wb");
		if (fpNew)
		{
			BYTE pbDefaultMode[MAX_GRADE][MAX_TYPE_1];
			fread(pbDefaultMode, sizeof(BYTE), MAX_GRADE * MAX_TYPE_1, fpOld);
			fwrite(pbDefaultMode, sizeof(BYTE), MAX_GRADE * MAX_TYPE_1, fpNew);

			int nCount = 0;
			fread(&nCount, sizeof(int), 1, fpOld);
			fwrite(&nCount, sizeof(int), 1, fpNew);

			if (nCount > 0)
			{
				DETAIL_ITEM_OLD* pDetailOld = new DETAIL_ITEM_OLD[nCount];
				memset(pDetailOld, 0, sizeof(DETAIL_ITEM_OLD) * nCount);
				
				fread(pDetailOld, sizeof(DETAIL_ITEM_OLD), nCount, fpOld);

				DETAIL_ITEM* pDetailNew = new DETAIL_ITEM[nCount];
				memset(pDetailNew, 0, sizeof(DETAIL_ITEM) * nCount);

				for (int i = 0; i < nCount; i++)
				{
					pDetailNew[i].bEnable = pDetailOld[i].bEnable;
					wcscpy(pDetailNew[i].szName, pDetailOld[i].szName);
					pDetailNew[i].nMode = pDetailOld[i].nMode;

					pDetailNew[i].nMarketCount = pDetailOld[i].nMarketCount;
					pDetailNew[i].nMarketMode = pDetailOld[i].nMarketMode;
					pDetailNew[i].nMarketIndex = pDetailOld[i].nMarketIndex;
					pDetailNew[i].nMarketPrice = pDetailOld[i].nMarketPrice;
				}

				fwrite(pDetailNew, sizeof(DETAIL_ITEM), nCount, fpNew);
			}

			fclose(fpNew);

			bWrite = TRUE;
		}

		fclose(fpOld);
	}

	if (bWrite)
		DeleteFile(szOld);
}


void ChangeSettingFile(WCHAR* szBase)
{
	WCHAR szPath[MAX_PATH] = { 0, };
	swprintf(szPath, L"%s\\*.*", szBase);

	WIN32_FIND_DATA wfd;
	HANDLE hFind = FindFirstFile(szPath, &wfd);
	if (hFind == INVALID_HANDLE_VALUE)
		return;

	do
	{
		if (wfd.cFileName[0] == L'.')
			continue;

		if (wfd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)
		{
			swprintf(szPath, L"%s\\%s", szBase, wfd.cFileName);
			ChangeSettingFile(szPath);
			continue;
		}

		// 아이템 설정 변경된거 처리하자
		if (!wcsicmp(wfd.cFileName, L"Item.dat"))
			ChangeItemSetting(szBase);

	} while (FindNextFile(hFind, &wfd));
	FindClose(hFind);
}


void ChangeSetting()
{
	WCHAR szSchedule[MAX_PATH] = { 0, };
	swprintf(szSchedule, L"%s\\Schedule", g_szAppPath);

	ChangeSettingFile(szSchedule);
}


int recvfromTimeOut(SOCKET socket, long sec, long usec)
{
	timeval timeout;
	timeout.tv_sec = sec;
	timeout.tv_usec = usec;
	fd_set fds;
	FD_ZERO(&fds);
	FD_SET(socket, &fds);
	return select(0, &fds, 0, 0, &timeout);
}


__inline time_t GetInternetTime1()
{
	struct sockaddr_in server_addr;
	memset(&server_addr, 0, sizeof(server_addr));
	server_addr.sin_family = AF_INET;
	server_addr.sin_port = htons(123);

	server_addr.sin_addr.s_addr = inet_addr("106.247.248.106");
	//server_addr.sin_addr.s_addr = inet_addr("203.172.161.5");
	//server_addr.sin_addr.s_addr = inet_addr("162.159.200.123");

	protoent* proto = getprotobyname("udp");
	SOCKET s = socket(PF_INET, SOCK_DGRAM, proto->p_proto);

	char msg[48] = { 0x08, 0, 0, 0, 0, 0, 0, 0, 0 };
	sendto(s, msg, sizeof(msg), 0, (struct sockaddr*) & server_addr, sizeof(server_addr));

	memset(msg, 0, sizeof(msg));
	struct sockaddr saddr;
	socklen_t saddr_l = sizeof(saddr);

	int res = recvfromTimeOut(s, 5, 0);
	if (res > 0)
	{
		recvfrom(s, msg, 48, 0, &saddr, &saddr_l);
		closesocket(s);
		return ntohl(*(u_long*)& msg[40]) - 2208988800U;
	}

	closesocket(s);
	return -1;
}


__inline time_t GetInternetTime2()
{
	SOCKET hSocket = socket(PF_INET, SOCK_STREAM, 0);
	if (hSocket == -1)
		return -1;

	sockaddr_in servAddr;
	memset(&servAddr, 0, sizeof(servAddr));
	servAddr.sin_family = AF_INET;
	servAddr.sin_port = htons(37);

	struct hostent* s_HostEntry;
	s_HostEntry = gethostbyname("time.bora.net");
	memcpy((void*)(&servAddr.sin_addr), (void*)(s_HostEntry->h_addr), sizeof(servAddr.sin_addr));

	if (-1 == connect(hSocket, (sockaddr*)& servAddr, sizeof(servAddr)))
		return -1;

	time_t sBuffer;
	int strLen = recv(hSocket, (char*)& sBuffer, sizeof(sBuffer), 0);
	if (-1 == strLen)
		return -1;

	closesocket(hSocket);
	return ntohl(*(u_long*)& sBuffer) - 2208988800U;
}


__inline time_t GetInternetTime3()
{
	//char* host = "kr.pool.ntp.org";
	char* host = "time.windows.com";
	NTPMessage msg;

	msg.Clear();
	msg.version = 3;
	msg.mode = 3;

	NTPMessage response;
	response.Clear();

	int sock = (int)socket(PF_INET, SOCK_DGRAM, IPPROTO_UDP);
	sockaddr_in srv_addr;
	memset(&srv_addr, 0, sizeof(srv_addr));
	dns_lookup(host, &srv_addr);

	msg.SendToNTPMessage(sock, &srv_addr);
	response.RecvNTPMessage(sock);

	return response.tx.to_time_t();
}


// DWORD TimeThread(LPVOID lpParam)
// {
// 	VMProtectBeginUltra("TimeThread");
// 
// 	WSADATA wsaData;
// 	WSAStartup(MAKEWORD(2, 2), &wsaData);
// 
// 	DWORD64			m_qwTickCount = 0;
// 	while (1)
// 	{
// 		if (GetTickCount64() >= m_qwTickCount + 5 * 60 * 1000)
// 		{
// 			time_t rawtime = GetInternetTime1();
// 			if (rawtime == -1)
// 				rawtime = GetInternetTime2();
// 			if (rawtime == -1)
// 				rawtime = GetInternetTime3();
// 
// 			if (rawtime != -1)
// 			{
// 				struct tm* t;
// 				t = gmtime(&rawtime);
// 
// 				unsigned int nPreInternet = ((t->tm_year + 1900) % 100) * 100;
// 				nPreInternet = (nPreInternet + (t->tm_mon + 1)) * 100;
// 				nPreInternet = (nPreInternet + t->tm_mday) * 100;
// 				nPreInternet = (nPreInternet + t->tm_hour) * 100;
// 				nPreInternet = nPreInternet + t->tm_min;
// 
// 				g_pAlignInfo->dwInternetTime = (nPreInternet ^ 0x19911014);
// 			}
// 			else if(g_pAlignInfo->dwInternetTime != 0)
// 			{
// 				unsigned int nPreInternet = g_pAlignInfo->dwInternetTime ^ 0x19911014;
// 				
// 				int nAddrMinute = nPreInternet % 100;
// 				int nAddrHour = (nPreInternet / 100) % 100;
// 				int nAddrDay = (nPreInternet / 10000) % 100;
// 				int nAddrMonth = (nPreInternet / 1000000) % 100;
// 				int nAddrYear = nPreInternet / 100000000;
// 
// 				CTime InternetTime(2000 + nAddrYear, nAddrMonth, nAddrDay, nAddrHour, nAddrMinute, 0);
// 
// 				int	nPastMinute = (int)((GetTickCount64() - m_qwTickCount) / 1000) / 60;
// 
// 				CTime CurTime = InternetTime + CTimeSpan(0, 0, nPastMinute, 0);
// 
// 				nPreInternet = (CurTime.GetYear() % 100) * 100;
// 				nPreInternet = (nPreInternet + CurTime.GetMonth()) * 100;
// 				nPreInternet = (nPreInternet + CurTime.GetDay()) * 100;
// 				nPreInternet = (nPreInternet + CurTime.GetHour()) * 100;
// 				nPreInternet = nPreInternet + CurTime.GetMinute();
// 
// 				g_pAlignInfo->dwInternetTime = (nPreInternet ^ 0x19911014);
// 			}
// 
// 			if(g_pAlignInfo->dwInternetTime != 0)
// 				m_qwTickCount = GetTickCount64();
// 		}
// 
// 		Sleep(1000);
// 	}
// 
// 	WSACleanup();
// 	VMProtectEnd();
// 	return 0;
// }


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


BOOL	g_bInjector = FALSE;
BOOL InjectDevice()
{
	HMODULE				hModule;
	DWORD				cbNeeded;

	BYTE pbInfo[0x24];

	VMProtectBeginMutation("Inject");

	if (g_bInjector)
		return TRUE;

	DWORD dwPID = FindTargetProcess(0, VMProtectDecryptStringW(L"explorer.exe"));
	if (dwPID == -1)
		return FALSE;

	HANDLE hProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, dwPID);
	if (!hProcess)
		return FALSE;

	if (!EnumProcessModules(hProcess, &hModule, sizeof(hModule), &cbNeeded))
		return FALSE;

	HRSRC hRSrc = FindResource(GetModuleHandle(0), MAKEINTRESOURCE(IDR_ENGINE), RT_RCDATA);
	if (!hRSrc)
		return FALSE;

	HRSRC hRNwkdu = FindResource(GetModuleHandle(0), MAKEINTRESOURCE(IDR_NWKDU), RT_RCDATA);
	if (!hRNwkdu)
		return FALSE;

	int nLen = SizeofResource(GetModuleHandle(0), hRSrc);
	BYTE * pbBuffer = new BYTE[nLen];

	HGLOBAL hGlobal = LoadResource(GetModuleHandle(0), hRSrc);
	memcpy(pbBuffer, (BYTE*)LockResource(hGlobal), nLen);

	*(DWORD*)(pbInfo + 0x04) = nLen;
	*(DWORD64*)(pbInfo + 0x08) = (DWORD64)pbBuffer;

	*(DWORD*)(pbInfo + 0x00) = GetCurrentProcessId();

	*(DWORD64*)(pbInfo + 0x10) = (DWORD64)GetProcAddress(LoadLibraryA(VMProtectDecryptStringA("kernel32.dll")), VMProtectDecryptStringA("Sleep"));
	*(DWORD64*)(pbInfo + 0x18) = (DWORD64)GetProcAddress(LoadLibraryA(VMProtectDecryptStringA("kernelbase.dll")), VMProtectDecryptStringA("Sleep"));
	*(DWORD*)(pbInfo + 0x20) = 0;

	BYTE * pbDst = (PBYTE)hModule + 0x360;
	DWORD dwOld;
	VirtualProtectEx(hProcess, pbDst, 0x24, PAGE_READWRITE, &dwOld);
	WriteProcessMemory(hProcess, pbDst, pbInfo, 0x24, NULL);
	VirtualProtectEx(hProcess, pbDst, 0x24, dwOld, &dwOld);

	nLen = SizeofResource(GetModuleHandle(0), hRNwkdu);
	pbBuffer = new BYTE[nLen];
	hGlobal = LoadResource(GetModuleHandle(0), hRNwkdu);
	memcpy(pbBuffer, (BYTE*)LockResource(hGlobal), nLen);

	DWORD64 dwRet = (DWORD64)LoadLibraryR(pbBuffer, nLen, NULL);
	delete[] pbBuffer;

	if (!dwRet)
		return FALSE;

	g_bInjector = TRUE;

	VMProtectEnd();
	return TRUE;
}