
// DetailDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Detail.h"
#include "DetailDlg.h"
#include "NTProcessInfo.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDetailDlg dialog
CDetailDlg::CDetailDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CDetailDlg::IDD, pParent)
	, m_dwScheduleDate(0)
	, m_qwServerTick(0xFFFFFFFF)
	, m_qwLastServerTick(0)
	, m_bFrameEnable(FALSE)
	, m_nFrameValue(20)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CDetailDlg::DoDataExchange(CDataExchange* pDX)
{
	DDX_Control(pDX, IDC_TAB1, m_tabCtrl);

	DDX_Check(pDX, IDC_CHECK1, m_bFrameEnable);
	DDX_Text(pDX, IDC_EDIT1, m_nFrameValue);
	DDV_MinMaxUInt(pDX, m_nFrameValue, 5, 500);
	CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CDetailDlg, CDialog)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
	ON_WM_CLOSE()
	ON_WM_SYSCOMMAND()
	ON_BN_CLICKED(IDC_BUTTON1, &CDetailDlg::OnApplySetting)
	ON_BN_CLICKED(IDOK, &CDetailDlg::OnGameStart)
	ON_BN_CLICKED(IDCANCEL, &CDetailDlg::OnHideSetting)
	ON_WM_TIMER()
	ON_WM_CONTEXTMENU()
	ON_UPDATE_COMMAND_UI(ID_R_APPLYALLSETTINGS, &CDetailDlg::OnPopupMenu_ApplySetting)
	ON_BN_CLICKED(IDC_CHECK1, &CDetailDlg::OnEnableFrame)
	ON_BN_CLICKED(IDC_BTN_COMPLETESCHEDULE, &CDetailDlg::OnBnClickedBtnCompleteschedule)
END_MESSAGE_MAP()


// CDetailDlg message handlers

BOOL CDetailDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	CString strLabel;

	g_pAppDlg = this;

	SetControlText();

	m_SubSchedule.Create(IDD_SUB_SCHEDULE, &m_tabCtrl);
	strLabel.LoadString(NULL, IDS_SCHEDULE, g_wLanguageID);
	m_tabCtrl.AddTab(&m_SubSchedule, strLabel.GetBuffer());

	m_SubLogInfo.Create(IDD_SUB_LOGINFO, &m_tabCtrl);
	strLabel.LoadString(NULL, IDS_LOGINFO, g_wLanguageID);
	m_tabCtrl.AddTab(&m_SubLogInfo, strLabel.GetBuffer());

#ifdef _DEBUG_MODE_
	m_SubDevelop.Create(IDD_SUB_DEVELOP, &m_tabCtrl);
	m_tabCtrl.AddTab(&m_SubDevelop, L"DEV");
