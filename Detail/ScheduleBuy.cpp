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
	, m_nSummonGold(2000000)
	, m_nScrollGold(1000000)
	, m_nPotionGold(500000)
	, m_bBulk(FALSE)
	, m_bBuySkillGold(TRUE)
	, m_nBuySkillGold(500000)
	, m_bBuyRareSkill(FALSE)
	, m_nCristalGold(1000000)
	, m_bCristalBox(FALSE)
	, m_nCristalBox(2)
	, m_bCristalPet1(FALSE)
	, m_bCristalPet2(TRUE)
	, m_nOtherGold(2000000)
	, m_bEquipBox(FALSE)
	, m_nEquipBox(5)
{
	m_bSummonCostume[0] = m_bSummonCostume[1] = m_bSummonCostume[2] = TRUE;
	m_bSummonPet[0] = m_bSummonPet[1] = m_bSummonPet[2] = TRUE;
	m_bSummonMonster[0] = m_bSummonMonster[1] = m_bSummonMonster[2] = FALSE;
	m_bSummonEvent = TRUE;

	m_bScrollBuy[0] = TRUE;	m_nScrollBuy[0] = 5;
	m_bScrollBuy[1] = TRUE;	m_nScrollBuy[1] = 5;
	m_bScrollElven = FALSE; m_nScrollElven = 5;
}

CScheduleBuy::~CScheduleBuy()
{
}

void CScheduleBuy::DoDataExchange(CDataExchange* pDX)
{
	DDX_Text(pDX, IDC_EDIT_SUMMONGOLD, m_nSummonGold);
	DDX_Check(pDX, IDC_CHECK_SUMMONCOSTUME1, m_bSummonCostume[0]);
	DDX_Check(pDX, IDC_CHECK_SUMMONCOSTUME2, m_bSummonCostume[1]);
	DDX_Check(pDX, IDC_CHECK_SUMMONCOSTUME3, m_bSummonCostume[2]);
	DDX_Check(pDX, IDC_CHECK_SUMMONPET1, m_bSummonPet[0]);
	DDX_Check(pDX, IDC_CHECK_SUMMONPET2, m_bSummonPet[1]);
	DDX_Check(pDX, IDC_CHECK_SUMMONPET3, m_bSummonPet[2]);
	DDX_Check(pDX, IDC_CHECK_SUMMONMONSTER1, m_bSummonMonster[0]);
	DDX_Check(pDX, IDC_CHECK_SUMMONMONSTER2, m_bSummonMonster[1]);
	DDX_Check(pDX, IDC_CHECK_SUMMONMONSTER3, m_bSummonMonster[2]);
	DDX_Check(pDX, IDC_CHECK_SUMMONEVENT, m_bSummonEvent);
	DDX_Text(pDX, IDC_EDIT_SCROLLGOLD, m_nScrollGold);
	DDX_Check(pDX, IDC_CHECK_SCROLLWEAPON, m_bScrollBuy[0]);
	DDX_Text(pDX, IDC_EDIT_SCROLLWEAPONCOUNT, m_nScrollBuy[0]);
	DDX_Check(pDX, IDC_CHECK_SCROLLARMOR, m_bScrollBuy[1]);
	DDX_Text(pDX, IDC_EDIT_SCROLLARMORCOUNT, m_nScrollBuy[1]);
	DDX_Check(pDX, IDC_CHECK_SCROLLELVEN, m_bScrollElven);
	DDX_Text(pDX, IDC_EDIT_SCROLLELVENCOUNT, m_nScrollElven);
	DDX_Text(pDX, IDC_EDIT_POTIONGOLD, m_nPotionGold);
	DDX_Control(pDX, IDC_LIST_POTION, m_lstPotion);
	DDX_Check(pDX, IDC_CHECK_BULK, m_bBulk);
	DDX_Control(pDX, IDC_LIST_EXCHANGE, m_lstExchange);
	DDX_Check(pDX, IDC_CHECK_BUYSKILLGOLD, m_bBuySkillGold);
	DDX_Text(pDX, IDC_EDIT_BUYSKILLGOLD, m_nBuySkillGold);
	DDX_Check(pDX, IDC_CHECK_BUYRARESKILL, m_bBuyRareSkill);
	DDX_Text(pDX, IDC_EDIT_CRISTALGOLD, m_nCristalGold);
	DDX_Check(pDX, IDC_CHECK_CRISTALBOX, m_bCristalBox);
	DDX_Text(pDX, IDC_EDIT_CRISTALBOX, m_nCristalBox);
	DDX_Check(pDX, IDC_CHECK_CRISTALPET1, m_bCristalPet1);
	DDX_Check(pDX, IDC_CHECK_CRISTALPET2, m_bCristalPet2);
	DDX_Text(pDX, IDC_EDIT_OTHERGOLD, m_nOtherGold);
	DDX_Check(pDX, IDC_CHECK_EQUIPBOX, m_bEquipBox);
	DDX_Text(pDX, IDC_EDIT_EQUIPBOX, m_nEquipBox);
}


