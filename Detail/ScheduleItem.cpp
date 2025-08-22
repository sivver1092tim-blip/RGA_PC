// ScheduleItem.cpp : implementation file
//

#include "stdafx.h"
#include "Detail.h"
#include "ScheduleItem.h"
#include "ItemDetail.h"


// CScheduleItem dialog

IMPLEMENT_DYNAMIC(CScheduleItem, CDialog)

CScheduleItem::CScheduleItem(CWnd* pParent /*=NULL*/)
	: CDialog(CScheduleItem::IDD, pParent)
	, m_bTradeLimitTime(FALSE)
	, m_nTradeLimitTime(48)
{

}

CScheduleItem::~CScheduleItem()
{
}

void CScheduleItem::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);

	DDX_Control(pDX, IDC_LIST1, m_lstDefault);
	DDX_Control(pDX, IDC_LIST2, m_lstDetail);
	DDX_Check(pDX, IDC_CHECK_TRADELIMITTIME, m_bTradeLimitTime);
	DDX_Text(pDX, IDC_EDIT_TRADELIMITTIME, m_nTradeLimitTime);
}


BEGIN_MESSAGE_MAP(CScheduleItem, CDialog)
	ON_MESSAGE(WM_SET_ITEMS , &CScheduleItem::PoPulateComboList)
	ON_BN_CLICKED(IDC_BUTTON1, &CScheduleItem::OnAddItemDetail)
	ON_BN_CLICKED(IDC_BUTTON2, &CScheduleItem::OnDelItemDetail)
	ON_NOTIFY(NM_DBLCLK, IDC_LIST2, &CScheduleItem::OnChangeItemDetail)
	ON_BN_CLICKED(IDC_BUTTON3, &CScheduleItem::OnSort)
	ON_BN_CLICKED(IDC_CHECK_TRADELIMITTIME, &CScheduleItem::OnBnClickedCheckTradelimittime)
	ON_NOTIFY(LVN_COLUMNCLICK, IDC_LIST2, &CScheduleItem::OnSortItemDetail)
END_MESSAGE_MAP()


// CScheduleItem message handlers

