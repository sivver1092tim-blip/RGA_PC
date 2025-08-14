#pragma once
#include "afxdialogex.h"


// CSubDevelop dialog

class CSubDevelop : public CDialogEx
{
	DECLARE_DYNAMIC(CSubDevelop)

public:
	CSubDevelop(CWnd* pParent = nullptr);   // standard constructor
	virtual ~CSubDevelop();

// Dialog Data
//#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SUB_DEVELOP };
//#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	void SetRdoReadType(E_IO_MEMORY_TYPE);
	void SetRdoWriteType(E_IO_MEMORY_TYPE);
	afx_msg void OnBnClickedBtnReadMemory();
	afx_msg void OnBnClickedBtnWriteMemory();
	afx_msg void OnBnClickedBtnInitCallerList();
	afx_msg void OnBnClickedBtnInitRegValueList();
	afx_msg void OnBnClickedBtnHookFunc();
	afx_msg void OnBnClickedBtnUnhookFunc();
	afx_msg void OnBnClickedBtnUnhookAll();
	afx_msg void OnBnClickedBtnRunCommand();
	afx_msg void OnBnClickedRdoReadTypeByte();
	afx_msg void OnBnClickedRdoReadTypeDword64();
	afx_msg void OnBnClickedRdoReadTypeDword();
	afx_msg void OnBnClickedRdoReadTypeWord();
	afx_msg void OnBnClickedRdoReadTypeWchar();
	afx_msg void OnBnClickedRdoReadTypeChar();
public:
	E_IO_MEMORY_TYPE m_nReadMemoryType;
	E_IO_MEMORY_TYPE m_nWriteMemoryType;
	CComboBox m_ctrlUnprintSameRegWhenHooked;
	CComboBox m_ctrlRegWhenHooked;
	CComboBox m_ctrlSignWhenHooked;
	CComboBox m_ctrlWriteUnitWhenHooked;
	CComboBox m_ctrlRunCommandNo;

	
	virtual BOOL OnInitDialog();
	afx_msg void OnChangeEdtNum1();
	afx_msg void OnChangeEdtNum2();
	afx_msg void OnChangeEdtNum4();
	afx_msg void OnChangeEdtNum5();
	afx_msg void OnChangeEdtNum7();
	afx_msg void OnChangeEdtNum8();
	afx_msg void OnChangeEdtNum10();
	afx_msg void OnChangeEdtNum11();
	afx_msg void OnChangeEdtNum13();
	afx_msg void OnChangeEdtNum14();
	afx_msg void OnChangeEdtNum16();
	afx_msg void OnChangeEdtNum17();
	afx_msg void OnBnClickedRdoWriteTypeByte();
	afx_msg void OnBnClickedRdoWriteTypeDword64();
	afx_msg void OnBnClickedRdoWriteTypeDword();
};