BEGIN_MESSAGE_MAP(CScheduleBuy, CDialog)
	ON_BN_CLICKED(IDC_CHECK_SCROLLWEAPON, &CScheduleBuy::OnBnClickedCheckScrollweapon)
	ON_BN_CLICKED(IDC_CHECK_SCROLLARMOR, &CScheduleBuy::OnBnClickedCheckScrollarmor)
	ON_BN_CLICKED(IDC_CHECK_SCROLLELVEN, &CScheduleBuy::OnBnClickedCheckScrollelven)
	ON_BN_CLICKED(IDC_CHECK_CRISTALBOX, &CScheduleBuy::OnBnClickedCheckCristalbox)
	ON_BN_CLICKED(IDC_CHECK_EQUIPBOX, &CScheduleBuy::OnBnClickedCheckEquipbox)
	ON_BN_CLICKED(IDC_CHECK_BUYSKILLGOLD, &CScheduleBuy::OnBnClickedCheckBuyskillgold)
	ON_BN_CLICKED(IDC_BTN_ADDPOTIONITEM, &CScheduleBuy::OnAddPotionItem)
	ON_BN_CLICKED(IDC_BTN_DELPOTIONITEM, &CScheduleBuy::OnDelPotionItem)
	ON_NOTIFY(NM_DBLCLK, IDC_LIST_POTION, &CScheduleBuy::OnChangePotionItem)
	ON_BN_CLICKED(IDC_BTN_ADDEXCHANGEITEM, &CScheduleBuy::OnAddExchangeItem)
	ON_BN_CLICKED(IDC_BTN_DELEXCHANGEITEM, &CScheduleBuy::OnDelExchangeItem)
	ON_NOTIFY(NM_DBLCLK, IDC_LIST_EXCHANGE, &CScheduleBuy::OnChangeExchangeItem)
END_MESSAGE_MAP()


// CScheduleBuy message handlers

