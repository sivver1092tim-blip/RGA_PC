// SubSchedule.cpp : implementation file
//

#include "stdafx.h"
#include "Detail.h"
#include "SubSchedule.h"
#include "ScheduleDetail.h"


WCHAR	g_szCharActor[5][MAX_NAME] = {L"로그", L"소서리스", L"프리스트", L"워리어", L"실드 메이든"};
WCHAR	g_szCharClass[5][3][MAX_NAME] = { {L"스나이퍼", L"어쌔신", L"헌트리스"}, {L"아크메이지", L"다크위저드", L"인챈트리스"}, {L"세인트", L"팔라딘", L"바드"}, 
									{L"디펜더", L"버서커", L"썬더 브링어"}, {L"발키리", L"액슬러", L""} };
// CSubSchedule dialog
typedef struct _SCHEDULE_INFO_
{
	BYTE	bEnable;
	WCHAR	szName[MAX_NAME];
}SCHEDULE_INFO;

IMPLEMENT_DYNAMIC(CSubSchedule, CDialog)

CSubSchedule::CSubSchedule(CWnd* pParent /*=NULL*/)
	: CDialog(CSubSchedule::IDD, pParent)
	, m_szPrevName(_T(""))
	, m_nCharActor(1)
	//, m_nCharClass(0)
	//, m_bSnakeDungeon(FALSE)
	, m_bRandomSchedule(FALSE)
	, m_bTryServerStop(FALSE)
	, m_nStat1(0)
	, m_nStat2(0)
	, m_bSkipDeviceReg(FALSE)
	, m_bCountry(FALSE)
	, m_nCountry(0)
	, m_b56002(FALSE)
	, m_bOptimization(FALSE)
	, m_bTryServer(FALSE)
	, m_bUseInit(TRUE)
{
}

CSubSchedule::~CSubSchedule()
{
}

void CSubSchedule::DoDataExchange(CDataExchange* pDX)
{
	DDX_Control(pDX, IDC_LIST1, m_lstMainSchedule);
	DDX_Control(pDX, IDC_LIST2, m_lstSubSchedule);

	DDX_Control(pDX, IDC_DATETIMEPICKER1, m_dtStartTime);
	DDX_Control(pDX, IDC_DATETIMEPICKER2, m_dtStopTime);

	DDX_Control(pDX, IDC_COMBO1, m_cbCharActor);
	//DDX_Control(pDX, IDC_COMBO2, m_cbCharClass);
	DDX_CBIndex(pDX, IDC_COMBO1, m_nCharActor);
	//DDX_CBIndex(pDX, IDC_COMBO2, m_nCharClass);

	//DDX_Check(pDX, IDC_CHECK1, m_bSnakeDungeon);
	DDX_Check(pDX, IDC_CHECK2, m_bRandomSchedule);

	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_COMBO_TRYSERVERLIST, m_cbTryServerList);
	DDX_Control(pDX, IDC_LIST_TRYSERVERLIST, m_lstTryServerList);
	DDX_Check(pDX, IDC_CHECK_TRYSERVERSTOP, m_bTryServerStop);
	DDX_Control(pDX, IDC_COMBO_STAT1, m_cbStat1);
	DDX_CBIndex(pDX, IDC_COMBO_STAT1, m_nStat1);
	DDX_Control(pDX, IDC_COMBO_STAT2, m_cbStat2);
	DDX_CBIndex(pDX, IDC_COMBO_STAT2, m_nStat2);
	DDX_Check(pDX, IDC_CHECK_SKIPDEVICEREG, m_bSkipDeviceReg);
	DDX_Check(pDX, IDC_CHECK_COUNTRY, m_bCountry);
	DDX_Control(pDX, IDC_COMBO_COUNTRY, m_cbCountry);
	DDX_CBIndex(pDX, IDC_COMBO_COUNTRY, m_nCountry);
	DDX_Check(pDX, IDC_CHECK_56002, m_b56002);
	DDX_Check(pDX, IDC_CHECK_OPTIMIZATION, m_bOptimization);
	DDX_Check(pDX, IDC_CHECK_TRYSERVER, m_bTryServer);
	DDX_Check(pDX, IDC_CHECK_USEINIT, m_bUseInit);
}


BEGIN_MESSAGE_MAP(CSubSchedule, CDialog)
	ON_BN_CLICKED(IDC_BUTTON1, &CSubSchedule::OnAddMainSchedule)
	ON_BN_CLICKED(IDC_BUTTON2, &CSubSchedule::OnDelMainSchedule)
	ON_NOTIFY(NM_DBLCLK, IDC_LIST1, &CSubSchedule::OnChangeMainSchedule)
	ON_BN_CLICKED(IDC_BUTTON3, &CSubSchedule::OnSortUp)
	ON_BN_CLICKED(IDC_BUTTON4, &CSubSchedule::OnSortDown)
	ON_BN_CLICKED(IDC_BUTTON5, &CSubSchedule::OnAddSubSchedule)
	ON_BN_CLICKED(IDC_BUTTON6, &CSubSchedule::OnDelSubSchedule)
	ON_NOTIFY(NM_DBLCLK, IDC_LIST2, &CSubSchedule::OnChangeSubSchedule)
	ON_BN_CLICKED(IDC_BUTTON7, &CSubSchedule::OnInitSchedule)
	ON_NOTIFY(NM_CUSTOMDRAW, IDC_LIST1, &CSubSchedule::OnCustomdrawList)
	ON_CBN_SELCHANGE(IDC_COMBO1, &CSubSchedule::OnChangeActor)
	ON_BN_CLICKED(IDC_CHECK_TRYSERVER, &CSubSchedule::OnBnClickedCheckTryserver)
	ON_BN_CLICKED(IDC_BTN_ADDTRYSERVER, &CSubSchedule::OnBnClickedBtnAddtryserver)
	ON_BN_CLICKED(IDC_BTN_DELTRYSERVER, &CSubSchedule::OnBnClickedBtnDeltryserver)
	ON_BN_CLICKED(IDC_BTN_UPTRYSERVER, &CSubSchedule::OnBnClickedBtnUptryserver)
	ON_BN_CLICKED(IDC_BTN_DOWNTRYSERVER, &CSubSchedule::OnBnClickedBtnDowntryserver)
END_MESSAGE_MAP()


// CSubSchedule message handlers

BOOL CSubSchedule::OnInitDialog()
{
	CDialog::OnInitDialog();
	CString strLabel;
	SetControlText();

	m_lstMainSchedule.SetExtendedStyle(m_lstMainSchedule.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES | LVS_EX_CHECKBOXES);
	m_lstMainSchedule.InsertColumn(0, L"", LVCFMT_LEFT, 20);
	m_lstMainSchedule.InsertColumn(1, L"No", LVCFMT_LEFT, 25);

	strLabel.LoadString(NULL, IDS_SCHEDULE, g_wLanguageID);
	m_lstMainSchedule.InsertColumn(2, strLabel.GetBuffer(), LVCFMT_LEFT, 170);

	strLabel.LoadString(NULL, IDS_SERVER, g_wLanguageID);
	m_lstMainSchedule.InsertColumn(3, strLabel.GetBuffer(), LVCFMT_LEFT, 70);
	
	strLabel.LoadString(NULL, IDS_CHAR, g_wLanguageID);
	m_lstMainSchedule.InsertColumn(4, strLabel.GetBuffer(), LVCFMT_LEFT, 40);
	
	strLabel.LoadString(NULL, IDS_SCHEDULETIME, g_wLanguageID);
	m_lstMainSchedule.InsertColumn(5, strLabel.GetBuffer(), LVCFMT_LEFT, 130);

	m_lstMainSchedule.InsertColumn(6, L"TimeEnable", LVCFMT_LEFT, 0);
	m_lstMainSchedule.InsertColumn(7, L"TimeMode", LVCFMT_LEFT, 0);
	m_lstMainSchedule.InsertColumn(8, L"TimeStart", LVCFMT_LEFT, 0);
	m_lstMainSchedule.InsertColumn(9, L"TimeStop", LVCFMT_LEFT, 0);
	m_lstMainSchedule.InsertColumn(10, L"HuntTime", LVCFMT_LEFT, 0);

	strLabel.LoadString(NULL, IDS_STATUS, g_wLanguageID);
	m_lstMainSchedule.InsertColumn(11, strLabel.GetBuffer(), LVCFMT_LEFT, 50);

	m_dtStartTime.SetFormat(L"HH:mm:ss");
	m_dtStopTime.SetFormat(L"HH:mm:ss");

	m_lstSubSchedule.SetExtendedStyle(m_lstSubSchedule.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES | LVS_EX_CHECKBOXES);
	m_lstSubSchedule.InsertColumn(0, L"", LVCFMT_LEFT, 20);
	m_lstSubSchedule.InsertColumn(1, L"No", LVCFMT_LEFT, 25);

	strLabel.LoadString(NULL, IDS_SCHEDULE, g_wLanguageID);
	m_lstSubSchedule.InsertColumn(2, strLabel.GetBuffer(), LVCFMT_LEFT, 200);

	strLabel.LoadString(NULL, IDS_SCHEDULETIME, g_wLanguageID);
	m_lstSubSchedule.InsertColumn(3, strLabel.GetBuffer(), LVCFMT_LEFT, 130);

	m_lstSubSchedule.InsertColumn(4, L"TimeEnable", LVCFMT_LEFT, 0);
	m_lstSubSchedule.InsertColumn(5, L"TimeMode", LVCFMT_LEFT, 0);
	m_lstSubSchedule.InsertColumn(6, L"TimeStart", LVCFMT_LEFT, 0);
	m_lstSubSchedule.InsertColumn(7, L"TimeStop", LVCFMT_LEFT, 0);
	m_lstSubSchedule.InsertColumn(8, L"HuntTime", LVCFMT_LEFT, 0);

	for (int i = 0; i < MAX_CLASS; i++)
	{
		if (g_bTaiwanLang)
			m_cbCharActor.AddString(g_pCharActor[i].szTWName);
		else
			m_cbCharActor.AddString(g_pCharActor[i].szKRName);
	}


	for (int i = 0; i < MAX_STAT; i++)
	{
		if (g_bTaiwanLang)
			m_cbStat1.AddString(g_pStat[i].szTWName);
		else
			m_cbStat1.AddString(g_pStat[i].szKRName);
	}


	for (int i = 0; i < MAX_STAT; i++)
	{
		if (g_bTaiwanLang)
			m_cbStat2.AddString(g_pStat[i].szTWName);
		else
			m_cbStat2.AddString(g_pStat[i].szKRName);
	}

	for (int i = 0; i < MAX_SERVER; i++)
	{
		if (g_bTaiwanLang)
			m_cbTryServerList.AddString(g_szServerName[i].szTWName);
		else
			m_cbTryServerList.AddString(g_szServerName[i].szKRName);
	}
	m_cbTryServerList.SetCurSel(0);

	m_cbCountry.AddString(L"KR");
	m_cbCountry.AddString(L"JP");
	m_cbCountry.AddString(L"US");
	m_cbCountry.AddString(L"TW");
	
	UpdateData(FALSE);

	OnBnClickedCheckTryserver();

	return TRUE;
}



