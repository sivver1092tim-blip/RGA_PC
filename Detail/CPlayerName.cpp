// CPlayerName.cpp : implementation file
//

#include "stdafx.h"
#include "Detail.h"
#include "CPlayerName.h"
#include "afxdialogex.h"


// CPlayerName dialog

IMPLEMENT_DYNAMIC(CPlayerName, CDialogEx)

CPlayerName::CPlayerName(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_PLAYER_NAME, pParent)
	, m_szPlayer(_T(""))
{
	if (g_pGameInfo)
		g_pGameInfo->bType = 2;
}

CPlayerName::~CPlayerName()
{
}

void CPlayerName::DoDataExchange(CDataExchange* pDX)
{
	DDX_Control(pDX, IDC_COMBO1, m_cbPlayer);
	DDX_CBString(pDX, IDC_COMBO1, m_szPlayer);

	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CPlayerName, CDialogEx)
	ON_BN_CLICKED(IDOK, &CPlayerName::OnVerify)
	ON_WM_TIMER()
END_MESSAGE_MAP()


// CPlayerName message handlers


BOOL CPlayerName::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	SetTimer(0x20210802, 100, NULL);

	if(!m_szPlayer.IsEmpty())
		UpdateData(FALSE);

	return TRUE;
}


void CPlayerName::OnVerify()
{
	UpdateData();

	if (m_szPlayer.IsEmpty())
		return;

	CDialogEx::OnOK();
}


void CPlayerName::OnTimer(UINT_PTR nIDEvent)
{
	if (nIDEvent == 0x20210802)
	{
		if (g_pGameInfo && g_pGameInfo->bType == 0)
		{
			for (int i = 0; i < g_pGameInfo->nCount; i++)
				m_cbPlayer.AddString(g_pGameInfo->szName[i]);

			KillTimer(nIDEvent);
		}
	}

	CDialogEx::OnTimer(nIDEvent);
}
