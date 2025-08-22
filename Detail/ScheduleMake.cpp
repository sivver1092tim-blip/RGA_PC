// ScheduleMake.cpp : implementation file
//

#include "stdafx.h"
#include "Detail.h"
#include "afxdialogex.h"
#include "ScheduleMake.h"


// CScheduleMake dialog

IMPLEMENT_DYNAMIC(CScheduleMake, CDialogEx)

CScheduleMake::CScheduleMake(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_SCHEDULE_MAKE, pParent)
	, m_bMakeBoxEnable(FALSE)
	, m_nMakeBoxGold(1000000)
	, m_bMakePetEnable(FALSE)
	, m_nMakePetGold(1000000)
	, m_bMakeMonEnable(FALSE)
	, m_nMakeMonGold(1000000)
	, m_bMakeStoneEnable(FALSE)
	, m_nMakeStoneGold(1000000)
	, m_bMakeMatEnable(FALSE)
	, m_nMakeMatGold(1000000)
	, m_bMakeEventEnable(FALSE)
	, m_nMakeEventGold(1000000)
	, m_bAutoOpenBox(FALSE)
{
	m_bMakeBox[0] = FALSE;
	m_bMakeBox[1] = FALSE;
	m_bMakeBox[2] = FALSE;
	m_bMakeBox[3] = FALSE;
	m_bMakeCrystalBox = FALSE;

	m_bMakePet[0] = FALSE;
	m_bMakePet[1] = FALSE;

	m_bMakeMon[0] = FALSE;
	m_bMakeMon[1] = FALSE;

	m_bMakeStone[0] = FALSE;
	m_bMakeStone[1] = FALSE;
	m_bMakeStone[2] = FALSE;
	m_bMakeStone[3] = FALSE;

	m_bMakeMat[0] = FALSE;
	m_bMakeMat[1] = FALSE;
	m_bMakeMat[2] = FALSE;
	m_bMakeMat[3] = FALSE;
	m_bMakeMat[4] = FALSE;
	m_bMakeMat[5] = FALSE;
	m_bMakeMat[6] = FALSE;
	m_bMakeMat[7] = FALSE;
	m_bMakeMat[8] = FALSE;
	m_bMakeMat[9] = FALSE;
	m_bMakeMat[10] = FALSE;
	m_bMakeMat[11] = FALSE;
}

CScheduleMake::~CScheduleMake()
{
}

