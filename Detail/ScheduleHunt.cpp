// ScheduleHunt.cpp : implementation file
//

#include "stdafx.h"
#include "Detail.h"
#include "ItemReturn.h"
#include "CPlayerName.h"
#include "ScheduleHunt.h"


// CScheduleHunt dialog

IMPLEMENT_DYNAMIC(CScheduleHunt, CDialog)

CScheduleHunt::CScheduleHunt(CWnd* pParent /*=NULL*/)
	: CDialog(CScheduleHunt::IDD, pParent)
	, m_nMoveMode(0)
	, m_nTargetRange(0)
	, m_bMonTeleport(FALSE)
	, m_nMonTeleport(10)
	, m_bMannerMode(FALSE)
	, m_bGatherEnable(FALSE)
	, m_bGatherStone(TRUE)
	, m_bGatherWood(TRUE)
	, m_bGatherGrass(TRUE)
	, m_bHpReturnEnable(TRUE)
	, m_nHpReturnValue(30)
	, m_nHpReturnTime(1)
	, m_bWeightReturnEnable(TRUE)
	, m_nWeightReturnValue(90)
	, m_nWeightReturnTime(1)
	, m_bPartyEnable(FALSE)
	, m_nWorldList(0)
	, m_nDungeonList(0)
	, m_nPartyMode(0)
	, m_bDeadStop(FALSE)
	, m_nDeadTime(5)
	, m_nDeadCount(3)
	, m_bReconnectStop(TRUE)
	, m_nReconnectTime(2)
	, m_nReconnectCount(5)
	, m_fHuntPosX(0.0f)
	, m_fHuntPosY(0.0f)
	, m_fHuntPosZ(0.0f)
	, m_bDungeonPos(FALSE)
	, m_fDungeonPosX(0.0f)
	, m_fDungeonPosY(0.0f)
	, m_fDungeonPosZ(0.0f)
	, m_bMainQuest(FALSE)
	, m_bPartyMove(FALSE)
	, m_bPartyMember(TRUE)
	, m_szPartyInvite(_T(""))
	, m_bQuestLevel(FALSE)
	, m_bQuestWorld(FALSE)
	, m_nQuestLevel(50)
	, m_nQuestWorld(1)
	, m_bDeadResume(TRUE)
	, m_nDeadResume(5)
	, m_bEnablePickGrade(FALSE)
	, m_nItemPickGrade(0)
{
}

CScheduleHunt::~CScheduleHunt()
{
}

