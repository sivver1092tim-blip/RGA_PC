// SchedulePK.cpp : implementation file
//

#include "stdafx.h"
#include "Detail.h"
#include "SchedulePK.h"


// CSchedulePK dialog

IMPLEMENT_DYNAMIC(CSchedulePK, CDialog)

CSchedulePK::CSchedulePK(CWnd* pParent /*=NULL*/)
	: CDialog(CSchedulePK::IDD, pParent)
{

}

CSchedulePK::~CSchedulePK()
{
}

void CSchedulePK::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CSchedulePK, CDialog)
END_MESSAGE_MAP()


// CSchedulePK message handlers

BOOL CSchedulePK::OnInitDialog()
{
	CDialog::OnInitDialog();

	SetControlText();

	return TRUE;
}

BOOL CSchedulePK::PreTranslateMessage(MSG* pMsg)
{
	if (pMsg->wParam == VK_RETURN || pMsg->wParam == VK_ESCAPE)
		return TRUE;

	return CDialog::PreTranslateMessage(pMsg);
}


void CSchedulePK::SetControlText()
{
}

void CSchedulePK::LoadSetting(WCHAR *szPath)
{
}

void CSchedulePK::SaveSetting(WCHAR *szPath)
{
}