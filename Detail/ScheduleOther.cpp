// ScheduleOther.cpp : implementation file
//

#include "stdafx.h"
#include "Detail.h"
#include "ScheduleOther.h"


// CScheduleOther dialog

IMPLEMENT_DYNAMIC(CScheduleOther, CDialog)

CScheduleOther::CScheduleOther(CWnd* pParent /*=NULL*/)
	: CDialog(CScheduleOther::IDD, pParent)
	, m_bVillageRequest(TRUE)
	, m_bValhallaFight(TRUE)
	, m_bRecoverFree(TRUE)
	, m_bRecoverGold(FALSE)
	, m_bAchieveReward(TRUE)
	, m_bAutoEquip(TRUE)
	, m_bEventReward(TRUE)
	, m_bGuildCheck(TRUE)
	, m_bGuildDonate(FALSE)
	, m_nGuildDonate(500000)
	, m_bCharacMail(FALSE)
	, m_bAccountMail(FALSE)
	, m_bStoreEquips(FALSE)
	, m_bGetStoreEquips(FALSE)
	, m_nVillageRegion(0)
	, m_bGuildJoin(TRUE)
	, m_bUseVillageQuest(FALSE)
	, m_bMoveChaoEnable(TRUE)
	, m_nMoveChaoTime(2)
	, m_nMoveChaoCount(5)
	, m_bQuestChaoEnable(TRUE)
	, m_nQuestChaoTime(5)
	, m_bCollectItem(TRUE)
	, m_bCollectEnchant(TRUE)
	, m_nCollectMin(0)
	, m_nCollectMax(5)
	, m_bCollectFilter(FALSE)
	, m_bDissolveItem(TRUE)
	, m_bDissolveEnchant(FALSE)
	, m_bDissolveManufacture(FALSE)
	, m_bDissolveBelong(FALSE)
	, m_bDissolveNotBelong(FALSE)
	, m_bWorldBoss(FALSE)
	, m_bTreasureBox(FALSE)
	, m_bPartyDungeon(FALSE)
	, m_bDungeonType(FALSE)
	, m_nDungeonType(0)
	, m_bDungeonDiff(FALSE)
	, m_nDungeonDiff(0)
	, m_bEnableSubQuest(TRUE)
	, m_bSkillInteraction(FALSE)
	, m_bMimirPotion(FALSE)
	, m_bUseTicket(FALSE)
	, m_nDungeonLV(30)
	, m_bMemberCount(FALSE)
	, m_nMemberCount(4)
	, m_bAverageLV(FALSE)
	, m_nAverageLV(30)
	, m_bBusLevel(FALSE)
	, m_nBusLevel(50)
	, m_bBuyBigPotion(FALSE)
	, m_bWeaponTreasure(TRUE)
	, m_bTradeDissolve(FALSE)
	, m_nTradeDissolve(10)
	, m_bCombineAvatar(TRUE)
	, m_bCombineRide(TRUE)
	, m_bCombineWeapon(TRUE)
	, m_bFrameEnable(FALSE)
	, m_nFrameValue(10)
	, m_bEventBuff(FALSE)
{
	m_bCollectGrade[0] = TRUE;
	m_bCollectGrade[1] = TRUE;
	m_bCollectGrade[2] = FALSE;
	m_bCollectGrade[3] = FALSE;

	m_bCollectTab[0] = TRUE;
	m_bCollectTab[1] = TRUE;
	m_bCollectTab[2] = TRUE;
	m_bCollectTab[3] = TRUE;

	m_bCollectType[0] = TRUE;
	m_bCollectType[1] = TRUE;
	m_bCollectType[2] = TRUE;
	m_bCollectType[3] = TRUE;
	m_bCollectType[4] = TRUE;
	m_bCollectType[5] = TRUE;

	m_bDissolveGrade[0] = TRUE;
	m_bDissolveGrade[1] = TRUE;
	m_bDissolveGrade[2] = FALSE;
	m_bDissolveGrade[3] = FALSE;

	m_bEnchantStone[0] = FALSE;
	m_bEnchantStone[1] = FALSE;
	m_bEnchantStone[2] = FALSE;
}

CScheduleOther::~CScheduleOther()
{
}

