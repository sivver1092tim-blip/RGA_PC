#pragma once
#include "resource.h"


// CCardExtend dialog

class CCardExtend : public CDialog
{
	DECLARE_DYNAMIC(CCardExtend)

public:
	CCardExtend(CWnd* pParent = NULL);   // standard constructor
	virtual ~CCardExtend();

// Dialog Data
	enum { IDD = IDD_CARD_EXTEND };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	int m_nExtendHour;
};
