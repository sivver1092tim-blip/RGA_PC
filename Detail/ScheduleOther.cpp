// ScheduleOther.cpp : implementation file
//

#include "stdafx.h"
#include "Detail.h"
#include "ScheduleOther.h"


// CScheduleOther dialog

IMPLEMENT_DYNAMIC(CScheduleOther, CDialog)

CScheduleOther::CScheduleOther(CWnd* pParent /*=NULL*/)
	: CDialog(CScheduleOther::IDD, pParent)
	, m_bReqQuest(FALSE)
	, m_bReqQuestCoin(FALSE)
	, m_bAutoEquip(TRUE)
	, m_bEquipEnchant(TRUE)
	, m_bRecoverFree(TRUE)
	, m_bRecoverGold(FALSE)
	, m_bEvent(TRUE)
	, m_bAchievement(TRUE)
	, m_bMail(TRUE)
	, m_bGuildJoin(TRUE)
	, m_bGuildAttendance(TRUE)
	, m_bGuildDonate(TRUE)
	, m_nGuildDonateGold(300000)
	, m_bMoveCao(TRUE)
	, m_nMoveCaoTime(2)
	, m_nMoveCaoCount(5)
	, m_bQuestCao(TRUE)
	, m_nQuestCaoTime(5)
	, m_bGetEquip(TRUE)
	, m_bGetAll(FALSE)
	, m_bNetworkExit(FALSE)
	, m_nNetworkExit(10)
	, m_bCollectItem(TRUE)
	, m_bCollectEnchant(FALSE)
	, m_nCollectEnchant(1)
	, m_bDissolveItem(TRUE)
	, m_bDissolveEnchant(FALSE)
	, m_bDissolveSegong(FALSE)
	, m_bDissolveBelong(TRUE)
	, m_bDissolveNotBelong(FALSE)
	, m_bTradeDissolve(FALSE)
	, m_nTradeDissolve(10)
	, m_bRaid(FALSE)
	, m_bCraft(TRUE)
	, m_bCraftWeapon(TRUE)
	, m_bCraftArmor(TRUE)
	, m_bCraftAcce(TRUE)
	, m_bAutoCombineCostume(TRUE)
	, m_bAutoCombinePet(TRUE)
{
	m_bReqQuestGrade[0] = TRUE;
	m_bReqQuestGrade[1] = FALSE;
	m_bReqQuestGrade[2] = FALSE;
	m_bReqQuestGrade[3] = FALSE;

	m_bCollectGrade[0] = TRUE;
	m_bCollectGrade[1] = TRUE;
	m_bCollectGrade[2] = FALSE;
	m_bCollectGrade[3] = FALSE;

	m_bDissolveGrade[0] = TRUE;
	m_bDissolveGrade[1] = TRUE;
	m_bDissolveGrade[2] = FALSE;
	m_bDissolveGrade[3] = FALSE;

	m_bEnchantScroll[0] = FALSE;
	m_bEnchantScroll[1] = FALSE;
	m_bEnchantScroll[2] = FALSE;

	m_bRaidBoss[0] = FALSE;
	m_bRaidBoss[1] = FALSE;
	m_bRaidBoss[2] = FALSE;
	m_bRaidBoss[3] = FALSE;
	m_bRaidBoss[4] = FALSE;
}

CScheduleOther::~CScheduleOther()
{
}

