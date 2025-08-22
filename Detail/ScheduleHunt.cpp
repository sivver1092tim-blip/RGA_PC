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
	, m_bDoQuest(FALSE)
	, m_bQuestTarget(TRUE)
	, m_nQuestTarget(2301)
	, m_nDungeon(0)
	, m_bDungeonPos(FALSE)
	, m_fDungeonPosX(0.0f)
	, m_fDungeonPosY(0.0f)
	, m_fDungeonPosZ(0.0f)
	, m_nField(0)
	, m_bFieldPos(FALSE)
	, m_fFieldPosX(0.0f)
	, m_fFieldPosY(0.0f)
	, m_fFieldPosZ(0.0f)
	, m_bLimitLv(FALSE)
	, m_nLimitLvMin(1)
	, m_nLimitLvMax(99)
	, m_bLimitPower(FALSE)
	, m_nLimitPowerMin(0)
	, m_nLimitPowerMax(99999)
	, m_bHpReturn(TRUE)
	, m_nHpReturnValue(30)
	, m_nHpReturnTime(1)
	, m_bWeightReturn(TRUE)
	, m_nWeightReturnValue(90)
	, m_nWeightReturnTime(1)
	, m_nHuntRange(1)
	, m_bMobTel(FALSE)
	, m_nMobTelTime(10)
	, m_bChannel(FALSE)
	, m_nChannelMode(1)
	, m_nChannelFixed(1)
	, m_nChannelFlexibleTime(90)
	, m_bMannerMode(FALSE)
	, m_bGather(FALSE)
	, m_bGatherStone(TRUE)
	, m_bGatherIron(TRUE)
	, m_bGatherWood(TRUE)
	, m_bGatherGrass(TRUE)
	, m_bLimitDead(FALSE)
	, m_nLimitDeadTime(5)
	, m_nLimitDeadCount(3)
	, m_bLimitRecon(TRUE)
	, m_nLimitReconTime(2)
	, m_nLimitReconCount(5)
{

}


CScheduleHunt::~CScheduleHunt()
{

}


void CScheduleHunt::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);

	DDX_Radio(pDX, IDC_RADIO_MOVENONE, m_nMoveMode);
	DDX_Check(pDX, IDC_CHECK_DOQUEST, m_bDoQuest);
	DDX_Check(pDX, IDC_CHECK_QUESTTARGET, m_bQuestTarget);
	DDX_Text(pDX, IDC_EDIT_QUESTTARGET, m_nQuestTarget);
	DDX_Control(pDX, IDC_COMBO_DUNGEON, m_cbDungeon);
	DDX_CBIndex(pDX, IDC_COMBO_DUNGEON, m_nDungeon);
	DDX_Check(pDX, IDC_CHECK_DUNGEONPOS, m_bDungeonPos);
	DDX_Control(pDX, IDC_COMBO_FIELD, m_cbField);
	DDX_CBIndex(pDX, IDC_COMBO_FIELD, m_nField);
	DDX_Check(pDX, IDC_CHECK_FIELDPOS, m_bFieldPos);
	DDX_Check(pDX, IDC_CHECK_LIMITLV, m_bLimitLv);
	DDX_Text(pDX, IDC_EDIT_LIMITLVMIN, m_nLimitLvMin);
	DDX_Text(pDX, IDC_EDIT_LIMITLVMAX, m_nLimitLvMax);
	DDX_Check(pDX, IDC_CHECK_LIMITPOWER, m_bLimitPower);
	DDX_Text(pDX, IDC_EDIT_LIMITPOWERMIN, m_nLimitPowerMin);
	DDX_Check(pDX, IDC_CHECK_HPRETURN, m_bHpReturn);
	DDX_Text(pDX, IDC_EDIT_HPRETURNVALUE, m_nHpReturnValue);
	DDX_Text(pDX, IDC_EDIT_HPRETURNTIME, m_nHpReturnTime);
	DDX_Check(pDX, IDC_CHECK_WEIGHTRETURN, m_bWeightReturn);
	DDX_Text(pDX, IDC_EDIT_WEIGHTRETURNVALUE, m_nWeightReturnValue);
	DDX_Text(pDX, IDC_EDIT_WEIGHTRETURNTIME, m_nWeightReturnTime);
	DDX_Control(pDX, IDC_LIST_ITEMRETURN, m_lstItemReturn);
	DDX_Radio(pDX, IDC_RADIO_RANGE1, m_nHuntRange);
	DDX_Check(pDX, IDC_CHECK_MOBTEL, m_bMobTel);
	DDX_Text(pDX, IDC_EDIT_MOBTELTIME, m_nMobTelTime);
	DDX_Check(pDX, IDC_CHECK_CHANNEL, m_bChannel);
	DDX_Radio(pDX, IDC_RADIO_CHANNELFIXED, m_nChannelMode);
	DDX_Text(pDX, IDC_EDIT_CHANNELFIXED, m_nChannelFixed);
	DDX_Text(pDX, IDC_EDIT_CHANNELFLEXIBLETIME, m_nChannelFlexibleTime);
	DDX_Check(pDX, IDC_CHECK_MANNERMODE, m_bMannerMode);
	DDX_Check(pDX, IDC_CHECK_GATHER, m_bGather);
	DDX_Check(pDX, IDC_CHECK_GATHERSTONE, m_bGatherStone);
	DDX_Check(pDX, IDC_CHECK_GATHERIRON, m_bGatherIron);
	DDX_Check(pDX, IDC_CHECK_GATHERWOOD, m_bGatherWood);
	DDX_Check(pDX, IDC_CHECK_GATHERGRASS, m_bGatherGrass);
	DDX_Check(pDX, IDC_CHECK_LIMITDEAD, m_bLimitDead);
	DDX_Text(pDX, IDC_EDIT_LIMITDEADTIME, m_nLimitDeadTime);
	DDX_Text(pDX, IDC_EDIT_LIMITDEADCOUNT, m_nLimitDeadCount);
	DDX_Check(pDX, IDC_CHECK_LIMITRECON, m_bLimitRecon);
	DDX_Text(pDX, IDC_EDIT_LIMITRECONTIME, m_nLimitReconTime);
	DDX_Text(pDX, IDC_EDIT_LIMITRECONCOUNT, m_nLimitReconCount);
	DDX_Text(pDX, IDC_EDIT_LIMITPOWERMAX, m_nLimitPowerMax);
}