void CScheduleOther::DoDataExchange(CDataExchange* pDX)
{
	DDX_Check(pDX, IDC_CHECK1, m_bVillageRequest);
	DDX_Check(pDX, IDC_CHECK2, m_bValhallaFight);
	DDX_Check(pDX, IDC_CHECK3, m_bRecoverFree);
	DDX_Check(pDX, IDC_CHECK4, m_bRecoverGold);
	DDX_Check(pDX, IDC_CHECK5, m_bAchieveReward);
	DDX_Check(pDX, IDC_CHECK6, m_bAutoEquip);
	DDX_Check(pDX, IDC_CHECK7, m_bEventReward);
	DDX_Check(pDX, IDC_CHECK8, m_bGuildCheck);
	DDX_Check(pDX, IDC_CHECK9, m_bGuildDonate);
	DDX_Check(pDX, IDC_CHECK10, m_bCharacMail);
	DDX_Check(pDX, IDC_CHECK11, m_bAccountMail);
	DDX_Check(pDX, IDC_CHECK12, m_bStoreEquips);
	DDX_Check(pDX, IDC_CHECK13, m_bGetStoreEquips);
	DDX_Check(pDX, IDC_CHECK14, m_bGuildJoin);
	DDX_Check(pDX, IDC_CHECK15, m_bUseVillageQuest);
	DDX_Check(pDX, IDC_CHECK16, m_bMoveChaoEnable);
	DDX_Check(pDX, IDC_CHECK17, m_bQuestChaoEnable);
	DDX_Check(pDX, IDC_CHECK18, m_bCollectItem);
	DDX_Check(pDX, IDC_CHECK19, m_bCollectGrade[0]);
	DDX_Check(pDX, IDC_CHECK20, m_bCollectGrade[1]);
	DDX_Check(pDX, IDC_CHECK21, m_bCollectGrade[2]);
	DDX_Check(pDX, IDC_CHECK22, m_bCollectGrade[3]);
	DDX_Check(pDX, IDC_CHECK23, m_bCollectTab[0]);
	DDX_Check(pDX, IDC_CHECK24, m_bCollectTab[1]);
	DDX_Check(pDX, IDC_CHECK25, m_bCollectTab[2]);
	DDX_Check(pDX, IDC_CHECK26, m_bCollectTab[3]);
	DDX_Check(pDX, IDC_CHECK27, m_bCollectEnchant);
	DDX_Check(pDX, IDC_CHECK28, m_bCollectFilter);
	DDX_Check(pDX, IDC_CHECK29, m_bCollectType[0]);
	DDX_Check(pDX, IDC_CHECK30, m_bCollectType[1]);
	DDX_Check(pDX, IDC_CHECK31, m_bCollectType[2]);
	DDX_Check(pDX, IDC_CHECK32, m_bCollectType[3]);
	DDX_Check(pDX, IDC_CHECK33, m_bCollectType[4]);
	DDX_Check(pDX, IDC_CHECK34, m_bCollectType[5]);
	DDX_Check(pDX, IDC_CHECK35, m_bDissolveItem);
	DDX_Check(pDX, IDC_CHECK36, m_bDissolveGrade[0]);
	DDX_Check(pDX, IDC_CHECK37, m_bDissolveGrade[1]);
	DDX_Check(pDX, IDC_CHECK38, m_bDissolveGrade[2]);
	DDX_Check(pDX, IDC_CHECK39, m_bDissolveGrade[3]);
	DDX_Check(pDX, IDC_CHECK40, m_bDissolveEnchant);
	DDX_Check(pDX, IDC_CHECK41, m_bDissolveManufacture);
	DDX_Check(pDX, IDC_CHECK42, m_bDissolveBelong);
	DDX_Check(pDX, IDC_CHECK43, m_bDissolveNotBelong);
	DDX_Check(pDX, IDC_CHECK44, m_bWorldBoss);
	DDX_Check(pDX, IDC_CHECK45, m_bTreasureBox);
	DDX_Check(pDX, IDC_CHECK46, m_bPartyDungeon);
	DDX_Check(pDX, IDC_CHECK47, m_bDungeonType);
	DDX_Check(pDX, IDC_CHECK48, m_bDungeonDiff);
	DDX_Check(pDX, IDC_CHECK49, m_bEnableSubQuest);
	DDX_Check(pDX, IDC_CHECK50, m_bSkillInteraction);
	DDX_Check(pDX, IDC_CHECK51, m_bMimirPotion);
	DDX_Check(pDX, IDC_CHECK52, m_bUseTicket);
	DDX_Check(pDX, IDC_CHECK53, m_bMemberCount);
	DDX_Check(pDX, IDC_CHECK54, m_bAverageLV);
	DDX_Check(pDX, IDC_CHECK55, m_bBusLevel);
	DDX_Check(pDX, IDC_CHECK56, m_bEnchantStone[0]);
	DDX_Check(pDX, IDC_CHECK57, m_bEnchantStone[1]);
	DDX_Check(pDX, IDC_CHECK58, m_bEnchantStone[2]);
	DDX_Check(pDX, IDC_CHECK59, m_bBuyBigPotion);
	DDX_Check(pDX, IDC_CHECK60, m_bEventBuff);
	DDX_Check(pDX, IDC_CHECK65, m_bWeaponTreasure);
	DDX_Check(pDX, IDC_CHECK66, m_bTradeDissolve);
	DDX_Check(pDX, IDC_CHECK67, m_bCombineAvatar);
	DDX_Check(pDX, IDC_CHECK68, m_bCombineRide);
	DDX_Check(pDX, IDC_CHECK69, m_bCombineWeapon);
	DDX_Check(pDX, IDC_CHECK70, m_bFrameEnable);

	DDX_Control(pDX, IDC_COMBO1, m_cbVillageRegion);
	DDX_CBIndex(pDX, IDC_COMBO1, m_nVillageRegion);
	DDX_Control(pDX, IDC_COMBO2, m_cbPartyDungeon);
	DDX_CBIndex(pDX, IDC_COMBO2, m_nDungeonType);
	DDX_CBIndex(pDX, IDC_COMBO3, m_nDungeonDiff);
	DDX_Control(pDX, IDC_COMBO3, m_cbDungeonDiff);

	DDX_Text(pDX, IDC_EDIT1, m_nGuildDonate);
	DDX_Text(pDX, IDC_EDIT2, m_nMoveChaoTime);
	DDX_Text(pDX, IDC_EDIT3, m_nMoveChaoCount);
	DDX_Text(pDX, IDC_EDIT4, m_nQuestChaoTime);
	DDX_Text(pDX, IDC_EDIT5, m_nCollectMin);
	DDX_Text(pDX, IDC_EDIT6, m_nCollectMax);
	DDX_Text(pDX, IDC_EDIT7, m_nDungeonLV);
	DDX_Text(pDX, IDC_EDIT8, m_nMemberCount);
	DDX_Text(pDX, IDC_EDIT9, m_nAverageLV);
	DDX_Text(pDX, IDC_EDIT10, m_nBusLevel);
	DDX_Text(pDX, IDC_EDIT16, m_nTradeDissolve);
	DDX_Text(pDX, IDC_EDIT17, m_nFrameValue);
	DDV_MinMaxUInt(pDX, m_nFrameValue, 5, 500);

	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CScheduleOther, CDialog)
	ON_BN_CLICKED(IDC_CHECK9, &CScheduleOther::OnGuildDonate)
	ON_BN_CLICKED(IDC_CHECK1, &CScheduleOther::OnCheckVillage)
	ON_BN_CLICKED(IDC_CHECK8, &CScheduleOther::OnEnableGuild)
	ON_BN_CLICKED(IDC_CHECK16, &CScheduleOther::OnEnableMoveChao)
	ON_BN_CLICKED(IDC_CHECK17, &CScheduleOther::OnEnableQuestChao)
	ON_BN_CLICKED(IDC_CHECK18, &CScheduleOther::OnCollectItem)
	ON_BN_CLICKED(IDC_CHECK27, &CScheduleOther::OnCollectEnchant)
	ON_BN_CLICKED(IDC_CHECK28, &CScheduleOther::OnCollectFilter)
	ON_BN_CLICKED(IDC_CHECK35, &CScheduleOther::OnDissolveItem)
	ON_BN_CLICKED(IDC_CHECK46, &CScheduleOther::OnEnablePartyDungeon)
	ON_BN_CLICKED(IDC_CHECK47, &CScheduleOther::OnEnableDungeonType)
	ON_BN_CLICKED(IDC_CHECK48, &CScheduleOther::OnEnableDungeonDiff)
	ON_BN_CLICKED(IDC_CHECK53, &CScheduleOther::OnVerifyMemberCount)
	ON_BN_CLICKED(IDC_CHECK54, &CScheduleOther::OnVerifyAverageLV)
	ON_BN_CLICKED(IDC_CHECK55, &CScheduleOther::OnVerifyBusLV)
	ON_WM_HSCROLL()
	ON_BN_CLICKED(IDC_CHECK66, &CScheduleOther::OnEnableTradeDissolve)
	ON_BN_CLICKED(IDC_CHECK70, &CScheduleOther::OnEnableFrame)
