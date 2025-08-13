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

	DECLARE_MESSAGE_MAP()

public:

	CString m_szPartyInvite;

	int m_nMoveMode;
	int m_nWorldList;
	int m_nFieldList;
	int m_nDungeonList;
	int m_nTargetRange;
	int m_nMonTeleport;
	int m_nHpReturnValue;
	int m_nHpReturnTime;
	int m_nWeightReturnValue;
	int m_nWeightReturnTime;
	int m_nPartyMode;
	int m_nDeadTime;
	int m_nDeadCount;
	int m_nReconnectTime;
	int m_nReconnectCount;
	int m_nQuestLevel;
	int m_nQuestWorld;
	int m_nDeadResume;

	CComboBox m_cbWorldList;
	CComboBox m_cbFieldList;
	CComboBox m_cbDungeonList;
	CComboBox m_cbPartyInvite;
	CComboBox m_cbQuestWorld;
	CComboBox m_cbPartyMove;

	CListCtrl m_lstItemReturn;
	CListCtrl m_lstPartyMember;
	
	BOOL m_bMonTeleport;
	BOOL m_bMannerMode;
	BOOL m_bGatherEnable;
	BOOL m_bGatherStone;
	BOOL m_bGatherWood;
	BOOL m_bGatherGrass;
	BOOL m_bHpReturnEnable;
	BOOL m_bWeightReturnEnable;
	BOOL m_bPartyEnable;
	BOOL m_bDeadStop;
	BOOL m_bReconnectStop;
	BOOL m_bDungeonPos;
	BOOL m_bMainQuest;
	BOOL m_bPartyMove;
	BOOL m_bPartyMember;
	BOOL m_bQuestLevel;
	BOOL m_bQuestWorld;
	BOOL m_bDeadResume;

	float	m_fHuntPosX;
	float	m_fHuntPosY;
	float	m_fHuntPosZ;

	float	m_fDungeonPosX;
	float	m_fDungeonPosY;
	float	m_fDungeonPosZ;

	void SetControlText();
	void LoadSetting(WCHAR *szPath);
	void SaveSetting(WCHAR *szPath);

	virtual BOOL OnInitDialog();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	
	afx_msg void OnChangeMoveMode();
	afx_msg void OnSetWorldPos();
	afx_msg void OnEnableMonTeleport();
	afx_msg void OnHpReturnEnable();
	afx_msg void OnWeightReturnEnable();
	afx_msg void OnAddItemReturn();
	afx_msg void OnDelItemReturn();
	afx_msg void OnGatherEnable();
	afx_msg void OnPartyEnable();
	afx_msg void OnChangeItemReturn(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnCheckDeadStop();
	afx_msg void OnCheckReconnect();
	afx_msg void OnChangeWorld();
	afx_msg void OnEnableDungeonPos();
	afx_msg void OnSetDungeonPos();
	afx_msg void OnChangePartyRole();
	afx_msg void OnAddParty();
	afx_msg void OnDelParty();
	afx_msg void OnChangeParty(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnRefreshPlayer();
	afx_msg void OnVerifyQuestLevel();
	afx_msg void OnVerifyQuestWorld();
	afx_msg void OnContinueQuest();
	afx_msg void OnPartyMove();
	afx_msg void OnDeadStopResume();
	afx_msg void OnChangeField();
	BOOL m_bEnablePickGrade;
	int m_nItemPickGrade;
	CComboBox m_cbItemPickGrade;
	afx_msg void OnEnablePickGrade();
};