void CScheduleMake::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);

	DDX_Check(pDX, IDC_CHECK_AUTOOPENBOX, m_bAutoOpenBox);

	DDX_Check(pDX, IDC_CHECK_MAKEBOXENABLE, m_bMakeBoxEnable);
	DDX_Text(pDX, IDC_EDIT_MAKEBOXGOLD, m_nMakeBoxGold);
	DDX_Check(pDX, IDC_CHECK_MAKEBOX1, m_bMakeBox[0]);
	DDX_Check(pDX, IDC_CHECK_MAKEBOX2, m_bMakeBox[1]);
	DDX_Check(pDX, IDC_CHECK_MAKEBOX3, m_bMakeBox[2]);
	DDX_Check(pDX, IDC_CHECK_MAKEBOX4, m_bMakeBox[3]);
	DDX_Check(pDX, IDC_CHECK_MAKECRYSTALBOX, m_bMakeCrystalBox);

	DDX_Check(pDX, IDC_CHECK_MAKEPETENABLE, m_bMakePetEnable);
	DDX_Text(pDX, IDC_EDIT_MAKEPETGOLD, m_nMakePetGold);
	DDX_Check(pDX, IDC_CHECK_MAKEPET1, m_bMakePet[0]);
	DDX_Check(pDX, IDC_CHECK_MAKEPET2, m_bMakePet[1]);

	DDX_Check(pDX, IDC_CHECK_MAKEMONENABLE, m_bMakeMonEnable);
	DDX_Text(pDX, IDC_EDIT_MAKEMONGOLD, m_nMakeMonGold);
	DDX_Check(pDX, IDC_CHECK_MAKEMON1, m_bMakeMon[0]);
	DDX_Check(pDX, IDC_CHECK_MAKEMON2, m_bMakeMon[1]);

	DDX_Check(pDX, IDC_CHECK_MAKESTONEENABLE, m_bMakeStoneEnable);
	DDX_Text(pDX, IDC_EDIT_MAKESTONEGOLD, m_nMakeStoneGold);
	DDX_Check(pDX, IDC_CHECK_MAKESTONE1, m_bMakeStone[0]);
	DDX_Check(pDX, IDC_CHECK_MAKESTONE2, m_bMakeStone[1]);
	DDX_Check(pDX, IDC_CHECK_MAKESTONE3, m_bMakeStone[2]);
	DDX_Check(pDX, IDC_CHECK_MAKESTONE4, m_bMakeStone[3]);

	DDX_Check(pDX, IDC_CHECK_MAKEMATENABLE, m_bMakeMatEnable);
	DDX_Text(pDX, IDC_EDIT_MAKEMATGOLD, m_nMakeMatGold);
	DDX_Check(pDX, IDC_CHECK_MAKEMAT1, m_bMakeMat[0]);
	DDX_Check(pDX, IDC_CHECK_MAKEMAT2, m_bMakeMat[1]);
	DDX_Check(pDX, IDC_CHECK_MAKEMAT3, m_bMakeMat[2]);
	DDX_Check(pDX, IDC_CHECK_MAKEMAT4, m_bMakeMat[3]);
	DDX_Check(pDX, IDC_CHECK_MAKEMAT5, m_bMakeMat[4]);
	DDX_Check(pDX, IDC_CHECK_MAKEMAT6, m_bMakeMat[5]);
	DDX_Check(pDX, IDC_CHECK_MAKEMAT7, m_bMakeMat[6]);
	DDX_Check(pDX, IDC_CHECK_MAKEMAT8, m_bMakeMat[7]);
	DDX_Check(pDX, IDC_CHECK_MAKEMAT9, m_bMakeMat[8]);
	DDX_Check(pDX, IDC_CHECK_MAKEMAT10, m_bMakeMat[9]);
	DDX_Check(pDX, IDC_CHECK_MAKEMAT11, m_bMakeMat[10]);
	DDX_Check(pDX, IDC_CHECK_MAKEMAT12, m_bMakeMat[11]);

	DDX_Check(pDX, IDC_CHECK_MAKEEVENTENABLE, m_bMakeEventEnable);
	DDX_Text(pDX, IDC_EDIT_MAKEEVENTGOLD, m_nMakeEventGold);
	DDX_Control(pDX, IDC_COMBO_MAKEEVENT, m_cbMakeEvent);
	DDX_Control(pDX, IDC_LIST_MAKEEVENT, m_lstMakeEvent);
}


BEGIN_MESSAGE_MAP(CScheduleMake, CDialogEx)
	ON_BN_CLICKED(IDC_CHECK_MAKEBOXENABLE, &CScheduleMake::OnBnClickedCheckMakeboxenable)
	ON_BN_CLICKED(IDC_CHECK_MAKEPETENABLE, &CScheduleMake::OnBnClickedCheckMakepetenable)
	ON_BN_CLICKED(IDC_CHECK_MAKEMONENABLE, &CScheduleMake::OnBnClickedCheckMakemonenable)
	ON_BN_CLICKED(IDC_CHECK_MAKESTONEENABLE, &CScheduleMake::OnBnClickedCheckMakestoneenable)
	ON_BN_CLICKED(IDC_CHECK_MAKEMATENABLE, &CScheduleMake::OnBnClickedCheckMakematenable)
	ON_BN_CLICKED(IDC_CHECK_MAKEEVENTENABLE, &CScheduleMake::OnBnClickedCheckMakeeventenable)
	ON_BN_CLICKED(IDC_BTN_MAKEEVENTADD, &CScheduleMake::OnBnClickedBtnMakeeventadd)
	ON_BN_CLICKED(IDC_BTN_MAKEEVENTDEL, &CScheduleMake::OnBnClickedBtnMakeeventdel)
	ON_BN_CLICKED(IDC_BTN_MAKEEVENTUP, &CScheduleMake::OnBnClickedBtnMakeeventup)
	ON_BN_CLICKED(IDC_BTN_MAKEEVENTDOWN, &CScheduleMake::OnBnClickedBtnMakeeventdown)
