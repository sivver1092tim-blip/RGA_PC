// ItemBuy.cpp : implementation file
//

#include "stdafx.h"
#include "Detail.h"
#include "ItemBuy.h"


// CItemBuy dialog


IMPLEMENT_DYNAMIC(CItemBuy, CDialog)

CItemBuy::CItemBuy(CWnd* pParent /*=NULL*/)
	: CDialog(CItemBuy::IDD, pParent)
	, m_szName(_T(""))
	, m_nCurCount(0)
	, m_nTarCount(0)
	, m_bExpendable(TRUE)
{
}

CItemBuy::~CItemBuy()
{
}

void CItemBuy::DoDataExchange(CDataExchange* pDX)
{
	DDX_Control(pDX, IDC_COMBO1, m_cbItemList);

	DDX_Text(pDX, IDC_EDIT1, m_nCurCount);
	DDX_Text(pDX, IDC_EDIT2, m_nTarCount);

	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CItemBuy, CDialog)
	ON_BN_CLICKED(IDOK, &CItemBuy::OnVerify)
END_MESSAGE_MAP()


// CItemBuy message handlers

BOOL CItemBuy::OnInitDialog()
{
	CDialog::OnInitDialog();

	if (m_bExpendable)
	{
		for (int i = 0; i < MAX_EXPAND; i++)
		{
			m_cbItemList.AddString(g_szExpendItemList[i]);

			if (!m_szName.Compare(g_szExpendItemList[i]))
				m_cbItemList.SetCurSel(i);
		}	
	}
	else
	{
		for (int i = 0; i < 35; i++)
		{
			m_cbItemList.AddString(g_szExchangeItemList[i]);

			if (!m_szName.Compare(g_szExchangeItemList[i]))
				m_cbItemList.SetCurSel(i);
		}
			
	}

	SetControlText();

	UpdateData(FALSE);
	return TRUE;
}


void CItemBuy::SetControlText()
{
	CString strLabel;

	strLabel.LoadString(NULL, IDS_ITEM, g_wLanguageID);
	GetDlgItem(IDC_STATIC11)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_COUNT, g_wLanguageID);
	GetDlgItem(IDC_STATIC12)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_IFBELOW, g_wLanguageID);
	GetDlgItem(IDC_STATIC13)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_FILLCOUNT, g_wLanguageID);
	GetDlgItem(IDC_STATIC14)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_VERIFY, g_wLanguageID);
	GetDlgItem(IDOK)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_CANCEL, g_wLanguageID);
	GetDlgItem(IDCANCEL)->SetWindowText(strLabel);
}


void CItemBuy::OnVerify()
{
	UpdateData();

	m_cbItemList.GetWindowText(m_szName);
	if(m_szName.IsEmpty())
		return;

	OnOK();
}