BOOL CSubSchedule::PreTranslateMessage(MSG* pMsg)
{
	if (pMsg->wParam == VK_RETURN || pMsg->wParam == VK_ESCAPE)
		return TRUE;

	return CDialog::PreTranslateMessage(pMsg);
}



void CSubSchedule::SetControlText()
{
	CString strLabel;

	strLabel.LoadString(NULL, IDS_MAINSCHEDULE, g_wLanguageID);
	GetDlgItem(IDC_STATIC11)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_SUBSCHEDULE, g_wLanguageID);
	GetDlgItem(IDC_STATIC12)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_ADD, g_wLanguageID);
	GetDlgItem(IDC_BUTTON1)->SetWindowText(strLabel);
	GetDlgItem(IDC_BUTTON5)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_DEL, g_wLanguageID);
	GetDlgItem(IDC_BUTTON2)->SetWindowText(strLabel);
	GetDlgItem(IDC_BUTTON6)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_INITTIME, g_wLanguageID);
	GetDlgItem(IDC_CHECK_USEINIT)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_INIT, g_wLanguageID);
	GetDlgItem(IDC_BUTTON7)->SetWindowText(strLabel);

	//strLabel.LoadString(NULL, IDS_CHAR, g_wLanguageID);
	//GetDlgItem(IDC_STATIC14)->SetWindowText(strLabel);

	//strLabel.LoadString(NULL, IDS_CHARCLASS, g_wLanguageID);
	//GetDlgItem(IDC_STATIC15)->SetWindowText(strLabel);

	//strLabel.LoadString(NULL, IDS_STRING60319, g_wLanguageID);
	//strLabel.LoadString(NULL, IDS_STRING60349, g_wLanguageID);
	//GetDlgItem(IDC_CHECK1)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60416, g_wLanguageID);
	GetDlgItem(IDC_CHECK2)->SetWindowText(strLabel);
}