void CScheduleOther::DoDataExchange(CDataExchange* pDX)
{
	DDX_Check(pDX, IDC_CHECK_REQQUEST, m_bReqQuest);
	DDX_Check(pDX, IDC_CHECK_REQQUESTGRADE1, m_bReqQuestGrade[0]);
	DDX_Check(pDX, IDC_CHECK_REQQUESTGRADE2, m_bReqQuestGrade[1]);
	DDX_Check(pDX, IDC_CHECK_REQQUESTGRADE3, m_bReqQuestGrade[2]);
	DDX_Check(pDX, IDC_CHECK_REQQUESTGRADE4, m_bReqQuestGrade[3]);
	DDX_Check(pDX, IDC_CHECK_REQQUESTCOIN, m_bReqQuestCoin);
	DDX_Check(pDX, IDC_CHECK_AUTOEQUIP, m_bAutoEquip);
	DDX_Check(pDX, IDC_CHECK_EQUIPENCHANT, m_bEquipEnchant);
	DDX_Check(pDX, IDC_CHECK_RECOVERFREE, m_bRecoverFree);
	DDX_Check(pDX, IDC_CHECK_RECOVERGOLD, m_bRecoverGold);
	DDX_Check(pDX, IDC_CHECK_EVENT, m_bEvent);
	DDX_Check(pDX, IDC_CHECK_ACHIEVEMENT, m_bAchievement);
	DDX_Check(pDX, IDC_CHECK_MAIL, m_bMail);
	DDX_Check(pDX, IDC_CHECK_GUILDJOIN, m_bGuildJoin);
	DDX_Check(pDX, IDC_CHECK_GUILDATTENDANCE, m_bGuildAttendance);
	DDX_Check(pDX, IDC_CHECK_GUILDDONATE, m_bGuildDonate);
	DDX_Text(pDX, IDC_EDIT_GUILDDONATEGOLD, m_nGuildDonateGold);
	DDX_Check(pDX, IDC_CHECK_MOVECAO, m_bMoveCao);
	DDX_Text(pDX, IDC_EDIT_MOVECAOTIME, m_nMoveCaoTime);
	DDX_Text(pDX, IDC_EDIT_MOVECAOCOUNT, m_nMoveCaoCount);
	DDX_Check(pDX, IDC_CHECK_QUESTCAO, m_bQuestCao);
	DDX_Text(pDX, IDC_EDIT_QUESTCAOTIME, m_nQuestCaoTime);
	DDX_Check(pDX, IDC_CHECK_GETEQUIP, m_bGetEquip);
	DDX_Check(pDX, IDC_CHECK_GETALL, m_bGetAll);
	DDX_Check(pDX, IDC_CHECK_NETWORKEXIT, m_bNetworkExit);
	DDX_Text(pDX, IDC_EDIT_NETWORKEXIT, m_nNetworkExit);
	DDX_Check(pDX, IDC_CHECK_COLLECTITEM, m_bCollectItem);
	DDX_Check(pDX, IDC_CHECK_COLLECTGRADE1, m_bCollectGrade[0]);
	DDX_Check(pDX, IDC_CHECK_COLLECTGRADE2, m_bCollectGrade[1]);
	DDX_Check(pDX, IDC_CHECK_COLLECTGRADE3, m_bCollectGrade[2]);
	DDX_Check(pDX, IDC_CHECK_COLLECTGRADE4, m_bCollectGrade[3]);
	DDX_Check(pDX, IDC_CHECK_COLLECTENCHANT, m_bCollectEnchant);
	DDX_Text(pDX, IDC_EDIT_COLLECTENCHANT, m_nCollectEnchant);
	DDX_Check(pDX, IDC_CHECK_DISSOLVEITEM, m_bDissolveItem);
	DDX_Check(pDX, IDC_CHECK_DISSOLVEGRADE1, m_bDissolveGrade[0]);
	DDX_Check(pDX, IDC_CHECK_DISSOLVEGRADE2, m_bDissolveGrade[1]);
	DDX_Check(pDX, IDC_CHECK_DISSOLVEGRADE3, m_bDissolveGrade[2]);
	DDX_Check(pDX, IDC_CHECK_DISSOLVEGRADE4, m_bDissolveGrade[3]);
	DDX_Check(pDX, IDC_CHECK_DISSOLVEENCHANT, m_bDissolveEnchant);
	DDX_Check(pDX, IDC_CHECK_DISSOLVESEGONG, m_bDissolveSegong);
	DDX_Check(pDX, IDC_CHECK_DISSOLVEBELONG, m_bDissolveBelong);
	DDX_Check(pDX, IDC_CHECK_DISSOLVENOTBELONG, m_bDissolveNotBelong);
	DDX_Check(pDX, IDC_CHECK_ENCHANTSCROLL1, m_bEnchantScroll[0]);
	DDX_Check(pDX, IDC_CHECK_ENCHANTSCROLL2, m_bEnchantScroll[1]);
	DDX_Check(pDX, IDC_CHECK_ENCHANTSCROLL3, m_bEnchantScroll[2]);
	DDX_Check(pDX, IDC_CHECK_TRADEDISSOLVE, m_bTradeDissolve);
	DDX_Text(pDX, IDC_EDIT_TRADEDISSOLVE, m_nTradeDissolve);
	DDX_Check(pDX, IDC_CHECK_RAID, m_bRaid);
	DDX_Check(pDX, IDC_CHECK_RAIDBOSS1, m_bRaidBoss[0]);
	DDX_Check(pDX, IDC_CHECK_RAIDBOSS2, m_bRaidBoss[1]);
	DDX_Check(pDX, IDC_CHECK_RAIDBOSS3, m_bRaidBoss[2]);
	DDX_Check(pDX, IDC_CHECK_RAIDBOSS4, m_bRaidBoss[3]);
	DDX_Check(pDX, IDC_CHECK_RAIDBOSS5, m_bRaidBoss[4]);
	DDX_Check(pDX, IDC_CHECK_CRAFT, m_bCraft);
	DDX_Check(pDX, IDC_CHECK_CRAFTWEAPON, m_bCraftWeapon);
	DDX_Check(pDX, IDC_CHECK_CRAFTARMOR, m_bCraftArmor);
	DDX_Check(pDX, IDC_CHECK_CRAFTACCE, m_bCraftAcce);
	DDX_Check(pDX, IDC_CHECK_AUTOCOMBINECOSTUME, m_bAutoCombineCostume);
	DDX_Check(pDX, IDC_CHECK_AUTOCOMBINEPET, m_bAutoCombinePet);
}


