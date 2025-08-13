#pragma once


// CCardSearch dialog

class CCardSearch : public CDialog
{
	DECLARE_DYNAMIC(CCardSearch)

public:
	CCardSearch(CWnd* pParent = NULL);   // standard constructor
	virtual ~CCardSearch();

// Dialog Data
	enum { IDD = IDD_CARD_SEARCH };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	
	CString m_szCards;
	
	afx_msg void OnBnClickedOk();
	
	virtual BOOL OnInitDialog();
};