void CSubSchedule::LoadSetting()
{
	WCHAR szPath[MAX_PATH], szKey[MAX_PATH];
	swprintf(szPath, L"%s\\Setting\\%d\\Schedule.dat", g_szAppPath, g_nIndex);

	FILE *fp = _wfopen(szPath, L"rb");
	if(!fp)
		return;

	int nCount = 0;
	fread(&nCount, sizeof(int), 1, fp);

	m_lstMainSchedule.DeleteAllItems();

	if(nCount > 0)
	{
		SCHEDULE_INFO *pScheduleSetting = new SCHEDULE_INFO[nCount];
		if(pScheduleSetting)
		{
			memset(pScheduleSetting, 0, sizeof(SCHEDULE_INFO) * nCount);
			fread(pScheduleSetting, sizeof(SCHEDULE_INFO), nCount, fp);

			WCHAR szTmp[MAX_NAME];
			for(int i = 0; i < nCount; i++)
			{
				m_lstMainSchedule.InsertItem(i, L"");

				swprintf(szTmp, L"%d", i + 1);
				m_lstMainSchedule.SetItemText(i, 1, szTmp);
				
				m_lstMainSchedule.SetItemText(i, 2, pScheduleSetting[i].szName);
				
				m_lstMainSchedule.SetCheck(i, pScheduleSetting[i].bEnable);
				
				m_lstMainSchedule.SetItemData(i, 0);
			}

			delete[] pScheduleSetting;
			pScheduleSetting = NULL;
		}
	}

	nCount = 0;
	fread(&nCount, sizeof(int), 1, fp);

	m_lstSubSchedule.DeleteAllItems();

	if(nCount > 0)
	{
		SCHEDULE_INFO *pScheduleSetting = new SCHEDULE_INFO[nCount];
		if(pScheduleSetting)
		{
			memset(pScheduleSetting, 0, sizeof(SCHEDULE_INFO) * nCount);
			fread(pScheduleSetting, sizeof(SCHEDULE_INFO), nCount, fp);

			WCHAR szTmp[MAX_NAME];
			for(int i = 0; i < nCount; i++)
			{
				m_lstSubSchedule.InsertItem(i, L"");

				swprintf(szTmp, L"%d", i + 1);
				m_lstSubSchedule.SetItemText(i, 1, szTmp);

				m_lstSubSchedule.SetItemText(i, 2, pScheduleSetting[i].szName);

				m_lstSubSchedule.SetCheck(i, pScheduleSetting[i].bEnable);
			}

			delete[] pScheduleSetting;
			pScheduleSetting = NULL;
		}
	}

	int nStartTime = 400;
	fread(&nStartTime, sizeof(int), 1, fp);

	COleDateTime odtTime;
	odtTime.SetTime((nStartTime / 100) % 24, (nStartTime % 100) % 60, 0);
	m_dtStartTime.SetTime(odtTime);

	int nStopTime = nStartTime;
	fread(&nStopTime, sizeof(int), 1, fp);

	odtTime.SetTime((nStopTime / 100) % 24, (nStopTime % 100) % 60, 0);
	m_dtStopTime.SetTime(odtTime);

	fclose(fp);

	swprintf(szPath, L"%s\\Setting\\%d\\Schedule.ini", g_szAppPath, g_nIndex);
	m_nCharActor = GetPrivateProfileInt(L"Create", L"Actor", 0, szPath);
	m_nCharActor %= MAX_CLASS;

	m_nStat1 = GetPrivateProfileInt(L"Create", L"Stat1", 1, szPath);
	m_nStat1 %= MAX_STAT;
	m_nStat2 = GetPrivateProfileInt(L"Create", L"Stat2", 4, szPath);
	m_nStat2 %= MAX_STAT;

	//m_nCharClass = GetPrivateProfileInt(L"Create", L"Class", 0, szPath);
	//m_nCharClass %= 3;

	//m_bSnakeDungeon = GetPrivateProfileInt(L"Dungeon", L"Snake", 0, szPath);
	m_bRandomSchedule = GetPrivateProfileInt(L"Schedule", L"Random", 0, szPath);

	m_bOptimization = GetPrivateProfileInt(L"Schedule", L"Optimization", 0, szPath);

	m_bTryServer = GetPrivateProfileInt(L"TryServer", L"Use", 0, szPath);

	m_bUseInit = GetPrivateProfileInt(L"Schedule", L"UseInit", 1, szPath);
	g_bUseInitSchedule = m_bUseInit;

	int nTryServerCount = GetPrivateProfileInt(L"TryServer", L"Count", 0, szPath);
	m_lstTryServerList.DeleteAllItems();
	for (int i = 0; i < nTryServerCount; i++)
	{
		swprintf_s(szKey, L"Index%d", i);
		int nTryServerIndex = GetPrivateProfileInt(L"TryServer", szKey, 0, szPath);

		if (g_bTaiwanLang)
			m_lstTryServerList.InsertItem(i, g_szServerName[nTryServerIndex % MAX_SERVER].szTWName);
		else
			m_lstTryServerList.InsertItem(i, g_szServerName[nTryServerIndex % MAX_SERVER].szKRName);

		m_lstTryServerList.SetItemData(i, nTryServerIndex % MAX_SERVER);
	}

	m_bTryServerStop = GetPrivateProfileInt(L"TryServer", L"Stop", 0, szPath);

	m_bCountry = GetPrivateProfileInt(L"Schedule", L"Country", 1, szPath);
	m_nCountry = GetPrivateProfileInt(L"Schedule", L"CountryID", 3, szPath);
	m_b56002 = GetPrivateProfileInt(L"Schedule", L"56002", 0, szPath);
	m_bSkipDeviceReg = GetPrivateProfileInt(L"Schedule", L"SkipDeviceReg", 0, szPath);

	SYSTEMTIME time;
	GetLocalTime(&time);

	g_nScheduleInitDate = GetPrivateProfileInt(L"Schedule", L"InitDate", 0, szPath);

	int nTimeDelay = 0;
	if (nStartTime <= nStopTime)
		nTimeDelay = ((nStopTime / 100) - (nStartTime / 100)) * 60 + (nStopTime % 100) % 60 - (nStartTime % 100) % 60;
	else
		nTimeDelay = 1440 - (((nStartTime / 100) - (nStopTime / 100)) * 60 + (nStartTime % 100) % 60 - (nStopTime % 100) % 60);
	
	// 스케줄 초기화 시간 설정된 날자가 다른 경우
	if (time.wMonth * 100 + time.wDay != g_nScheduleInitDate)
	{
		if(nTimeDelay <= 0)
			g_nScheduleInitTime = nStartTime;
		else
		{
			int nAddTime = (nStartTime % 100) % 60 + rand() % nTimeDelay;
			g_nScheduleInitTime = ((nStartTime / 100 + nAddTime / 60) % 24) * 100 + nAddTime % 60;
		}
	}
	else
	{
		g_nScheduleInitTime = GetPrivateProfileInt(L"Schedule", L"InitTime", 400, szPath);

		int nInitDelay = 0;
		if (nStartTime <= g_nScheduleInitTime)
			nInitDelay = ((g_nScheduleInitTime / 100) - (nStartTime / 100)) * 60 + (g_nScheduleInitTime % 100) % 60 - (nStartTime % 100) % 60;
		else
			nInitDelay = 1440 - (((nStartTime / 100) - (g_nScheduleInitTime / 100)) * 60 + (nStartTime % 100) % 60 - (g_nScheduleInitTime % 100) % 60);

		if (nInitDelay > nTimeDelay)
		{
			if (nTimeDelay <= 0)
				g_nScheduleInitTime = nStartTime;
			else
			{
				int nAddTime = (nStartTime % 100) % 60 + rand() % nTimeDelay;
				g_nScheduleInitTime = ((nStartTime / 100 + nAddTime / 60) % 24) * 100 + nAddTime % 60;
			}
		}
	}

	g_nScheduleStartTime = nStartTime;
	g_nScheduleDelayTime = nTimeDelay;

	for(int i = 0; i < m_lstMainSchedule.GetItemCount(); i++)
	{
		swprintf(szPath, L"%s\\Schedule\\%s\\Main.dat", g_szAppPath, m_lstMainSchedule.GetItemText(i, 2).GetBuffer());

		fp = _wfopen(szPath, L"rb");
		if(fp)
		{
			SCHEDULE_SETTING pScheduleSetting;
			memset(&pScheduleSetting, 0, sizeof(SCHEDULE_SETTING));

			fread(&pScheduleSetting, sizeof(SCHEDULE_SETTING), 1, fp);
			fclose(fp);

			if (pScheduleSetting.bSelServer)
			{
				if (g_bTaiwanLang)
					m_lstMainSchedule.SetItemText(i, 3, g_szServerName[pScheduleSetting.nSelServer % MAX_SERVER].szTWName);
				else
					m_lstMainSchedule.SetItemText(i, 3, g_szServerName[pScheduleSetting.nSelServer % MAX_SERVER].szKRName);
			}

			if(pScheduleSetting.bSelChar)
			{
				CString strLabel;
				strLabel.LoadString(NULL, IDS_STRING60100, g_wLanguageID);
				swprintf(szPath, L"%d%s", pScheduleSetting.nSelChar + 1, strLabel.GetBuffer());
				m_lstMainSchedule.SetItemText(i, 4, szPath);
			}

			if(pScheduleSetting.bTimeEnable)
			{
				CString strLabel;
				if(pScheduleSetting.nTimeMode == 0)
				{
					strLabel.LoadString(NULL, IDS_TIMEDISPLAY, g_wLanguageID);
					swprintf(szPath, strLabel.GetBuffer(), (pScheduleSetting.nTimeStart / 100) % 24, (pScheduleSetting.nTimeStart % 100) % 60, (pScheduleSetting.nTimeStop / 100) % 24, (pScheduleSetting.nTimeStop % 100) % 60);
				}
				else
				{
					strLabel.LoadString(NULL, IDS_MINUTE, g_wLanguageID);
					swprintf(szPath, L"%d%s", pScheduleSetting.nHuntTime, strLabel.GetBuffer());
				}

				m_lstMainSchedule.SetItemText(i, 5, szPath);
			}

			swprintf(szPath, L"%d", pScheduleSetting.bTimeEnable);
			m_lstMainSchedule.SetItemText(i, 6, szPath);

			swprintf(szPath, L"%d", pScheduleSetting.nTimeMode);
			m_lstMainSchedule.SetItemText(i, 7, szPath);

			swprintf(szPath, L"%d", pScheduleSetting.nTimeStart);
			m_lstMainSchedule.SetItemText(i, 8, szPath);

			swprintf(szPath, L"%d", pScheduleSetting.nTimeStop);
			m_lstMainSchedule.SetItemText(i, 9, szPath);

			swprintf(szPath, L"%d", pScheduleSetting.nHuntTime);
			m_lstMainSchedule.SetItemText(i, 10, szPath);
		}
	}

	for(int i = 0; i < m_lstSubSchedule.GetItemCount(); i++)
	{
		swprintf(szPath, L"%s\\Schedule\\%s\\Main.dat", g_szAppPath, m_lstSubSchedule.GetItemText(i, 2).GetBuffer());

		fp = _wfopen(szPath, L"rb");
		if(fp)
		{
			SCHEDULE_SETTING pScheduleSetting;
			memset(&pScheduleSetting, 0, sizeof(SCHEDULE_SETTING));

			fread(&pScheduleSetting, sizeof(SCHEDULE_SETTING), 1, fp);
			fclose(fp);

			if(pScheduleSetting.bTimeEnable)
			{
				CString strLabel;
				if(pScheduleSetting.nTimeMode == 0)
				{
					strLabel.LoadString(NULL, IDS_TIMEDISPLAY, g_wLanguageID);
					swprintf(szPath, strLabel.GetBuffer(), (pScheduleSetting.nTimeStart / 100) % 24, (pScheduleSetting.nTimeStart % 100) % 60, (pScheduleSetting.nTimeStop / 100) % 24, (pScheduleSetting.nTimeStop % 100) % 60);
				}
				else
				{
					strLabel.LoadString(NULL, IDS_MINUTE, g_wLanguageID);
					swprintf(szPath, L"%d%s", pScheduleSetting.nHuntTime, strLabel.GetBuffer());
				}

				m_lstSubSchedule.SetItemText(i, 3, szPath);
			}

			swprintf(szPath, L"%d", pScheduleSetting.bTimeEnable);
			m_lstSubSchedule.SetItemText(i, 4, szPath);

			swprintf(szPath, L"%d", pScheduleSetting.nTimeMode);
			m_lstSubSchedule.SetItemText(i, 5, szPath);

			swprintf(szPath, L"%d", pScheduleSetting.nTimeStart);
			m_lstSubSchedule.SetItemText(i, 6, szPath);

			swprintf(szPath, L"%d", pScheduleSetting.nTimeStop);
			m_lstSubSchedule.SetItemText(i, 7, szPath);

			swprintf(szPath, L"%d", pScheduleSetting.nHuntTime);
			m_lstSubSchedule.SetItemText(i, 8, szPath);
		}
	}

	nCount = m_lstMainSchedule.GetItemCount();
	if (nCount > 0)
	{
		DWORD dwCurTime = time.wYear % 100;
		dwCurTime = dwCurTime * 100 + time.wMonth;
		dwCurTime = dwCurTime * 100 + time.wDay;
		dwCurTime = dwCurTime * 100 + (g_nScheduleInitTime / 100) % 24;
		dwCurTime = dwCurTime * 100 + (g_nScheduleInitTime % 100) % 60;

		CTime CurTime(time.wYear, time.wMonth, time.wDay, time.wHour, time.wMinute, 0);
		CTime PrevTime = CurTime - CTimeSpan(1, 0, 0, 0);

		DWORD dwPrevTime = PrevTime.GetYear() % 100;
		dwPrevTime = dwPrevTime * 100 + PrevTime.GetMonth();
		dwPrevTime = dwPrevTime * 100 + PrevTime.GetDay();
		dwPrevTime = dwPrevTime * 100 + (g_nScheduleInitTime / 100) % 24;
		dwPrevTime = dwPrevTime * 100 + (g_nScheduleInitTime % 100) % 60;

		CString strLabel;
		for (int i = 0; i < nCount; i++)
		{
			swprintf(szPath, L"%s\\Status\\%d.dat", g_szAppPath, g_nIndex);

			WCHAR szTime[MAX_NAME] = { 0, };
			GetPrivateProfileString(L"ScheduleTime", m_lstMainSchedule.GetItemText(i, 2).GetBuffer(), L"0", szTime, MAX_NAME, szPath);
			unsigned int dwLastTime = wcstoul(szTime, NULL, 0);
			if (dwLastTime != 0 &&
				((time.wHour * 100 + time.wMinute >= g_nScheduleInitTime && dwLastTime >= dwCurTime) || 
				(time.wHour * 100 + time.wMinute < g_nScheduleInitTime && dwLastTime >= dwPrevTime)))
			{
				strLabel.LoadString(NULL, IDS_FINISHED, g_wLanguageID);
				m_lstMainSchedule.SetItemText(i, 11, strLabel);
			}
			else
			{
				strLabel.LoadString(NULL, IDS_WAITING, g_wLanguageID);
				m_lstMainSchedule.SetItemText(i, 11, strLabel);
			}
		}
	}

	//m_cbCharClass.ResetContent();
	
/*	
	for (int i = 0; i < 3; i++)
	{
		if (wcscmp(g_szCharClass[m_nCharActor % 5][i], L""))
			m_cbCharClass.AddString(g_szCharClass[m_nCharActor % 5][i]);
	}
*/
	UpdateData(FALSE);

	OnBnClickedCheckTryserver();
}