void CScheduleHunt::DoDataExchange(CDataExchange* pDX)
{
	DDX_Radio(pDX, IDC_RADIO1, m_nMoveMode);
	DDX_Radio(pDX, IDC_RADIO4, m_nTargetRange);
	DDX_Radio(pDX, IDC_RADIO10, m_bPartyMember);

	DDX_Control(pDX, IDC_COMBO1, m_cbWorldList);
	DDX_CBIndex(pDX, IDC_COMBO1, m_nWorldList);
	DDX_Control(pDX, IDC_COMBO2, m_cbFieldList);
	DDX_CBIndex(pDX, IDC_COMBO2, m_nFieldList);
	DDX_Control(pDX, IDC_COMBO3, m_cbDungeonList);
	DDX_CBIndex(pDX, IDC_COMBO3, m_nDungeonList);
	DDX_Control(pDX, IDC_COMBO4, m_cbPartyInvite);
	DDX_CBString(pDX, IDC_COMBO4, m_szPartyInvite);
	DDX_Control(pDX, IDC_COMBO5, m_cbQuestWorld);
	DDX_CBIndex(pDX, IDC_COMBO5, m_nQuestWorld);
	DDX_Control(pDX, IDC_COMBO6, m_cbPartyMove);
	DDX_CBIndex(pDX, IDC_COMBO6, m_nPartyMode);
	DDX_CBIndex(pDX, IDC_COMBO7, m_nItemPickGrade);
	DDX_Control(pDX, IDC_COMBO7, m_cbItemPickGrade);

	DDX_Check(pDX, IDC_CHECK1, m_bMonTeleport);
	DDX_Check(pDX, IDC_CHECK2, m_bMannerMode);
	DDX_Check(pDX, IDC_CHECK3, m_bGatherEnable);
	DDX_Check(pDX, IDC_CHECK4, m_bGatherStone);
	DDX_Check(pDX, IDC_CHECK5, m_bGatherWood);
	DDX_Check(pDX, IDC_CHECK6, m_bGatherGrass);
	DDX_Check(pDX, IDC_CHECK7, m_bHpReturnEnable);
	DDX_Check(pDX, IDC_CHECK8, m_bWeightReturnEnable);
	DDX_Check(pDX, IDC_CHECK9, m_bPartyEnable);
	DDX_Check(pDX, IDC_CHECK10, m_bDeadStop);
	DDX_Check(pDX, IDC_CHECK11, m_bReconnectStop);
	DDX_Check(pDX, IDC_CHECK12, m_bDungeonPos);
	DDX_Check(pDX, IDC_CHECK13, m_bMainQuest);
	DDX_Check(pDX, IDC_CHECK14, m_bPartyMove);
	DDX_Check(pDX, IDC_CHECK15, m_bQuestLevel);
	DDX_Check(pDX, IDC_CHECK16, m_bQuestWorld);
	DDX_Check(pDX, IDC_CHECK17, m_bDeadResume);
	DDX_Check(pDX, IDC_CHECK18, m_bEnablePickGrade);

	DDX_Text(pDX, IDC_EDIT1, m_nMonTeleport);
	DDX_Text(pDX, IDC_EDIT2, m_nHpReturnValue);
	DDX_Text(pDX, IDC_EDIT3, m_nHpReturnTime);
	DDX_Text(pDX, IDC_EDIT4, m_nWeightReturnValue);
	DDX_Text(pDX, IDC_EDIT5, m_nWeightReturnTime);
	DDX_Text(pDX, IDC_EDIT6, m_nDeadTime);
	DDX_Text(pDX, IDC_EDIT7, m_nDeadCount);
	DDX_Text(pDX, IDC_EDIT8, m_nReconnectTime);
	DDX_Text(pDX, IDC_EDIT9, m_nReconnectCount);
	DDX_Text(pDX, IDC_EDIT12, m_nQuestLevel);
	DDX_Text(pDX, IDC_EDIT13, m_nDeadResume);

	DDX_Control(pDX, IDC_LIST1, m_lstItemReturn);
	DDX_Control(pDX, IDC_LIST2, m_lstPartyMember);

	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CScheduleHunt, CDialog)
	ON_BN_CLICKED(IDC_RADIO1, &CScheduleHunt::OnChangeMoveMode)
	ON_BN_CLICKED(IDC_RADIO2, &CScheduleHunt::OnChangeMoveMode)
	ON_BN_CLICKED(IDC_RADIO3, &CScheduleHunt::OnChangeMoveMode)
	ON_BN_CLICKED(IDC_BUTTON1, &CScheduleHunt::OnSetWorldPos)
	ON_BN_CLICKED(IDC_CHECK1, &CScheduleHunt::OnEnableMonTeleport)
	ON_BN_CLICKED(IDC_CHECK7, &CScheduleHunt::OnHpReturnEnable)
	ON_BN_CLICKED(IDC_CHECK8, &CScheduleHunt::OnWeightReturnEnable)
	ON_BN_CLICKED(IDC_BUTTON2, &CScheduleHunt::OnAddItemReturn)
	ON_BN_CLICKED(IDC_BUTTON3, &CScheduleHunt::OnDelItemReturn)
	ON_BN_CLICKED(IDC_CHECK3, &CScheduleHunt::OnGatherEnable)
	ON_BN_CLICKED(IDC_CHECK9, &CScheduleHunt::OnPartyEnable)
	ON_NOTIFY(NM_DBLCLK, IDC_LIST1, &CScheduleHunt::OnChangeItemReturn)
	ON_BN_CLICKED(IDC_CHECK10, &CScheduleHunt::OnCheckDeadStop)
	ON_BN_CLICKED(IDC_CHECK11, &CScheduleHunt::OnCheckReconnect)
	ON_CBN_SELCHANGE(IDC_COMBO1, &CScheduleHunt::OnChangeWorld)
	ON_BN_CLICKED(IDC_CHECK12, &CScheduleHunt::OnEnableDungeonPos)
	ON_BN_CLICKED(IDC_BUTTON4, &CScheduleHunt::OnSetDungeonPos)
	ON_BN_CLICKED(IDC_RADIO10, &CScheduleHunt::OnChangePartyRole)
	ON_BN_CLICKED(IDC_RADIO11, &CScheduleHunt::OnChangePartyRole)
	ON_BN_CLICKED(IDC_BUTTON5, &CScheduleHunt::OnAddParty)
	ON_BN_CLICKED(IDC_BUTTON6, &CScheduleHunt::OnDelParty)
	ON_NOTIFY(NM_DBLCLK, IDC_LIST2, &CScheduleHunt::OnChangeParty)
	ON_BN_CLICKED(IDC_BUTTON7, &CScheduleHunt::OnRefreshPlayer)
	ON_BN_CLICKED(IDC_CHECK15, &CScheduleHunt::OnVerifyQuestLevel)
	ON_BN_CLICKED(IDC_CHECK16, &CScheduleHunt::OnVerifyQuestWorld)
	ON_BN_CLICKED(IDC_CHECK13, &CScheduleHunt::OnContinueQuest)
	ON_BN_CLICKED(IDC_CHECK14, &CScheduleHunt::OnPartyMove)
	ON_BN_CLICKED(IDC_CHECK17, &CScheduleHunt::OnDeadStopResume)
	ON_CBN_SELCHANGE(IDC_COMBO2, &CScheduleHunt::OnChangeField)
	ON_BN_CLICKED(IDC_CHECK18, &CScheduleHunt::OnEnablePickGrade)
END_MESSAGE_MAP()


// CScheduleHunt message handlers

BOOL CScheduleHunt::OnInitDialog()
{
	CString strLabel;
	CDialog::OnInitDialog();

	SetControlText();

	m_lstItemReturn.SetExtendedStyle(m_lstItemReturn.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES | LVS_EX_CHECKBOXES);
	m_lstItemReturn.InsertColumn(0, L"", LVCFMT_LEFT, 20);
	m_lstItemReturn.InsertColumn(1, L"No", LVCFMT_LEFT, 30);

	strLabel.LoadString(NULL, IDS_ITEM, g_wLanguageID);
	m_lstItemReturn.InsertColumn(2, strLabel.GetBuffer(), LVCFMT_LEFT, 208);

	strLabel.LoadString(NULL, IDS_COUNT, g_wLanguageID);
	m_lstItemReturn.InsertColumn(3, strLabel.GetBuffer(), LVCFMT_LEFT, 40);

	m_lstPartyMember.SetExtendedStyle(m_lstPartyMember.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES | LVS_EX_CHECKBOXES);
	m_lstPartyMember.InsertColumn(0, L"", LVCFMT_LEFT, 20);

	strLabel.LoadString(NULL, IDS_NAME, g_wLanguageID);
	m_lstPartyMember.InsertColumn(1, strLabel.GetBuffer(), LVCFMT_LEFT, 144);

	for(int i = 0; i < MAX_WORLD; i++)
	{
		m_cbWorldList.AddString(g_szWorldName[i]);
		m_cbQuestWorld.AddString(g_szWorldName[i]);
	}

	for (int i = 0; i < MAX_FIELD; i++)
	{
		if (!wcscmp(g_szFieldName[0][i], L""))
			break;

		m_cbFieldList.AddString(g_szFieldName[0][i]);
	}

	for(int i = 0; i < MAX_DUNGEON; i++)
	{
		m_cbDungeonList.AddString(g_szDungeonName[i]);
	}

	strLabel.LoadString(NULL, IDS_PARTYMODE1, g_wLanguageID);
	m_cbPartyMove.AddString(strLabel.GetBuffer());

	strLabel.LoadString(NULL, IDS_PARTYMODE2, g_wLanguageID);
	m_cbPartyMove.AddString(strLabel.GetBuffer());

	strLabel.LoadString(NULL, IDS_PARTYMODE3, g_wLanguageID);
	m_cbPartyMove.AddString(strLabel.GetBuffer());

	for (int i = 0; i < 4; i++)
	{
		strLabel.LoadString(NULL, IDS_STRING60420 + i, g_wLanguageID);
		m_cbItemPickGrade.AddString(strLabel);
	}

	UpdateData(FALSE);

	OnChangeMoveMode();
	OnEnableMonTeleport();
	OnHpReturnEnable();
	OnWeightReturnEnable();
	OnGatherEnable();
	OnPartyEnable();
	OnCheckDeadStop();
	OnCheckReconnect();
	OnEnablePickGrade();
	return TRUE;
}