BOOL CScheduleBuy::OnInitDialog()
{
	CDialog::OnInitDialog();

	SetControlText();


	m_lstPotion.SetExtendedStyle(m_lstPotion.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES | LVS_EX_CHECKBOXES);
	m_lstPotion.InsertColumn(0, L"", LVCFMT_LEFT, 20);
	m_lstPotion.InsertColumn(1, L"No", LVCFMT_LEFT, 25);

	CString sLabel;
	sLabel.LoadString(NULL, IDS_ITEM, g_wLanguageID);
	m_lstPotion.InsertColumn(2, sLabel.GetBuffer(), LVCFMT_LEFT, 115);

	sLabel.LoadString(NULL, IDS_CURCOUNT, g_wLanguageID);
	m_lstPotion.InsertColumn(3, sLabel.GetBuffer(), LVCFMT_LEFT, 40);

	sLabel.LoadString(NULL, IDS_TARCOUNT, g_wLanguageID);
	m_lstPotion.InsertColumn(4, sLabel.GetBuffer(), LVCFMT_LEFT, 40);


	m_lstExchange.SetExtendedStyle(m_lstExchange.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES | LVS_EX_CHECKBOXES);
	m_lstExchange.InsertColumn(0, L"", LVCFMT_LEFT, 20);
	m_lstExchange.InsertColumn(1, L"No", LVCFMT_LEFT, 25);

	sLabel.LoadString(NULL, IDS_ITEM, g_wLanguageID);
	m_lstExchange.InsertColumn(2, sLabel.GetBuffer(), LVCFMT_LEFT, 115);

	sLabel.LoadString(NULL, IDS_CURCOUNT, g_wLanguageID);
	m_lstExchange.InsertColumn(3, sLabel.GetBuffer(), LVCFMT_LEFT, 40);

	sLabel.LoadString(NULL, IDS_TARCOUNT, g_wLanguageID);
	m_lstExchange.InsertColumn(4, sLabel.GetBuffer(), LVCFMT_LEFT, 40);


	UpdateData(FALSE);

	OnBnClickedCheckScrollweapon();
	OnBnClickedCheckScrollarmor();
	OnBnClickedCheckScrollelven();
	OnBnClickedCheckCristalbox();
	OnBnClickedCheckEquipbox();
	OnBnClickedCheckBuyskillgold();

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
	CString sLabel;

	if (g_wLanguageID != 0x412)
	{
		GetDlgItem(IDC_STATIC1)->SetWindowTextW(L"钻石商店");
		GetDlgItem(IDC_STATIC2)->SetWindowTextW(L"金币以上时");
		GetDlgItem(IDC_CHECK_SUMMONCOSTUME1)->SetWindowTextW(L"时装召唤 I");
		GetDlgItem(IDC_CHECK_SUMMONCOSTUME2)->SetWindowTextW(L"时装召唤 II");
		GetDlgItem(IDC_CHECK_SUMMONCOSTUME3)->SetWindowTextW(L"时装召唤 III");
		GetDlgItem(IDC_CHECK_SUMMONPET1)->SetWindowTextW(L"宠物召唤 I");
		GetDlgItem(IDC_CHECK_SUMMONPET2)->SetWindowTextW(L"宠物召唤 II");
		GetDlgItem(IDC_CHECK_SUMMONPET3)->SetWindowTextW(L"宠物召唤 III");
		GetDlgItem(IDC_CHECK_SUMMONMONSTER1)->SetWindowTextW(L"怪物召唤 I");
		GetDlgItem(IDC_CHECK_SUMMONMONSTER2)->SetWindowTextW(L"怪物召唤 II");
		GetDlgItem(IDC_CHECK_SUMMONMONSTER3)->SetWindowTextW(L"怪物召唤 III");
		GetDlgItem(IDC_CHECK_SUMMONEVENT)->SetWindowTextW(L"金币活动");
		GetDlgItem(IDC_STATIC3)->SetWindowTextW(L"金币以上时");
		GetDlgItem(IDC_CHECK_SCROLLWEAPON)->SetWindowTextW(L"武器卷");
		GetDlgItem(IDC_CHECK_SCROLLARMOR)->SetWindowTextW(L"防御卷");
		GetDlgItem(IDC_CHECK_SCROLLELVEN)->SetWindowTextW(L"精灵卷轴");
		GetDlgItem(IDC_STATIC8)->SetWindowTextW(L"个买");
		GetDlgItem(IDC_STATIC9)->SetWindowTextW(L"个买");
		GetDlgItem(IDC_STATIC10)->SetWindowTextW(L"个买");
		GetDlgItem(IDC_STATIC4)->SetWindowTextW(L"水药商店");
		GetDlgItem(IDC_STATIC5)->SetWindowTextW(L"金币以上时");
		GetDlgItem(IDC_CHECK_BULK)->SetWindowTextW(L"指定购买");
		GetDlgItem(IDC_BTN_ADDPOTIONITEM)->SetWindowTextW(L"添加");
		GetDlgItem(IDC_BTN_DELPOTIONITEM)->SetWindowTextW(L"删掉");
		GetDlgItem(IDC_STATIC6)->SetWindowTextW(L"交换商店");
		GetDlgItem(IDC_BTN_ADDEXCHANGEITEM)->SetWindowTextW(L"添加");
		GetDlgItem(IDC_BTN_DELEXCHANGEITEM)->SetWindowTextW(L"删掉");
		GetDlgItem(IDC_CHECK_BUYSKILLGOLD)->SetWindowTextW(L"留下");
		GetDlgItem(IDC_STATIC7)->SetWindowTextW(L"金币, 购买技能");
		GetDlgItem(IDC_CHECK_BUYRARESKILL)->SetWindowTextW(L"购买蓝色技能");

		GetDlgItem(IDC_STATIC_CRISTALGOLD)->SetWindowTextW(L"金币以上时");
		GetDlgItem(IDC_CHECK_CRISTALBOX)->SetWindowTextW(L"水晶随机宝箱");
		GetDlgItem(IDC_STATIC_CRISTALBOX)->SetWindowTextW(L"个买");
		GetDlgItem(IDC_CHECK_CRISTALPET1)->SetWindowTextW(L"顶级宠物召唤1次");
		GetDlgItem(IDC_CHECK_CRISTALPET2)->SetWindowTextW(L"顶级宠物召唤11次");

		GetDlgItem(IDC_STATIC_OTHERGOLD)->SetWindowTextW(L"金币以上时");
		GetDlgItem(IDC_CHECK_EQUIPBOX)->SetWindowTextW(L"普通装备宝箱");
		GetDlgItem(IDC_STATIC_EQUIPBOX)->SetWindowTextW(L"个买");
	}
}