BEGIN_MESSAGE_MAP(CScheduleOther, CDialog)
	ON_BN_CLICKED(IDC_CHECK_REQQUEST, &CScheduleOther::OnBnClickedCheckReqquest)
	ON_BN_CLICKED(IDC_CHECK_GUILDJOIN, &CScheduleOther::OnBnClickedCheckGuildjoin)
	ON_BN_CLICKED(IDC_CHECK_GUILDDONATE, &CScheduleOther::OnBnClickedCheckGuilddonate)
	ON_BN_CLICKED(IDC_CHECK_MOVECAO, &CScheduleOther::OnBnClickedCheckMovecao)
	ON_BN_CLICKED(IDC_CHECK_QUESTCAO, &CScheduleOther::OnBnClickedCheckQuestcao)
	ON_BN_CLICKED(IDC_CHECK_NETWORKEXIT, &CScheduleOther::OnBnClickedCheckNetworkexit)
	ON_BN_CLICKED(IDC_CHECK_COLLECTITEM, &CScheduleOther::OnBnClickedCheckCollectitem)
	ON_BN_CLICKED(IDC_CHECK_COLLECTENCHANT, &CScheduleOther::OnBnClickedCheckCollectenchant)
	ON_BN_CLICKED(IDC_CHECK_DISSOLVEITEM, &CScheduleOther::OnBnClickedCheckDissolveitem)
	ON_BN_CLICKED(IDC_CHECK_TRADEDISSOLVE, &CScheduleOther::OnBnClickedCheckTradedissolve)
	ON_BN_CLICKED(IDC_CHECK_CRAFT, &CScheduleOther::OnBnClickedCheckCraft)
	ON_BN_CLICKED(IDC_CHECK_RAID, &CScheduleOther::OnBnClickedCheckRaid)
END_MESSAGE_MAP()


// CScheduleOther message handlers

