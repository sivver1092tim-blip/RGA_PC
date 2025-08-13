// ScheduleBuy.cpp : implementation file
//

#include "stdafx.h"
#include "Detail.h"
#include "ScheduleBuy.h"
#include "ItemBuy.h"


// CScheduleBuy dialog

IMPLEMENT_DYNAMIC(CScheduleBuy, CDialog)

CScheduleBuy::CScheduleBuy(CWnd* pParent /*=NULL*/)
	: CDialog(CScheduleBuy::IDD, pParent)
	, m_nSummonGold(1000000)
	, m_nPaperGold(1000000)
	, m_bSkillGold(TRUE)
	, m_nSkillGold(500000)
	, m_nExpendGold(500000)
	, m_bBuyHighSkill(FALSE)
{
	m_bSummonAvatar[0] = m_bSummonAvatar[1] = m_bSummonAvatar[2] = TRUE;
	m_bSummonRiding[0] = m_bSummonRiding[1] = m_bSummonRiding[2] = TRUE;
	m_bWeaponType[0] = m_bWeaponType[1] = m_bWeaponType[2] = FALSE;
	m_bSummonRune[0] = m_bSummonRune[1] = TRUE;
	m_bMimirPotion[0] = m_bMimirPotion[1] = m_bMimirPotion[2] = m_bMimirPotion[3] = m_bMimirPotion[4] = FALSE;
	m_bBlessingStone[0] = m_bBlessingStone[1] = FALSE;

	m_bPaperBuy[0] = m_bPaperBuy[1] = m_bPaperBuy[2] = m_bPaperBuy[3] = TRUE;
	m_nPaperCount[0] = m_nPaperCount[1] = m_nPaperCount[2] = m_nPaperCount[3] = 5;

	m_bCashItemBuy[0] = m_bCashItemBuy[1] = m_bCashItemBuy[2] = FALSE;
	m_nCashItemBuy[0] = m_nCashItemBuy[1] = m_nCashItemBuy[2] = 0;
}

CScheduleBuy::~CScheduleBuy()
{
}