#endif

	WCHAR szStr[MAX_PATH];	
	swprintf(szStr, VMProtectDecryptStringW(L"Detail (No. %d)"), g_nIndex);
	SetWindowText(szStr);

	HANDLE hParam = OpenFileMapping(FILE_MAP_ALL_ACCESS, 0, VMProtectDecryptStringW(MAPPING_NAME_1));
	if (!hParam)
	{
		hParam = CreateFileMapping(INVALID_HANDLE_VALUE, NULL, PAGE_READWRITE, 0, sizeof(DetailSettingInfo) * 50, VMProtectDecryptStringW(MAPPING_NAME_1));
		if (hParam)
			g_dwGamePID = (DetailSettingInfo*)MapViewOfFile(hParam, FILE_MAP_ALL_ACCESS, 0, 0, sizeof(DetailSettingInfo) * 50);

		if (g_dwGamePID)
			memset(g_dwGamePID, 0, sizeof(DetailSettingInfo) * 50);
	}
	else
		g_dwGamePID = (DetailSettingInfo*)MapViewOfFile(hParam, FILE_MAP_ALL_ACCESS, 0, 0, sizeof(DetailSettingInfo) * 50);

	if (g_dwGamePID)
		g_dwGamePID[g_nIndex - 1].dwDetailPID = GetCurrentProcessId();

	hParam = CreateFileMapping(INVALID_HANDLE_VALUE, NULL, PAGE_READWRITE, 0, sizeof(Align_Info), VMProtectDecryptStringW(MAPPING_NAME_4));
	if (hParam)
		g_pAlignInfo = (Align_Info*)MapViewOfFile(hParam, FILE_MAP_ALL_ACCESS, 0, 0, sizeof(Align_Info));

	swprintf(szStr, VMProtectDecryptStringW(MAPPING_NAME_3), g_nIndex);
	hParam = CreateFileMapping(INVALID_HANDLE_VALUE, NULL, PAGE_READWRITE, 0, sizeof(GAME_INFO), szStr);
	if (hParam)
		g_pGameInfo = (GAME_INFO*)MapViewOfFile(hParam, FILE_MAP_ALL_ACCESS, 0, 0, sizeof(GAME_INFO));

	if (g_pGameInfo)
		memset(g_pGameInfo, 0, sizeof(GAME_INFO));
	
	sm_EnableTokenPrivilege(SE_DEBUG_NAME);
	sm_LoadNTDLLFunctions();

	memset(g_szItemMode, 0, MAX_MODE * MAX_NAME * sizeof(WCHAR));
	
	strLabel.LoadString(NULL, IDS_ITEMMODE_1, g_wLanguageID);;
	wcscpy(g_szItemMode[0], strLabel.GetBuffer());

	strLabel.LoadString(NULL, IDS_ITEMMODE_2, g_wLanguageID);;
	wcscpy(g_szItemMode[1], strLabel.GetBuffer());

	strLabel.LoadString(NULL, IDS_ITEMMODE_3, g_wLanguageID);;
	wcscpy(g_szItemMode[2], strLabel.GetBuffer());

	strLabel.LoadString(NULL, IDS_ITEMMODE_4, g_wLanguageID);;
	wcscpy(g_szItemMode[3], strLabel.GetBuffer());

	strLabel.LoadString(NULL, IDS_ITEMMODE_5, g_wLanguageID);;
	wcscpy(g_szItemMode[4], strLabel.GetBuffer());

	strLabel.LoadString(NULL, IDS_ITEMMODE_6, g_wLanguageID);;
	wcscpy(g_szItemMode[5], strLabel.GetBuffer());

	strLabel.LoadString(NULL, IDS_ITEMMODE_7, g_wLanguageID);;
	wcscpy(g_szItemMode[6], strLabel.GetBuffer());

	strLabel.LoadString(NULL, IDS_STRING60316, g_wLanguageID);;
	wcscpy(g_szItemMode[7], strLabel.GetBuffer());

	LoadSetting();

	if (g_pGameMapping)
		g_pGameMapping->qwServerTick = GetTickCount64();

	SetTimer(0x20210714, 10 * 1000, NULL);
	SetTimer(0x20210921, 1 * 1000, NULL);

	VMProtectBeginUltra("OnInitDialog");

	//CreateThread(0, 0, (LPTHREAD_START_ROUTINE)ClientThread, (LPVOID)this, 0, &g_dwClientTID);
	CreateThread(0, 0, (LPTHREAD_START_ROUTINE)ControlThread, 0, 0, 0);

	swprintf(szStr, VMProtectDecryptStringW(EVENT_NAME_2), g_szAutoID);
	CreateEvent(0, 0, 0, szStr);

	if(g_bAutoConnect)
	{
		ShowWindow(SW_SHOWMINIMIZED);
		PostMessage(WM_SHOWWINDOW, FALSE, SW_OTHERUNZOOM);
	}

	VMProtectEnd();
	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CDetailDlg::OnPaint()
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
HCURSOR CDetailDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


void CDetailDlg::LoadSetting()
{
	WCHAR szPath[MAX_PATH];
	swprintf(szPath, L"%s\\Setting\\%d\\Detail.dat", g_szAppPath, g_nIndex);

	m_bFrameEnable = GetPrivateProfileInt(L"GameFrame", L"Enable", 0, szPath);
	m_nFrameValue = GetPrivateProfileInt(L"GameFrame", L"Value", 20, szPath);

	UpdateData(FALSE);
	OnEnableFrame();

	m_SubSchedule.LoadSetting();
}