void CScheduleBuy::LoadSetting(WCHAR* szPath)
{
	FILE* fp;
	WCHAR szFile[MAX_PATH];

	swprintf_s(szFile, L"%s\\Buy.dat", szPath);
	_wfopen_s(&fp, szFile, L"rb");
	if (fp)
	{
		int nCount = 0;
		fread(&nCount, sizeof(int), 1, fp);

		m_lstPotion.DeleteAllItems();

		if (nCount > 0)
		{
			ITEM_BUY_W* pItemBuy = new ITEM_BUY_W[nCount];
			if (pItemBuy)
			{
				memset(pItemBuy, 0, sizeof(ITEM_BUY_W) * nCount);
				fread(pItemBuy, sizeof(ITEM_BUY_W), nCount, fp);

				WCHAR szTemp[MAX_NAME];
				for (int i = 0; i < nCount; i++)
				{
					m_lstPotion.InsertItem(i, L"");

					swprintf_s(szTemp, L"%d", i + 1);
					m_lstPotion.SetItemText(i, 1, szTemp);

					m_lstPotion.SetItemText(i, 2, pItemBuy[i].szName);

					swprintf_s(szTemp, L"%d", pItemBuy[i].nCurCount);
					m_lstPotion.SetItemText(i, 3, szTemp);

					swprintf_s(szTemp, L"%d", pItemBuy[i].nMaxCount);
					m_lstPotion.SetItemText(i, 4, szTemp);

					m_lstPotion.SetCheck(i, pItemBuy[i].bEnable);
				}

				delete[] pItemBuy;
				pItemBuy = NULL;
			}
		}

		nCount = 0;
		fread(&nCount, sizeof(int), 1, fp);

		m_lstExchange.DeleteAllItems();

		if (nCount > 0)
		{
			ITEM_BUY_W* pItemBuy = new ITEM_BUY_W[nCount];
			if (pItemBuy)
			{
				memset(pItemBuy, 0, sizeof(ITEM_BUY_W) * nCount);
				fread(pItemBuy, sizeof(ITEM_BUY_W), nCount, fp);

				WCHAR szTemp[MAX_NAME];
				for (int i = 0; i < nCount; i++)
				{
					m_lstExchange.InsertItem(i, L"");

					swprintf_s(szTemp, L"%d", i + 1);
					m_lstExchange.SetItemText(i, 1, szTemp);

					m_lstExchange.SetItemText(i, 2, pItemBuy[i].szName);

					swprintf_s(szTemp, L"%d", pItemBuy[i].nCurCount);
					m_lstExchange.SetItemText(i, 3, szTemp);

					swprintf_s(szTemp, L"%d", pItemBuy[i].nMaxCount);
					m_lstExchange.SetItemText(i, 4, szTemp);

					m_lstExchange.SetCheck(i, pItemBuy[i].bEnable);
				}

				delete[] pItemBuy;
				pItemBuy = NULL;
			}
		}

		BUY_SETTING m_BuySetting;
		memset(&m_BuySetting, 0, sizeof(BUY_SETTING));
		fread(&m_BuySetting, sizeof(BUY_SETTING), 1, fp);
		fclose(fp);

		m_nSummonGold = m_BuySetting.nSummonGold;
		m_bSummonCostume[0] = m_BuySetting.bSummonCostume[0];
		m_bSummonCostume[1] = m_BuySetting.bSummonCostume[1];
		m_bSummonCostume[2] = m_BuySetting.bSummonCostume[2];
		m_bSummonPet[0] = m_BuySetting.bSummonPet[0];
		m_bSummonPet[1] = m_BuySetting.bSummonPet[1];
		m_bSummonPet[2] = m_BuySetting.bSummonPet[2];
		m_bSummonMonster[0] = m_BuySetting.bSummonMonster[0];
		m_bSummonMonster[1] = m_BuySetting.bSummonMonster[1];
		m_bSummonMonster[2] = m_BuySetting.bSummonMonster[2];
		m_bSummonEvent = m_BuySetting.bSummonEvent;

		m_nScrollGold = m_BuySetting.nScrollGold;
		m_bScrollBuy[0] = m_BuySetting.bScrollBuy[0];
		m_bScrollBuy[1] = m_BuySetting.bScrollBuy[1];
		m_nScrollBuy[0] = m_BuySetting.nScrollBuy[0];
		m_nScrollBuy[1] = m_BuySetting.nScrollBuy[1];
		m_bScrollElven = m_BuySetting.bScrollElven;
		m_nScrollElven = m_BuySetting.nScrollElven;

		m_nPotionGold = m_BuySetting.nPotionGold;
		m_bBulk = m_BuySetting.bBulk;

		m_bBuySkillGold = m_BuySetting.bBuySkillGold;
		m_nBuySkillGold = m_BuySetting.nBuySkillGold;
		m_bBuyRareSkill = m_BuySetting.bBuyRareSkill;

		m_nCristalGold = m_BuySetting.nCristalGold;
		m_bCristalBox = m_BuySetting.bCristalBox;
		m_nCristalBox = m_BuySetting.nCristalBox;
		m_bCristalPet1 = m_BuySetting.bCristalPet1;
		m_bCristalPet2 = m_BuySetting.bCristalPet2;

		m_nOtherGold = m_BuySetting.nOtherGold;
		m_bEquipBox = m_BuySetting.bEquipBox;
		m_nEquipBox = m_BuySetting.nEquipBox;


		UpdateData(FALSE);

		OnBnClickedCheckScrollweapon();
		OnBnClickedCheckScrollarmor();
		OnBnClickedCheckScrollelven();
		OnBnClickedCheckCristalbox();
		OnBnClickedCheckEquipbox();
		OnBnClickedCheckBuyskillgold();
	}
}