void CSubSchedule::SaveSetting()
{
	WCHAR szPath[MAX_PATH];
	
	UpdateData();

	swprintf(szPath, L"%s\\Setting", g_szAppPath);
	if(!IsFileExist(szPath))
		_wmkdir(szPath);

	swprintf(szPath, L"%s\\Setting\\%d", g_szAppPath, g_nIndex);
	if(!IsFileExist(szPath))
		_wmkdir(szPath);

	swprintf(szPath, L"%s\\Setting\\%d\\Schedule.dat", g_szAppPath, g_nIndex);

	FILE *fp = _wfopen(szPath, L"wb");
	if(!fp)
		return;

	int nCount = m_lstMainSchedule.GetItemCount();
	fwrite(&nCount, sizeof(int), 1, fp);

	int nScheduleCount = 0;

	if(nCount > 0)
	{
		SCHEDULE_INFO *pScheduleSetting = new SCHEDULE_INFO[nCount];
		if(pScheduleSetting)
		{
			memset(pScheduleSetting, 0, sizeof(SCHEDULE_INFO) * nCount);

			for(int i = 0; i < m_lstMainSchedule.GetItemCount(); i++)
			{
				pScheduleSetting[i].bEnable = m_lstMainSchedule.GetCheck(i);
				wcscpy(pScheduleSetting[i].szName, m_lstMainSchedule.GetItemText(i, 2).GetBuffer());

				if (pScheduleSetting[i].bEnable)
					nScheduleCount++;
			}

			fwrite(pScheduleSetting, sizeof(SCHEDULE_INFO), nCount, fp);

			delete[] pScheduleSetting;
			pScheduleSetting = NULL;
		}
	}

	nCount = m_lstSubSchedule.GetItemCount();
	fwrite(&nCount, sizeof(int), 1, fp);

	if(nCount > 0)
	{
		SCHEDULE_INFO *pScheduleSetting = new SCHEDULE_INFO[nCount];
		if(pScheduleSetting)
		{
			memset(pScheduleSetting, 0, sizeof(SCHEDULE_INFO) * nCount);

			for(int i = 0; i < m_lstSubSchedule.GetItemCount(); i++)
			{
				pScheduleSetting[i].bEnable = m_lstSubSchedule.GetCheck(i);
				wcscpy(pScheduleSetting[i].szName, m_lstSubSchedule.GetItemText(i, 2).GetBuffer());
			}

			fwrite(pScheduleSetting, sizeof(SCHEDULE_INFO), nCount, fp);

			delete[] pScheduleSetting;
			pScheduleSetting = NULL;
		}
	}

	COleDateTime odtTime;
	
	m_dtStartTime.GetTime(odtTime);
	int nStartTime = odtTime.GetHour() * 100 + odtTime.GetMinute();
	fwrite(&nStartTime, sizeof(int), 1, fp);

	m_dtStopTime.GetTime(odtTime);
	int nStopTime = odtTime.GetHour() * 100 + odtTime.GetMinute();
	fwrite(&nStopTime, sizeof(int), 1, fp);

	fclose(fp);

	swprintf(szPath, L"%s\\Setting\\%d\\Schedule.ini", g_szAppPath, g_nIndex);

	WCHAR szVal[MAX_NAME], szKey[MAX_NAME];
	
	swprintf(szVal, L"%d", m_nCharActor);
	WritePrivateProfileString(L"Create", L"Actor", szVal, szPath);

	swprintf(szVal, L"%d", m_nStat1);
	WritePrivateProfileString(L"Create", L"Stat1", szVal, szPath);
	swprintf(szVal, L"%d", m_nStat2);
	WritePrivateProfileString(L"Create", L"Stat2", szVal, szPath);

	//swprintf(szVal, L"%d", m_nCharClass);
	//WritePrivateProfileString(L"Create", L"Class", szVal, szPath);

	//swprintf(szVal, L"%d", m_bSnakeDungeon);
	//WritePrivateProfileString(L"Dungeon", L"Snake", szVal, szPath);;

	swprintf(szVal, L"%d", m_bRandomSchedule);
	WritePrivateProfileString(L"Schedule", L"Random", szVal, szPath);

	swprintf(szVal, L"%d", m_bUseInit);
	WritePrivateProfileString(L"Schedule", L"UseInit", szVal, szPath);
	g_bUseInitSchedule = m_bUseInit;

	swprintf(szVal, L"%d", m_bOptimization);
	WritePrivateProfileString(L"Schedule", L"Optimization", szVal, szPath);

	swprintf_s(szVal, L"%d", m_bTryServer);
	WritePrivateProfileString(L"TryServer", L"Use", szVal, szPath);

	int nTryServerCount = m_lstTryServerList.GetItemCount();
	swprintf_s(szVal, L"%d", nTryServerCount);
	WritePrivateProfileString(L"TryServer", L"Count", szVal, szPath);

	for (int i = 0; i < nTryServerCount; i++)
	{
		swprintf_s(szVal, L"%d", (int)m_lstTryServerList.GetItemData(i));
		swprintf_s(szKey, L"Index%d", i);
		WritePrivateProfileString(L"TryServer", szKey, szVal, szPath);
	}

	swprintf_s(szVal, L"%d", m_bTryServerStop);
	WritePrivateProfileString(L"TryServer", L"Stop", szVal, szPath);

	swprintf(szVal, L"%d", m_bCountry);
	WritePrivateProfileString(L"Schedule", L"Country", szVal, szPath);
	swprintf(szVal, L"%d", m_nCountry);
	WritePrivateProfileString(L"Schedule", L"CountryID", szVal, szPath);
	swprintf(szVal, L"%d", m_b56002);
	WritePrivateProfileString(L"Schedule", L"56002", szVal, szPath);
	swprintf(szVal, L"%d", m_bSkipDeviceReg);
	WritePrivateProfileString(L"Schedule", L"SkipDeviceReg", szVal, szPath);

	int nTimeDelay = 0;
	if (nStartTime <= nStopTime)
		nTimeDelay = ((nStopTime / 100) - (nStartTime / 100)) * 60 + (nStopTime % 100) % 60 - (nStartTime % 100) % 60;
	else
		nTimeDelay = 1440 - (((nStartTime / 100) - (nStopTime / 100)) * 60 + (nStartTime % 100) % 60 - (nStopTime % 100) % 60);

	int nInitDelay = 0;
	if (nStartTime <= g_nScheduleInitTime)
		nInitDelay = ((g_nScheduleInitTime / 100) - (nStartTime / 100)) * 60 + (g_nScheduleInitTime % 100) % 60 - (nStartTime % 100) % 60;
	else
		nInitDelay = 1440 - (((nStartTime / 100) - (g_nScheduleInitTime / 100)) * 60 + (nStartTime % 100) % 60 - (g_nScheduleInitTime % 100) % 60);

	if (nInitDelay > nTimeDelay)
	{
		if (nTimeDelay <= 0)
			g_nScheduleInitTime = nStartTime;
		else
		{
			int nAddTime = (nStartTime % 100) % 60 + rand() % nTimeDelay;
			g_nScheduleInitTime = ((nStartTime / 100 + nAddTime / 60) % 24) * 100 + nAddTime % 60;
		}
	}

	g_nScheduleStartTime = nStartTime;
	g_nScheduleDelayTime = nTimeDelay;

	SYSTEMTIME time;
	GetLocalTime(&time);

	g_nScheduleInitDate = time.wMonth * 100 + time.wDay;
	swprintf(szVal, L"%d", g_nScheduleInitDate);
	WritePrivateProfileString(L"Schedule", L"InitDate", szVal, szPath);

	swprintf(szVal, L"%d", g_nScheduleInitTime);
	WritePrivateProfileString(L"Schedule", L"InitTime", szVal, szPath);
	
	EnterCriticalSection(&g_csScheduleTime);

	g_bRandomSchedule = m_bRandomSchedule;

	g_nScheduleCountTemp = nScheduleCount;

	if (g_pScheduleTimeTemp)
		delete[] g_pScheduleTimeTemp;
	g_pScheduleTimeTemp = NULL;

	if (g_nScheduleCountTemp > 0)
	{
		g_pScheduleTimeTemp = new Schedule_Time[g_nScheduleCountTemp];
		memset(g_pScheduleTimeTemp, 0, sizeof(Schedule_Time) * g_nScheduleCountTemp);

		swprintf(szPath, L"%s\\Status\\%d.dat", g_szAppPath, g_nIndex);

		nScheduleCount = 0;
		for (int i = 0; i < m_lstMainSchedule.GetItemCount(); i++)
		{
			if (nScheduleCount >= g_nScheduleCountTemp)
				break;

			if(!m_lstMainSchedule.GetCheck(i))
				continue;

			wcscpy(g_pScheduleTimeTemp[nScheduleCount].szName, m_lstMainSchedule.GetItemText(i, 2).GetBuffer());
			if (_wtoi(m_lstMainSchedule.GetItemText(i, 6).GetBuffer()) != 0)				// TimeEnable 이면
			{
				g_pScheduleTimeTemp[nScheduleCount].nTimeMode = _wtoi(m_lstMainSchedule.GetItemText(i, 7).GetBuffer()) + 1;
				if (g_pScheduleTimeTemp[nScheduleCount].nTimeMode == 1)
				{
					g_pScheduleTimeTemp[nScheduleCount].nTimeStart = _wtoi(m_lstMainSchedule.GetItemText(i, 8).GetBuffer());
					g_pScheduleTimeTemp[nScheduleCount].nTimeStop = _wtoi(m_lstMainSchedule.GetItemText(i, 9).GetBuffer());
				}
				else
					g_pScheduleTimeTemp[nScheduleCount].nHuntTime = _wtoi(m_lstMainSchedule.GetItemText(i, 10).GetBuffer());
			}

			WCHAR szTime[MAX_NAME] = { 0, };
			GetPrivateProfileString(L"ScheduleTime", g_pScheduleTimeTemp[nScheduleCount].szName, L"0", szTime, MAX_NAME, szPath);
			g_pScheduleTimeTemp[nScheduleCount].dwLastScheduleTime = wcstoul(szTime, NULL, 0);

			nScheduleCount++;
		}
	}

	g_bScheduleSettingChange = TRUE;
	LeaveCriticalSection(&g_csScheduleTime);
}


