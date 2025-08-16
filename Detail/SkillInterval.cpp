// SkillInterval.cpp : implementation file
//

#include "stdafx.h"
#include "Detail.h"
#include "afxdialogex.h"
#include "SkillInterval.h"


// CSkillInterval dialog

IMPLEMENT_DYNAMIC(CSkillInterval, CDialogEx)

CSkillInterval::CSkillInterval(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_SKILL_INTERVAL, pParent)
	, m_nInterval(0)
{

}

CSkillInterval::~CSkillInterval()
{
}

void CSkillInterval::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT_INTERVAL, m_nInterval);
}


BEGIN_MESSAGE_MAP(CSkillInterval, CDialogEx)
	ON_BN_CLICKED(IDOK, &CSkillInterval::OnBnClickedOk)
END_MESSAGE_MAP()


void CSkillInterval::SetControlText()
{
	CString sLabel;

	sLabel.LoadString(NULL, IDS_INTERVAL, g_wLanguageID);
	GetDlgItem(IDC_STATIC_INTERVAL)->SetWindowText(sLabel);

	sLabel.LoadString(NULL, IDS_VERIFY, g_wLanguageID);
	GetDlgItem(IDOK)->SetWindowText(sLabel);
}


// CSkillInterval message handlers
void CSkillInterval::OnBnClickedOk()
{
	UpdateData(TRUE);

	if (m_nInterval == 0)
		return;

	CDialogEx::OnOK();
}