BOOL CScheduleOther::OnInitDialog()
{
	CDialog::OnInitDialog();

	SetControlText();

	UpdateData(FALSE);

	OnBnClickedCheckReqquest();
	OnBnClickedCheckGuildjoin();
	OnBnClickedCheckMovecao();
	OnBnClickedCheckQuestcao();
	OnBnClickedCheckNetworkexit();
	OnBnClickedCheckCollectitem();
	OnBnClickedCheckDissolveitem();
	OnBnClickedCheckTradedissolve();
	OnBnClickedCheckCraft();
	OnBnClickedCheckRaid();

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
	CString sLabel;

	if (g_wLanguageID != 0x412)
	{
		GetDlgItem(IDC_CHECK_REQQUEST)->SetWindowTextW(L"每日任务");
		GetDlgItem(IDC_CHECK_REQQUESTCOIN)->SetWindowTextW(L"荣誉币");
		GetDlgItem(IDC_CHECK_AUTOEQUIP)->SetWindowTextW(L"自动穿装备");
		GetDlgItem(IDC_CHECK_EQUIPENCHANT)->SetWindowTextW(L"强化穿装备");
		GetDlgItem(IDC_CHECK_RECOVERFREE)->SetWindowTextW(L"经验回复(免费)");
		GetDlgItem(IDC_CHECK_RECOVERGOLD)->SetWindowTextW(L"经验回复(金币)");
		GetDlgItem(IDC_CHECK_EVENT)->SetWindowTextW(L"收到活动");
		GetDlgItem(IDC_CHECK_ACHIEVEMENT)->SetWindowTextW(L"业绩补偿");
		GetDlgItem(IDC_CHECK_MAIL)->SetWindowTextW(L"邮件");
		GetDlgItem(IDC_CHECK_GUILDJOIN)->SetWindowTextW(L"公会加入");
		GetDlgItem(IDC_CHECK_GUILDATTENDANCE)->SetWindowTextW(L"公会出席");
		GetDlgItem(IDC_CHECK_GUILDDONATE)->SetWindowTextW(L"金币");
		GetDlgItem(IDC_STATIC1)->SetWindowTextW(L"以上时, 公会捐赠");
		GetDlgItem(IDC_CHECK_GETEQUIP)->SetWindowTextW(L"仓储装备, 取出装备");
		GetDlgItem(IDC_STATIC2)->SetWindowTextW(L"分以内");
		GetDlgItem(IDC_STATIC3)->SetWindowTextW(L"次移动错回城");
		GetDlgItem(IDC_STATIC4)->SetWindowTextW(L"分以上任务不行重新连接");
		GetDlgItem(IDC_CHECK_GETALL)->SetWindowTextW(L"从仓库里全部拿出来");
		GetDlgItem(IDC_STATIC7)->SetWindowTextW(L"秒以上网路不稳定时重新上号");

		GetDlgItem(IDC_CHECK_COLLECTITEM)->SetWindowTextW(L"图鉴物品");
		GetDlgItem(IDC_CHECK_COLLECTGRADE1)->SetWindowTextW(L"一般");
		GetDlgItem(IDC_CHECK_COLLECTGRADE2)->SetWindowTextW(L"高级");
		GetDlgItem(IDC_CHECK_COLLECTGRADE3)->SetWindowTextW(L"稀有");
		GetDlgItem(IDC_CHECK_COLLECTGRADE4)->SetWindowTextW(L"英雄");
		GetDlgItem(IDC_CHECK_COLLECTENCHANT)->SetWindowTextW(L"安全强化 +");

		GetDlgItem(IDC_CHECK_DISSOLVEITEM)->SetWindowTextW(L"分解");
		GetDlgItem(IDC_CHECK_DISSOLVEGRADE1)->SetWindowTextW(L"一般");
		GetDlgItem(IDC_CHECK_DISSOLVEGRADE2)->SetWindowTextW(L"高级");
		GetDlgItem(IDC_CHECK_DISSOLVEGRADE3)->SetWindowTextW(L"稀有");
		GetDlgItem(IDC_CHECK_DISSOLVEGRADE4)->SetWindowTextW(L"英雄");
		GetDlgItem(IDC_CHECK_DISSOLVEENCHANT)->SetWindowTextW(L"强化");
		GetDlgItem(IDC_CHECK_DISSOLVESEGONG)->SetWindowTextW(L"手工");
		GetDlgItem(IDC_CHECK_DISSOLVEBELONG)->SetWindowTextW(L"绑定");
		GetDlgItem(IDC_CHECK_DISSOLVENOTBELONG)->SetWindowTextW(L"不绑定");

		GetDlgItem(IDC_STATIC5)->SetWindowTextW(L"使用不绑定卷");
		GetDlgItem(IDC_CHECK_ENCHANTSCROLL1)->SetWindowTextW(L"武器");
		GetDlgItem(IDC_CHECK_ENCHANTSCROLL2)->SetWindowTextW(L"防具");
		GetDlgItem(IDC_CHECK_ENCHANTSCROLL3)->SetWindowTextW(L"饰品");

		GetDlgItem(IDC_CHECK_TRADEDISSOLVE)->SetWindowTextW(L"拍卖价格");
		GetDlgItem(IDC_STATIC6)->SetWindowTextW(L"以下装备分解");

		GetDlgItem(IDC_CHECK_RAID)->SetWindowTextW(L"团战");

		GetDlgItem(IDC_CHECK_CRAFT)->SetWindowTextW(L"制作");
		GetDlgItem(IDC_CHECK_CRAFTWEAPON)->SetWindowTextW(L"武器");
		GetDlgItem(IDC_CHECK_CRAFTARMOR)->SetWindowTextW(L"防具");
		GetDlgItem(IDC_CHECK_CRAFTACCE)->SetWindowTextW(L"饰品");

		GetDlgItem(IDC_CHECK_AUTOCOMBINECOSTUME)->SetWindowTextW(L"自动合成时装");
		GetDlgItem(IDC_CHECK_AUTOCOMBINEPET)->SetWindowTextW(L"自动合成宠物");
	}

	if (g_bTaiwanLang)
	{
		GetDlgItem(IDC_CHECK_RAIDBOSS1)->SetWindowTextW(g_pRaidBossName[0].szTWName);
		GetDlgItem(IDC_CHECK_RAIDBOSS2)->SetWindowTextW(g_pRaidBossName[1].szTWName);
		GetDlgItem(IDC_CHECK_RAIDBOSS3)->SetWindowTextW(g_pRaidBossName[2].szTWName);
		GetDlgItem(IDC_CHECK_RAIDBOSS4)->SetWindowTextW(g_pRaidBossName[3].szTWName);
		GetDlgItem(IDC_CHECK_RAIDBOSS5)->SetWindowTextW(g_pRaidBossName[4].szTWName);
	}
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

	m_bReqQuest = m_OtherSetting.bReqQuest;
	m_bReqQuestGrade[0] = m_OtherSetting.bReqQuestGrade[0];
	m_bReqQuestGrade[1] = m_OtherSetting.bReqQuestGrade[1];
	m_bReqQuestGrade[2] = m_OtherSetting.bReqQuestGrade[2];
	m_bReqQuestGrade[3] = m_OtherSetting.bReqQuestGrade[3];
	m_bReqQuestCoin = m_OtherSetting.bReqQuestCoin;

	m_bAutoEquip = m_OtherSetting.bAutoEquip;
	m_bEquipEnchant = m_OtherSetting.bEquipEnchant;

	m_bRecoverFree = m_OtherSetting.bRecoverFree;
	m_bRecoverGold = m_OtherSetting.bRecoverGold;

	m_bEvent = m_OtherSetting.bEvent;
	m_bAchievement = m_OtherSetting.bAchievement;
	m_bMail = m_OtherSetting.bMail;

	m_bGuildJoin = m_OtherSetting.bGuildJoin;
	m_bGuildAttendance = m_OtherSetting.bGuildAttendance;
	m_bGuildDonate = m_OtherSetting.bGuildDonate;
	m_nGuildDonateGold = m_OtherSetting.nGuildDonateGold;

	m_bMoveCao = m_OtherSetting.bMoveCao;
	m_nMoveCaoTime = m_OtherSetting.nMoveCaoTime;
	m_nMoveCaoCount = m_OtherSetting.nMoveCaoCount;

	m_bQuestCao = m_OtherSetting.bQuestCao;
	m_nQuestCaoTime = m_OtherSetting.nQuestCaoTime;

	m_bGetEquip = m_OtherSetting.bGetEquip;
	m_bGetAll = m_OtherSetting.bGetAll;
	m_bNetworkExit = m_OtherSetting.bNetworkExit;
	m_nNetworkExit = m_OtherSetting.nNetworkExit;

	m_bCollectItem = m_OtherSetting.bCollectItem;
	m_bCollectGrade[0] = m_OtherSetting.bCollectGrade[0];
	m_bCollectGrade[1] = m_OtherSetting.bCollectGrade[1];
	m_bCollectGrade[2] = m_OtherSetting.bCollectGrade[2];
	m_bCollectGrade[3] = m_OtherSetting.bCollectGrade[3];
	m_bCollectEnchant = m_OtherSetting.bCollectEnchant;
	m_nCollectEnchant = m_OtherSetting.nCollectEnchant;

	m_bDissolveItem = m_OtherSetting.bDissolveItem;
	m_bDissolveGrade[0] = m_OtherSetting.bDissolveGrade[0];
	m_bDissolveGrade[1] = m_OtherSetting.bDissolveGrade[1];
	m_bDissolveGrade[2] = m_OtherSetting.bDissolveGrade[2];
	m_bDissolveGrade[3] = m_OtherSetting.bDissolveGrade[3];
	m_bDissolveEnchant = m_OtherSetting.bDissolveEnchant;
	m_bDissolveSegong = m_OtherSetting.bDissolveSegong;
	m_bDissolveBelong = m_OtherSetting.bDissolveBelong;
	m_bDissolveNotBelong = m_OtherSetting.bDissolveNotBelong;

	m_bEnchantScroll[0] = m_OtherSetting.bEnchantScroll[0];
	m_bEnchantScroll[1] = m_OtherSetting.bEnchantScroll[1];
	m_bEnchantScroll[2] = m_OtherSetting.bEnchantScroll[2];

	m_bTradeDissolve = m_OtherSetting.bTradeDissolve;
	m_nTradeDissolve = m_OtherSetting.nTradeDissolve;

	m_bRaid = m_OtherSetting.bRaid;
	m_bRaidBoss[0] = m_OtherSetting.bRaidBoss[0];
	m_bRaidBoss[1] = m_OtherSetting.bRaidBoss[1];
	m_bRaidBoss[2] = m_OtherSetting.bRaidBoss[2];
	m_bRaidBoss[3] = m_OtherSetting.bRaidBoss[3];
	m_bRaidBoss[4] = m_OtherSetting.bRaidBoss[4];

	m_bCraft = m_OtherSetting.bCraft;
	m_bCraftWeapon = m_OtherSetting.bCraftWeapon;
	m_bCraftArmor = m_OtherSetting.bCraftArmor;
	m_bCraftAcce = m_OtherSetting.bCraftAcce;

	m_bAutoCombineCostume = m_OtherSetting.bAutoCombineCostume;
	m_bAutoCombinePet = m_OtherSetting.bAutoCombinePet;


	UpdateData(FALSE);

	OnBnClickedCheckReqquest();
	OnBnClickedCheckGuildjoin();
	OnBnClickedCheckMovecao();
	OnBnClickedCheckQuestcao();
	OnBnClickedCheckNetworkexit();
	OnBnClickedCheckCollectitem();
	OnBnClickedCheckDissolveitem();
	OnBnClickedCheckTradedissolve();
	OnBnClickedCheckCraft();
	OnBnClickedCheckRaid();
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

	m_OtherSetting.bReqQuest = m_bReqQuest;
	m_OtherSetting.bReqQuestGrade[0] = m_bReqQuestGrade[0];
	m_OtherSetting.bReqQuestGrade[1] = m_bReqQuestGrade[1];
	m_OtherSetting.bReqQuestGrade[2] = m_bReqQuestGrade[2];
	m_OtherSetting.bReqQuestGrade[3] = m_bReqQuestGrade[3];
	m_OtherSetting.bReqQuestCoin = m_bReqQuestCoin;

	m_OtherSetting.bAutoEquip = m_bAutoEquip;
	m_OtherSetting.bEquipEnchant = m_bEquipEnchant;

	m_OtherSetting.bRecoverFree = m_bRecoverFree;
	m_OtherSetting.bRecoverGold = m_bRecoverGold;

	m_OtherSetting.bEvent = m_bEvent;
	m_OtherSetting.bAchievement = m_bAchievement;
	m_OtherSetting.bMail = m_bMail;

	m_OtherSetting.bGuildJoin = m_bGuildJoin;
	m_OtherSetting.bGuildAttendance = m_bGuildAttendance;
	m_OtherSetting.bGuildDonate = m_bGuildDonate;
	m_OtherSetting.nGuildDonateGold = m_nGuildDonateGold;

	m_OtherSetting.bMoveCao = m_bMoveCao;
	m_OtherSetting.nMoveCaoTime = m_nMoveCaoTime;
	m_OtherSetting.nMoveCaoCount = m_nMoveCaoCount;

	m_OtherSetting.bQuestCao = m_bQuestCao;
	m_OtherSetting.nQuestCaoTime = m_nQuestCaoTime;

	m_OtherSetting.bGetEquip = m_bGetEquip;
	m_OtherSetting.bGetAll = m_bGetAll;
	m_OtherSetting.bNetworkExit = m_bNetworkExit;
	m_OtherSetting.nNetworkExit = m_nNetworkExit;

	m_OtherSetting.bCollectItem = m_bCollectItem;
	m_OtherSetting.bCollectGrade[0] = m_bCollectGrade[0];
	m_OtherSetting.bCollectGrade[1] = m_bCollectGrade[1];
	m_OtherSetting.bCollectGrade[2] = m_bCollectGrade[2];
	m_OtherSetting.bCollectGrade[3] = m_bCollectGrade[3];
	m_OtherSetting.bCollectEnchant = m_bCollectEnchant;
	m_OtherSetting.nCollectEnchant = m_nCollectEnchant;

	m_OtherSetting.bDissolveItem = m_bDissolveItem;
	m_OtherSetting.bDissolveGrade[0] = m_bDissolveGrade[0];
	m_OtherSetting.bDissolveGrade[1] = m_bDissolveGrade[1];
	m_OtherSetting.bDissolveGrade[2] = m_bDissolveGrade[2];
	m_OtherSetting.bDissolveGrade[3] = m_bDissolveGrade[3];
	m_OtherSetting.bDissolveEnchant = m_bDissolveEnchant;
	m_OtherSetting.bDissolveSegong = m_bDissolveSegong;
	m_OtherSetting.bDissolveBelong = m_bDissolveBelong;
	m_OtherSetting.bDissolveNotBelong = m_bDissolveNotBelong;

	m_OtherSetting.bEnchantScroll[0] = m_bEnchantScroll[0];
	m_OtherSetting.bEnchantScroll[1] = m_bEnchantScroll[1];
	m_OtherSetting.bEnchantScroll[2] = m_bEnchantScroll[2];

	m_OtherSetting.bTradeDissolve = m_bTradeDissolve;
	m_OtherSetting.nTradeDissolve = m_nTradeDissolve;

	m_OtherSetting.bRaid = m_bRaid;

	m_OtherSetting.bRaidBoss[0] = m_bRaidBoss[0];
	m_OtherSetting.bRaidBoss[1] = m_bRaidBoss[1];
	m_OtherSetting.bRaidBoss[2] = m_bRaidBoss[2];
	m_OtherSetting.bRaidBoss[3] = m_bRaidBoss[3];
	m_OtherSetting.bRaidBoss[4] = m_bRaidBoss[4];

	m_OtherSetting.bCraft = m_bCraft;
	m_OtherSetting.bCraftWeapon = m_bCraftWeapon;
	m_OtherSetting.bCraftArmor = m_bCraftArmor;
	m_OtherSetting.bCraftAcce = m_bCraftAcce;

	m_OtherSetting.bAutoCombineCostume = m_bAutoCombineCostume;
	m_OtherSetting.bAutoCombinePet = m_bAutoCombinePet;

	fwrite(&m_OtherSetting, sizeof(OTHER_SETTING), 1, fp);
	fclose(fp);
}



