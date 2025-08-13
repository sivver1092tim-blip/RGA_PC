// ItemDetail.cpp : implementation file
//

#include "stdafx.h"
#include "Detail.h"
#include "ItemDetail.h"


// CItemDetail dialog

IMPLEMENT_DYNAMIC(CItemDetail, CDialog)

CItemDetail::CItemDetail(CWnd* pParent /*=NULL*/)
	: CDialog(CItemDetail::IDD, pParent)
	, m_szName(_T(""))
	, m_nItemMode(0)
	, m_nMarketCount(1)
	, m_nMarketMode(0)
	, m_nFixedPrice(0)
	, m_nMinimumIndex(2)
	, m_nMinmumPrice(0)
	, m_bItemEnchant(FALSE)
	, m_nItemEnchant(5)
{
	if (g_pGameInfo)
		g_pGameInfo->bType = 1;
}

CItemDetail::~CItemDetail()
{
}

void CItemDetail::DoDataExchange(CDataExchange* pDX)
{
	DDX_Control(pDX, IDC_COMBO1, m_cbItemList);

	DDX_Radio(pDX, IDC_RADIO1, m_nItemMode);
	DDX_Radio(pDX, IDC_RADIO8, m_nMarketMode);

	DDX_Text(pDX, IDC_EDIT1, m_nMarketCount);
	DDX_Text(pDX, IDC_EDIT2, m_nFixedPrice);
	DDX_Text(pDX, IDC_EDIT3, m_nMinimumIndex);
	DDX_Text(pDX, IDC_EDIT4, m_nMinmumPrice);
	DDX_Text(pDX, IDC_EDIT5, m_nItemEnchant);

	DDX_Check(pDX, IDC_CHECK1, m_bItemEnchant);
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CItemDetail, CDialog)
	ON_BN_CLICKED(IDC_RADIO1, &CItemDetail::OnMarketSelect)
	ON_BN_CLICKED(IDC_RADIO2, &CItemDetail::OnMarketSelect)
	ON_BN_CLICKED(IDC_RADIO3, &CItemDetail::OnMarketSelect)
	ON_BN_CLICKED(IDC_RADIO4, &CItemDetail::OnMarketSelect)
	ON_BN_CLICKED(IDC_RADIO5, &CItemDetail::OnMarketSelect)
	ON_BN_CLICKED(IDC_RADIO6, &CItemDetail::OnMarketSelect)
	ON_BN_CLICKED(IDC_RADIO7, &CItemDetail::OnMarketSelect)
	ON_BN_CLICKED(IDC_RADIO8, &CItemDetail::OnMarketModeSelect)
	ON_BN_CLICKED(IDC_RADIO9, &CItemDetail::OnMarketModeSelect)
	ON_BN_CLICKED(IDC_RADIO10, &CItemDetail::OnMarketSelect)
	ON_BN_CLICKED(IDOK, &CItemDetail::OnVerify)
	ON_WM_TIMER()
	ON_BN_CLICKED(IDC_CHECK1, &CItemDetail::OnVerifyEnchant)
END_MESSAGE_MAP()


// CItemDetail message handlers

BOOL CItemDetail::OnInitDialog()
{
	CDialog::OnInitDialog();

	SetControlText();

	UpdateData(FALSE);
	OnMarketSelect();
	
	if(!m_szName.IsEmpty())
		m_cbItemList.SetWindowText(m_szName);

	SetTimer(0x20210802, 100, NULL);
	return TRUE;
}


