// SubDevelop.cpp : implementation file
//

#include "stdafx.h"
#include "Detail.h"
#include "afxdialogex.h"
#include "SubDevelop.h"


// CSubDevelop dialog

IMPLEMENT_DYNAMIC(CSubDevelop, CDialogEx)

CSubDevelop::CSubDevelop(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_SUB_DEVELOP, pParent)
{
	m_nReadMemoryType = e_IO_Memory_BYTE;
	m_nWriteMemoryType = e_IO_Memory_BYTE;
}

CSubDevelop::~CSubDevelop()
{
}

void CSubDevelop::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_CBO_UNPRINT_SAME_REG_WHEN_HOOKED, m_ctrlUnprintSameRegWhenHooked);
	DDX_Control(pDX, IDC_CBO_REGISTER_WHEN_HOOKED, m_ctrlRegWhenHooked);
	DDX_Control(pDX, IDC_CBO_SIGN_WHEN_HOOKED, m_ctrlSignWhenHooked);
	DDX_Control(pDX, IDC_CBO_WRITE_UNIT, m_ctrlWriteUnitWhenHooked);
	DDX_Control(pDX, IDC_CBO_RUN_COMMAND_NO, m_ctrlRunCommandNo);
}


BOOL CSubDevelop::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  Add extra initialization here
	SetDlgItemText(IDC_EDT_READ_MEM_LENGTH, _T("0x200"));

	SetRdoReadType(e_IO_Memory_BYTE);
	SetRdoWriteType(e_IO_Memory_BYTE);

	SetDlgItemInt(IDC_EDT_DELTA_HOOK_OFFSET, -1);

	CString strTemp;

	for (int i = 0; i < 50; i++)
	{
		strTemp.Format(_T("%d"), i + 1);
		m_ctrlRunCommandNo.AddString(strTemp);
	}
	m_ctrlRunCommandNo.SetCurSel(0);

	for (int i = e_Reg_RAX; i < e_Reg_Count; i++)
	{
		strTemp.Format(_T("%s"), g_aryRegisterList[i]);
		m_ctrlRegWhenHooked.AddString(strTemp);
	}
	m_ctrlRegWhenHooked.SetCurSel(0);

	for (int i = e_DVT_BIT; i < e_DVT_Count; i++)
	{
		strTemp.Format(_T("%s"), g_aryDataValueTypeList[i]);
		m_ctrlWriteUnitWhenHooked.AddString(strTemp);
	}
	m_ctrlWriteUnitWhenHooked.SetCurSel(0);

	for (int i = e_Sign_Plus; i < e_Sign_Count; i++)
	{
		strTemp.Format(_T("%s"), g_arySignList[i]);
		m_ctrlSignWhenHooked.AddString(strTemp);
	}
	m_ctrlSignWhenHooked.SetCurSel(0);

	for (int i = e_Reg_RAX; i < e_Reg_Count; i++)
	{
		strTemp.Format(_T("%s"), g_aryRegisterList[i]);
		m_ctrlUnprintSameRegWhenHooked.AddString(strTemp);
	}
	m_ctrlUnprintSameRegWhenHooked.SetCurSel(0);
	return TRUE;  // return TRUE unless you set the focus to a control
	// EXCEPTION: OCX Property Pages should return FALSE
}

