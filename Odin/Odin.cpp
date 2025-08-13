
// Odin.cpp : Defines the class behaviors for the application.
//

#include "stdafx.h"
#include "Odin.h"
#include "OdinDlg.h"
#include "UpdateDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// COdinApp

BEGIN_MESSAGE_MAP(COdinApp, CWinAppEx)
	ON_COMMAND(ID_HELP, &CWinApp::OnHelp)
END_MESSAGE_MAP()


// COdinApp construction

COdinApp::COdinApp()
{
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
}


// The one and only COdinApp object

COdinApp theApp;


// COdinApp initialization

BOOL COdinApp::InitInstance()
{

	VMProtectBeginUltra("InitInstance");
	INITCOMMONCONTROLSEX InitCtrls;
	
	InitCtrls.dwSize = sizeof(InitCtrls);
	InitCtrls.dwICC = ICC_WIN95_CLASSES;
	InitCommonControlsEx(&InitCtrls);

	CWinAppEx::InitInstance();

	srand((unsigned int)time(NULL));

	AfxEnableControlContainer();

	HANDLE hRunEvent = OpenEvent(EVENT_ALL_ACCESS, 0, VMProtectDecryptStringW(EVENT_NAME_1));
	if(hRunEvent)
	{
		CloseHandle(hRunEvent);
		return FALSE;
	}

	CWinApp *App = AfxGetApp();
	CString strArgs = App->m_lpCmdLine;

	WCHAR szCmdLine[MAX_PATH];
	swprintf(szCmdLine , VMProtectDecryptStringW(L"%s"), strArgs.GetBuffer());

	if(wcsstr(szCmdLine , VMProtectDecryptStringW(L"-update")))
		Sleep(1000);

	GetModuleFileName(GetModuleHandle(NULL), g_szAppPath, MAX_PATH);

	HANDLE hMutex = OpenMutex(MUTEX_ALL_ACCESS, 0, VMProtectDecryptStringW(MUTEX_NAME_3));
	HANDLE hEvent = CreateEvent(0, 0, 0, VMProtectDecryptStringW(EVENT_NAME_18));

	if (!hMutex)
	{
		PROCESS_INFORMATION		pi;
		STARTUPINFO				si;
		WCHAR					szNew[MAX_PATH];
		WCHAR					szSrc[MAX_PATH];

		CreateMutex(0, 0, VMProtectDecryptStringW(MUTEX_NAME_3));

		ZeroMemory(&si, sizeof(STARTUPINFO));
		si.cb = sizeof(STARTUPINFO);

		ZeroMemory(szNew, sizeof(szNew));
		ZeroMemory(szSrc, sizeof(szSrc));

		swprintf(szSrc, VMProtectDecryptStringW(L"%s"), g_szAppPath);

		PathRemoveFileSpec(g_szAppPath);
		DeleteTempFile();

		swprintf(szNew, VMProtectDecryptStringW(L"%s\\HongLong.bin"), g_szAppPath);
//		swprintf(szNew, VMProtectDecryptStringW(L"%s\\%d%d%d%d%d%d%d%d.bin"), g_szAppPath, 
//			rand() % 10, rand() % 10, rand() % 10, rand() % 10, rand() % 10, rand() % 10, rand() % 10, rand() % 10);

		if(IsFileExist(szNew))
			DeleteFile(szNew);

		Sleep(100);

		CopyFile(szSrc, szNew, FALSE);

		Sleep(100);
		swprintf(szSrc, VMProtectDecryptStringW(L"%s"), szNew);
		CreateProcess(szNew, szSrc, 0, 0, 0, 0, 0, 0, &si, &pi);
		CloseHandle(pi.hProcess);
		CloseHandle(pi.hThread);

		WaitForSingleObject(hEvent, INFINITE);
		CloseHandle(hEvent);

		return FALSE;
	}

	PathRemoveFileSpec(g_szAppPath);

	SetEvent(hEvent);
	Sleep(500);

	CloseHandle(hEvent);
	CloseHandle(hMutex);

	hRunEvent = CreateEvent(0, 0, 0, VMProtectDecryptStringW(EVENT_NAME_1));

	WCHAR szLang[MAX_PATH];
	swprintf(szLang, L"%s\\Setting.dat", g_szAppPath);
	//if (GetPrivateProfileInt(L"Lanuage", L"Korean", 0, szLang) == 1)
#ifdef KOREAN_VERSION
	g_wLanguageID = 0x412;
#endif // KOREAN_VERSION
	//g_wLanguageID = 0x412;

	DeleteTempFile();

	DWORD dwServerIP = 0, dwServerPort = 0;
	int nRet = CheckLastVersion(dwServerIP, dwServerPort);

	//if(nRet == 0)
	//{
	//	CUpdateDlg dlg;
	//	dlg.m_dwServerIP = dwServerIP;
	//	dlg.m_dwServerPort = dwServerPort;
	//	m_pMainWnd = &dlg;
	//	dlg.DoModal();
	//}
	//else if(nRet == 1)
	{
		//AfxMessageBox(CString(L"run"));
		hMutex = CreateMutex(NULL, FALSE, VMProtectDecryptStringW(MUTEX_NAME_1));

		COdinDlg dlg;
		m_pMainWnd = &dlg;
		INT_PTR nResponse = dlg.DoModal();

		CloseHandle(hMutex);
	}

	CloseHandle(hRunEvent);

	VMProtectEnd();
	return FALSE;
}