BOOL CScheduleHunt::PreTranslateMessage(MSG* pMsg)
{
	if (pMsg->wParam == VK_RETURN || pMsg->wParam == VK_ESCAPE)
		return TRUE;

	return CDialog::PreTranslateMessage(pMsg);
}


void CScheduleHunt::SetControlText()
{
	CString strLabel;

	strLabel.LoadString(NULL, IDS_MOVEHUNT, g_wLanguageID);
	GetDlgItem(IDC_STATIC11)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_EMPTY, g_wLanguageID);
	GetDlgItem(IDC_RADIO1)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_WORLD, g_wLanguageID);
	GetDlgItem(IDC_RADIO2)->SetWindowText(strLabel);
	GetDlgItem(IDC_CHECK16)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_DUNGEON, g_wLanguageID);
	GetDlgItem(IDC_RADIO3)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_HUNT, g_wLanguageID);
	GetDlgItem(IDC_STATIC12)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_TARGETRANGE, g_wLanguageID);
	GetDlgItem(IDC_STATIC13)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_MONTELEPORT, g_wLanguageID);
	GetDlgItem(IDC_STATIC14)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_MANNERMODE, g_wLanguageID);
	GetDlgItem(IDC_CHECK2)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_RETURN, g_wLanguageID);
	GetDlgItem(IDC_STATIC15)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_HP, g_wLanguageID);
	GetDlgItem(IDC_CHECK7)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_PERCENTBELOW, g_wLanguageID);
	GetDlgItem(IDC_STATIC16)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_SECONDRETURN, g_wLanguageID);
	GetDlgItem(IDC_STATIC17)->SetWindowText(strLabel);
	GetDlgItem(IDC_STATIC18)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_WEIGHT, g_wLanguageID);
	GetDlgItem(IDC_CHECK8)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_PERCENTABOVE, g_wLanguageID);
	GetDlgItem(IDC_STATIC19)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_LACKITEM, g_wLanguageID);
	GetDlgItem(IDC_STATIC20)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_ADD, g_wLanguageID);
	GetDlgItem(IDC_BUTTON2)->SetWindowText(strLabel);
	GetDlgItem(IDC_BUTTON5)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_DEL, g_wLanguageID);
	GetDlgItem(IDC_BUTTON3)->SetWindowText(strLabel);
	GetDlgItem(IDC_BUTTON6)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_GATHER, g_wLanguageID);
	GetDlgItem(IDC_CHECK3)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STONE, g_wLanguageID);
	GetDlgItem(IDC_CHECK4)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_WOOD, g_wLanguageID);
	GetDlgItem(IDC_CHECK5)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_GRASS, g_wLanguageID);
	GetDlgItem(IDC_CHECK6)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_PARTY, g_wLanguageID);
	GetDlgItem(IDC_CHECK9)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_MINUTE, g_wLanguageID);
	GetDlgItem(IDC_STATIC21)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_DEADSTOP, g_wLanguageID);
	GetDlgItem(IDC_STATIC22)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_MINUTE, g_wLanguageID);
	GetDlgItem(IDC_STATIC23)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_RECONNECTSTOP, g_wLanguageID);
	GetDlgItem(IDC_STATIC24)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60271, g_wLanguageID);
	GetDlgItem(IDC_CHECK12)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60278, g_wLanguageID);
	GetDlgItem(IDC_CHECK13)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60291, g_wLanguageID);
	GetDlgItem(IDC_CHECK14)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60296, g_wLanguageID);
	GetDlgItem(IDC_RADIO10)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60297, g_wLanguageID);
	GetDlgItem(IDC_RADIO11)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60341, g_wLanguageID);
	GetDlgItem(IDC_STATIC25)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60401, g_wLanguageID);
	GetDlgItem(IDC_STATIC26)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60419, g_wLanguageID);
	GetDlgItem(IDC_STATIC27)->SetWindowText(strLabel);
}