void CScheduleBuy::SaveSetting(WCHAR* szPath)
{
	FILE* fp;
	WCHAR szFile[MAX_PATH];

	swprintf_s(szFile, L"%s\\Buy.dat", szPath);
	_wfopen_s(&fp, szFile, L"wb");
	if (fp)
	{
		UpdateData(TRUE);

		int nCount = m_lstPotion.GetItemCount();
		fwrite(&nCount, sizeof(int), 1, fp);

		if (nCount > 0)
		{
			ITEM_BUY_W* pItemBuy = new ITEM_BUY_W[nCount];
			if (pItemBuy)
			{
				memset(pItemBuy, 0, sizeof(ITEM_BUY_W) * nCount);

				for (int i = 0; i < nCount; i++)
				{
					wcscpy(pItemBuy[i].szName, m_lstPotion.GetItemText(i, 2).GetBuffer());

					pItemBuy[i].nCurCount = _wtoi(m_lstPotion.GetItemText(i, 3).GetBuffer());
					pItemBuy[i].nMaxCount = _wtoi(m_lstPotion.GetItemText(i, 4).GetBuffer());
					pItemBuy[i].bEnable = m_lstPotion.GetCheck(i);
				}

				fwrite(pItemBuy, sizeof(ITEM_BUY_W), nCount, fp);

				delete[] pItemBuy;
				pItemBuy = NULL;
			}
		}

		nCount = m_lstExchange.GetItemCount();
		fwrite(&nCount, sizeof(int), 1, fp);

		if (nCount > 0)
		{
			ITEM_BUY_W* pItemBuy = new ITEM_BUY_W[nCount];
			if (pItemBuy)
			{
				memset(pItemBuy, 0, sizeof(ITEM_BUY_W) * nCount);

				for (int i = 0; i < nCount; i++)
				{
					wcscpy(pItemBuy[i].szName, m_lstExchange.GetItemText(i, 2).GetBuffer());

					pItemBuy[i].nCurCount = _wtoi(m_lstExchange.GetItemText(i, 3).GetBuffer());
					pItemBuy[i].nMaxCount = _wtoi(m_lstExchange.GetItemText(i, 4).GetBuffer());
					pItemBuy[i].bEnable = m_lstExchange.GetCheck(i);
				}

				fwrite(pItemBuy, sizeof(ITEM_BUY_W), nCount, fp);

				delete[] pItemBuy;
				pItemBuy = NULL;
			}
		}

		BUY_SETTING m_BuySetting;
		memset(&m_BuySetting, 0, sizeof(BUY_SETTING));

		m_BuySetting.nSummonGold = m_nSummonGold;
		m_BuySetting.bSummonCostume[0] = m_bSummonCostume[0];
		m_BuySetting.bSummonCostume[1] = m_bSummonCostume[1];
		m_BuySetting.bSummonCostume[2] = m_bSummonCostume[2];
		m_BuySetting.bSummonPet[0] = m_bSummonPet[0];
		m_BuySetting.bSummonPet[1] = m_bSummonPet[1];
		m_BuySetting.bSummonPet[2] = m_bSummonPet[2];
		m_BuySetting.bSummonMonster[0] = m_bSummonMonster[0];
		m_BuySetting.bSummonMonster[1] = m_bSummonMonster[1];
		m_BuySetting.bSummonMonster[2] = m_bSummonMonster[2];
		m_BuySetting.bSummonEvent = m_bSummonEvent;

		m_BuySetting.nScrollGold = m_nScrollGold;
		m_BuySetting.bScrollBuy[0] = m_bScrollBuy[0];
		m_BuySetting.bScrollBuy[1] = m_bScrollBuy[1];
		m_BuySetting.nScrollBuy[0] = m_nScrollBuy[0];
		m_BuySetting.nScrollBuy[1] = m_nScrollBuy[1];
		m_BuySetting.bScrollElven = m_bScrollElven;
		m_BuySetting.nScrollElven = m_nScrollElven;

		m_BuySetting.nPotionGold = m_nPotionGold;
		m_BuySetting.bBulk = m_bBulk;

		m_BuySetting.bBuySkillGold = m_bBuySkillGold;
		m_BuySetting.nBuySkillGold = m_nBuySkillGold;
		m_BuySetting.bBuyRareSkill = m_bBuyRareSkill;

		m_BuySetting.nCristalGold = m_nCristalGold;
		m_BuySetting.bCristalBox = m_bCristalBox;
		m_BuySetting.nCristalBox = m_nCristalBox;
		m_BuySetting.bCristalPet1 = m_bCristalPet1;
		m_BuySetting.bCristalPet2 = m_bCristalPet2;

		m_BuySetting.nOtherGold = m_nOtherGold;
		m_BuySetting.bEquipBox = m_bEquipBox;
		m_BuySetting.nEquipBox = m_nEquipBox;

		fwrite(&m_BuySetting, sizeof(BUY_SETTING), 1, fp);
		fclose(fp);
	}
}