BOOL CScheduleItem::OnInitDialog()
{
	CDialog::OnInitDialog();

	CString strLabel;

	SetControlText();

	m_lstDefault.SetExtendedStyle(m_lstDefault.GetExtendedStyle() | LVS_EX_GRIDLINES | LVS_EX_FULLROWSELECT);
	m_lstDefault.InsertColumn(0, L"", LVCFMT_LEFT, 31);

	strLabel.LoadString(NULL, IDS_WEAPON, g_wLanguageID);
	m_lstDefault.InsertColumn(1, strLabel.GetBuffer(), LVCFMT_CENTER, 70);

	strLabel.LoadString(NULL, IDS_ARMOR, g_wLanguageID);
	m_lstDefault.InsertColumn(2, strLabel.GetBuffer(), LVCFMT_CENTER, 70);

	strLabel.LoadString(NULL, IDS_ACCESSORY, g_wLanguageID);
	m_lstDefault.InsertColumn(3, strLabel.GetBuffer(), LVCFMT_CENTER, 70);

	strLabel.LoadString(NULL, IDS_MATERIAL, g_wLanguageID);
	m_lstDefault.InsertColumn(4, strLabel.GetBuffer(), LVCFMT_CENTER, 70);

	strLabel.LoadString(NULL, IDS_EXPANDABLES, g_wLanguageID);
	m_lstDefault.InsertColumn(5, strLabel.GetBuffer(), LVCFMT_CENTER, 70);

	strLabel.LoadString(NULL, IDS_LOOT, g_wLanguageID);
	m_lstDefault.InsertColumn(6, strLabel.GetBuffer(), LVCFMT_CENTER, 70);

	strLabel.LoadString(NULL, IDS_SKILLBOOK, g_wLanguageID);
	m_lstDefault.InsertColumn(7, strLabel.GetBuffer(), LVCFMT_CENTER, 70);

	strLabel.LoadString(NULL, IDS_COMMON, g_wLanguageID);
	m_lstDefault.InsertItem(0, strLabel.GetBuffer());

	strLabel.LoadString(NULL, IDS_UNCOMMON, g_wLanguageID);
	m_lstDefault.InsertItem(1, strLabel.GetBuffer());

	strLabel.LoadString(NULL, IDS_RARE, g_wLanguageID);
	m_lstDefault.InsertItem(2, strLabel.GetBuffer());

	strLabel.LoadString(NULL, IDS_HERO, g_wLanguageID);
	m_lstDefault.InsertItem(3, strLabel.GetBuffer());

	strLabel.LoadString(NULL, IDS_LEGEND, g_wLanguageID);
	m_lstDefault.InsertItem(4, strLabel.GetBuffer());

	strLabel.LoadString(NULL, IDS_MYTH, g_wLanguageID);
	m_lstDefault.InsertItem(5, strLabel.GetBuffer());

	m_lstDefault.SetReadOnlyColumns(0);
	m_lstDefault.SetComboColumns(1);
	m_lstDefault.SetComboColumns(2);
	m_lstDefault.SetComboColumns(3);
	m_lstDefault.SetComboColumns(4);
	m_lstDefault.SetComboColumns(5);
	m_lstDefault.SetComboColumns(6);
	m_lstDefault.SetComboColumns(7);

	for(int i = 0; i < MAX_GRADE; i++)
	{
		for(int j = 0; j < MAX_TYPE_1; j++)
		{
			m_lstDefault.SetItemText(i, j + 1, g_szItemMode[0]);
		}
	}

	m_lstDetail.SetExtendedStyle(m_lstDetail.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES | LVS_EX_CHECKBOXES);
	m_lstDetail.InsertColumn(0, L"", LVCFMT_LEFT, 20);
	m_lstDetail.InsertColumn(1, L"No", LVCFMT_LEFT, 30);

	strLabel.LoadString(NULL, IDS_ITEM, g_wLanguageID);
	m_lstDetail.InsertColumn(2, strLabel.GetBuffer(), LVCFMT_LEFT, 313);

	strLabel.LoadString(NULL, IDS_MODE, g_wLanguageID);
	m_lstDetail.InsertColumn(3, strLabel.GetBuffer(), LVCFMT_LEFT, 70);

	m_lstDetail.InsertColumn(4, L"MarketCount", LVCFMT_LEFT, 0);
	m_lstDetail.InsertColumn(5, L"MarketMode", LVCFMT_LEFT, 0);
	m_lstDetail.InsertColumn(6, L"MarketIndex", LVCFMT_LEFT, 0);
	m_lstDetail.InsertColumn(7, L"MarketPrice", LVCFMT_LEFT, 0);

	strLabel.LoadString(NULL, IDS_STRING60375, g_wLanguageID);
	m_lstDetail.InsertColumn(8, strLabel.GetBuffer(), LVCFMT_CENTER, 70);

	m_lstDetail.InsertColumn(9, L"EnchantEnable", LVCFMT_LEFT, 0);
	m_lstDetail.InsertColumn(10, L"EnchantValue", LVCFMT_LEFT, 0);


	UpdateData(FALSE);

	OnBnClickedCheckTradelimittime();

	return TRUE;
}

BOOL CScheduleItem::PreTranslateMessage(MSG* pMsg)
{
	if (pMsg->wParam == VK_RETURN || pMsg->wParam == VK_ESCAPE)
		return TRUE;

	return CDialog::PreTranslateMessage(pMsg);
}


void CScheduleItem::SetControlText()
{
	CString strLabel;

	strLabel.LoadString(NULL, IDS_DEFAULTSETTING, g_wLanguageID);
	GetDlgItem(IDC_STATIC11)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_DETAILSETTING, g_wLanguageID);
	GetDlgItem(IDC_STATIC12)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_ADD, g_wLanguageID);
	GetDlgItem(IDC_BUTTON1)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_DEL, g_wLanguageID);
	GetDlgItem(IDC_BUTTON2)->SetWindowText(strLabel);

	strLabel.LoadString(NULL, IDS_STRING60427, g_wLanguageID);
	GetDlgItem(IDC_BUTTON3)->SetWindowText(strLabel);

	if (g_wLanguageID != 0x412)
	{
		GetDlgItem(IDC_STATIC_TRADELIMITTIME)->SetWindowTextW(L"小时后重新上架");
	}
}


