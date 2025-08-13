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

	DECLARE_MESSAGE_MAP()

public:

	BOOL m_bExpendable;
	int m_nCurCount;
	int m_nTarCount;

	CComboBox m_cbItemList;
	CString m_szName;

	void SetControlText();

	virtual BOOL OnInitDialog();
	
	afx_msg void OnVerify();
};