void CScheduleOther::OnBnClickedCheckReqquest()
{
	UpdateData(TRUE);

	GetDlgItem(IDC_CHECK_REQQUESTGRADE1)->EnableWindow(m_bReqQuest);
	GetDlgItem(IDC_CHECK_REQQUESTGRADE2)->EnableWindow(m_bReqQuest);
	GetDlgItem(IDC_CHECK_REQQUESTGRADE3)->EnableWindow(m_bReqQuest);
	GetDlgItem(IDC_CHECK_REQQUESTGRADE4)->EnableWindow(m_bReqQuest);
	GetDlgItem(IDC_CHECK_REQQUESTCOIN)->EnableWindow(m_bReqQuest);
}


void CScheduleOther::OnBnClickedCheckGuildjoin()
{
	UpdateData(TRUE);

	GetDlgItem(IDC_CHECK_GUILDATTENDANCE)->EnableWindow(m_bGuildJoin);
	GetDlgItem(IDC_CHECK_GUILDDONATE)->EnableWindow(m_bGuildJoin);

	if (m_bGuildJoin)
		OnBnClickedCheckGuilddonate();
	else
		GetDlgItem(IDC_EDIT_GUILDDONATEGOLD)->EnableWindow(FALSE);
}


void CScheduleOther::OnBnClickedCheckGuilddonate()
{
	UpdateData(TRUE);

	GetDlgItem(IDC_EDIT_GUILDDONATEGOLD)->EnableWindow(m_bGuildDonate);
}


