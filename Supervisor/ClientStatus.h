#pragma once
#include "afxcmn.h"


// CClientStatus dialog

class CClientStatus : public CDialog
{
	DECLARE_DYNAMIC(CClientStatus)

public:
	CClientStatus(CWnd* pParent = NULL);   // standard constructor
	virtual ~CClientStatus();

// Dialog Data
	enum { IDD = IDD_CLIENT_STATUS_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnDisConnectUser();
	CListCtrl m_lstUsers;
	afx_msg void OnUpdateStatus();
	afx_msg void OnClose();
	virtual BOOL OnInitDialog();
	afx_msg void OnNMClickList1(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnServerRepairStart();
	afx_msg void OnServerRepairFinish();
	afx_msg void OnSearchID();
	void OnSortGameServer();
};