void CScheduleBuy::DoDataExchange(CDataExchange* pDX)
{
	DDX_Text(pDX, IDC_EDIT1, m_nSummonGold);
	DDX_Text(pDX, IDC_EDIT2, m_nPaperGold);
	DDX_Text(pDX, IDC_EDIT3, m_nPaperCount[0]);
	DDX_Text(pDX, IDC_EDIT4, m_nPaperCount[1]);
	DDX_Text(pDX, IDC_EDIT5, m_nPaperCount[2]);
	DDX_Text(pDX, IDC_EDIT6, m_nPaperCount[3]);
	DDX_Text(pDX, IDC_EDIT7, m_nSkillGold);
	DDX_Text(pDX, IDC_EDIT8, m_nExpendGold);
	DDX_Text(pDX, IDC_EDIT9, m_nCashItemBuy[0]);
	DDX_Text(pDX, IDC_EDIT10, m_nCashItemBuy[1]);

	DDX_Check(pDX, IDC_CHECK1, m_bSummonAvatar[0]);
	DDX_Check(pDX, IDC_CHECK2, m_bSummonAvatar[1]);
	DDX_Check(pDX, IDC_CHECK3, m_bSummonAvatar[2]);
	DDX_Check(pDX, IDC_CHECK4, m_bSummonRiding[0]);
	DDX_Check(pDX, IDC_CHECK5, m_bSummonRiding[1]);
	DDX_Check(pDX, IDC_CHECK6, m_bSummonRiding[2]);
	DDX_Check(pDX, IDC_CHECK7, m_bSummonRune[0]);
	DDX_Check(pDX, IDC_CHECK8, m_bSummonRune[1]);
	DDX_Check(pDX, IDC_CHECK9, m_bPaperBuy[0]);
	DDX_Check(pDX, IDC_CHECK10, m_bPaperBuy[1]);
	DDX_Check(pDX, IDC_CHECK11, m_bPaperBuy[2]);
	DDX_Check(pDX, IDC_CHECK12, m_bPaperBuy[3]);
	DDX_Check(pDX, IDC_CHECK13, m_bSkillGold);
	DDX_Check(pDX, IDC_CHECK14, m_bBuyHighSkill);
	DDX_Check(pDX, IDC_CHECK15, m_bCashItemBuy[0]);
	DDX_Check(pDX, IDC_CHECK16, m_bCashItemBuy[1]);
	DDX_Check(pDX, IDC_CHECK17, m_bWeaponType[0]);
	DDX_Check(pDX, IDC_CHECK18, m_bWeaponType[1]);
	DDX_Check(pDX, IDC_CHECK19, m_bWeaponType[2]);
	DDX_Check(pDX, IDC_CHECK20, m_bMimirPotion[0]);
	DDX_Check(pDX, IDC_CHECK21, m_bMimirPotion[1]);
	DDX_Check(pDX, IDC_CHECK22, m_bMimirPotion[2]);
	DDX_Check(pDX, IDC_CHECK23, m_bMimirPotion[3]);
	DDX_Check(pDX, IDC_CHECK24, m_bMimirPotion[4]);
	DDX_Check(pDX, IDC_CHECK25, m_bBlessingStone[0]);
	DDX_Check(pDX, IDC_CHECK26, m_bBlessingStone[1]);

	DDX_Control(pDX, IDC_LIST1, m_lstPotion);
	DDX_Control(pDX, IDC_LIST2, m_lstExchange);

	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CScheduleBuy, CDialog)
	ON_BN_CLICKED(IDC_CHECK9, &CScheduleBuy::OnEnablePaper1)
	ON_BN_CLICKED(IDC_CHECK10, &CScheduleBuy::OnEnablePaper2)
	ON_BN_CLICKED(IDC_CHECK11, &CScheduleBuy::OnEnablePaper3)
	ON_BN_CLICKED(IDC_CHECK12, &CScheduleBuy::OnEnablePaper4)
	ON_BN_CLICKED(IDC_CHECK13, &CScheduleBuy::OnSkillGold)
	ON_BN_CLICKED(IDC_BUTTON1, &CScheduleBuy::OnAddPotionItem)
	ON_BN_CLICKED(IDC_BUTTON2, &CScheduleBuy::OnDelPotionItem)
	ON_NOTIFY(NM_DBLCLK, IDC_LIST1, &CScheduleBuy::OnChangePotionItem)
	ON_BN_CLICKED(IDC_BUTTON3, &CScheduleBuy::OnAddExchangeItem)
	ON_BN_CLICKED(IDC_BUTTON4, &CScheduleBuy::OnDelExchangeItem)
	ON_NOTIFY(NM_DBLCLK, IDC_LIST2, &CScheduleBuy::OnChangeExchangeItem)
	ON_BN_CLICKED(IDC_CHECK15, &CScheduleBuy::OnEnableCashBuy1)
	ON_BN_CLICKED(IDC_CHECK16, &CScheduleBuy::OnEnableCashBuy2)
	ON_BN_CLICKED(IDC_CHECK20, &CScheduleBuy::OnEnableMimir1)
	ON_BN_CLICKED(IDC_CHECK21, &CScheduleBuy::OnEnableMimir2)
	ON_BN_CLICKED(IDC_CHECK22, &CScheduleBuy::OnEnableMimir3)
	ON_BN_CLICKED(IDC_CHECK23, &CScheduleBuy::OnEnableMimir4)
END_MESSAGE_MAP()


// CScheduleBuy message handlers

BOOL CScheduleBuy::OnInitDialog()
{
	CDialog::OnInitDialog();

	SetControlText();

	CString strLabel;

	m_lstPotion.SetExtendedStyle(m_lstPotion.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES | LVS_EX_CHECKBOXES);
	m_lstPotion.InsertColumn(0, L"", LVCFMT_LEFT, 20);
	m_lstPotion.InsertColumn(1, L"No", LVCFMT_LEFT, 25);

	strLabel.LoadString(NULL, IDS_ITEM, g_wLanguageID);
	m_lstPotion.InsertColumn(2, strLabel.GetBuffer(), LVCFMT_LEFT, 115);

	strLabel.LoadString(NULL, IDS_CURCOUNT, g_wLanguageID);
	m_lstPotion.InsertColumn(3, strLabel.GetBuffer(), LVCFMT_LEFT, 40);

	strLabel.LoadString(NULL, IDS_TARCOUNT, g_wLanguageID);
	m_lstPotion.InsertColumn(4, strLabel.GetBuffer(), LVCFMT_LEFT, 40);

	m_lstExchange.SetExtendedStyle(m_lstExchange.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES | LVS_EX_CHECKBOXES);
	m_lstExchange.InsertColumn(0, L"", LVCFMT_LEFT, 20);
	m_lstExchange.InsertColumn(1, L"No", LVCFMT_LEFT, 25);

	strLabel.LoadString(NULL, IDS_ITEM, g_wLanguageID);
	m_lstExchange.InsertColumn(2, strLabel.GetBuffer(), LVCFMT_LEFT, 112);

	strLabel.LoadString(NULL, IDS_CURCOUNT, g_wLanguageID);
	m_lstExchange.InsertColumn(3, strLabel.GetBuffer(), LVCFMT_LEFT, 40);

	strLabel.LoadString(NULL, IDS_TARCOUNT, g_wLanguageID);
	m_lstExchange.InsertColumn(4, strLabel.GetBuffer(), LVCFMT_LEFT, 40);

	UpdateData(FALSE);

	OnEnablePaper1();
	OnEnablePaper2();
	OnEnablePaper3();
	OnEnablePaper4();
	OnSkillGold();
	OnEnableCashBuy1();
	OnEnableCashBuy2();
	OnEnableMimir1();
	return TRUE;
}