END_MESSAGE_MAP()


// CScheduleOther message handlers

BOOL CScheduleOther::OnInitDialog()
{
	CDialog::OnInitDialog();

	SetControlText();

	for (int i = 0; i < MAX_WORLD; i++)
		m_cbVillageRegion.AddString(g_szWorldName[i]);

	for (int i = 0; i < MAX_PARTYDUNGEON; i++)
		m_cbPartyDungeon.AddString(g_szPartyDungeonName[i]);

	CString strLabel;

	strLabel.LoadString(NULL, IDS_STRING60353, g_wLanguageID);
	m_cbDungeonDiff.AddString(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60354, g_wLanguageID);
	m_cbDungeonDiff.AddString(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60355, g_wLanguageID);
	m_cbDungeonDiff.AddString(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60356, g_wLanguageID);
	m_cbDungeonDiff.AddString(strLabel);

	UpdateData(FALSE);
	OnEnableGuild();
	OnCheckVillage();
	OnEnableQuestChao();
	OnEnableMoveChao();
	OnCollectItem();
	OnDissolveItem();
	OnEnablePartyDungeon();
	OnEnableFrame();
	OnEnableTradeDissolve();
	return TRUE;
}

BOOL CScheduleOther::PreTranslateMessage(MSG* pMsg)
{
	if (pMsg->wParam == VK_RETURN || pMsg->wParam == VK_ESCAPE)
		return TRUE;

	return CDialog::PreTranslateMessage(pMsg);
}