BEGIN_MESSAGE_MAP(CScheduleHunt, CDialog)
	ON_BN_CLICKED(IDC_RADIO_MOVENONE, &CScheduleHunt::OnChangeMoveMode)
	ON_BN_CLICKED(IDC_RADIO_MOVEDUNGEON, &CScheduleHunt::OnChangeMoveMode)
	ON_BN_CLICKED(IDC_RADIO_MOVEFIELD, &CScheduleHunt::OnChangeMoveMode)
	ON_BN_CLICKED(IDC_CHECK_DOQUEST, &CScheduleHunt::OnBnClickedCheckDoquest)
	ON_BN_CLICKED(IDC_CHECK_QUESTTARGET, &CScheduleHunt::OnBnClickedCheckQuesttarget)
	ON_BN_CLICKED(IDC_CHECK_DUNGEONPOS, &CScheduleHunt::OnBnClickedCheckDungeonpos)
	ON_BN_CLICKED(IDC_BTN_DUNGEONPOS, &CScheduleHunt::OnSetDungeonPos)
	ON_BN_CLICKED(IDC_CHECK_FIELDPOS, &CScheduleHunt::OnBnClickedCheckFieldpos)
	ON_BN_CLICKED(IDC_BTN_FIELDPOS, &CScheduleHunt::OnSetFieldPos)
	ON_BN_CLICKED(IDC_CHECK_LIMITLV, &CScheduleHunt::OnBnClickedCheckLimitlv)
	ON_BN_CLICKED(IDC_CHECK_LIMITPOWER, &CScheduleHunt::OnBnClickedCheckLimitpower)
	ON_BN_CLICKED(IDC_CHECK_HPRETURN, &CScheduleHunt::OnBnClickedCheckHpreturn)
	ON_BN_CLICKED(IDC_CHECK_WEIGHTRETURN, &CScheduleHunt::OnBnClickedCheckWeightreturn)
	ON_BN_CLICKED(IDC_BTN_ADDRETURNITEM, &CScheduleHunt::OnAddReturnItem)
	ON_BN_CLICKED(IDC_BTN_DELRETURNITEM, &CScheduleHunt::OnDelReturnItem)
	ON_NOTIFY(NM_DBLCLK, IDC_LIST_ITEMRETURN, &CScheduleHunt::OnChangeReturnItem)
	ON_BN_CLICKED(IDC_CHECK_MOBTEL, &CScheduleHunt::OnBnClickedCheckMobtel)
	ON_BN_CLICKED(IDC_CHECK_CHANNEL, &CScheduleHunt::OnBnClickedCheckChannel)
	ON_BN_CLICKED(IDC_RADIO_CHANNELFIXED, &CScheduleHunt::OnChangeChannelMode)
	ON_BN_CLICKED(IDC_RADIO_CHANNELFLEXIBLE, &CScheduleHunt::OnChangeChannelMode)
	ON_BN_CLICKED(IDC_CHECK_GATHER, &CScheduleHunt::OnBnClickedCheckGather)
	ON_BN_CLICKED(IDC_CHECK_LIMITDEAD, &CScheduleHunt::OnBnClickedCheckLimitdead)
	ON_BN_CLICKED(IDC_CHECK_LIMITRECON, &CScheduleHunt::OnBnClickedCheckLimitrecon)
END_MESSAGE_MAP()


// CScheduleHunt message handlers