BOOL CScheduleBuy::PreTranslateMessage(MSG* pMsg)
{
	if (pMsg->wParam == VK_RETURN || pMsg->wParam == VK_ESCAPE)
		return TRUE;

	return CDialog::PreTranslateMessage(pMsg);
}


void CScheduleBuy::SetControlText()
{
	CString strLabel;

	strLabel.LoadString(NULL, IDS_DIASHOP, g_wLanguageID);
	GetDlgItem(IDC_STATIC11)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_GOLDABOVE, g_wLanguageID);
	GetDlgItem(IDC_STATIC12)->SetWindowText(strLabel);
	GetDlgItem(IDC_STATIC13)->SetWindowText(strLabel);
	GetDlgItem(IDC_STATIC21)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_BUYAVATAR_1, g_wLanguageID);
	GetDlgItem(IDC_CHECK1)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_BUYAVATAR_2, g_wLanguageID);
	GetDlgItem(IDC_CHECK2)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_BUYAVATAR_3, g_wLanguageID);
	GetDlgItem(IDC_CHECK3)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_BUYRIDER_1, g_wLanguageID);
	GetDlgItem(IDC_CHECK4)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_BUYRIDER_2, g_wLanguageID);
	GetDlgItem(IDC_CHECK5)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_BUYRIDER_3, g_wLanguageID);
	GetDlgItem(IDC_CHECK6)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_BUYRUNE_1, g_wLanguageID);
	GetDlgItem(IDC_CHECK7)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_BUYRUNE_2, g_wLanguageID);
	GetDlgItem(IDC_CHECK8)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_WEAPONPAPER, g_wLanguageID);
	GetDlgItem(IDC_CHECK9)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_ARMORPAPER, g_wLanguageID);
	GetDlgItem(IDC_CHECK10)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_WEAPONBOX, g_wLanguageID);
	GetDlgItem(IDC_CHECK11)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_ARMORBOX, g_wLanguageID);
	GetDlgItem(IDC_CHECK12)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_BUYCOUNT, g_wLanguageID);
	GetDlgItem(IDC_STATIC14)->SetWindowText(strLabel);
	GetDlgItem(IDC_STATIC15)->SetWindowText(strLabel);
	GetDlgItem(IDC_STATIC16)->SetWindowText(strLabel);
	GetDlgItem(IDC_STATIC17)->SetWindowText(strLabel);
	GetDlgItem(IDC_STATIC22)->SetWindowText(strLabel);
	GetDlgItem(IDC_STATIC23)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_POTIONNPC, g_wLanguageID);
	GetDlgItem(IDC_STATIC18)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_EXCHANGENPC, g_wLanguageID);
	GetDlgItem(IDC_STATIC19)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_ADD, g_wLanguageID);
	GetDlgItem(IDC_BUTTON1)->SetWindowText(strLabel);
	GetDlgItem(IDC_BUTTON3)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_DEL, g_wLanguageID);
	GetDlgItem(IDC_BUTTON2)->SetWindowText(strLabel);
	GetDlgItem(IDC_BUTTON4)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_GOLD, g_wLanguageID);
	GetDlgItem(IDC_CHECK13)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_KEEPGOLDSKILL, g_wLanguageID);
	GetDlgItem(IDC_STATIC20)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60277, g_wLanguageID);
	GetDlgItem(IDC_CHECK14)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60361, g_wLanguageID);
	GetDlgItem(IDC_CHECK15)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60362, g_wLanguageID);
	GetDlgItem(IDC_CHECK16)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_WEAPONTYPE1, g_wLanguageID);
	GetDlgItem(IDC_CHECK17)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_WEAPONTYPE2, g_wLanguageID);
	GetDlgItem(IDC_CHECK18)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_WEAPONTYPE3, g_wLanguageID);
	GetDlgItem(IDC_CHECK19)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_MIMIRPOTION1, g_wLanguageID);
	GetDlgItem(IDC_CHECK20)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_MIMIRPOTION2, g_wLanguageID);
	GetDlgItem(IDC_CHECK21)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_MIMIRPOTION3, g_wLanguageID);
	GetDlgItem(IDC_CHECK22)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_MIMIRPOTION4, g_wLanguageID);
	GetDlgItem(IDC_CHECK23)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_MIMIRPOTION5, g_wLanguageID);
	GetDlgItem(IDC_CHECK24)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60425, g_wLanguageID);
	GetDlgItem(IDC_CHECK25)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60426, g_wLanguageID);
	GetDlgItem(IDC_CHECK26)->SetWindowText(strLabel);
}