void CSubSchedule::OnAddMainSchedule()
{
	CScheduleDetail dlgDetail;
	dlgDetail.m_szDefaultName = m_szPrevName;
	if(dlgDetail.DoModal() != IDOK)
		return;

	for (int i = 0; i < m_lstMainSchedule.GetItemCount(); i++)
	{
		if (!wcscmp(dlgDetail.m_szScheduleName.GetBuffer(), m_lstMainSchedule.GetItemText(i, 2).GetBuffer()))
			return;
	}

	WCHAR szTmp[MAX_NAME];
	CString strLabel;

	m_lstMainSchedule.InsertItem(m_lstMainSchedule.GetItemCount(), L"");

	swprintf(szTmp, L"%d", m_lstMainSchedule.GetItemCount());
	m_lstMainSchedule.SetItemText(m_lstMainSchedule.GetItemCount() - 1, 1, szTmp);

	m_lstMainSchedule.SetItemText(m_lstMainSchedule.GetItemCount() - 1, 2, dlgDetail.m_szScheduleName.GetBuffer());

	if (dlgDetail.m_bSelServer)
	{
		if (g_bTaiwanLang)
			m_lstMainSchedule.SetItemText(m_lstMainSchedule.GetItemCount() - 1, 3, g_szServerName[dlgDetail.m_nServer % MAX_SERVER].szTWName);
		else
			m_lstMainSchedule.SetItemText(m_lstMainSchedule.GetItemCount() - 1, 3, g_szServerName[dlgDetail.m_nServer % MAX_SERVER].szKRName);
	}

	if(dlgDetail.m_bSelChar)
	{
		strLabel.LoadString(NULL, IDS_STRING60100, g_wLanguageID);
		swprintf(szTmp, L"%d%s", dlgDetail.m_nChar + 1, strLabel.GetBuffer());
		m_lstMainSchedule.SetItemText(m_lstMainSchedule.GetItemCount() - 1, 4, szTmp);
	}

	CString sWeek = L"";
	if (dlgDetail.m_nWeek)
	{
		sWeek.LoadString(NULL, IDS_EVERYDAY + dlgDetail.m_nWeek, g_wLanguageID);
		sWeek += L" ";
	}

	if(dlgDetail.m_bTimeEnable)
	{
		if(dlgDetail.m_nTimeMode == 0)
		{
			strLabel.LoadString(NULL, IDS_TIMEDISPLAY, g_wLanguageID);
			swprintf(szTmp, strLabel.GetBuffer(), (dlgDetail.m_nTimeStart / 100) % 24, (dlgDetail.m_nTimeStart % 100) % 60, (dlgDetail.m_nTimeStop / 100) % 24, (dlgDetail.m_nTimeStop % 100) % 60);
		}
		else
		{
			strLabel.LoadString(NULL, IDS_MINUTE, g_wLanguageID);
			swprintf(szTmp, L"%d%s", dlgDetail.m_nHuntTime, strLabel.GetBuffer());
		}

		m_lstMainSchedule.SetItemText(m_lstMainSchedule.GetItemCount() - 1, 5, szTmp);
	}

	swprintf(szTmp, L"%d", dlgDetail.m_bTimeEnable);
	m_lstMainSchedule.SetItemText(m_lstMainSchedule.GetItemCount() - 1, 6, szTmp);

	swprintf(szTmp, L"%d", dlgDetail.m_nTimeMode);
	m_lstMainSchedule.SetItemText(m_lstMainSchedule.GetItemCount() - 1, 7, szTmp);

	swprintf(szTmp, L"%d", dlgDetail.m_nTimeStart);
	m_lstMainSchedule.SetItemText(m_lstMainSchedule.GetItemCount() - 1, 8, szTmp);

	swprintf(szTmp, L"%d", dlgDetail.m_nTimeStop);
	m_lstMainSchedule.SetItemText(m_lstMainSchedule.GetItemCount() - 1, 9, szTmp);

	swprintf(szTmp, L"%d", dlgDetail.m_nHuntTime);
	m_lstMainSchedule.SetItemText(m_lstMainSchedule.GetItemCount() - 1, 10, szTmp);

	strLabel.LoadString(NULL, IDS_WAITING, g_wLanguageID);
	m_lstMainSchedule.SetItemText(m_lstMainSchedule.GetItemCount() - 1, 11, strLabel.GetBuffer());

	swprintf_s(szTmp, L"%d", dlgDetail.m_nWeek);
	m_lstMainSchedule.SetItemText(m_lstMainSchedule.GetItemCount() - 1, 12, szTmp);

	m_lstMainSchedule.SetCheck(m_lstMainSchedule.GetItemCount() - 1);

	m_lstMainSchedule.SetItemData(m_lstMainSchedule.GetItemCount() - 1, 0);

	m_szPrevName = dlgDetail.m_szScheduleName;
}


void CSubSchedule::OnDelMainSchedule()
{
	POSITION Pos = m_lstMainSchedule.GetFirstSelectedItemPosition();
	if(Pos == NULL)
		return;

	CString strLabel;
	strLabel.LoadString(NULL, IDS_REALLYDELETE, g_wLanguageID);

	CString strNotice;
	strNotice.LoadString(NULL, IDS_NOTICE, g_wLanguageID);

	if(MessageBox(strLabel.GetBuffer(), strNotice.GetBuffer(), MB_YESNO) != IDYES)
		return;

	int nIndex = m_lstMainSchedule.GetNextSelectedItem(Pos);
	m_lstMainSchedule.DeleteItem(nIndex);

	WCHAR szTmp[MAX_NAME];
	for(int i = nIndex; i < m_lstMainSchedule.GetItemCount(); i++)
	{
		swprintf(szTmp, L"%d", i + 1);
		m_lstMainSchedule.SetItemText(i, 1, szTmp);
	}
}


void CSubSchedule::OnChangeMainSchedule(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMITEMACTIVATE pNMItemActivate = reinterpret_cast<LPNMITEMACTIVATE>(pNMHDR);
	if(pNMItemActivate->iItem < 0)
		return;
	
	CScheduleDetail dlgDetail;
	dlgDetail.m_szScheduleName = m_lstMainSchedule.GetItemText(pNMItemActivate->iItem, 2);
	if(dlgDetail.DoModal() != IDOK)
		return;

	for (int i = 0; i < m_lstMainSchedule.GetItemCount(); i++)
	{
		if(i == pNMItemActivate->iItem)
			continue;

		if (!wcscmp(dlgDetail.m_szScheduleName.GetBuffer(), m_lstMainSchedule.GetItemText(i, 2).GetBuffer()))
			return;
	}

	WCHAR szTmp[MAX_NAME];
	CString strLabel;

	m_lstMainSchedule.SetItemText(pNMItemActivate->iItem, 2, dlgDetail.m_szScheduleName.GetBuffer());

	if (dlgDetail.m_bSelServer)
	{
		if (g_bTaiwanLang)
			m_lstMainSchedule.SetItemText(pNMItemActivate->iItem, 3, g_szServerName[dlgDetail.m_nServer % MAX_SERVER].szTWName);
		else
			m_lstMainSchedule.SetItemText(pNMItemActivate->iItem, 3, g_szServerName[dlgDetail.m_nServer % MAX_SERVER].szKRName);
	}
	else
		m_lstMainSchedule.SetItemText(pNMItemActivate->iItem, 3, L"");

	if(dlgDetail.m_bSelChar)
	{
		strLabel.LoadString(NULL, IDS_STRING60100, g_wLanguageID);
		swprintf(szTmp, L"%d%s", dlgDetail.m_nChar + 1, strLabel.GetBuffer());
		m_lstMainSchedule.SetItemText(pNMItemActivate->iItem, 4, szTmp);
	}
	else
		m_lstMainSchedule.SetItemText(pNMItemActivate->iItem, 4, L"");

	CString sWeek = L"";
	if (dlgDetail.m_nWeek)
	{
		sWeek.LoadString(NULL, IDS_EVERYDAY + dlgDetail.m_nWeek, g_wLanguageID);
		sWeek += L" ";
	}

	if(dlgDetail.m_bTimeEnable)
	{
		if(dlgDetail.m_nTimeMode == 0)
		{
			strLabel.LoadString(NULL, IDS_TIMEDISPLAY, g_wLanguageID);
			swprintf(szTmp, strLabel.GetBuffer(), (dlgDetail.m_nTimeStart / 100) % 24, (dlgDetail.m_nTimeStart % 100) % 60, (dlgDetail.m_nTimeStop / 100) % 24, (dlgDetail.m_nTimeStop % 100) % 60);
		}
		else
		{
			strLabel.LoadString(NULL, IDS_MINUTE, g_wLanguageID);
			swprintf(szTmp, L"%d%s", dlgDetail.m_nHuntTime, strLabel.GetBuffer());
		}

		m_lstMainSchedule.SetItemText(pNMItemActivate->iItem, 5, szTmp);
	}
	else
		m_lstMainSchedule.SetItemText(pNMItemActivate->iItem, 5, L"");

	swprintf(szTmp, L"%d", dlgDetail.m_bTimeEnable);
	m_lstMainSchedule.SetItemText(pNMItemActivate->iItem, 6, szTmp);

	swprintf(szTmp, L"%d", dlgDetail.m_nTimeMode);
	m_lstMainSchedule.SetItemText(pNMItemActivate->iItem, 7, szTmp);

	swprintf(szTmp, L"%d", dlgDetail.m_nTimeStart);
	m_lstMainSchedule.SetItemText(pNMItemActivate->iItem, 8, szTmp);

	swprintf(szTmp, L"%d", dlgDetail.m_nTimeStop);
	m_lstMainSchedule.SetItemText(pNMItemActivate->iItem, 9, szTmp);

	swprintf(szTmp, L"%d", dlgDetail.m_nHuntTime);
	m_lstMainSchedule.SetItemText(pNMItemActivate->iItem, 10, szTmp);

	swprintf_s(szTmp, L"%d", dlgDetail.m_nWeek);
	m_lstMainSchedule.SetItemText(pNMItemActivate->iItem, 12, szTmp);

	m_szPrevName = dlgDetail.m_szScheduleName;

	*pResult = 0;
}