void CItemDetail::SetControlText()
{
	CString strLabel;

	strLabel.LoadString(NULL, IDS_ITEM, g_wLanguageID);
	GetDlgItem(IDC_STATIC11)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_MODE, g_wLanguageID);
	GetDlgItem(IDC_STATIC12)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_ITEMMODE_1, g_wLanguageID);
	GetDlgItem(IDC_RADIO1)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_ITEMMODE_2, g_wLanguageID);
	GetDlgItem(IDC_RADIO2)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_ITEMMODE_3, g_wLanguageID);
	GetDlgItem(IDC_RADIO3)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_ITEMMODE_4, g_wLanguageID);
	GetDlgItem(IDC_RADIO4)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_ITEMMODE_5, g_wLanguageID);
	GetDlgItem(IDC_RADIO5)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_ITEMMODE_6, g_wLanguageID);
	GetDlgItem(IDC_RADIO6)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_ITEMMODE_7, g_wLanguageID);
	GetDlgItem(IDC_RADIO7)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_BLOCKCOUNT, g_wLanguageID);
	GetDlgItem(IDC_STATIC13)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_MARKETPRICE, g_wLanguageID);
	GetDlgItem(IDC_STATIC14)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_FIXEDPRICE, g_wLanguageID);
	GetDlgItem(IDC_RADIO8)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_MINIMUMPRICE, g_wLanguageID);
	GetDlgItem(IDC_RADIO9)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60100, g_wLanguageID);
	GetDlgItem(IDC_STATIC15)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60101, g_wLanguageID);
	GetDlgItem(IDC_STATIC16)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_VERIFY, g_wLanguageID);
	GetDlgItem(IDOK)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_CANCEL, g_wLanguageID);
	GetDlgItem(IDCANCEL)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60316, g_wLanguageID);
	GetDlgItem(IDC_RADIO10)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60375, g_wLanguageID);
	GetDlgItem(IDC_CHECK1)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60376, g_wLanguageID);
	GetDlgItem(IDC_STATIC17)->SetWindowText(strLabel);
}


void CItemDetail::OnMarketSelect()
{
	UpdateData();

	if(m_nItemMode != ItemMode_Trade)
	{
		GetDlgItem(IDC_EDIT1)->EnableWindow(FALSE);

		GetDlgItem(IDC_RADIO8)->EnableWindow(FALSE);
		GetDlgItem(IDC_RADIO9)->EnableWindow(FALSE);

		GetDlgItem(IDC_EDIT2)->EnableWindow(FALSE);
		GetDlgItem(IDC_EDIT3)->EnableWindow(FALSE);
		GetDlgItem(IDC_EDIT4)->EnableWindow(FALSE);
	}
	else
	{
		GetDlgItem(IDC_EDIT1)->EnableWindow(TRUE);

		GetDlgItem(IDC_RADIO8)->EnableWindow(TRUE);
		GetDlgItem(IDC_RADIO9)->EnableWindow(TRUE);

		OnMarketModeSelect();
	}

	if (m_nItemMode == ItemMode_None || m_nItemMode == ItemMode_Trade)
	{
		GetDlgItem(IDC_CHECK1)->EnableWindow(TRUE);

		OnVerifyEnchant();
	}
	else
	{
		GetDlgItem(IDC_CHECK1)->EnableWindow(FALSE);
		GetDlgItem(IDC_EDIT5)->EnableWindow(FALSE);
	}
}


void CItemDetail::OnMarketModeSelect()
{
	UpdateData();

	if(m_nMarketMode == 0)
	{
		GetDlgItem(IDC_EDIT2)->EnableWindow(TRUE);

		GetDlgItem(IDC_EDIT3)->EnableWindow(FALSE);
		GetDlgItem(IDC_EDIT4)->EnableWindow(FALSE);
	}
	else
	{
		GetDlgItem(IDC_EDIT2)->EnableWindow(FALSE);

		GetDlgItem(IDC_EDIT3)->EnableWindow(TRUE);
		GetDlgItem(IDC_EDIT4)->EnableWindow(TRUE);
	}
}


void CItemDetail::OnVerify()
{
	UpdateData();

	m_cbItemList.GetWindowText(m_szName);

	if(m_szName.IsEmpty())
		return;

	OnOK();
}


void CItemDetail::OnTimer(UINT_PTR nIDEvent)
{
	if (nIDEvent == 0x20210802)
	{
		if (g_pGameInfo && g_pGameInfo->bType == 0)
		{
			for (int i = 0; i < g_pGameInfo->nCount; i++)
				m_cbItemList.AddString(g_pGameInfo->szName[i]);

			KillTimer(nIDEvent);
		}
	}

	CDialog::OnTimer(nIDEvent);
}


void CItemDetail::OnVerifyEnchant()
{
	UpdateData();

	GetDlgItem(IDC_EDIT5)->EnableWindow(m_bItemEnchant);
}