void CDetailDlg::SaveSetting()
{
	m_SubSchedule.SaveSetting();

	UpdateData();

	WCHAR szPath[MAX_PATH], szVal[MAX_NAME];
	swprintf(szPath, L"%s\\Setting\\%d\\Detail.dat", g_szAppPath, g_nIndex);

	swprintf(szVal, L"%d", m_bFrameEnable);
	WritePrivateProfileString(L"GameFrame", L"Enable", szVal, szPath);

	swprintf(szVal, L"%d", m_nFrameValue);
	WritePrivateProfileString(L"GameFrame", L"Value", szVal, szPath);
}



void CDetailDlg::OnClose()
{
	CloseSetting();
	CDialog::OnClose();
}



void CDetailDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if(nID == SC_CLOSE)
	{
		HideSetting();
		return;
	}

	CDialog::OnSysCommand(nID, lParam);
}



BOOL CDetailDlg::PreTranslateMessage(MSG* pMsg)
{
	if (pMsg->wParam == VK_RETURN || pMsg->wParam == VK_ESCAPE)
		return TRUE;

	return CDialog::PreTranslateMessage(pMsg);
}



LRESULT CDetailDlg::WindowProc(UINT message, WPARAM wParam, LPARAM lParam)
{
	if(message == WM_SHOWEMESSAGE)
	{
		if(!IsWindowVisible())
			ShowWindow(SW_SHOW);

		AttachThreadInput(GetWindowThreadProcessId(GetForegroundWindow()->m_hWnd, NULL),GetCurrentThreadId(), TRUE);
		ShowWindow(SW_RESTORE);

		SetForegroundWindow();
	}
	else if(message == WM_EXITMESSAGE)
	{
		CloseGameSetting();
	}
	else if(message == WM_CLOSEMESSAGE)
	{
		CloseSetting();
		OnOK();
	}
	else if(message == WM_GAMESTART)
	{
		OnGameStart();
	}
	else if (message == WM_RESETMESSAGE)
	{
		ResetButton();
	}
	else if (message == WM_SCHEDULEMESSAGE)
	{
		if ((int)wParam == 3)						// 오토가 변경됬으니까 적용하라
			RestAutoButton();
		else
		{
			if ((int)wParam == 1)					// 스케줄 변경됨 신호 왔을 경우
			{
				if(g_bScheduleTimeCheck && g_qwScheduleTimeTick == 0)
					SetTimer(0x20210806, 1000, NULL);
			}

			m_SubSchedule.PostMessage(WM_SCHEDULEMESSAGE, wParam, lParam);
		}
	}
	else if (message == WM_AUTOMESSAGE)
	{
		g_pGameMapping->bAutoRun = (int)wParam;
		RestAutoButton();
	}
	
	return CDialog::WindowProc(message, wParam, lParam);
}


void CDetailDlg::CloseSetting()
{
	CloseGameSetting();

	if(g_dwClientTID)
	{
		HANDLE hThread = OpenThread(THREAD_ALL_ACCESS, 0, g_dwClientTID);
		if(hThread)
		{
			TerminateThread(hThread, 0);
			CloseHandle(hThread);
		}
		g_dwClientTID = 0;
	}

	if(g_cClient.m_bConnect)
		g_cClient.DisConnect();

	g_nScheduleCount = 0;

	if (g_pScheduleTime)
		delete[] g_pScheduleTime;
	g_pScheduleTime = NULL;
}



void CDetailDlg::CloseGameSetting()
{
	WCHAR szEvent[MAX_PATH] = { 0, };
	swprintf(szEvent, EVENT_NAME_14, g_nIndex);
	
	HANDLE hEvent = CreateEvent(0, 0, 0, szEvent);
	if (hEvent)
	{
		SetEvent(hEvent);
		CloseHandle(hEvent);
	}

	if(g_dwGameTID)
	{
		HANDLE hThread = OpenThread(THREAD_ALL_ACCESS, 0, g_dwGameTID);
		if(hThread)
		{
			WaitForSingleObject(hThread, INFINITE);
			CloseHandle(hThread);
			g_dwGameTID = 0;
		}
	}
}