void CSubSchedule::OnSortUp()
{
	POSITION Pos = m_lstMainSchedule.GetFirstSelectedItemPosition();
	if(Pos == NULL)
		return;

	int nIndex = m_lstMainSchedule.GetNextSelectedItem(Pos);
	if (nIndex == 0)
		return;

	CString str;
	str = m_lstMainSchedule.GetItemText(nIndex - 1, 2);
	m_lstMainSchedule.SetItemText(nIndex - 1, 2, m_lstMainSchedule.GetItemText(nIndex, 2).GetBuffer());
	m_lstMainSchedule.SetItemText(nIndex, 2, str.GetBuffer());

	str = m_lstMainSchedule.GetItemText(nIndex - 1, 3);
	m_lstMainSchedule.SetItemText(nIndex - 1, 3, m_lstMainSchedule.GetItemText(nIndex, 3).GetBuffer());
	m_lstMainSchedule.SetItemText(nIndex, 3, str.GetBuffer());

	str = m_lstMainSchedule.GetItemText(nIndex - 1, 4);
	m_lstMainSchedule.SetItemText(nIndex - 1, 4, m_lstMainSchedule.GetItemText(nIndex, 4).GetBuffer());
	m_lstMainSchedule.SetItemText(nIndex, 4, str.GetBuffer());

	str = m_lstMainSchedule.GetItemText(nIndex - 1, 5);
	m_lstMainSchedule.SetItemText(nIndex - 1, 5, m_lstMainSchedule.GetItemText(nIndex, 5).GetBuffer());
	m_lstMainSchedule.SetItemText(nIndex, 5, str.GetBuffer());

	str = m_lstMainSchedule.GetItemText(nIndex - 1, 6);
	m_lstMainSchedule.SetItemText(nIndex - 1, 6, m_lstMainSchedule.GetItemText(nIndex, 6).GetBuffer());
	m_lstMainSchedule.SetItemText(nIndex, 6, str.GetBuffer());

	str = m_lstMainSchedule.GetItemText(nIndex - 1, 7);
	m_lstMainSchedule.SetItemText(nIndex - 1, 7, m_lstMainSchedule.GetItemText(nIndex, 7).GetBuffer());
	m_lstMainSchedule.SetItemText(nIndex, 7, str.GetBuffer());

	str = m_lstMainSchedule.GetItemText(nIndex - 1, 8);
	m_lstMainSchedule.SetItemText(nIndex - 1, 8, m_lstMainSchedule.GetItemText(nIndex, 8).GetBuffer());
	m_lstMainSchedule.SetItemText(nIndex, 8, str.GetBuffer());

	str = m_lstMainSchedule.GetItemText(nIndex - 1, 9);
	m_lstMainSchedule.SetItemText(nIndex - 1, 9, m_lstMainSchedule.GetItemText(nIndex, 9).GetBuffer());
	m_lstMainSchedule.SetItemText(nIndex, 9, str.GetBuffer());

	str = m_lstMainSchedule.GetItemText(nIndex - 1, 10);
	m_lstMainSchedule.SetItemText(nIndex - 1, 10, m_lstMainSchedule.GetItemText(nIndex, 10).GetBuffer());
	m_lstMainSchedule.SetItemText(nIndex, 10, str.GetBuffer());

	str = m_lstMainSchedule.GetItemText(nIndex - 1, 11);
	m_lstMainSchedule.SetItemText(nIndex - 1, 11, m_lstMainSchedule.GetItemText(nIndex, 11).GetBuffer());
	m_lstMainSchedule.SetItemText(nIndex, 11, str.GetBuffer());

	BOOL bCheck = m_lstMainSchedule.GetCheck(nIndex - 1);
	m_lstMainSchedule.SetCheck(nIndex - 1, m_lstMainSchedule.GetCheck(nIndex));
	m_lstMainSchedule.SetCheck(nIndex, bCheck);

	DWORD dwValue = (DWORD)m_lstMainSchedule.GetItemData(nIndex - 1);
	m_lstMainSchedule.SetItemData(nIndex - 1, m_lstMainSchedule.GetItemData(nIndex));
	m_lstMainSchedule.SetItemData(nIndex, dwValue);

	int nSelIndex = m_lstMainSchedule.GetNextItem(-1, LVNI_SELECTED);
	while (1)
	{
		if (nSelIndex >= 0)
		{
			m_lstMainSchedule.SetItemState(nSelIndex, 0, LVIS_SELECTED);
			nSelIndex = m_lstMainSchedule.GetNextItem(-1, LVNI_SELECTED);
		}
		else
			break;
	}

	ListView_SetItemState(m_lstMainSchedule.GetSafeHwnd(), nIndex - 1, LVIS_FOCUSED | LVIS_SELECTED, 0x000F);
	m_lstMainSchedule.EnsureVisible(nIndex - 1, TRUE);
}


void CSubSchedule::OnSortDown()
{
	POSITION Pos = m_lstMainSchedule.GetFirstSelectedItemPosition();
	if (Pos == NULL)
		return;

	int nIndex = m_lstMainSchedule.GetNextSelectedItem(Pos);
	if (nIndex == m_lstMainSchedule.GetItemCount() - 1)
		return;

	CString str;
	str = m_lstMainSchedule.GetItemText(nIndex + 1, 2);
	m_lstMainSchedule.SetItemText(nIndex + 1, 2, m_lstMainSchedule.GetItemText(nIndex, 2).GetBuffer());
	m_lstMainSchedule.SetItemText(nIndex, 2, str.GetBuffer());

	str = m_lstMainSchedule.GetItemText(nIndex + 1, 3);
	m_lstMainSchedule.SetItemText(nIndex + 1, 3, m_lstMainSchedule.GetItemText(nIndex, 3).GetBuffer());
	m_lstMainSchedule.SetItemText(nIndex, 3, str.GetBuffer());

	str = m_lstMainSchedule.GetItemText(nIndex + 1, 4);
	m_lstMainSchedule.SetItemText(nIndex + 1, 4, m_lstMainSchedule.GetItemText(nIndex, 4).GetBuffer());
	m_lstMainSchedule.SetItemText(nIndex, 4, str.GetBuffer());

	str = m_lstMainSchedule.GetItemText(nIndex + 1, 5);
	m_lstMainSchedule.SetItemText(nIndex + 1, 5, m_lstMainSchedule.GetItemText(nIndex, 5).GetBuffer());
	m_lstMainSchedule.SetItemText(nIndex, 5, str.GetBuffer());

	str = m_lstMainSchedule.GetItemText(nIndex + 1, 6);
	m_lstMainSchedule.SetItemText(nIndex + 1, 6, m_lstMainSchedule.GetItemText(nIndex, 6).GetBuffer());
	m_lstMainSchedule.SetItemText(nIndex, 6, str.GetBuffer());

	str = m_lstMainSchedule.GetItemText(nIndex + 1, 7);
	m_lstMainSchedule.SetItemText(nIndex + 1, 7, m_lstMainSchedule.GetItemText(nIndex, 7).GetBuffer());
	m_lstMainSchedule.SetItemText(nIndex, 7, str.GetBuffer());

	str = m_lstMainSchedule.GetItemText(nIndex + 1, 8);
	m_lstMainSchedule.SetItemText(nIndex + 1, 8, m_lstMainSchedule.GetItemText(nIndex, 8).GetBuffer());
	m_lstMainSchedule.SetItemText(nIndex, 8, str.GetBuffer());

	str = m_lstMainSchedule.GetItemText(nIndex + 1, 9);
	m_lstMainSchedule.SetItemText(nIndex + 1, 9, m_lstMainSchedule.GetItemText(nIndex, 9).GetBuffer());
	m_lstMainSchedule.SetItemText(nIndex, 9, str.GetBuffer());

	str = m_lstMainSchedule.GetItemText(nIndex + 1, 10);
	m_lstMainSchedule.SetItemText(nIndex + 1, 10, m_lstMainSchedule.GetItemText(nIndex, 10).GetBuffer());
	m_lstMainSchedule.SetItemText(nIndex, 10, str.GetBuffer());

	str = m_lstMainSchedule.GetItemText(nIndex + 1, 11);
	m_lstMainSchedule.SetItemText(nIndex + 1, 11, m_lstMainSchedule.GetItemText(nIndex, 11).GetBuffer());
	m_lstMainSchedule.SetItemText(nIndex, 11, str.GetBuffer());

	BOOL bCheck = m_lstMainSchedule.GetCheck(nIndex + 1);
	m_lstMainSchedule.SetCheck(nIndex + 1, m_lstMainSchedule.GetCheck(nIndex));
	m_lstMainSchedule.SetCheck(nIndex, bCheck);

	DWORD dwValue = (DWORD)m_lstMainSchedule.GetItemData(nIndex + 1);
	m_lstMainSchedule.SetItemData(nIndex + 1, m_lstMainSchedule.GetItemData(nIndex));
	m_lstMainSchedule.SetItemData(nIndex, dwValue);

	int nSelIndex = m_lstMainSchedule.GetNextItem(-1, LVNI_SELECTED);
	while (1)
	{
		if (nSelIndex >= 0)
		{
			m_lstMainSchedule.SetItemState(nSelIndex, 0, LVIS_SELECTED);
			nSelIndex = m_lstMainSchedule.GetNextItem(-1, LVNI_SELECTED);
		}
		else
			break;
	}

	ListView_SetItemState(m_lstMainSchedule.GetSafeHwnd(), nIndex + 1, LVIS_FOCUSED | LVIS_SELECTED, 0x000F);
	m_lstMainSchedule.EnsureVisible(nIndex + 1, TRUE);
}