BEGIN_MESSAGE_MAP(CSubDevelop, CDialogEx)
	ON_BN_CLICKED(IDC_BTN_READ_MEMORY, &CSubDevelop::OnBnClickedBtnReadMemory)
	ON_BN_CLICKED(IDC_BTN_WRITE_MEMORY, &CSubDevelop::OnBnClickedBtnWriteMemory)
	ON_BN_CLICKED(IDC_BTN_INIT_CALLER_LIST, &CSubDevelop::OnBnClickedBtnInitCallerList)
	ON_BN_CLICKED(IDC_BTN_INIT_REG_VALUE_LIST, &CSubDevelop::OnBnClickedBtnInitRegValueList)
	ON_BN_CLICKED(IDC_BTN_HOOK_FUNC, &CSubDevelop::OnBnClickedBtnHookFunc)
	ON_BN_CLICKED(IDC_BTN_UNHOOK_FUNC, &CSubDevelop::OnBnClickedBtnUnhookFunc)
	ON_BN_CLICKED(IDC_BTN_UNHOOK_ALL, &CSubDevelop::OnBnClickedBtnUnhookAll)
	ON_BN_CLICKED(IDC_BTN_RUN_COMMAND, &CSubDevelop::OnBnClickedBtnRunCommand)
	ON_BN_CLICKED(IDC_RDO_READ_TYPE_BYTE, &CSubDevelop::OnBnClickedRdoReadTypeByte)
	ON_BN_CLICKED(IDC_RDO_READ_TYPE_DWORD64, &CSubDevelop::OnBnClickedRdoReadTypeDword64)
	ON_BN_CLICKED(IDC_RDO_READ_TYPE_DWORD, &CSubDevelop::OnBnClickedRdoReadTypeDword)
	ON_BN_CLICKED(IDC_RDO_READ_TYPE_WORD, &CSubDevelop::OnBnClickedRdoReadTypeWord)
	ON_BN_CLICKED(IDC_RDO_READ_TYPE_WCHAR, &CSubDevelop::OnBnClickedRdoReadTypeWchar)
	ON_BN_CLICKED(IDC_RDO_READ_TYPE_CHAR, &CSubDevelop::OnBnClickedRdoReadTypeChar)
	ON_EN_CHANGE(IDC_EDT_NUM1, &CSubDevelop::OnChangeEdtNum1)
	ON_EN_CHANGE(IDC_EDT_NUM2, &CSubDevelop::OnChangeEdtNum2)
	ON_EN_CHANGE(IDC_EDT_NUM4, &CSubDevelop::OnChangeEdtNum4)
	ON_EN_CHANGE(IDC_EDT_NUM5, &CSubDevelop::OnChangeEdtNum5)
	ON_EN_CHANGE(IDC_EDT_NUM7, &CSubDevelop::OnChangeEdtNum7)
	ON_EN_CHANGE(IDC_EDT_NUM8, &CSubDevelop::OnChangeEdtNum8)
	ON_EN_CHANGE(IDC_EDT_NUM10, &CSubDevelop::OnChangeEdtNum10)
	ON_EN_CHANGE(IDC_EDT_NUM11, &CSubDevelop::OnChangeEdtNum11)
	ON_EN_CHANGE(IDC_EDT_NUM13, &CSubDevelop::OnChangeEdtNum13)
	ON_EN_CHANGE(IDC_EDT_NUM14, &CSubDevelop::OnChangeEdtNum14)
	ON_EN_CHANGE(IDC_EDT_NUM16, &CSubDevelop::OnChangeEdtNum16)
	ON_EN_CHANGE(IDC_EDT_NUM17, &CSubDevelop::OnChangeEdtNum17)
END_MESSAGE_MAP()


// CSubDevelop message handlers

void CSubDevelop::SetRdoReadType(E_IO_MEMORY_TYPE eReadType)
{
	SET_CHECK(IDC_RDO_READ_TYPE_BYTE, FALSE);
	SET_CHECK(IDC_RDO_READ_TYPE_DWORD64, FALSE);
	SET_CHECK(IDC_RDO_READ_TYPE_DWORD, FALSE);
	SET_CHECK(IDC_RDO_READ_TYPE_WORD, FALSE);
	SET_CHECK(IDC_RDO_READ_TYPE_WCHAR, FALSE);
	SET_CHECK(IDC_RDO_READ_TYPE_CHAR, FALSE);

	switch (eReadType)
	{
	case e_IO_Memory_BYTE:
		SET_CHECK(IDC_RDO_READ_TYPE_BYTE, TRUE);
		break;
	case e_IO_Memory_DWORD64:
		SET_CHECK(IDC_RDO_READ_TYPE_DWORD64, TRUE);
		break;
	case e_IO_Memory_DWORD:
		SET_CHECK(IDC_RDO_READ_TYPE_DWORD, TRUE);
		break;
	case e_IO_Memory_WORD:
		SET_CHECK(IDC_RDO_READ_TYPE_WORD, TRUE);
		break;
	case e_IO_Memory_WCHAR:
		SET_CHECK(IDC_RDO_READ_TYPE_WCHAR, TRUE);
		break;
	case e_IO_Memory_CHAR:
		SET_CHECK(IDC_RDO_READ_TYPE_CHAR, TRUE);
		break;
	}
}