void CScheduleItem::OnAddItemDetail()
{
	CItemDetail dlgItem;

	if(dlgItem.DoModal() != IDOK)
		return;

	for(int i = 0; i < m_lstDetail.GetItemCount(); i++)
	{
		if(!m_lstDetail.GetItemText(i, 2).Compare(dlgItem.m_szName.GetBuffer()))
			return;
	}

	WCHAR szTmp[MAX_NAME];

	m_lstDetail.InsertItem(m_lstDetail.GetItemCount(), L"");

	swprintf(szTmp, L"%d", m_lstDetail.GetItemCount());
	m_lstDetail.SetItemText(m_lstDetail.GetItemCount() - 1, 1, szTmp);

	m_lstDetail.SetItemText(m_lstDetail.GetItemCount() - 1, 2, dlgItem.m_szName.GetBuffer());

	m_lstDetail.SetItemText(m_lstDetail.GetItemCount() - 1, 3, g_szItemMode[dlgItem.m_nItemMode % MAX_MODE]);
	m_lstDetail.SetCheck(m_lstDetail.GetItemCount() - 1);

	if(dlgItem.m_nItemMode == ItemMode_Trade)			// 거래소인 경우 (가격모드, 묶음개수 설정하자)
	{
		swprintf(szTmp, L"%d", dlgItem.m_nMarketCount);
		m_lstDetail.SetItemText(m_lstDetail.GetItemCount() - 1, 4, szTmp);

		swprintf(szTmp, L"%d", dlgItem.m_nMarketMode);
		m_lstDetail.SetItemText(m_lstDetail.GetItemCount() - 1, 5, szTmp);

		swprintf(szTmp, L"%d", dlgItem.m_nMinimumIndex);
		m_lstDetail.SetItemText(m_lstDetail.GetItemCount() - 1, 6, szTmp);

		if(dlgItem.m_nMarketMode == 0)
			swprintf(szTmp, L"%d", dlgItem.m_nFixedPrice);
		else
		{
			if (dlgItem.m_nMinmumPrice < 0)
				dlgItem.m_nMinmumPrice = 0;

			swprintf(szTmp, L"%d", dlgItem.m_nMinmumPrice);
		}
			
		m_lstDetail.SetItemText(m_lstDetail.GetItemCount() - 1, 7, szTmp);
	}

	if ((dlgItem.m_nItemMode == ItemMode_None || dlgItem.m_nItemMode == ItemMode_Trade) && dlgItem.m_bItemEnchant && dlgItem.m_nItemEnchant > 0)
	{
		swprintf(szTmp, L"+ %d", dlgItem.m_nItemEnchant);
		m_lstDetail.SetItemText(m_lstDetail.GetItemCount() - 1, 8, szTmp);
	}
	else
	{
		m_lstDetail.SetItemText(m_lstDetail.GetItemCount() - 1, 8, L"");
	}

	swprintf(szTmp, L"%d", dlgItem.m_bItemEnchant);
	m_lstDetail.SetItemText(m_lstDetail.GetItemCount() - 1, 9, szTmp);

	swprintf(szTmp, L"%d", dlgItem.m_nItemEnchant);
	m_lstDetail.SetItemText(m_lstDetail.GetItemCount() - 1, 10, szTmp);

	m_lstDetail.SetItemData(m_lstDetail.GetItemCount() - 1, dlgItem.m_nItemMode);
}



void CScheduleItem::OnDelItemDetail()
{
	POSITION Pos = m_lstDetail.GetFirstSelectedItemPosition();
	if(Pos == NULL)
		return;

	CString strLabel;
	strLabel.LoadString(NULL, IDS_REALLYDELETE, g_wLanguageID);

	CString strNotice;
	strNotice.LoadString(NULL, IDS_NOTICE, g_wLanguageID);

	if(MessageBox(strLabel.GetBuffer(), strNotice.GetBuffer(), MB_YESNO) != IDYES)
		return;

	int nIndex = m_lstDetail.GetNextSelectedItem(Pos);
	m_lstDetail.DeleteItem(nIndex);

	WCHAR szTmp[MAX_NAME];
	for(int i = nIndex; i < m_lstDetail.GetItemCount(); i++)
	{
		swprintf(szTmp, L"%d", i + 1);
		m_lstDetail.SetItemText(i, 1, szTmp);
	}
}