void CScheduleBuy::OnEnablePaper1()
{
	UpdateData();

	GetDlgItem(IDC_EDIT3)->EnableWindow(m_bPaperBuy[0]);
}



void CScheduleBuy::OnEnablePaper2()
{
	UpdateData();

	GetDlgItem(IDC_EDIT4)->EnableWindow(m_bPaperBuy[1]);
}


void CScheduleBuy::OnEnablePaper3()
{
	UpdateData();

	GetDlgItem(IDC_EDIT5)->EnableWindow(m_bPaperBuy[2]);
}


void CScheduleBuy::OnEnablePaper4()
{
	UpdateData();

	GetDlgItem(IDC_EDIT6)->EnableWindow(m_bPaperBuy[3]);
}


void CScheduleBuy::OnSkillGold()
{
	UpdateData();

	GetDlgItem(IDC_EDIT7)->EnableWindow(m_bSkillGold);
}



void CScheduleBuy::OnAddPotionItem()
{
	CItemBuy dlgItem;
	if(dlgItem.DoModal() != IDOK)
		return;

	for(int i = 0; i < m_lstPotion.GetItemCount(); i++)
	{
		if(!m_lstPotion.GetItemText(i, 2).Compare(dlgItem.m_szName.GetBuffer()))
			return;
	}

	WCHAR szTmp[MAX_NAME];

	m_lstPotion.InsertItem(m_lstPotion.GetItemCount(), L"");

	swprintf(szTmp, L"%d", m_lstPotion.GetItemCount());
	m_lstPotion.SetItemText(m_lstPotion.GetItemCount() - 1, 1, szTmp);

	m_lstPotion.SetItemText(m_lstPotion.GetItemCount() - 1, 2, dlgItem.m_szName.GetBuffer());

	swprintf(szTmp, L"%d", dlgItem.m_nCurCount);
	m_lstPotion.SetItemText(m_lstPotion.GetItemCount() - 1, 3, szTmp);

	swprintf(szTmp, L"%d", dlgItem.m_nTarCount);
	m_lstPotion.SetItemText(m_lstPotion.GetItemCount() - 1, 4, szTmp);

	m_lstPotion.SetCheck(m_lstPotion.GetItemCount() - 1);
}


void CScheduleBuy::OnDelPotionItem()
{
	POSITION Pos = m_lstPotion.GetFirstSelectedItemPosition();
	if(Pos == NULL)
		return;

	CString strLabel;
	strLabel.LoadString(NULL, IDS_REALLYDELETE, g_wLanguageID);

	CString strNotice;
	strNotice.LoadString(NULL, IDS_NOTICE, g_wLanguageID);

	if(MessageBox(strLabel.GetBuffer(), strNotice.GetBuffer(), MB_YESNO) != IDYES)
		return;

	int nIndex = m_lstPotion.GetNextSelectedItem(Pos);
	m_lstPotion.DeleteItem(nIndex);

	WCHAR szTmp[MAX_NAME];
	for(int i = nIndex; i < m_lstPotion.GetItemCount(); i++)
	{
		swprintf(szTmp, L"%d", i + 1);
		m_lstPotion.SetItemText(i, 1, szTmp);
	}
}


void CScheduleBuy::OnChangePotionItem(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMITEMACTIVATE pNMItemActivate = reinterpret_cast<LPNMITEMACTIVATE>(pNMHDR);
	if(pNMItemActivate->iItem < 0)
		return;

	CItemBuy dlgItem;
	
	dlgItem.m_szName = m_lstPotion.GetItemText(pNMItemActivate->iItem, 2);
	dlgItem.m_nCurCount = _wtoi(m_lstPotion.GetItemText(pNMItemActivate->iItem, 3).GetBuffer());
	dlgItem.m_nTarCount = _wtoi(m_lstPotion.GetItemText(pNMItemActivate->iItem, 4).GetBuffer());

	if(dlgItem.DoModal() != IDOK)
		return;

	for(int i = 0; i < m_lstPotion.GetItemCount(); i++)
	{
		if(i == pNMItemActivate->iItem)
			continue;

		if(!m_lstPotion.GetItemText(i, 2).Compare(dlgItem.m_szName.GetBuffer()))
			return;
	}

	WCHAR szTmp[MAX_NAME];
	
	m_lstPotion.SetItemText(pNMItemActivate->iItem, 2, dlgItem.m_szName.GetBuffer());

	swprintf(szTmp, L"%d", dlgItem.m_nCurCount);
	m_lstPotion.SetItemText(pNMItemActivate->iItem, 3, szTmp);

	swprintf(szTmp, L"%d", dlgItem.m_nTarCount);
	m_lstPotion.SetItemText(pNMItemActivate->iItem, 4, szTmp);
	
	*pResult = 0;
}



