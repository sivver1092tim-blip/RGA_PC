
// Detail.cpp : Defines the class behaviors for the application.
//

#include "stdafx.h"
#include "Detail.h"
#include "DetailDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDetailApp

BEGIN_MESSAGE_MAP(CDetailApp, CWinAppEx)
	ON_COMMAND(ID_HELP, &CWinApp::OnHelp)
END_MESSAGE_MAP()


// CDetailApp construction

CDetailApp::CDetailApp()
{
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
}


// The one and only CDetailApp object

CDetailApp theApp;


// CDetailApp initialization

BOOL CDetailApp::InitInstance()
{
	VMProtectBeginUltra("InitInstance");

	INITCOMMONCONTROLSEX InitCtrls;
	InitCtrls.dwSize = sizeof(InitCtrls);
	InitCtrls.dwICC = ICC_WIN95_CLASSES;
	InitCommonControlsEx(&InitCtrls);

	CWinAppEx::InitInstance();

	AfxEnableControlContainer();

	srand((unsigned int)time(NULL));

	CWinApp *App = AfxGetApp();
	CString strArgs = App->m_lpCmdLine;

	WCHAR szCmdLine[MAX_PATH];
	swprintf(szCmdLine, VMProtectDecryptStringW(L"%s") , strArgs.GetBuffer());

	GetModuleFileName(GetModuleHandle(NULL), g_szAppPath, MAX_PATH);

	PathRemoveFileSpec(g_szAppPath);
	PathRemoveFileSpec(g_szAppPath);

	memset(g_szAutoID, 0, MAX_PATH * sizeof(WCHAR));

	WCHAR szPath[MAX_PATH], szKey[MAX_PATH], szStr[MAX_PATH];
	WCHAR *szStart = wcstok(szCmdLine, L" ");
	if(szStart == NULL)
		return FALSE;

	g_nIndex = _wtoi(szStart) + 1;			// 실행 번호 얻기

	szStart = wcstok(NULL, L" ");
	if(szStart == NULL)
		return FALSE;

	g_bAutoConnect = (BOOL)(_wtoi(szStart));

	szStart = wcstok(NULL, L" ");
	if(szStart == NULL)
		return FALSE;

	g_dwExeVersion = _wtoi(szStart);

	swprintf(szPath, VMProtectDecryptStringW(L"%s\\Setting.dat"), g_szAppPath);

	swprintf(szKey, VMProtectDecryptStringW(L"AutoID_%d"), g_nIndex);
	GetPrivateProfileString(VMProtectDecryptStringW(L"AccountInfo"), szKey, L"", g_szAutoID, MAX_PATH, szPath);

	swprintf(szKey, VMProtectDecryptStringW(L"GameID_%d"), g_nIndex);
	GetPrivateProfileString(VMProtectDecryptStringW(L"AccountInfo"), szKey, L"", g_szGameID, MAX_PATH, szPath);

	swprintf(szKey, VMProtectDecryptStringW(L"GamePW_%d"), g_nIndex);
	GetPrivateProfileString(VMProtectDecryptStringW(L"AccountInfo"), szKey, L"", g_szGamePW, MAX_PATH, szPath);

	swprintf(szKey, VMProtectDecryptStringW(L"GameServer_%d"), g_nIndex);
	g_nGameServer = GetPrivateProfileInt(VMProtectDecryptStringW(L"AccountInfo"), szKey, -1, szPath);

	//if(GetPrivateProfileInt(L"Lanuage", L"Korean", 0, szPath) == 1)
#ifdef KOREAN_VERSION
	g_wLanguageID = 0x412;
#endif // KOREAN_VERSION
	//g_wLanguageID = 0x412;

	if(!wcscmp(g_szAutoID, L"") || !wcscmp(g_szGameID, L"") || !wcscmp(g_szGamePW, L""))		// 아이디, 비번이 없는 경우 종료한다
		return FALSE;

	// -------------- Get Game Path -------------- //
	DWORD cbData = MAX_PATH;
	RegGetValue(HKEY_CURRENT_USER, L"Software\\DaumGames\\Odin_Client", L"InstallPath", RRF_RT_REG_SZ,
		NULL, g_szGamePath, &cbData);

	wcscpy_s(g_szGamePath, L"D:\\redlabgames\\ROMGoldenAge\\client\\ROMGoldenAge.exe");
	cbData = (wcslen(g_szGamePath) + 1) * sizeof(wchar_t);

	if (!wcscmp(g_szGamePath, L""))															// 게임이 설치가 안되어있으면
		return FALSE;

	PathRemoveFileSpec(g_szGamePath);
	
	swprintf(szStr, VMProtectDecryptStringW(MUTEX_NAME_2), g_szAutoID);						// 이미 실행된 상태이면 종료한다
	HANDLE hMutex = OpenMutex(MUTEX_ALL_ACCESS, 0, szStr);
	if(hMutex)
		return FALSE;

	swprintf(szStr, VMProtectDecryptStringW(MAPPING_NAME_5), g_szAutoID);
	HANDLE hParamFile = OpenFileMapping(FILE_MAP_ALL_ACCESS , 0, szStr);						// 상태 매핑 창조 실패하면 종료한다
	if(!hParamFile)
	{
#ifndef	_TEST_VERSION_
		return FALSE;
#endif
	}

	if(hParamFile)
	{
		g_pStatusInfo = (CLIENTSTATUS*)MapViewOfFile(hParamFile, FILE_MAP_ALL_ACCESS, 0, 0, sizeof(CLIENTSTATUS));
		ZeroMemory(g_pStatusInfo, sizeof(CLIENTSTATUS));
	}

	InitializeCriticalSection(&g_hStatusSection);

	swprintf(szStr, VMProtectDecryptStringW(EVENT_NAME_15), g_szAutoID);
	g_hStatusEvent = CreateEvent(0, 0, 0, szStr);

	swprintf(szStr, VMProtectDecryptStringW(EVENT_NAME_16), g_szAutoID);
	g_hAnswerEvent = CreateEvent(0, 0, 0, szStr);

	CloseHandle(hParamFile);

	swprintf(szStr, VMProtectDecryptStringW(MAPPING_NAME_2), g_nIndex);
	hParamFile = CreateFileMapping(INVALID_HANDLE_VALUE, NULL, PAGE_READWRITE, 0, sizeof(GAME_MAPPING), szStr);
	if (hParamFile)
		g_pGameMapping = (GAME_MAPPING*)MapViewOfFile(hParamFile, FILE_MAP_ALL_ACCESS, 0, 0, sizeof(GAME_MAPPING));

	if (g_pGameMapping)
	{
		memset(g_pGameMapping, 0, sizeof(GAME_MAPPING));
		wcscpy(g_pGameMapping->szAppPath, g_szAppPath);
		g_pGameMapping->qwServerTick = 0;
	}

	OnAESGenerateKey();

	InitializeCriticalSection(&g_csAddrSection);

	BYTE m_nAddrCount = 0;
	BYTE m_pbAddrInfo[512] = { 0, };

	if (!OnLoginAuto(m_nAddrCount, m_pbAddrInfo))
	{
		DeleteCriticalSection(&g_csAddrSection);
		CloseHandle(hParamFile);
		WSACleanup();
		return FALSE;
	}

	swprintf(szStr, VMProtectDecryptStringW(MUTEX_NAME_2), g_szAutoID);
	hMutex = CreateMutex(0, 0, szStr);

	InitializeCriticalSection(&g_csScheduleTime);

	CDetailDlg dlg;
	dlg.m_nAddrCount = m_nAddrCount;
	memcpy(dlg.m_pbAddrInfo, m_pbAddrInfo, 512);
	m_pMainWnd = &dlg;
	dlg.DoModal();

	DeleteCriticalSection(&g_csScheduleTime);
	DeleteCriticalSection(&g_csAddrSection);
	
	CloseHandle(hMutex);
	CloseHandle(hParamFile);
	
	VMProtectEnd();
	return FALSE;
}
