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
	virtual BOOL OnInitDialog();
	virtual BOOL PreTranslateMessage(MSG* pMsg);

	DECLARE_MESSAGE_MAP()

public:

	int m_nSummonGold;
	BOOL m_bSummonCostume[3];
	BOOL m_bSummonPet[3];
	BOOL m_bSummonMonster[3];
	BOOL m_bSummonEvent;

	int m_nScrollGold;
	BOOL m_bScrollBuy[2];
	int m_nScrollBuy[2];
	BOOL m_bScrollElven;
	int m_nScrollElven;

	int m_nPotionGold;
	CListCtrl m_lstPotion;
	BOOL m_bBulk;

	CListCtrl m_lstExchange;

	BOOL m_bBuySkillGold;
	int m_nBuySkillGold;
	BOOL m_bBuyRareSkill;

	int m_nCristalGold;
	BOOL m_bCristalBox;
	int m_nCristalBox;
	BOOL m_bCristalPet1;
	BOOL m_bCristalPet2;

	int m_nOtherGold;
	BOOL m_bEquipBox;
	int m_nEquipBox;


	void SetControlText();
	void LoadSetting(WCHAR* szPath);
	void SaveSetting(WCHAR* szPath);


	afx_msg void OnBnClickedCheckScrollweapon();
	afx_msg void OnBnClickedCheckScrollarmor();
	afx_msg void OnBnClickedCheckScrollelven();
	afx_msg void OnBnClickedCheckCristalbox();
	afx_msg void OnBnClickedCheckEquipbox();
	afx_msg void OnBnClickedCheckBuyskillgold();
	afx_msg void OnAddPotionItem();
	afx_msg void OnDelPotionItem();
	afx_msg void OnChangePotionItem(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnAddExchangeItem();
	afx_msg void OnDelExchangeItem();
	afx_msg void OnChangeExchangeItem(NMHDR* pNMHDR, LRESULT* pResult);
};
