#pragma once


// CSchedulePK dialog

class CSchedulePK : public CDialog
{
	DECLARE_DYNAMIC(CSchedulePK)

public:
	CSchedulePK(CWnd* pParent = NULL);   // standard constructor
	virtual ~CSchedulePK();

// Dialog Data
	enum { IDD = IDD_SCHEDULE_PK };

protected:
	
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()

public:

	void SetControlText();
	void LoadSetting(WCHAR *szPath);
	void SaveSetting(WCHAR *szPath);

	virtual BOOL OnInitDialog();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
};
