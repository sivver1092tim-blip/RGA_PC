#pragma once


// CPathMode dialog

class CPathMode : public CDialog
{
	DECLARE_DYNAMIC(CPathMode)

public:
	CPathMode(CWnd* pParent = NULL);   // standard constructor
	virtual ~CPathMode();

// Dialog Data
	enum { IDD = IDD_PATCH_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	int m_nPatchMode;
	virtual BOOL OnInitDialog();
};
