#pragma once


// CPlayerName dialog

class CPlayerName : public CDialogEx
{
	DECLARE_DYNAMIC(CPlayerName)

public:

	CPlayerName(CWnd* pParent = nullptr);   // standard constructor
	virtual ~CPlayerName();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_PLAYER_NAME };
#endif

protected:

	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()

public:

	CComboBox m_cbPlayer;
	CString m_szPlayer;

	virtual BOOL OnInitDialog();
	
	afx_msg void OnVerify();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};