void CDetailDlg::HideSetting()
{
	ShowWindow(SW_SHOWMINIMIZED);
	PostMessage(WM_SHOWWINDOW, FALSE, SW_OTHERUNZOOM);
}


void CDetailDlg::SetControlText()
{
	CString strLabel;

	strLabel.LoadString(NULL, IDS_APPLYSETTING, g_wLanguageID);
	GetDlgItem(IDC_BUTTON1)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STARTGAME, g_wLanguageID);
	GetDlgItem(IDOK)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_HIDESETTING, g_wLanguageID);
	GetDlgItem(IDCANCEL)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60417, g_wLanguageID);
	GetDlgItem(IDC_CHECK1)->SetWindowText(strLabel);
}



void CDetailDlg::OnApplySetting()
{
	SaveSetting();

	if (g_pGameMapping)
		g_pGameMapping->bSettingChanged = 1;
}



void CDetailDlg::OnGameStart()
{
	CString strLabel, strText;
	
	strLabel.LoadString(NULL, IDS_STARTGAME, g_wLanguageID);
	GetDlgItem(IDOK)->GetWindowText(strText);

	if(!strLabel.Compare(strText.GetBuffer()))			// 게임시작
	{
		OnApplySetting();

		strLabel.LoadString(NULL, IDS_AUTOSTOP, g_wLanguageID);
		GetDlgItem(IDOK)->SetWindowText(strLabel);

		if (g_pGameMapping)
			g_pGameMapping->bAutoRun = 1;

		g_dwGameTID = 0;
		CreateThread(0, 0, (LPTHREAD_START_ROUTINE)GameThread, (LPVOID)this, 0, &g_dwGameTID);

		if(IsWindowVisible())
		{
			ShowWindow(SW_SHOWMINIMIZED);
			PostMessage(WM_SHOWWINDOW, FALSE, SW_OTHERUNZOOM);
		}
	}
	else
	{
		g_pGameMapping->bAutoRun = 1 - g_pGameMapping->bAutoRun;
		RestAutoButton();
	}
}



void CDetailDlg::OnHideSetting()
{
	OnApplySetting();

	ShowWindow(SW_SHOWMINIMIZED);
	PostMessage(WM_SHOWWINDOW, FALSE, SW_OTHERUNZOOM);
}


void CDetailDlg::ResetButton()
{
	CString strLabel;
	strLabel.LoadString(NULL, IDS_STARTGAME, g_wLanguageID);
	GetDlgItem(IDOK)->SetWindowText(strLabel);
}


void CDetailDlg::RestAutoButton()
{
	if (!g_dwStartTime)
		return;

	CString strLabel;
	if (!g_pGameMapping->bAutoRun)
		strLabel.LoadString(NULL, IDS_AUTOSTART, g_wLanguageID);
	else
		strLabel.LoadString(NULL, IDS_AUTOSTOP, g_wLanguageID);

	GetDlgItem(IDOK)->SetWindowText(strLabel);
}


void shuffle(int* array, size_t n)
{
	if (n > 1)
	{
		size_t i;
		for (i = 0; i < n - 1; i++)
		{
			size_t j = i + rand() / (RAND_MAX / (n - i) + 1);
			int t = array[j];
			array[j] = array[i];
			array[i] = t;
		}
	}
}


