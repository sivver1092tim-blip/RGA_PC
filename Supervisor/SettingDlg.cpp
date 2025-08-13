// SettingDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Supervisor.h"
#include "SettingDlg.h"


// CSettingDlg dialog

IMPLEMENT_DYNAMIC(CSettingDlg, CDialog)

CSettingDlg::CSettingDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CSettingDlg::IDD, pParent)
	, bDisable(0)
	, nYear(0)
	, nMonth(0)
	, nDay(0)
	, nHour(0)
	, nMinute(0)
{

}

CSettingDlg::~CSettingDlg()
{
}

void CSettingDlg::DoDataExchange(CDataExchange* pDX)
{
	DDX_Radio(pDX , IDC_RADIO1 , bDisable);
	DDX_Text(pDX , IDC_EDIT1 , nYear);
	DDX_Text(pDX , IDC_EDIT2 , nMonth);
	DDX_Text(pDX , IDC_EDIT3 , nDay);
	DDX_Text(pDX , IDC_EDIT4 , nHour);
	DDX_Text(pDX , IDC_EDIT5 , nMinute);
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CSettingDlg, CDialog)
	ON_BN_CLICKED(IDOK, &CSettingDlg::OnChange)
END_MESSAGE_MAP()


// CSettingDlg message handlers

void CSettingDlg::OnChange()
{
	UpdateData(TRUE);

	if(nHour < 0 || nHour > 24 || nMinute < 0 || nMinute > 60 || nMonth < 0 || nMonth > 12 || nYear < 1 || nYear > 99 || nDay < 0)
		return;

	if((nMonth == 1 || nMonth == 3 || nMonth == 5 || nMonth == 7 || nMonth == 8 || nMonth == 10 || nMonth == 12) && nDay > 31)
		return;

	if((nMonth == 4 || nMonth == 6 || nMonth == 9 || nMonth == 11) && nDay > 30)
		return;

	OnOK();
}

BOOL CSettingDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	UpdateData(FALSE);

	return TRUE;
}
