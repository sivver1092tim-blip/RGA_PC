#pragma once


// CScheduleOther dialog

class CScheduleOther : public CDialog
{
	DECLARE_DYNAMIC(CScheduleOther)

public:
	CScheduleOther(CWnd* pParent = NULL);   // standard constructor
	virtual ~CScheduleOther();

// Dialog Data
	enum { IDD = IDD_SCHEDULE_OTHER };

protected:
	
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual BOOL OnInitDialog();
	virtual BOOL PreTranslateMessage(MSG* pMsg);

	DECLARE_MESSAGE_MAP()

public:

	BOOL m_bReqQuest;
	BOOL m_bReqQuestGrade[4];
	BOOL m_bReqQuestCoin;

	BOOL m_bAutoEquip;
	BOOL m_bEquipEnchant;

	BOOL m_bRecoverFree;
	BOOL m_bRecoverGold;

	BOOL m_bEvent;
	BOOL m_bAchievement;
	BOOL m_bMail;

	BOOL m_bGuildJoin;
	BOOL m_bGuildAttendance;
	BOOL m_bGuildDonate;
	int m_nGuildDonateGold;

	BOOL m_bMoveCao;
	int m_nMoveCaoTime;
	int m_nMoveCaoCount;

	BOOL m_bQuestCao;
	int m_nQuestCaoTime;

	BOOL m_bGetEquip;
	BOOL m_bGetAll;
	BOOL m_bNetworkExit;
	int m_nNetworkExit;

	BOOL m_bCollectItem;
	BOOL m_bCollectGrade[4];
	BOOL m_bCollectEnchant;
	int m_nCollectEnchant;

	BOOL m_bDissolveItem;
	BOOL m_bDissolveGrade[4];
	BOOL m_bDissolveEnchant;
	BOOL m_bDissolveSegong;
	BOOL m_bDissolveBelong;
	BOOL m_bDissolveNotBelong;

	BOOL m_bEnchantScroll[3];

	BOOL m_bTradeDissolve;
	int m_nTradeDissolve;

	BOOL m_bRaid;
	BOOL m_bRaidBoss[5];

	BOOL m_bCraft;
	BOOL m_bCraftWeapon;
	BOOL m_bCraftArmor;
	BOOL m_bCraftAcce;

	BOOL m_bAutoCombineCostume;
	BOOL m_bAutoCombinePet;

	void SetControlText();
	void LoadSetting(WCHAR *szPath);
	void SaveSetting(WCHAR *szPath);
	
	afx_msg void OnBnClickedCheckReqquest();
	afx_msg void OnBnClickedCheckGuildjoin();
	afx_msg void OnBnClickedCheckGuilddonate();
	afx_msg void OnBnClickedCheckMovecao();
	afx_msg void OnBnClickedCheckQuestcao();
	afx_msg void OnBnClickedCheckNetworkexit();
	afx_msg void OnBnClickedCheckCollectitem();
	afx_msg void OnBnClickedCheckCollectenchant();
	afx_msg void OnBnClickedCheckDissolveitem();
	afx_msg void OnBnClickedCheckTradedissolve();
	afx_msg void OnBnClickedCheckCraft();
	afx_msg void OnBnClickedCheckRaid();
};