END_MESSAGE_MAP()


// CScheduleMake message handlers

BOOL CScheduleMake::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  Add extra initialization here
	CString sLabel;
	SetControlText();


	for (int i = 0; i < MAX_MAKEEVENTRES; i++)
	{
		if (g_bTaiwanLang)
			m_cbMakeEvent.AddString(g_pMakeEventRes[i].szTWName);
		else
			m_cbMakeEvent.AddString(g_pMakeEventRes[i].szKRName);
	}

	m_cbMakeEvent.SetCurSel(0);


	m_lstMakeEvent.SetExtendedStyle(m_lstMakeEvent.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES | LVS_EX_CHECKBOXES);
	m_lstMakeEvent.InsertColumn(0, L"", LVCFMT_LEFT, 20);
	sLabel.LoadString(NULL, IDS_ITEM, g_wLanguageID);
	m_lstMakeEvent.InsertColumn(1, sLabel, LVCFMT_LEFT, 140);


	UpdateData(FALSE);

	OnBnClickedCheckMakeboxenable();
	OnBnClickedCheckMakepetenable();
	OnBnClickedCheckMakemonenable();
	OnBnClickedCheckMakestoneenable();
	OnBnClickedCheckMakematenable();
	OnBnClickedCheckMakeeventenable();

	return TRUE;  // return TRUE unless you set the focus to a control
	// EXCEPTION: OCX Property Pages should return FALSE
}

BOOL CScheduleMake::PreTranslateMessage(MSG* pMsg)
{
	if (pMsg->wParam == VK_RETURN || pMsg->wParam == VK_ESCAPE)
		return TRUE;

	return CDialogEx::PreTranslateMessage(pMsg);
}