void CScheduleItem::OnChangeItemDetail(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMITEMACTIVATE pNMItemActivate = reinterpret_cast<LPNMITEMACTIVATE>(pNMHDR);
	if(pNMItemActivate->iItem < 0)
		return;

	CItemDetail dlgItem;

	dlgItem.m_szName = m_lstDetail.GetItemText(pNMItemActivate->iItem , 2);

	dlgItem.m_nItemMode = (int)m_lstDetail.GetItemData(pNMItemActivate->iItem);
	
	if(dlgItem.m_nItemMode == ItemMode_Trade)
	{
		dlgItem.m_nMarketCount = _wtoi(m_lstDetail.GetItemText(pNMItemActivate->iItem, 4).GetBuffer());
		dlgItem.m_nMarketMode = _wtoi(m_lstDetail.GetItemText(pNMItemActivate->iItem, 5).GetBuffer());
		dlgItem.m_nMinimumIndex = _wtoi(m_lstDetail.GetItemText(pNMItemActivate->iItem, 6).GetBuffer());

		if(dlgItem.m_nMarketMode == 0)
			dlgItem.m_nFixedPrice = _wtoi(m_lstDetail.GetItemText(pNMItemActivate->iItem, 7).GetBuffer());
		else
			dlgItem.m_nMinmumPrice = _wtoi(m_lstDetail.GetItemText(pNMItemActivate->iItem, 7).GetBuffer());
	}

	dlgItem.m_bItemEnchant = _wtoi(m_lstDetail.GetItemText(pNMItemActivate->iItem, 9).GetBuffer());
	dlgItem.m_nItemEnchant = _wtoi(m_lstDetail.GetItemText(pNMItemActivate->iItem, 10).GetBuffer());
	
	if(dlgItem.DoModal() != IDOK)
		return;

	for(int i = 0; i < m_lstDetail.GetItemCount(); i++)
	{
		if(i == pNMItemActivate->iItem)
			continue;

		if(!m_lstDetail.GetItemText(i, 2).Compare(dlgItem.m_szName.GetBuffer()))
			return;
	}

	WCHAR szTmp[MAX_NAME];

	m_lstDetail.SetItemText(pNMItemActivate->iItem, 2, dlgItem.m_szName.GetBuffer());
	m_lstDetail.SetItemText(pNMItemActivate->iItem, 3, g_szItemMode[dlgItem.m_nItemMode % MAX_MODE]);

	if(dlgItem.m_nItemMode == ItemMode_Trade)
	{
		swprintf(szTmp, L"%d", dlgItem.m_nMarketCount);
		m_lstDetail.SetItemText(pNMItemActivate->iItem, 4, szTmp);

		swprintf(szTmp, L"%d", dlgItem.m_nMarketMode);
		m_lstDetail.SetItemText(pNMItemActivate->iItem, 5, szTmp);

		swprintf(szTmp, L"%d", dlgItem.m_nMinimumIndex);
		m_lstDetail.SetItemText(pNMItemActivate->iItem, 6, szTmp);

		if(dlgItem.m_nMarketMode == 0)
			swprintf(szTmp, L"%d", dlgItem.m_nFixedPrice);
		else
		{
			if (dlgItem.m_nMinmumPrice < 0)
				dlgItem.m_nMinmumPrice = 0;

			swprintf(szTmp, L"%d", dlgItem.m_nMinmumPrice);
		}

		m_lstDetail.SetItemText(pNMItemActivate->iItem, 7, szTmp);
	}

	if ((dlgItem.m_nItemMode == ItemMode_None || dlgItem.m_nItemMode == ItemMode_Trade) && 
		dlgItem.m_bItemEnchant && dlgItem.m_nItemEnchant > 0)
	{
		swprintf(szTmp, L"+ %d", dlgItem.m_nItemEnchant);
		m_lstDetail.SetItemText(pNMItemActivate->iItem, 8, szTmp);
	}
	else
	{
		m_lstDetail.SetItemText(pNMItemActivate->iItem, 8, L"");
	}

	swprintf(szTmp, L"%d", dlgItem.m_bItemEnchant);
	m_lstDetail.SetItemText(pNMItemActivate->iItem, 9, szTmp);

	swprintf(szTmp, L"%d", dlgItem.m_nItemEnchant);
	m_lstDetail.SetItemText(pNMItemActivate->iItem, 10, szTmp);

	m_lstDetail.SetItemData(pNMItemActivate->iItem, dlgItem.m_nItemMode);
	
	*pResult = 0;
}


