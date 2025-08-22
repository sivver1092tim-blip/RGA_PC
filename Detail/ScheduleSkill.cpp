// ScheduleSkill.cpp : implementation file
//

#include "stdafx.h"
#include "Detail.h"
#include "afxdialogex.h"
#include "ScheduleSkill.h"

#include "SkillInterval.h"

// CScheduleSkill dialog

IMPLEMENT_DYNAMIC(CScheduleSkill, CDialogEx)

CScheduleSkill::CScheduleSkill(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_SCHEDULE_SKILL, pParent)
{

}

CScheduleSkill::~CScheduleSkill()
{
}

void CScheduleSkill::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_COMBO_CLASS, m_cbClass);
	DDX_Control(pDX, IDC_LIST_SKILLRES, m_lstSkillRes);
	DDX_Control(pDX, IDC_LIST_SKILLSET, m_lstSkillSet);
}


BEGIN_MESSAGE_MAP(CScheduleSkill, CDialogEx)
	ON_BN_CLICKED(IDC_BTN_ADD, &CScheduleSkill::OnBnClickedBtnAdd)
	ON_BN_CLICKED(IDC_BTN_DEL, &CScheduleSkill::OnBnClickedBtnDel)
	ON_BN_CLICKED(IDC_BTN_AUTO, &CScheduleSkill::OnBnClickedBtnAuto)
	ON_NOTIFY(NM_DBLCLK, IDC_LIST_SKILLSET, &CScheduleSkill::OnNMDblclkListSkillset)
	ON_CBN_SELCHANGE(IDC_COMBO_CLASS, &CScheduleSkill::OnCbnSelchangeComboClass)
END_MESSAGE_MAP()


// CScheduleSkill message handlers

BOOL CScheduleSkill::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  Add extra initialization here
	CString sLabel;
	SetControlText();


	for (int i = 0; i < MAX_CLASS; i++)
	{
		if (g_bTaiwanLang)
			m_cbClass.AddString(g_pCharActor[i].szTWName);
		else
			m_cbClass.AddString(g_pCharActor[i].szKRName);
	}

	if (g_bTaiwanLang)
		m_cbClass.AddString(L"我的技能");
	else
		m_cbClass.AddString(L"내스킬");

	m_cbClass.SetCurSel(0);


	m_lstSkillRes.SetExtendedStyle(m_lstSkillRes.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);
	m_lstSkillRes.InsertColumn(0, L"", LVCFMT_LEFT, 20);
	sLabel.LoadString(NULL, IDS_SKILLNAME, g_wLanguageID);
	m_lstSkillRes.InsertColumn(1, sLabel, LVCFMT_LEFT, 100);
	sLabel.LoadString(NULL, IDS_CHAR, g_wLanguageID);
	m_lstSkillRes.InsertColumn(2, sLabel, LVCFMT_LEFT, 50);


	m_lstSkillSet.SetExtendedStyle(m_lstSkillSet.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES | LVS_EX_CHECKBOXES);
	m_lstSkillSet.InsertColumn(0, L"", LVCFMT_LEFT, 20);
	sLabel.LoadString(NULL, IDS_SKILLNAME, g_wLanguageID);
	m_lstSkillSet.InsertColumn(1, sLabel, LVCFMT_LEFT, 100);
	sLabel.LoadString(NULL, IDS_INTERVAL, g_wLanguageID);
	m_lstSkillSet.InsertColumn(2, sLabel, LVCFMT_LEFT, 50);


	UpdateData(FALSE);

	OnCbnSelchangeComboClass();

	return TRUE;  // return TRUE unless you set the focus to a control
	// EXCEPTION: OCX Property Pages should return FALSE
}

void CScheduleSkill::SetControlText()
{
	if (g_wLanguageID != 0x412)
	{
		GetDlgItem(IDC_BTN_AUTO)->SetWindowTextW(L"自动");
	}
}

void CScheduleSkill::LoadSetting(WCHAR* szPath)
{
	FILE* fp;
	WCHAR szFile[MAX_PATH];

	swprintf_s(szFile, L"%s\\Skill.dat", szPath);
	_wfopen_s(&fp, szFile, L"rb");
	if (fp)
	{
		int nCount = 0;
		fread(&nCount, sizeof(int), 1, fp);

		m_lstSkillSet.DeleteAllItems();

		if (nCount > 0)
		{
			SKILL_INTERVAL* pSkillInterval = new SKILL_INTERVAL[nCount];
			if (pSkillInterval)
			{
				memset(pSkillInterval, 0, sizeof(SKILL_INTERVAL) * nCount);
				fread(pSkillInterval, sizeof(SKILL_INTERVAL), nCount, fp);

				for (int i = 0; i < nCount; i++)
					AddSkillSet(pSkillInterval[i].dwSkillID, pSkillInterval[i].nInterval, pSkillInterval[i].bEnable);

				delete[] pSkillInterval;
				pSkillInterval = NULL;
			}
		}

		fclose(fp);

		UpdateData(FALSE);
	}
}


