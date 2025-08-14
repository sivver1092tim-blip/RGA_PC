
// OdinDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Odin.h"
#include "OdinDlg.h"
#include "UserDlg.h"
#include "VMAttachEngine.h"
#include <Windows.h>
#include "dbgSerial.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// COdinDlg dialog
Align_Info* g_pAlignInfo = NULL;

DWORD RunThread(COdinDlg *pDlg);
DWORD StartThread(BOOL bAll);
DWORD StopThread(BOOL bAll);
DWORD SnapThread(COdinDlg* pDlg);

COdinDlg::COdinDlg(CWnd* pParent /*=NULL*/)
	: CDialog(COdinDlg::IDD, pParent)
	, m_dwStartTID(0)
	, m_dwStopTID(0)
	, m_nAlignMode(1)
	, m_bAlignMode(FALSE)
	, m_bDaumKeep(FALSE)
	, m_bKorean(FALSE)
	, m_strDia(_T(""))
	, m_bEnableWait(TRUE)
	, m_nMinDelay(1)
	, m_nMaxDelay(5)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);

	for (int i = 0; i < 100; i++)
		m_nClientDia[i] = 0;
}

void COdinDlg::DoDataExchange(CDataExchange* pDX)
{
	DDX_Control(pDX, IDC_LIST1, m_lstUser);
	
	DDX_CBIndex(pDX, IDC_COMBO1, m_nAlignMode);
	DDX_Control(pDX, IDC_COMBO1, m_cbAlignMode);
	
	DDX_Check(pDX, IDC_CHECK1, m_bAlignMode);
	DDX_Check(pDX, IDC_CHECK2, m_bDaumKeep);
	DDX_Check(pDX, IDC_CHECK3, m_bKorean);
	DDX_Check(pDX, IDC_CHECK4, m_bEnableWait);
	
	DDX_Text(pDX, IDC_EDIT1, m_nMinDelay);
	DDX_Text(pDX, IDC_EDIT2, m_nMaxDelay);

	CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(COdinDlg, CDialog)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
	ON_BN_CLICKED(IDC_BUTTON1, &COdinDlg::OnAddUser)
	ON_BN_CLICKED(IDC_BUTTON2, &COdinDlg::OnDelUser)
	ON_BN_CLICKED(IDC_BUTTON4, &COdinDlg::OnAutoStart)
	ON_BN_CLICKED(IDC_BUTTON5, &COdinDlg::OnAutoStop)
	ON_BN_CLICKED(IDC_BUTTON6, &COdinDlg::OnStartAll)
	ON_BN_CLICKED(IDC_BUTTON7, &COdinDlg::OnStopAll)
	ON_BN_CLICKED(IDOK, &COdinDlg::OnStartUser)
	ON_BN_CLICKED(IDCANCEL, &COdinDlg::OnStopUser)
	ON_BN_CLICKED(IDC_BUTTON8, &COdinDlg::OnExitProgram)
	ON_NOTIFY(NM_DBLCLK, IDC_LIST1, &COdinDlg::OnChangeSetting)
	ON_WM_CLOSE()
	ON_WM_TIMER()
	ON_BN_CLICKED(IDC_BUTTON3, &COdinDlg::OnBrowse)
	ON_MESSAGE(WM_SET_ITEMS, &COdinDlg::PoPulateComboList)
	ON_BN_CLICKED(IDC_CHECK1, &COdinDlg::OnEnableAlign)
	ON_CBN_SELCHANGE(IDC_COMBO1, &COdinDlg::OnChangeAlign)
	ON_BN_CLICKED(IDC_CHECK2, &COdinDlg::OnDaumKeep)
	ON_NOTIFY(NM_CUSTOMDRAW, IDC_LIST1, &COdinDlg::OnNMCustomdrawList1)
	ON_BN_CLICKED(IDC_BUTTON9, &COdinDlg::OnTestBtn)
	ON_BN_CLICKED(IDC_CHECK4, &COdinDlg::OnEnableWait)
END_MESSAGE_MAP()


// COdinDlg message handlers

BOOL COdinDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	g_pAppDlg = this;

	SetControlText();

	CString strLabel;
	m_lstUser.SetExtendedStyle(m_lstUser.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);
	m_lstUser.InsertColumn(0, L"No", LVCFMT_LEFT, 25);

	strLabel.LoadString(NULL, IDS_ID, g_wLanguageID);
	m_lstUser.InsertColumn(1, strLabel.GetBuffer(), LVCFMT_LEFT, 100);			// 오토 아이디

	strLabel.LoadString(NULL, IDS_GAMEID, g_wLanguageID);
	m_lstUser.InsertColumn(2, strLabel.GetBuffer(), LVCFMT_LEFT, 100);			// 게임 계정

	strLabel.LoadString(NULL, IDS_GAMEPW, g_wLanguageID);
	m_lstUser.InsertColumn(3, strLabel.GetBuffer(), LVCFMT_LEFT, 0);			// 게임 비번

	strLabel.LoadString(NULL, IDS_GAMESERVER, g_wLanguageID);
	m_lstUser.InsertColumn(4, strLabel.GetBuffer(), LVCFMT_LEFT, 80);			// 게임 서버
	m_lstUser.InsertColumn(5, L"GameServer", LVCFMT_LEFT, 0);

	strLabel.LoadString(NULL, IDS_EXPIREDAY, g_wLanguageID);
	m_lstUser.InsertColumn(6, strLabel.GetBuffer(), LVCFMT_LEFT, 90);			// 마감 날자

	strLabel.LoadString(NULL, IDS_GAMECHAR, g_wLanguageID);
	m_lstUser.InsertColumn(7, strLabel.GetBuffer(), LVCFMT_LEFT, 0);			// 현재 접속된 캐릭

	strLabel.LoadString(NULL, IDS_STATUS, g_wLanguageID);
	m_lstUser.InsertColumn(8, strLabel.GetBuffer(), LVCFMT_LEFT, 295);			// 로그 (상태)

	m_lstUser.InsertColumn(9, L"AutoRun", LVCFMT_LEFT, 0);

	strLabel.LoadString(NULL, IDS_LEVEL, g_wLanguageID);						// 레벨
	m_lstUser.InsertColumn(10, strLabel.GetBuffer(), LVCFMT_LEFT, 45);

	strLabel.LoadString(NULL, IDS_CHAR, g_wLanguageID);							// 캐릭
	m_lstUser.InsertColumn(11, strLabel.GetBuffer(), LVCFMT_LEFT, 170);

	strLabel.LoadString(NULL, IDS_REGION, g_wLanguageID);						// 지역
	m_lstUser.InsertColumn(12, strLabel.GetBuffer(), LVCFMT_LEFT, 170);

	strLabel.LoadString(NULL, IDS_GOLD, g_wLanguageID);							// 골드
	m_lstUser.InsertColumn(13, strLabel.GetBuffer(), LVCFMT_LEFT, 85);

	strLabel.LoadString(NULL, IDS_DIAMOND, g_wLanguageID);						// 다이아
	m_lstUser.InsertColumn(14, strLabel.GetBuffer(), LVCFMT_LEFT, 85);

	m_lstUser.InsertColumn(15, L"Color", LVCFMT_LEFT, 0);						// 기간 만료 상태에 따라 표시할 색갈
	m_lstUser.InsertColumn(16, L"ExpDate", LVCFMT_LEFT, 0);						// 만료되는 기간

	m_lstUser.SetReadOnlyColumns(0);
	m_lstUser.SetReadOnlyColumns(1);
	m_lstUser.SetReadOnlyColumns(2);
	m_lstUser.SetReadOnlyColumns(3);
	m_lstUser.SetReadOnlyColumns(4);
	m_lstUser.SetReadOnlyColumns(5);
	m_lstUser.SetReadOnlyColumns(6);
	m_lstUser.SetReadOnlyColumns(7);
	m_lstUser.SetReadOnlyColumns(8);
	m_lstUser.SetReadOnlyColumns(9);
	m_lstUser.SetReadOnlyColumns(10);
	m_lstUser.SetReadOnlyColumns(11);
	m_lstUser.SetReadOnlyColumns(12);
	m_lstUser.SetReadOnlyColumns(13);
	m_lstUser.SetReadOnlyColumns(14);
	m_lstUser.SetReadOnlyColumns(15);

	m_lstUser.SetDblClickEvent(FALSE);
	m_lstUser.EnableVScroll();

	HANDLE hParam = CreateFileMapping(INVALID_HANDLE_VALUE, NULL, PAGE_READWRITE, 0, sizeof(Align_Info), MAPPING_NAME_4);
	if (hParam)
	{
		g_pAlignInfo = (Align_Info*)MapViewOfFile(hParam, FILE_MAP_ALL_ACCESS, 0, 0, sizeof(Align_Info));
		memset(g_pAlignInfo, 0, sizeof(Align_Info));
	}

	LoadSetting();
	ChangeSetting();

	m_strDia.LoadString(NULL, IDS_TOTALDIA, g_wLanguageID);
	
	WCHAR szStr[MAX_PATH];

	strLabel.LoadString(NULL, IDS_GAMECAPTION, g_wLanguageID);
	swprintf(szStr, strLabel.GetBuffer(), g_dwPatchVersion);
	SetWindowText(szStr);

	InitializeCriticalSection(&g_csArraySection);
	InitializeCriticalSection(&g_csRunSection);

	VMProtectBeginUltra("OnInitDialog");

	g_nArrayCount = 0;
	memset(g_pbArray, 0, 100 * sizeof(BYTE));

	CreateThread(0, 0, (LPTHREAD_START_ROUTINE)RunThread, (LPVOID)this, 0, 0);
	CreateRemoteThreadEx(INVALID_HANDLE_VALUE, 0, 0, (LPTHREAD_START_ROUTINE)SnapThread, (LPVOID)this, 0 & 0x10004, 0, 0);

	SetTimer(0x10300427, 60 * 1000, NULL);

	VMProtectEnd();
	return TRUE;
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void COdinDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR COdinDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


void COdinDlg::LoadSetting()
{
	WCHAR szPath[MAX_PATH], szKey[MAX_PATH], szVal[MAX_PATH];
	swprintf(szPath, L"%s\\Setting.dat", g_szAppPath);

	m_lstUser.DeleteAllItems();

	int nCount = GetPrivateProfileInt(L"AccountInfo", L"Count", 0, szPath);
	for(int i = 0; i < nCount; i++)
	{
		swprintf(szVal, L"%d", i + 1);
		m_lstUser.InsertItem(i, szVal);

		swprintf(szKey, L"AUTOID_%d", i + 1);
		GetPrivateProfileString(L"AccountInfo", szKey, L"", szVal, MAX_PATH, szPath);
		m_lstUser.SetItemText(i, 1, szVal);

		swprintf(szKey, L"GAMEID_%d", i + 1);
		GetPrivateProfileString(L"AccountInfo", szKey, L"", szVal, MAX_PATH, szPath);
		m_lstUser.SetItemText(i, 2, szVal);

		swprintf(szKey, L"GAMEPW_%d", i + 1);
		GetPrivateProfileString(L"AccountInfo", szKey, L"", szVal, MAX_PATH, szPath);
		m_lstUser.SetItemText(i, 3, szVal);

		swprintf(szKey, L"GAMESERVER_%d", i + 1);
		int nServer = GetPrivateProfileInt(L"AccountInfo", szKey, 0, szPath);

		swprintf(szKey, L"%s%02d", g_szServerName[(nServer / 9) % MAX_SERVER], (nServer % 9) + 1);
		m_lstUser.SetItemText(i, 4, szKey);

		swprintf(szKey, L"%d", nServer);
		m_lstUser.SetItemText(i, 5, szKey);

		m_lstUser.SetItemText(i, 6, L"");
		m_lstUser.SetItemText(i, 7, L"");
		m_lstUser.SetItemText(i, 8, L"");

		m_lstUser.SetItemText(i, 9, L"0");

		m_lstUser.SetItemData(i, 0);
	}

	m_bAlignMode = GetPrivateProfileInt(L"Align", L"ModeEnable", 0, szPath);
	m_nAlignMode = GetPrivateProfileInt(L"Align", L"ModeValue", 1, szPath);

	if (g_pAlignInfo)
	{
		g_pAlignInfo->bAlign = m_bAlignMode;
		g_pAlignInfo->nAlign = m_nAlignMode;
	}

	m_bDaumKeep = GetPrivateProfileInt(L"Daum", L"Keep", 0, szPath);
	m_bKorean = GetPrivateProfileInt(L"Lanuage", L"Korean", 0, szPath);

	m_bEnableWait = GetPrivateProfileInt(L"WaitDelay", L"Enable", 1, szPath);
	m_nMinDelay = GetPrivateProfileInt(L"WaitDelay", L"MinValue", 1, szPath);
	m_nMaxDelay = GetPrivateProfileInt(L"WaitDelay", L"MaxValue", 5, szPath);

	UpdateData(FALSE);

	OnEnableWait();
}


int GetServerIndex(WCHAR* szServer)
{
	WCHAR szName[MAX_NAME];
	for (int i = 0; i < MAX_SERVER; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			swprintf(szName, L"%s%02d", g_szServerName[i], j + 1);
			if (!wcscmp(szServer, szName))
				return i * 9 + j;
		}
	}

	return 0;
}


