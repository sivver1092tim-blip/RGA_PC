// CardSearch.cpp : implementation file
//

#include "stdafx.h"
#include "Supervisor.h"
#include "CardSearch.h"


// CCardSearch dialog

IMPLEMENT_DYNAMIC(CCardSearch, CDialog)

CCardSearch::CCardSearch(CWnd* pParent /*=NULL*/)
	: CDialog(CCardSearch::IDD, pParent)
	, m_szCards(_T(""))
{
}

CCardSearch::~CCardSearch()
{
}

void CCardSearch::DoDataExchange(CDataExchange* pDX)
{
	DDX_Text(pDX , IDC_EDIT1 , m_szCards);

	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CCardSearch, CDialog)
	ON_BN_CLICKED(IDOK, &CCardSearch::OnBnClickedOk)
END_MESSAGE_MAP()


// CCardSearch message handlers

void CCardSearch::OnBnClickedOk()
{
	UpdateData(TRUE);
	if(m_szCards.IsEmpty())
		return;
	
	OnOK();
}



BOOL CCardSearch::OnInitDialog()
{
	CDialog::OnInitDialog();

	return TRUE;
}