BOOL CScheduleHunt::OnInitDialog()
{
	CDialog::OnInitDialog();

	SetControlText();


	for (int i = 0; i < MAX_DUNGEON; i++)
	{
		if (g_bTaiwanLang)
			m_cbDungeon.AddString(g_pDungeonName[i].szTWName);
		else
			m_cbDungeon.AddString(g_pDungeonName[i].szKRName);
	}

	for (int i = 0; i < MAX_FIELD; i++)
	{
		if (g_bTaiwanLang)
			m_cbField.AddString(g_pFieldName[i].szTWName);
		else
			m_cbField.AddString(g_pFieldName[i].szKRName);
	}


	m_lstItemReturn.SetExtendedStyle(m_lstItemReturn.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES | LVS_EX_CHECKBOXES);
	m_lstItemReturn.InsertColumn(0, L"", LVCFMT_LEFT, 20);
	m_lstItemReturn.InsertColumn(1, L"No", LVCFMT_LEFT, 30);

	CString sLabel;
	sLabel.LoadString(NULL, IDS_ITEM, g_wLanguageID);
	m_lstItemReturn.InsertColumn(2, sLabel.GetBuffer(), LVCFMT_LEFT, 150);

	sLabel.LoadString(NULL, IDS_COUNT, g_wLanguageID);
	m_lstItemReturn.InsertColumn(3, sLabel.GetBuffer(), LVCFMT_LEFT, 40);


	UpdateData(FALSE);

	OnChangeMoveMode();
	OnBnClickedCheckLimitlv();
	OnBnClickedCheckLimitpower();
	OnBnClickedCheckHpreturn();
	OnBnClickedCheckWeightreturn();
	OnBnClickedCheckMobtel();
	OnBnClickedCheckChannel();
	OnBnClickedCheckGather();
	OnBnClickedCheckLimitdead();
	OnBnClickedCheckLimitrecon();

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
	CString sLabel;

	if (g_wLanguageID != 0x412)
	{
		GetDlgItem(IDC_STATIC1)->SetWindowTextW(L"进入");
		GetDlgItem(IDC_RADIO_MOVENONE)->SetWindowTextW(L"无");
		GetDlgItem(IDC_RADIO_MOVEDUNGEON)->SetWindowTextW(L"副本");
		GetDlgItem(IDC_RADIO_MOVEFIELD)->SetWindowTextW(L"野外");
		GetDlgItem(IDC_CHECK_DOQUEST)->SetWindowTextW(L"主线任务");
		GetDlgItem(IDC_CHECK_QUESTTARGET)->SetWindowTextW(L"目标");
		GetDlgItem(IDC_STATIC20)->SetWindowTextW(L"e.g.  1209 = 1幕 2章 9节");
		GetDlgItem(IDC_CHECK_DUNGEONPOS)->SetWindowTextW(L"猎点");
		GetDlgItem(IDC_CHECK_FIELDPOS)->SetWindowTextW(L"猎点");
		GetDlgItem(IDC_CHECK_LIMITLV)->SetWindowTextW(L"等级");
		GetDlgItem(IDC_STATIC2)->SetWindowTextW(L"以上");
		GetDlgItem(IDC_STATIC3)->SetWindowTextW(L"未满时进行");
		GetDlgItem(IDC_CHECK_LIMITPOWER)->SetWindowTextW(L"战斗力");
		GetDlgItem(IDC_STATIC4)->SetWindowTextW(L"以上");
		GetDlgItem(IDC_STATIC5)->SetWindowTextW(L"未满时进行");
		GetDlgItem(IDC_STATIC6)->SetWindowTextW(L"回城");
		GetDlgItem(IDC_CHECK_HPRETURN)->SetWindowTextW(L"体力");
		GetDlgItem(IDC_STATIC7)->SetWindowTextW(L"%以下");
		GetDlgItem(IDC_STATIC8)->SetWindowTextW(L"s 以上时回城");
		GetDlgItem(IDC_CHECK_WEIGHTRETURN)->SetWindowTextW(L"重量");
		GetDlgItem(IDC_STATIC9)->SetWindowTextW(L"%以上");
		GetDlgItem(IDC_STATIC10)->SetWindowTextW(L"s 以上时回城");
		GetDlgItem(IDC_BTN_ADDRETURNITEM)->SetWindowTextW(L"添加");
		GetDlgItem(IDC_BTN_DELRETURNITEM)->SetWindowTextW(L"删掉");
		GetDlgItem(IDC_STATIC11)->SetWindowTextW(L"打猎");
		GetDlgItem(IDC_STATIC12)->SetWindowTextW(L"打猎范围");
		GetDlgItem(IDC_STATIC13)->SetWindowTextW(L"s 以上不能打猎时瞬移");
		GetDlgItem(IDC_CHECK_CHANNEL)->SetWindowTextW(L"渠道");
		GetDlgItem(IDC_RADIO_CHANNELFIXED)->SetWindowTextW(L"固定频道");
		GetDlgItem(IDC_STATIC15)->SetWindowTextW(L"s 以上不能打猎时瞬移");
		GetDlgItem(IDC_CHECK_CHANNEL)->SetWindowTextW(L"渠道");
		GetDlgItem(IDC_CHECK_MANNERMODE)->SetWindowTextW(L"不抢怪");
		GetDlgItem(IDC_CHECK_GATHER)->SetWindowTextW(L"采集");
		GetDlgItem(IDC_CHECK_GATHERSTONE)->SetWindowTextW(L"石");
		GetDlgItem(IDC_CHECK_GATHERIRON)->SetWindowTextW(L"铁矿石");
		GetDlgItem(IDC_CHECK_GATHERWOOD)->SetWindowTextW(L"木材");
		GetDlgItem(IDC_CHECK_GATHERGRASS)->SetWindowTextW(L"纤维");
		GetDlgItem(IDC_STATIC16)->SetWindowTextW(L"分");
		GetDlgItem(IDC_STATIC17)->SetWindowTextW(L"次失望停止");
		GetDlgItem(IDC_STATIC18)->SetWindowTextW(L"分");
		GetDlgItem(IDC_STATIC19)->SetWindowTextW(L"次网路不会退出");
	}
}