void CScheduleBuy::OnAddExchangeItem()
{
	CItemBuy dlgItem;
	dlgItem.m_bExpendable = FALSE;
	if(dlgItem.DoModal() != IDOK)
		return;

	for(int i = 0; i < m_lstExchange.GetItemCount(); i++)
	{
		if(!m_lstExchange.GetItemText(i, 2).Compare(dlgItem.m_szName.GetBuffer()))
			return;
	}

	WCHAR szTmp[MAX_NAME];

	m_lstExchange.InsertItem(m_lstExchange.GetItemCount(), L"");

	swprintf(szTmp, L"%d", m_lstExchange.GetItemCount());
	m_lstExchange.SetItemText(m_lstExchange.GetItemCount() - 1, 1, szTmp);

	m_lstExchange.SetItemText(m_lstExchange.GetItemCount() - 1, 2, dlgItem.m_szName.GetBuffer());

	swprintf(szTmp, L"%d", dlgItem.m_nCurCount);
	m_lstExchange.SetItemText(m_lstExchange.GetItemCount() - 1, 3, szTmp);

	swprintf(szTmp, L"%d", dlgItem.m_nTarCount);
	m_lstExchange.SetItemText(m_lstExchange.GetItemCount() - 1, 4, szTmp);

	m_lstExchange.SetCheck(m_lstExchange.GetItemCount() - 1);
}



void CScheduleBuy::OnDelExchangeItem()
{
	POSITION Pos = m_lstExchange.GetFirstSelectedItemPosition();
	if(Pos == NULL)
		return;

	CString strLabel;
	strLabel.LoadString(NULL, IDS_REALLYDELETE, g_wLanguageID);

	CString strNotice;
	strNotice.LoadString(NULL, IDS_NOTICE, g_wLanguageID);

	if(MessageBox(strLabel.GetBuffer(), strNotice.GetBuffer(), MB_YESNO) != IDYES)
		return;

	int nIndex = m_lstExchange.GetNextSelectedItem(Pos);
	m_lstExchange.DeleteItem(nIndex);

	WCHAR szTmp[MAX_NAME];
	for(int i = nIndex; i < m_lstExchange.GetItemCount(); i++)
	{
		swprintf(szTmp, L"%d", i + 1);
		m_lstExchange.SetItemText(i, 1, szTmp);
	}
}



void CScheduleBuy::OnChangeExchangeItem(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMITEMACTIVATE pNMItemActivate = reinterpret_cast<LPNMITEMACTIVATE>(pNMHDR);
	if(pNMItemActivate->iItem < 0)
		return;

	CItemBuy dlgItem;
	dlgItem.m_bExpendable = FALSE;
	dlgItem.m_szName = m_lstExchange.GetItemText(pNMItemActivate->iItem, 2);
	dlgItem.m_nCurCount = _wtoi(m_lstExchange.GetItemText(pNMItemActivate->iItem, 3).GetBuffer());
	dlgItem.m_nTarCount = _wtoi(m_lstExchange.GetItemText(pNMItemActivate->iItem, 4).GetBuffer());

	if(dlgItem.DoModal() != IDOK)
		return;

	for(int i = 0; i < m_lstExchange.GetItemCount(); i++)
	{
		if(i == pNMItemActivate->iItem)
			continue;

		if(!m_lstExchange.GetItemText(i, 2).Compare(dlgItem.m_szName.GetBuffer()))
			return;
	}

	WCHAR szTmp[MAX_NAME];

	m_lstExchange.SetItemText(pNMItemActivate->iItem, 2, dlgItem.m_szName.GetBuffer());

	swprintf(szTmp, L"%d", dlgItem.m_nCurCount);
	m_lstExchange.SetItemText(pNMItemActivate->iItem, 3, szTmp);

	swprintf(szTmp, L"%d", dlgItem.m_nTarCount);
	m_lstExchange.SetItemText(pNMItemActivate->iItem, 4, szTmp);
	
	*pResult = 0;
}