void CScheduleOther::OnBnClickedCheckMovecao()
{
	UpdateData(TRUE);

	GetDlgItem(IDC_EDIT_MOVECAOTIME)->EnableWindow(m_bMoveCao);
	GetDlgItem(IDC_EDIT_MOVECAOCOUNT)->EnableWindow(m_bMoveCao);
}


void CScheduleOther::OnBnClickedCheckQuestcao()
{
	UpdateData(TRUE);

	GetDlgItem(IDC_EDIT_QUESTCAOTIME)->EnableWindow(m_bQuestCao);
}


void CScheduleOther::OnBnClickedCheckNetworkexit()
{
	UpdateData(TRUE);

	GetDlgItem(IDC_EDIT_NETWORKEXIT)->EnableWindow(m_bNetworkExit);
}


void CScheduleOther::OnBnClickedCheckCollectitem()
{
	UpdateData(TRUE);

	GetDlgItem(IDC_CHECK_COLLECTGRADE1)->EnableWindow(m_bCollectItem);
	GetDlgItem(IDC_CHECK_COLLECTGRADE2)->EnableWindow(m_bCollectItem);
	GetDlgItem(IDC_CHECK_COLLECTGRADE3)->EnableWindow(m_bCollectItem);
	GetDlgItem(IDC_CHECK_COLLECTGRADE4)->EnableWindow(m_bCollectItem);

	GetDlgItem(IDC_CHECK_COLLECTENCHANT)->EnableWindow(m_bCollectItem);

	if (m_bCollectItem)
		OnBnClickedCheckCollectenchant();
	else
		GetDlgItem(IDC_EDIT_COLLECTENCHANT)->EnableWindow(FALSE);
}