void CScheduleHunt::LoadSetting(WCHAR* szPath)
{
	FILE* fp;
	WCHAR szFile[MAX_PATH];

	swprintf_s(szFile, L"%s\\Hunt.dat", szPath);
	_wfopen_s(&fp, szFile, L"rb");
	if (fp)
	{
		int nCount = 0;
		fread(&nCount, sizeof(int), 1, fp);

		m_lstItemReturn.DeleteAllItems();

		if (nCount > 0)
		{
			ITEM_RETURN_W* pItemReturn = new ITEM_RETURN_W[nCount];
			if (pItemReturn)
			{
				memset(pItemReturn, 0, sizeof(ITEM_RETURN_W) * nCount);

				fread(pItemReturn, sizeof(ITEM_RETURN_W), nCount, fp);

				WCHAR szTemp[MAX_NAME];
				for (int i = 0; i < nCount; i++)
				{
					m_lstItemReturn.InsertItem(i, L"");

					swprintf_s(szTemp, L"%d", i + 1);
					m_lstItemReturn.SetItemText(i, 1, szTemp);

					m_lstItemReturn.SetItemText(i, 2, pItemReturn[i].szName);

					swprintf_s(szTemp, L"%d", pItemReturn[i].nCount);
					m_lstItemReturn.SetItemText(i, 3, szTemp);

					m_lstItemReturn.SetCheck(i, pItemReturn[i].bEnable);
				}

				delete[] pItemReturn;
				pItemReturn = NULL;
			}
		}

		HUNT_SETTING m_HuntSetting;
		memset(&m_HuntSetting, 0, sizeof(HUNT_SETTING));
		fread(&m_HuntSetting, sizeof(HUNT_SETTING), 1, fp);
		fclose(fp);

		m_nMoveMode = m_HuntSetting.nMoveMode;

		m_bDoQuest = m_HuntSetting.bDoQuest;
		m_bQuestTarget = m_HuntSetting.bQuestTarget;
		m_nQuestTarget = m_HuntSetting.nQuestTarget;

		m_nDungeon = m_HuntSetting.nDungeon;
		m_bDungeonPos = m_HuntSetting.bDungeonPos;
		m_fDungeonPosX = m_HuntSetting.fDungeonPosX;
		m_fDungeonPosY = m_HuntSetting.fDungeonPosY;
		m_fDungeonPosZ = m_HuntSetting.fDungeonPosZ;

		m_nField = m_HuntSetting.nField;
		m_bFieldPos = m_HuntSetting.bFieldPos;
		m_fFieldPosX = m_HuntSetting.fFieldPosX;
		m_fFieldPosY = m_HuntSetting.fFieldPosY;
		m_fFieldPosZ = m_HuntSetting.fFieldPosZ;

		m_bLimitLv = m_HuntSetting.bLimitLv;
		m_nLimitLvMin = m_HuntSetting.nLimitLvMin;
		m_nLimitLvMax = m_HuntSetting.nLimitLvMax;

		m_bLimitPower = m_HuntSetting.bLimitPower;
		m_nLimitPowerMin = m_HuntSetting.nLimitPowerMin;
		m_nLimitPowerMax = m_HuntSetting.nLimitPowerMax;

		m_bHpReturn = m_HuntSetting.bHpReturn;
		m_nHpReturnValue = m_HuntSetting.nHpReturnValue;
		m_nHpReturnTime = m_HuntSetting.nHpReturnTime;

		m_bWeightReturn = m_HuntSetting.bWeightReturn;
		m_nWeightReturnValue = m_HuntSetting.nWeightReturnValue;
		m_nWeightReturnTime = m_HuntSetting.nWeightReturnTime;

		m_nHuntRange = m_HuntSetting.nHuntRange;

		m_bMobTel = m_HuntSetting.bMobTel;
		m_nMobTelTime = m_HuntSetting.nMobTelTime;

		m_bChannel = m_HuntSetting.bChannel;
		m_nChannelMode = m_HuntSetting.nChannelMode;
		m_nChannelFixed = m_HuntSetting.nChannelFixed;
		m_nChannelFlexibleTime = m_HuntSetting.nChannelFlexibleTime;

		m_bMannerMode = m_HuntSetting.bMannerMode;

		m_bGather = m_HuntSetting.bGather;
		m_bGatherStone = m_HuntSetting.bGatherStone;
		m_bGatherIron = m_HuntSetting.bGatherIron;
		m_bGatherWood = m_HuntSetting.bGatherWood;
		m_bGatherGrass = m_HuntSetting.bGatherGrass;

		m_bLimitDead = m_HuntSetting.bLimitDead;
		m_nLimitDeadTime = m_HuntSetting.nLimitDeadTime;
		m_nLimitDeadCount = m_HuntSetting.nLimitDeadCount;

		m_bLimitRecon = m_HuntSetting.bLimitRecon;
		m_nLimitReconTime = m_HuntSetting.nLimitReconTime;
		m_nLimitReconCount = m_HuntSetting.nLimitReconCount;


		WCHAR szTemp[MAX_NAME];
		swprintf_s(szTemp, L"(%.2f, %.2f, %.2f)", m_fDungeonPosX, m_fDungeonPosY, m_fDungeonPosZ);
		GetDlgItem(IDC_EDIT_DUNGEONPOS)->SetWindowText(szTemp);

		swprintf_s(szTemp, L"(%.2f, %.2f, %.2f)", m_fFieldPosX, m_fFieldPosY, m_fFieldPosZ);
		GetDlgItem(IDC_EDIT_FIELDPOS)->SetWindowText(szTemp);


		UpdateData(FALSE);

		OnChangeMoveMode();
		OnBnClickedCheckLimitlv();
		OnBnClickedCheckLimitpower();
		OnBnClickedCheckHpreturn();
		OnBnClickedCheckWeightreturn();
		OnBnClickedCheckMobtel();
		OnBnClickedCheckChannel();
		OnBnClickedCheckGather();
		OnBnClickedCheckLimitdead();
		OnBnClickedCheckLimitrecon();
	}
}