void CScheduleItem::LoadSetting(WCHAR *szPath)
{
	WCHAR szFile[MAX_PATH];
	swprintf(szFile, L"%s\\Items.dat", szPath);
	
	FILE *fp = _wfopen(szFile, L"rb");
	if(!fp)
		return;

	BYTE pbDefaultMode[MAX_GRADE][MAX_TYPE_1];
	memset(pbDefaultMode, 0, MAX_GRADE * MAX_TYPE_1);

	fread(pbDefaultMode, sizeof(BYTE), MAX_GRADE * MAX_TYPE_1, fp);

	for(int i = 0; i < MAX_GRADE; i++)
	{
		for(int j = 0; j < MAX_TYPE_1; j++)
		{
			m_lstDefault.SetItemText(i, j + 1, g_szItemMode[pbDefaultMode[i][j] % MAX_MODE]);
		}
	}

	int nCount = 0;
	fread(&nCount, sizeof(int), 1, fp);

	m_lstDetail.DeleteAllItems();

	if(nCount > 0)
	{
		DETAIL_ITEM* pDetailItem = new DETAIL_ITEM[nCount];
		memset(pDetailItem, 0, sizeof(DETAIL_ITEM) * nCount);

		fread(pDetailItem, sizeof(DETAIL_ITEM), nCount, fp);

		WCHAR szTmp[MAX_NAME];
		for (int i = 0; i < nCount; i++)
		{
			m_lstDetail.InsertItem(i, L"");

			swprintf(szTmp, L"%d", i + 1);
			m_lstDetail.SetItemText(i, 1, szTmp);
			m_lstDetail.SetItemText(i, 2, pDetailItem[i].szName);
			m_lstDetail.SetItemText(i, 3, g_szItemMode[pDetailItem[i].nMode % MAX_MODE]);

			m_lstDetail.SetCheck(i, pDetailItem[i].bEnable);

			if (pDetailItem[i].nMode == ItemMode_Trade)
			{
				swprintf(szTmp, L"%d", pDetailItem[i].nMarketCount);
				m_lstDetail.SetItemText(i, 4, szTmp);

				swprintf(szTmp, L"%d", pDetailItem[i].nMarketMode);
				m_lstDetail.SetItemText(i, 5, szTmp);

				swprintf(szTmp, L"%d", pDetailItem[i].nMarketIndex);
				m_lstDetail.SetItemText(i, 6, szTmp);

				//if (pDetailItem[i].nMarketMode == 1 && pDetailItem[i].nMarketPrice < 0)
				//	pDetailItem[i].nMarketPrice = 0;

				swprintf(szTmp, L"%d", pDetailItem[i].nMarketPrice);
				m_lstDetail.SetItemText(i, 7, szTmp);
			}

			if ((pDetailItem[i].nMode == ItemMode_None || pDetailItem[i].nMode == ItemMode_Trade) && pDetailItem[i].bItemEnchant && pDetailItem[i].nItemEnchant > 0)
			{
				swprintf(szTmp, L"+ %d", pDetailItem[i].nItemEnchant);
				m_lstDetail.SetItemText(i, 8, szTmp);

				swprintf(szTmp, L"%d", pDetailItem[i].bItemEnchant);
				m_lstDetail.SetItemText(i, 9, szTmp);

				swprintf(szTmp, L"%d", pDetailItem[i].nItemEnchant);
				m_lstDetail.SetItemText(i, 10, szTmp);
			}

			m_lstDetail.SetItemData(i, pDetailItem[i].nMode);
		}

		delete[] pDetailItem;
		pDetailItem = NULL;
	}

	ITEM_SETTING m_ItemSetting;
	memset(&m_ItemSetting, 0, sizeof(ITEM_SETTING));
	fread(&m_ItemSetting, sizeof(ITEM_SETTING), 1, fp);
	fclose(fp);

	m_bTradeLimitTime = m_ItemSetting.bTradeLimitTime;
	m_nTradeLimitTime = m_ItemSetting.nTradeLimitTime;

	UpdateData(FALSE);

	OnBnClickedCheckTradelimittime();
}


