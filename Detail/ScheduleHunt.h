#pragma once
#include "afxwin.h"
#include "afxcmn.h"


// CScheduleHunt dialog

class CScheduleHunt : public CDialog
{
	DECLARE_DYNAMIC(CScheduleHunt)

public:
	CScheduleHunt(CWnd* pParent = NULL);   // standard constructor
	virtual ~CScheduleHunt();

// Dialog Data
	enum { IDD = IDD_SCHEDULE_HUNT };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual BOOL OnInitDialog();
	virtual BOOL PreTranslateMessage(MSG* pMsg);

	DECLARE_MESSAGE_MAP()

public:
	int m_nMoveMode;

	BOOL m_bDoQuest;
	BOOL m_bQuestTarget;
	int m_nQuestTarget;

	CComboBox m_cbDungeon;
	int m_nDungeon;

	BOOL m_bDungeonPos;
	float m_fDungeonPosX;
	float m_fDungeonPosY;
	float m_fDungeonPosZ;

	CComboBox m_cbField;
	int m_nField;

	BOOL m_bFieldPos;
	float m_fFieldPosX;
	float m_fFieldPosY;
	float m_fFieldPosZ;

	BOOL m_bLimitLv;
	int m_nLimitLvMin;
	int m_nLimitLvMax;

	BOOL m_bLimitPower;
	int m_nLimitPowerMin;
	int m_nLimitPowerMax;

	BOOL m_bHpReturn;
	int m_nHpReturnValue;
	int m_nHpReturnTime;

	BOOL m_bWeightReturn;
	int m_nWeightReturnValue;
	int m_nWeightReturnTime;

	CListCtrl m_lstItemReturn;

	int m_nHuntRange;

	BOOL m_bMobTel;
	int m_nMobTelTime;

	BOOL m_bChannel;
	int m_nChannelMode;
	int m_nChannelFixed;
	int m_nChannelFlexibleTime;

	BOOL m_bMannerMode;

	BOOL m_bGather;
	BOOL m_bGatherStone;
	BOOL m_bGatherIron;
	BOOL m_bGatherWood;
	BOOL m_bGatherGrass;

	BOOL m_bLimitDead;
	int m_nLimitDeadTime;
	int m_nLimitDeadCount;

	BOOL m_bLimitRecon;
	int m_nLimitReconTime;
	int m_nLimitReconCount;


	void SetControlText();
	void LoadSetting(WCHAR* szPath);
	void SaveSetting(WCHAR* szPath);


	afx_msg void OnChangeMoveMode();
	afx_msg void OnBnClickedCheckDoquest();
	afx_msg void OnBnClickedCheckQuesttarget();
	afx_msg void OnBnClickedCheckDungeonpos();
	afx_msg void OnSetDungeonPos();
	afx_msg void OnBnClickedCheckFieldpos();
	afx_msg void OnSetFieldPos();
	afx_msg void OnBnClickedCheckLimitlv();
	afx_msg void OnBnClickedCheckLimitpower();
	afx_msg void OnBnClickedCheckHpreturn();
	afx_msg void OnBnClickedCheckWeightreturn();
	afx_msg void OnAddReturnItem();
	afx_msg void OnDelReturnItem();
	afx_msg void OnChangeReturnItem(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnBnClickedCheckMobtel();
	afx_msg void OnBnClickedCheckChannel();
	afx_msg void OnChangeChannelMode();
	afx_msg void OnBnClickedCheckGather();
	afx_msg void OnBnClickedCheckLimitdead();
	afx_msg void OnBnClickedCheckLimitrecon();
};
