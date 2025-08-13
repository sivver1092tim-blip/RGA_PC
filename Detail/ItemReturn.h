#pragma once
#include "afxwin.h"


// CItemReturn dialog

class CItemReturn : public CDialog
{
	DECLARE_DYNAMIC(CItemReturn)

public:
	CItemReturn(CWnd* pParent = NULL);   // standard constructor
	virtual ~CItemReturn();

// Dialog Data
	enum { IDD = IDD_ITEM_RETURN };

protected:
	
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()

public:

	CComboBox m_cbItemList;
	int m_nCount;
	CString m_szItemName;

	void SetControlText();

	virtual BOOL OnInitDialog();
	afx_msg void OnVerify();
};