void CScheduleItem::SaveSetting(WCHAR *szPath)
{
	WCHAR szFile[MAX_PATH];
	swprintf(szFile, L"%s\\Items.dat", szPath);
	FILE *fp = _wfopen(szFile, L"wb");
	if(!fp)
		return;

	UpdateData(TRUE);

	BYTE pbDefaultMode[MAX_GRADE][MAX_TYPE_1];
	memset(pbDefaultMode, 0, MAX_GRADE * MAX_TYPE_1);

	for(int i = 0; i < MAX_GRADE; i++)
	{
		for(int j = 0; j < MAX_TYPE_1; j++)
		{
			for(int k = 0; k < MAX_MODE; k++)
			{
				if(!wcscmp(g_szItemMode[k], m_lstDefault.GetItemText(i, j + 1).GetBuffer()))
				{
					pbDefaultMode[i][j] = k;
					break;
				}
			}
		}
	}

	fwrite(pbDefaultMode, sizeof(BYTE), MAX_GRADE * MAX_TYPE_1, fp);

	int nCount = m_lstDetail.GetItemCount();
	fwrite(&nCount, sizeof(int), 1, fp);

	if(nCount > 0)
	{
		DETAIL_ITEM *pDetailItem = new DETAIL_ITEM[nCount];
		if(pDetailItem)
		{
			memset(pDetailItem, 0, sizeof(DETAIL_ITEM) * nCount);

			for(int i = 0; i < nCount; i++)
			{
				wcscpy(pDetailItem[i].szName, m_lstDetail.GetItemText(i, 2).GetBuffer());

				pDetailItem[i].nMode = (int)m_lstDetail.GetItemData(i);
				pDetailItem[i].bEnable = m_lstDetail.GetCheck(i);

				if(pDetailItem[i].nMode == 6)
				{
					pDetailItem[i].nMarketCount = _wtoi(m_lstDetail.GetItemText(i, 4).GetBuffer());
					pDetailItem[i].nMarketMode = _wtoi(m_lstDetail.GetItemText(i, 5).GetBuffer());
					pDetailItem[i].nMarketIndex = _wtoi(m_lstDetail.GetItemText(i, 6).GetBuffer());
					pDetailItem[i].nMarketPrice = _wtoi(m_lstDetail.GetItemText(i, 7).GetBuffer());
				}

				if (m_lstDetail.GetItemText(i, 8).Compare(L""))
				{
					pDetailItem[i].bItemEnchant = _wtoi(m_lstDetail.GetItemText(i, 9).GetBuffer());
					pDetailItem[i].nItemEnchant = _wtoi(m_lstDetail.GetItemText(i, 10).GetBuffer());
				}
			}

			fwrite(pDetailItem, sizeof(DETAIL_ITEM), nCount, fp);

			delete[] pDetailItem;
			pDetailItem = NULL;
		}
	}

	ITEM_SETTING m_ItemSetting;
	memset(&m_ItemSetting, 0, sizeof(ITEM_SETTING));

	m_ItemSetting.bTradeLimitTime = m_bTradeLimitTime;
	m_ItemSetting.nTradeLimitTime = m_nTradeLimitTime;

	fwrite(&m_ItemSetting, sizeof(ITEM_SETTING), 1, fp);
	fclose(fp);
}


