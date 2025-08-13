#pragma once
#include "TextProgressCtrl.h"

// CSubLogInfo dialog

class CSubLogInfo : public CDialog
{
	DECLARE_DYNAMIC(CSubLogInfo)

public:

	CSubLogInfo(CWnd* pParent = NULL);   // standard constructor
	virtual ~CSubLogInfo();

// Dialog Data
	enum { IDD = IDD_SUB_LOGINFO };

protected:

	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()

public:

	FILE*	m_pLogfp;

	int		m_dwLogTime;
	int		m_nPreLevel;

	CListCtrl m_lstLog;

	CTextProgressCtrl m_pHpBar;
	CTextProgressCtrl m_pMpBar;
	CTextProgressCtrl m_pInvenBar;
	CTextProgressCtrl m_pExpBar;

	CString		m_szPreCharName;
	CString		m_szPreServerName;
	CString		m_szPreRegion;

	unsigned int	m_nPreGold;
	unsigned int	m_nPreDia;

	void ShowLog(int nType, int nStringCode, WCHAR* szLog, int nLogValue1, int nLogValue2);
	void ShowGameStatus();

	virtual BOOL OnInitDialog();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	virtual BOOL DestroyWindow();
	afx_msg void OnNMCustomdrawProgress1(NMHDR* pNMHDR, LRESULT* pResult);
};