void CSubDevelop::SetRdoWriteType(E_IO_MEMORY_TYPE eWriteType)
{
	SET_CHECK(IDC_RDO_WRITE_TYPE_BYTE, FALSE);
	SET_CHECK(IDC_RDO_WRITE_TYPE_DWORD64, FALSE);
	SET_CHECK(IDC_RDO_WRITE_TYPE_DWORD, FALSE);

	switch (eWriteType)
	{
	case e_IO_Memory_BYTE:
		SET_CHECK(IDC_RDO_WRITE_TYPE_BYTE, TRUE);
		break;
	case e_IO_Memory_DWORD64:
		SET_CHECK(IDC_RDO_WRITE_TYPE_DWORD64, TRUE);
		break;
	case e_IO_Memory_DWORD:
		SET_CHECK(IDC_RDO_WRITE_TYPE_DWORD, TRUE);
		break;
	}
}

void CSubDevelop::OnBnClickedBtnReadMemory()
{
	// TODO: Add your control notification handler code here
	CString strReadAddr, strLength;
	GetDlgItemText(IDC_EDT_READ_MEM_ADDRESS, strReadAddr);
	GetDlgItemText(IDC_EDT_READ_MEM_LENGTH, strLength);
	if (strReadAddr.IsEmpty() || strLength.IsEmpty())
	{
		MessageBox(_T("Please input read bytes and length"));
		return;
	}

	DWORD dwReadType = 0;
	if (GET_CHECK(IDC_RDO_READ_TYPE_BYTE) == TRUE)
		dwReadType = 0;
	else if (GET_CHECK(IDC_RDO_READ_TYPE_WORD) == TRUE)
		dwReadType = 1;
	else if (GET_CHECK(IDC_RDO_READ_TYPE_DWORD) == TRUE)
		dwReadType = 2;
	else if (GET_CHECK(IDC_RDO_READ_TYPE_CHAR) == TRUE)
		dwReadType = 3;
	else if (GET_CHECK(IDC_RDO_READ_TYPE_WCHAR) == TRUE)
		dwReadType = 4;
	else if (GET_CHECK(IDC_RDO_READ_TYPE_DWORD64) == TRUE)
		dwReadType = 5;

	if (g_pGameMapping)
	{
		g_pGameMapping->bReadMemoryFlag = 1;
		g_pGameMapping->qwReadAddress = _tcstoui64(strReadAddr.GetBuffer(), NULL, 16);
		g_pGameMapping->bReadIsRVA = GET_CHECK(IDC_CHK_RVA_READ);
		g_pGameMapping->dwReadLength = _tcstoui64(strLength.GetBuffer(), NULL, 16);
		g_pGameMapping->dwReadType = dwReadType;
	}
}