LRESULT CScheduleItem::PoPulateComboList(WPARAM wParam , LPARAM lParam)
{
	CComboBox* pInPlaceCombo = static_cast<CComboBox*> (GetFocus());

	CRect obWindowRect;
	pInPlaceCombo->GetWindowRect(&obWindowRect);
	CPoint obInPlaceComboTopLeft(obWindowRect.TopLeft()); 
	((CComboListCtrl*)wParam)->GetWindowRect(&obWindowRect);

	CStringList* pComboList = reinterpret_cast<CStringList*>(lParam);
	pComboList->RemoveAll(); 

	if (obWindowRect.PtInRect(obInPlaceComboTopLeft)) 
	{
		for(int i = 0; i < MAX_MODE; i++)
			pComboList->AddTail(g_szItemMode[i]);
	}

	return TRUE;
}

void CScheduleItem::OnSort()
{
	CString strTmp;

	// 먼저 방식에 따라 정렬하자
	for (int i = 0; i < m_lstDetail.GetItemCount() - 1; i++)
	{
		for (int j = i + 1; j < m_lstDetail.GetItemCount(); j++)
		{
			int nVal1 = (int)m_lstDetail.GetItemData(i);
			int nVal2 = (int)m_lstDetail.GetItemData(j);

			if (nVal2 < nVal1)
			{
				strTmp = m_lstDetail.GetItemText(i, 2);
				m_lstDetail.SetItemText(i, 2, m_lstDetail.GetItemText(j, 2).GetBuffer());
				m_lstDetail.SetItemText(j, 2, strTmp.GetBuffer());

				strTmp = m_lstDetail.GetItemText(i, 3);
				m_lstDetail.SetItemText(i, 3, m_lstDetail.GetItemText(j, 3).GetBuffer());
				m_lstDetail.SetItemText(j, 3, strTmp.GetBuffer());

				strTmp = m_lstDetail.GetItemText(i, 4);
				m_lstDetail.SetItemText(i, 4, m_lstDetail.GetItemText(j, 4).GetBuffer());
				m_lstDetail.SetItemText(j, 4, strTmp.GetBuffer());

				strTmp = m_lstDetail.GetItemText(i, 5);
				m_lstDetail.SetItemText(i, 5, m_lstDetail.GetItemText(j, 5).GetBuffer());
				m_lstDetail.SetItemText(j, 5, strTmp.GetBuffer());

				strTmp = m_lstDetail.GetItemText(i, 6);
				m_lstDetail.SetItemText(i, 6, m_lstDetail.GetItemText(j, 6).GetBuffer());
				m_lstDetail.SetItemText(j, 6, strTmp.GetBuffer());

				strTmp = m_lstDetail.GetItemText(i, 7);
				m_lstDetail.SetItemText(i, 7, m_lstDetail.GetItemText(j, 7).GetBuffer());
				m_lstDetail.SetItemText(j, 7, strTmp.GetBuffer());

				strTmp = m_lstDetail.GetItemText(i, 8);
				m_lstDetail.SetItemText(i, 8, m_lstDetail.GetItemText(j, 8).GetBuffer());
				m_lstDetail.SetItemText(j, 8, strTmp.GetBuffer());

				strTmp = m_lstDetail.GetItemText(i, 9);
				m_lstDetail.SetItemText(i, 9, m_lstDetail.GetItemText(j, 9).GetBuffer());
				m_lstDetail.SetItemText(j, 9, strTmp.GetBuffer());

				strTmp = m_lstDetail.GetItemText(i, 10);
				m_lstDetail.SetItemText(i, 10, m_lstDetail.GetItemText(j, 10).GetBuffer());
				m_lstDetail.SetItemText(j, 10, strTmp.GetBuffer());

				m_lstDetail.SetItemData(i, nVal2);
				m_lstDetail.SetItemData(j, nVal1);
			}
		}
	}

	// 같은 방식에 한해서 ㄱㄴㄷㄹ 순서로 정렬하자
	for (int i = 0; i < m_lstDetail.GetItemCount() - 1; i++)
	{
		int nVal1 = (int)m_lstDetail.GetItemData(i);
		for (int j = i + 1; j < m_lstDetail.GetItemCount(); j++)
		{
			int nVal2 = (int)m_lstDetail.GetItemData(j);
			if (nVal1 != nVal2)
				break;
			
			if (wcscmp(m_lstDetail.GetItemText(i, 2).GetBuffer(), m_lstDetail.GetItemText(j, 2).GetBuffer()) > 0)
			{
				strTmp = m_lstDetail.GetItemText(i, 2);
				m_lstDetail.SetItemText(i, 2, m_lstDetail.GetItemText(j, 2).GetBuffer());
				m_lstDetail.SetItemText(j, 2, strTmp.GetBuffer());

				strTmp = m_lstDetail.GetItemText(i, 3);
				m_lstDetail.SetItemText(i, 3, m_lstDetail.GetItemText(j, 3).GetBuffer());
				m_lstDetail.SetItemText(j, 3, strTmp.GetBuffer());

				strTmp = m_lstDetail.GetItemText(i, 4);
				m_lstDetail.SetItemText(i, 4, m_lstDetail.GetItemText(j, 4).GetBuffer());
				m_lstDetail.SetItemText(j, 4, strTmp.GetBuffer());

				strTmp = m_lstDetail.GetItemText(i, 5);
				m_lstDetail.SetItemText(i, 5, m_lstDetail.GetItemText(j, 5).GetBuffer());
				m_lstDetail.SetItemText(j, 5, strTmp.GetBuffer());

				strTmp = m_lstDetail.GetItemText(i, 6);
				m_lstDetail.SetItemText(i, 6, m_lstDetail.GetItemText(j, 6).GetBuffer());
				m_lstDetail.SetItemText(j, 6, strTmp.GetBuffer());

				strTmp = m_lstDetail.GetItemText(i, 7);
				m_lstDetail.SetItemText(i, 7, m_lstDetail.GetItemText(j, 7).GetBuffer());
				m_lstDetail.SetItemText(j, 7, strTmp.GetBuffer());

				strTmp = m_lstDetail.GetItemText(i, 8);
				m_lstDetail.SetItemText(i, 8, m_lstDetail.GetItemText(j, 8).GetBuffer());
				m_lstDetail.SetItemText(j, 8, strTmp.GetBuffer());

				strTmp = m_lstDetail.GetItemText(i, 9);
				m_lstDetail.SetItemText(i, 9, m_lstDetail.GetItemText(j, 9).GetBuffer());
				m_lstDetail.SetItemText(j, 9, strTmp.GetBuffer());

				strTmp = m_lstDetail.GetItemText(i, 10);
				m_lstDetail.SetItemText(i, 10, m_lstDetail.GetItemText(j, 10).GetBuffer());
				m_lstDetail.SetItemText(j, 10, strTmp.GetBuffer());
			}
		}
	}
}