void COdinDlg::SaveSetting()
{
	WCHAR szPath[MAX_PATH], szKey[MAX_PATH], szVal[MAX_PATH];
	swprintf(szPath, L"%s\\Setting.dat", g_szAppPath);

	UpdateData();

	int nCount = m_lstUser.GetItemCount();

	swprintf(szVal, L"%d", nCount);
	WritePrivateProfileString(L"AccountInfo", L"Count", szVal, szPath);

	for(int i = 0; i < nCount; i++)
	{
		swprintf(szKey, L"AUTOID_%d", i + 1);
		WritePrivateProfileString(L"AccountInfo", szKey, m_lstUser.GetItemText(i, 1).GetBuffer(), szPath);

		swprintf(szKey, L"GAMEID_%d", i + 1);
		WritePrivateProfileString(L"AccountInfo", szKey, m_lstUser.GetItemText(i, 2).GetBuffer(), szPath);

		swprintf(szKey, L"GAMEPW_%d", i + 1);
		WritePrivateProfileString(L"AccountInfo", szKey, m_lstUser.GetItemText(i, 3).GetBuffer(), szPath);

		int nServer = GetServerIndex(m_lstUser.GetItemText(i, 4).GetBuffer());
		swprintf(szKey, L"GAMESERVER_%d", i + 1);
		swprintf(szVal, L"%d", nServer);
		WritePrivateProfileString(L"AccountInfo", szKey, szVal, szPath);
	}

	swprintf(szVal, L"%d", m_bAlignMode);
	WritePrivateProfileString(L"Align", L"ModeEnable", szVal, szPath);

	swprintf(szVal, L"%d", m_nAlignMode);
	WritePrivateProfileString(L"Align", L"ModeValue", szVal, szPath);

	swprintf(szVal, L"%d", m_bDaumKeep);
	WritePrivateProfileString(L"Daum", L"Keep", szVal, szPath);

	swprintf(szVal, L"%d", m_bKorean);
	WritePrivateProfileString(L"Lanuage", L"Korean", szVal, szPath);

	swprintf(szVal, L"%d", m_bEnableWait);
	WritePrivateProfileString(L"WaitDelay", L"Enable", szVal, szPath);

	swprintf(szVal, L"%d", m_nMinDelay);
	WritePrivateProfileString(L"WaitDelay", L"MinValue", szVal, szPath);

	swprintf(szVal, L"%d", m_nMaxDelay);
	WritePrivateProfileString(L"WaitDelay", L"MaxValue", szVal, szPath);
}


void COdinDlg::CloseSetting()
{
	OnStopAll();

	WCHAR szStr[MAX_PATH];
	for(int i = 0; i < m_lstUser.GetItemCount(); i++)
	{
		DWORD dwTID = (DWORD)m_lstUser.GetItemData(i);
		if(dwTID)
		{
			HANDLE hThread = OpenThread(THREAD_ALL_ACCESS, 0, dwTID);
			if(hThread)
			{
				TerminateThread(hThread, 0);
				CloseHandle(hThread);
			}

			m_lstUser.SetItemText(i, 7, L"");
			m_lstUser.SetItemText(i, 8, L"");

			m_lstUser.SetItemData(i, 0);
		}

		swprintf(szStr, VMProtectDecryptStringW(EVENT_NAME_9), m_lstUser.GetItemText(i, 1).GetBuffer());
		HANDLE hEvent = CreateEvent(0, 0, 0, szStr);
		if(hEvent)
		{
			SetEvent(hEvent);
			CloseHandle(hEvent);
		}
	}

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
				wcsupr(pe32.szExeFile);
				if(wcsstr(pe32.szExeFile, L"DAUM") && wcsstr(pe32.szExeFile, L".BIN"))
				{
					HANDLE hProcess = OpenProcess(MAXIMUM_ALLOWED, 0, pe32.th32ProcessID);
					if (hProcess)
					{
						TerminateProcess(hProcess, 0);
						CloseHandle(hProcess);
					}
				}
			} while (Process32Next(hProcessSnap, &pe32));
		}

		CloseHandle(hProcessSnap);
	}

	SaveSetting();
}


BOOL COdinDlg::PreTranslateMessage(MSG* pMsg)
{
	if (pMsg->wParam == VK_RETURN || pMsg->wParam == VK_ESCAPE)
		return TRUE;

	return CDialog::PreTranslateMessage(pMsg);
}



DWORD RunThread(COdinDlg *pDlg)
{
	WCHAR szStr[MAX_PATH];

	// ------- 이미 실행된 dat파일들 종료 --------- //

	swprintf(szStr, VMProtectDecryptStringW(L"%s\\Run"), g_szAppPath);

	HANDLE hHandle = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
	if(hHandle)
	{
		PROCESSENTRY32 pe32 = {0,};
		pe32.dwSize = sizeof(PROCESSENTRY32);

		if (Process32First(hHandle, &pe32))
		{
			do
			{
				int nLen = (int)wcslen(pe32.szExeFile);
				if(nLen > 4 && !wcsicmp(pe32.szExeFile + nLen - 4, L".dat"))
				{
					HANDLE hProcess = OpenProcess(MAXIMUM_ALLOWED, 0, pe32.th32ProcessID);
					if(hProcess)
					{
						WCHAR szPath[MAX_PATH] = {0, };
						GetModuleFileNameEx(hProcess, NULL, szPath, MAX_PATH);

						PathRemoveFileSpec(szPath);

						if(!wcsicmp(szPath, szStr))
							TerminateProcess(hProcess, 0);

						CloseHandle(hProcess);
					}
				}
			}
			while (Process32Next(hHandle, &pe32));
		}

		CloseHandle (hHandle);
	}

	while(1)
	{
		Sleep(100);

		int nIndex = -1;

		EnterCriticalSection(&g_csArraySection);

		if(g_nArrayCount > 0)
		{
			// ------------------ dat 파일이 실행되어있는가 확인을 진행한다 --------------- //

			for(int i = 0; i < g_nArrayCount; i++)
			{
				swprintf(szStr, VMProtectDecryptStringW(EVENT_NAME_2), pDlg->m_lstUser.GetItemText(g_pbArray[i], 1).GetBuffer());
				HANDLE hEvent = OpenEvent(EVENT_ALL_ACCESS, 0, szStr);			// 실행이 되어있는 상태이면
				if(hEvent)
				{
					CloseHandle(hEvent);
					continue;
				}

				// 실행이 되어있지 않으니 dat파일을 실행한다
				nIndex = g_pbArray[i];
				LeaveCriticalSection(&g_csArraySection);

				goto RunDat;
			}

			nIndex = g_pbArray[0];
			g_nArrayCount --;

			if(g_nArrayCount > 0)
				memcpy(&g_pbArray[0], &g_pbArray[1], g_nArrayCount);
		}

		LeaveCriticalSection(&g_csArraySection);

		InjectDevice();

		if(nIndex != -1 && _wtoi(g_pAppDlg->m_lstUser.GetItemText(nIndex, 9).GetBuffer()))
		{
			if(pDlg->m_lstUser.GetItemData(nIndex))								// 이미 실행한 상태이면
			{
				swprintf(szStr, VMProtectDecryptStringW(EVENT_NAME_3), pDlg->m_lstUser.GetItemText(nIndex, 1).GetBuffer());
				HANDLE hEvent = OpenEvent(EVENT_ALL_ACCESS, 0, szStr);			// 게임 스레드가 살아있는 상태면
				if (hEvent)
				{
					CloseHandle(hEvent);
					continue;
				}

				swprintf(szStr, VMProtectDecryptStringW(EVENT_NAME_8), pDlg->m_lstUser.GetItemText(nIndex, 1).GetBuffer());
				HANDLE hGameEvent = CreateEvent(0, 0, 0, szStr);
				if(hGameEvent)
				{
					SetEvent(hGameEvent);
					CloseHandle(hGameEvent);
				}
			}
		}

		continue;

RunDat:

		if(nIndex != -1 && pDlg->m_lstUser.GetItemData(nIndex) == 0)
		{
			DWORD dwTID = 0;
			pDlg->m_lstUser.SetItemText(nIndex, 7, L"");
			pDlg->m_lstUser.SetItemText(nIndex, 8, L"");

			CreateThread(0, 0, (LPTHREAD_START_ROUTINE)TraceThread, (LPVOID)nIndex, 0, &dwTID);
			pDlg->m_lstUser.SetItemData(nIndex, dwTID);

			swprintf(szStr, VMProtectDecryptStringW(EVENT_NAME_2), pDlg->m_lstUser.GetItemText(nIndex, 1).GetBuffer());

			while(1)
			{
				HANDLE hEvent = OpenEvent(EVENT_ALL_ACCESS, 0, szStr);
				if(hEvent)
				{
					CloseHandle(hEvent);
					break;
				}

				if(pDlg->m_lstUser.GetItemData(nIndex) == 0)
					break;

				Sleep(100);
			}
		}
	}

	return 0;
}