void CScheduleHunt::SaveSetting(WCHAR* szPath)
{
	FILE* fp;
	WCHAR szFile[MAX_PATH];

	swprintf_s(szFile, L"%s\\Hunt.dat", szPath);
	_wfopen_s(&fp, szFile, L"wb");
	if (fp)
	{
		UpdateData(TRUE);

		int nCount = m_lstItemReturn.GetItemCount();
		fwrite(&nCount, sizeof(int), 1, fp);

		if (nCount > 0)
		{
			ITEM_RETURN_W* pItemReturn = new ITEM_RETURN_W[nCount];
			if (pItemReturn)
			{
				memset(pItemReturn, 0, sizeof(ITEM_RETURN_W) * nCount);

				for (int i = 0; i < nCount; i++)
				{
					wcscpy(pItemReturn[i].szName, m_lstItemReturn.GetItemText(i, 2).GetBuffer());
					pItemReturn[i].nCount = _wtoi(m_lstItemReturn.GetItemText(i, 3).GetBuffer());
					pItemReturn[i].bEnable = m_lstItemReturn.GetCheck(i);
				}

				fwrite(pItemReturn, sizeof(ITEM_RETURN_W), nCount, fp);

				delete[] pItemReturn;
				pItemReturn = NULL;
			}
		}

		HUNT_SETTING m_HuntSetting;
		memset(&m_HuntSetting, 0, sizeof(HUNT_SETTING));

		m_HuntSetting.nMoveMode = m_nMoveMode;

		m_HuntSetting.bDoQuest = m_bDoQuest;
		m_HuntSetting.bQuestTarget = m_bQuestTarget;
		m_HuntSetting.nQuestTarget = m_nQuestTarget;

		m_HuntSetting.nDungeon = m_nDungeon;
		m_HuntSetting.bDungeonPos = m_bDungeonPos;
		m_HuntSetting.fDungeonPosX = m_fDungeonPosX;
		m_HuntSetting.fDungeonPosY = m_fDungeonPosY;
		m_HuntSetting.fDungeonPosZ = m_fDungeonPosZ;

		m_HuntSetting.nField = m_nField;
		m_HuntSetting.bFieldPos = m_bFieldPos;
		m_HuntSetting.fFieldPosX = m_fFieldPosX;
		m_HuntSetting.fFieldPosY = m_fFieldPosY;
		m_HuntSetting.fFieldPosZ = m_fFieldPosZ;

		m_HuntSetting.bLimitLv = m_bLimitLv;
		m_HuntSetting.nLimitLvMin = m_nLimitLvMin;
		m_HuntSetting.nLimitLvMax = m_nLimitLvMax;

		m_HuntSetting.bLimitPower = m_bLimitPower;
		m_HuntSetting.nLimitPowerMin = m_nLimitPowerMin;
		m_HuntSetting.nLimitPowerMax = m_nLimitPowerMax;

		m_HuntSetting.bHpReturn = m_bHpReturn;
		m_HuntSetting.nHpReturnValue = m_nHpReturnValue;
		m_HuntSetting.nHpReturnTime = m_nHpReturnTime;

		m_HuntSetting.bWeightReturn = m_bWeightReturn;
		m_HuntSetting.nWeightReturnValue = m_nWeightReturnValue;
		m_HuntSetting.nWeightReturnTime = m_nWeightReturnTime;

		m_HuntSetting.nHuntRange = m_nHuntRange;

		m_HuntSetting.bMobTel = m_bMobTel;
		m_HuntSetting.nMobTelTime = m_nMobTelTime;

		m_HuntSetting.bChannel = m_bChannel;
		m_HuntSetting.nChannelMode = m_nChannelMode;
		m_HuntSetting.nChannelFixed = m_nChannelFixed;
		m_HuntSetting.nChannelFlexibleTime = m_nChannelFlexibleTime;

		m_HuntSetting.bMannerMode = m_bMannerMode;

		m_HuntSetting.bGather = m_bGather;
		m_HuntSetting.bGatherStone = m_bGatherStone;
		m_HuntSetting.bGatherIron = m_bGatherIron;
		m_HuntSetting.bGatherWood = m_bGatherWood;
		m_HuntSetting.bGatherGrass = m_bGatherGrass;

		m_HuntSetting.bLimitDead = m_bLimitDead;
		m_HuntSetting.nLimitDeadTime = m_nLimitDeadTime;
		m_HuntSetting.nLimitDeadCount = m_nLimitDeadCount;

		m_HuntSetting.bLimitRecon = m_bLimitRecon;
		m_HuntSetting.nLimitReconTime = m_nLimitReconTime;
		m_HuntSetting.nLimitReconCount = m_nLimitReconCount;

		fwrite(&m_HuntSetting, sizeof(HUNT_SETTING), 1, fp);
		fclose(fp);
	}
}