void CSubDevelop::OnBnClickedBtnWriteMemory()
{
	// TODO: Add your control notification handler code here
	CString strWriteAddr, strByteArray, strDebugClientNo;
	GetDlgItemText(IDC_EDT_WRITE_MEM_ADDRESS, strWriteAddr);
	GetDlgItemText(IDC_EDT_WRITE_MEM_CONTENT, strByteArray);
	if (strWriteAddr.IsEmpty())
	{
		MessageBox(_T("Please input write bytes"));
		return;
	}

	if (strByteArray.IsEmpty())
	{
		MessageBox(_T("Please input write content"));
		return;
	}
	if (!g_pGameMapping)
	{
		MessageBox(_T("Game is not connected"));
		return;
	}

	g_pGameMapping->qwWriteAddress = _tcstoui64(strWriteAddr.GetBuffer(), NULL, 16);
	if (m_nWriteMemoryType == e_IO_Memory_BYTE)
	{

		TCHAR* tszContext = NULL;
		TCHAR* tszPos = _tcstok_s(strByteArray.GetBuffer(), _T(" "), &tszContext);
		int nLength = 0;
		while (tszPos != NULL)
		{
			BYTE bValue = (BYTE)_tcstoul(tszPos, NULL, 16);
			g_pGameMapping->aryWriteBytes[nLength] = bValue;

			tszPos = _tcstok_s(NULL, _T(" "), &tszContext);
			nLength++;
		}
		g_pGameMapping->qwWriteLength = nLength;
	}
	else
	{
		g_pGameMapping->qwWriteLength = 8;
		g_pGameMapping->qwWriteValue = _tcstoui64(strByteArray.GetBuffer(), NULL, 16);
	}

	g_pGameMapping->bWriteIsRVA = GET_CHECK(IDC_CHK_RVA_WRITE);
}

void CSubDevelop::OnBnClickedBtnInitCallerList()
{
	// TODO: Add your control notification handler code here
	if (g_pGameMapping)
		g_pGameMapping->bHookInitUSCListFlag = 1;
}

void CSubDevelop::OnBnClickedBtnInitRegValueList()
{
	// TODO: Add your control notification handler code here
	if (g_pGameMapping)
		g_pGameMapping->bHookInitUSPListFlag = 1;
}

void CSubDevelop::OnBnClickedBtnHookFunc()
{
	// TODO: Add your control notification handler code here
	CString strHookAddr, strDebugClientNo, strHexValue, strReadLength, strWriteHexValue;
	GetDlgItemText(IDC_EDT_FUNC_ADDRESS, strHookAddr);
	GetDlgItemText(IDC_EDT_HEX_VALUE_WHEN_HOOKED, strHexValue);
	GetDlgItemText(IDC_EDT_HEX_READLENGTH_WHEN_HOOKED, strReadLength);
	GetDlgItemText(IDC_EDT_HEX_VALUE_TO_WRITE_WHEN_HOOKED, strWriteHexValue);
	if (strHookAddr.IsEmpty())
	{
		MessageBox(_T("Please input function address to hook"));
		return;
	}

	if (!g_pGameMapping)
	{
		MessageBox(L"Game is not connected");
		return;
	}
	g_pGameMapping->bHookMemoryFlag = 1;
	g_pGameMapping->qwHookAddress = _tcstoui64(strHookAddr.GetBuffer(), NULL, 16);
	g_pGameMapping->nNextHookDelta = GetDlgItemInt(IDC_EDT_DELTA_HOOK_OFFSET);
	g_pGameMapping->bWriteIsRVA = GET_CHECK(IDC_CHK_IS_RVA_ADDRESS);

	g_pGameMapping->stExtraRegisterInfo.bUnprintSameCaller = GET_CHECK(IDC_CHK_UNPRINT_SAME_CALLER);
	g_pGameMapping->stExtraRegisterInfo.bUnprintSameRegister = GET_CHECK(IDC_CHK_UNPRINT_SAME_PARAM);
	g_pGameMapping->stExtraRegisterInfo.dwUnprintSameRegIdxWhenHooked = m_ctrlUnprintSameRegWhenHooked.GetCurSel();

	g_pGameMapping->stExtraRegisterInfo.bReadValueWhenHooked = GET_CHECK(IDC_CHK_READ_VALUE_WHEN_HOOKED);
	g_pGameMapping->stExtraRegisterInfo.dwReadRegIdxWhenHooked = m_ctrlRegWhenHooked.GetCurSel();
	g_pGameMapping->stExtraRegisterInfo.dwSignWhenHooked = m_ctrlSignWhenHooked.GetCurSel();
	g_pGameMapping->stExtraRegisterInfo.dwOffsetValueToReadWhenHooked = _tcstoul(strHexValue.GetBuffer(), NULL, 16);
	g_pGameMapping->stExtraRegisterInfo.dwLengthToReadWhenHooked = _tcstoul(strReadLength.GetBuffer(), NULL, 16);

	g_pGameMapping->stExtraRegisterInfo.bWriteValueWhenHooked = GET_CHECK(IDC_CHK_WRITE_VALUE_WHEN_HOOKED);
	g_pGameMapping->stExtraRegisterInfo.dwWriteUnitWhenHooked = m_ctrlWriteUnitWhenHooked.GetCurSel();
	g_pGameMapping->stExtraRegisterInfo.qwHexValueToWriteWhenHooked = _tcstoul(strWriteHexValue.GetBuffer(), NULL, 16);
	g_pGameMapping->stExtraRegisterInfo.bWriteToOffset = GET_CHECK(IDC_CHK_WRITE_TO_OFFSET);

}

