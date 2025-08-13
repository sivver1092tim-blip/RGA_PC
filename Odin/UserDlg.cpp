// UserDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Odin.h"
#include "UserDlg.h"


// CUserDlg dialog

IMPLEMENT_DYNAMIC(CUserDlg, CDialog)

CUserDlg::CUserDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CUserDlg::IDD, pParent)
	, m_szAutoID(_T(""))
	, m_szGameID(_T(""))
	, m_szGamePW(_T(""))
	, m_nGameServer(0)
{
}

CUserDlg::~CUserDlg()
{
}

void CUserDlg::DoDataExchange(CDataExchange* pDX)
{
	DDX_Text(pDX, IDC_EDIT1, m_szAutoID);
	DDX_Text(pDX, IDC_EDIT2, m_szGameID);
	DDX_Text(pDX, IDC_EDIT3, m_szGamePW);

	DDX_Control(pDX, IDC_COMBO1, m_cbGameServer);
	DDX_CBIndex(pDX, IDC_COMBO1, m_nGameServer);

	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CUserDlg, CDialog)
	ON_BN_CLICKED(IDOK, &CUserDlg::OnVerify)
END_MESSAGE_MAP()


// CUserDlg message handlers

BOOL CUserDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	SetControlText();

	WCHAR szTmp[MAX_NAME];
	for(int i = 0; i < MAX_SERVER; i++)
	{
		for(int j = 0; j < 9; j++)
		{
			swprintf(szTmp, L"%s%02d", g_szServerName[i], j + 1);
			m_cbGameServer.AddString(szTmp);
		}
	}

	UpdateData(FALSE);
	return TRUE;
}




void CUserDlg::OnVerify()
{
	UpdateData();

	if(m_szAutoID.IsEmpty() || m_szGameID.IsEmpty() || m_szGamePW.IsEmpty())
		return;

	OnOK();
}


void CUserDlg::SetControlText()
{
	CString strLabel;
	strLabel.LoadString(NULL, IDS_ID, g_wLanguageID);
	GetDlgItem(IDC_STATIC11)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_GAMEID, g_wLanguageID);
	GetDlgItem(IDC_STATIC12)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_GAMEPW, g_wLanguageID);
	GetDlgItem(IDC_STATIC13)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_GAMESERVER, g_wLanguageID);
	GetDlgItem(IDC_STATIC14)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_VERIFY, g_wLanguageID);
	GetDlgItem(IDOK)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_CANCEL, g_wLanguageID);
	GetDlgItem(IDCANCEL)->SetWindowText(strLabel);
}