void CScheduleHunt::OnChangeMoveMode()
{
	UpdateData(TRUE);

	if (m_nMoveMode == 0)
	{
		GetDlgItem(IDC_CHECK_DOQUEST)->EnableWindow(TRUE);
		OnBnClickedCheckDoquest();

		GetDlgItem(IDC_COMBO_DUNGEON)->EnableWindow(FALSE);
		GetDlgItem(IDC_CHECK_DUNGEONPOS)->EnableWindow(FALSE);
		GetDlgItem(IDC_EDIT_DUNGEONPOS)->EnableWindow(FALSE);
		GetDlgItem(IDC_BTN_DUNGEONPOS)->EnableWindow(FALSE);

		GetDlgItem(IDC_COMBO_FIELD)->EnableWindow(FALSE);
		GetDlgItem(IDC_CHECK_FIELDPOS)->EnableWindow(FALSE);
		GetDlgItem(IDC_EDIT_FIELDPOS)->EnableWindow(FALSE);
		GetDlgItem(IDC_BTN_FIELDPOS)->EnableWindow(FALSE);
	}
	else if (m_nMoveMode == 1)
	{
		GetDlgItem(IDC_CHECK_DOQUEST)->EnableWindow(FALSE);
		GetDlgItem(IDC_CHECK_QUESTTARGET)->EnableWindow(FALSE);
		GetDlgItem(IDC_EDIT_QUESTTARGET)->EnableWindow(FALSE);

		GetDlgItem(IDC_COMBO_DUNGEON)->EnableWindow(TRUE);
		GetDlgItem(IDC_CHECK_DUNGEONPOS)->EnableWindow(TRUE);
		OnBnClickedCheckDungeonpos();

		GetDlgItem(IDC_COMBO_FIELD)->EnableWindow(FALSE);
		GetDlgItem(IDC_CHECK_FIELDPOS)->EnableWindow(FALSE);
		GetDlgItem(IDC_EDIT_FIELDPOS)->EnableWindow(FALSE);
		GetDlgItem(IDC_BTN_FIELDPOS)->EnableWindow(FALSE);
	}
	else
	{
		GetDlgItem(IDC_CHECK_DOQUEST)->EnableWindow(FALSE);
		GetDlgItem(IDC_CHECK_QUESTTARGET)->EnableWindow(FALSE);
		GetDlgItem(IDC_EDIT_QUESTTARGET)->EnableWindow(FALSE);

		GetDlgItem(IDC_COMBO_DUNGEON)->EnableWindow(FALSE);
		GetDlgItem(IDC_CHECK_DUNGEONPOS)->EnableWindow(FALSE);
		GetDlgItem(IDC_EDIT_DUNGEONPOS)->EnableWindow(FALSE);
		GetDlgItem(IDC_BTN_DUNGEONPOS)->EnableWindow(FALSE);

		GetDlgItem(IDC_COMBO_FIELD)->EnableWindow(TRUE);
		GetDlgItem(IDC_CHECK_FIELDPOS)->EnableWindow(TRUE);
		OnBnClickedCheckFieldpos();
	}
}


void CScheduleHunt::OnBnClickedCheckDoquest()
{
	UpdateData(TRUE);

	GetDlgItem(IDC_CHECK_QUESTTARGET)->EnableWindow(m_bDoQuest);

	if (m_bDoQuest)
		OnBnClickedCheckQuesttarget();
	else
		GetDlgItem(IDC_EDIT_QUESTTARGET)->EnableWindow(FALSE);
}


