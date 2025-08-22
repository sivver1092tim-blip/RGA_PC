#pragma once
#include "afxcmn.h"
#include "afxdtctl.h"
#include "XTabCtrl.h"
#include "ScheduleHunt.h"
#include "ScheduleBuy.h"
#include "ScheduleItem.h"
#include "SchedulePK.h"
#include "ScheduleOther.h"
#include "ScheduleSkill.h"
#include "ScheduleMake.h"
#include "afxwin.h"

// CScheduleDetail dialog

class CScheduleDetail : public CDialog
{
	DECLARE_DYNAMIC(CScheduleDetail)

public:
	CScheduleDetail(CWnd* pParent = NULL);   // standard constructor
	virtual ~CScheduleDetail();

// Dialog Data
	enum { IDD = IDD_SCHEDULE_DETAIL };

protected:
	
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()

public:

	BOOL m_bTimeEnable;

	int m_nTimeMode;
	int m_nHuntTime;

	int m_nTimeStart;
	int m_nTimeStop;

	CDateTimeCtrl m_dtTimeStart;
	CDateTimeCtrl m_dtTimeStop;

	CString m_szScheduleName;
	CString m_szDefaultName;

	CXTabCtrl		m_tabCtrl;

	CScheduleHunt	m_ScheduleHunt;
	CScheduleBuy	m_ScheduleBuy;
	CScheduleItem	m_ScheduleItem;
	CSchedulePK		m_SchedulePK;
	CScheduleOther	m_ScheduleOther;
	CScheduleSkill	m_ScheduleSkill;
	CScheduleMake	m_ScheduleMake;

	void SetControlText();
	void LoadSetting(WCHAR *szPath, BOOL bLoadMain = TRUE);
	void SaveSetting(WCHAR *szPath);

	virtual BOOL OnInitDialog();
	virtual BOOL PreTranslateMessage(MSG* pMsg);

	afx_msg void OnTimeEnable();
	afx_msg void OnTimeModeChange();
	afx_msg void OnVerify();
	afx_msg void OnCancel();
	afx_msg void OnBrowse();
	BOOL m_bSelServer;
	BOOL m_bSelChar;
	CComboBox m_cbServerList;
	CComboBox m_cbCharList;
	int m_nServer;
	int m_nChar;
	afx_msg void OnEnableServer();
	afx_msg void OnEnableChar();
	afx_msg void OnContextMenu(CWnd* /*pWnd*/, CPoint /*point*/);
	void OnPopupMenu_ApplySetting(CCmdUI* pCmdUI);
	CComboBox m_cbWeek;
	int m_nWeek;
};
