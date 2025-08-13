// PathMode.cpp : implementation file
//

#include "stdafx.h"
#include "Supervisor.h"
#include "PathMode.h"


// CPathMode dialog

IMPLEMENT_DYNAMIC(CPathMode, CDialog)

CPathMode::CPathMode(CWnd* pParent /*=NULL*/)
	: CDialog(CPathMode::IDD, pParent)
	, m_nPatchMode(0)
{

}

CPathMode::~CPathMode()
{
}

void CPathMode::DoDataExchange(CDataExchange* pDX)
{
	DDX_Radio(pDX, IDC_RADIO1, m_nPatchMode);
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CPathMode, CDialog)
END_MESSAGE_MAP()


// CPathMode message handlers

BOOL CPathMode::OnInitDialog()
{
	CDialog::OnInitDialog();

	UpdateData(FALSE);

	return TRUE;
}