void CScheduleBuy::LoadSetting(WCHAR *szPath)
{
	WCHAR szFile[MAX_PATH];
	swprintf(szFile, L"%s\\Buy.dat", szPath);

	FILE *fp = _wfopen(szFile, L"rb");
	if(!fp)
		return;

	int nCount = 0;
	fread(&nCount, sizeof(int), 1, fp);

	m_lstPotion.DeleteAllItems();

	if(nCount > 0)
	{
		ITEM_BUY *pItemBuy = new ITEM_BUY[nCount];
		if(pItemBuy)
		{
			memset(pItemBuy, 0, sizeof(ITEM_BUY) * nCount);
			fread(pItemBuy, sizeof(ITEM_BUY), nCount, fp);

			WCHAR szTmp[MAX_NAME];
			for(int i = 0; i < nCount; i++)
			{
				m_lstPotion.InsertItem(i, L"");

				swprintf(szTmp, L"%d", i + 1);
				m_lstPotion.SetItemText(i, 1, szTmp);

				m_lstPotion.SetItemText(i, 2, pItemBuy[i].szName);

				swprintf(szTmp, L"%d", pItemBuy[i].nCurCount);
				m_lstPotion.SetItemText(i, 3, szTmp);

				swprintf(szTmp, L"%d", pItemBuy[i].nMaxCount);
				m_lstPotion.SetItemText(i, 4, szTmp);

				m_lstPotion.SetCheck(i, pItemBuy[i].bEnable);
			}

			delete[] pItemBuy;
			pItemBuy = NULL;
		}
	}

	nCount = 0;
	fread(&nCount, sizeof(int), 1, fp);

	m_lstExchange.DeleteAllItems();

	if(nCount > 0)
	{
		ITEM_BUY *pItemBuy = new ITEM_BUY[nCount];
		if(pItemBuy)
		{
			memset(pItemBuy, 0, sizeof(ITEM_BUY) * nCount);
			fread(pItemBuy, sizeof(ITEM_BUY), nCount, fp);

			WCHAR szTmp[MAX_NAME];
			for(int i = 0; i < nCount; i++)
			{
				m_lstExchange.InsertItem(i, L"");

				swprintf(szTmp, L"%d", i + 1);
				m_lstExchange.SetItemText(i, 1, szTmp);

				m_lstExchange.SetItemText(i, 2, pItemBuy[i].szName);

				swprintf(szTmp, L"%d", pItemBuy[i].nCurCount);
				m_lstExchange.SetItemText(i, 3, szTmp);

				swprintf(szTmp, L"%d", pItemBuy[i].nMaxCount);
				m_lstExchange.SetItemText(i, 4, szTmp);

				m_lstExchange.SetCheck(i, pItemBuy[i].bEnable);
			}

			delete[] pItemBuy;
			pItemBuy = NULL;
		}
	}

	BUY_SETTING m_BuySetting;
	memset(&m_BuySetting, 0, sizeof(BUY_SETTING));

	fread(&m_BuySetting, sizeof(BUY_SETTING), 1, fp);

	m_nSummonGold = m_BuySetting.nSummonGold;

	m_bSummonAvatar[0] = m_BuySetting.bSummonAvatar[0];
	m_bSummonAvatar[1] = m_BuySetting.bSummonAvatar[1];
	m_bSummonAvatar[2] = m_BuySetting.bSummonAvatar[2];

	m_bSummonRiding[0] = m_BuySetting.bSummonRiding[0];
	m_bSummonRiding[1] = m_BuySetting.bSummonRiding[1];
	m_bSummonRiding[2] = m_BuySetting.bSummonRiding[2];

	m_bSummonRune[0] = m_BuySetting.bSummonRune[0];
	m_bSummonRune[1] = m_BuySetting.bSummonRune[1];

	m_nPaperGold = m_BuySetting.nPaperGold;

	m_bPaperBuy[0] = m_BuySetting.bPaperBuy[0];
	m_bPaperBuy[1] = m_BuySetting.bPaperBuy[1];
	m_bPaperBuy[2] = m_BuySetting.bPaperBuy[2];
	m_bPaperBuy[3] = m_BuySetting.bPaperBuy[3];

	m_nPaperCount[0] = m_BuySetting.nPaperCount[0];
	m_nPaperCount[1] = m_BuySetting.nPaperCount[1];
	m_nPaperCount[2] = m_BuySetting.nPaperCount[2];
	m_nPaperCount[3] = m_BuySetting.nPaperCount[3];

	m_bCashItemBuy[0] = m_BuySetting.bCashItemBuy[0];
	m_bCashItemBuy[1] = m_BuySetting.bCashItemBuy[1];
	m_bCashItemBuy[2] = m_BuySetting.bCashItemBuy[2];

	m_nCashItemBuy[0] = m_BuySetting.nCashItemBuy[0];
	m_nCashItemBuy[1] = m_BuySetting.nCashItemBuy[1];
	m_nCashItemBuy[2] = m_BuySetting.nCashItemBuy[2];

	m_bSkillGold = m_BuySetting.bSkillGold;
	m_nSkillGold = m_BuySetting.nSkillGold;

	m_nExpendGold = m_BuySetting.nExpendGold;
	m_bBuyHighSkill = m_BuySetting.bBuyHighSkill;

	m_bWeaponType[0] = m_BuySetting.bWeaponType[0];
	m_bWeaponType[1] = m_BuySetting.bWeaponType[1];
	m_bWeaponType[2] = m_BuySetting.bWeaponType[2];

	m_bMimirPotion[0] = m_BuySetting.bMimirPotion[0];
	m_bMimirPotion[1] = m_BuySetting.bMimirPotion[1];
	m_bMimirPotion[2] = m_BuySetting.bMimirPotion[2];
	m_bMimirPotion[3] = m_BuySetting.bMimirPotion[3];
	m_bMimirPotion[4] = m_BuySetting.bMimirPotion[4];

	m_bBlessingStone[0] = m_BuySetting.bBlessingStone[0];
	m_bBlessingStone[1] = m_BuySetting.bBlessingStone[1];

	fclose(fp);

	UpdateData(FALSE);

	OnEnablePaper1();
	OnEnablePaper2();
	OnEnablePaper3();
	OnEnablePaper4();
	OnSkillGold();
	OnEnableCashBuy1();
	OnEnableCashBuy2();
	OnEnableMimir1();
}