void CScheduleItem::OnBnClickedCheckTradelimittime()
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);

	GetDlgItem(IDC_EDIT_TRADELIMITTIME)->EnableWindow(m_bTradeLimitTime);
}

int CompareFunc(LPARAM lParam1, LPARAM lParam2, LPARAM lParamSort)
{
	CListCtrl* pListCtrl = (CListCtrl*)lParamSort;

	CString sItem1 = pListCtrl->GetItemText(lParam1, 2);
	CString sItem2 = pListCtrl->GetItemText(lParam2, 2);

	return wcscmp(sItem1, sItem2);
}

void CScheduleItem::OnSortItemDetail(NMHDR* pNMHDR, LRESULT* pResult)
{
	LPNMLISTVIEW pNMLV = reinterpret_cast<LPNMLISTVIEW>(pNMHDR);
	if (pNMLV->iSubItem == 2)
	{
		m_lstDetail.SortItemsEx(CompareFunc, (LPARAM)&m_lstDetail);

		WCHAR szTemp[MAX_NAME];
		int nCount = m_lstDetail.GetItemCount();
		for (int i = 0; i < nCount; i++)
		{
			swprintf_s(szTemp, L"%d", i + 1);
			m_lstDetail.SetItemText(i, 1, szTemp);
		}
	}
	*pResult = 0;
}