void COdinDlg::OnAddUser()
{
	if(m_lstUser.GetItemCount() >= 100)
		return;

	CUserDlg m_UserInfo;

	if(m_UserInfo.DoModal() != IDOK)
		return;

	for(int i = 0; i < m_lstUser.GetItemCount(); i++)
	{
		if(!wcsicmp(m_lstUser.GetItemText(i, 1).GetBuffer(), m_UserInfo.m_szAutoID.GetBuffer()))
			return;

		if(!wcsicmp(m_lstUser.GetItemText(i, 2).GetBuffer(), m_UserInfo.m_szGameID.GetBuffer()))
			return;
	}

	WCHAR szStr[MAX_PATH];
	swprintf(szStr, L"%d", m_lstUser.GetItemCount() + 1);

	m_lstUser.InsertItem(m_lstUser.GetItemCount(), szStr);
	m_lstUser.SetItemText(m_lstUser.GetItemCount() - 1, 1, m_UserInfo.m_szAutoID.GetBuffer());
	m_lstUser.SetItemText(m_lstUser.GetItemCount() - 1, 2, m_UserInfo.m_szGameID.GetBuffer());
	m_lstUser.SetItemText(m_lstUser.GetItemCount() - 1, 3, m_UserInfo.m_szGamePW.GetBuffer());
	
	swprintf(szStr, L"%s%02d", g_szServerName[(m_UserInfo.m_nGameServer / 9) % MAX_SERVER], (m_UserInfo.m_nGameServer % 9) + 1);
	m_lstUser.SetItemText(m_lstUser.GetItemCount() - 1, 4, szStr);

	swprintf(szStr, L"%d", m_UserInfo.m_nGameServer);
	m_lstUser.SetItemText(m_lstUser.GetItemCount() - 1, 5, szStr);

	m_lstUser.SetItemText(m_lstUser.GetItemCount() - 1, 7, L"");
	m_lstUser.SetItemText(m_lstUser.GetItemCount() - 1, 8, L"");
	m_lstUser.SetItemText(m_lstUser.GetItemCount() - 1, 9, L"0");
	m_lstUser.SetItemData(m_lstUser.GetItemCount() - 1, 0);
}



void COdinDlg::OnDelUser()
{
	POSITION Pos = m_lstUser.GetFirstSelectedItemPosition();
	if(Pos == NULL)
		return;

	CString strLabel;
	strLabel.LoadString(NULL, IDS_DELUSER, g_wLanguageID);

	CString strAlert;
	strAlert.LoadString(NULL, IDS_ALERT, g_wLanguageID);

	if(MessageBox(strLabel.GetBuffer(), strAlert.GetBuffer(), MB_YESNO) != IDYES)
		return;

	WCHAR szStr[MAX_PATH];
	int *pnIndex = new int[m_lstUser.GetItemCount()];
	int nCount = 0;
	while(Pos)
	{
		int nIndex = m_lstUser.GetNextSelectedItem(Pos);

		swprintf(szStr, VMProtectDecryptStringW(EVENT_NAME_9), m_lstUser.GetItemText(nIndex, 1).GetBuffer());
		HANDLE hEvent = CreateEvent(0, 0, 0, szStr);
		if(hEvent)
		{
			SetEvent(hEvent);
			CloseHandle(hEvent);
		}

		swprintf(szStr, VMProtectDecryptStringW(MUTEX_NAME_2), m_lstUser.GetItemText(nIndex, 1).GetBuffer());
		hEvent = OpenMutex(MUTEX_ALL_ACCESS, 0, szStr);
		if(!hEvent)
		{
			DWORD dwTID = (DWORD)m_lstUser.GetItemData(nIndex);
			if(dwTID)
			{
				HANDLE hThread = OpenThread(THREAD_ALL_ACCESS, 0, dwTID);
				if(hThread)
				{
					TerminateThread(hThread, 0);
					CloseHandle(hThread);
				}

				m_lstUser.SetItemData(nIndex, 0);
			}
		}

		CloseHandle(hEvent);

		if(m_lstUser.GetItemData(nIndex) != 0)
		{
			delete[] pnIndex;

			strLabel.LoadString(NULL, IDS_CURRUNNING, g_wLanguageID);
			MessageBox(strLabel.GetBuffer(), strAlert.GetBuffer());
			return;
		}

		pnIndex[nCount++] = nIndex;
	}

	int nRemoveCount = 0;
	for(int i = 0; i < nCount; i++)
	{
		m_lstUser.DeleteItem(pnIndex[i] - nRemoveCount);
		nRemoveCount++;
	}

	for(int i = 0; i < m_lstUser.GetItemCount(); i++)
	{
		swprintf(szStr, L"%d", i + 1);
		m_lstUser.SetItemText(i, 0, szStr);
	}
}



void COdinDlg::OnAutoStart()
{
	POSITION Pos = m_lstUser.GetFirstSelectedItemPosition();
	if(Pos == NULL)
		return;

	WCHAR szStr[MAX_PATH];
	while(Pos)
	{
		int nIndex = m_lstUser.GetNextSelectedItem(Pos);

		swprintf(szStr, VMProtectDecryptStringW(MUTEX_NAME_2), m_lstUser.GetItemText(nIndex, 1).GetBuffer());

		HANDLE hMutex = OpenMutex(MUTEX_ALL_ACCESS, 0, szStr);		// 이미 실행된 상태인가 확인
		if(!hMutex)
			continue;

		swprintf(szStr, VMProtectDecryptStringW(EVENT_NAME_4), m_lstUser.GetItemText(nIndex, 1).GetBuffer());	// 오토 시작 사건 보내기
		HANDLE hEvent = CreateEvent(0, 0, 0, szStr);
		if(hEvent)
			SetEvent(hEvent);

		CloseHandle(hEvent);
		CloseHandle(hMutex);
	}
}



void COdinDlg::OnAutoStop()
{
	POSITION Pos = m_lstUser.GetFirstSelectedItemPosition();
	if(Pos == NULL)
		return;

	WCHAR szStr[MAX_PATH];
	while(Pos)
	{
		int nIndex = m_lstUser.GetNextSelectedItem(Pos);

		swprintf(szStr, VMProtectDecryptStringW(MUTEX_NAME_2), m_lstUser.GetItemText(nIndex, 1).GetBuffer());

		HANDLE hMutex = OpenMutex(MUTEX_ALL_ACCESS, 0, szStr);		// 이미 실행된 상태인가 확인
		if(!hMutex)
			continue;

		swprintf(szStr, VMProtectDecryptStringW(EVENT_NAME_5), m_lstUser.GetItemText(nIndex, 1).GetBuffer());	// 오토 중지 사건 보내기
		HANDLE hEvent = CreateEvent(0, 0, 0, szStr);
		if(hEvent)
			SetEvent(hEvent);

		CloseHandle(hEvent);
		CloseHandle(hMutex);
	}
}



void COdinDlg::OnStartAll()
{
	SaveSetting();

	if(m_dwStartTID == 0)
	{
		m_dwStartTID = 0;
		CreateThread(0,  0, (LPTHREAD_START_ROUTINE)StartThread, (LPVOID)TRUE, 0, &m_dwStartTID);
	}
}


void COdinDlg::OnStopAll()
{
	if(m_dwStopTID == 0)
	{
		m_dwStopTID = 0;
		CreateThread(0, 0, (LPTHREAD_START_ROUTINE)StopThread, (LPVOID)TRUE, 0, &m_dwStopTID);
	}
}



void COdinDlg::OnStartUser()
{
	SaveSetting();

	if(m_dwStartTID == 0)
	{
		m_dwStartTID = 0;
		CreateThread(0,  0, (LPTHREAD_START_ROUTINE)StartThread, (LPVOID)FALSE, 0, &m_dwStartTID);
	}
}



void COdinDlg::OnStopUser()
{
	if(m_dwStopTID == 0)
	{
		m_dwStopTID = 0;
		CreateThread(0, 0, (LPTHREAD_START_ROUTINE)StopThread, (LPVOID)FALSE, 0, &m_dwStopTID);
	}
}



void COdinDlg::OnExitProgram()
{
	CString strLabel;
	strLabel.LoadString(NULL, IDS_REALLYEXIT, g_wLanguageID);

	CString strAlert;
	strAlert.LoadString(NULL, IDS_ALERT, g_wLanguageID);

	if(MessageBox(strLabel.GetBuffer(), strAlert.GetBuffer(), MB_YESNO) != IDYES)
		return;

	CloseSetting();
	OnOK();
}


