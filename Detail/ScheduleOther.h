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

	DECLARE_MESSAGE_MAP()

public:

	BOOL m_bVillageRequest;
	BOOL m_bValhallaFight;
	BOOL m_bRecoverFree;
	BOOL m_bRecoverGold;
	BOOL m_bAchieveReward;
	BOOL m_bAutoEquip;
	BOOL m_bEventReward;
	BOOL m_bGuildCheck;
	BOOL m_bGuildDonate;
	BOOL m_bCharacMail;
	BOOL m_bAccountMail;
	BOOL m_bStoreEquips;
	BOOL m_bGetStoreEquips;
	BOOL m_bGuildJoin;
	BOOL m_bUseVillageQuest;
	BOOL m_bMoveChaoEnable;
	BOOL m_bQuestChaoEnable;
	BOOL m_bCollectItem;
	BOOL m_bCollectGrade[4];
	BOOL m_bCollectTab[4];
	BOOL m_bCollectEnchant;
	BOOL m_bCollectFilter;
	BOOL m_bCollectType[6];
	BOOL m_bDissolveItem;
	BOOL m_bDissolveGrade[4];
	BOOL m_bDissolveEnchant;
	BOOL m_bDissolveManufacture;
	BOOL m_bDissolveBelong;
	BOOL m_bDissolveNotBelong;
	BOOL m_bWorldBoss;
	BOOL m_bTreasureBox;
	BOOL m_bPartyDungeon;
	BOOL m_bDungeonType;
	BOOL m_bDungeonDiff;
	BOOL m_bEnableSubQuest;
	BOOL m_bSkillInteraction;
	BOOL m_bMimirPotion;
	BOOL m_bUseTicket;
	BOOL m_bMemberCount;
	BOOL m_bAverageLV;
	BOOL m_bBusLevel;
	BOOL m_bEnchantStone[3];
	BOOL m_bBuyBigPotion;
	BOOL m_bWeaponTreasure;
	BOOL m_bTradeDissolve;
	BOOL m_bCombineAvatar;
	BOOL m_bCombineRide;
	BOOL m_bCombineWeapon;
	BOOL m_bFrameEnable;

	int m_nGuildDonate;
	int m_nVillageRegion;
	int m_nMoveChaoTime;
	int m_nMoveChaoCount;
	int m_nQuestChaoTime;
	int m_nCollectMin;
	int m_nCollectMax;
	int m_nDungeonType;
	int m_nDungeonDiff;
	int m_nDungeonLV;
	int m_nMemberCount;
	int m_nAverageLV;
	int m_nBusLevel;
	int m_nTradeDissolve;
	int m_nFrameValue;

	CComboBox m_cbVillageRegion;
	CComboBox m_cbPartyDungeon;
	CComboBox m_cbDungeonDiff;

	void SetControlText();
	void LoadSetting(WCHAR *szPath);
	void SaveSetting(WCHAR *szPath);

	virtual BOOL OnInitDialog();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	
	afx_msg void OnGuildDonate();
	afx_msg void OnCheckVillage();
	afx_msg void OnEnableGuild();	
	afx_msg void OnEnableMoveChao();
	afx_msg void OnEnableQuestChao();
	afx_msg void OnCollectItem();
	afx_msg void OnCollectEnchant();
	afx_msg void OnCollectFilter();
	afx_msg void OnDissolveItem();
	afx_msg void OnEnablePartyDungeon();
	afx_msg void OnEnableDungeonType();
	afx_msg void OnEnableDungeonDiff();
	afx_msg void OnVerifyMemberCount();
	afx_msg void OnVerifyAverageLV();
	afx_msg void OnVerifyBusLV();
	afx_msg void OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
	afx_msg void OnEnableTradeDissolve();
	afx_msg void OnEnableFrame();
	BOOL m_bEventBuff;
};