void CScheduleBuy::SaveSetting(WCHAR *szPath)
{
	WCHAR szFile[MAX_PATH];
	swprintf(szFile, L"%s\\Buy.dat", szPath);

	FILE *fp = _wfopen(szFile, L"wb");
	if(!fp)
		return;

	UpdateData();

	int nCount = m_lstPotion.GetItemCount();
	fwrite(&nCount, sizeof(int), 1, fp);

	if(nCount > 0)
	{
		ITEM_BUY *pItemBuy = new ITEM_BUY[nCount];
		if(pItemBuy)
		{
			memset(pItemBuy, 0, sizeof(ITEM_BUY) * nCount);

			for(int i = 0; i < nCount; i++)
			{
				wcscpy(pItemBuy[i].szName, m_lstPotion.GetItemText(i, 2).GetBuffer());				

				pItemBuy[i].nCurCount = _wtoi(m_lstPotion.GetItemText(i, 3).GetBuffer());
				pItemBuy[i].nMaxCount = _wtoi(m_lstPotion.GetItemText(i, 4).GetBuffer());
				pItemBuy[i].bEnable = m_lstPotion.GetCheck(i);
			}

			fwrite(pItemBuy, sizeof(ITEM_BUY), nCount, fp);

			delete[] pItemBuy;
			pItemBuy = NULL;
		}
	}

	nCount = m_lstExchange.GetItemCount();
	fwrite(&nCount, sizeof(int), 1, fp);

	if(nCount > 0)
	{
		ITEM_BUY *pItemBuy = new ITEM_BUY[nCount];
		if(pItemBuy)
		{
			memset(pItemBuy, 0, sizeof(ITEM_BUY) * nCount);
			
			for(int i = 0; i < nCount; i++)
			{
				wcscpy(pItemBuy[i].szName, m_lstExchange.GetItemText(i, 2).GetBuffer());				

				pItemBuy[i].nCurCount = _wtoi(m_lstExchange.GetItemText(i, 3).GetBuffer());
				pItemBuy[i].nMaxCount = _wtoi(m_lstExchange.GetItemText(i, 4).GetBuffer());
				pItemBuy[i].bEnable = m_lstExchange.GetCheck(i);
			}

			fwrite(pItemBuy, sizeof(ITEM_BUY), nCount, fp);

			delete[] pItemBuy;
			pItemBuy = NULL;
		}
	}

	BUY_SETTING m_BuySetting;
	memset(&m_BuySetting, 0, sizeof(BUY_SETTING));

	m_BuySetting.nSummonGold = m_nSummonGold;

	m_BuySetting.bSummonAvatar[0] = m_bSummonAvatar[0];
	m_BuySetting.bSummonAvatar[1] = m_bSummonAvatar[1];
	m_BuySetting.bSummonAvatar[2] = m_bSummonAvatar[2];

	m_BuySetting.bSummonRiding[0] = m_bSummonRiding[0];
	m_BuySetting.bSummonRiding[1] = m_bSummonRiding[1];
	m_BuySetting.bSummonRiding[2] = m_bSummonRiding[2];

	m_BuySetting.bSummonRune[0] = m_bSummonRune[0];
	m_BuySetting.bSummonRune[1] = m_bSummonRune[1];

	m_BuySetting.nPaperGold = m_nPaperGold;

	m_BuySetting.bPaperBuy[0] = m_bPaperBuy[0];
	m_BuySetting.bPaperBuy[1] = m_bPaperBuy[1];
	m_BuySetting.bPaperBuy[2] = m_bPaperBuy[2];
	m_BuySetting.bPaperBuy[3] = m_bPaperBuy[3];

	m_BuySetting.nPaperCount[0] = m_nPaperCount[0];
	m_BuySetting.nPaperCount[1] = m_nPaperCount[1];
	m_BuySetting.nPaperCount[2] = m_nPaperCount[2];
	m_BuySetting.nPaperCount[3] = m_nPaperCount[3];

	m_BuySetting.bCashItemBuy[0] = m_bCashItemBuy[0];
	m_BuySetting.bCashItemBuy[1] = m_bCashItemBuy[1];
	m_BuySetting.bCashItemBuy[2] = m_bCashItemBuy[2];

	m_BuySetting.nCashItemBuy[0] = m_nCashItemBuy[0];
	m_BuySetting.nCashItemBuy[1] = m_nCashItemBuy[1];
	m_BuySetting.nCashItemBuy[2] = m_nCashItemBuy[2];

	m_BuySetting.bSkillGold = m_bSkillGold;
	m_BuySetting.nSkillGold = m_nSkillGold;

	m_BuySetting.nExpendGold = m_nExpendGold;
	m_BuySetting.bBuyHighSkill = m_bBuyHighSkill;

	m_BuySetting.bWeaponType[0] = m_bWeaponType[0];
	m_BuySetting.bWeaponType[1] = m_bWeaponType[1];
	m_BuySetting.bWeaponType[2] = m_bWeaponType[2];

	m_BuySetting.bMimirPotion[0] = m_bMimirPotion[0];
	m_BuySetting.bMimirPotion[1] = m_bMimirPotion[1];
	m_BuySetting.bMimirPotion[2] = m_bMimirPotion[2];
	m_BuySetting.bMimirPotion[3] = m_bMimirPotion[3];
	m_BuySetting.bMimirPotion[4] = m_bMimirPotion[4];

	m_BuySetting.bBlessingStone[0] = m_bBlessingStone[0];
	m_BuySetting.bBlessingStone[1] = m_bBlessingStone[1];

	fwrite(&m_BuySetting, sizeof(BUY_SETTING), 1, fp);
	fclose(fp);
}