DWORD StartThread(BOOL bAll)
{
	if(bAll)
	{
		EnterCriticalSection(&g_csArraySection);
		for(int i = 0; i < g_pAppDlg->m_lstUser.GetItemCount(); i++)
		{
			g_pAppDlg->m_lstUser.SetItemText(i, 9, L"1");

			BOOL bExist = FALSE;
			for(int j = 0; j < g_nArrayCount; j++)
			{
				if(g_pbArray[j] == i)
				{
					bExist = TRUE;
					break;
				}
			}

			if(!bExist && g_nArrayCount < 100)
				g_pbArray[g_nArrayCount++] = i;
		}

		LeaveCriticalSection(&g_csArraySection);
	}
	else
	{
		EnterCriticalSection(&g_csArraySection);
		POSITION Pos = g_pAppDlg->m_lstUser.GetFirstSelectedItemPosition();
		while(Pos)
		{
			int nIndex = g_pAppDlg->m_lstUser.GetNextSelectedItem(Pos);
			g_pAppDlg->m_lstUser.SetItemText(nIndex, 9, L"1");

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
		}
		LeaveCriticalSection(&g_csArraySection);
	}

	g_pAppDlg->m_dwStartTID = 0;
	return 0;
}


DWORD StopThread(BOOL bAll)
{
	WCHAR szStr[MAX_PATH];

	if(bAll)
	{
		EnterCriticalSection(&g_csArraySection);
		g_nArrayCount = 0;
		memset(g_pbArray, 0, 100 * sizeof(BYTE));
		LeaveCriticalSection(&g_csArraySection);

		for(int i = 0; i < g_pAppDlg->m_lstUser.GetItemCount(); i++)
		{
			swprintf(szStr, VMProtectDecryptStringW(EVENT_NAME_6), g_pAppDlg->m_lstUser.GetItemText(i, 1).GetBuffer());
			HANDLE hEvent = CreateEvent(0, 0, 0, szStr);
			if(hEvent)
			{
				SetEvent(hEvent);
				CloseHandle(hEvent);
			}

			g_pAppDlg->m_lstUser.SetItemText(i, 7, L"");
			g_pAppDlg->m_lstUser.SetItemText(i, 8, L"");
			g_pAppDlg->m_lstUser.SetItemText(i, 9, L"0");

			Sleep(500);		// 1초 대기 준다
		}
	}
	else
	{
		POSITION Pos = g_pAppDlg->m_lstUser.GetFirstSelectedItemPosition();
		while(Pos)
		{
			int nIndex = g_pAppDlg->m_lstUser.GetNextSelectedItem(Pos);

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

			swprintf(szStr, VMProtectDecryptStringW(EVENT_NAME_6), g_pAppDlg->m_lstUser.GetItemText(nIndex, 1).GetBuffer());
			HANDLE hEvent = CreateEvent(0, 0, 0, szStr);
			if(hEvent)
			{
				SetEvent(hEvent);
				CloseHandle(hEvent);
			}

			g_pAppDlg->m_lstUser.SetItemText(nIndex, 7,  L"");
			g_pAppDlg->m_lstUser.SetItemText(nIndex, 8,  L"");
			g_pAppDlg->m_lstUser.SetItemText(nIndex, 9,  L"0");
		}
	}

	g_pAppDlg->m_dwStopTID = 0;
	return 0;
}


void COdinDlg::OnChangeSetting(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMITEMACTIVATE pNMItemActivate = reinterpret_cast<LPNMITEMACTIVATE>(pNMHDR);
	if(pNMItemActivate->iItem < 0)
		return;

	WCHAR szStr[MAX_PATH];
	
	if (pNMItemActivate->iSubItem <= 3)				// 아이디 두번 클릭한 경우 수정창 나오게 하자
	{
		CUserDlg pDlg;

		pDlg.m_szAutoID = m_lstUser.GetItemText(pNMItemActivate->iItem, 1);
		pDlg.m_szGameID = m_lstUser.GetItemText(pNMItemActivate->iItem, 2);
		pDlg.m_szGamePW = m_lstUser.GetItemText(pNMItemActivate->iItem, 3);
		pDlg.m_nGameServer = _wtoi(m_lstUser.GetItemText(pNMItemActivate->iItem, 5));

		if (pDlg.DoModal() != IDOK)
			return;

		m_lstUser.SetItemText(pNMItemActivate->iItem, 1, pDlg.m_szAutoID.GetBuffer());
		m_lstUser.SetItemText(pNMItemActivate->iItem, 2, pDlg.m_szGameID.GetBuffer());
		m_lstUser.SetItemText(pNMItemActivate->iItem, 3, pDlg.m_szGamePW.GetBuffer());

		swprintf(szStr, L"%s%02d", g_szServerName[(pDlg.m_nGameServer / 9) % MAX_SERVER], (pDlg.m_nGameServer % 9) + 1);
		m_lstUser.SetItemText(pNMItemActivate->iItem, 4, szStr);

		swprintf(szStr, L"%d", pDlg.m_nGameServer);
		m_lstUser.SetItemText(pNMItemActivate->iItem, 5, szStr);

		SaveSetting();
	}
	else
	{
		if (m_lstUser.GetItemData(pNMItemActivate->iItem) == 0)			// 만약 실행되지 않은 상태이면 실행한다
		{
			SaveSetting();

			DWORD dwTID = 0;

			m_lstUser.SetItemText(pNMItemActivate->iItem, 7, L"");
			m_lstUser.SetItemText(pNMItemActivate->iItem, 8, L"");
			m_lstUser.SetItemText(pNMItemActivate->iItem, 9, L"0");

			CreateThread(0, 0, (LPTHREAD_START_ROUTINE)TraceThread, (LPVOID)pNMItemActivate->iItem, 0, &dwTID);
			m_lstUser.SetItemData(pNMItemActivate->iItem, dwTID);

			return;
		}

		swprintf(szStr, VMProtectDecryptStringW(EVENT_NAME_7), m_lstUser.GetItemText(pNMItemActivate->iItem, 1).GetBuffer());
		HANDLE hEvent = CreateEvent(0, 0, 0, szStr);
		if (hEvent)
		{
			SetEvent(hEvent);
			CloseHandle(hEvent);
		}
	}

	*pResult = 0;
}



void COdinDlg::OnClose()
{
	CloseSetting();

	CDialog::OnClose();
}


BYTE g_bAttachedGhost = 0;
__inline void LoadZombieDll()
{
	if (g_bAttachedGhost)
		return;

	g_bAttachedGhost = 1;

	HMODULE hMod = AfxGetInstanceHandle();
	HRSRC hRSrc = FindResource(hMod, MAKEINTRESOURCE(IDR_ZOMBIE), RT_RCDATA);
	if (!hRSrc)
		return;

	int nLen = SizeofResource(hMod, hRSrc);
	HGLOBAL hGlobal = LoadResource(hMod, hRSrc);
	if (!hGlobal)
		return;

	BYTE *pbBuffer = (BYTE*)LockResource(hGlobal);
	if (!pbBuffer)
		return;

	DWORD dwProcess[1024], cbNeeded;
	if (EnumProcesses(dwProcess, sizeof(dwProcess), &cbNeeded))
	{
		for (int i = 0; i < cbNeeded / sizeof(DWORD); i++)
		{
			if (dwProcess[i] != 0)
			{
				HANDLE hProcess = OpenProcess(PROCESS_ALL_ACCESS, 0, dwProcess[i]);
				if (hProcess)
				{
					HMODULE hMod;
					DWORD dwNeeded;
					if (EnumProcessModules(hProcess, &hMod, sizeof(hMod), &dwNeeded))
					{
						TCHAR szProcess[MAX_PATH] = _T("");
						GetModuleBaseName(hProcess, hMod, szProcess, sizeof(szProcess) / sizeof(TCHAR));
						wcsupr(szProcess);
						
						//if (wcsstr(szProcess, L"CTFMON.EXE") || wcsstr(szProcess, L"DWM.EXE") || wcsstr(szProcess, L"SIHOST.EXE"))
						if(wcsstr(szProcess, L"EXPLORER.EXE"))
						{
							if (LoadRemoteLibraryR(hProcess, pbBuffer, nLen, 0))
							{
								CloseHandle(hProcess);
								return;
							}
						}
					}
					
					CloseHandle(hProcess);
				}
			}
		}
	}
}