void CSubDevelop::OnBnClickedBtnUnhookFunc()
{
	// TODO: Add your control notification handler code here
	CString strHookAddr, strDebugClientNo;
	GetDlgItemText(IDC_EDT_FUNC_ADDRESS, strHookAddr);
	if (strHookAddr.IsEmpty())
	{
		MessageBox(_T("Please input function address to Unhook"));
		return;
	}

	if (!g_pGameMapping)
	{
		MessageBox(L"Game is not connected");
		return;
	}

	g_pGameMapping->bUnHookMemoryFlag = 1;
	g_pGameMapping->bUnHookIsRVA = GET_CHECK(IDC_CHK_IS_RVA_ADDRESS);
	g_pGameMapping->qwUnHookAddress = _tcstoui64(strHookAddr.GetBuffer(), NULL, 16);
}

void CSubDevelop::OnBnClickedBtnUnhookAll()
{
	// TODO: Add your control notification handler code here
	if (!g_pGameMapping)
	{
		MessageBox(L"Game is not connected");
		return;
	}

	g_pGameMapping->bUnHookAllMemoryFlag = 1;
}

void CSubDevelop::OnBnClickedBtnRunCommand()
{
	// TODO: Add your control notification handler code here
	// TODO: Add your control notification handler code here
	CString strParam1, strParam2, strParam3, strParam4, strParam5, strParam6, strParam7, strParam8, strParam9, strParam10, strStringParam, strDebugClientNo;
	GetDlgItemText(IDC_EDT_RUN_CMD_PARAM1, strParam1);
	GetDlgItemText(IDC_EDT_RUN_CMD_PARAM2, strParam2);
	GetDlgItemText(IDC_EDT_RUN_CMD_PARAM3, strParam3);
	GetDlgItemText(IDC_EDT_RUN_CMD_PARAM4, strParam4);
	GetDlgItemText(IDC_EDT_RUN_CMD_PARAM5, strParam5);
	GetDlgItemText(IDC_EDT_RUN_CMD_PARAM6, strParam6);
	GetDlgItemText(IDC_EDT_RUN_CMD_PARAM7, strParam7);
	GetDlgItemText(IDC_EDT_RUN_CMD_PARAM8, strParam8);
	GetDlgItemText(IDC_EDT_RUN_CMD_PARAM9, strParam9);
	GetDlgItemText(IDC_EDT_RUN_CMD_PARAM10, strParam10);
	GetDlgItemText(IDC_EDT_RUN_CMD_STRING, strStringParam);

	if (!g_pGameMapping)
	{
		MessageBox(L"Game is not connected");
		return;
	}

	g_pGameMapping->bRunCommandFlag = 1;
	g_pGameMapping->qwCommandNo = GetDlgItemInt(IDC_CBO_RUN_COMMAND_NO);
	g_pGameMapping->qwParam1 = _tcstoui64(strParam1, NULL, 16);
	g_pGameMapping->qwParam2 = _tcstoui64(strParam2, NULL, 16);
	g_pGameMapping->qwParam3 = _tcstoui64(strParam3, NULL, 16);
	g_pGameMapping->qwParam4 = _tcstoui64(strParam4, NULL, 16);
	g_pGameMapping->qwParam5 = _tcstoui64(strParam5, NULL, 16);
	g_pGameMapping->qwParam6 = _tcstoui64(strParam6, NULL, 16);
	g_pGameMapping->qwParam7 = _tcstoui64(strParam7, NULL, 16);
	g_pGameMapping->qwParam8 = _tcstoui64(strParam8, NULL, 16);
	g_pGameMapping->qwParam9 = _tcstoui64(strParam9, NULL, 16);
	g_pGameMapping->qwParam10 = _tcstoui64(strParam10, NULL, 16);

	wcscpy_s(g_pGameMapping->wszStringParam, MAX_STRING_LEN, strStringParam.GetBuffer());
}

