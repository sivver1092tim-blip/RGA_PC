#pragma once
#include "afxcmn.h"
#include "ComboListCtrl.h"


// CScheduleItem dialog

class CScheduleItem : public CDialog
{
	DECLARE_DYNAMIC(CScheduleItem)

public:
	CScheduleItem(CWnd* pParent = NULL);   // standard constructor
	virtual ~CScheduleItem();

// Dialog Data
	enum { IDD = IDD_SCHEDULE_ITEM };

protected:
	
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()

public:

	CComboListCtrl m_lstDefault;

	CListCtrl m_lstDetail;

	void SetControlText();

	void LoadSetting(WCHAR *szPath);
	void SaveSetting(WCHAR *szPath);

	virtual BOOL OnInitDialog();
	virtual BOOL PreTranslateMessage(MSG* pMsg);

	LRESULT PoPulateComboList(WPARAM wParam , LPARAM lParam);
	
	afx_msg void OnAddItemDetail();
	afx_msg void OnDelItemDetail();
	afx_msg void OnChangeItemDetail(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnSort();
};