void CScheduleMake::SetControlText()
{
	if (g_wLanguageID != 0x412)
	{
		GetDlgItem(IDC_CHECK_MAKEBOXENABLE)->SetWindowTextW(L"宝箱");
		GetDlgItem(IDC_STATIC_MAKEBOXGOLD)->SetWindowTextW(L"金币以上时");
		GetDlgItem(IDC_CHECK_MAKEBOX1)->SetWindowTextW(L"普通装备宝箱");
		GetDlgItem(IDC_CHECK_MAKEBOX2)->SetWindowTextW(L"普通装备宝箱 (高级碎片)");
		GetDlgItem(IDC_CHECK_MAKEBOX3)->SetWindowTextW(L"优质装备宝箱");
		GetDlgItem(IDC_CHECK_MAKEBOX4)->SetWindowTextW(L"极品装备宝箱");
		GetDlgItem(IDC_CHECK_MAKECRYSTALBOX)->SetWindowTextW(L"水晶随机宝箱");


		GetDlgItem(IDC_CHECK_MAKEPETENABLE)->SetWindowTextW(L"守护者石板");
		GetDlgItem(IDC_STATIC_MAKEPETGOLD)->SetWindowTextW(L"金币以上时");
		GetDlgItem(IDC_CHECK_MAKEPET1)->SetWindowTextW(L"普通");
		GetDlgItem(IDC_CHECK_MAKEPET2)->SetWindowTextW(L"高级");

		GetDlgItem(IDC_CHECK_MAKEMONENABLE)->SetWindowTextW(L"怪物石板");
		GetDlgItem(IDC_STATIC_MAKEMONGOLD)->SetWindowTextW(L"金币以上时");
		GetDlgItem(IDC_CHECK_MAKEMON1)->SetWindowTextW(L"普通");
		GetDlgItem(IDC_CHECK_MAKEMON2)->SetWindowTextW(L"高级");

		GetDlgItem(IDC_CHECK_MAKESTONEENABLE)->SetWindowTextW(L"精炼石");
		GetDlgItem(IDC_STATIC_MAKESTONEGOLD)->SetWindowTextW(L"金币以上时");
		GetDlgItem(IDC_CHECK_MAKESTONE1)->SetWindowTextW(L"稀有");
		GetDlgItem(IDC_CHECK_MAKESTONE2)->SetWindowTextW(L"英雄");
		GetDlgItem(IDC_CHECK_MAKESTONE3)->SetWindowTextW(L"传说");
		GetDlgItem(IDC_CHECK_MAKESTONE4)->SetWindowTextW(L"遗物");

		GetDlgItem(IDC_CHECK_MAKEMATENABLE)->SetWindowTextW(L"材料");
		GetDlgItem(IDC_STATIC_MAKEMATGOLD)->SetWindowTextW(L"金币以上时");
		GetDlgItem(IDC_STATIC_MAT1)->SetWindowTextW(L"魔石");
		GetDlgItem(IDC_CHECK_MAKEMAT1)->SetWindowTextW(L"中级");
		GetDlgItem(IDC_CHECK_MAKEMAT2)->SetWindowTextW(L"优质");
		GetDlgItem(IDC_STATIC_MAT2)->SetWindowTextW(L"木材");
		GetDlgItem(IDC_CHECK_MAKEMAT3)->SetWindowTextW(L"中级");
		GetDlgItem(IDC_CHECK_MAKEMAT4)->SetWindowTextW(L"优质");
		GetDlgItem(IDC_STATIC_MAT3)->SetWindowTextW(L"皮革");
		GetDlgItem(IDC_CHECK_MAKEMAT5)->SetWindowTextW(L"中级");
		GetDlgItem(IDC_CHECK_MAKEMAT6)->SetWindowTextW(L"优质");
		GetDlgItem(IDC_STATIC_MAT4)->SetWindowTextW(L"布料");
		GetDlgItem(IDC_CHECK_MAKEMAT7)->SetWindowTextW(L"中级");
		GetDlgItem(IDC_CHECK_MAKEMAT8)->SetWindowTextW(L"优质");
		GetDlgItem(IDC_STATIC_MAT5)->SetWindowTextW(L"宝石");
		GetDlgItem(IDC_CHECK_MAKEMAT9)->SetWindowTextW(L"中级");
		GetDlgItem(IDC_CHECK_MAKEMAT10)->SetWindowTextW(L"优质");
		GetDlgItem(IDC_STATIC_MAT6)->SetWindowTextW(L"铁锭");
		GetDlgItem(IDC_CHECK_MAKEMAT11)->SetWindowTextW(L"中级");
		GetDlgItem(IDC_CHECK_MAKEMAT12)->SetWindowTextW(L"优质");

		GetDlgItem(IDC_CHECK_MAKEEVENTENABLE)->SetWindowTextW(L"活动");
		GetDlgItem(IDC_STATIC_MAKEEVENTGOLD)->SetWindowTextW(L"金币以上时");

		GetDlgItem(IDC_CHECK_AUTOOPENBOX)->SetWindowTextW(L"自动打开装备箱子");
	}
}