void CDetailDlg::OnTimer(UINT_PTR nIDEvent)
{
	if (nIDEvent == 0x20180213 && g_pGameMapping)
	{
		EnterCriticalSection(&g_csScheduleTime);

		if(g_bScheduleSettingChange)					// 설정이 다른 경우
		{
			g_bScheduleSettingChange = FALSE;

			g_nScheduleCount = g_nScheduleCountTemp;

			if (g_pScheduleTime)
				delete[] g_pScheduleTime;
			g_pScheduleTime = NULL;

			if (!g_bRandomSchedule)
			{
				g_pScheduleTime = g_pScheduleTimeTemp;
				g_pScheduleTimeTemp = NULL;
			}
			else if(g_nScheduleCount > 0)
			{
				int nRand[100];
				for (int i = 0; i < 100; i++)
					nRand[i] = i;

				shuffle(nRand, g_nScheduleCount);

				g_pScheduleTime = new Schedule_Time[g_nScheduleCount];
				memset(g_pScheduleTime, 0, sizeof(Schedule_Time) * g_nScheduleCount);

				for (int i = 0; i < g_nScheduleCount; i++)
				{
					memcpy(&g_pScheduleTime[i], &g_pScheduleTimeTemp[nRand[i]], sizeof(Schedule_Time));
				}

				delete[] g_pScheduleTimeTemp;
				g_pScheduleTimeTemp = NULL;
			}
		}

		LeaveCriticalSection(&g_csScheduleTime);

		SYSTEMTIME time;
		GetLocalTime(&time);

		unsigned int dwCurDate = time.wYear % 100;
		dwCurDate = dwCurDate * 100 + time.wMonth;
		dwCurDate = dwCurDate * 100 + time.wDay;
		dwCurDate = dwCurDate * 100 + (g_nScheduleInitTime / 100) % 24;
		dwCurDate = dwCurDate * 100 + (g_nScheduleInitTime % 100) % 60;

		CTime CurTime(time.wYear, time.wMonth, time.wDay, time.wHour, time.wMinute, 0);
		CTime PrevTime = CurTime - CTimeSpan(1, 0, 0, 0);

		unsigned int dwPrevDate = PrevTime.GetYear() % 100;
		dwPrevDate = dwPrevDate * 100 + PrevTime.GetMonth();
		dwPrevDate = dwPrevDate * 100 + PrevTime.GetDay();
		dwPrevDate = dwPrevDate * 100 + (g_nScheduleInitTime / 100) % 24;
		dwPrevDate = dwPrevDate * 100 + (g_nScheduleInitTime % 100) % 60;

		int dwCurTime = time.wHour * 100 + time.wMinute;

		int nCurIndex = -1;
		for (int i = 0; i < g_nScheduleCount; i++)		// 일단 진행 시간 설정된 스케줄 먼저 처리하자
		{
			if (g_pScheduleTime[i].dwLastScheduleTime != 0 && 
				((dwCurTime >= g_nScheduleInitTime && g_pScheduleTime[i].dwLastScheduleTime >= dwCurDate) ||
				(dwCurTime < g_nScheduleInitTime && g_pScheduleTime[i].dwLastScheduleTime >= dwPrevDate)))
				continue;								// 이미 완료된 스케줄은 무시

			if(g_pScheduleTime[i].nTimeMode != 1)		// 입장시간 설정이 안된 스케줄도 무시하자
				continue;

			if ((dwCurTime >= g_pScheduleTime[i].nTimeStart && dwCurTime < g_pScheduleTime[i].nTimeStop) ||
				(g_pScheduleTime[i].nTimeStart > g_pScheduleTime[i].nTimeStop && (dwCurTime >= g_pScheduleTime[i].nTimeStart ||
					dwCurTime < g_pScheduleTime[i].nTimeStop)))
			{
				nCurIndex = i;
				break;
			}
		}

		if (nCurIndex == -1)										// 시간 설정된거 없으면 처음부터 차례차례 내려가자
		{
			for (int i = 0; i < g_nScheduleCount; i++)
			{
				if(g_pScheduleTime[i].dwLastScheduleTime != 0 &&
					((dwCurTime >= g_nScheduleInitTime && g_pScheduleTime[i].dwLastScheduleTime >= dwCurDate) ||
					(dwCurTime < g_nScheduleInitTime && g_pScheduleTime[i].dwLastScheduleTime >= dwPrevDate)))
					continue;										// 이미 완료된 스케줄은 무시

				if(g_pScheduleTime[i].nTimeMode == 1)				// 입장시간 설정된 스케줄 무시
					continue;

				nCurIndex = i;
				break;
			}
		}

		if (nCurIndex == -1)										// 현재 진행할 스케줄 이름 설정하자
		{
			g_bScheduleTimeCheck = FALSE;
			g_nScheduleTimeValue = 0;
			g_qwScheduleTimeTick = 0;

			if (wcscmp(g_pGameMapping->szSchedule, L""))
				memset(g_pGameMapping->szSchedule, 0, sizeof(WCHAR) * MAX_NAME);
		}
		else if (wcscmp(g_pGameMapping->szSchedule, g_pScheduleTime[nCurIndex].szName))
		{
			if (g_pScheduleTime[nCurIndex].nTimeMode == 2)			// 사냥 시간 설정된 경우
			{
				g_bScheduleTimeCheck = TRUE;
				g_nScheduleTimeValue = g_pScheduleTime[nCurIndex].nHuntTime;
				g_qwScheduleTimeTick = 0;
			}
			else
			{
				g_bScheduleTimeCheck = FALSE;
				g_nScheduleTimeValue = 0;
				g_qwScheduleTimeTick = 0;
			}

			memset(g_pGameMapping->szSchedule, 0, sizeof(WCHAR) * MAX_NAME);
			wcscpy(g_pGameMapping->szSchedule, g_pScheduleTime[nCurIndex].szName);
		}
	}
	else if (nIDEvent == 0x20210714)
	{
		SYSTEMTIME time;
		GetLocalTime(&time);

		if (g_bUseInitSchedule)
		{
			if (m_dwScheduleDate != time.wHour * 100 + time.wMinute)
			{
				m_dwScheduleDate = time.wHour * 100 + time.wMinute;
				if (m_dwScheduleDate == g_nScheduleInitTime)
				{
					m_SubSchedule.PostMessage(WM_RESETMESSAGE);

					if (g_pGameMapping)
						g_pGameMapping->bDateInit = 1;
				}
			}
		}
		

		// 날자 변경이 되었으면 초기화 시간 바꾸자
		if (time.wMonth * 100 + time.wDay != g_nScheduleInitDate)
		{
			if (g_nScheduleDelayTime <= 0)
				g_nScheduleInitTime = g_nScheduleStartTime;
			else
			{
				int nAddTime = (g_nScheduleStartTime % 100) % 60 + rand() % g_nScheduleDelayTime;
				g_nScheduleInitTime = ((g_nScheduleStartTime / 100 + nAddTime / 60) % 24) * 100 + nAddTime % 60;
			}

			WCHAR szPath[MAX_PATH], szVal[MAX_PATH];
			swprintf(szPath, L"%s\\Setting\\%d\\Schedule.ini", g_szAppPath, g_nIndex);

			g_nScheduleInitDate = time.wMonth * 100 + time.wDay;
			swprintf(szVal, L"%d", g_nScheduleInitDate);
			WritePrivateProfileString(L"Schedule", L"InitDate", szVal, szPath);

			swprintf(szVal, L"%d", g_nScheduleInitTime);
			WritePrivateProfileString(L"Schedule", L"InitTime", szVal, szPath);
		}
	}
	else if (nIDEvent == 0x20210806)
	{
		if (g_bScheduleTimeCheck)
		{
			if (g_qwScheduleTimeTick == 0)
				g_qwScheduleTimeTick = GetTickCount64();

			if (GetTickCount64() >= g_qwScheduleTimeTick + g_nScheduleTimeValue * 60 * 1000)
			{
				g_bScheduleTimeCheck = FALSE;
				g_nScheduleTimeValue = 0;
				g_qwScheduleTimeTick = 0;

				if(g_pGameMapping)
					ShowStatus(6, 60306, g_pGameMapping->szSchedule, g_nScheduleTimeValue);

				PostMessage(WM_SCHEDULEMESSAGE, 2);
			}
		}

		if (!g_bScheduleTimeCheck)
			KillTimer(nIDEvent);
	}
	else if (nIDEvent == 0x20210921)
	{
		if (g_dwGamePID && g_dwGamePID[g_nIndex - 1].bUpdateSetting)
		{
			if (g_dwGamePID[g_nIndex - 1].bUpdateSetting == 10)
			{
				g_dwGamePID[g_nIndex - 1].bUpdateSetting = 0;
				LoadSetting();
				OnApplySetting();
			}
			else
			{
				g_dwGamePID[g_nIndex - 1].bUpdateSetting = 0;
				g_pGameMapping->bSettingChanged = TRUE;
			}
		}

		if (g_pGameMapping)
		{
			// 서버 통신이 끊어진 경우
			if (g_pGameMapping->qwServerTick == 0)
			{
				OnOK();
			}
			else if (m_qwLastServerTick == 0 || m_qwServerTick != g_pGameMapping->qwServerTick)
			{
				m_qwServerTick = g_pGameMapping->qwServerTick;
				m_qwLastServerTick = GetTickCount64();
			}
			else if (GetTickCount64() >= m_qwLastServerTick + 16 * 60 * 1000)
			{
				OnOK();
			}
		}
	}

	CDialog::OnTimer(nIDEvent);
}


