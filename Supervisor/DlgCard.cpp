// DlgCard.cpp : implementation file
//

#include "stdafx.h"
#include "Supervisor.h"
#include "DlgCard.h"


// CDlgCard dialog

IMPLEMENT_DYNAMIC(CDlgCard, CDialog)

CDlgCard::CDlgCard(CWnd* pParent /*=NULL*/)
	: CDialog(CDlgCard::IDD, pParent)
	, m_nCardType(5)
	, m_nCardCount(10)
	, m_szCardPrefix(_T(""))
	, m_szCardAdmin(_T(""))
{
}

CDlgCard::~CDlgCard()
{
}

void CDlgCard::DoDataExchange(CDataExchange* pDX)
{
	DDX_CBIndex(pDX, IDC_COMBO1, m_nCardType);

	DDX_Text(pDX, IDC_EDIT1, m_nCardCount);
	DDX_Text(pDX, IDC_EDIT2, m_szCardPrefix);
	DDX_Text(pDX, IDC_EDIT3, m_szCardAdmin);

	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_COMBO1, m_cbCardType);
}


BEGIN_MESSAGE_MAP(CDlgCard, CDialog)
	ON_BN_CLICKED(IDOK, &CDlgCard::OnVerify)
END_MESSAGE_MAP()


// CDlgCard message handlers
BOOL CDlgCard::OnInitDialog()
{
	CDialog::OnInitDialog();

	m_cbCardType.ResetContent();
	m_cbCardType.AddString(L"2时间");
	m_cbCardType.AddString(L"1日");
	m_cbCardType.AddString(L"3日");
	m_cbCardType.AddString(L"7日");
	m_cbCardType.AddString(L"15日");
	m_cbCardType.AddString(L"30日");

#ifndef	ADMIN_VERSION

	m_cbCardType.AddString(L"37日");
	GetDlgItem(IDC_COMBO1)->EnableWindow(TRUE);
	GetDlgItem(IDC_EDIT3)->ShowWindow(SW_SHOW);
	
#else

	m_nCardType = 5;

#endif

	WCHAR szTmp[50] = {0};

	int nLen = rand() % 3 + 3;
	for(int i = 0; i < nLen; i++)
		szTmp[i] = rand() % 26 + 'A';

	m_szCardPrefix = szTmp;
	UpdateData(FALSE);
	return TRUE;
}

void CDlgCard::OnVerify()
{
	UpdateData();

	if(m_nCardCount <= 0 || m_szCardPrefix.IsEmpty() || m_szCardPrefix.GetLength() < 3 || m_szCardPrefix.GetLength() > 5)
		return;

	OnOK();
}