void CScheduleBuy::OnEnableCashBuy1()
{
	UpdateData();

	GetDlgItem(IDC_EDIT9)->EnableWindow(m_bCashItemBuy[0]);
}


void CScheduleBuy::OnEnableCashBuy2()
{
	UpdateData();

	GetDlgItem(IDC_EDIT10)->EnableWindow(m_bCashItemBuy[1]);
}


void CScheduleBuy::OnEnableMimir1()
{
	UpdateData();

	GetDlgItem(IDC_CHECK21)->EnableWindow(m_bMimirPotion[0]);

	if (!m_bMimirPotion[0])
	{
		GetDlgItem(IDC_CHECK22)->EnableWindow(m_bMimirPotion[0]);
		GetDlgItem(IDC_CHECK23)->EnableWindow(m_bMimirPotion[0]);
		GetDlgItem(IDC_CHECK24)->EnableWindow(m_bMimirPotion[0]);
	}
	else
		OnEnableMimir2();
}


void CScheduleBuy::OnEnableMimir2()
{
	UpdateData();

	GetDlgItem(IDC_CHECK22)->EnableWindow(m_bMimirPotion[1]);

	if (!m_bMimirPotion[1])
	{
		GetDlgItem(IDC_CHECK23)->EnableWindow(m_bMimirPotion[1]);
		GetDlgItem(IDC_CHECK24)->EnableWindow(m_bMimirPotion[1]);
	}
	else
		OnEnableMimir3();
}


void CScheduleBuy::OnEnableMimir3()
{
	UpdateData();

	GetDlgItem(IDC_CHECK23)->EnableWindow(m_bMimirPotion[2]);

	if (!m_bMimirPotion[2])
	{
		GetDlgItem(IDC_CHECK24)->EnableWindow(m_bMimirPotion[2]);
	}
	else
		OnEnableMimir4();
}


void CScheduleBuy::OnEnableMimir4()
{
	UpdateData();

	GetDlgItem(IDC_CHECK24)->EnableWindow(m_bMimirPotion[3]);
}
