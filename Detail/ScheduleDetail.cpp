// ScheduleDetail.cpp : implementation file
//

#include "stdafx.h"
#include "Detail.h"
#include "ScheduleDetail.h"


// CScheduleDetail dialog

IMPLEMENT_DYNAMIC(CScheduleDetail, CDialog)

CScheduleDetail::CScheduleDetail(CWnd* pParent /*=NULL*/)
	: CDialog(CScheduleDetail::IDD, pParent)
	, m_bTimeEnable(FALSE)
	, m_nTimeMode(0)
	, m_nHuntTime(90)
	, m_szScheduleName(_T(""))
	, m_szDefaultName(_T(""))
	, m_bSelServer(FALSE)
	, m_bSelChar(FALSE)
	, m_nServer(0)
	, m_nChar(0)
	, m_nTimeStart(-1)
	, m_nTimeStop(-1)
{
}

CScheduleDetail::~CScheduleDetail()
{
}

void CScheduleDetail::DoDataExchange(CDataExchange* pDX)
{
	DDX_Control(pDX, IDC_TAB1, m_tabCtrl);

	DDX_Check(pDX, IDC_CHECK1, m_bTimeEnable);
	DDX_Check(pDX, IDC_CHECK2, m_bSelServer);
	DDX_Check(pDX, IDC_CHECK3, m_bSelChar);

	DDX_Radio(pDX, IDC_RADIO1, m_nTimeMode);

	DDX_Control(pDX, IDC_DATETIMEPICKER1, m_dtTimeStart);
	DDX_Control(pDX, IDC_DATETIMEPICKER2, m_dtTimeStop);

	DDX_Text(pDX, IDC_EDIT1, m_nHuntTime);
	DDX_Text(pDX, IDC_EDIT2, m_szScheduleName);

	DDX_Control(pDX, IDC_COMBO1, m_cbServerList);
	DDX_CBIndex(pDX, IDC_COMBO1, m_nServer);
	DDX_Control(pDX, IDC_COMBO2, m_cbCharList);
	DDX_CBIndex(pDX, IDC_COMBO2, m_nChar);

	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CScheduleDetail, CDialog)
	ON_BN_CLICKED(IDC_CHECK1, &CScheduleDetail::OnTimeEnable)
	ON_BN_CLICKED(IDC_RADIO1, &CScheduleDetail::OnTimeModeChange)
	ON_BN_CLICKED(IDC_RADIO2, &CScheduleDetail::OnTimeModeChange)
	ON_BN_CLICKED(IDC_BUTTON1, &CScheduleDetail::OnVerify)
	ON_BN_CLICKED(IDC_BUTTON2, &CScheduleDetail::OnCancel)
	ON_BN_CLICKED(IDC_BUTTON3, &CScheduleDetail::OnBrowse)
	ON_BN_CLICKED(IDC_CHECK2, &CScheduleDetail::OnEnableServer)
	ON_BN_CLICKED(IDC_CHECK3, &CScheduleDetail::OnEnableChar)

	ON_UPDATE_COMMAND_UI(ID_R_APPLYALLSETTINGS, &CScheduleDetail::OnPopupMenu_ApplySetting)
	ON_WM_CONTEXTMENU()
END_MESSAGE_MAP()


// CScheduleDetail message handlers

BOOL CScheduleDetail::OnInitDialog()
{
	CDialog::OnInitDialog();

	CString strLabel;

	SetControlText();

	m_ScheduleHunt.Create(IDD_SCHEDULE_HUNT, &m_tabCtrl);
	strLabel.LoadString(NULL, IDS_HUNT, g_wLanguageID);
	m_tabCtrl.AddTab(&m_ScheduleHunt, strLabel.GetBuffer());

	m_ScheduleBuy.Create(IDD_SCHEDULE_BUY, &m_tabCtrl);
	strLabel.LoadString(NULL, IDS_BUY, g_wLanguageID);
	m_tabCtrl.AddTab(&m_ScheduleBuy, strLabel.GetBuffer());

	m_ScheduleItem.Create(IDD_SCHEDULE_ITEM, &m_tabCtrl);
	strLabel.LoadString(NULL, IDS_ITEM, g_wLanguageID);
	m_tabCtrl.AddTab(&m_ScheduleItem, strLabel.GetBuffer());

// 	m_SchedulePK.Create(IDD_SCHEDULE_PK, &m_tabCtrl);
// 	m_tabCtrl.AddTab(&m_SchedulePK, L"PK");

	m_ScheduleOther.Create(IDD_SCHEDULE_OTHER, &m_tabCtrl);
	strLabel.LoadString(NULL, IDS_OTHER, g_wLanguageID);
	m_tabCtrl.AddTab(&m_ScheduleOther, strLabel.GetBuffer());

	WCHAR szTmp[MAX_NAME];

	for(int i = 0; i < MAX_SERVER; i++)
	{
		for(int j = 0; j < 9; j++)
		{
			swprintf(szTmp, L"%s%02d", g_szServerName[i], j + 1);
			m_cbServerList.AddString(szTmp);
		}
	}

	strLabel.LoadString(NULL, IDS_CHARSLOT, g_wLanguageID);
	for(int i = 0; i < 5; i++)
	{
		swprintf(szTmp, strLabel.GetBuffer(), i + 1);
		m_cbCharList.AddString(szTmp);
	}

	m_dtTimeStart.SetFormat(L"HH:mm:ss");
	m_dtTimeStop.SetFormat(L"HH:mm:ss");

	if(!m_szScheduleName.IsEmpty())
	{
		WCHAR szPath[MAX_PATH];
		swprintf(szPath, L"%s\\Schedule\\%s", g_szAppPath, m_szScheduleName.GetBuffer());

		LoadSetting(szPath);
	}
	else if(!m_szDefaultName.IsEmpty())
	{
		WCHAR szPath[MAX_PATH];
		swprintf(szPath, L"%s\\Schedule\\%s", g_szAppPath, m_szDefaultName.GetBuffer());

		LoadSetting(szPath);
	}

	UpdateData(FALSE);
	OnTimeEnable();
	OnEnableServer();
	OnEnableChar();

	return TRUE;
}



