#pragma once
#include "afxwin.h"


// CUserDlg dialog

class CUserDlg : public CDialog
{
	DECLARE_DYNAMIC(CUserDlg)

public:
	CUserDlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~CUserDlg();

// Dialog Data
	enum { IDD = IDD_USER_DIALOG };

protected:

	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()

public:

	CString m_szAutoID;
	CString m_szGameID;
	CString m_szGamePW;
	int		m_nGameServer;
	CComboBox m_cbGameServer;

	void SetControlText();
	virtual BOOL OnInitDialog();
	afx_msg void OnVerify();
};