void CScheduleMake::LoadSetting(WCHAR* szPath)
{
	FILE* fp;
	WCHAR szFile[MAX_PATH];

	swprintf_s(szFile, L"%s\\Make.dat", szPath);
	_wfopen_s(&fp, szFile, L"rb");
	if (fp)
	{
		MAKE_SETTING m_MakeSetting;
		memset(&m_MakeSetting, 0, sizeof(MAKE_SETTING));
		fread(&m_MakeSetting, sizeof(MAKE_SETTING), 1, fp);
		fclose(fp);

		m_bAutoOpenBox = m_MakeSetting.bAutoOpenBox;

		m_bMakeBoxEnable = m_MakeSetting.bMakeBoxEnable;
		m_nMakeBoxGold = m_MakeSetting.nMakeBoxGold;
		m_bMakeBox[0] = m_MakeSetting.bMakeBox[0];
		m_bMakeBox[1] = m_MakeSetting.bMakeBox[1];
		m_bMakeBox[2] = m_MakeSetting.bMakeBox[2];
		m_bMakeBox[3] = m_MakeSetting.bMakeBox[3];
		m_bMakeCrystalBox = m_MakeSetting.bMakeCrystalBox;

		m_bMakePetEnable = m_MakeSetting.bMakePetEnable;
		m_nMakePetGold = m_MakeSetting.nMakePetGold;
		m_bMakePet[0] = m_MakeSetting.bMakePet[0];
		m_bMakePet[1] = m_MakeSetting.bMakePet[1];

		m_bMakeMonEnable = m_MakeSetting.bMakeMonEnable;
		m_nMakeMonGold = m_MakeSetting.nMakeMonGold;
		m_bMakeMon[0] = m_MakeSetting.bMakeMon[0];
		m_bMakeMon[1] = m_MakeSetting.bMakeMon[1];

		m_bMakeStoneEnable = m_MakeSetting.bMakeStoneEnable;
		m_nMakeStoneGold = m_MakeSetting.nMakeStoneGold;
		m_bMakeStone[0] = m_MakeSetting.bMakeStone[0];
		m_bMakeStone[1] = m_MakeSetting.bMakeStone[1];
		m_bMakeStone[2] = m_MakeSetting.bMakeStone[2];
		m_bMakeStone[3] = m_MakeSetting.bMakeStone[3];

		m_bMakeMatEnable = m_MakeSetting.bMakeMatEnable;
		m_nMakeMatGold = m_MakeSetting.nMakeMatGold;
		m_bMakeMat[0] = m_MakeSetting.bMakeMat[0];
		m_bMakeMat[1] = m_MakeSetting.bMakeMat[1];
		m_bMakeMat[2] = m_MakeSetting.bMakeMat[2];
		m_bMakeMat[3] = m_MakeSetting.bMakeMat[3];
		m_bMakeMat[4] = m_MakeSetting.bMakeMat[4];
		m_bMakeMat[5] = m_MakeSetting.bMakeMat[5];
		m_bMakeMat[6] = m_MakeSetting.bMakeMat[6];
		m_bMakeMat[7] = m_MakeSetting.bMakeMat[7];
		m_bMakeMat[8] = m_MakeSetting.bMakeMat[8];
		m_bMakeMat[9] = m_MakeSetting.bMakeMat[9];
		m_bMakeMat[10] = m_MakeSetting.bMakeMat[10];
		m_bMakeMat[11] = m_MakeSetting.bMakeMat[11];

		m_bMakeEventEnable = m_MakeSetting.bMakeEventEnable;
		m_nMakeEventGold = m_MakeSetting.nMakeEventGold;

		for (int i = 0; i < m_MakeSetting.nMakeEventCount; i++)
			AddMakeEvent(m_MakeSetting.pMakeEventInfo[i].dwMakeID, m_MakeSetting.pMakeEventInfo[i].bEnable);


		UpdateData(FALSE);

		OnBnClickedCheckMakeboxenable();
		OnBnClickedCheckMakepetenable();
		OnBnClickedCheckMakemonenable();
		OnBnClickedCheckMakestoneenable();
		OnBnClickedCheckMakematenable();
		OnBnClickedCheckMakeeventenable();
	}
}


