// SupervisorDlg.h : header file
//

#pragma once
#include "afxcmn.h"
#include "Client.h"

// CSupervisorDlg dialog
class CSupervisorDlg : public CDialog
{
// Construction
public:
	CSupervisorDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_SUPERVISOR_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

public:

	int			m_nRecvLen;
	int			m_nSendLen;
	BYTE*		m_pbRecvData;
	BYTE		m_pbSendData[PACKETSIZE];
	BYTE		m_pbKey[20];
	CClient		m_cClient;
	
	CListCtrl	m_lstCard;
	CString		m_szCard;

	CProgressCtrl m_PatchProgress;

	void OnUserDBDown(int nStartindex);

	afx_msg void OnCardGenerate();
	afx_msg void OnCardRemove();
	afx_msg void OnCardSelect(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnVenjorPatch();
	afx_msg void OnAddrPatch();
	afx_msg void OnFileSave();
	afx_msg void OnViewClientStatus();
	afx_msg void OnSearchCard();
	afx_msg void OnBnClickedOk();
	afx_msg void OnSelectCard(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnExtendUser();
	afx_msg void OnChangeUser(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnPatch();
	afx_msg void OnNMCustomdrawList1(NMHDR* pNMHDR, LRESULT* pResult);
};
