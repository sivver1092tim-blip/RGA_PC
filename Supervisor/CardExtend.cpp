// CardExtend.cpp : implementation file
//

#include "stdafx.h"
#include "Supervisor.h"
#include "CardExtend.h"


// CCardExtend dialog

IMPLEMENT_DYNAMIC(CCardExtend, CDialog)

CCardExtend::CCardExtend(CWnd* pParent /*=NULL*/)
	: CDialog(CCardExtend::IDD, pParent)
	, m_nExtendHour(0)
{

}

CCardExtend::~CCardExtend()
{
}

void CCardExtend::DoDataExchange(CDataExchange* pDX)
{
	DDX_Text(pDX, IDC_EDIT1, m_nExtendHour);
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CCardExtend, CDialog)
END_MESSAGE_MAP()


// CCardExtend message handlers
