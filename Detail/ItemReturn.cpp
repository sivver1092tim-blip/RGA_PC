// ItemReturn.cpp : implementation file
//

#include "stdafx.h"
#include "Detail.h"
#include "ItemReturn.h"


// CItemReturn dialog
WCHAR	g_szItemList[9][MAX_NAME] =
{
	L"HP ȸ�� ����",
	L"���� ������ũ",
	L"���ܼ�",
	L"���� ����",
	L"�縮Ǯ",
	L"���� �̵� �ֹ���",
	L"���� �̸̹��� ����",
	L"���� �̸̹��� ����",
	L"���� �̸̹��� ����"
};

IMPLEMENT_DYNAMIC(CItemReturn, CDialog)

CItemReturn::CItemReturn(CWnd* pParent /*=NULL*/)
	: CDialog(CItemReturn::IDD, pParent)
	, m_nCount(0)
	, m_szItemName(_T(""))
{
}

CItemReturn::~CItemReturn()
{
}

void CItemReturn::DoDataExchange(CDataExchange* pDX)
{
	DDX_Control(pDX, IDC_COMBO1, m_cbItemList);
	DDX_Text(pDX, IDC_EDIT1, m_nCount);

	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CItemReturn, CDialog)
	ON_BN_CLICKED(IDOK, &CItemReturn::OnVerify)
END_MESSAGE_MAP()


// CItemReturn message handlers

BOOL CItemReturn::OnInitDialog()
{
	CDialog::OnInitDialog();

	SetControlText();

	for (int i = 0; i < 9; i++)
		m_cbItemList.AddString(g_szItemList[i]);

	UpdateData(FALSE);

	if(!m_szItemName.IsEmpty())
		m_cbItemList.SetWindowText(m_szItemName);

	return TRUE;
}


void CItemReturn::SetControlText()
{
	CString strLabel;

	strLabel.LoadString(NULL, IDS_ITEM, g_wLanguageID);
	GetDlgItem(IDC_STATIC11)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_COUNT, g_wLanguageID);
	GetDlgItem(IDC_STATIC12)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_VERIFY, g_wLanguageID);
	GetDlgItem(IDOK)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_CANCEL, g_wLanguageID);
	GetDlgItem(IDCANCEL)->SetWindowText(strLabel);
}


void CItemReturn::OnVerify()
{
	UpdateData();

	m_cbItemList.GetWindowText(m_szItemName);
	if(m_szItemName.IsEmpty())
		return;

	OnOK();
}