void CScheduleHunt::OnBnClickedCheckQuesttarget()
{
	UpdateData(TRUE);

	GetDlgItem(IDC_EDIT_QUESTTARGET)->EnableWindow(m_bQuestTarget);
}


void CScheduleHunt::OnBnClickedCheckDungeonpos()
{
	UpdateData(TRUE);

	GetDlgItem(IDC_EDIT_DUNGEONPOS)->EnableWindow(m_bDungeonPos);
	GetDlgItem(IDC_BTN_DUNGEONPOS)->EnableWindow(m_bDungeonPos);
}


void CScheduleHunt::OnSetDungeonPos()
{
	//if (g_LogInfo.bGameInfo)
	//{
	//	m_fDungeonPosX = g_LogInfo.fPosX;
	//	m_fDungeonPosY = g_LogInfo.fPosY;
	//	m_fDungeonPosZ = g_LogInfo.fPosZ;

	//	WCHAR szTemp[MAX_NAME];
	//	swprintf_s(szTemp, L"(%.2f, %.2f, %.2f)", m_fDungeonPosX, m_fDungeonPosY, m_fDungeonPosZ);
	//	GetDlgItem(IDC_EDIT_DUNGEONPOS)->SetWindowText(szTemp);
	//}
}


void CScheduleHunt::OnBnClickedCheckFieldpos()
{
	UpdateData(TRUE);

	GetDlgItem(IDC_EDIT_FIELDPOS)->EnableWindow(m_bFieldPos);
	GetDlgItem(IDC_BTN_FIELDPOS)->EnableWindow(m_bFieldPos);
}


void CScheduleHunt::OnSetFieldPos()
{
	//if (g_LogInfo.bGameInfo)
	//{
	//	m_fFieldPosX = g_LogInfo.fPosX;
	//	m_fFieldPosY = g_LogInfo.fPosY;
	//	m_fFieldPosZ = g_LogInfo.fPosZ;

	//	WCHAR szTemp[MAX_NAME];
	//	swprintf_s(szTemp, L"(%.2f, %.2f, %.2f)", m_fFieldPosX, m_fFieldPosY, m_fFieldPosZ);
	//	GetDlgItem(IDC_EDIT_FIELDPOS)->SetWindowText(szTemp);
	//}
}


void CScheduleHunt::OnBnClickedCheckLimitlv()
{
	UpdateData(TRUE);

	GetDlgItem(IDC_EDIT_LIMITLVMIN)->EnableWindow(m_bLimitLv);
	GetDlgItem(IDC_EDIT_LIMITLVMAX)->EnableWindow(m_bLimitLv);
}


void CScheduleHunt::OnBnClickedCheckLimitpower()
{
	UpdateData(TRUE);

	GetDlgItem(IDC_EDIT_LIMITPOWERMIN)->EnableWindow(m_bLimitPower);
	GetDlgItem(IDC_EDIT_LIMITPOWERMAX)->EnableWindow(m_bLimitPower);
}


void CScheduleHunt::OnBnClickedCheckHpreturn()
{
	UpdateData(TRUE);

	GetDlgItem(IDC_EDIT_HPRETURNVALUE)->EnableWindow(m_bHpReturn);
	GetDlgItem(IDC_EDIT_HPRETURNTIME)->EnableWindow(m_bHpReturn);
}


void CScheduleHunt::OnBnClickedCheckWeightreturn()
{
	UpdateData(TRUE);

	GetDlgItem(IDC_EDIT_WEIGHTRETURNVALUE)->EnableWindow(m_bWeightReturn);
	GetDlgItem(IDC_EDIT_WEIGHTRETURNTIME)->EnableWindow(m_bWeightReturn);
}


void CScheduleHunt::OnAddReturnItem()
{
	CItemReturn dlgItem;
	if (dlgItem.DoModal() != IDOK)
		return;

	for (int i = 0; i < m_lstItemReturn.GetItemCount(); i++)
	{
		if (!m_lstItemReturn.GetItemText(i, 2).Compare(dlgItem.m_szItemName.GetBuffer()))
			return;
	}

	WCHAR szTemp[MAX_NAME];

	m_lstItemReturn.InsertItem(m_lstItemReturn.GetItemCount(), L"");

	swprintf_s(szTemp, L"%d", m_lstItemReturn.GetItemCount());
	m_lstItemReturn.SetItemText(m_lstItemReturn.GetItemCount() - 1, 1, szTemp);

	m_lstItemReturn.SetItemText(m_lstItemReturn.GetItemCount() - 1, 2, dlgItem.m_szItemName.GetBuffer());

	swprintf_s(szTemp, L"%d", dlgItem.m_nCount);
	m_lstItemReturn.SetItemText(m_lstItemReturn.GetItemCount() - 1, 3, szTemp);

	m_lstItemReturn.SetCheck(m_lstItemReturn.GetItemCount() - 1);
}


