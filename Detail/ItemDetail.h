#pragma once
#include "afxwin.h"


// CItemDetail dialog

class CItemDetail : public CDialog
{
	DECLARE_DYNAMIC(CItemDetail)

public:
	CItemDetail(CWnd* pParent = NULL);   // standard constructor
	virtual ~CItemDetail();

// Dialog Data
	enum { IDD = IDD_ITEM_DETAIL };

protected:
	
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()

public:

	void SetControlText();

	virtual BOOL OnInitDialog();
	afx_msg void OnMarketSelect();
	CComboBox m_cbItemList;
	CString m_szName;
	int m_nItemMode;
	int m_nMarketCount;
	int m_nMarketMode;
	int m_nFixedPrice;
	int m_nMinimumIndex;
	int m_nMinmumPrice;
	afx_msg void OnMarketModeSelect();
	afx_msg void OnVerify();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	BOOL m_bItemEnchant;
	int m_nItemEnchant;
	afx_msg void OnVerifyEnchant();
};
