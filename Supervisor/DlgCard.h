#pragma once
#include "resource.h"

// CDlgCard dialog

class CDlgCard : public CDialog
{
	DECLARE_DYNAMIC(CDlgCard)

public:
	CDlgCard(CWnd* pParent = NULL);   // standard constructor
	virtual ~CDlgCard();

// Dialog Data
	enum { IDD = IDD_CARD_DIALOG };

protected:
	
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()

public:

	int m_nCardType;
	int m_nCardCount;
	
	CString m_szCardPrefix;
	CString m_szCardAdmin;

	virtual BOOL OnInitDialog();
	afx_msg void OnVerify();
	CComboBox m_cbCardType;
};
