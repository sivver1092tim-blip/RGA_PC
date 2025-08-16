#pragma once
#include "afxcmn.h"


// CSubSchedule dialog

class CSubSchedule : public CDialog
{
	DECLARE_DYNAMIC(CSubSchedule)

public:

	CSubSchedule(CWnd* pParent = NULL);   // standard constructor
	virtual ~CSubSchedule();

// Dialog Data
	enum { IDD = IDD_SUB_SCHEDULE };

protected:
	
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()

public:

	CString m_szPrevName;

	CDateTimeCtrl m_dtStartTime;
	CDateTimeCtrl m_dtStopTime;

	CListCtrl m_lstMainSchedule;
	CListCtrl m_lstSubSchedule;

	CComboBox m_cbCharActor;
	//CComboBox m_cbCharClass;

	int m_nCharActor;
	//int m_nCharClass;

	//BOOL m_bSnakeDungeon;

	void SetControlText();
	void LoadSetting();
	void SaveSetting();
	void ResetSchedule();
	void ChangeScheduleState(int nType);

	virtual BOOL OnInitDialog();
	virtual BOOL PreTranslateMessage(MSG* pMsg);

	afx_msg void OnAddMainSchedule();
	afx_msg void OnDelMainSchedule();
	afx_msg void OnChangeMainSchedule(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnSortUp();
	afx_msg void OnSortDown();
	afx_msg void OnAddSubSchedule();
	afx_msg void OnDelSubSchedule();
	afx_msg void OnChangeSubSchedule(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnInitSchedule();
	virtual LRESULT WindowProc(UINT message, WPARAM wParam, LPARAM lParam);
	afx_msg void OnCustomdrawList(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnChangeActor();
	BOOL m_bRandomSchedule;
};
