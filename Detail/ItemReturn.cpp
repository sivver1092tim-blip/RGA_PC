// ItemReturn.cpp : implementation file
//

#include "stdafx.h"
#include "Detail.h"
#include "ItemReturn.h"


// CItemReturn dialog
MultiName	g_szItemList[7] =
{
	{ L"체력 회복제",						L"体力恢复药水",			},

	{ L"각성의 물약",						L"觉醒药水",				},
	{ L"강인한 소고기 스테이크",			L"坚韧牛排",				},
	{ L"민첩한 양고기 스튜",				L"敏捷的炖羊肉",			},
	{ L"지혜로운 두부 볶음",				L"智慧的炒豆腐",			},

	{ L"텔레포트 주문서",					L"随机传送卷轴",			},
	{ L"거점 귀환 주문서",					L"据点回归卷轴",			},
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

	for (int i = 0; i < 7; i++)
	{
		if (g_bTaiwanLang)
			m_cbItemList.AddString(g_szItemList[i].szTWName);
		else
			m_cbItemList.AddString(g_szItemList[i].szKRName);
	}

	UpdateData(FALSE);

	if (!m_szItemName.IsEmpty())
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