void CScheduleMake::SaveSetting(WCHAR* szPath)
{
	FILE* fp;
	WCHAR szFile[MAX_PATH];

	swprintf_s(szFile, L"%s\\Make.dat", szPath);
	_wfopen_s(&fp, szFile, L"wb");
	if (fp)
	{
		UpdateData(TRUE);

		MAKE_SETTING m_MakeSetting;
		memset(&m_MakeSetting, 0, sizeof(MAKE_SETTING));

		m_MakeSetting.bAutoOpenBox = m_bAutoOpenBox;

		m_MakeSetting.bMakeBoxEnable = m_bMakeBoxEnable;
		m_MakeSetting.nMakeBoxGold = m_nMakeBoxGold;
		m_MakeSetting.bMakeBox[0] = m_bMakeBox[0];
		m_MakeSetting.bMakeBox[1] = m_bMakeBox[1];
		m_MakeSetting.bMakeBox[2] = m_bMakeBox[2];
		m_MakeSetting.bMakeBox[3] = m_bMakeBox[3];
		m_MakeSetting.bMakeCrystalBox = m_bMakeCrystalBox;

		m_MakeSetting.bMakePetEnable = m_bMakePetEnable;
		m_MakeSetting.nMakePetGold = m_nMakePetGold;
		m_MakeSetting.bMakePet[0] = m_bMakePet[0];
		m_MakeSetting.bMakePet[1] = m_bMakePet[1];

		m_MakeSetting.bMakeMonEnable = m_bMakeMonEnable;
		m_MakeSetting.nMakeMonGold = m_nMakeMonGold;
		m_MakeSetting.bMakeMon[0] = m_bMakeMon[0];
		m_MakeSetting.bMakeMon[1] = m_bMakeMon[1];

		m_MakeSetting.bMakeStoneEnable = m_bMakeStoneEnable;
		m_MakeSetting.nMakeStoneGold = m_nMakeStoneGold;
		m_MakeSetting.bMakeStone[0] = m_bMakeStone[0];
		m_MakeSetting.bMakeStone[1] = m_bMakeStone[1];
		m_MakeSetting.bMakeStone[2] = m_bMakeStone[2];
		m_MakeSetting.bMakeStone[3] = m_bMakeStone[3];

		m_MakeSetting.bMakeMatEnable = m_bMakeMatEnable;
		m_MakeSetting.nMakeMatGold = m_nMakeMatGold;
		m_MakeSetting.bMakeMat[0] = m_bMakeMat[0];
		m_MakeSetting.bMakeMat[1] = m_bMakeMat[1];
		m_MakeSetting.bMakeMat[2] = m_bMakeMat[2];
		m_MakeSetting.bMakeMat[3] = m_bMakeMat[3];
		m_MakeSetting.bMakeMat[4] = m_bMakeMat[4];
		m_MakeSetting.bMakeMat[5] = m_bMakeMat[5];
		m_MakeSetting.bMakeMat[6] = m_bMakeMat[6];
		m_MakeSetting.bMakeMat[7] = m_bMakeMat[7];
		m_MakeSetting.bMakeMat[8] = m_bMakeMat[8];
		m_MakeSetting.bMakeMat[9] = m_bMakeMat[9];
		m_MakeSetting.bMakeMat[10] = m_bMakeMat[10];
		m_MakeSetting.bMakeMat[11] = m_bMakeMat[11];

		m_MakeSetting.bMakeEventEnable = m_bMakeEventEnable;
		m_MakeSetting.nMakeEventGold = m_nMakeEventGold;

		m_MakeSetting.nMakeEventCount = m_lstMakeEvent.GetItemCount();
		for (int i = 0; i < m_MakeSetting.nMakeEventCount; i++)
		{
			m_MakeSetting.pMakeEventInfo[i].dwMakeID = m_lstMakeEvent.GetItemData(i);
			m_MakeSetting.pMakeEventInfo[i].bEnable = m_lstMakeEvent.GetCheck(i);
		}

		fwrite(&m_MakeSetting, sizeof(MAKE_SETTING), 1, fp);
		fclose(fp);
	}
}


void CScheduleMake::OnBnClickedCheckMakeboxenable()
{
	UpdateData(TRUE);

	GetDlgItem(IDC_EDIT_MAKEBOXGOLD)->EnableWindow(m_bMakeBoxEnable);
	GetDlgItem(IDC_CHECK_MAKEBOX1)->EnableWindow(m_bMakeBoxEnable);
	GetDlgItem(IDC_CHECK_MAKEBOX2)->EnableWindow(m_bMakeBoxEnable);
	GetDlgItem(IDC_CHECK_MAKEBOX3)->EnableWindow(m_bMakeBoxEnable);
	GetDlgItem(IDC_CHECK_MAKEBOX4)->EnableWindow(m_bMakeBoxEnable);
	GetDlgItem(IDC_CHECK_MAKECRYSTALBOX)->EnableWindow(m_bMakeBoxEnable);
}


void CScheduleMake::OnBnClickedCheckMakepetenable()
{
	UpdateData(TRUE);

	GetDlgItem(IDC_EDIT_MAKEPETGOLD)->EnableWindow(m_bMakePetEnable);
	GetDlgItem(IDC_CHECK_MAKEPET1)->EnableWindow(m_bMakePetEnable);
	GetDlgItem(IDC_CHECK_MAKEPET2)->EnableWindow(m_bMakePetEnable);
}


void CScheduleMake::OnBnClickedCheckMakemonenable()
{
	UpdateData(TRUE);

	GetDlgItem(IDC_EDIT_MAKEMONGOLD)->EnableWindow(m_bMakeMonEnable);
	GetDlgItem(IDC_CHECK_MAKEMON1)->EnableWindow(m_bMakeMonEnable);
	GetDlgItem(IDC_CHECK_MAKEMON2)->EnableWindow(m_bMakeMonEnable);
}


