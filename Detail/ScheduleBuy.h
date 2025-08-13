#pragma once
#include "afxcmn.h"


// CScheduleBuy dialog

class CScheduleBuy : public CDialog
{
	DECLARE_DYNAMIC(CScheduleBuy)

public:
	CScheduleBuy(CWnd* pParent = NULL);   // standard constructor
	virtual ~CScheduleBuy();

// Dialog Data
	enum { IDD = IDD_SCHEDULE_BUY };

protected:
	
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()

public:

	int m_nSummonGold;
	int m_nPaperGold;
	int m_nPaperCount[4];
	int m_nSkillGold;
	int m_nCashItemBuy[3];
	int m_nExpendGold;

	BOOL m_bSummonAvatar[3];
	BOOL m_bSummonRiding[3];
	BOOL m_bWeaponType[3];
	BOOL m_bSummonRune[2];
	BOOL m_bPaperBuy[4];
	BOOL m_bCashItemBuy[3];
	BOOL m_bMimirPotion[5];
	BOOL m_bBuyHighSkill;
	BOOL m_bSkillGold;
	BOOL m_bBlessingStone[2];

	CListCtrl m_lstPotion;
	CListCtrl m_lstExchange;

	void SetControlText();
	void LoadSetting(WCHAR *szPath);
	void SaveSetting(WCHAR *szPath);

	virtual BOOL OnInitDialog();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	
	afx_msg void OnEnablePaper1();
	afx_msg void OnEnablePaper2();
	afx_msg void OnEnablePaper3();
	afx_msg void OnEnablePaper4();
	afx_msg void OnSkillGold();
	afx_msg void OnAddPotionItem();
	afx_msg void OnDelPotionItem();
	afx_msg void OnChangePotionItem(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnAddExchangeItem();
	afx_msg void OnDelExchangeItem();
	afx_msg void OnChangeExchangeItem(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnEnableCashBuy1();
	afx_msg void OnEnableCashBuy2();
	afx_msg void OnEnableMimir1();
	afx_msg void OnEnableMimir2();
	afx_msg void OnEnableMimir3();
	afx_msg void OnEnableMimir4();
};