void CScheduleBuy::OnBnClickedCheckScrollweapon()
{
	UpdateData(TRUE);

	GetDlgItem(IDC_EDIT_SCROLLWEAPONCOUNT)->EnableWindow(m_bScrollBuy[0]);
}


void CScheduleBuy::OnBnClickedCheckScrollarmor()
{
	UpdateData(TRUE);

	GetDlgItem(IDC_EDIT_SCROLLARMORCOUNT)->EnableWindow(m_bScrollBuy[1]);
}


void CScheduleBuy::OnBnClickedCheckScrollelven()
{
	UpdateData(TRUE);

	GetDlgItem(IDC_EDIT_SCROLLELVENCOUNT)->EnableWindow(m_bScrollElven);
}


void CScheduleBuy::OnBnClickedCheckCristalbox()
{
	UpdateData(TRUE);

	GetDlgItem(IDC_EDIT_CRISTALBOX)->EnableWindow(m_bCristalBox);
}


void CScheduleBuy::OnBnClickedCheckEquipbox()
{
	UpdateData(TRUE);

	GetDlgItem(IDC_EDIT_EQUIPBOX)->EnableWindow(m_bEquipBox);
}


void CScheduleBuy::OnBnClickedCheckBuyskillgold()
{
	UpdateData(TRUE);

	GetDlgItem(IDC_EDIT_BUYSKILLGOLD)->EnableWindow(m_bBuySkillGold);
	GetDlgItem(IDC_CHECK_BUYRARESKILL)->EnableWindow(m_bBuySkillGold);
}