void CScheduleOther::SetControlText()
{
	CString strLabel;

	strLabel.LoadString(NULL, IDS_VILLAGEREQUEST, g_wLanguageID);
	GetDlgItem(IDC_CHECK1)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_VALHALLA, g_wLanguageID);
	GetDlgItem(IDC_CHECK2)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_RECOVERFREE, g_wLanguageID);
	GetDlgItem(IDC_CHECK3)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_RECOVERGOLD, g_wLanguageID);
	GetDlgItem(IDC_CHECK4)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_ACHIEVEMENT, g_wLanguageID);
	GetDlgItem(IDC_CHECK5)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_AUTOEQUIP, g_wLanguageID);
	GetDlgItem(IDC_CHECK6)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_EVENTREWARD, g_wLanguageID);
	GetDlgItem(IDC_CHECK7)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_GUILDCHECK, g_wLanguageID);
	GetDlgItem(IDC_CHECK8)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_GOLD, g_wLanguageID);
	GetDlgItem(IDC_CHECK9)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_GUILDDONATE, g_wLanguageID);
	GetDlgItem(IDC_STATIC11)->SetWindowText(strLabel);
	
	strLabel.LoadString(NULL, IDS_CHARACMAIL, g_wLanguageID);
	GetDlgItem(IDC_CHECK10)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_ACCOUNTMAIL, g_wLanguageID);
	GetDlgItem(IDC_CHECK11)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STOREEQUIPS, g_wLanguageID);
	GetDlgItem(IDC_CHECK12)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_GETSTOREEQUIPS, g_wLanguageID);
	GetDlgItem(IDC_CHECK13)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60273, g_wLanguageID);
	GetDlgItem(IDC_CHECK14)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60279, g_wLanguageID);
	GetDlgItem(IDC_CHECK15)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60308, g_wLanguageID);
	GetDlgItem(IDC_STATIC12)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60309, g_wLanguageID);
	GetDlgItem(IDC_STATIC13)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60310, g_wLanguageID);
	GetDlgItem(IDC_STATIC14)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60320, g_wLanguageID);
	GetDlgItem(IDC_CHECK18)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_COMMON, g_wLanguageID);
	GetDlgItem(IDC_CHECK19)->SetWindowText(strLabel);
	GetDlgItem(IDC_CHECK36)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_UNCOMMON, g_wLanguageID);
	GetDlgItem(IDC_CHECK20)->SetWindowText(strLabel);
	GetDlgItem(IDC_CHECK37)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_RARE, g_wLanguageID);
	GetDlgItem(IDC_CHECK21)->SetWindowText(strLabel);
	GetDlgItem(IDC_CHECK38)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_HERO, g_wLanguageID);
	GetDlgItem(IDC_CHECK22)->SetWindowText(strLabel);
	GetDlgItem(IDC_CHECK39)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60321, g_wLanguageID);
	GetDlgItem(IDC_CHECK23)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60322, g_wLanguageID);
	GetDlgItem(IDC_CHECK24)->SetWindowText(strLabel);
	GetDlgItem(IDC_CHECK31)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_OTHER, g_wLanguageID);
	GetDlgItem(IDC_CHECK25)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60323, g_wLanguageID);
	GetDlgItem(IDC_CHECK26)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60324, g_wLanguageID);
	GetDlgItem(IDC_CHECK27)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60325, g_wLanguageID);
	GetDlgItem(IDC_CHECK28)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60326, g_wLanguageID);
	GetDlgItem(IDC_CHECK29)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60327, g_wLanguageID);
	GetDlgItem(IDC_CHECK30)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60328, g_wLanguageID);
	GetDlgItem(IDC_CHECK32)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60329, g_wLanguageID);
	GetDlgItem(IDC_CHECK33)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60330, g_wLanguageID);
	GetDlgItem(IDC_CHECK34)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_ITEMMODE_3, g_wLanguageID);
	GetDlgItem(IDC_CHECK35)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60331, g_wLanguageID);
	GetDlgItem(IDC_CHECK40)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60332, g_wLanguageID);
	GetDlgItem(IDC_CHECK41)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60333, g_wLanguageID);
	GetDlgItem(IDC_CHECK42)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60334, g_wLanguageID);
	GetDlgItem(IDC_CHECK43)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60337, g_wLanguageID);
	GetDlgItem(IDC_CHECK44)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60348, g_wLanguageID);
	GetDlgItem(IDC_CHECK45)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60349, g_wLanguageID);
	GetDlgItem(IDC_CHECK46)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60350, g_wLanguageID);
	GetDlgItem(IDC_CHECK47)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60351, g_wLanguageID);
	GetDlgItem(IDC_CHECK48)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60357, g_wLanguageID);
	GetDlgItem(IDC_CHECK49)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60358, g_wLanguageID);
	GetDlgItem(IDC_CHECK50)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60364, g_wLanguageID);
	GetDlgItem(IDC_CHECK51)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60365, g_wLanguageID);
	GetDlgItem(IDC_CHECK52)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60369, g_wLanguageID);
	GetDlgItem(IDC_STATIC15)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60370, g_wLanguageID);
	GetDlgItem(IDC_STATIC16)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60371, g_wLanguageID);
	GetDlgItem(IDC_CHECK54)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60372, g_wLanguageID);
	GetDlgItem(IDC_STATIC17)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60373, g_wLanguageID);
	GetDlgItem(IDC_STATIC18)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60377, g_wLanguageID);
	GetDlgItem(IDC_STATIC19)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60378, g_wLanguageID);
	GetDlgItem(IDC_CHECK56)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60379, g_wLanguageID);
	GetDlgItem(IDC_CHECK57)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60380, g_wLanguageID);
	GetDlgItem(IDC_CHECK58)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60391, g_wLanguageID);
	GetDlgItem(IDC_CHECK59)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60428, g_wLanguageID);
	GetDlgItem(IDC_CHECK60)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60399, g_wLanguageID);
	GetDlgItem(IDC_CHECK65)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60408, g_wLanguageID);
	GetDlgItem(IDC_CHECK66)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60409, g_wLanguageID);
	GetDlgItem(IDC_STATIC20)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60412, g_wLanguageID);
	GetDlgItem(IDC_STATIC21)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60413, g_wLanguageID);
	GetDlgItem(IDC_CHECK67)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60414, g_wLanguageID);
	GetDlgItem(IDC_CHECK68)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60415, g_wLanguageID);
	GetDlgItem(IDC_CHECK69)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60417, g_wLanguageID);
	GetDlgItem(IDC_CHECK70)->SetWindowText(strLabel);
}