__inline BOOL IsDoubtableWindow(WCHAR* szWindow)
{
	if (szWindow)
		wcsupr(szWindow);

	if (wcsstr(szWindow, L"CHEAT") || wcsstr(szWindow, L"ENGINE") || wcsstr(szWindow, L"IDA ") || wcsstr(szWindow, L"OLLY") || wcsstr(szWindow, L"PROCEXP") ||
		wcsstr(szWindow, L"MODULES") || wcsstr(szWindow, L"DEBUG") || wcsstr(szWindow, L"DEPEND") || wcsstr(szWindow, L"HEXVIEW") || wcsstr(szWindow, L"ANYJACK") ||
		wcsstr(szWindow, L"OBFUSCATOR") || wcsstr(szWindow, L"PEVIEW") || wcsstr(szWindow, L"DUMP") || wcsstr(szWindow, L"HACKER") || wcsstr(szWindow, L"WINDBG") ||
		wcsstr(szWindow, L"LAST DIGITS") || wcsstr(szWindow, L"ALIGNMENT") || wcsstr(szWindow, L"MEM OPTION") || wcsstr(szWindow, L"INJECT") || wcsstr(szWindow, L"DORIS") ||
		wcsstr(szWindow, L"MEMORY") || wcsstr(szWindow, L"CODEPATCH") || wcsstr(szWindow, L"MBJACK") || wcsstr(szWindow, L"ANALYS") || wcsstr(szWindow, L"BINARYCMP") ||
		wcsstr(szWindow, L"MEMHEXEDIT") || wcsstr(szWindow, L"HOOK") || wcsstr(szWindow, L"WIN64AST") || wcsstr(szWindow, L"TECTIVE") || wcsstr(szWindow, L"KERNEL") ||
		wcsstr(szWindow, L"AGENTTESTER"))
	{
		if (!wcsstr(szWindow, L"SLIDE") && !wcsstr(szWindow, L"MOBILE") && !wcsstr(szWindow, L"WBENGINE") && !wcsstr(szWindow, L"HOLIDAY") &&
			!wcsstr(szWindow, L"OLGA DEBUGGING") && !wcsstr(szWindow, L"RIDA") && !wcsstr(szWindow, L"SAMSUNG") && !wcsstr(szWindow, L"SIDEBAR") &&
			!wcsstr(szWindow, L"IDAEUP") && !wcsstr(szWindow, L"DEBUG : ") && !wcsstr(szWindow, L"VIDEO ENGINE LOAD") && !wcsstr(szWindow, L"IPROSETMONITOR") &&
			!wcsstr(szWindow, L"USB3MONITOR") && !wcsstr(szWindow, L"FOURENGINE") && !wcsstr(szWindow, L"MANAGEMENT") && !wcsstr(szWindow, L"NETMONITORINGCLIENT") &&
			!wcsstr(szWindow, L"THEMIDA") && wcscmp(szWindow, L"MONITOR") && !wcsstr(szWindow, L"ACE_ENGINE") && !wcsstr(szWindow, L"IOMONITORSRV") &&
			!wcsstr(szWindow, L"MEMORY USAGE") && !wcsstr(szWindow, L"CANDIDATEWINDOW") && wcscmp(szWindow, L"MONITOR.EXE") && !wcsstr(szWindow, L"ADBLOCKPLUSENGINE") &&
			!wcsstr(szWindow, L"IDADVDEV") && !wcsstr(szWindow, L"CLMS") && !wcsstr(szWindow, L"CODEMONERROR") && !wcsstr(szWindow, L"UDEA ") &&
			!wcsstr(szWindow, L"COLORENGINE") && !wcsstr(szWindow, L"NVGAMEMONITOR") && !wcsstr(szWindow, L"INISANDBOXMONITOR") && !wcsstr(szWindow, L"TDEPENDW") &&
			!wcsstr(szWindow, L"MONITORBTN") && !wcsstr(szWindow, L"VALIDA") && !wcsstr(szWindow, L"TABLES") && !wcsstr(szWindow, L"XECUREHSM") &&
			!wcsstr(szWindow, L"GROOVE") && !wcsstr(szWindow, L"UNINSTALL") && !wcsstr(szWindow, L"INPUT ") && !wcsstr(szWindow, L"APM") &&
			!wcsstr(szWindow, L"CUSTOMCHEATERCHEATS") && !wcsstr(szWindow, L"NMBGMONITOR") && !wcsstr(szWindow, L"FUPENENGINE") && !wcsstr(szWindow, L"IPROSET") &&
			!wcsstr(szWindow, L"MIGRATION") && !wcsstr(szWindow, L"TRUEIMAGE") && !wcsstr(szWindow, L"TIBMOUNTER") && !wcsstr(szWindow, L"DUAL") &&
			!wcsstr(szWindow, L"WDBACKUPENGINE") && !wcsstr(szWindow, L"MIDAS") && !wcsstr(szWindow, L"DOLLY") && !wcsstr(szWindow, L"GENERIC") &&
			!wcsstr(szWindow, L"OPENPOT") && !wcsstr(szWindow, L"QQ") && !wcsstr(szWindow, L"PUBMONITOR") && !wcsstr(szWindow, L"HIBERNATE") &&
			!wcsstr(szWindow, L"AIDA64") && !wcsstr(szWindow, L"GOLDLOLLY") && !wcsstr(szWindow, L"SIDA") && !wcsstr(szWindow, L"HACKER-PC") &&
			!wcsstr(szWindow, L"MEMORY") && wcscmp(szWindow, L"HACKER") && !wcsstr(szWindow, L"HACKER\\") && !wcsstr(szWindow, L"OUT OF") &&
			wcsstr(szWindow, L"HOOK") != szWindow && !wcsstr(szWindow, L"HOLLYWOOD") && !wcsstr(szWindow, L"SKYPE") && !wcsstr(szWindow, L"WHITE") &&
			!wcsstr(szWindow, L"PFGAMEMONITORINGWND") && !wcsstr(szWindow, L"HWMONITOR") && !wcsstr(szWindow, L"CELL") && !wcsstr(szWindow, L"DRIVER") &&
			!wcsstr(szWindow, L"MODE") && !wcsstr(szWindow, L"SLOT") && !wcsstr(szWindow, L"CLOCK") && !wcsstr(szWindow, L"SETADVERT") &&
			!wcsstr(szWindow, L"ROLLY") && wcsicmp(szWindow, L"CODEMON") && !wcsstr(szWindow, L"SECRETSCREEN") && !wcsstr(szWindow, L"GRAPHICSCARD") &&
			!wcsstr(szWindow, L"BANDWIDTH") && !wcsstr(szWindow, L"NAMIDAY") && !wcsstr(szWindow, L"SUENGINE") && !wcsstr(szWindow, L"WPCMON") &&
			!wcsstr(szWindow, L"AVDUMP32") && !wcsstr(szWindow, L"MS_WEBCHECK") && !wcsstr(szWindow, L"AUDIOENGINE") && !wcsstr(szWindow, L"HARDWAREMONITORWINDOW") &&
			!wcsstr(szWindow, L"GENIUS VITAMIN") && !wcsstr(szWindow, L"ADIDAS") && !wcsstr(szWindow, L"WWW.PME") && !wcsstr(szWindow, L"POWERSTATEMONITORWINDOW") &&
			!wcsstr(szWindow, L"POLLY") && !wcsstr(szWindow, L"STARTHOOKWINDOW") && !wcsstr(szWindow, L"PERFORMANCE") && !wcsstr(szWindow, L"ECMONITOR") &&
			!wcsstr(szWindow, L"GENOCIDAL") && !wcsstr(szWindow, L"REMOTE") && !wcsstr(szWindow, L"NDRIVE") && !wcsstr(szWindow, L"RAZERINGAME") &&
			!wcsstr(szWindow, L"TTKMONITOR") && !wcsstr(szWindow, L"VIVA ") && !wcsstr(szWindow, L"VIDA") && !wcsstr(szWindow, L"USBKVM") &&
			!wcsstr(szWindow, L"LCD ") && !wcsstr(szWindow, L"INTERNET") && !wcsstr(szWindow, L"TORRENT") && !wcsstr(szWindow, L"G2CLIENT") &&
			!wcsstr(szWindow, L"VNB") && !wcsstr(szWindow, L".AVI") && !wcsstr(szWindow, L"C:\\PROGRAM FILES") && !wcsstr(szWindow, L"WIDTH") &&
			!wcsstr(szWindow, L"WIZVERA MONITOR") && !wcsstr(szWindow, L"ACCIDENTAL") && !wcsstr(szWindow, L"ANIDAS.ME") && !wcsstr(szWindow, L"GAMEGUARD") &&
			!wcsstr(szWindow, L"LDRFINDRESOURCE_U") && !wcsstr(szWindow, L"CORE ENGINE") && !wcsstr(szWindow, L"PROCESS LASSO") && !wcsstr(szWindow, L"UNABLE TO OPEN KERNEL DEVICE") &&
			!wcsstr(szWindow, L"더치트") && !wcsstr(szWindow, L"@GMAIL.COM") && !wcsstr(szWindow, L"DEFRAGMENT") && !wcsstr(szWindow, L"INDEPENDENT") &&
			!wcsstr(szWindow, L"ADIDIDAS") && !wcsstr(szWindow, L"EASSOS") && !wcsstr(szWindow, L"GETTING") && !wcsstr(szWindow, L"EFFECTS") &&
			!wcsstr(szWindow, L"LICENSE") && !wcsstr(szWindow, L"DOUBLEPIMP.COM") && !wcsstr(szWindow, L"VIDEOS") && !wcsstr(szWindow, L"THE PRO") &&
			!wcsstr(szWindow, L"JIDA") && !wcsstr(szWindow, L"BTBIT") && !wcsstr(szWindow, L"LOUPEVIEW") && !wcsstr(szWindow, L"UNREAL") &&
			!wcsstr(szWindow, L"CHROME") && !wcsstr(szWindow, L"BIOPHYSICAL") && !wcsstr(szWindow, L"IDAEGIL") && !wcsstr(szWindow, L"LOUPEVIEW") &&
			!wcsstr(szWindow, L"GUIDANCE") && !wcsstr(szWindow, L"LINEAGE2M") && !wcsstr(szWindow, L"INTEL") && !wcsstr(szWindow, L"WMV") &&
			!wcsstr(szWindow, L"XACTENGINE") && !wcsstr(szWindow, L"BLASTERX") && !wcsstr(szWindow, L"ELPIDA") && !wcsstr(szWindow, L"AORUS") &&
			!wcsstr(szWindow, L"VERBOSE") && !wcsstr(szWindow, L"FAILED TO LOCK") && !wcsstr(szWindow, L"CANDIDATE") && !wcsstr(szWindow, L"SHADERS") &&
			!wcsstr(szWindow, L"MINUTES") && !wcsstr(szWindow, L"MOVIE") && !wcsstr(szWindow, L"ITEMMANIA") && !wcsstr(szWindow, L"WINSPLIT") &&
			!wcsstr(szWindow, L"SALES") && !wcsstr(szWindow, L"CUSTOMIZED") && !wcsstr(szWindow, L"MELON") && !wcsstr(szWindow, L"AKIDA") &&
			!wcsstr(szWindow, L"TIDAK") && !wcsstr(szWindow, L"SPEECH") && !wcsstr(szWindow, L"SEARCH") && !wcsstr(szWindow, L"DAUM GAME") &&
			!wcsstr(szWindow, L"HAIWANG") && !wcsstr(szWindow, L"ODIN") && !wcsstr(szWindow, L"NODE") && !wcsstr(szWindow, L"DX11 FEATURE LEVEL") &&
			!wcsstr(szWindow, L"CRASH") && !wcsstr(szWindow, L"THAT GIRL") && !wcsstr(szWindow, L"NO.") && !wcsstr(szWindow, L"HTTPS://") &&
			!wcsstr(szWindow, L"IDANIIR") && !wcsstr(szWindow, L"FOR DEBUG") && wcscmp(szWindow, L"ENGINE") && !wcsstr(szWindow, L"ERROR AT HOOKING") &&
			!wcsstr(szWindow, L"TGAME") && !wcsstr(szWindow, L"SOCKS") && !wcsstr(szWindow, L"AION") && !wcsstr(szWindow, L"MESSAGE") &&
			!wcsstr(szWindow, L"DEBUG.JS.MAP") && !wcsstr(szWindow, L"ASSERTION") && !wcsstr(szWindow, L"WALLPAPER") && !wcsstr(szWindow, L"BANDIDA") &&
			!wcsstr(szWindow, L"MURS -") && !wcsstr(szWindow, L"FNATIVEWEBENGINE") && !wcsstr(szWindow, L"MONITORGUI") && !wcsstr(szWindow, L"TRAFFIC") &&
			!wcsstr(szWindow, L"EASY") && !wcsstr(szWindow, L"VIRTUALIZATION") && !wcsstr(szWindow, L"INSTALLER ") && !wcsstr(szWindow, L"PROXY") &&
			!wcsstr(szWindow, L"XIANNNIU") && !wcsstr(szWindow, L"BAND") && !wcsstr(szWindow, L"ACCESSDATA") && !wcsstr(szWindow, L"LUCIDA") &&
			!wcsstr(szWindow, L"DIDA") && !wcsstr(szWindow, L"RENDER") && !wcsstr(szWindow, L"GAMING") && !wcsstr(szWindow, L"NIU ENGINE") &&
			!wcsstr(szWindow, L"USB DEBUGGING") && !wcsstr(szWindow, L"GATHER &DEBUGGING") && !wcsstr(szWindow, L"RESET ALIGNMENT") && !wcsstr(szWindow, L"GAMELOOP") &&
			!wcsstr(szWindow, L"C:\\HOOK") && !wcsstr(szWindow, L"STEAM ") && !wcsstr(szWindow, L"MIR4GLOBAL") && !wcsstr(szWindow, L"CERTAIN SYSTEM SETTINGS") &&
			!wcsstr(szWindow, L"MOLLY") && !wcsstr(szWindow, L"WARCRAFT") && !wcsstr(szWindow, L"WOBUZHIDA") && !wcsstr(szWindow, L"GIANTS") &&
			!wcsstr(szWindow, L"DUMPLING") && !wcsstr(szWindow, L"SUPPORT,") && !wcsstr(szWindow, L"EMOJI ENGINE") && !wcsstr(szWindow, L"DUMPPING THE DATA") &&
			!wcsstr(szWindow, L"VANGUARD") && !wcsstr(szWindow, L"ENGINEMANAGER") && !wcsstr(szWindow, L"POWER") && !wcsstr(szWindow, L"VRMONITOR") &&
			!wcsstr(szWindow, L"SLATEDEBUG") && !wcsstr(szWindow, L"ANTICHEATE") && !wcsstr(szWindow, L"THE DEVELOPERS") && !wcsstr(szWindow, L"RAZER") &&
			!wcsstr(szWindow, L"HUNTENGINE") && !wcsstr(szWindow, L"CREATE A DEBUG") && !wcsstr(szWindow, L"WINDBGC") && !wcsstr(szWindow, L"- GOOGLE") &&
			!wcsstr(szWindow, L"CLIENT") && !wcsstr(szWindow, L"DEBUG.LOG") && !wcsstr(szWindow, L"LOWLEVEL") && !wcsstr(szWindow, L"MICRO") &&
			!wcsstr(szWindow, L"WEB") && !wcsstr(szWindow, L"CHEATING") && !wcsstr(szWindow, L"HOLLY") && !wcsstr(szWindow, L"GH_"))
		{
			LoadZombieDll();
			return TRUE;
		}
	}

	return FALSE;
}