void CSubDevelop::OnBnClickedRdoReadTypeByte()
{
	// TODO: Add your control notification handler code here
	SetRdoReadType(e_IO_Memory_BYTE);
	m_nReadMemoryType = e_IO_Memory_BYTE;
}

void CSubDevelop::OnBnClickedRdoReadTypeDword64()
{
	// TODO: Add your control notification handler code here
	SetRdoReadType(e_IO_Memory_DWORD64);
	m_nReadMemoryType = e_IO_Memory_DWORD64;
}

void CSubDevelop::OnBnClickedRdoReadTypeDword()
{
	// TODO: Add your control notification handler code here
	SetRdoReadType(e_IO_Memory_DWORD);
	m_nReadMemoryType = e_IO_Memory_DWORD;
}

void CSubDevelop::OnBnClickedRdoReadTypeWord()
{
	// TODO: Add your control notification handler code here
	SetRdoReadType(e_IO_Memory_WORD);
	m_nReadMemoryType = e_IO_Memory_WORD;
}

void CSubDevelop::OnBnClickedRdoReadTypeWchar()
{
	// TODO: Add your control notification handler code here
	SetRdoReadType(e_IO_Memory_WCHAR);
	m_nReadMemoryType = e_IO_Memory_WCHAR;
}

void CSubDevelop::OnBnClickedRdoReadTypeChar()
{
	// TODO: Add your control notification handler code here
	SetRdoReadType(e_IO_Memory_CHAR);
	m_nReadMemoryType = e_IO_Memory_CHAR;
}

void CSubDevelop::OnChangeEdtNum1()
{
	// TODO:  If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Add your control notification handler code here
	CString strNum1, strNum2, strNum3;
	GetDlgItemText(IDC_EDT_NUM1, strNum1);
	GetDlgItemText(IDC_EDT_NUM2, strNum2);
	DWORD64 qwNum1, qwNum2, qwNum3;
	qwNum1 = _tcstoui64(strNum1.GetBuffer(), NULL, 16);
	qwNum2 = _tcstoui64(strNum2.GetBuffer(), NULL, 16);
	qwNum3 = qwNum1 + qwNum2;
	strNum3.Format(L"%llX", qwNum3);
	SetDlgItemText(IDC_EDT_NUM3, strNum3);
}

void CSubDevelop::OnChangeEdtNum2()
{
	// TODO:  If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Add your control notification handler code here
	OnChangeEdtNum1();
}

void CSubDevelop::OnChangeEdtNum4()
{
	// TODO:  If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Add your control notification handler code here
	CString strNum1, strNum2, strNum3;
	GetDlgItemText(IDC_EDT_NUM4, strNum1);
	GetDlgItemText(IDC_EDT_NUM5, strNum2);
	DWORD64 qwNum1, qwNum2, qwNum3;
	qwNum1 = _tcstoui64(strNum1.GetBuffer(), NULL, 16);
	qwNum2 = _tcstoui64(strNum2.GetBuffer(), NULL, 16);
	qwNum3 = qwNum1 + qwNum2;
	strNum3.Format(L"%llX", qwNum3);
	SetDlgItemText(IDC_EDT_NUM6, strNum3);
}