void CSubSchedule::OnAddSubSchedule()
{
	CScheduleDetail dlgDetail;
	dlgDetail.m_szScheduleName = m_szPrevName;
	if(dlgDetail.DoModal() != IDOK)
		return;

	WCHAR szTmp[MAX_NAME];

	m_lstSubSchedule.InsertItem(m_lstSubSchedule.GetItemCount(), L"");

	swprintf(szTmp, L"%d", m_lstSubSchedule.GetItemCount());
	m_lstSubSchedule.SetItemText(m_lstSubSchedule.GetItemCount() - 1, 1, szTmp);

	m_lstSubSchedule.SetItemText(m_lstSubSchedule.GetItemCount() - 1, 2, dlgDetail.m_szScheduleName.GetBuffer());

	if(dlgDetail.m_bTimeEnable)
	{
		CString strLabel;
		if(dlgDetail.m_nTimeMode == 0)
		{
			strLabel.LoadString(NULL, IDS_TIMEDISPLAY, g_wLanguageID);
			swprintf(szTmp, strLabel.GetBuffer(), (dlgDetail.m_nTimeStart / 100) % 24, (dlgDetail.m_nTimeStart % 100) % 60, (dlgDetail.m_nTimeStop / 100) % 24, (dlgDetail.m_nTimeStop % 100) % 60);
		}
		else
		{
			strLabel.LoadString(NULL, IDS_MINUTE, g_wLanguageID);
			swprintf(szTmp, L"%d%s", dlgDetail.m_nHuntTime, strLabel.GetBuffer());
		}

		m_lstSubSchedule.SetItemText(m_lstSubSchedule.GetItemCount() - 1, 3, szTmp);
	}

	swprintf(szTmp, L"%d", dlgDetail.m_bTimeEnable);
	m_lstSubSchedule.SetItemText(m_lstSubSchedule.GetItemCount() - 1, 4, szTmp);

	swprintf(szTmp, L"%d", dlgDetail.m_nTimeMode);
	m_lstSubSchedule.SetItemText(m_lstSubSchedule.GetItemCount() - 1, 5, szTmp);

	swprintf(szTmp, L"%d", dlgDetail.m_nTimeStart);
	m_lstSubSchedule.SetItemText(m_lstSubSchedule.GetItemCount() - 1, 6, szTmp);

	swprintf(szTmp, L"%d", dlgDetail.m_nTimeStop);
	m_lstSubSchedule.SetItemText(m_lstSubSchedule.GetItemCount() - 1, 7, szTmp);

	swprintf(szTmp, L"%d", dlgDetail.m_nHuntTime);
	m_lstSubSchedule.SetItemText(m_lstSubSchedule.GetItemCount() - 1, 8, szTmp);

	m_lstSubSchedule.SetCheck(m_lstSubSchedule.GetItemCount() - 1);

	m_szPrevName = dlgDetail.m_szScheduleName;
}


void CSubSchedule::OnDelSubSchedule()
{
	POSITION Pos = m_lstSubSchedule.GetFirstSelectedItemPosition();
	if(Pos == NULL)
		return;

	CString strLabel;
	strLabel.LoadString(NULL, IDS_REALLYDELETE, g_wLanguageID);

	CString strNotice;
	strNotice.LoadString(NULL, IDS_NOTICE, g_wLanguageID);

	if(MessageBox(strLabel.GetBuffer(), strNotice.GetBuffer(), MB_YESNO) != IDYES)
		return;

	int nIndex = m_lstSubSchedule.GetNextSelectedItem(Pos);
	m_lstSubSchedule.DeleteItem(nIndex);

	WCHAR szTmp[MAX_NAME];
	for(int i = nIndex; i < m_lstSubSchedule.GetItemCount(); i++)
	{
		swprintf(szTmp, L"%d", i + 1);
		m_lstSubSchedule.SetItemText(i, 1, szTmp);
	}
}


void CSubSchedule::OnChangeSubSchedule(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMITEMACTIVATE pNMItemActivate = reinterpret_cast<LPNMITEMACTIVATE>(pNMHDR);
	if(pNMItemActivate->iItem < 0)
		return;

	CScheduleDetail dlgDetail;
	dlgDetail.m_szScheduleName = m_lstSubSchedule.GetItemText(pNMItemActivate->iItem, 2);
	if(dlgDetail.DoModal() != IDOK)
		return;

	WCHAR szTmp[MAX_NAME];

	m_lstSubSchedule.SetItemText(pNMItemActivate->iItem, 2, dlgDetail.m_szScheduleName.GetBuffer());

	if(dlgDetail.m_bTimeEnable)
	{
		CString strLabel;
		if(dlgDetail.m_nTimeMode == 0)
		{
			strLabel.LoadString(NULL, IDS_TIMEDISPLAY, g_wLanguageID);
			swprintf(szTmp, strLabel.GetBuffer(), (dlgDetail.m_nTimeStart / 100) % 24, (dlgDetail.m_nTimeStart % 100) % 60, (dlgDetail.m_nTimeStop / 100) % 24, (dlgDetail.m_nTimeStop % 100) % 60);
		}
		else
		{
			strLabel.LoadString(NULL, IDS_MINUTE, g_wLanguageID);
			swprintf(szTmp, L"%d%s", dlgDetail.m_nHuntTime, strLabel.GetBuffer());
		}

		m_lstSubSchedule.SetItemText(pNMItemActivate->iItem, 3, szTmp);
	}
	else
		m_lstSubSchedule.SetItemText(pNMItemActivate->iItem, 3, L"");

	swprintf(szTmp, L"%d", dlgDetail.m_bTimeEnable);
	m_lstSubSchedule.SetItemText(pNMItemActivate->iItem, 4, szTmp);

	swprintf(szTmp, L"%d", dlgDetail.m_nTimeMode);
	m_lstSubSchedule.SetItemText(pNMItemActivate->iItem, 5, szTmp);

	swprintf(szTmp, L"%d", dlgDetail.m_nTimeStart);
	m_lstSubSchedule.SetItemText(pNMItemActivate->iItem, 6, szTmp);

	swprintf(szTmp, L"%d", dlgDetail.m_nTimeStop);
	m_lstSubSchedule.SetItemText(pNMItemActivate->iItem, 7, szTmp);

	swprintf(szTmp, L"%d", dlgDetail.m_nHuntTime);
	m_lstSubSchedule.SetItemText(pNMItemActivate->iItem, 8, szTmp);
	
	*pResult = 0;
}


void CSubSchedule::ResetSchedule()
{
	EnterCriticalSection(&g_csScheduleTime);

	g_nScheduleCountTemp = g_nScheduleCount;

	if (g_pScheduleTimeTemp)
		delete[] g_pScheduleTimeTemp;
	g_pScheduleTimeTemp = NULL;

	if (g_nScheduleCountTemp > 0)
	{
		g_pScheduleTimeTemp = new Schedule_Time[g_nScheduleCountTemp];
		memcpy(g_pScheduleTimeTemp, g_pScheduleTime, sizeof(Schedule_Time) * g_nScheduleCountTemp);

		for (int i = 0; i < g_nScheduleCountTemp; i++)
			g_pScheduleTimeTemp[i].dwLastScheduleTime = 0;
	}

	g_bScheduleSettingChange = TRUE;
	LeaveCriticalSection(&g_csScheduleTime);

	CString strLabel;
	strLabel.LoadString(NULL, IDS_WAITING, g_wLanguageID);
	for (int i = 0; i < m_lstMainSchedule.GetItemCount(); i++)
	{
		m_lstMainSchedule.SetItemText(i, 11, strLabel);
	}

	ShowStatus(0, IDS_INITNOTICE);
}


void CSubSchedule::OnInitSchedule()
{
	CString strLabel, strNotice;
	strLabel.LoadString(NULL, IDS_INITALERT, g_wLanguageID);
	strNotice.LoadString(NULL, IDS_NOTICE, g_wLanguageID);

	if (MessageBox(strLabel.GetBuffer(), strNotice.GetBuffer(), MB_YESNO) != IDYES)
		return;

	WCHAR szPath[MAX_PATH];
	swprintf(szPath, L"%s\\Status\\%d.dat", g_szAppPath, g_nIndex);
	DeleteFile(szPath);

	ResetSchedule();
}