BOOL FindWindowChild(HWND hParamWnd)
{
	VMProtectBeginMutation("FindWindowChild");

	HWND hFindWnd = ::FindWindowEx(hParamWnd, NULL, NULL, NULL);
	while (hFindWnd != NULL)
	{
		Sleep(1);

		if (IsWindow(hFindWnd) && ::IsWindowVisible(hFindWnd))
		{
			WCHAR szStr[MAX_PATH];
			::GetWindowText(hFindWnd, szStr, MAX_PATH);

			if (IsDoubtableWindow(szStr))
				return TRUE;

			if (FindWindowChild(hFindWnd))
				return TRUE;
		}

		hFindWnd = ::FindWindowEx(hParamWnd, hFindWnd, NULL, NULL);
	}

	VMProtectEnd();
	return FALSE;
}


DWORD SnapThread(COdinDlg* pDlg)
{
	VMProtectBeginMutation("SnapThread");

	while (1)
	{
		Sleep(10 * 1000);

#ifndef _TEST_VERSION_

		WCHAR	szStr[MAX_PATH];
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
					swprintf(szStr, L"%s", pe32.szExeFile);
					wcsupr(szStr);
					if (wcsstr(szStr, L"CHEAT") || wcsstr(szStr, L"ENGINE") || wcsstr(szStr, L"IDA") || wcsstr(szStr, L"OLLY") ||
						wcsstr(szStr, L"PROCEXP") || wcsstr(szStr, L"MODULES") || wcsstr(szStr, L"DEBUG") || wcsstr(szStr, L"MONITOR") ||
						wcsstr(szStr, L"DEPEND") || wcsstr(szStr, L"HEXVIEW") || wcsstr(szStr, L"OBFUSCATOR") || wcsstr(szStr, L"CODEANALYSIS") ||
						wcsstr(szStr, L"PEVIEW") || wcsstr(szStr, L"DUMP") || wcsstr(szStr, L"HACKER") || wcsstr(szStr, L"WINDBG") ||
						wcsstr(szStr, L"INJECT") || wcsstr(szStr, L"DORIS") || /*wcsstr(szStr, L"DBGVIEW") || */wcsstr(szStr, L"WIN64AST") ||
						wcsstr(szStr, L"WIRESHARK"))
					{
						if (pe32.th32ProcessID != GetCurrentProcessId() &&
							!wcsstr(szStr, L"SLIDE") && !wcsstr(szStr, L"MOBILE") && !wcsstr(szStr, L"WBENGINE") && !wcsstr(szStr, L"HOLIDAY") &&
							!wcsstr(szStr, L"ATIV") && !wcsstr(szStr, L"GRATO") && !wcsstr(szStr, L"NIS_ENGINE") && !wcsstr(szStr, L"RIDA") &&
							!wcsstr(szStr, L"SAMSUNG") && !wcsstr(szStr, L"SIDEBAR") && !wcsstr(szStr, L"IDAEUP") && !wcsstr(szStr, L"DISC") &&
							!wcsstr(szStr, L"AM_ENGINE") && !wcsstr(szStr, L"IPROSETMONITOR") && !wcsstr(szStr, L"USB3MONITOR") && !wcsstr(szStr, L"FOURENGINE") &&
							!wcsstr(szStr, L"MANAGEMENT") && !wcsstr(szStr, L"ODD_MONITOR") && !wcsstr(szStr, L"THEMIDA") && wcscmp(szStr, L"MONITOR") &&
							!wcsstr(szStr, L"ACE_ENGINE") && !wcsstr(szStr, L"IOMONITORSRV") && !wcsstr(szStr, L"TMTV5MONITOR") && !wcsstr(szStr, L"REACHIT") &&
							wcscmp(szStr, L"MONITOR.EXE") && !wcsstr(szStr, L"ADBLOCKPLUSENGINE") && !wcsstr(szStr, L"IDADVDEV") && !wcsstr(szStr, L"CLMS") &&
							!wcsstr(szStr, L"MINI_") && !wcsstr(szStr, L"APACHEMONITOR") && !wcsstr(szStr, L"COLORENGINE") && !wcsstr(szStr, L"NVGAMEMONITOR") &&
							!wcsstr(szStr, L"INISANDBOXMONITOR") && !wcsstr(szStr, L"TDEPENDW") && !wcsstr(szStr, L"WIFI") && !wcsstr(szStr, L"CODEMONSERVICEL.CEM") &&
							!wcsstr(szStr, L"VALIDA") && !wcsstr(szStr, L"TABLES") && !wcsstr(szStr, L"XECUREHSM") && !wcsstr(szStr, L"GROOVE") &&
							!wcsstr(szStr, L"UNINSTALL") && !wcsstr(szStr, L"HIDMONITOR") && !wcsstr(szStr, L"APM") && !wcsstr(szStr, L"CUSTOMCHEATERCHEATS") &&
							!wcsstr(szStr, L"NMBGMONITOR") && !wcsstr(szStr, L"FUPENENGINE") && !wcsstr(szStr, L"IPROSET") && !wcsstr(szStr, L"BARMONITOR") &&
							!wcsstr(szStr, L"MIGRATION") && !wcsstr(szStr, L"TRUEIMAGE") && !wcsstr(szStr, L"TIBMOUNTER") && !wcsstr(szStr, L"DUAL") &&
							!wcsstr(szStr, L"WDBACKUPENGINE") && !wcsstr(szStr, L"PFSERVER") && !wcsstr(szStr, L"DOLLY") && !wcsstr(szStr, L"GENERIC") &&
							!wcsstr(szStr, L"DUMPREP") && !wcsstr(szStr, L"SERVICEV6") && !wcsstr(szStr, L"UPLOADER") && !wcsstr(szStr, L"UCAMMONITOR") &&
							!wcsstr(szStr, L"BTSCRASHMONITOR") && !wcsstr(szStr, L"RAZERINGAMEENGINE") && !wcsstr(szStr, L"HIBERNATE") && !wcsstr(szStr, L"ADSPIDERENGINENT") &&
							!wcsstr(szStr, L"HOTKEY") && !wcsstr(szStr, L"LSPENGINE") && !wcsstr(szStr, L"HANAUKEYMONITOR") && !wcsstr(szStr, L"CEPHTMLENGINE") &&
							!wcsstr(szStr, L"CHEAT NUMBER") && !wcsstr(szStr, L"HEADSET") && !wcsstr(szStr, L"QTWEBENGINE") && !wcsstr(szStr, L"NEKO") &&
							!wcsstr(szStr, L"DAREUMONITOR") && !wcsstr(szStr, L"AXMONITOR") && !wcsstr(szStr, L"EASYANTICHEAT") && !wcsstr(szStr, L"BIOMONITOR") &&
							!wcsstr(szStr, L"NETMONITORINGCLIENT") && !wcsstr(szStr, L"HWMONITOR") && !wcsstr(szStr, L"VMONITOR") && !wcsstr(szStr, L"MICROCLOUDENGINE") &&
							!wcsstr(szStr, L"CLMSMONITORSERVICE") && !wcsstr(szStr, L"WHITE") && !wcsstr(szStr, L"NTMSCMON") && !wcsstr(szStr, L"OZONEMONITOR") &&
							!wcsstr(szStr, L"DUMPCAP") && !wcsstr(szStr, L"TRAY") && !wcsstr(szStr, L"GAMESERVER") && !wcsstr(szStr, L"PCSMONITOR") &&
							!wcsstr(szStr, L"PUSHNOTICE") && !wcsstr(szStr, L"SERIES") && !wcsstr(szStr, L"IEMONITOR") && !wcsstr(szStr, L"MONITORDISK") &&
							!wcsstr(szStr, L"STEEL") && !wcsstr(szStr, L"KONEPURE") && !wcsstr(szStr, L"ASINS") && !wcsstr(szStr, L"TDEPEND") &&
							!wcsstr(szStr, L"KUAIDAVPN") && !wcsstr(szStr, L"INNOVATIVE") && !wcsstr(szStr, L"XTORENGINE") && !wcsstr(szStr, L"OLGAENGINE") &&
							!wcsstr(szStr, L"ODYSSEY") && !wcsstr(szStr, L"RSENGINEHELPER") && !wcsstr(szStr, L"ACMON") && !wcsstr(szStr, L"PUBMONITOR") &&
							!wcsstr(szStr, L"SECRETSCREENMONITOR") && !wcsstr(szStr, L"ITBRAIN") && !wcsstr(szStr, L"SPOOLER") && !wcsstr(szStr, L"GRAPHICSCARD") &&
							!wcsstr(szStr, L"BWMONITOR") && !wcsstr(szStr, L"EASYTUNE") && !wcsstr(szStr, L"NEORS") && !wcsstr(szStr, L"SSDMONITOR") &&
							!wcsstr(szStr, L"MPENGINE") && !wcsstr(szStr, L"INJECTHELPER") && !wcsstr(szStr, L"FSWSSMONITOR") && !wcsstr(szStr, L"AVDUMP32") &&
							!wcsstr(szStr, L"SUENGINE") && !wcsstr(szStr, L"WINWFP") && !wcsstr(szStr, L"QQ") && !wcsstr(szStr, L"GSINJECTOR") &&
							!wcsstr(szStr, L"VIDEOCARD") && !wcsstr(szStr, L"ROCCAT") && !wcsstr(szStr, L"TRIGGER") && !wcsstr(szStr, L"ECMONITOR") &&
							!wcsstr(szStr, L"MUSIC") && !wcsstr(szStr, L"MONITORINGSERVICE") && !wcsstr(szStr, L"REFLECT") && !wcsstr(szStr, L"AS_ENGINE") &&
							!wcsstr(szStr, L"SSERVICEKEY") && !wcsstr(szStr, L"BAIKALMONITOR") && !wcsstr(szStr, L"MCAFEE") && !wcsstr(szStr, L"NTUMAPP") &&
							!wcsstr(szStr, L"MSTTSENGINE") && !wcsstr(szStr, L"MONITORING_2.") && !wcsstr(szStr, L"PCMONITOR") && !wcsstr(szStr, L"SERVICEHUB") &&
							!wcsstr(szStr, L"DATASTORE") && !wcsstr(szStr, L"NAHIMIC") && !wcsstr(szStr, L"WARGAMING") && !wcsstr(szStr, L"GEFORCE") &&
							!wcsstr(szStr, L"HPPRINTER") && !wcsstr(szStr, L"SOCKS") && !wcsstr(szStr, L"JPENGINE") && !wcsstr(szStr, L"AIDA64") &&
							!wcsstr(szStr, L"CRASH") && !wcsstr(szStr, L"DUMPUPER") && !wcsstr(szStr, L"NOISECANCEL") && !wcsstr(szStr, L"QIYIDACL") &&
							!wcsstr(szStr, L"360") && !wcsstr(szStr, L"RZUPDATE") && !wcsstr(szStr, L"Monitor_.") && !wcsstr(szStr, L"VOICE") &&
							!wcsstr(szStr, L"KEYBOARD") && !wcsstr(szStr, L"RZAPP") && !wcsstr(szStr, L"CC_") && !wcsstr(szStr, L"SYSTEMMONITOR") &&
							!wcsstr(szStr, L"BUGDUMPSVR") && !wcsstr(szStr, L"TRIGIDAI") && !wcsstr(szStr, L"WINDSCRIBE") && !wcsstr(szStr, L"MONITORGUI") &&
							!wcsstr(szStr, L"PROXY") && !wcsstr(szStr, L"WDKEY") && !wcsstr(szStr, L"DIDA") && !wcsstr(szStr, L"SHCEF") &&
							!wcsstr(szStr, L"STEAM") && !wcsstr(szStr, L"GENDUMP") && !wcsstr(szStr, L"RZLIGHTING") && !wcsstr(szStr, L"IDAZ32") &&
							!wcsstr(szStr, L"SEARCHENGINE") && !wcsstr(szStr, L"CLBDEBUG") && !wcsstr(szStr, L"HIDA32") && !wcsstr(szStr, L"RSENGINE") &&
							!wcsstr(szStr, L"WMWEBENGINE") && !wcsstr(szStr, L"LOL_") && !wcsstr(szStr, L"PUBG_") && !wcsstr(szStr, L"DUMPSENDER") &&
							!wcsstr(szStr, L"VMWARE") && !wcsstr(szStr, L"INJECT-HELPER") && !wcsstr(szStr, L"OMENBGMONITOR") && !wcsstr(szStr, L"XUNYOU") &&
							!wcsstr(szStr, L"SYSTEMPLATFORM") && !wcsstr(szStr, L"MONITOR_OFF") && !wcsstr(szStr, L"AIRCOMMANDENGINE") && !wcsstr(szStr, L"RESETENGINE") &&
							!wcsstr(szStr, L"CNPRINT") && !wcsstr(szStr, L"SAFE_X86") && !wcsstr(szStr, L"DUMPSERVER") && !wcsstr(szStr, L"MONITORSERVICE") &&
							!wcsstr(szStr, L"WINDBGC") && !wcsstr(szStr, L"CNWIDADR") && !wcsstr(szStr, L"IDACC") && !wcsstr(szStr, L"HELPER") &&
							!wcsstr(szStr, L"SUPERSQL") && !wcsstr(szStr, L"DLXTTIDA") && !wcsstr(szStr, L"ENGINEMANAGER") && !wcsstr(szStr, L"LBWYNIDA") &&
							!wcsstr(szStr, L"MTKIDAKF") && !wcsstr(szStr, L"OEMDUMPNET") && !wcsstr(szStr, L"HTTPDEBUGGERSVC") && !wcsstr(szStr, L"VRMONITOR") &&
							!wcsstr(szStr, L"TIB_") && !wcsstr(szStr, L"-MINI") && wcscmp(szStr, L"ENGINE.EXE") && !wcsstr(szStr, L"WEBINSTA") &&
							!wcsstr(szStr, L"INSTALLPKG") && !wcsstr(szStr, L"MICROKEY") && !wcsstr(szStr, L"IDAS") && !wcsstr(szStr, L"PERF-") &&
							!wcsstr(szStr, L"WINDBGC") && !wcsstr(szStr, L"ACCI") && !wcsstr(szStr, L"IDAY") && !wcsstr(szStr, L"ERRORREPORTER") &&
							!wcsstr(szStr, L"JOLLY") && !wcsstr(szStr, L"ACCESSDATABASE") && !wcsstr(szStr, L"STORAGE") && !wcsstr(szStr, L"ASUS") &&
							!wcsstr(szStr, L"TRAFFICMONITOR") && !wcsstr(szStr, L"OPENHARDWAREMONITOR") && !wcsstr(szStr, L"LDMONITOR") && !wcsstr(szStr, L"WRITEDUMP") &&
							!wcsstr(szStr, L"POWERDVD") && !wcsstr(szStr, L"BLADE") && !wcsstr(szStr, L"IDAKJX") && !wcsstr(szStr, L"MAVINJECT") &&
							!wcsstr(szStr, L"PUSH") && !wcsstr(szStr, L"ESAFE") && !wcsstr(szStr, L"SS_") && !wcsstr(szStr, L"KGI") &&
							!wcsstr(szStr, L"SHMONITOR") && !wcsstr(szStr, L"AUDIO"))
						{
							LoadZombieDll();

							if (pDlg)
								pDlg->PostMessageW(WM_CLOSEPID, pe32.th32ProcessID);
							
							CloseHandle(hProcessSnap);
							return 0;
						}
					}

				} while (Process32Next(hProcessSnap, &pe32));
			}

			CloseHandle(hProcessSnap);
		}

		if (FindWindowChild(::GetDesktopWindow()))
			return 0;