void CScheduleSkill::SaveSetting(WCHAR* szPath)
{
	FILE* fp;
	WCHAR szFile[MAX_PATH];

	swprintf_s(szFile, L"%s\\Skill.dat", szPath);
	_wfopen_s(&fp, szFile, L"wb");
	if (fp)
	{
		UpdateData(TRUE);

		int nCount = m_lstSkillSet.GetItemCount();
		fwrite(&nCount, sizeof(int), 1, fp);

		if (nCount > 0)
		{
			SKILL_INTERVAL* pSkillInterval = new SKILL_INTERVAL[nCount];
			if (pSkillInterval)
			{
				memset(pSkillInterval, 0, sizeof(SKILL_INTERVAL) * nCount);

				for (int i = 0; i < nCount; i++)
				{
					pSkillInterval[i].dwSkillID = m_lstSkillSet.GetItemData(i);
					pSkillInterval[i].nInterval = _wtoi(m_lstSkillSet.GetItemText(i, 2));
					pSkillInterval[i].bEnable = m_lstSkillSet.GetCheck(i);
				}

				fwrite(pSkillInterval, sizeof(SKILL_INTERVAL), nCount, fp);

				delete[] pSkillInterval;
				pSkillInterval = NULL;
			}
		}

		fclose(fp);
	}
}


void CScheduleSkill::AddSkillRes(DWORD dwSkillID)
{
	int nResIdx = NOINDEX;
	for (int i = 0; i < MAX_SKILLRES; i++)
	{
		if (g_pSkillRes[i].dwID == dwSkillID)
		{
			nResIdx = i;
			break;
		}
	}

	if (nResIdx == NOINDEX || !g_pSkillRes[nResIdx].bCanAuto)
		return;

	BOOL bExist = FALSE;

	int nCount = m_lstSkillRes.GetItemCount();
	for (int i = 0; i < nCount; i++)
	{
		DWORD dwID = m_lstSkillRes.GetItemData(i);
		if (dwID == dwSkillID)
		{
			bExist = TRUE;
			break;
		}
	}

	if (!bExist)
	{
		m_lstSkillRes.InsertItem(nCount, L"");

		m_lstSkillRes.SetItemData(nCount, dwSkillID);

		if (g_bTaiwanLang)
			m_lstSkillRes.SetItemText(nCount, 1, g_pSkillRes[nResIdx].szTWName);
		else
			m_lstSkillRes.SetItemText(nCount, 1, g_pSkillRes[nResIdx].szKRName);

		int nClass = g_pSkillRes[nResIdx].nClassType;
		if (nClass == -1)
		{
			if (g_bTaiwanLang)
				m_lstSkillRes.SetItemText(nCount, 2, L"基本");
			else
				m_lstSkillRes.SetItemText(nCount, 2, L"기본");
		}
		else
		{
			if (g_bTaiwanLang)
				m_lstSkillRes.SetItemText(nCount, 2, g_pCharActor[nClass].szTWName);
			else
				m_lstSkillRes.SetItemText(nCount, 2, g_pCharActor[nClass].szKRName);
		}
	}
}


void CScheduleSkill::AddSkillSet(DWORD dwSkillID, int nInterval, BOOL bCheck)
{
	int nResIdx = NOINDEX;
	for (int i = 0; i < MAX_SKILLRES; i++)
	{
		if (g_pSkillRes[i].dwID == dwSkillID)
		{
			nResIdx = i;
			break;
		}
	}

	if (nResIdx == NOINDEX || !g_pSkillRes[nResIdx].bCanAuto)
		return;

	BOOL bExist = FALSE;

	int nCount = m_lstSkillSet.GetItemCount();
	for (int i = 0; i < nCount; i++)
	{
		DWORD dwID = m_lstSkillSet.GetItemData(i);
		if (dwID == dwSkillID)
		{
			bExist = TRUE;
			break;
		}
	}

	if (!bExist)
	{
		m_lstSkillSet.InsertItem(nCount, L"");

		m_lstSkillSet.SetItemData(nCount, dwSkillID);

		if (g_bTaiwanLang)
			m_lstSkillSet.SetItemText(nCount, 1, g_pSkillRes[nResIdx].szTWName);
		else
			m_lstSkillSet.SetItemText(nCount, 1, g_pSkillRes[nResIdx].szKRName);

		WCHAR szTemp[MAX_NAME];
		swprintf_s(szTemp, L"%d", nInterval);
		m_lstSkillSet.SetItemText(nCount, 2, szTemp);

		m_lstSkillSet.SetCheck(nCount, bCheck);
	}
}
void CScheduleSkill::OnBnClickedBtnAdd()
{
	// TODO: Add your control notification handler code here
	if (m_lstSkillRes.GetSelectedCount() == 0)
		return;

	CSkillInterval dlgInterval;
	if (dlgInterval.DoModal() != IDOK)
		return;

	POSITION Pos = m_lstSkillRes.GetFirstSelectedItemPosition();
	while (Pos)
	{
		int nIndex = m_lstSkillRes.GetNextSelectedItem(Pos);

		DWORD dwSkillID = m_lstSkillRes.GetItemData(nIndex);
		AddSkillSet(dwSkillID, dlgInterval.m_nInterval, TRUE);
	}
}