LRESULT CSubSchedule::WindowProc(UINT message, WPARAM wParam, LPARAM lParam)
{
	if (message == WM_RESETMESSAGE)
		ResetSchedule();
	else if (message == WM_SCHEDULEMESSAGE)
		ChangeScheduleState((int)wParam);

	return CDialog::WindowProc(message, wParam, lParam);
}


void CSubSchedule::ChangeScheduleState(int nType)
{
	if (g_pGameMapping)
	{
		if (nType == 1)
		{
			CString strDoing, strWaiting;
			strDoing.LoadString(NULL, IDS_DOING, g_wLanguageID);
			strWaiting.LoadString(NULL, IDS_WAITING, g_wLanguageID);

			for (int i = 0; i < m_lstMainSchedule.GetItemCount(); i++)
			{
				m_lstMainSchedule.SetItemData(i, 0);

				if (!wcscmp(m_lstMainSchedule.GetItemText(i, 2).GetBuffer(), g_pGameMapping->szSchedule))
				{
					m_lstMainSchedule.SetItemText(i, 11, strDoing.GetBuffer());
					m_lstMainSchedule.SetItemData(i, 1);
				}
				else if(!wcscmp(m_lstMainSchedule.GetItemText(i, 11).GetBuffer(), strDoing.GetBuffer()))
					m_lstMainSchedule.SetItemText(i, 11, strWaiting.GetBuffer());
			}
		}
		else if (nType == 2)
		{
			if (wcscmp(g_pGameMapping->szSchedule, L""))
			{
				CString strFinish;
				strFinish.LoadString(NULL, IDS_FINISHED, g_wLanguageID);

				for (int i = 0; i < m_lstMainSchedule.GetItemCount(); i++)
				{
					m_lstMainSchedule.SetItemData(i, 0);

					if (!wcscmp(m_lstMainSchedule.GetItemText(i, 2).GetBuffer(), g_pGameMapping->szSchedule))
						m_lstMainSchedule.SetItemText(i, 11, strFinish.GetBuffer());
				}

				WCHAR szPath[MAX_PATH], szVal[MAX_NAME];

				swprintf(szPath, L"%s\\Status", g_szAppPath);
				if (!IsFileExist(szPath))
					_wmkdir(szPath);

				swprintf(szPath, L"%s\\Status\\%d.dat", g_szAppPath, g_nIndex);

				SYSTEMTIME time;
				GetLocalTime(&time);

				unsigned int dwCurTime = time.wYear % 100;
				dwCurTime = dwCurTime * 100 + time.wMonth;
				dwCurTime = dwCurTime * 100 + time.wDay;
				dwCurTime = dwCurTime * 100 + time.wHour;
				dwCurTime = dwCurTime * 100 + time.wMinute;

				swprintf(szVal, L"%u", dwCurTime);
				WritePrivateProfileString(L"ScheduleTime", g_pGameMapping->szSchedule, szVal, szPath);

				g_bScheduleTimeCheck = FALSE;
				g_nScheduleTimeValue = 0;
				g_qwScheduleTimeTick = 0;

				EnterCriticalSection(&g_csScheduleTime);

				g_nScheduleCountTemp = g_nScheduleCount;

				if (g_pScheduleTimeTemp)
					delete[] g_pScheduleTimeTemp;
				g_pScheduleTimeTemp = NULL;

				if (g_nScheduleCountTemp > 0)
				{
					g_pScheduleTimeTemp = new Schedule_Time[g_nScheduleCountTemp];
					memcpy(g_pScheduleTimeTemp, g_pScheduleTime, sizeof(Schedule_Time) * g_nScheduleCountTemp);

					for (int i = 0; i < g_nScheduleCountTemp; i++)
					{
						if (!wcscmp(g_pScheduleTimeTemp[i].szName, g_pGameMapping->szSchedule))
						{
							g_pScheduleTimeTemp[i].dwLastScheduleTime = dwCurTime;
							break;
						}
					}
				}

				g_bScheduleSettingChange = TRUE;
				LeaveCriticalSection(&g_csScheduleTime);
			}
		}
	}
}

void CSubSchedule::OnCustomdrawList(NMHDR* pNMHDR, LRESULT* pResult)
{
	NMLVCUSTOMDRAW* pLVCD = (NMLVCUSTOMDRAW*)pNMHDR;
	*pResult = 0;

	if (CDDS_PREPAINT == pLVCD->nmcd.dwDrawStage)
		* pResult = CDRF_NOTIFYITEMDRAW;
	else if (CDDS_ITEMPREPAINT == pLVCD->nmcd.dwDrawStage)
	{
		if (m_lstMainSchedule.GetItemData((int)pLVCD->nmcd.dwItemSpec) != 0)
			pLVCD->clrText = RGB(255, 0, 0);
		else
			pLVCD->clrText = RGB(0, 0, 0);

		*pResult = CDRF_DODEFAULT;
	}
}


void CSubSchedule::OnChangeActor()
{
	UpdateData(TRUE);

	if (m_nCharActor == 0)
	{
		m_cbStat1.SetCurSel(0);
		m_cbStat2.SetCurSel(4);
	}
	else if (m_nCharActor == 1)
	{
		m_cbStat1.SetCurSel(1);
		m_cbStat2.SetCurSel(4);
	}
	else
	{
		m_cbStat1.SetCurSel(2);
		m_cbStat2.SetCurSel(4);
	}
}

void CSubSchedule::OnBnClickedCheckTryserver()
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);

	GetDlgItem(IDC_COMBO_TRYSERVERLIST)->EnableWindow(m_bTryServer);
	GetDlgItem(IDC_LIST_TRYSERVERLIST)->EnableWindow(m_bTryServer);
	GetDlgItem(IDC_BTN_ADDTRYSERVER)->EnableWindow(m_bTryServer);
	GetDlgItem(IDC_BTN_DELTRYSERVER)->EnableWindow(m_bTryServer);
	GetDlgItem(IDC_BTN_UPTRYSERVER)->EnableWindow(m_bTryServer);
	GetDlgItem(IDC_BTN_DOWNTRYSERVER)->EnableWindow(m_bTryServer);
	GetDlgItem(IDC_CHECK_TRYSERVERSTOP)->EnableWindow(m_bTryServer);
}

void CSubSchedule::OnBnClickedBtnAddtryserver()
{
	// TODO: Add your control notification handler code here
	int nIndex = m_cbTryServerList.GetCurSel();
	if (nIndex < 0)
		return;

	int i, nCount = m_lstTryServerList.GetItemCount();
	for (i = 0; i < nCount; i++)
	{
		if (m_lstTryServerList.GetItemData(i) == nIndex)
			break;
	}

	if (i == nCount)
	{
		if (g_bTaiwanLang)
			m_lstTryServerList.InsertItem(nCount, g_szServerName[nIndex].szTWName);
		else
			m_lstTryServerList.InsertItem(nCount, g_szServerName[nIndex].szKRName);
		m_lstTryServerList.SetItemData(nCount, nIndex);
	}
}

void CSubSchedule::OnBnClickedBtnDeltryserver()
{
	// TODO: Add your control notification handler code here
	POSITION pos = m_lstTryServerList.GetFirstSelectedItemPosition();
	if (pos == NULL)
		return;

	int nIndex = m_lstTryServerList.GetNextSelectedItem(pos);
	m_lstTryServerList.DeleteItem(nIndex);
}

void CSubSchedule::OnBnClickedBtnUptryserver()
{
	// TODO: Add your control notification handler code here
	POSITION pos = m_lstTryServerList.GetFirstSelectedItemPosition();
	if (pos == NULL)
		return;

	int nIndex = m_lstTryServerList.GetNextSelectedItem(pos);
	if (nIndex == 0)
		return;

	CString sTemp = m_lstTryServerList.GetItemText(nIndex - 1, 0);
	m_lstTryServerList.SetItemText(nIndex - 1, 0, m_lstTryServerList.GetItemText(nIndex, 0));
	m_lstTryServerList.SetItemText(nIndex, 0, sTemp);

	int nValue = (int)m_lstTryServerList.GetItemData(nIndex - 1);
	m_lstTryServerList.SetItemData(nIndex - 1, m_lstTryServerList.GetItemData(nIndex));
	m_lstTryServerList.SetItemData(nIndex, nValue);

	m_lstTryServerList.SetItemState(nIndex, 0, LVIS_SELECTED);
	m_lstTryServerList.SetItemState(nIndex - 1, LVIS_SELECTED, LVIS_SELECTED);
}

void CSubSchedule::OnBnClickedBtnDowntryserver()
{
	// TODO: Add your control notification handler code here
	POSITION pos = m_lstTryServerList.GetFirstSelectedItemPosition();
	if (pos == NULL)
		return;

	int nIndex = m_lstTryServerList.GetNextSelectedItem(pos);
	if (nIndex == m_lstTryServerList.GetItemCount() - 1)
		return;

	CString sTemp = m_lstTryServerList.GetItemText(nIndex + 1, 0);
	m_lstTryServerList.SetItemText(nIndex + 1, 0, m_lstTryServerList.GetItemText(nIndex, 0));
	m_lstTryServerList.SetItemText(nIndex, 0, sTemp);

	int nValue = (int)m_lstTryServerList.GetItemData(nIndex + 1);
	m_lstTryServerList.SetItemData(nIndex + 1, m_lstTryServerList.GetItemData(nIndex));
	m_lstTryServerList.SetItemData(nIndex, nValue);

	m_lstTryServerList.SetItemState(nIndex, 0, LVIS_SELECTED);
	m_lstTryServerList.SetItemState(nIndex + 1, LVIS_SELECTED, LVIS_SELECTED);
}