void CScheduleHunt::OnDelReturnItem()
{
	POSITION Pos = m_lstItemReturn.GetFirstSelectedItemPosition();
	if (Pos == NULL)
		return;

	CString strLabel;
	strLabel.LoadString(NULL, IDS_REALLYDELETE, g_wLanguageID);

	CString strNotice;
	strNotice.LoadString(NULL, IDS_NOTICE, g_wLanguageID);

	if (MessageBox(strLabel.GetBuffer(), strNotice.GetBuffer(), MB_YESNO) != IDYES)
		return;

	int nIndex = m_lstItemReturn.GetNextSelectedItem(Pos);
	m_lstItemReturn.DeleteItem(nIndex);

	WCHAR szTemp[MAX_NAME];
	for (int i = nIndex; i < m_lstItemReturn.GetItemCount(); i++)
	{
		swprintf_s(szTemp, L"%d", i + 1);
		m_lstItemReturn.SetItemText(i, 1, szTemp);
	}
}


void CScheduleHunt::OnChangeReturnItem(NMHDR* pNMHDR, LRESULT* pResult)
{
	LPNMITEMACTIVATE pNMItemActivate = reinterpret_cast<LPNMITEMACTIVATE>(pNMHDR);
	if (pNMItemActivate->iItem < 0)
		return;

	CItemReturn dlgItem;
	dlgItem.m_szItemName = m_lstItemReturn.GetItemText(pNMItemActivate->iItem, 2);
	dlgItem.m_nCount = _wtoi(m_lstItemReturn.GetItemText(pNMItemActivate->iItem, 3).GetBuffer());

	if (dlgItem.DoModal() != IDOK)
		return;

	for (int i = 0; i < m_lstItemReturn.GetItemCount(); i++)
	{
		if (i == pNMItemActivate->iItem)
			continue;

		if (!m_lstItemReturn.GetItemText(i, 2).Compare(dlgItem.m_szItemName.GetBuffer()))
			return;
	}

	WCHAR szTemp[MAX_NAME];

	m_lstItemReturn.SetItemText(pNMItemActivate->iItem, 2, dlgItem.m_szItemName.GetBuffer());

	swprintf_s(szTemp, L"%d", dlgItem.m_nCount);
	m_lstItemReturn.SetItemText(pNMItemActivate->iItem, 3, szTemp);

	*pResult = 0;
}


void CScheduleHunt::OnBnClickedCheckMobtel()
{
	UpdateData(TRUE);

	GetDlgItem(IDC_EDIT_MOBTELTIME)->EnableWindow(m_bMobTel);
}


void CScheduleHunt::OnBnClickedCheckChannel()
{
	UpdateData(TRUE);

	GetDlgItem(IDC_RADIO_CHANNELFIXED)->EnableWindow(m_bChannel);
	GetDlgItem(IDC_RADIO_CHANNELFLEXIBLE)->EnableWindow(m_bChannel);

	if (m_bChannel)
		OnChangeChannelMode();
	else
	{
		GetDlgItem(IDC_EDIT_CHANNELFIXED)->EnableWindow(FALSE);

		GetDlgItem(IDC_EDIT_CHANNELFLEXIBLETIME)->EnableWindow(FALSE);
	}
}


void CScheduleHunt::OnChangeChannelMode()
{
	UpdateData(TRUE);

	if (m_nChannelMode == 0)
	{
		GetDlgItem(IDC_EDIT_CHANNELFIXED)->EnableWindow(TRUE);

		GetDlgItem(IDC_EDIT_CHANNELFLEXIBLETIME)->EnableWindow(FALSE);
	}
	else
	{
		GetDlgItem(IDC_EDIT_CHANNELFIXED)->EnableWindow(FALSE);

		GetDlgItem(IDC_EDIT_CHANNELFLEXIBLETIME)->EnableWindow(TRUE);
	}
}


void CScheduleHunt::OnBnClickedCheckGather()
{
	UpdateData(TRUE);

	GetDlgItem(IDC_CHECK_GATHERSTONE)->EnableWindow(m_bGather);
	GetDlgItem(IDC_CHECK_GATHERIRON)->EnableWindow(m_bGather);
	GetDlgItem(IDC_CHECK_GATHERWOOD)->EnableWindow(m_bGather);
	GetDlgItem(IDC_CHECK_GATHERGRASS)->EnableWindow(m_bGather);
}


void CScheduleHunt::OnBnClickedCheckLimitdead()
{
	UpdateData(TRUE);

	GetDlgItem(IDC_EDIT_LIMITDEADTIME)->EnableWindow(m_bLimitDead);
	GetDlgItem(IDC_EDIT_LIMITDEADCOUNT)->EnableWindow(m_bLimitDead);
}


void CScheduleHunt::OnBnClickedCheckLimitrecon()
{
	UpdateData(TRUE);

	GetDlgItem(IDC_EDIT_LIMITRECONTIME)->EnableWindow(m_bLimitRecon);
	GetDlgItem(IDC_EDIT_LIMITRECONCOUNT)->EnableWindow(m_bLimitRecon);
}