void CScheduleOther::OnBnClickedCheckCollectenchant()
{
	UpdateData(TRUE);

	GetDlgItem(IDC_EDIT_COLLECTENCHANT)->EnableWindow(m_bCollectEnchant);
}


void CScheduleOther::OnBnClickedCheckDissolveitem()
{
	UpdateData(TRUE);

	GetDlgItem(IDC_CHECK_DISSOLVEGRADE1)->EnableWindow(m_bDissolveItem);
	GetDlgItem(IDC_CHECK_DISSOLVEGRADE2)->EnableWindow(m_bDissolveItem);
	GetDlgItem(IDC_CHECK_DISSOLVEGRADE3)->EnableWindow(m_bDissolveItem);
	GetDlgItem(IDC_CHECK_DISSOLVEGRADE4)->EnableWindow(m_bDissolveItem);

	GetDlgItem(IDC_CHECK_DISSOLVEENCHANT)->EnableWindow(m_bDissolveItem);
	GetDlgItem(IDC_CHECK_DISSOLVESEGONG)->EnableWindow(m_bDissolveItem);
	GetDlgItem(IDC_CHECK_DISSOLVEBELONG)->EnableWindow(m_bDissolveItem);
	GetDlgItem(IDC_CHECK_DISSOLVENOTBELONG)->EnableWindow(m_bDissolveItem);
}


