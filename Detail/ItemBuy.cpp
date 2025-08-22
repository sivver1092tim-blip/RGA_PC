// ItemBuy.cpp : implementation file
//

#include "stdafx.h"
#include "Detail.h"
#include "ItemBuy.h"


// CItemBuy dialog
MultiName	g_szPotionItemList[7] =
{
	{ L"체력 회복제",						L"体力恢复药水",			},

	{ L"각성의 물약",						L"觉醒药水",				},
	{ L"강인한 소고기 스테이크",				L"坚韧牛排",				},
	{ L"민첩한 양고기 스튜",					L"敏捷的炖羊肉",			},
	{ L"지혜로운 두부 볶음",					L"智慧的炒豆腐",			},

	{ L"텔레포트 주문서",						L"随机传送卷轴",			},
	{ L"거점 귀환 주문서",					L"据点回归卷轴",			},
};

WCHAR g_szExchangeItemList[5][MAX_NAME] =
{
	L"阿爾彭武器圖案碎片(角色)",		// L"아르펜 무기 도안 조각 (캐릭터)",
	L"阿爾彭防具圖案碎片(角色)",		// L"아르펜 방어구 도안 조각 (캐릭터)",
	L"燃燒的沙漏(角色)",				// L"불타는 모래시계 (캐릭터)",
	L"冰凍的沙漏(角色)",				// L"얼어붙은 모래시계 (캐릭터)",
	L"魔法沙漏(角色)",				// L"마법의 모래시계 (캐릭터)",
};


IMPLEMENT_DYNAMIC(CItemBuy, CDialog)

CItemBuy::CItemBuy(CWnd* pParent /*=NULL*/)
	: CDialog(CItemBuy::IDD, pParent)
	, m_szName(_T(""))
	, m_bPotion(TRUE)
	, m_nCurCount(0)
	, m_nTarCount(0)
{

}


CItemBuy::~CItemBuy()
{

}


void CItemBuy::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);

	DDX_Control(pDX, IDC_COMBO1, m_cbItemList);
	DDX_Text(pDX, IDC_EDIT1, m_nCurCount);
	DDX_Text(pDX, IDC_EDIT2, m_nTarCount);
}


BEGIN_MESSAGE_MAP(CItemBuy, CDialog)
	ON_BN_CLICKED(IDOK, &CItemBuy::OnVerify)
END_MESSAGE_MAP()


// CItemBuy message handlers

BOOL CItemBuy::OnInitDialog()
{
	CDialog::OnInitDialog();

	SetControlText();


	if (m_bPotion)
	{
		for (int i = 0; i < 7; i++)
		{
			if (g_bTaiwanLang)
				m_cbItemList.AddString(g_szPotionItemList[i].szTWName);
			else
				m_cbItemList.AddString(g_szPotionItemList[i].szKRName);
		}
	}
	else
	{
		for (int i = 0; i < 5; i++)
			m_cbItemList.AddString(g_szExchangeItemList[i]);

		GetDlgItem(IDC_STATIC12)->EnableWindow(FALSE);
		GetDlgItem(IDC_STATIC13)->EnableWindow(FALSE);
		GetDlgItem(IDC_STATIC14)->EnableWindow(FALSE);
		GetDlgItem(IDC_EDIT1)->EnableWindow(FALSE);
		GetDlgItem(IDC_EDIT2)->EnableWindow(FALSE);
	}


	UpdateData(FALSE);

	if (!m_szName.IsEmpty())
		m_cbItemList.SetWindowText(m_szName.GetBuffer());

	return TRUE;
}


void CItemBuy::SetControlText()
{
	CString sLabel;

	sLabel.LoadString(NULL, IDS_ITEM, g_wLanguageID);
	GetDlgItem(IDC_STATIC11)->SetWindowText(sLabel);

	sLabel.LoadString(NULL, IDS_COUNT, g_wLanguageID);
	GetDlgItem(IDC_STATIC12)->SetWindowText(sLabel);

	sLabel.LoadString(NULL, IDS_IFBELOW, g_wLanguageID);
	GetDlgItem(IDC_STATIC13)->SetWindowText(sLabel);

	sLabel.LoadString(NULL, IDS_FILLCOUNT, g_wLanguageID);
	GetDlgItem(IDC_STATIC14)->SetWindowText(sLabel);

	sLabel.LoadString(NULL, IDS_VERIFY, g_wLanguageID);
	GetDlgItem(IDOK)->SetWindowText(sLabel);

	sLabel.LoadString(NULL, IDS_CANCEL, g_wLanguageID);
	GetDlgItem(IDCANCEL)->SetWindowText(sLabel);
}


void CItemBuy::OnVerify()
{
	UpdateData(TRUE);

	m_cbItemList.GetWindowText(m_szName);
	if (m_szName.IsEmpty())
		return;

	OnOK();
}