void CScheduleBuy::OnAddPotionItem()
{
	CItemBuy dlgItem;
	dlgItem.m_bPotion = TRUE;
	if (dlgItem.DoModal() != IDOK)
		return;

	for (int i = 0; i < m_lstPotion.GetItemCount(); i++)
	{
		if (!m_lstPotion.GetItemText(i, 2).Compare(dlgItem.m_szName.GetBuffer()))
			return;
	}

	WCHAR szTemp[MAX_NAME];

	m_lstPotion.InsertItem(m_lstPotion.GetItemCount(), L"");

	swprintf_s(szTemp, L"%d", m_lstPotion.GetItemCount());
	m_lstPotion.SetItemText(m_lstPotion.GetItemCount() - 1, 1, szTemp);

	m_lstPotion.SetItemText(m_lstPotion.GetItemCount() - 1, 2, dlgItem.m_szName.GetBuffer());

	swprintf_s(szTemp, L"%d", dlgItem.m_nCurCount);
	m_lstPotion.SetItemText(m_lstPotion.GetItemCount() - 1, 3, szTemp);

	swprintf_s(szTemp, L"%d", dlgItem.m_nTarCount);
	m_lstPotion.SetItemText(m_lstPotion.GetItemCount() - 1, 4, szTemp);

	m_lstPotion.SetCheck(m_lstPotion.GetItemCount() - 1);
}


void CScheduleBuy::OnDelPotionItem()
{
	POSITION Pos = m_lstPotion.GetFirstSelectedItemPosition();
	if (Pos == NULL)
		return;

	CString sLabel;
	sLabel.LoadString(NULL, IDS_REALLYDELETE, g_wLanguageID);

	CString sNotice;
	sNotice.LoadString(NULL, IDS_NOTICE, g_wLanguageID);

	if (MessageBox(sLabel, sNotice, MB_YESNO) != IDYES)
		return;

	int nIndex = m_lstPotion.GetNextSelectedItem(Pos);
	m_lstPotion.DeleteItem(nIndex);

	WCHAR szTemp[MAX_NAME];
	for (int i = nIndex; i < m_lstPotion.GetItemCount(); i++)
	{
		swprintf_s(szTemp, L"%d", i + 1);
		m_lstPotion.SetItemText(i, 1, szTemp);
	}
}


void CScheduleBuy::OnChangePotionItem(NMHDR* pNMHDR, LRESULT* pResult)
{
	LPNMITEMACTIVATE pNMItemActivate = reinterpret_cast<LPNMITEMACTIVATE>(pNMHDR);
	if (pNMItemActivate->iItem < 0)
		return;

	CItemBuy dlgItem;

	dlgItem.m_szName = m_lstPotion.GetItemText(pNMItemActivate->iItem, 2);
	dlgItem.m_bPotion = TRUE;
	dlgItem.m_nCurCount = _wtoi(m_lstPotion.GetItemText(pNMItemActivate->iItem, 3).GetBuffer());
	dlgItem.m_nTarCount = _wtoi(m_lstPotion.GetItemText(pNMItemActivate->iItem, 4).GetBuffer());

	if (dlgItem.DoModal() != IDOK)
		return;

	for (int i = 0; i < m_lstPotion.GetItemCount(); i++)
	{
		if (i == pNMItemActivate->iItem)
			continue;

		if (!m_lstPotion.GetItemText(i, 2).Compare(dlgItem.m_szName.GetBuffer()))
			return;
	}

	WCHAR szTemp[MAX_NAME];

	m_lstPotion.SetItemText(pNMItemActivate->iItem, 2, dlgItem.m_szName.GetBuffer());

	swprintf_s(szTemp, L"%d", dlgItem.m_nCurCount);
	m_lstPotion.SetItemText(pNMItemActivate->iItem, 3, szTemp);

	swprintf_s(szTemp, L"%d", dlgItem.m_nTarCount);
	m_lstPotion.SetItemText(pNMItemActivate->iItem, 4, szTemp);

	*pResult = 0;
}


