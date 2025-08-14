#pragma once
#include "afxdialogex.h"


// CSkillInterval dialog

class CSkillInterval : public CDialogEx
{
	DECLARE_DYNAMIC(CSkillInterval)

public:
	CSkillInterval(CWnd* pParent = nullptr);   // standard constructor
	virtual ~CSkillInterval();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SKILL_INTERVAL };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	int m_nInterval;

	void SetControlText();

	afx_msg void OnBnClickedOk();
};