void CSubDevelop::OnChangeEdtNum5()
{
	// TODO:  If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Add your control notification handler code here
	OnChangeEdtNum4();
}

void CSubDevelop::OnChangeEdtNum7()
{
	// TODO:  If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Add your control notification handler code here
	CString strNum1, strNum2, strNum3;
	GetDlgItemText(IDC_EDT_NUM7, strNum1);
	GetDlgItemText(IDC_EDT_NUM8, strNum2);
	DWORD64 qwNum1, qwNum2, qwNum3;
	qwNum1 = _tcstoui64(strNum1.GetBuffer(), NULL, 16);
	qwNum2 = _tcstoui64(strNum2.GetBuffer(), NULL, 16);
	qwNum3 = qwNum1 - qwNum2;
	strNum3.Format(L"%llX", qwNum3);
	SetDlgItemText(IDC_EDT_NUM9, strNum3);
}

void CSubDevelop::OnChangeEdtNum8()
{
	// TODO:  If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Add your control notification handler code here
	OnChangeEdtNum7();
}

void CSubDevelop::OnChangeEdtNum10()
{
	// TODO:  If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Add your control notification handler code here
	CString strNum1, strNum2, strNum3;
	GetDlgItemText(IDC_EDT_NUM10, strNum1);
	GetDlgItemText(IDC_EDT_NUM11, strNum2);
	DWORD64 qwNum1, qwNum2, qwNum3;
	qwNum1 = _tcstoui64(strNum1.GetBuffer(), NULL, 16);
	qwNum2 = _tcstoui64(strNum2.GetBuffer(), NULL, 16);
	qwNum3 = qwNum1 - qwNum2;
	strNum3.Format(L"%llX", qwNum3);
	SetDlgItemText(IDC_EDT_NUM12, strNum3);
}

void CSubDevelop::OnChangeEdtNum11()
{
	// TODO:  If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Add your control notification handler code here
	OnChangeEdtNum10();
}

void CSubDevelop::OnChangeEdtNum13()
{
	// TODO:  If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Add your control notification handler code here
	CString strNum1, strNum2, strNum3;
	GetDlgItemText(IDC_EDT_NUM13, strNum1);
	GetDlgItemText(IDC_EDT_NUM14, strNum2);
	DWORD64 qwNum1, qwNum2, qwNum3;
	qwNum1 = _tcstoui64(strNum1.GetBuffer(), NULL, 16);
	qwNum2 = _tcstoui64(strNum2.GetBuffer(), NULL, 16);
	qwNum3 = qwNum1 - qwNum2;
	strNum3.Format(L"%llX", qwNum3);
	SetDlgItemText(IDC_EDT_NUM15, strNum3);
}

void CSubDevelop::OnChangeEdtNum14()
{
	// TODO:  If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Add your control notification handler code here
	OnChangeEdtNum13();
}

void CSubDevelop::OnChangeEdtNum16()
{
	// TODO:  If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Add your control notification handler code here
	CString strNum1, strNum2, strNum3;
	GetDlgItemText(IDC_EDT_NUM16, strNum1);
	GetDlgItemText(IDC_EDT_NUM17, strNum2);
	DWORD64 qwNum1, qwNum2, qwNum3;
	qwNum1 = _tcstoui64(strNum1.GetBuffer(), NULL, 16);
	qwNum2 = _tcstoui64(strNum2.GetBuffer(), NULL, 16);
	qwNum3 = qwNum1 - qwNum2;
	strNum3.Format(L"%llX", qwNum3);
	SetDlgItemText(IDC_EDT_NUM18, strNum3);
}

void CSubDevelop::OnChangeEdtNum17()
{
	// TODO:  If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Add your control notification handler code here
	OnChangeEdtNum16();
}