BOOL CScheduleDetail::PreTranslateMessage(MSG* pMsg)
{
	if (pMsg->wParam == VK_RETURN || pMsg->wParam == VK_ESCAPE)
		return TRUE;

	return CDialog::PreTranslateMessage(pMsg);
}


void CScheduleDetail::SetControlText()
{
	CString strLabel;
	
	strLabel.LoadString(NULL, IDS_VERIFY, g_wLanguageID);
	GetDlgItem(IDC_BUTTON1)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_CANCEL, g_wLanguageID);
	GetDlgItem(IDC_BUTTON2)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_SCHEDULETIME, g_wLanguageID);
	GetDlgItem(IDC_CHECK1)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_MINUTE, g_wLanguageID);
	GetDlgItem(IDC_STATIC11)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_NAME, g_wLanguageID);
	GetDlgItem(IDC_STATIC12)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_LOADING, g_wLanguageID);
	GetDlgItem(IDC_BUTTON3)->SetWindowText(strLabel);
}



void CScheduleDetail::OnTimeEnable()
{
	UpdateData();

	if(!m_bTimeEnable)
	{
		GetDlgItem(IDC_RADIO1)->EnableWindow(FALSE);
		GetDlgItem(IDC_DATETIMEPICKER1)->EnableWindow(FALSE);
		GetDlgItem(IDC_DATETIMEPICKER2)->EnableWindow(FALSE);

		GetDlgItem(IDC_RADIO2)->EnableWindow(FALSE);
		GetDlgItem(IDC_EDIT1)->EnableWindow(FALSE);
	}
	else
	{
		GetDlgItem(IDC_RADIO1)->EnableWindow(TRUE);
		GetDlgItem(IDC_RADIO2)->EnableWindow(TRUE);

		OnTimeModeChange();
	}
}


void CScheduleDetail::OnTimeModeChange()
{
	UpdateData();

	if(m_nTimeMode == 0)
	{
		GetDlgItem(IDC_DATETIMEPICKER1)->EnableWindow(TRUE);
		GetDlgItem(IDC_DATETIMEPICKER2)->EnableWindow(TRUE);

		GetDlgItem(IDC_EDIT1)->EnableWindow(FALSE);
	}
	else
	{
		GetDlgItem(IDC_DATETIMEPICKER1)->EnableWindow(FALSE);
		GetDlgItem(IDC_DATETIMEPICKER2)->EnableWindow(FALSE);

		GetDlgItem(IDC_EDIT1)->EnableWindow(TRUE);
	}
}