void CScheduleHunt::OnChangeMoveMode()
{
	UpdateData();

	if(m_nMoveMode == 0)
	{
		GetDlgItem(IDC_CHECK13)->EnableWindow(TRUE);

		OnContinueQuest();

		GetDlgItem(IDC_COMBO1)->EnableWindow(FALSE);
		GetDlgItem(IDC_COMBO2)->EnableWindow(FALSE);
		GetDlgItem(IDC_EDIT10)->EnableWindow(FALSE);
		GetDlgItem(IDC_BUTTON1)->EnableWindow(FALSE);

		GetDlgItem(IDC_COMBO3)->EnableWindow(FALSE);

		GetDlgItem(IDC_CHECK12)->EnableWindow(FALSE);
		GetDlgItem(IDC_EDIT11)->EnableWindow(FALSE);
		GetDlgItem(IDC_BUTTON4)->EnableWindow(FALSE);
	}
	else if(m_nMoveMode == 1)
	{
		GetDlgItem(IDC_CHECK13)->EnableWindow(FALSE);

		GetDlgItem(IDC_CHECK15)->EnableWindow(FALSE);
		GetDlgItem(IDC_EDIT12)->EnableWindow(FALSE);

		GetDlgItem(IDC_CHECK16)->EnableWindow(FALSE);
		GetDlgItem(IDC_COMBO5)->EnableWindow(FALSE);

		GetDlgItem(IDC_COMBO1)->EnableWindow(TRUE);
		GetDlgItem(IDC_COMBO2)->EnableWindow(TRUE);
		GetDlgItem(IDC_EDIT10)->EnableWindow(TRUE);
		GetDlgItem(IDC_BUTTON1)->EnableWindow(TRUE);

		GetDlgItem(IDC_COMBO3)->EnableWindow(FALSE);

		GetDlgItem(IDC_CHECK12)->EnableWindow(FALSE);
		GetDlgItem(IDC_EDIT11)->EnableWindow(FALSE);
		GetDlgItem(IDC_BUTTON4)->EnableWindow(FALSE);
	}
	else
	{
		GetDlgItem(IDC_CHECK13)->EnableWindow(FALSE);
		GetDlgItem(IDC_CHECK15)->EnableWindow(FALSE);
		GetDlgItem(IDC_EDIT12)->EnableWindow(FALSE);
		GetDlgItem(IDC_CHECK16)->EnableWindow(FALSE);
		GetDlgItem(IDC_COMBO5)->EnableWindow(FALSE);

		GetDlgItem(IDC_COMBO1)->EnableWindow(FALSE);
		GetDlgItem(IDC_COMBO2)->EnableWindow(FALSE);
		GetDlgItem(IDC_EDIT10)->EnableWindow(FALSE);
		GetDlgItem(IDC_BUTTON1)->EnableWindow(FALSE);

		GetDlgItem(IDC_COMBO3)->EnableWindow(TRUE);

		GetDlgItem(IDC_CHECK12)->EnableWindow(TRUE);

		OnEnableDungeonPos();
	}
}


void CScheduleHunt::OnSetWorldPos()
{
	if (g_pGameMapping && g_pGameMapping->bGameInfo)
	{
		m_fHuntPosX = g_pGameMapping->fPosX;
		m_fHuntPosY = g_pGameMapping->fPosY;
		m_fHuntPosZ = g_pGameMapping->fPosZ;

		WCHAR szStr[MAX_NAME];
		swprintf(szStr, L"(%.2f, %.2f, %.2f)", m_fHuntPosX, m_fHuntPosY, m_fHuntPosZ);
		GetDlgItem(IDC_EDIT10)->SetWindowText(szStr);
	}
}


void CScheduleHunt::OnEnableMonTeleport()
{
	UpdateData();

	GetDlgItem(IDC_EDIT1)->EnableWindow(m_bMonTeleport);
}


void CScheduleHunt::OnHpReturnEnable()
{
	UpdateData();

	GetDlgItem(IDC_EDIT2)->EnableWindow(m_bHpReturnEnable);
	GetDlgItem(IDC_EDIT3)->EnableWindow(m_bHpReturnEnable);
}


void CScheduleHunt::OnWeightReturnEnable()
{
	UpdateData();

	GetDlgItem(IDC_EDIT4)->EnableWindow(m_bWeightReturnEnable);
	GetDlgItem(IDC_EDIT5)->EnableWindow(m_bWeightReturnEnable);
}


void CScheduleHunt::OnAddItemReturn()
{
	CItemReturn dlgItem;
	if(dlgItem.DoModal() != IDOK)
		return;

	for(int i = 0; i < m_lstItemReturn.GetItemCount(); i++)
	{
		if(!m_lstItemReturn.GetItemText(i, 2).Compare(dlgItem.m_szItemName.GetBuffer()))
			return;
	}
	
	WCHAR szTmp[MAX_NAME];

	m_lstItemReturn.InsertItem(m_lstItemReturn.GetItemCount(), L"");
	
	swprintf(szTmp, L"%d", m_lstItemReturn.GetItemCount());
	m_lstItemReturn.SetItemText(m_lstItemReturn.GetItemCount() - 1, 1, szTmp);

	m_lstItemReturn.SetItemText(m_lstItemReturn.GetItemCount() - 1, 2, dlgItem.m_szItemName.GetBuffer());

	swprintf(szTmp, L"%d", dlgItem.m_nCount);
	m_lstItemReturn.SetItemText(m_lstItemReturn.GetItemCount() - 1, 3, szTmp);

	m_lstItemReturn.SetCheck(m_lstItemReturn.GetItemCount() - 1);
}


void CScheduleHunt::OnDelItemReturn()
{
	POSITION Pos = m_lstItemReturn.GetFirstSelectedItemPosition();
	if(Pos == NULL)
		return;

	CString strLabel;
	strLabel.LoadString(NULL, IDS_REALLYDELETE, g_wLanguageID);

	CString strNotice;
	strNotice.LoadString(NULL, IDS_NOTICE, g_wLanguageID);

	if(MessageBox(strLabel.GetBuffer(), strNotice.GetBuffer(), MB_YESNO) != IDYES)
		return;

	int nIndex = m_lstItemReturn.GetNextSelectedItem(Pos);
	m_lstItemReturn.DeleteItem(nIndex);

	WCHAR szTmp[MAX_NAME];
	for(int i = nIndex; i < m_lstItemReturn.GetItemCount(); i++)
	{
		swprintf(szTmp, L"%d", i + 1);
		m_lstItemReturn.SetItemText(i, 1, szTmp);
	}
}



void CScheduleHunt::OnGatherEnable()
{
	UpdateData();

	GetDlgItem(IDC_CHECK4)->EnableWindow(m_bGatherEnable);
	GetDlgItem(IDC_CHECK5)->EnableWindow(m_bGatherEnable);
	GetDlgItem(IDC_CHECK6)->EnableWindow(m_bGatherEnable);
}



