// DlgLogin.cpp : implementation file
//

#include "stdafx.h"
#include "Supervisor.h"
#include "DlgLogin.h"


// CDlgLogin dialog

IMPLEMENT_DYNAMIC(CDlgLogin, CDialog)

CDlgLogin::CDlgLogin(CWnd* pParent /*=NULL*/)
	: CDialog(CDlgLogin::IDD, pParent)
	, m_szID(_T(""))
	, m_szPW(_T(""))
{

}

CDlgLogin::~CDlgLogin()
{
}

void CDlgLogin::DoDataExchange(CDataExchange* pDX)
{
	DDX_Text(pDX , IDC_EDIT1 , m_szID);
	DDX_Text(pDX , IDC_EDIT2 , m_szPW);
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDlgLogin, CDialog)
	ON_BN_CLICKED(IDOK, &CDlgLogin::OnBnClickedOk)
END_MESSAGE_MAP()


// CDlgLogin message handlers

void CDlgLogin::OnBnClickedOk()
{
	UpdateData(TRUE);

	if(m_szID.IsEmpty())
	{
		MessageBox(L"请输入 ID" , L"通知");
		return;
	}

	if(m_szPW.IsEmpty())
	{
		MessageBox(L"请输入 PW" , L"通知");
		return;
	}

	if(m_szID.GetLength() > 20)
	{
		MessageBox(L"ID最多不超过20个字." , L"通知");
		return;
	}

	if(m_szPW.GetLength() > 20)
	{
		MessageBox(L"密码最多不超过20个字符." , L"通知");
		return;
	}

	OnOK();
}