void CScheduleDetail::LoadSetting(WCHAR *szPath, BOOL bLoadMain)
{
	m_ScheduleHunt.LoadSetting(szPath);
	m_ScheduleBuy.LoadSetting(szPath);
	m_ScheduleItem.LoadSetting(szPath);
//	m_SchedulePK.LoadSetting(szPath);
	m_ScheduleOther.LoadSetting(szPath);

	if(bLoadMain)
	{
		WCHAR szFile[MAX_PATH];
		swprintf(szFile, L"%s\\Main.dat", szPath);

		FILE *fp = _wfopen(szFile, L"rb");
		if(!fp)
			return;

		SCHEDULE_SETTING m_MainSetting;
		memset(&m_MainSetting, 0, sizeof(SCHEDULE_SETTING));
		fread(&m_MainSetting, sizeof(SCHEDULE_SETTING), 1, fp);
		fclose(fp);

		m_bSelServer = m_MainSetting.bSelServer;
		m_nServer = m_MainSetting.nSelServer;
		m_bSelChar = m_MainSetting.bSelChar;
		m_nChar = m_MainSetting.nSelChar;

		m_bTimeEnable = m_MainSetting.bTimeEnable;
		m_nTimeMode = m_MainSetting.nTimeMode;

		COleDateTime odtTime;

		odtTime.SetTime((m_MainSetting.nTimeStart / 100) % 24, (m_MainSetting.nTimeStart % 100) % 60, 0);
		m_dtTimeStart.SetTime(odtTime);

		odtTime.SetTime((m_MainSetting.nTimeStop / 100) % 24, (m_MainSetting.nTimeStop % 100) % 60, 0);
		m_dtTimeStop.SetTime(odtTime);

		m_nHuntTime = m_MainSetting.nHuntTime;
	}
}


void CScheduleDetail::SaveSetting(WCHAR *szPath)
{
	m_ScheduleHunt.SaveSetting(szPath);
	m_ScheduleBuy.SaveSetting(szPath);
	m_ScheduleItem.SaveSetting(szPath);
//	m_SchedulePK.SaveSetting(szPath);
	m_ScheduleOther.SaveSetting(szPath);

	WCHAR szFile[MAX_PATH];
	swprintf(szFile, L"%s\\Main.dat", szPath);

	FILE *fp = _wfopen(szFile, L"wb");
	if(!fp)
		return;

	SCHEDULE_SETTING m_MainSetting;
	memset(&m_MainSetting, 0, sizeof(SCHEDULE_SETTING));

	m_MainSetting.bSelServer = m_bSelServer;
	m_MainSetting.nSelServer = m_nServer;
	m_MainSetting.bSelChar = m_bSelChar;
	m_MainSetting.nSelChar = m_nChar;

	m_MainSetting.bTimeEnable = m_bTimeEnable;
	m_MainSetting.nTimeMode = m_nTimeMode;

	COleDateTime odtTime;

	m_dtTimeStart.GetTime(odtTime);
	m_MainSetting.nTimeStart = odtTime.GetHour() * 100 + odtTime.GetMinute();
	m_nTimeStart = m_MainSetting.nTimeStart;

	m_dtTimeStop.GetTime(odtTime);
	m_MainSetting.nTimeStop = odtTime.GetHour() * 100 + odtTime.GetMinute();
	m_nTimeStop = m_MainSetting.nTimeStop;

	m_MainSetting.nHuntTime = m_nHuntTime;

	fwrite(&m_MainSetting, sizeof(SCHEDULE_SETTING), 1, fp);
	fclose(fp);
}



void CScheduleDetail::OnVerify()
{
	UpdateData();

	if(m_szScheduleName.IsEmpty())
		return;

// 	CString strLabel;
// 	strLabel.LoadString(IDS_SCHEDULESAVE);
// 
// 	WCHAR szTmp[MAX_PATH];
// 	swprintf(szTmp, strLabel.GetBuffer(), m_szScheduleName.GetBuffer());
// 
// 	CString strNotice;
// 	strNotice.LoadString(IDS_NOTICE);
// 
// 	if(MessageBox(szTmp, strNotice.GetBuffer(), MB_YESNO) != IDYES)
// 		return;

	WCHAR szPath[MAX_PATH];
	swprintf(szPath, L"%s\\Schedule", g_szAppPath);
	if(!IsFileExist(szPath))
		_wmkdir(szPath);

	swprintf(szPath, L"%s\\Schedule\\%s", g_szAppPath, m_szScheduleName.GetBuffer());
	if(!IsFileExist(szPath))
		_wmkdir(szPath);

	SaveSetting(szPath);
	OnOK();
}


void CScheduleDetail::OnCancel()
{
	CString strLabel;
	strLabel.LoadString(NULL, IDS_REALLYCANCEL, g_wLanguageID);

	CString strNotice;
	strNotice.LoadString(NULL, IDS_NOTICE, g_wLanguageID);

	if(MessageBox(strLabel.GetBuffer(), strNotice.GetBuffer(), MB_YESNO) != IDYES)
		return;

	CDialog::OnCancel();
}


int CALLBACK RunSetupCallBack(HWND hwnd, UINT uMsg, LPARAM lParam, LPARAM lpData)
{
	switch(uMsg)
	{
	case BFFM_INITIALIZED:
		SendMessage(hwnd, BFFM_SETSELECTION, (LPARAM)TRUE, lpData);
		break;
	}
	return 0;
}


