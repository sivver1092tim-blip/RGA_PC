#pragma once


// CSettingDlg dialog

class CSettingDlg : public CDialog
{
	DECLARE_DYNAMIC(CSettingDlg)

public:
	CSettingDlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~CSettingDlg();

// Dialog Data
	enum { IDD = IDD_SETTING_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	int bDisable;
	int nYear;
	int nMonth;
	int nDay;
	int nHour;
	int nMinute;
	afx_msg void OnChange();
	virtual BOOL OnInitDialog();
};
