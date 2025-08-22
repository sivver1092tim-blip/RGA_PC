#pragma once
#include "afxwin.h"


// CItemBuy dialog

class CItemBuy : public CDialog
{
	DECLARE_DYNAMIC(CItemBuy)

public:
	CItemBuy(CWnd* pParent = NULL);   // standard constructor
	virtual ~CItemBuy();

	// Dialog Data
	enum { IDD = IDD_ITEM_BUY };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual BOOL OnInitDialog();

	DECLARE_MESSAGE_MAP()

public:
	CString m_szName;

	CComboBox m_cbItemList;

	BOOL m_bPotion;
	int m_nCurCount;
	int m_nTarCount;


	void SetControlText();

	afx_msg void OnVerify();
};