void CScheduleDetail::OnBrowse()
{
	WCHAR szPath[MAX_PATH];
	swprintf(szPath, L"%s\\Schedule", g_szAppPath);

	GetDlgItem(IDC_BUTTON3)->EnableWindow(FALSE);

	BROWSEINFO bi;
	LPITEMIDLIST pid;
	memset(&bi, 0, sizeof(BROWSEINFO));
	bi.lpszTitle = L"";
	bi.pidlRoot = NULL;
	bi.lpfn = RunSetupCallBack;
	bi.lParam = (LPARAM)(szPath);
	pid = SHBrowseForFolder(&bi);
	if(pid)
	{
		memset(szPath, 0, sizeof(WCHAR) * MAX_PATH);
		SHGetPathFromIDList(pid, szPath);

		if(IsFileExist(szPath))
			LoadSetting(szPath, FALSE);
	}

	GetDlgItem(IDC_BUTTON3)->EnableWindow(TRUE);
}


void CScheduleDetail::OnEnableServer()
{
	UpdateData();

	GetDlgItem(IDC_COMBO1)->EnableWindow(m_bSelServer);
}


void CScheduleDetail::OnEnableChar()
{
	UpdateData();

	GetDlgItem(IDC_COMBO2)->EnableWindow(m_bSelChar);
}


void CScheduleDetail::OnContextMenu(CWnd* pWnd, CPoint point)
{
	if (pWnd != &m_tabCtrl)
		return;

	if (m_tabCtrl.GetCurSel() == 0)		//사냥
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


void CScheduleDetail::OnPopupMenu_ApplySetting(CCmdUI * pCmdUI)
{
	if (!g_dwGamePID)
		return;

	CString strLabel;
	strLabel.LoadString(NULL, IDS_STRING60368, g_wLanguageID);

	CString strAlert;
	strAlert.LoadString(NULL, IDS_NOTICE, g_wLanguageID);

	if (MessageBox(strLabel.GetBuffer(), strAlert.GetBuffer(), MB_YESNO) != IDYES)
		return;

	UpdateData();

	if (m_szScheduleName.IsEmpty())
		return;

	WCHAR szPath[MAX_PATH];
	swprintf(szPath, L"%s\\Schedule", g_szAppPath);
	if (!IsFileExist(szPath))
		_wmkdir(szPath);

	swprintf(szPath, L"%s\\Schedule\\%s", g_szAppPath, m_szScheduleName.GetBuffer());
	if (!IsFileExist(szPath))
		_wmkdir(szPath);

	SaveSetting(szPath);

	WCHAR szOldFile[MAX_PATH] = { 0, };
	if (m_tabCtrl.GetCurSel() == 1)		// 구매
		swprintf(szOldFile, L"%s\\Schedule\\%s\\Buy.dat", g_szAppPath, m_szScheduleName.GetBuffer());
	else if (m_tabCtrl.GetCurSel() == 2)		// 아이템
		swprintf(szOldFile, L"%s\\Schedule\\%s\\Items.dat", g_szAppPath, m_szScheduleName.GetBuffer());
	else if (m_tabCtrl.GetCurSel() == 3)		// 기타
		swprintf(szOldFile, L"%s\\Schedule\\%s\\Other.dat", g_szAppPath, m_szScheduleName.GetBuffer());

	WCHAR szCopyDir[MAX_PATH] = { 0, };
	swprintf(szCopyDir, L"%s\\Schedule\\*.*", g_szAppPath);

	WIN32_FIND_DATA wfd;
	HANDLE hFind = FindFirstFile(szCopyDir, &wfd);
	if (hFind == INVALID_HANDLE_VALUE)
		return;

	do
	{
		if (wfd.cFileName[0] == L'.')
			continue;

		if (wfd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY && m_szScheduleName.Compare(wfd.cFileName))
		{
			WCHAR szNewFile[MAX_PATH] = { 0, };
			if (m_tabCtrl.GetCurSel() == 1)
				swprintf(szNewFile, L"%s\\Schedule\\%s\\Buy.dat", g_szAppPath, wfd.cFileName);
			else if (m_tabCtrl.GetCurSel() == 2)
				swprintf(szNewFile, L"%s\\Schedule\\%s\\Items.dat", g_szAppPath, wfd.cFileName);
			else if (m_tabCtrl.GetCurSel() == 3)
				swprintf(szNewFile, L"%s\\Schedule\\%s\\Other.dat", g_szAppPath, wfd.cFileName);

			CopyFile(szOldFile, szNewFile, FALSE);
		}
	} while (FindNextFile(hFind, &wfd));
	FindClose(hFind);

	for (int i = 0; i < 50; i++)
	{
		if (i + 1 == g_nIndex)
			continue;

		if (!g_dwGamePID[i].dwDetailPID)
			continue;

		g_dwGamePID[i].bUpdateSetting = 1;
	}
}