void CScheduleOther::LoadSetting(WCHAR *szPath)
{
	WCHAR szFile[MAX_PATH];
	swprintf(szFile, L"%s\\Other.dat", szPath);

	FILE *fp = _wfopen(szFile, L"rb");
	if(!fp)
		return;

	OTHER_SETTING m_OtherSetting;
	memset(&m_OtherSetting, 0, sizeof(OTHER_SETTING));
	fread(&m_OtherSetting, sizeof(OTHER_SETTING), 1, fp);
	fclose(fp);

	m_bVillageRequest = m_OtherSetting.bVillageRequest;
	m_bValhallaFight = m_OtherSetting.bValhallaFight;
	m_bRecoverFree = m_OtherSetting.bRecoverFree;
	m_bRecoverGold = m_OtherSetting.bRecoverGold;
	m_bAchieveReward = m_OtherSetting.bAchieveReward;
	m_bAutoEquip = m_OtherSetting.bAutoEquip;
	m_bEventReward = m_OtherSetting.bEventReward;
	m_bGuildCheck = m_OtherSetting.bGuildCheck;
	m_bGuildDonate = m_OtherSetting.bGuildDonate;
	m_nGuildDonate = m_OtherSetting.nGuildDonate;
	m_bCharacMail = m_OtherSetting.bCharacMail;
	m_bAccountMail = m_OtherSetting.bAccountMail;
	m_bStoreEquips = m_OtherSetting.bStoreEquips;
	m_bGetStoreEquips = m_OtherSetting.bGetStoreEquips;
	m_nVillageRegion = m_OtherSetting.nVillageRegion;
	m_bGuildJoin = m_OtherSetting.bGuildJoin;
	m_bUseVillageQuest = m_OtherSetting.bUseVillageQuest;
	m_bMoveChaoEnable = m_OtherSetting.bMoveChaoEnable;
	m_nMoveChaoTime = m_OtherSetting.nMoveChaoTime;
	m_nMoveChaoCount = m_OtherSetting.nMoveChaoCount;
	m_bQuestChaoEnable = m_OtherSetting.bQuestChaoEnable;
	m_nQuestChaoTime = m_OtherSetting.nQuestChaoTime;
	m_bCollectItem = m_OtherSetting.bCollectItem;
	m_bCollectGrade[0] = m_OtherSetting.bCollectGrade[0];
	m_bCollectGrade[1] = m_OtherSetting.bCollectGrade[1];
	m_bCollectGrade[2] = m_OtherSetting.bCollectGrade[2];
	m_bCollectGrade[3] = m_OtherSetting.bCollectGrade[3];
	m_bCollectTab[0] = m_OtherSetting.bCollectTab[0];
	m_bCollectTab[1] = m_OtherSetting.bCollectTab[1];
	m_bCollectTab[2] = m_OtherSetting.bCollectTab[2];
	m_bCollectTab[3] = m_OtherSetting.bCollectTab[3];
	m_bCollectEnchant = m_OtherSetting.bCollectEnchant;
	m_nCollectMin = m_OtherSetting.nCollectMin;
	m_nCollectMax = m_OtherSetting.nCollectMax;
	m_bCollectFilter = m_OtherSetting.bCollectFilter;
	m_bCollectType[0] = m_OtherSetting.bCollectType[0];
	m_bCollectType[1] = m_OtherSetting.bCollectType[1];
	m_bCollectType[2] = m_OtherSetting.bCollectType[2];
	m_bCollectType[3] = m_OtherSetting.bCollectType[3];
	m_bCollectType[4] = m_OtherSetting.bCollectType[4];
	m_bCollectType[5] = m_OtherSetting.bCollectType[5];
	m_bDissolveItem = m_OtherSetting.bDissolveItem;
	m_bDissolveGrade[0] = m_OtherSetting.bDissolveGrade[0];
	m_bDissolveGrade[1] = m_OtherSetting.bDissolveGrade[1];
	m_bDissolveGrade[2] = m_OtherSetting.bDissolveGrade[2];
	m_bDissolveGrade[3] = m_OtherSetting.bDissolveGrade[3];
	m_bDissolveEnchant = m_OtherSetting.bDissolveEnchant;
	m_bDissolveManufacture = m_OtherSetting.bDissolveManufacture;
	m_bDissolveBelong = m_OtherSetting.bDissolveBelong;
	m_bDissolveNotBelong = m_OtherSetting.bDissolveNotBelong;
	m_bWorldBoss = m_OtherSetting.bWorldBoss;
	m_bTreasureBox = m_OtherSetting.bTreasureBox;
	m_bPartyDungeon = m_OtherSetting.bPartyDungeon;
	m_bDungeonType = m_OtherSetting.bDungeonType;
	m_nDungeonType = m_OtherSetting.nDungeonType;
	m_bDungeonDiff = m_OtherSetting.bDungeonDiff;
	m_nDungeonDiff = m_OtherSetting.nDungeonDiff;
	m_bEnableSubQuest = m_OtherSetting.bEnableSubQuest;
	m_bSkillInteraction = m_OtherSetting.bSkillInteraction;
	m_bMimirPotion = m_OtherSetting.bMimirPotion;
	m_bUseTicket = m_OtherSetting.bUseTicket;
	m_nDungeonLV = m_OtherSetting.nDungeonLevel;
	if (m_nDungeonLV == 0)
		m_nDungeonLV = 30;
	m_bMemberCount = m_OtherSetting.bMemberCount;
	m_nMemberCount = m_OtherSetting.nMemberCount;
	if (m_nMemberCount == 0)
		m_nMemberCount = 4;
	m_bAverageLV = m_OtherSetting.bAverageLevel;
	m_nAverageLV = m_OtherSetting.nAverageLevel;
	if (m_nAverageLV == 0)
		m_nAverageLV = 30;
	m_bBusLevel = m_OtherSetting.bBusLevel;
	m_nBusLevel = m_OtherSetting.nBusLevel;
	if (m_nBusLevel == 0)
		m_nBusLevel = 50;

	m_bEnchantStone[0] = m_OtherSetting.bEnchantStone[0];
	m_bEnchantStone[1] = m_OtherSetting.bEnchantStone[1];
	m_bEnchantStone[2] = m_OtherSetting.bEnchantStone[2];

	m_bBuyBigPotion = m_OtherSetting.bBuyBigPotion;

	m_bWeaponTreasure = m_OtherSetting.bWeaponTreasure;

	m_bTradeDissolve = m_OtherSetting.bTradeDissolve;
	m_nTradeDissolve = m_OtherSetting.nTradeDissolve;
	if (m_nTradeDissolve < 10)
		m_nTradeDissolve = 10;

	m_bCombineAvatar = m_OtherSetting.bCombineAvatar;
	m_bCombineRide = m_OtherSetting.bCombineRide;
	m_bCombineWeapon = m_OtherSetting.bCombineWeapon;

	m_bFrameEnable = m_OtherSetting.bFrameEnable;
	m_nFrameValue = m_OtherSetting.nFrameValue;
	if (m_nFrameValue < 5)
		m_nFrameValue = 5;
	if (m_nFrameValue > 500)
		m_nFrameValue = 500;

	m_bEventBuff = m_OtherSetting.bEventBuff;

	UpdateData(FALSE);
	OnEnableGuild();
	OnCheckVillage();
	OnEnableQuestChao();
	OnEnableMoveChao();
	OnCollectItem();
	OnDissolveItem();
	OnEnablePartyDungeon();
	OnEnableFrame();
	OnEnableTradeDissolve();
}