void CScheduleMake::OnBnClickedCheckMakestoneenable()
{
	UpdateData(TRUE);

	GetDlgItem(IDC_EDIT_MAKESTONEGOLD)->EnableWindow(m_bMakeStoneEnable);
	GetDlgItem(IDC_CHECK_MAKESTONE1)->EnableWindow(m_bMakeStoneEnable);
	GetDlgItem(IDC_CHECK_MAKESTONE2)->EnableWindow(m_bMakeStoneEnable);
	GetDlgItem(IDC_CHECK_MAKESTONE3)->EnableWindow(m_bMakeStoneEnable);
	GetDlgItem(IDC_CHECK_MAKESTONE4)->EnableWindow(m_bMakeStoneEnable);
}


void CScheduleMake::OnBnClickedCheckMakematenable()
{
	UpdateData(TRUE);

	GetDlgItem(IDC_EDIT_MAKEMATGOLD)->EnableWindow(m_bMakeMatEnable);
	GetDlgItem(IDC_CHECK_MAKEMAT1)->EnableWindow(m_bMakeMatEnable);
	GetDlgItem(IDC_CHECK_MAKEMAT2)->EnableWindow(m_bMakeMatEnable);
	GetDlgItem(IDC_CHECK_MAKEMAT3)->EnableWindow(m_bMakeMatEnable);
	GetDlgItem(IDC_CHECK_MAKEMAT4)->EnableWindow(m_bMakeMatEnable);
	GetDlgItem(IDC_CHECK_MAKEMAT5)->EnableWindow(m_bMakeMatEnable);
	GetDlgItem(IDC_CHECK_MAKEMAT6)->EnableWindow(m_bMakeMatEnable);
	GetDlgItem(IDC_CHECK_MAKEMAT7)->EnableWindow(m_bMakeMatEnable);
	GetDlgItem(IDC_CHECK_MAKEMAT8)->EnableWindow(m_bMakeMatEnable);
	GetDlgItem(IDC_CHECK_MAKEMAT9)->EnableWindow(m_bMakeMatEnable);
	GetDlgItem(IDC_CHECK_MAKEMAT10)->EnableWindow(m_bMakeMatEnable);
	GetDlgItem(IDC_CHECK_MAKEMAT11)->EnableWindow(m_bMakeMatEnable);
	GetDlgItem(IDC_CHECK_MAKEMAT12)->EnableWindow(m_bMakeMatEnable);
}


void CScheduleMake::OnBnClickedCheckMakeeventenable()
{
	UpdateData(TRUE);

	GetDlgItem(IDC_EDIT_MAKEEVENTGOLD)->EnableWindow(m_bMakeEventEnable);
	GetDlgItem(IDC_COMBO_MAKEEVENT)->EnableWindow(m_bMakeEventEnable);
	GetDlgItem(IDC_LIST_MAKEEVENT)->EnableWindow(m_bMakeEventEnable);
	GetDlgItem(IDC_BTN_MAKEEVENTADD)->EnableWindow(m_bMakeEventEnable);
	GetDlgItem(IDC_BTN_MAKEEVENTDEL)->EnableWindow(m_bMakeEventEnable);
	GetDlgItem(IDC_BTN_MAKEEVENTUP)->EnableWindow(m_bMakeEventEnable);
	GetDlgItem(IDC_BTN_MAKEEVENTDOWN)->EnableWindow(m_bMakeEventEnable);
}


void CScheduleMake::AddMakeEvent(DWORD dwMakeID, BOOL bCheck)
{
	int nResIdx = NOINDEX;
	for (int i = 0; i < MAX_MAKEEVENTRES; i++)
	{
		if (g_pMakeEventRes[i].dwID == dwMakeID)
		{
			nResIdx = i;
			break;
		}
	}

	if (nResIdx == NOINDEX)
		return;

	BOOL bExist = FALSE;

	int nCount = m_lstMakeEvent.GetItemCount();
	for (int i = 0; i < nCount; i++)
	{
		DWORD dwID = m_lstMakeEvent.GetItemData(i);
		if (dwID == dwMakeID)
		{
			bExist = TRUE;
			break;
		}
	}

	if (!bExist)
	{
		m_lstMakeEvent.InsertItem(nCount, L"");

		m_lstMakeEvent.SetItemData(nCount, dwMakeID);

		if (g_bTaiwanLang)
			m_lstMakeEvent.SetItemText(nCount, 1, g_pMakeEventRes[nResIdx].szTWName);
		else
			m_lstMakeEvent.SetItemText(nCount, 1, g_pMakeEventRes[nResIdx].szKRName);

		m_lstMakeEvent.SetCheck(nCount, bCheck);
	}
}


