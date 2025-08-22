#pragma once
#include "afxdialogex.h"


// CScheduleMake dialog

class CScheduleMake : public CDialogEx
{
	DECLARE_DYNAMIC(CScheduleMake)

public:
	CScheduleMake(CWnd* pParent = nullptr);   // standard constructor
	virtual ~CScheduleMake();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SCHEDULE_MAKE };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual BOOL OnInitDialog();
	virtual BOOL PreTranslateMessage(MSG* pMsg);

	DECLARE_MESSAGE_MAP()
public:
	BOOL m_bAutoOpenBox;

	BOOL m_bMakeBoxEnable;
	int m_nMakeBoxGold;
	BOOL m_bMakeBox[4];
	BOOL m_bMakeCrystalBox;

	BOOL m_bMakePetEnable;
	int m_nMakePetGold;
	BOOL m_bMakePet[2];

	BOOL m_bMakeMonEnable;
	int m_nMakeMonGold;
	BOOL m_bMakeMon[2];

	BOOL m_bMakeStoneEnable;
	int m_nMakeStoneGold;
	BOOL m_bMakeStone[4];

	BOOL m_bMakeMatEnable;
	int m_nMakeMatGold;
	BOOL m_bMakeMat[12];

	BOOL m_bMakeEventEnable;
	int m_nMakeEventGold;
	CComboBox m_cbMakeEvent;
	CListCtrl m_lstMakeEvent;

	void SetControlText();
	void LoadSetting(WCHAR* szPath);
	void SaveSetting(WCHAR* szPath);

	afx_msg void OnBnClickedCheckMakeboxenable();
	afx_msg void OnBnClickedCheckMakepetenable();
	afx_msg void OnBnClickedCheckMakemonenable();
	afx_msg void OnBnClickedCheckMakestoneenable();
	afx_msg void OnBnClickedCheckMakematenable();
	afx_msg void OnBnClickedCheckMakeeventenable();

	void AddMakeEvent(DWORD dwMakeID, BOOL bCheck);
	afx_msg void OnBnClickedBtnMakeeventadd();
	afx_msg void OnBnClickedBtnMakeeventdel();
	afx_msg void OnBnClickedBtnMakeeventup();
	afx_msg void OnBnClickedBtnMakeeventdown();
};