void CScheduleSkill::OnBnClickedBtnDel()
{
	// TODO: Add your control notification handler code here
	POSITION Pos = m_lstSkillSet.GetFirstSelectedItemPosition();
	while (Pos)
	{
		int nIndex = m_lstSkillSet.GetNextSelectedItem(Pos);
		m_lstSkillSet.DeleteItem(nIndex);

		Pos = m_lstSkillSet.GetFirstSelectedItemPosition();
	}
}

void CScheduleSkill::OnBnClickedBtnAuto()
{
	// TODO: Add your control notification handler code here
	m_lstSkillSet.DeleteAllItems();

	int nCurSel = m_cbClass.GetCurSel();
	if (nCurSel < 3)
	{
		for (int i = 0; i < 10; i++)
		{
			if (g_pDefaultSkill[nCurSel][i].dwSkillID == 0)
				break;

			AddSkillSet(g_pDefaultSkill[nCurSel][i].dwSkillID, g_pDefaultSkill[nCurSel][i].nInterval, g_pDefaultSkill[nCurSel][i].bEnable);
		}
	}
	else
	{
		int nCount = m_lstSkillRes.GetItemCount();
		for (int i = 0; i < nCount; i++)
		{
			DWORD dwSkillID = m_lstSkillRes.GetItemData(i);

			for (int j = 0; j < MAX_CLASS; j++)
			{
				for (int k = 0; k < 10; k++)
				{
					if (g_pDefaultSkill[j][k].dwSkillID == 0)
						break;

					if (g_pDefaultSkill[j][k].dwSkillID == dwSkillID)
						AddSkillSet(g_pDefaultSkill[j][k].dwSkillID, g_pDefaultSkill[j][k].nInterval, g_pDefaultSkill[j][k].bEnable);
				}
			}
		}
	}
}

void CScheduleSkill::OnNMDblclkListSkillset(NMHDR* pNMHDR, LRESULT* pResult)
{
	LPNMITEMACTIVATE pNMItemActivate = reinterpret_cast<LPNMITEMACTIVATE>(pNMHDR);
	if (pNMItemActivate->iItem < 0)
		return;

	CSkillInterval dlgInterval;
	if (dlgInterval.DoModal() != IDOK)
		return;

	WCHAR szTemp[MAX_NAME];
	swprintf_s(szTemp, L"%d", dlgInterval.m_nInterval);
	m_lstSkillSet.SetItemText(pNMItemActivate->iItem, 2, szTemp);

	*pResult = 0;
}

void CScheduleSkill::OnCbnSelchangeComboClass()
{
	// TODO: Add your control notification handler code here
	m_lstSkillRes.DeleteAllItems();

	int nCurSel = m_cbClass.GetCurSel();
	if (nCurSel < 3)
	{
		for (int i = 0; i < MAX_SKILLRES; i++)
		{
			if (g_pSkillRes[i].nClassType == -1 || g_pSkillRes[i].nClassType == nCurSel)
				AddSkillRes(g_pSkillRes[i].dwID);
		}
	}
	else
	{
		GetDlgItem(IDC_COMBO_CLASS)->EnableWindow(FALSE);
		//CreateThread(0, 0, (LPTHREAD_START_ROUTINE)GetSkillInfo, (LPVOID)this, 0, 0);
	}
}

//DWORD GetSkillInfo(CScheduleSkill* pDlg)
//{
//	g_GameInfo.bType = 0;
//	SendEvent(OPCODE_REQUEST_GAMEINFO, 4);
//
//	int nTickCount = 0;
//	while (1)
//	{
//		if (g_GameInfo.bType == 4)
//			break;
//
//		nTickCount++;
//		if (nTickCount >= 300)
//			goto Thread_End;
//
//		Sleep(1);
//	}
//
//	for (int i = 0; i < g_GameInfo.nCount; i++)
//	{
//		DWORD dwSkillID = *(DWORD*)g_GameInfo.szName[i];
//
//		pDlg->AddSkillRes(dwSkillID);
//	}
//
//Thread_End:
//
//	pDlg->GetDlgItem(IDC_COMBO_CLASS)->EnableWindow(TRUE);
//	return 0;
//}