#endif // _TEST_VERSION_
	}

	VMProtectEnd();
	return 0;
}



void COdinDlg::OnTimer(UINT_PTR nIDEvent)
{
	if (nIDEvent == 0x10300427)
	{
		SYSTEMTIME time;
		GetLocalTime(&time);

		for (int i = 0; i < m_lstUser.GetItemCount(); i++)
		{
			if (!m_lstUser.GetItemText(i, 6).Compare(L""))
				continue;

			int nDate = _wtoi(m_lstUser.GetItemText(i, 16).GetBuffer());
			if(nDate == 0)
				continue;

			int nYear = nDate / 10000 + 2000;
			int nMonth = (nDate % 10000) / 100;
			int nDay = nDate % 100;

			CTime UserTime(nYear, nMonth, nDay, 0, 0, 0);
			CTime ExpTime(time.wYear, time.wMonth, time.wDay, 0, 0, 0);

			CTimeSpan Period = UserTime - ExpTime;

			int nRemainDay = (int)Period.GetDays();
			if (nRemainDay == 0 || nRemainDay == 1)
			{
				if (wcscmp(m_lstUser.GetItemText(i, 15).GetBuffer(), L"1"))
				{
					m_lstUser.SetItemText(i, 15, L"1");

					m_lstUser.SetItemText(i, 1, m_lstUser.GetItemText(i, 1).GetBuffer());
					m_lstUser.SetItemText(i, 2, m_lstUser.GetItemText(i, 2).GetBuffer());
					m_lstUser.SetItemText(i, 4, m_lstUser.GetItemText(i, 4).GetBuffer());
					m_lstUser.SetItemText(i, 6, m_lstUser.GetItemText(i, 6).GetBuffer());
				}
			}
			else if (nRemainDay == 2)
			{
				if (wcscmp(m_lstUser.GetItemText(i, 15).GetBuffer(), L"2"))
				{
					m_lstUser.SetItemText(i, 15, L"2");

					m_lstUser.SetItemText(i, 1, m_lstUser.GetItemText(i, 1).GetBuffer());
					m_lstUser.SetItemText(i, 2, m_lstUser.GetItemText(i, 2).GetBuffer());
					m_lstUser.SetItemText(i, 4, m_lstUser.GetItemText(i, 4).GetBuffer());
					m_lstUser.SetItemText(i, 6, m_lstUser.GetItemText(i, 6).GetBuffer());
				}
			}
			else if (wcscmp(m_lstUser.GetItemText(i, 15).GetBuffer(), L""))
			{
				m_lstUser.SetItemText(i, 15, L"");

				m_lstUser.SetItemText(i, 1, m_lstUser.GetItemText(i, 1).GetBuffer());
				m_lstUser.SetItemText(i, 2, m_lstUser.GetItemText(i, 2).GetBuffer());
				m_lstUser.SetItemText(i, 4, m_lstUser.GetItemText(i, 4).GetBuffer());
				m_lstUser.SetItemText(i, 6, m_lstUser.GetItemText(i, 6).GetBuffer());
			}	
		}
	}

	CDialog::OnTimer(nIDEvent);
}