void CScheduleHunt::OnPartyEnable()
{
	UpdateData();

	if (!m_bPartyEnable)
	{
		GetDlgItem(IDC_RADIO10)->EnableWindow(m_bPartyEnable);
		GetDlgItem(IDC_RADIO11)->EnableWindow(m_bPartyEnable);

		GetDlgItem(IDC_LIST2)->EnableWindow(m_bPartyEnable);

		GetDlgItem(IDC_BUTTON5)->EnableWindow(m_bPartyEnable);
		GetDlgItem(IDC_BUTTON6)->EnableWindow(m_bPartyEnable);

		GetDlgItem(IDC_COMBO4)->EnableWindow(m_bPartyEnable);
		GetDlgItem(IDC_BUTTON7)->EnableWindow(m_bPartyEnable);
		
		GetDlgItem(IDC_CHECK14)->EnableWindow(m_bPartyEnable);
		GetDlgItem(IDC_COMBO6)->EnableWindow(m_bPartyEnable);
	}
	else
	{
		GetDlgItem(IDC_RADIO10)->EnableWindow(m_bPartyEnable);
		GetDlgItem(IDC_RADIO11)->EnableWindow(m_bPartyEnable);

		OnChangePartyRole();
	}
}



void CScheduleHunt::OnChangeItemReturn(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMITEMACTIVATE pNMItemActivate = reinterpret_cast<LPNMITEMACTIVATE>(pNMHDR);
	if(pNMItemActivate->iItem < 0)
		return;

	CItemReturn dlgItem;
	dlgItem.m_szItemName = m_lstItemReturn.GetItemText(pNMItemActivate->iItem, 2);
	dlgItem.m_nCount = _wtoi(m_lstItemReturn.GetItemText(pNMItemActivate->iItem, 3).GetBuffer());
	
	if(dlgItem.DoModal() != IDOK)
		return;

	for(int i = 0; i < m_lstItemReturn.GetItemCount(); i++)
	{
		if(i == pNMItemActivate->iItem)
			continue;

		if(!m_lstItemReturn.GetItemText(i, 2).Compare(dlgItem.m_szItemName.GetBuffer()))
			return;
	}

	WCHAR szTmp[MAX_NAME];

	m_lstItemReturn.SetItemText(pNMItemActivate->iItem, 2, dlgItem.m_szItemName.GetBuffer());

	swprintf(szTmp, L"%d", dlgItem.m_nCount);
	m_lstItemReturn.SetItemText(pNMItemActivate->iItem, 3, szTmp);

	*pResult = 0;
}


void CScheduleHunt::LoadSetting(WCHAR *szPath)
{
	WCHAR szFile[MAX_PATH];
	swprintf(szFile, L"%s\\Hunt.dat", szPath);

	FILE *fp = _wfopen(szFile, L"rb");
	if (fp)
	{
		int nCount = 0;
		fread(&nCount, sizeof(int), 1, fp);

		m_lstItemReturn.DeleteAllItems();

		if (nCount > 0)
		{
			ITEM_RETURN* pItemReturn = new ITEM_RETURN[nCount];
			if (pItemReturn)
			{
				memset(pItemReturn, 0, sizeof(ITEM_RETURN) * nCount);

				fread(pItemReturn, sizeof(ITEM_RETURN), nCount, fp);

				WCHAR szTmp[MAX_NAME];
				for (int i = 0; i < nCount; i++)
				{
					m_lstItemReturn.InsertItem(i, L"");

					swprintf(szTmp, L"%d", i + 1);
					m_lstItemReturn.SetItemText(i, 1, szTmp);

					m_lstItemReturn.SetItemText(i, 2, pItemReturn[i].szName);

					swprintf(szTmp, L"%d", pItemReturn[i].nCount);
					m_lstItemReturn.SetItemText(i, 3, szTmp);

					m_lstItemReturn.SetCheck(i, pItemReturn[i].bEnable);
				}

				delete[] pItemReturn;
				pItemReturn = NULL;
			}
		}

		HUNT_SETTING m_HuntSetting;
		memset(&m_HuntSetting, 0, sizeof(HUNT_SETTING));

		fread(&m_HuntSetting, sizeof(HUNT_SETTING), 1, fp);

		m_nMoveMode = m_HuntSetting.nMoveMode;

		m_nWorldList = m_HuntSetting.nWorldIndex;
		m_nFieldList = m_HuntSetting.nFieldIndex;
		m_fHuntPosX = m_HuntSetting.fHuntPosX;
		m_fHuntPosY = m_HuntSetting.fHuntPosY;
		m_fHuntPosZ = m_HuntSetting.fHuntPosZ;

		m_nDungeonList = m_HuntSetting.nDungeonIndex;

		m_nTargetRange = m_HuntSetting.nTargetRange;

		m_bMonTeleport = m_HuntSetting.bMonTeleport;
		m_nMonTeleport = m_HuntSetting.nMonTeleport;

		m_bMannerMode = m_HuntSetting.bMannerMode;

		m_bGatherEnable = m_HuntSetting.bGatherEnable;
		m_bGatherStone = m_HuntSetting.bGatherStone;
		m_bGatherWood = m_HuntSetting.bGatherWood;
		m_bGatherGrass = m_HuntSetting.bGatherGrass;

		m_bPartyEnable = m_HuntSetting.bPartyEnable;
		m_nPartyMode = m_HuntSetting.nPartyMode;

		m_bHpReturnEnable = m_HuntSetting.bHpReturnEnable;
		m_nHpReturnValue = m_HuntSetting.nHpReturnValue;
		m_nHpReturnTime = m_HuntSetting.nHpReturnTime;

		m_bWeightReturnEnable = m_HuntSetting.bWeightReturnEnable;
		m_nWeightReturnValue = m_HuntSetting.nWeightReturnValue;
		m_nWeightReturnTime = m_HuntSetting.nWeightReturnTime;

		m_bDeadStop = m_HuntSetting.bDeadStop;
		m_nDeadTime = m_HuntSetting.nDeadTime;
		m_nDeadCount = m_HuntSetting.nDeadCount;

		m_bReconnectStop = m_HuntSetting.bReconnectStop;
		m_nReconnectTime = m_HuntSetting.nReconnectTime;
		m_nReconnectCount = m_HuntSetting.nReconnectCount;

		m_bDungeonPos = m_HuntSetting.bDungeonPos;
		m_fDungeonPosX = m_HuntSetting.fDungeonPosX;
		m_fDungeonPosY = m_HuntSetting.fDungeonPosY;
		m_fDungeonPosZ = m_HuntSetting.fDungeonPosZ;

		m_bMainQuest = m_HuntSetting.bContinueMainQuest;
		m_bPartyMove = m_HuntSetting.bPartyMove;
		m_bPartyMember = m_HuntSetting.bPartyMember;

		m_szPartyInvite = m_HuntSetting.szPartyMaster;

		m_bQuestLevel = m_HuntSetting.bQuestLevel;
		m_nQuestLevel = m_HuntSetting.nQuestLevel;

		m_bQuestWorld = m_HuntSetting.bQuestWorld;
		m_nQuestWorld = m_HuntSetting.nQuestWorld;

		m_bDeadResume = m_HuntSetting.bDeadStopResume;
		m_nDeadResume = m_HuntSetting.nDeadStopResume;

		m_bEnablePickGrade = m_HuntSetting.bEnablePickGrade;
		m_nItemPickGrade = m_HuntSetting.nItemPickGrade;

		fclose(fp);

		m_cbFieldList.ResetContent();
		for (int i = 0; i < MAX_FIELD; i++)
		{
			if (!wcscmp(g_szFieldName[m_nWorldList % MAX_WORLD][i], L""))
				break;

			m_cbFieldList.AddString(g_szFieldName[m_nWorldList % MAX_WORLD][i]);
		}

		WCHAR szStr[MAX_NAME];
		swprintf(szStr, L"(%.2f, %.2f, %.2f)", m_fHuntPosX, m_fHuntPosY, m_fHuntPosZ);
		GetDlgItem(IDC_EDIT10)->SetWindowText(szStr);

		swprintf(szStr, L"(%.2f, %.2f, %.2f)", m_fDungeonPosX, m_fDungeonPosY, m_fDungeonPosZ);
		GetDlgItem(IDC_EDIT11)->SetWindowText(szStr);

		UpdateData(FALSE);

		OnChangeMoveMode();
		OnEnableMonTeleport();
		OnHpReturnEnable();
		OnWeightReturnEnable();
		OnGatherEnable();
		OnPartyEnable();
		OnCheckDeadStop();
		OnCheckReconnect();
		OnEnablePickGrade();
	}

	m_lstPartyMember.DeleteAllItems();

	swprintf(szFile, L"%s\\Party.dat", szPath);
	fp = _wfopen(szFile, L"rb");
	if (fp)
	{
		int nCount = 0;
		fread(&nCount, sizeof(int), 1, fp);
		if (nCount > 0)
		{
			PARTYMEMBER* pPartyMember = new PARTYMEMBER[nCount];
			memset(pPartyMember, 0, sizeof(pPartyMember));

			fread(pPartyMember, sizeof(PARTYMEMBER), nCount, fp);

			for (int i = 0; i < nCount; i++)
			{
				m_lstPartyMember.InsertItem(i, L"");
				m_lstPartyMember.SetItemText(i, 1, pPartyMember[i].szName);
				m_lstPartyMember.SetCheck(i, pPartyMember[i].bEnable);
			}

			delete[] pPartyMember;
			pPartyMember = NULL;
		}

		fclose(fp);
	}
}