void CScheduleOther::OnBnClickedCheckTradedissolve()
{
	UpdateData(TRUE);

	GetDlgItem(IDC_EDIT_TRADEDISSOLVE)->EnableWindow(m_bTradeDissolve);
}


void CScheduleOther::OnBnClickedCheckCraft()
{
	UpdateData(TRUE);

	GetDlgItem(IDC_CHECK_CRAFTWEAPON)->EnableWindow(m_bCraft);
	GetDlgItem(IDC_CHECK_CRAFTARMOR)->EnableWindow(m_bCraft);
	GetDlgItem(IDC_CHECK_CRAFTACCE)->EnableWindow(m_bCraft);
}


void CScheduleOther::OnBnClickedCheckRaid()
{
	UpdateData(TRUE);

	GetDlgItem(IDC_CHECK_RAIDBOSS1)->EnableWindow(m_bRaid);
	GetDlgItem(IDC_CHECK_RAIDBOSS2)->EnableWindow(m_bRaid);
	GetDlgItem(IDC_CHECK_RAIDBOSS3)->EnableWindow(m_bRaid);
	GetDlgItem(IDC_CHECK_RAIDBOSS4)->EnableWindow(m_bRaid);
	GetDlgItem(IDC_CHECK_RAIDBOSS5)->EnableWindow(m_bRaid);
}