void COdinDlg::SetControlText()
{
	CString strLabel;

	strLabel.LoadString(NULL, IDS_ADDACCOUNT, g_wLanguageID);
	GetDlgItem(IDC_BUTTON1)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_DELACCOUNT, g_wLanguageID);
	GetDlgItem(IDC_BUTTON2)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_BROWSE, g_wLanguageID);
	GetDlgItem(IDC_BUTTON3)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_AUTOSTART, g_wLanguageID);
	GetDlgItem(IDC_BUTTON4)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_AUTOSTOP, g_wLanguageID);
	GetDlgItem(IDC_BUTTON5)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STARTALL, g_wLanguageID);
	GetDlgItem(IDC_BUTTON6)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STOPALL, g_wLanguageID);
	GetDlgItem(IDC_BUTTON7)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_CLOSE, g_wLanguageID);
	GetDlgItem(IDC_BUTTON8)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STARTUSER, g_wLanguageID);
	GetDlgItem(IDOK)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STOPUSER, g_wLanguageID);
	GetDlgItem(IDCANCEL)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_MULTIGAME, g_wLanguageID);
	GetDlgItem(IDC_CHECK2)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_KOREAN, g_wLanguageID);
	GetDlgItem(IDC_CHECK3)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_WAITANDRUN, g_wLanguageID);
	GetDlgItem(IDC_STATIC1)->SetWindowText(strLabel);
}


void COdinDlg::OnBrowse()
{
	CFileDialog cfd(TRUE , _T("*.txt") , NULL , OFN_HIDEREADONLY , _T("All Readable Files(*.txt)|*.txt||"));
	if(cfd.DoModal() != IDOK)
		return;

	WCHAR	szPath[MAX_PATH];
	swprintf(szPath , L"%s" , cfd.GetPathName().GetBuffer());

	FILE *fp = _wfopen(szPath , L"r");
	if(!fp)
	{
		MessageBox(L"파일 읽기에 실패하였습니다. 다시 확인해주십시오." , L"알림");
		return;
	}

	m_lstUser.DeleteAllItems();

	WCHAR szTxt[MAX_PATH], szTmp[MAX_PATH];
	while(1)
	{
		if(feof(fp))
			break;

		ZeroMemory(szTxt, sizeof(szTxt));

		fgetws(szTxt, MAX_PATH, fp);
		if(wcslen(szTxt) <= 0)
			continue;

		WCHAR *szAutoID = wcstok(szTxt, L" ");
		if(szAutoID == NULL)
			continue;

		WCHAR *szGameID = wcstok(NULL, L" ");
		if(szGameID == NULL)
			continue;

		WCHAR *szGamePW = wcstok(NULL, L" ");
		if(szGamePW == NULL)
			continue;

		WCHAR *szGameServer = wcstok(NULL, L" ");
		if(szGameServer == NULL)
			continue;

		swprintf(szTmp, L"%d", m_lstUser.GetItemCount() + 1);
		m_lstUser.InsertItem(m_lstUser.GetItemCount(), szTmp);
		m_lstUser.SetItemText(m_lstUser.GetItemCount() - 1, 1, szAutoID);
		m_lstUser.SetItemText(m_lstUser.GetItemCount() - 1, 2, szGameID);
		m_lstUser.SetItemText(m_lstUser.GetItemCount() - 1, 3, szGamePW);

		int nGameServer = _wtoi(szGameServer);
		swprintf(szTmp, L"%s%02d", g_szServerName[(nGameServer / 9) % MAX_SERVER], (nGameServer % 9) + 1);
		m_lstUser.SetItemText(m_lstUser.GetItemCount() - 1, 4, szTmp);

		swprintf(szTmp, L"%d", nGameServer);
		m_lstUser.SetItemText(m_lstUser.GetItemCount() - 1, 5, szTmp);
	}

	fclose(fp);
}



LRESULT COdinDlg::PoPulateComboList(WPARAM wParam, LPARAM lParam)
{
	CComboBox* pInPlaceCombo = static_cast<CComboBox*> (GetFocus());

	CRect obWindowRect;
	pInPlaceCombo->GetWindowRect(&obWindowRect);
	CPoint obInPlaceComboTopLeft(obWindowRect.TopLeft());
	((CComboListCtrl*)wParam)->GetWindowRect(&obWindowRect);

	CStringList* pComboList = reinterpret_cast<CStringList*>(lParam);
	pComboList->RemoveAll();

	if (obWindowRect.PtInRect(obInPlaceComboTopLeft))
	{
		WCHAR szServer[MAX_NAME];
		for (int i = 0; i < MAX_SERVER; i++)
		{
			for (int j = 0; j < 9; j++)
			{
				swprintf(szServer, L"%s%02d", g_szServerName[i], j + 1);
				pComboList->AddTail(szServer);
			}
		}
	}

	return TRUE;
}


void COdinDlg::OnEnableAlign()
{
	if(g_pAlignInfo)
		g_pAlignInfo->bAlign = ((CButton*)GetDlgItem(IDC_CHECK1))->GetCheck();
}


void COdinDlg::OnChangeAlign()
{
	if (g_pAlignInfo)
		g_pAlignInfo->nAlign = m_cbAlignMode.GetCurSel();
}


LRESULT COdinDlg::WindowProc(UINT message, WPARAM wParam, LPARAM lParam)
{
	switch (message)
	{
	case WM_CLOSEPID:
	{
		DWORD dwPID = (DWORD)wParam;
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
		break;
	case WM_REFRESHDIA:
	{
		unsigned int nTotalDia = 0;
		for (int i = 0; i < 100; i++)
			nTotalDia += m_nClientDia[i];

		LVCOLUMN lvCol;
		ZeroMemory(&lvCol, sizeof(LVCOLUMN));
		lvCol.mask = LVCF_TEXT;

		m_lstUser.GetColumn(14, &lvCol);
		
		WCHAR szDia[MAX_NAME] = { 0, };
		swprintf(szDia, m_strDia.GetBuffer(), FormatCurrency(nTotalDia).GetBuffer());
		lvCol.pszText = szDia;

		m_lstUser.SetColumn(14, &lvCol);
		//m_lstUser.SetColumn(m_lstUser.GetItemCount() - 1, )
	}
		break;
	}

	return CDialog::WindowProc(message, wParam, lParam);
}


void COdinDlg::OnDaumKeep()
{
	UpdateData();
	
	WCHAR szPath[MAX_PATH], szVal[MAX_NAME];
	swprintf(szPath, L"%s\\Setting.dat", g_szAppPath);
	swprintf(szVal, L"%d", m_bDaumKeep);
	WritePrivateProfileString(L"Daum", L"Keep", szVal, szPath);
}


void COdinDlg::OnNMCustomdrawList1(NMHDR* pNMHDR, LRESULT* pResult)
{
	NMLVCUSTOMDRAW* pLVCD = (NMLVCUSTOMDRAW*)pNMHDR;
	*pResult = 0;

	if (CDDS_PREPAINT == pLVCD->nmcd.dwDrawStage)
		* pResult = CDRF_NOTIFYITEMDRAW;
	else if (CDDS_ITEMPREPAINT == pLVCD->nmcd.dwDrawStage)
	{
		if (!wcscmp(m_lstUser.GetItemText((int)pLVCD->nmcd.dwItemSpec, 15).GetBuffer(), L"2"))
			pLVCD->clrText = RGB(34, 177, 76);
		else if (!wcscmp(m_lstUser.GetItemText((int)pLVCD->nmcd.dwItemSpec, 15).GetBuffer(), L"1"))
			pLVCD->clrText = RGB(255, 0, 0);
		else
			pLVCD->clrText = RGB(0, 0, 0);
		
		*pResult = CDRF_DODEFAULT;
	}
}



void COdinDlg::OnTestBtn()
{
}


void COdinDlg::OnEnableWait()
{
	UpdateData();

	GetDlgItem(IDC_EDIT1)->EnableWindow(m_bEnableWait);
	GetDlgItem(IDC_EDIT2)->EnableWindow(m_bEnableWait);
}