void CScheduleHunt::SaveSetting(WCHAR *szPath)
{
	WCHAR szFile[MAX_PATH];
	swprintf(szFile, L"%s\\Hunt.dat", szPath);

	FILE *fp = _wfopen(szFile, L"wb");
	if (fp)
	{
		UpdateData();

		int nCount = m_lstItemReturn.GetItemCount();
		fwrite(&nCount, sizeof(int), 1, fp);

		if (nCount > 0)
		{
			ITEM_RETURN* pItemReturn = new ITEM_RETURN[nCount];
			if (pItemReturn)
			{
				memset(pItemReturn, 0, sizeof(ITEM_RETURN) * nCount);

				for (int i = 0; i < nCount; i++)
				{
					wcscpy(pItemReturn[i].szName, m_lstItemReturn.GetItemText(i, 2).GetBuffer());
					pItemReturn[i].nCount = _wtoi(m_lstItemReturn.GetItemText(i, 3).GetBuffer());
					pItemReturn[i].bEnable = m_lstItemReturn.GetCheck(i);
				}

				fwrite(pItemReturn, sizeof(ITEM_RETURN), nCount, fp);

				delete[] pItemReturn;
				pItemReturn = NULL;
			}
		}

		HUNT_SETTING m_HuntSetting;
		memset(&m_HuntSetting, 0, sizeof(HUNT_SETTING));

		m_HuntSetting.nMoveMode = m_nMoveMode;

		m_HuntSetting.nWorldIndex = m_nWorldList;
		m_HuntSetting.nFieldIndex = m_nFieldList;
		m_HuntSetting.fHuntPosX = m_fHuntPosX;
		m_HuntSetting.fHuntPosY = m_fHuntPosY;
		m_HuntSetting.fHuntPosZ = m_fHuntPosZ;

		m_HuntSetting.nDungeonIndex = m_nDungeonList;

		m_HuntSetting.nTargetRange = m_nTargetRange;

		m_HuntSetting.bMonTeleport = m_bMonTeleport;
		m_HuntSetting.nMonTeleport = m_nMonTeleport;

		m_HuntSetting.bMannerMode = m_bMannerMode;

		m_HuntSetting.bGatherEnable = m_bGatherEnable;
		m_HuntSetting.bGatherStone = m_bGatherStone;
		m_HuntSetting.bGatherWood = m_bGatherWood;
		m_HuntSetting.bGatherGrass = m_bGatherGrass;

		m_HuntSetting.bPartyEnable = m_bPartyEnable;
		m_HuntSetting.nPartyMode = m_nPartyMode;

		m_HuntSetting.bHpReturnEnable = m_bHpReturnEnable;
		m_HuntSetting.nHpReturnValue = m_nHpReturnValue;
		m_HuntSetting.nHpReturnTime = m_nHpReturnTime;

		m_HuntSetting.bWeightReturnEnable = m_bWeightReturnEnable;
		m_HuntSetting.nWeightReturnValue = m_nWeightReturnValue;
		m_HuntSetting.nWeightReturnTime = m_nWeightReturnTime;

		m_HuntSetting.bDeadStop = m_bDeadStop;
		m_HuntSetting.nDeadTime = m_nDeadTime;
		m_HuntSetting.nDeadCount = m_nDeadCount;

		m_HuntSetting.bReconnectStop = m_bReconnectStop;
		m_HuntSetting.nReconnectTime = m_nReconnectTime;
		m_HuntSetting.nReconnectCount = m_nReconnectCount;

		m_HuntSetting.bDungeonPos = m_bDungeonPos;
		m_HuntSetting.fDungeonPosX = m_fDungeonPosX;
		m_HuntSetting.fDungeonPosY = m_fDungeonPosY;
		m_HuntSetting.fDungeonPosZ = m_fDungeonPosZ;

		m_HuntSetting.bContinueMainQuest = m_bMainQuest;
		m_HuntSetting.bPartyMove = m_bPartyMove;
		m_HuntSetting.bPartyMember = m_bPartyMember;

		if (!m_szPartyInvite.IsEmpty())
			swprintf_s(m_HuntSetting.szPartyMaster, MAX_NAME, L"%s", m_szPartyInvite.GetBuffer());

		m_HuntSetting.bQuestLevel = m_bQuestLevel;
		m_HuntSetting.nQuestLevel = m_nQuestLevel;

		m_HuntSetting.bQuestWorld = m_bQuestWorld;
		m_HuntSetting.nQuestWorld = m_nQuestWorld;

		m_HuntSetting.bDeadStopResume = m_bDeadResume;
		m_HuntSetting.nDeadStopResume = m_nDeadResume;

		m_HuntSetting.bEnablePickGrade = m_bEnablePickGrade;
		m_HuntSetting.nItemPickGrade = m_nItemPickGrade;

		fwrite(&m_HuntSetting, sizeof(HUNT_SETTING), 1, fp);
		fclose(fp);
	}

	swprintf(szFile, L"%s\\Party.dat", szPath);
	fp = _wfopen(szFile, L"wb");
	if (fp)
	{
		int nCount = m_lstPartyMember.GetItemCount();
		fwrite(&nCount, sizeof(int), 1, fp);
		if (nCount > 0)
		{
			PARTYMEMBER* pPartyMember = new PARTYMEMBER[nCount];
			memset(pPartyMember, 0, sizeof(PARTYMEMBER) * nCount);

			for (int i = 0; i < nCount; i++)
			{
				swprintf_s(pPartyMember[i].szName, MAX_NAME, L"%s", m_lstPartyMember.GetItemText(i, 1).GetBuffer());
				pPartyMember[i].bEnable = m_lstPartyMember.GetCheck(i);
			}

			fwrite(pPartyMember, sizeof(PARTYMEMBER), nCount, fp);

			delete[] pPartyMember;
			pPartyMember = NULL;
		}

		fclose(fp);
	}
}