void CScheduleOther::SaveSetting(WCHAR *szPath)
{
	WCHAR szFile[MAX_PATH];
	swprintf(szFile, L"%s\\Other.dat", szPath);

	FILE *fp = _wfopen(szFile, L"wb");
	if(!fp)
		return;

	UpdateData();

	OTHER_SETTING m_OtherSetting;
	memset(&m_OtherSetting, 0, sizeof(OTHER_SETTING));

	m_OtherSetting.bVillageRequest = m_bVillageRequest;
	m_OtherSetting.bValhallaFight = m_bValhallaFight;
	m_OtherSetting.bRecoverFree = m_bRecoverFree;
	m_OtherSetting.bRecoverGold = m_bRecoverGold;
	m_OtherSetting.bAchieveReward = m_bAchieveReward;
	m_OtherSetting.bAutoEquip = m_bAutoEquip;
	m_OtherSetting.bEventReward = m_bEventReward;
	m_OtherSetting.bGuildCheck = m_bGuildCheck;
	m_OtherSetting.bGuildDonate = m_bGuildDonate;
	m_OtherSetting.nGuildDonate = m_nGuildDonate;
	m_OtherSetting.bCharacMail = m_bCharacMail;
	m_OtherSetting.bAccountMail = m_bAccountMail;
	m_OtherSetting.bStoreEquips = m_bStoreEquips;
	m_OtherSetting.bGetStoreEquips = m_bGetStoreEquips;
	m_OtherSetting.nVillageRegion = m_nVillageRegion;
	m_OtherSetting.bGuildJoin = m_bGuildJoin;
	m_OtherSetting.bUseVillageQuest = m_bUseVillageQuest;
	m_OtherSetting.bMoveChaoEnable = m_bMoveChaoEnable;
	m_OtherSetting.nMoveChaoTime = m_nMoveChaoTime;
	m_OtherSetting.nMoveChaoCount = m_nMoveChaoCount;
	m_OtherSetting.bQuestChaoEnable = m_bQuestChaoEnable;
	m_OtherSetting.nQuestChaoTime = m_nQuestChaoTime;
	m_OtherSetting.bCollectItem = m_bCollectItem;
	m_OtherSetting.bCollectGrade[0] = m_bCollectGrade[0];
	m_OtherSetting.bCollectGrade[1] = m_bCollectGrade[1];
	m_OtherSetting.bCollectGrade[2] = m_bCollectGrade[2];
	m_OtherSetting.bCollectGrade[3] = m_bCollectGrade[3];
	m_OtherSetting.bCollectTab[0] = m_bCollectTab[0];
	m_OtherSetting.bCollectTab[1] = m_bCollectTab[1];
	m_OtherSetting.bCollectTab[2] = m_bCollectTab[2];
	m_OtherSetting.bCollectTab[3] = m_bCollectTab[3];
	m_OtherSetting.bCollectEnchant = m_bCollectEnchant;
	m_OtherSetting.nCollectMin = m_nCollectMin;
	m_OtherSetting.nCollectMax = m_nCollectMax;
	m_OtherSetting.bCollectFilter = m_bCollectFilter;
	m_OtherSetting.bCollectType[0] = m_bCollectType[0];
	m_OtherSetting.bCollectType[1] = m_bCollectType[1];
	m_OtherSetting.bCollectType[2] = m_bCollectType[2];
	m_OtherSetting.bCollectType[3] = m_bCollectType[3];
	m_OtherSetting.bCollectType[4] = m_bCollectType[4];
	m_OtherSetting.bCollectType[5] = m_bCollectType[5];
	m_OtherSetting.bDissolveItem = m_bDissolveItem;
	m_OtherSetting.bDissolveGrade[0] = m_bDissolveGrade[0];
	m_OtherSetting.bDissolveGrade[1] = m_bDissolveGrade[1];
	m_OtherSetting.bDissolveGrade[2] = m_bDissolveGrade[2];
	m_OtherSetting.bDissolveGrade[3] = m_bDissolveGrade[3];
	m_OtherSetting.bDissolveEnchant = m_bDissolveEnchant;
	m_OtherSetting.bDissolveManufacture = m_bDissolveManufacture;
	m_OtherSetting.bDissolveBelong = m_bDissolveBelong;
	m_OtherSetting.bDissolveNotBelong = m_bDissolveNotBelong;
	m_OtherSetting.bWorldBoss = m_bWorldBoss;
	m_OtherSetting.bTreasureBox = m_bTreasureBox;
	m_OtherSetting.bPartyDungeon = m_bPartyDungeon;
	m_OtherSetting.bDungeonType = m_bDungeonType;
	m_OtherSetting.nDungeonType = m_nDungeonType;
	m_OtherSetting.bDungeonDiff = m_bDungeonDiff;
	m_OtherSetting.nDungeonDiff = m_nDungeonDiff;
	m_OtherSetting.bEnableSubQuest = m_bEnableSubQuest;
	m_OtherSetting.bSkillInteraction = m_bSkillInteraction;
	m_OtherSetting.bMimirPotion = m_bMimirPotion;
	m_OtherSetting.bUseTicket = m_bUseTicket;
	m_OtherSetting.nDungeonLevel = m_nDungeonLV;
	m_OtherSetting.bMemberCount = m_bMemberCount;
	m_OtherSetting.nMemberCount = m_nMemberCount;
	m_OtherSetting.bAverageLevel = m_bAverageLV;
	m_OtherSetting.nAverageLevel = m_nAverageLV;
	m_OtherSetting.bBusLevel = m_bBusLevel;
	m_OtherSetting.nBusLevel = m_nBusLevel;
	m_OtherSetting.bEnchantStone[0] = m_bEnchantStone[0];
	m_OtherSetting.bEnchantStone[1] = m_bEnchantStone[1];
	m_OtherSetting.bEnchantStone[2] = m_bEnchantStone[2];
	m_OtherSetting.bBuyBigPotion = m_bBuyBigPotion;

	m_OtherSetting.bWeaponTreasure = m_bWeaponTreasure;

	m_OtherSetting.bTradeDissolve = m_bTradeDissolve;
	m_OtherSetting.nTradeDissolve = m_nTradeDissolve;

	m_OtherSetting.bCombineAvatar = m_bCombineAvatar;
	m_OtherSetting.bCombineRide = m_bCombineRide;
	m_OtherSetting.bCombineWeapon = m_bCombineWeapon;

	m_OtherSetting.bFrameEnable = m_bFrameEnable;
	m_OtherSetting.nFrameValue = m_nFrameValue;

	m_OtherSetting.bEventBuff = m_bEventBuff;

	fwrite(&m_OtherSetting, sizeof(OTHER_SETTING), 1, fp);
	fclose(fp);
}