void CDetailDlg::OnContextMenu(CWnd* pWnd, CPoint point)
{
	if (pWnd != &m_tabCtrl)
		return;

	if (m_tabCtrl.GetCurSel() != 0)
		return;

	CMenu muiTmp, *pContextMenu;
	if (g_wLanguageID == 0x412)
		muiTmp.LoadMenuW(IDR_MENU1);
	else
		muiTmp.LoadMenuW(IDR_MENU2);

	pContextMenu = muiTmp.GetSubMenu(0);
	if (!pContextMenu)
		return;

	pContextMenu->TrackPopupMenu(TPM_LEFTALIGN | TPM_LEFTBUTTON, point.x, point.y, this);
}



void CDetailDlg::OnPopupMenu_ApplySetting(CCmdUI * pCmdUI)
{
	if (!g_dwGamePID)
		return;

	if (m_tabCtrl.GetCurSel() != 0)
		return;

	CString strLabel;
	strLabel.LoadString(NULL, IDS_STRING60367, g_wLanguageID);

	CString strAlert;
	strAlert.LoadString(NULL, IDS_NOTICE, g_wLanguageID);
	if (MessageBox(strLabel.GetBuffer(), strAlert.GetBuffer(), MB_YESNO) != IDYES)
		return;

	OnApplySetting();

	WCHAR szOldFile1[MAX_PATH], szTargetFile1[MAX_PATH];
	WCHAR szOldFile2[MAX_PATH], szTargetFile2[MAX_PATH];
	swprintf(szOldFile1, L"%s\\Setting\\%d\\Schedule.dat", g_szAppPath, g_nIndex);
	swprintf(szOldFile2, L"%s\\Setting\\%d\\Schedule.ini", g_szAppPath, g_nIndex);

	for (int i = 0; i < 50; i++)
	{
		if (i + 1 == g_nIndex)
			continue;

		if (!g_dwGamePID[i].dwDetailPID)
			continue;

		swprintf(szTargetFile1, L"%s\\Setting\\%d\\Schedule.dat", g_szAppPath, i + 1);
		swprintf(szTargetFile2, L"%s\\Setting\\%d\\Schedule.ini", g_szAppPath, i + 1);
		CopyFile(szOldFile1, szTargetFile1, FALSE);
		CopyFile(szOldFile2, szTargetFile2, FALSE);
		g_dwGamePID[i].bUpdateSetting = 10;
	}
}

void CDetailDlg::OnEnableFrame()
{
	UpdateData();

	GetDlgItem(IDC_EDIT1)->EnableWindow(m_bFrameEnable);
}

void CDetailDlg::OnBnClickedBtnCompleteschedule()
{
	// TODO: Add your control notification handler code here
	g_bScheduleTimeCheck = FALSE;
	g_nScheduleTimeValue = 0;
	g_qwScheduleTimeTick = 0;

	PostMessage(WM_SCHEDULEMESSAGE, 2);
}