void CScheduleHunt::OnCheckDeadStop()
{
	UpdateData();

	GetDlgItem(IDC_EDIT6)->EnableWindow(m_bDeadStop);
	GetDlgItem(IDC_EDIT7)->EnableWindow(m_bDeadStop);

	GetDlgItem(IDC_CHECK17)->EnableWindow(m_bDeadStop);

	if (!m_bDeadStop)
		GetDlgItem(IDC_EDIT13)->EnableWindow(m_bDeadStop);
	else
		OnDeadStopResume();
}


void CScheduleHunt::OnCheckReconnect()
{
	UpdateData();

	GetDlgItem(IDC_EDIT8)->EnableWindow(m_bReconnectStop);
	GetDlgItem(IDC_EDIT9)->EnableWindow(m_bReconnectStop);
}


void CScheduleHunt::OnChangeWorld()
{
	UpdateData();

	m_cbFieldList.ResetContent();
	for (int i = 0; i < MAX_FIELD; i++)
	{
		if (!wcscmp(g_szFieldName[m_nWorldList][i], L""))
			break;

		m_cbFieldList.AddString(g_szFieldName[m_nWorldList][i]);
	}

	m_cbFieldList.SetCurSel(0);

// 	m_fHuntPosX = 0.0f;	m_fHuntPosY = 0.0f; m_fHuntPosZ = 0.0f;
// 
// 	WCHAR szStr[MAX_NAME];
// 	swprintf(szStr, L"(%.2f, %.2f, %.2f)", m_fHuntPosX, m_fHuntPosY, m_fHuntPosZ);
// 	GetDlgItem(IDC_EDIT10)->SetWindowText(szStr);
}


void CScheduleHunt::OnEnableDungeonPos()
{
	UpdateData();

	GetDlgItem(IDC_EDIT11)->EnableWindow(m_bDungeonPos);
	GetDlgItem(IDC_BUTTON4)->EnableWindow(m_bDungeonPos);
}


void CScheduleHunt::OnSetDungeonPos()
{
	if (g_pGameMapping && g_pGameMapping->bGameInfo)
	{
		m_fDungeonPosX = g_pGameMapping->fPosX;
		m_fDungeonPosY = g_pGameMapping->fPosY;
		m_fDungeonPosZ = g_pGameMapping->fPosZ;

		WCHAR szStr[MAX_NAME];
		swprintf(szStr, L"(%.2f, %.2f, %.2f)", m_fDungeonPosX, m_fDungeonPosY, m_fDungeonPosZ);
		GetDlgItem(IDC_EDIT11)->SetWindowText(szStr);
	}
}