void CScheduleOther::OnGuildDonate()
{
	UpdateData();

	GetDlgItem(IDC_EDIT1)->EnableWindow(m_bGuildDonate);
}


void CScheduleOther::OnCheckVillage()
{
	UpdateData();

	GetDlgItem(IDC_COMBO1)->EnableWindow(m_bVillageRequest);
	GetDlgItem(IDC_CHECK15)->EnableWindow(m_bVillageRequest);
}


void CScheduleOther::OnEnableGuild()
{
	UpdateData();

	GetDlgItem(IDC_CHECK9)->EnableWindow(m_bGuildCheck);

	if (!m_bGuildCheck)
		GetDlgItem(IDC_EDIT1)->EnableWindow(m_bGuildCheck);
	else
		OnGuildDonate();
}


void CScheduleOther::OnEnableMoveChao()
{
	UpdateData();

	GetDlgItem(IDC_EDIT2)->EnableWindow(m_bMoveChaoEnable);
	GetDlgItem(IDC_EDIT3)->EnableWindow(m_bMoveChaoEnable);
}


void CScheduleOther::OnEnableQuestChao()
{
	UpdateData();

	GetDlgItem(IDC_EDIT4)->EnableWindow(m_bQuestChaoEnable);
}


void CScheduleOther::OnCollectItem()
{
	UpdateData();

	GetDlgItem(IDC_CHECK19)->EnableWindow(m_bCollectItem);
	GetDlgItem(IDC_CHECK20)->EnableWindow(m_bCollectItem);
	GetDlgItem(IDC_CHECK21)->EnableWindow(m_bCollectItem);
	GetDlgItem(IDC_CHECK22)->EnableWindow(m_bCollectItem);

	GetDlgItem(IDC_CHECK23)->EnableWindow(m_bCollectItem);
	GetDlgItem(IDC_CHECK24)->EnableWindow(m_bCollectItem);
	GetDlgItem(IDC_CHECK25)->EnableWindow(m_bCollectItem);
	GetDlgItem(IDC_CHECK26)->EnableWindow(m_bCollectItem);

	GetDlgItem(IDC_CHECK27)->EnableWindow(m_bCollectItem);

	if (!m_bCollectItem)
	{
		GetDlgItem(IDC_EDIT5)->EnableWindow(m_bCollectItem);
		GetDlgItem(IDC_EDIT6)->EnableWindow(m_bCollectItem);
	}
	else
	{
		OnCollectEnchant();
	}

	GetDlgItem(IDC_CHECK28)->EnableWindow(m_bCollectItem);

	if (!m_bCollectItem)
	{
		GetDlgItem(IDC_CHECK29)->EnableWindow(m_bCollectItem);
		GetDlgItem(IDC_CHECK30)->EnableWindow(m_bCollectItem);
		GetDlgItem(IDC_CHECK31)->EnableWindow(m_bCollectItem);
		GetDlgItem(IDC_CHECK32)->EnableWindow(m_bCollectItem);
		GetDlgItem(IDC_CHECK33)->EnableWindow(m_bCollectItem);
		GetDlgItem(IDC_CHECK34)->EnableWindow(m_bCollectItem);
	}
	else
	{
		OnCollectFilter();
	}
}