void CScheduleBuy::OnAddExchangeItem()
{
	CItemBuy dlgItem;
	dlgItem.m_bPotion = FALSE;
	if (dlgItem.DoModal() != IDOK)
		return;

	for (int i = 0; i < m_lstExchange.GetItemCount(); i++)
	{
		if (!m_lstExchange.GetItemText(i, 2).Compare(dlgItem.m_szName.GetBuffer()))
			return;
	}

	WCHAR szTemp[MAX_NAME];

	m_lstExchange.InsertItem(m_lstExchange.GetItemCount(), L"");

	swprintf_s(szTemp, L"%d", m_lstExchange.GetItemCount());
	m_lstExchange.SetItemText(m_lstExchange.GetItemCount() - 1, 1, szTemp);

	m_lstExchange.SetItemText(m_lstExchange.GetItemCount() - 1, 2, dlgItem.m_szName.GetBuffer());

	swprintf_s(szTemp, L"%d", dlgItem.m_nCurCount);
	m_lstExchange.SetItemText(m_lstExchange.GetItemCount() - 1, 3, szTemp);

	swprintf_s(szTemp, L"%d", dlgItem.m_nTarCount);
	m_lstExchange.SetItemText(m_lstExchange.GetItemCount() - 1, 4, szTemp);

	m_lstExchange.SetCheck(m_lstExchange.GetItemCount() - 1);
}


void CScheduleBuy::OnDelExchangeItem()
{
	POSITION Pos = m_lstExchange.GetFirstSelectedItemPosition();
	if (Pos == NULL)
		return;

	CString strLabel;
	strLabel.LoadString(NULL, IDS_REALLYDELETE, g_wLanguageID);

	CString strNotice;
	strNotice.LoadString(NULL, IDS_NOTICE, g_wLanguageID);

	if (MessageBox(strLabel.GetBuffer(), strNotice.GetBuffer(), MB_YESNO) != IDYES)
		return;

	int nIndex = m_lstExchange.GetNextSelectedItem(Pos);
	m_lstExchange.DeleteItem(nIndex);

	WCHAR szTemp[MAX_NAME];
	for (int i = nIndex; i < m_lstExchange.GetItemCount(); i++)
	{
		swprintf_s(szTemp, L"%d", i + 1);
		m_lstExchange.SetItemText(i, 1, szTemp);
	}
}


void CScheduleBuy::OnChangeExchangeItem(NMHDR* pNMHDR, LRESULT* pResult)
{
	LPNMITEMACTIVATE pNMItemActivate = reinterpret_cast<LPNMITEMACTIVATE>(pNMHDR);
	if (pNMItemActivate->iItem < 0)
		return;

	CItemBuy dlgItem;
	dlgItem.m_szName = m_lstExchange.GetItemText(pNMItemActivate->iItem, 2);
	dlgItem.m_bPotion = FALSE;
	dlgItem.m_nCurCount = _wtoi(m_lstExchange.GetItemText(pNMItemActivate->iItem, 3).GetBuffer());
	dlgItem.m_nTarCount = _wtoi(m_lstExchange.GetItemText(pNMItemActivate->iItem, 4).GetBuffer());

	if (dlgItem.DoModal() != IDOK)
		return;

	for (int i = 0; i < m_lstExchange.GetItemCount(); i++)
	{
		if (i == pNMItemActivate->iItem)
			continue;

		if (!m_lstExchange.GetItemText(i, 2).Compare(dlgItem.m_szName.GetBuffer()))
			return;
	}

	WCHAR szTemp[MAX_NAME];

	m_lstExchange.SetItemText(pNMItemActivate->iItem, 2, dlgItem.m_szName.GetBuffer());

	swprintf_s(szTemp, L"%d", dlgItem.m_nCurCount);
	m_lstExchange.SetItemText(pNMItemActivate->iItem, 3, szTemp);

	swprintf_s(szTemp, L"%d", dlgItem.m_nTarCount);
	m_lstExchange.SetItemText(pNMItemActivate->iItem, 4, szTemp);

	*pResult = 0;
}