void CScheduleHunt::OnChangePartyRole()
{
	UpdateData();

	GetDlgItem(IDC_LIST2)->EnableWindow(!m_bPartyMember);
	GetDlgItem(IDC_BUTTON5)->EnableWindow(!m_bPartyMember);
	GetDlgItem(IDC_BUTTON6)->EnableWindow(!m_bPartyMember);

	GetDlgItem(IDC_COMBO4)->EnableWindow(m_bPartyMember);
	GetDlgItem(IDC_BUTTON7)->EnableWindow(m_bPartyMember);
	
	GetDlgItem(IDC_CHECK14)->EnableWindow(m_bPartyMember);
	GetDlgItem(IDC_COMBO6)->EnableWindow(m_bPartyMember);
}


void CScheduleHunt::OnAddParty()
{
	CPlayerName dlg;
	if (dlg.DoModal() != IDOK)
		return;

	for (int i = 0; i < m_lstPartyMember.GetItemCount(); i++)
	{
		if (!wcscmp(m_lstPartyMember.GetItemText(i, 1).GetBuffer(), dlg.m_szPlayer.GetBuffer()))
			return;
	}

	m_lstPartyMember.InsertItem(m_lstPartyMember.GetItemCount(), L"");
	m_lstPartyMember.SetItemText(m_lstPartyMember.GetItemCount() - 1, 1, dlg.m_szPlayer.GetBuffer());
	m_lstPartyMember.SetCheck(m_lstPartyMember.GetItemCount() - 1);
}


void CScheduleHunt::OnDelParty()
{
	POSITION Pos = m_lstPartyMember.GetFirstSelectedItemPosition();
	if (Pos == NULL)
		return;

	CString strLabel;
	strLabel.LoadString(NULL, IDS_REALLYDELETE, g_wLanguageID);

	CString strNotice;
	strNotice.LoadString(NULL, IDS_NOTICE, g_wLanguageID);

	if (MessageBox(strLabel.GetBuffer(), strNotice.GetBuffer(), MB_YESNO) != IDYES)
		return;

	int nIndex = m_lstPartyMember.GetNextSelectedItem(Pos);
	m_lstPartyMember.DeleteItem(nIndex);
}


void CScheduleHunt::OnChangeParty(NMHDR* pNMHDR, LRESULT* pResult)
{
	LPNMITEMACTIVATE pNMItemActivate = reinterpret_cast<LPNMITEMACTIVATE>(pNMHDR);
	if (pNMItemActivate->iItem < 0)
		return;

	CPlayerName dlg;
	dlg.m_szPlayer = m_lstPartyMember.GetItemText(pNMItemActivate->iItem, 1);
	if (dlg.DoModal() != IDOK)
		return;

	for (int i = 0; i < m_lstPartyMember.GetItemCount(); i++)
	{
		if(i == pNMItemActivate->iItem)
			continue;

		if (!wcscmp(m_lstPartyMember.GetItemText(i, 1).GetBuffer(), dlg.m_szPlayer.GetBuffer()))
			return;
	}

	m_lstPartyMember.SetItemText(pNMItemActivate->iItem, 1, dlg.m_szPlayer);
	
	*pResult = 0;
}


DWORD GetPlayerInfo(CScheduleHunt* pDlg)
{
	pDlg->m_cbPartyInvite.ResetContent();

	if (g_pGameInfo)
	{
		g_pGameInfo->bType = 2;

		int nTickCount = 0;
		while (1)
		{
			if (g_pGameInfo->bType == 0)
				break;

			nTickCount++;
			if (nTickCount >= 300)
				goto Thread_End;

			Sleep(1);
		}

		for (int i = 0; i < g_pGameInfo->nCount; i++)
			pDlg->m_cbPartyInvite.AddString(g_pGameInfo->szName[i]);
	}

Thread_End:

	pDlg->GetDlgItem(IDC_BUTTON7)->EnableWindow(TRUE);
	return 0;
}


void CScheduleHunt::OnRefreshPlayer()
{
	GetDlgItem(IDC_BUTTON7)->EnableWindow(FALSE);

	CreateThread(0, 0, (LPTHREAD_START_ROUTINE)GetPlayerInfo, (LPVOID)this, 0, 0);
}


void CScheduleHunt::OnVerifyQuestLevel()
{
	UpdateData();

	GetDlgItem(IDC_EDIT12)->EnableWindow(m_bQuestLevel);
}


void CScheduleHunt::OnVerifyQuestWorld()
{
	UpdateData();

	GetDlgItem(IDC_COMBO5)->EnableWindow(m_bQuestWorld);
}


void CScheduleHunt::OnContinueQuest()
{
	UpdateData();

	GetDlgItem(IDC_CHECK15)->EnableWindow(m_bMainQuest);
	GetDlgItem(IDC_CHECK16)->EnableWindow(m_bMainQuest);

	if (m_bMainQuest)
	{
		OnVerifyQuestLevel();
		OnVerifyQuestWorld();
	}
	else
	{
		GetDlgItem(IDC_EDIT12)->EnableWindow(m_bMainQuest);
		GetDlgItem(IDC_COMBO5)->EnableWindow(m_bMainQuest);
	}
}


void CScheduleHunt::OnPartyMove()
{
}


void CScheduleHunt::OnDeadStopResume()
{
	UpdateData();

	GetDlgItem(IDC_EDIT13)->EnableWindow(m_bDeadResume);
}


void CScheduleHunt::OnChangeField()
{
// 	m_fHuntPosX = 0.0f;	m_fHuntPosY = 0.0f; m_fHuntPosZ = 0.0f;
// 
// 	WCHAR szStr[MAX_NAME];
// 	swprintf(szStr, L"(%.2f, %.2f, %.2f)", m_fHuntPosX, m_fHuntPosY, m_fHuntPosZ);
// 	GetDlgItem(IDC_EDIT10)->SetWindowText(szStr);
}


void CScheduleHunt::OnEnablePickGrade()
{
	UpdateData();

	GetDlgItem(IDC_COMBO7)->EnableWindow(m_bEnablePickGrade);
}
