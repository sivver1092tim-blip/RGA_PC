#pragma once
#include "afxcmn.h"


// CUpdateDlg dialog

class CUpdateDlg : public CDialog
{
	DECLARE_DYNAMIC(CUpdateDlg)

public:
	CUpdateDlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~CUpdateDlg();

// Dialog Data
	enum { IDD = IDD_UPDATE_DIALOG };

protected:
	
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()

public:

	DWORD m_dwServerIP;
	DWORD m_dwServerPort;

	CProgressCtrl m_pUpdateBar;
	
	virtual BOOL OnInitDialog();

protected:

	virtual LRESULT WindowProc(UINT message, WPARAM wParam, LPARAM lParam);
};
