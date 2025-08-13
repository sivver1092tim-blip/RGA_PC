// SubLogInfo.cpp : implementation file
//

#include "stdafx.h"
#include "Detail.h"
#include "SubLogInfo.h"


// CSubLogInfo dialog

IMPLEMENT_DYNAMIC(CSubLogInfo, CDialog)

CSubLogInfo::CSubLogInfo(CWnd* pParent /*=NULL*/)
	: CDialog(CSubLogInfo::IDD, pParent)
{
	m_pLogfp = NULL;
	m_dwLogTime = -1;

	m_nPreLevel = 0;
	m_szPreCharName.Empty();
	m_szPreServerName.Empty();
	m_szPreRegion.Empty();
	m_nPreGold = 0;
	m_nPreDia = 0;
}

CSubLogInfo::~CSubLogInfo()
{
}

void CSubLogInfo::DoDataExchange(CDataExchange* pDX)
{
	DDX_Control(pDX, IDC_LIST1, m_lstLog);
	DDX_Control(pDX, IDC_PROGRESS1, m_pHpBar);
	DDX_Control(pDX, IDC_PROGRESS2, m_pMpBar);
	DDX_Control(pDX, IDC_PROGRESS3, m_pInvenBar);
	DDX_Control(pDX, IDC_PROGRESS4, m_pExpBar);

	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CSubLogInfo, CDialog)
	ON_WM_TIMER()
	ON_NOTIFY(NM_CUSTOMDRAW, IDC_PROGRESS1, &CSubLogInfo::OnNMCustomdrawProgress1)
END_MESSAGE_MAP()


// CSubLogInfo message handlers

BOOL CSubLogInfo::OnInitDialog()
{
	CDialog::OnInitDialog();

	m_pHpBar.SetRange(0, 100);
	m_pMpBar.SetRange(0, 100);
	m_pInvenBar.SetRange(0, 100);
	m_pExpBar.SetRange(0, 100);

	m_pHpBar.SetBarColor(RGB(255, 0, 0));
	m_pMpBar.SetBarColor(RGB(0, 0, 255));
	m_pInvenBar.SetBarColor(RGB(0, 222, 255));
	m_pExpBar.SetBarColor(RGB(179, 135, 39));

	m_lstLog.SetExtendedStyle(m_lstLog.GetExtendedStyle() | LVS_EX_GRIDLINES | LVS_EX_FULLROWSELECT);
	m_lstLog.InsertColumn(0, L"Time", LVCFMT_LEFT, 85);
	m_lstLog.InsertColumn(1, L"Log", LVCFMT_LEFT, 420);
	m_lstLog.GetHeaderCtrl()->EnableWindow(FALSE);

	SetTimer(0x19910324, 10000, NULL);
	SetTimer(0x19911014, 200, NULL);

	return TRUE;
}



BOOL CSubLogInfo::PreTranslateMessage(MSG* pMsg)
{
	if (pMsg->wParam == VK_RETURN || pMsg->wParam == VK_ESCAPE)
		return TRUE;

	return CDialog::PreTranslateMessage(pMsg);
}


void CSubLogInfo::OnTimer(UINT_PTR nIDEvent)
{
	if(nIDEvent == 0x19910324 && g_dwStartTime > 0)
	{
		SYSTEMTIME time;
		GetLocalTime(&time);

		int nYear = (time.wYear / 100) * 100 + (g_dwStartTime / 100000000) % 100;
		int nMonth = (g_dwStartTime % 100000000) / 1000000;
		int nDay = (g_dwStartTime % 1000000) / 10000;
		int nHour = (g_dwStartTime % 10000) / 100;
		int nMinute = g_dwStartTime % 100;

		CTime ctStartTime(nYear, nMonth, nDay, nHour, nMinute, 0);
		CTime ctCurTime(time.wYear, time.wMonth, time.wDay, time.wHour, time.wMinute, 0);
		CTimeSpan ExpTime = ctCurTime - ctStartTime;

		WCHAR szStr[MAX_PATH];
		CString str1, str2, str3, str4;
		str1.LoadString(NULL, IDS_DAY, g_wLanguageID);
		str2.LoadString(NULL, IDS_HOUR, g_wLanguageID);
		str3.LoadString(NULL, IDS_MINUTE, g_wLanguageID);
		str4.LoadString(NULL, IDS_EXPIRED, g_wLanguageID);
		swprintf(szStr, L"%d-%02d-%02d %02d:%02d (%d%s %d%s %d%s %s)", nYear, nMonth, nDay, nHour, nMinute, 
			(int)ExpTime.GetDays(), str1.GetBuffer(), (int)ExpTime.GetHours(), str2.GetBuffer(), (int)ExpTime.GetMinutes(), str3.GetBuffer(), str4.GetBuffer());
		GetDlgItem(IDC_EDIT1)->SetWindowText(szStr);
	}
	else if (nIDEvent == 0x19911014 && g_dwStartTime > 0)
	{
		if(g_pGameMapping->bGameInfo == 1)
			ShowGameStatus();
	}

	CDialog::OnTimer(nIDEvent);
}