void CScheduleOther::OnCollectEnchant()
{
	UpdateData();

	GetDlgItem(IDC_EDIT5)->EnableWindow(m_bCollectEnchant);
	GetDlgItem(IDC_EDIT6)->EnableWindow(m_bCollectEnchant);
}


void CScheduleOther::OnCollectFilter()
{
	UpdateData();

	GetDlgItem(IDC_CHECK29)->EnableWindow(m_bCollectFilter);
	GetDlgItem(IDC_CHECK30)->EnableWindow(m_bCollectFilter);
	GetDlgItem(IDC_CHECK31)->EnableWindow(m_bCollectFilter);
	GetDlgItem(IDC_CHECK32)->EnableWindow(m_bCollectFilter);
	GetDlgItem(IDC_CHECK33)->EnableWindow(m_bCollectFilter);
	GetDlgItem(IDC_CHECK34)->EnableWindow(m_bCollectFilter);
}


void CScheduleOther::OnDissolveItem()
{
	UpdateData();

	GetDlgItem(IDC_CHECK36)->EnableWindow(m_bDissolveItem);
	GetDlgItem(IDC_CHECK37)->EnableWindow(m_bDissolveItem);
	GetDlgItem(IDC_CHECK38)->EnableWindow(m_bDissolveItem);
	GetDlgItem(IDC_CHECK39)->EnableWindow(m_bDissolveItem);
	GetDlgItem(IDC_CHECK40)->EnableWindow(m_bDissolveItem);
	GetDlgItem(IDC_CHECK41)->EnableWindow(m_bDissolveItem);
	GetDlgItem(IDC_CHECK42)->EnableWindow(m_bDissolveItem);
	GetDlgItem(IDC_CHECK43)->EnableWindow(m_bDissolveItem);
}


void CScheduleOther::OnEnablePartyDungeon()
{
	UpdateData();

	if (!m_bPartyDungeon)
	{
		GetDlgItem(IDC_CHECK47)->EnableWindow(FALSE);
		GetDlgItem(IDC_COMBO2)->EnableWindow(FALSE);

		GetDlgItem(IDC_CHECK48)->EnableWindow(FALSE);
		GetDlgItem(IDC_COMBO3)->EnableWindow(FALSE);

		GetDlgItem(IDC_CHECK52)->EnableWindow(FALSE);

		GetDlgItem(IDC_EDIT7)->EnableWindow(FALSE);

		GetDlgItem(IDC_CHECK53)->EnableWindow(FALSE);
		GetDlgItem(IDC_EDIT8)->EnableWindow(FALSE);

		GetDlgItem(IDC_CHECK54)->EnableWindow(FALSE);
		GetDlgItem(IDC_EDIT9)->EnableWindow(FALSE);

		GetDlgItem(IDC_CHECK55)->EnableWindow(FALSE);
		GetDlgItem(IDC_EDIT10)->EnableWindow(FALSE);
	}
	else
	{
		GetDlgItem(IDC_EDIT7)->EnableWindow(TRUE);
		GetDlgItem(IDC_CHECK47)->EnableWindow(TRUE);
		GetDlgItem(IDC_CHECK48)->EnableWindow(TRUE);
		GetDlgItem(IDC_CHECK52)->EnableWindow(TRUE);
		GetDlgItem(IDC_CHECK53)->EnableWindow(TRUE);
		GetDlgItem(IDC_CHECK54)->EnableWindow(TRUE);
		GetDlgItem(IDC_CHECK55)->EnableWindow(TRUE);

		OnEnableDungeonType();
		OnEnableDungeonDiff();
		OnVerifyMemberCount();
		OnVerifyAverageLV();
		OnVerifyBusLV();
	}
}


void CScheduleOther::OnEnableDungeonType()
{
	UpdateData();

	GetDlgItem(IDC_COMBO2)->EnableWindow(m_bDungeonType);
}


void CScheduleOther::OnEnableDungeonDiff()
{
	UpdateData();

	GetDlgItem(IDC_COMBO3)->EnableWindow(m_bDungeonDiff);
}


void CScheduleOther::OnVerifyMemberCount()
{
	UpdateData();

	GetDlgItem(IDC_EDIT8)->EnableWindow(m_bMemberCount);
}


void CScheduleOther::OnVerifyAverageLV()
{
	UpdateData();

	GetDlgItem(IDC_EDIT9)->EnableWindow(m_bAverageLV);
}


void CScheduleOther::OnVerifyBusLV()
{
	UpdateData();

	GetDlgItem(IDC_EDIT10)->EnableWindow(m_bBusLevel);
}


void CScheduleOther::OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar)
{
	CDialog::OnHScroll(nSBCode, nPos, pScrollBar);
}


void CScheduleOther::OnEnableTradeDissolve()
{
	UpdateData();

	GetDlgItem(IDC_EDIT16)->EnableWindow(m_bTradeDissolve);
}


void CScheduleOther::OnEnableFrame()
{
	UpdateData();

	GetDlgItem(IDC_EDIT17)->EnableWindow(m_bFrameEnable);
}