void CScheduleMake::OnBnClickedBtnMakeeventadd()
{
	int nIndex = m_cbMakeEvent.GetCurSel();
	if (nIndex < 0)
		return;

	AddMakeEvent(g_pMakeEventRes[nIndex].dwID, TRUE);
}


void CScheduleMake::OnBnClickedBtnMakeeventdel()
{
	POSITION Pos = m_lstMakeEvent.GetFirstSelectedItemPosition();
	while (Pos)
	{
		int nIndex = m_lstMakeEvent.GetNextSelectedItem(Pos);
		m_lstMakeEvent.DeleteItem(nIndex);

		Pos = m_lstMakeEvent.GetFirstSelectedItemPosition();
	}
}


void CScheduleMake::OnBnClickedBtnMakeeventup()
{
	POSITION pos = m_lstMakeEvent.GetFirstSelectedItemPosition();
	if (pos == NULL)
		return;

	int nIndex = m_lstMakeEvent.GetNextSelectedItem(pos);
	if (nIndex == 0)
		return;

	DWORD dwValue = m_lstMakeEvent.GetItemData(nIndex - 1);
	m_lstMakeEvent.SetItemData(nIndex - 1, m_lstMakeEvent.GetItemData(nIndex));
	m_lstMakeEvent.SetItemData(nIndex, dwValue);

	CString sTemp = m_lstMakeEvent.GetItemText(nIndex - 1, 1);
	m_lstMakeEvent.SetItemText(nIndex - 1, 1, m_lstMakeEvent.GetItemText(nIndex, 1));
	m_lstMakeEvent.SetItemText(nIndex, 1, sTemp);

	BOOL bCheck = m_lstMakeEvent.GetCheck(nIndex - 1);
	m_lstMakeEvent.SetCheck(nIndex - 1, m_lstMakeEvent.GetCheck(nIndex));
	m_lstMakeEvent.SetCheck(nIndex, bCheck);

	m_lstMakeEvent.SetItemState(nIndex, 0, LVIS_SELECTED);
	m_lstMakeEvent.SetItemState(nIndex - 1, LVIS_SELECTED, LVIS_SELECTED);
}


void CScheduleMake::OnBnClickedBtnMakeeventdown()
{
	POSITION pos = m_lstMakeEvent.GetFirstSelectedItemPosition();
	if (pos == NULL)
		return;

	int nIndex = m_lstMakeEvent.GetNextSelectedItem(pos);
	if (nIndex == m_lstMakeEvent.GetItemCount() - 1)
		return;

	DWORD dwValue = m_lstMakeEvent.GetItemData(nIndex + 1);
	m_lstMakeEvent.SetItemData(nIndex + 1, m_lstMakeEvent.GetItemData(nIndex));
	m_lstMakeEvent.SetItemData(nIndex, dwValue);

	CString sTemp = m_lstMakeEvent.GetItemText(nIndex + 1, 1);
	m_lstMakeEvent.SetItemText(nIndex + 1, 1, m_lstMakeEvent.GetItemText(nIndex, 1));
	m_lstMakeEvent.SetItemText(nIndex, 1, sTemp);

	BOOL bCheck = m_lstMakeEvent.GetCheck(nIndex + 1);
	m_lstMakeEvent.SetCheck(nIndex + 1, m_lstMakeEvent.GetCheck(nIndex));
	m_lstMakeEvent.SetCheck(nIndex, bCheck);

	m_lstMakeEvent.SetItemState(nIndex, 0, LVIS_SELECTED);
	m_lstMakeEvent.SetItemState(nIndex + 1, LVIS_SELECTED, LVIS_SELECTED);
}