void CSubLogInfo::ShowLog(int nType, int nStringCode, WCHAR* szLog, int nLogValue1, int nLogValue2)
{
	SYSTEMTIME time;
	GetLocalTime(&time);

	DWORD dwTime = time.wMonth;
	dwTime = dwTime * 100 + time.wDay;
	dwTime = dwTime * 100 + time.wHour;
	dwTime = dwTime * 100 + time.wMinute;
	dwTime = dwTime * 100 + time.wSecond;

// 	if(m_lstLog.GetItemCount() > 0 && dwTime - m_lstLog.GetItemData(m_lstLog.GetItemCount() - 1) < 3)	// 기존 로그 기록 시간과 차이가 3초이하일떄
// 	{
// 		if(!wcscmp(szStr, m_lstLog.GetItemText(m_lstLog.GetItemCount() - 1, 1).GetBuffer()))			// 기존 로그와 동일한 로그가 기록되는 경우
// 			return;
// 	}

	WCHAR szTime[50] = { 0, };
	swprintf_s(szTime, 50, L"%02d-%02d %02d:%02d:%02d", time.wMonth, time.wDay, time.wHour, time.wMinute, time.wSecond);

	BOOL bRemove = FALSE;
	if(m_lstLog.GetItemCount() >= 1000)
	{
		bRemove = TRUE;
		m_lstLog.DeleteItem(0);
	}

	m_lstLog.InsertItem(m_lstLog.GetItemCount(), szTime);

	CString strLabel;
	strLabel.LoadString(NULL, nStringCode, g_wLanguageID);

	memset(szTime, 0, sizeof(WCHAR) * 50);

	// ------------------- 파라메터 설정하자 ------------------- //

	if (nType == 0)																	// 파라메터 없는 경우
		wcscpy(szTime, strLabel.GetBuffer());
	else if (nType == 1)
		swprintf(szTime, strLabel.GetBuffer(), szLog);								// 문자열만 있는 경우
	else if (nType == 2)
		swprintf(szTime, strLabel.GetBuffer(), nLogValue1);							// 수자만 있는 경우
	else if (nType == 3)
		swprintf(szTime, strLabel.GetBuffer(), szLog, nLogValue1);					// 문자열 + 수자
	else if (nType == 4)
		swprintf(szTime, strLabel.GetBuffer(), nLogValue1, nLogValue2);				// 수자 + 수자
	else if (nType == 5)
		swprintf(szTime, strLabel.GetBuffer(), szLog, nLogValue1, nLogValue2);		// 문자열 + 수자 + 수자
	else if (nType == 6)
		swprintf(szTime, strLabel.GetBuffer(), nLogValue1, szLog);					// 숫자 + 문자열

	// -------------------------------------------------------- //
	
	m_lstLog.SetItemText(m_lstLog.GetItemCount() - 1, 1, szTime);
	m_lstLog.SetItemData(m_lstLog.GetItemCount() - 1, dwTime);

	SCROLLINFO ScrollInfo;
	ZeroMemory(&ScrollInfo, sizeof(SCROLLINFO));
	m_lstLog.GetScrollInfo(SB_VERT, &ScrollInfo);

	if(ScrollInfo.nMax < (int)ScrollInfo.nPage || ScrollInfo.nPos == ScrollInfo.nMax - (int)ScrollInfo.nPage)
		m_lstLog.EnsureVisible(m_lstLog.GetItemCount() - 1, TRUE);
	else if(bRemove && ScrollInfo.nPos > 0)
	{
		if(ScrollInfo.nPos == 1)
			m_lstLog.EnsureVisible(m_lstLog.GetItemCount() - 1, TRUE);
		else
			m_lstLog.EnsureVisible(ScrollInfo.nPos - 1, TRUE);
	}

	if(m_dwLogTime != time.wMonth * 100 + time.wDay)
	{
		if(m_pLogfp)
			fclose(m_pLogfp);
		m_pLogfp = NULL;

		WCHAR szPath[MAX_PATH];
		swprintf_s(szPath, MAX_PATH, L"%s\\Log", g_szAppPath);
		_wmkdir(szPath);

		swprintf_s(szPath, MAX_PATH, L"%s\\Log\\%d", g_szAppPath, g_nIndex);
		_wmkdir(szPath);

		swprintf_s(szPath, MAX_PATH, L"%s\\Log\\%d\\Log(%d_%02d_%02d).txt", g_szAppPath, g_nIndex, time.wYear, time.wMonth, time.wDay);
		m_pLogfp = _wfopen(szPath, L"a+,ccs=utf-8");

		if(m_pLogfp != NULL)
			m_dwLogTime = time.wMonth * 100 + time.wDay;
	}

	if(m_pLogfp != NULL)
		fwprintf(m_pLogfp, L"[%02d-%02d-%02d] %s\n", time.wHour, time.wMinute, time.wSecond, szTime);

	SetStatus(STATUS_GAMESTATUSLOG, TRUE, szTime);
}



