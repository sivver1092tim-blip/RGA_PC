
// DetailDlg.h : header file
//

#pragma once
#include "resource.h"
#include "afxcmn.h"
#include "XTabCtrl.h"
#include "SubSchedule.h"
#include "SubLogInfo.h"

// CDetailDlg dialog
class CDetailDlg : public CDialog
{
// Construction
public:
	CDetailDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_DETAIL_DIALOG };

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

	BYTE			m_nAddrCount;
	BYTE			m_pbAddrInfo[512];

	DWORD			m_dwScheduleDate;

	CXTabCtrl		m_tabCtrl;

	CSubSchedule	m_SubSchedule;
	CSubLogInfo		m_SubLogInfo;

	void HideSetting();
	void LoadSetting();
	void SaveSetting();
	void CloseSetting();
	void CloseGameSetting();
	void SetControlText();
	void ResetButton();
	void RestAutoButton();
	void OnPopupMenu_ApplySetting(CCmdUI* pCmdUI);

	afx_msg void OnClose();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnApplySetting();
	afx_msg void OnGameStart();
	afx_msg void OnHideSetting();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnContextMenu(CWnd* /*pWnd*/, CPoint /*point*/);

	virtual BOOL PreTranslateMessage(MSG* pMsg);

protected:

	DWORD64			m_qwServerTick;
	DWORD64			m_qwLastServerTick;

	virtual LRESULT WindowProc(UINT message, WPARAM wParam, LPARAM lParam);

public:

	BOOL m_bFrameEnable;
	int m_nFrameValue;
	afx_msg void OnEnableFrame();
};
