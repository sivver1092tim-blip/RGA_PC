
// OdinDlg.h : header file
//

#pragma once
#include "afxcmn.h"
#include "resource.h"
#include "ComboListCtrl.h"

// COdinDlg dialog
class COdinDlg : public CDialog
{
// Construction
public:

	COdinDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_ODIN_DIALOG };

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

	CString	m_strDia;

	DWORD	m_dwStartTID;
	DWORD	m_dwStopTID;

	CComboListCtrl m_lstUser;
	CComboBox m_cbAlignMode;

	int		m_nAlignMode;
	
	BOOL	m_bAlignMode;
	BOOL	m_bDaumKeep;
	BOOL	m_bKorean;

	unsigned int m_nClientDia[100];

	void SetControlText();
	void LoadSetting();
	void SaveSetting();
	void CloseSetting();

	LRESULT PoPulateComboList(WPARAM wParam, LPARAM lParam);

	virtual BOOL PreTranslateMessage(MSG* pMsg);

	afx_msg void OnAddUser();
	afx_msg void OnDelUser();
	afx_msg void OnAutoStart();
	afx_msg void OnAutoStop();
	afx_msg void OnStartAll();
	afx_msg void OnStopAll();
	afx_msg void OnStartUser();
	afx_msg void OnStopUser();
	afx_msg void OnExitProgram();
	afx_msg void OnChangeSetting(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnClose();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnBrowse();
	afx_msg void OnEnableAlign();
	afx_msg void OnChangeAlign();
	afx_msg void OnDaumKeep();
	afx_msg void OnNMCustomdrawList1(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnTestBtn();
	
	virtual LRESULT WindowProc(UINT message, WPARAM wParam, LPARAM lParam);
	BOOL m_bEnableWait;
	afx_msg void OnEnableWait();
	int m_nMinDelay;
	int m_nMaxDelay;
	afx_msg void OnLvnItemchangedList1(NMHDR* pNMHDR, LRESULT* pResult);
};
