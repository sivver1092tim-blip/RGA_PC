#pragma once
#include "afxdialogex.h"


// CScheduleSkill dialog

class CScheduleSkill : public CDialogEx
{
	DECLARE_DYNAMIC(CScheduleSkill)

public:
	CScheduleSkill(CWnd* pParent = nullptr);   // standard constructor
	virtual ~CScheduleSkill();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SCHEDULE_SKILL };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
	CComboBox m_cbClass;
	CListCtrl m_lstSkillRes;
	CListCtrl m_lstSkillSet;

	void SetControlText();
	void LoadSetting(WCHAR* szPath);
	void SaveSetting(WCHAR* szPath);

	void AddSkillRes(DWORD dwSkillID);
	void AddSkillSet(DWORD dwSkillID, int nInterval, BOOL bCheck);
	afx_msg void OnBnClickedBtnAdd();
	afx_msg void OnBnClickedBtnDel();
	afx_msg void OnBnClickedBtnAuto();
	afx_msg void OnNMDblclkListSkillset(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnCbnSelchangeComboClass();
};