void CSubLogInfo::ShowGameStatus()
{
	WCHAR szStr[MAX_PATH];

	if (!g_pGameMapping)
		return;

	swprintf_s(szStr, MAX_PATH, L"%s (%s)", g_pGameMapping->szCharName, g_pGameMapping->szServerName);
	GetDlgItem(IDC_EDIT2)->SetWindowText(szStr);

	swprintf_s(szStr, MAX_PATH, L"%s", g_pGameMapping->szRegion);
	GetDlgItem(IDC_EDIT3)->SetWindowText(szStr);

	swprintf(szStr, L"(%.2f, %.2f, %.2f)", g_pGameMapping->fPosX, g_pGameMapping->fPosY, g_pGameMapping->fPosZ);
	GetDlgItem(IDC_EDIT4)->SetWindowText(szStr);

	swprintf(szStr, L"%d (%d)", g_pGameMapping->nGold, g_pGameMapping->nDia);
	GetDlgItem(IDC_EDIT5)->SetWindowText(szStr);

	swprintf(szStr, L"%d / %d", g_pGameMapping->nCurHp, g_pGameMapping->nMaxHp);
	if(g_pGameMapping->nMaxHp > 0)
	{
		m_pHpBar.SetPos(g_pGameMapping->nCurHp * 100 / g_pGameMapping->nMaxHp);
		m_pHpBar.SetWindowText(szStr);
	}

	swprintf(szStr, L"%d / %d", g_pGameMapping->nCurMp, g_pGameMapping->nMaxMp);
	if(g_pGameMapping->nMaxMp > 0)
	{
		m_pMpBar.SetPos(g_pGameMapping->nCurMp * 100 / g_pGameMapping->nMaxMp);
		m_pMpBar.SetWindowText(szStr);
	}

	swprintf(szStr, L"%d%%", g_pGameMapping->nWeight);
	m_pInvenBar.SetPos(g_pGameMapping->nWeight);
	m_pInvenBar.SetWindowText(szStr);

// 	swprintf(szStr, L"%.4f%%", fCurExp);
// 	m_pExpBar.SetPos((int)fCurExp);
// 	m_pExpBar.SetWindowText(szStr);

	BOOL bLevel = (m_nPreLevel != g_pGameMapping->nLevel);
	BOOL bChar = m_szPreCharName.Compare(g_pGameMapping->szCharName);
	BOOL bServer = m_szPreServerName.Compare(g_pGameMapping->szServerName);
	BOOL bRegion = m_szPreRegion.Compare(g_pGameMapping->szRegion);
	BOOL bGold = m_nPreGold != g_pGameMapping->nGold;
	BOOL bDia = m_nPreDia != g_pGameMapping->nDia;

	if (bLevel)
		m_nPreLevel = g_pGameMapping->nLevel;

	if (bChar)
		m_szPreCharName = g_pGameMapping->szCharName;

	if (bServer)
		m_szPreServerName = g_pGameMapping->szServerName;

	if (bRegion)
		m_szPreRegion = g_pGameMapping->szRegion;

	if (bGold)
		m_nPreGold = g_pGameMapping->nGold;

	if (bDia)
		m_nPreDia = g_pGameMapping->nDia;

	if (bLevel || bChar || bServer || bRegion || bGold || bDia)
	{
		EnterCriticalSection(&g_hStatusSection);

		if (g_pStatusInfo && g_hStatusEvent)
		{
			if (bLevel)
				g_pStatusInfo->nLevel = m_nPreLevel;

			if (bChar)
			{
				memset(g_pStatusInfo->szChar, 0, sizeof(WCHAR) * 50);
				wcscpy(g_pStatusInfo->szChar, g_pGameMapping->szCharName);
			}

			if (bServer)
			{
				memset(g_pStatusInfo->szServer, 0, sizeof(WCHAR) * 50);
				wcscpy(g_pStatusInfo->szServer, g_pGameMapping->szServerName);
			}

			if (bRegion)
			{
				memset(g_pStatusInfo->szRegion, 0, sizeof(WCHAR) * 50);
				wcscpy(g_pStatusInfo->szRegion, g_pGameMapping->szRegion);
			}

			if (bGold)
				g_pStatusInfo->nGold = m_nPreGold;

			if (bDia)
				g_pStatusInfo->nDia = m_nPreDia;

			g_pStatusInfo->nOpCode = STATUS_GAMECHARLOG;

			SetEvent(g_hStatusEvent);
			WaitForSingleObject(g_hAnswerEvent, INFINITE);
		}

		LeaveCriticalSection(&g_hStatusSection);
	}
}



BOOL CSubLogInfo::DestroyWindow()
{
	if(m_pLogfp)
		fclose(m_pLogfp);
	m_pLogfp = NULL;

	m_dwLogTime = 0;

	return CDialog::DestroyWindow();
}


void CSubLogInfo::OnNMCustomdrawProgress1(NMHDR* pNMHDR, LRESULT* pResult)
{
	LPNMCUSTOMDRAW pNMCD = reinterpret_cast<LPNMCUSTOMDRAW>(pNMHDR);
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	*pResult = 0;
}
