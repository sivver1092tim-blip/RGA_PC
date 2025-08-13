// SupervisorDlg.cpp : implementation file
//

#include "stdafx.h"
#include "io.h"
#include "zip.h"
#include "direct.h"
#include "DlgCard.h"
#include "PathMode.h"
#include "DlgLogin.h"
#include "CardExtend.h"
#include "Supervisor.h"
#include "CardSearch.h"
#include "SettingDlg.h"
#include "SupervisorDlg.h"
#include "ClientStatus.h"


#pragma comment(lib, "Version.lib")

BOOL m_bPatching = FALSE;

// CSupervisorDlg dialog

#define OPCODE_SUPERLOGIN		100
#define OPCODE_USERCREATE		101
#define OPCODE_USERREMOVE		102
#define	OPCODE_USERDBDOWN		103
#define OPCODE_USEREXTEND		104
#define OPCODE_USERCHANGE		105
#define OPCODE_PATCHEXE			106
#define OPCODE_PATCHADDR		107
#define OPCODE_ADMINALIVE		108

#define STATUS_FIRST			0
#define STATUS_NEXT				1
#define STATUS_LAST				2

typedef struct _USERINFO
{
	char	szID[50];		//	아이디 (코드)
	BYTE	nType;			//	날자류형 (2시간, 1일, 3일, 7일, 15일, 30일)
	DWORD	dwCreateTime;	//	발급날자
	DWORD	dwChargedTime;	//	충전날자
	DWORD	dwExpire;		//	종료시간
	BYTE	bEnable;		//	승인/페기기발
	char	szAdmin[50];	//	생성한 관리자
}USERINFO;

WCHAR				g_szAppPath[MAX_PATH];
CSupervisorDlg		*g_pApp = NULL;

CRITICAL_SECTION	g_csCritical;

void OnDisconnect();
void onSendProgress(int nPercent);
void BytesToString(WCHAR *szBuffer, BYTE *pbBuffer, int nLen);

void CreateZipFolder(CString szPath, CString szFolder, HZIP *hz);

DWORD PatchThread(LPVOID lpParam);
DWORD AliveThread(LPVOID lpParam);

CSupervisorDlg::CSupervisorDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CSupervisorDlg::IDD, pParent)
	, m_szCard(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CSupervisorDlg::DoDataExchange(CDataExchange* pDX)
{
	DDX_Control(pDX, IDC_LIST1, m_lstCard);
	DDX_Text(pDX, IDC_EDIT1, m_szCard);
	DDX_Control(pDX, IDC_PROGRESS1, m_PatchProgress);

	CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CSupervisorDlg, CDialog)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
	ON_BN_CLICKED(IDC_BUTTON4, &CSupervisorDlg::OnCardGenerate)
	ON_BN_CLICKED(IDC_BUTTON5, &CSupervisorDlg::OnCardRemove)
	ON_NOTIFY(NM_CLICK, IDC_LIST1, &CSupervisorDlg::OnCardSelect)
	ON_BN_CLICKED(IDC_BUTTON7, &CSupervisorDlg::OnVenjorPatch)
	ON_BN_CLICKED(IDC_BUTTON8, &CSupervisorDlg::OnAddrPatch)
	ON_BN_CLICKED(IDC_BUTTON6, &CSupervisorDlg::OnFileSave)
	ON_BN_CLICKED(IDC_BUTTON3, &CSupervisorDlg::OnViewClientStatus)
	ON_BN_CLICKED(IDC_BUTTON9, &CSupervisorDlg::OnSearchCard)
	ON_BN_CLICKED(IDOK, &CSupervisorDlg::OnBnClickedOk)
	ON_NOTIFY(LVN_ITEMCHANGED, IDC_LIST1, &CSupervisorDlg::OnSelectCard)
	ON_BN_CLICKED(IDC_BUTTON2, &CSupervisorDlg::OnExtendUser)
	ON_NOTIFY(NM_DBLCLK, IDC_LIST1, &CSupervisorDlg::OnChangeUser)
	ON_BN_CLICKED(IDC_BUTTON1, &CSupervisorDlg::OnPatch)
	ON_NOTIFY(NM_CUSTOMDRAW, IDC_LIST1, &CSupervisorDlg::OnNMCustomdrawList1)
END_MESSAGE_MAP()


// CSupervisorDlg message handlers

BOOL CSupervisorDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	srand((unsigned int)time(NULL));

	VMProtectBeginUltra("OnInitDialog");

	InitializeCriticalSection(&g_csCritical);

	CDlgLogin pDlg;

	if(pDlg.DoModal() == IDCANCEL)
		TerminateProcess(GetCurrentProcess(), 0);

	m_cClient.Initialize(OnDisconnect);
	if(!m_cClient.Connect(NULL, DEFAULTPATCHPORT))
		TerminateProcess(GetCurrentProcess(), 0);

	m_cClient.Recv(&m_pbRecvData, &m_nRecvLen);
	memcpy(m_pbKey, m_pbRecvData, 20);
	delete[] m_pbRecvData;

	char szID[21], szPW[21];
	sprintf(szID, "%S", pDlg.m_szID.Trim());
	sprintf(szPW, "%S", pDlg.m_szPW.Trim());
	szID[20] = 0;
	szPW[20] = 0;

	m_nSendLen = MakePacket(m_pbSendData, "cbb", OPCODE_SUPERLOGIN, szID, 21, szPW, 21);
	m_nSendLen = EncryptData(m_pbSendData, m_nSendLen, m_pbSendData, m_pbKey);
	if(!m_cClient.Send(m_pbSendData, m_nSendLen))
	{
		MessageBox(L"服务器断开连接", L"通知", 0);

		m_cClient.DisConnect();
		ExitProcess(0);
	}
	if(!m_cClient.Recv(&m_pbRecvData, &m_nRecvLen))
	{
		MessageBox(L"服务器断开连接", L"通知", 0);

		m_cClient.DisConnect();
		ExitProcess(0);
	}

	m_nRecvLen = DecryptData(m_pbRecvData, m_nRecvLen, m_pbKey);
	if(m_nRecvLen < 2)
	{
		MessageBox(L"用户名或密码不对", L"通知");
		delete[] m_pbRecvData;
		m_cClient.DisConnect();
		ExitProcess(0);
	}

	if(m_pbRecvData[0] != OPCODE_SUPERLOGIN)
	{
		MessageBox(L"错误的接近", L"通知", 0);
		delete[] m_pbRecvData;
		m_cClient.DisConnect();
		ExitProcess(0);
	}

	if(*(DWORD*)(m_pbRecvData + 0x01) == 0xFFFFFFFF)
	{
		AfxMessageBox(L"已经连接到服务器了");
		delete[] m_pbRecvData;
		m_cClient.DisConnect();
		ExitProcess(0);
	}

	if( *(DWORD*)(m_pbRecvData + 0x01) == 0xFFFFFFDE )
	{
		AfxMessageBox(L"用户名或密码不对");
		delete[] m_pbRecvData;
		m_cClient.DisConnect();
		ExitProcess(0);
	}

	if( *(DWORD*)(m_pbRecvData + 0x01) != 0x00000000 )
	{
		MessageBox(L"错误的接近", L"通知", 0);
		delete[] m_pbRecvData;
		m_cClient.DisConnect();
		ExitProcess(0);
	}

	delete[] m_pbRecvData;

	VMProtectEnd();

	GetModuleFileName(0, g_szAppPath, MAX_PATH);
	int i = wcslen(g_szAppPath);
	while(g_szAppPath[i] != L'\\')
		i--;
	g_szAppPath[i] = 0;

	m_lstCard.SetExtendedStyle(m_lstCard.GetExtendedStyle()|LVS_EX_FULLROWSELECT|LVS_EX_GRIDLINES);
	m_lstCard.GetHeaderCtrl()->EnableWindow(FALSE);
	m_lstCard.InsertColumn(1, L"号码", LVCFMT_CENTER, 45);
	m_lstCard.InsertColumn(2, L"卡片", LVCFMT_LEFT, 280);
	m_lstCard.InsertColumn(3, L"类型", LVCFMT_CENTER, 50);
	m_lstCard.InsertColumn(4, L"发放日期", LVCFMT_LEFT, 90);
	m_lstCard.InsertColumn(5, L"充电日期", LVCFMT_LEFT, 90);
	m_lstCard.InsertColumn(6, L"截止日期", LVCFMT_LEFT, 90);
	m_lstCard.InsertColumn(7, L"情况", LVCFMT_LEFT, 50);

#ifndef ADMIN_VERSION

	m_lstCard.InsertColumn(8, L"관리자", LVCFMT_LEFT, 90);

#endif // !ADMIN_VERSION

	OnUserDBDown(0);

	g_pApp = this;
	CreateThread(0, 0, (LPTHREAD_START_ROUTINE)AliveThread, this, 0, 0);

#ifndef	ADMIN_VERSION

	GetDlgItem(IDC_BUTTON1)->ShowWindow(SW_SHOW);
	GetDlgItem(IDC_BUTTON2)->ShowWindow(SW_SHOW);
	GetDlgItem(IDC_BUTTON5)->ShowWindow(SW_SHOW);

#endif

	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CSupervisorDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CSupervisorDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

void OnDisconnect()
{
	ExitProcess(0);
}


void CSupervisorDlg::OnUserDBDown(int nStartindex)
{
	int nTotalCount = 0, nIndex;
	WCHAR szMsg[MAX_PATH];

	VMProtectBeginUltra("OnUserDBDown");

	EnterCriticalSection(&g_csCritical);
	
	m_nSendLen = MakePacket(m_pbSendData, "cd", OPCODE_USERDBDOWN, nStartindex);
	m_nSendLen = EncryptData(m_pbSendData, m_nSendLen, m_pbSendData, m_pbKey);
	if(!m_cClient.Send(m_pbSendData, m_nSendLen))
	{
		LeaveCriticalSection(&g_csCritical);
		MessageBox(L"服务器断开连接", L"通知", 0);

		m_cClient.DisConnect();
		ExitProcess(0);
	}

	if(!m_cClient.Recv(&m_pbRecvData, &m_nRecvLen))
	{
		LeaveCriticalSection(&g_csCritical);
		MessageBox(L"服务器断开连接", L"通知", 0);

		m_cClient.DisConnect();
		ExitProcess(0);
	}
	m_nRecvLen = DecryptData(m_pbRecvData, m_nRecvLen, m_pbKey);
	
	if(m_nRecvLen < 2)
	{
		LeaveCriticalSection(&g_csCritical);
		delete[] m_pbRecvData;
		return;
	}

	if(m_pbRecvData[0] != OPCODE_USERDBDOWN || *(DWORD*)(m_pbRecvData + 0x01) == 0xFFFFFFFF)
	{
		LeaveCriticalSection(&g_csCritical);
		delete[] m_pbRecvData;
		return;
	}

	nTotalCount = *(DWORD*)(m_pbRecvData + 0x01);
	if(nTotalCount <= 0)
	{
		LeaveCriticalSection(&g_csCritical);
		delete[] m_pbRecvData;
		return;
	}

	USERINFO *pUsers = (USERINFO*)(m_pbRecvData + 0x05);

	for(int i = 0; i < nTotalCount; i++)
	{
		nIndex = m_lstCard.GetItemCount();
		swprintf(szMsg, L"%d", nIndex + 1);
		m_lstCard.InsertItem(nIndex, szMsg);

		swprintf(szMsg, L"%S", pUsers[i].szID);
		m_lstCard.SetItemText(nIndex, 1, szMsg);

		if(pUsers[i].nType == 0)
			m_lstCard.SetItemText(nIndex, 2, L"2小时");
		else if(pUsers[i].nType == 1)
			m_lstCard.SetItemText(nIndex, 2, L"1天");
		else if(pUsers[i].nType == 2)
			m_lstCard.SetItemText(nIndex, 2, L"3天");
		else if(pUsers[i].nType == 3)
			m_lstCard.SetItemText(nIndex, 2, L"7天");
		else if(pUsers[i].nType == 4)
			m_lstCard.SetItemText(nIndex, 2, L"15天");
		else if(pUsers[i].nType == 5)
			m_lstCard.SetItemText(nIndex, 2, L"30天");
		else if (pUsers[i].nType == 6)
			m_lstCard.SetItemText(nIndex, 2, L"37天");

		swprintf(szMsg, L"%02d-%02d-%02d %02d:%02d", pUsers[i].dwCreateTime / 100000000, (pUsers[i].dwCreateTime % 100000000 ) / 1000000,
			(pUsers[i].dwCreateTime % 1000000) / 10000, (pUsers[i].dwCreateTime % 10000) / 100, pUsers[i].dwCreateTime % 100);
		m_lstCard.SetItemText(nIndex, 3, szMsg);

		if(pUsers[i].dwChargedTime)
		{
			swprintf(szMsg, L"%02d-%02d-%02d %02d:%02d", pUsers[i].dwChargedTime / 100000000, (pUsers[i].dwChargedTime % 100000000 ) / 1000000,
				(pUsers[i].dwChargedTime % 1000000) / 10000, (pUsers[i].dwChargedTime % 10000) / 100, pUsers[i].dwChargedTime % 100);
			m_lstCard.SetItemText(nIndex, 4, szMsg);
		}

		if(pUsers[i].dwExpire)
		{
			swprintf(szMsg, L"%02d-%02d-%02d %02d:%02d", pUsers[i].dwExpire / 100000000, (pUsers[i].dwExpire % 100000000 ) / 1000000,
				(pUsers[i].dwExpire % 1000000) / 10000, (pUsers[i].dwExpire % 10000) / 100, pUsers[i].dwExpire % 100);
			m_lstCard.SetItemText(nIndex, 5, szMsg);
		}

		if (pUsers[i].bEnable)
		{
			m_lstCard.SetItemData(nIndex, 0);
			m_lstCard.SetItemText(nIndex, 6, L"承认");
		}
		else
		{
			m_lstCard.SetItemData(nIndex, 1);
			m_lstCard.SetItemText(nIndex, 6, L"停止");
		}

#ifndef ADMIN_VERSION

		swprintf(szMsg, L"%S", pUsers[i].szAdmin);
		m_lstCard.SetItemText(nIndex, 7, szMsg);

#endif // !ADMIN_VERSION
	}

	delete[] m_pbRecvData;
	LeaveCriticalSection(&g_csCritical);

	VMProtectEnd();
}



void CSupervisorDlg::OnCardGenerate()
{
	VMProtectBeginUltra("OnCardGenerate");

	if(m_bPatching)
		return;

	CDlgCard pDlg;
	if(pDlg.DoModal() == IDCANCEL)
		return;

#ifdef ADMIN_VERSION
	pDlg.m_nCardType = 5;
#endif // ADMIN_VERSION

	EnterCriticalSection(&g_csCritical);
	
	m_nSendLen = MakePacket(m_pbSendData, "cddbdb", OPCODE_USERCREATE, pDlg.m_nCardType, pDlg.m_nCardCount, ((CStringA)pDlg.m_szCardPrefix).GetBuffer(), 5, 
		pDlg.m_szCardAdmin.GetLength(), ((CStringA)pDlg.m_szCardAdmin).GetBuffer(), pDlg.m_szCardAdmin.GetLength());
	m_nSendLen = EncryptData(m_pbSendData, m_nSendLen, m_pbSendData, m_pbKey);
	if(!m_cClient.Send(m_pbSendData, m_nSendLen))
	{
		LeaveCriticalSection(&g_csCritical);
		MessageBox(L"服务器断开连接", L"通知", 0);

		m_cClient.DisConnect();
		ExitProcess(0);
	}

	if(!m_cClient.Recv(&m_pbRecvData, &m_nRecvLen))
	{
		LeaveCriticalSection(&g_csCritical);
		MessageBox(L"服务器断开连接", L"通知", 0);

		m_cClient.DisConnect();
		ExitProcess(0);
	}
	m_nRecvLen = DecryptData(m_pbRecvData, m_nRecvLen, m_pbKey);

	if(m_nRecvLen < 2)
	{
		LeaveCriticalSection(&g_csCritical);
		MessageBox(L"服务器断开连接", L"通知", 0);
		delete[] m_pbRecvData;
		return;
	}

	if(m_pbRecvData[0] != OPCODE_USERCREATE)
	{
		LeaveCriticalSection(&g_csCritical);
		MessageBox(L"服务器断开连接", L"通知", 0);
		delete[] m_pbRecvData;
		return;
	}

	if(*(DWORD*)(m_pbRecvData + 0x01) == 0xFFFFFFFF)
	{
		LeaveCriticalSection(&g_csCritical);
		MessageBox(L"服务器断开连接", L"通知", 0);
		delete[] m_pbRecvData;
		return;
	}

	if(*(DWORD*)(m_pbRecvData + 0x01) == 0xFFFFFDDE)
	{
		LeaveCriticalSection(&g_csCritical);
		MessageBox(L"服务器断开连接", L"通知", 0);
		delete[] m_pbRecvData;
		return;
	}

	if(*(DWORD*)(m_pbRecvData + 0x01) != 0x00000000)
	{
		LeaveCriticalSection(&g_csCritical);
		MessageBox(L"服务器断开连接", L"通知", 0);
		delete[] m_pbRecvData;
		return;
	}

	delete[] m_pbRecvData;
	LeaveCriticalSection(&g_csCritical);

	VMProtectEnd();

	int nRecvCount = 0, nTotalCount = 0;
	int nCount = m_lstCard.GetItemCount();
	OnUserDBDown(nCount);

	SYSTEMTIME time;
	GetLocalTime(&time);

	WCHAR szTempPath[MAX_PATH];
	swprintf(szTempPath, L"%s\\Cards\\Cards%02d-%02d-%02d-%02d-%02d.txt", g_szAppPath, time.wMonth, time.wDay, time.wHour, time.wMinute, time.wSecond);

	FILE *fp = _wfopen(szTempPath, L"a+");
	if(!fp)
	{
		swprintf(szTempPath, L"%s\\Cards", g_szAppPath);
		char *aszLog = new char[wcslen(szTempPath)*2+20];
		WideCharToMultiByte(CP_ACP, 0, szTempPath, wcslen(szTempPath)+1, aszLog, wcslen(szTempPath)*2+2, 0, 0);
		_mkdir(aszLog);
		delete[] aszLog;

		swprintf(szTempPath, L"%s\\Cards\\Cards%02d-%02d-%02d-%02d-%02d.txt", g_szAppPath, time.wMonth, time.wDay, time.wHour, time.wMinute, time.wSecond);
		fp = _wfopen(szTempPath, L"a+");
	}

	if(fp)
	{
		for(int i = nCount; i < m_lstCard.GetItemCount(); i++)
		{
			fwprintf(fp, L"%d : %s\t30\n", i - nCount + 1, m_lstCard.GetItemText(i, 1).GetBuffer());
		}
		fclose(fp);
	}

	MessageBox(L"发卡完成", L"通知", 0);
}



void BytesToString(WCHAR *szBuffer, BYTE *pbBuffer, int nLen)
{
	int			i;

	if(!szBuffer)
		return;

	memset(szBuffer, 0, 2 * nLen);

	for(i = 0; i < nLen; i++)
	{
		swprintf(szBuffer+i*2, L"%02X", pbBuffer[i]);
	}
	szBuffer[i*2] = 0;
}




void CSupervisorDlg::OnCardRemove()
{
#ifndef	ADMIN_VERSION

	VMProtectBeginUltra("OnCardRemove");

	if(m_bPatching)
		return;

	POSITION pos = m_lstCard.GetFirstSelectedItemPosition();
	if(!pos)
		return;

	if(MessageBox(L"정말 카드정보를 삭제하시겠습니까?", L"알림", MB_YESNO) != IDYES)
		return;

	int nIndex = 0;
	int nCount = m_lstCard.GetItemCount();
	if( nCount <= 0)
		return;

	int	*pIndex = new int[nCount];

	memset(pIndex, 0, sizeof(int) * nCount);

	while(pos)
	{
		pIndex[nIndex++] = m_lstCard.GetNextSelectedItem(pos);;
	}

	EnterCriticalSection(&g_csCritical);
	
	BYTE *pbSendLargeData = new BYTE[nIndex * sizeof(int) + 0x100];
	ZeroMemory(pbSendLargeData, sizeof(pbSendLargeData));

	m_nSendLen = MakePacket(pbSendLargeData, "cdb", OPCODE_USERREMOVE, nIndex, pIndex, nIndex * sizeof(int));
	m_nSendLen = EncryptData(pbSendLargeData, m_nSendLen, pbSendLargeData, m_pbKey);
	if(!m_cClient.Send(pbSendLargeData, m_nSendLen))
	{
		LeaveCriticalSection(&g_csCritical);
		MessageBox(L"서버에로의 카드삭제 요청이 실패하였습니다.");

		m_cClient.DisConnect();
		ExitProcess(0);
	}

	delete[] pbSendLargeData;

	if(!m_cClient.Recv(&m_pbRecvData, &m_nRecvLen))
	{
		LeaveCriticalSection(&g_csCritical);
		MessageBox(L"서버에로의 카드삭제 요청수신이 실패하였습니다.");

		m_cClient.DisConnect();
		ExitProcess(0);
	}
	m_nRecvLen = DecryptData(m_pbRecvData, m_nRecvLen, m_pbKey);

	if( m_nRecvLen < 2 )
	{
		LeaveCriticalSection(&g_csCritical);
		MessageBox(L"카드삭제에 실패하였습니다.", L"알림");
		delete[] m_pbRecvData;
		delete[] pIndex;
		return;
	}

	if(m_pbRecvData[0] != OPCODE_USERREMOVE)
	{
		LeaveCriticalSection(&g_csCritical);
		MessageBox(L"카드삭제에 실패하였습니다.", L"알림");
		delete[] m_pbRecvData;
		delete[] pIndex;
		return;
	}

	if(*(DWORD*)(m_pbRecvData + 0x01) != 0x00000000)
	{
		LeaveCriticalSection(&g_csCritical);
		MessageBox(L"카드삭제에 실패하였습니다.", L"알림");
		delete[] m_pbRecvData;
		delete[] pIndex;
		return;
	}

	delete[] m_pbRecvData;
	LeaveCriticalSection(&g_csCritical);

	int nRemoveCount = 0;
	for(int i = 0; i < nIndex; i++)
	{
		m_lstCard.DeleteItem(pIndex[i] - nRemoveCount);
		nRemoveCount++;
	}

	delete[] pIndex;
	pIndex = NULL;

	WCHAR szMsg[MAX_PATH];

	for(int i = 0; i < m_lstCard.GetItemCount(); i++)
	{
		swprintf(szMsg, L"%d", i+1);
		m_lstCard.SetItemText(i, 0, szMsg);
	}

	if(m_lstCard.GetItemCount() == 0)
	{
		GetDlgItem(IDC_BUTTON5)->EnableWindow(FALSE);
		m_szCard = L"";

		UpdateData(FALSE);
	}

	VMProtectEnd();

#endif
}



void CSupervisorDlg::OnCardSelect(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMITEMACTIVATE pNMItemActivate = reinterpret_cast<LPNMITEMACTIVATE>(pNMHDR);

	POSITION Pos = m_lstCard.GetFirstSelectedItemPosition();
	if(Pos != NULL)
	{
		int nIndex = m_lstCard.GetNextSelectedItem(Pos);
		
#ifndef	ADMIN_VERSION
		GetDlgItem(IDC_BUTTON5)->EnableWindow(TRUE);
#endif

		m_szCard = m_lstCard.GetItemText(nIndex, 1);
	}
	else
	{
		GetDlgItem(IDC_BUTTON5)->EnableWindow(FALSE);

		m_szCard = L"";
	}

	UpdateData(FALSE);
}




int CALLBACK RunSetupCallBack(HWND hwnd, UINT uMsg, LPARAM lParam, LPARAM lpData)
{
	switch (uMsg)
	{
	case BFFM_INITIALIZED:
		SendMessage(hwnd, BFFM_SETSELECTION, (LPARAM)TRUE, lpData);
		break;
	}
	return 0;
}




void CSupervisorDlg::OnVenjorPatch()
{
	if (m_bPatching)
		return;

#ifndef	ADMIN_VERSION

	VMProtectBeginUltra("OnVenjorPatch");

	BROWSEINFO bi;
	LPITEMIDLIST pid;

	memset(&bi, 0, sizeof(BROWSEINFO));
	bi.lpszTitle = L"패치경로를 지정하십시오!";
	bi.pidlRoot = NULL;
	bi.lpfn = RunSetupCallBack;
	bi.lParam = (LPARAM)(g_szAppPath);
	pid = SHBrowseForFolder(&bi);
	if (!pid)
		return;

	WCHAR szPath[MAX_PATH];
	swprintf(szPath, L"%s\\Patch.Zip", g_szAppPath);

	HZIP hz = CreateZip(szPath, 0);
	SHGetPathFromIDList(pid, szPath);
	CreateZipFolder(szPath, L"", &hz);
	CloseZip(hz);

	CreateThread(0, 0, (LPTHREAD_START_ROUTINE)PatchThread, this, 0, 0);

	VMProtectEnd();

#endif
}




void CSupervisorDlg::OnAddrPatch()
{
	if(m_bPatching)
		return;

#ifndef	ADMIN_VERSION

	VMProtectBeginUltra("OnAddrPatch");

	WCHAR szPath[MAX_PATH];

	swprintf(szPath, L"%s\\SuddenAddr.cab", g_szAppPath);

	int nCount = 0;
	DWORD *pbAddr = NULL;

	FILE *fp = _wfopen(szPath, L"rb");
	if(fp)
	{
		fread(&nCount, sizeof(int), 1, fp);
		if(nCount > 0)
		{
			pbAddr = new DWORD[nCount];
			memset(pbAddr, 0, sizeof(DWORD) * nCount);

			fread(pbAddr, 1, sizeof(DWORD) * nCount, fp);

			EnterCriticalSection(&g_csCritical);
			
			BYTE *pbSendLarge = new BYTE[nCount * sizeof(DWORD) + 0x100];
			ZeroMemory(pbSendLarge, sizeof(pbSendLarge));

			m_nSendLen = MakePacket(pbSendLarge, "cddb", OPCODE_PATCHADDR, 0, nCount, pbAddr, sizeof(DWORD) * nCount);
			m_nSendLen = EncryptData(pbSendLarge, m_nSendLen, pbSendLarge, m_pbKey);
			m_cClient.Send(pbSendLarge, m_nSendLen);

			m_cClient.Recv(&m_pbRecvData, &m_nRecvLen);
			m_nRecvLen = DecryptData(m_pbRecvData, m_nRecvLen, m_pbKey);

			if(m_nRecvLen < 2 || m_pbRecvData[0] != OPCODE_PATCHADDR || *(DWORD*)(m_pbRecvData + 0x01) != 0x00000000)
			{
				MessageBox(L"주소패치가 실패하였습니다.", L"알림");
			}
			else if(*(DWORD*)(m_pbRecvData + 0x01) == 0x00000000)
			{
				MessageBox(L"주소패치가 끝났습니다.", L"알림");
			}

			delete[] pbSendLarge;
			delete[] m_pbRecvData;
			delete[] pbAddr;

			LeaveCriticalSection(&g_csCritical);
		}

		fclose(fp);
	}
	else
		MessageBox(L"주소파일이 없습니다.", L"알림");

	VMProtectEnd();
#endif
}



void CSupervisorDlg::OnFileSave()
{
	POSITION pos = m_lstCard.GetFirstSelectedItemPosition();

	if(!pos)
		return;

	int nIndex = 0;
	int nCount = m_lstCard.GetItemCount();
	if( nCount <= 0)
		return;

	int	*pIndex = new int[nCount];
	memset(pIndex, 0, sizeof(int) * nCount);

	while(pos)
	{
		pIndex[nIndex++] = m_lstCard.GetNextSelectedItem(pos);;
	}

	FILE			*fp;
	CFileDialog		dlg(FALSE, 0, 0, 4|2, L"Text Files (*.txt)|*.txt|"); 

	if(dlg.DoModal() != IDOK)
		return;

	fp = _wfopen(dlg.GetPathName(), L"w");
	if(!fp)
	{
		delete[] pIndex;
		MessageBox(L"无法打开文件.", L"通知");
		return;
	}

	for(int i = 0; i < nIndex; i++)
	{
		fwprintf(fp, L"%d, %s\n", i + 1, m_lstCard.GetItemText(pIndex[i], 1).GetBuffer());
	}

	fclose(fp);
	delete[] pIndex;

	MessageBox(L"文件保存完成.", L"通知");
}


BOOL IsFileExist(WCHAR* szPath)
{
	struct _stat32 buffer;
	return (_wstat32(szPath, &buffer) == 0);
}



DWORD PatchThread(LPVOID lpParam)
{
	CSupervisorDlg *pDlg = (CSupervisorDlg*)lpParam;
	if(!pDlg)
		return 0;

	WCHAR szPath[MAX_PATH];

#ifndef	ADMIN_VERSION

	VMProtectBeginUltra("PatchThread");

	swprintf(szPath, L"%s\\HongLong.exe", g_szAppPath);
	if(!IsFileExist(szPath))
		return 0;

	m_bPatching = TRUE;

	int m_dwVersion = 0;

	WCHAR szFilePath[MAX_PATH];
	DWORD dwInfoSize = 0;
	BYTE  *pBuffer = NULL;
	VS_FIXEDFILEINFO *pFineInfo = NULL;
	UINT bufLen = 0;

	swprintf(szFilePath, L"%s\\HongLong.exe", g_szAppPath);
	
	dwInfoSize = GetFileVersionInfoSize(szFilePath, 0);
	if(dwInfoSize)
	{
		pBuffer = new BYTE[dwInfoSize];
		if(pBuffer)
		{
			if(GetFileVersionInfo(szFilePath, 0, dwInfoSize, pBuffer) && VerQueryValue(pBuffer, L"\\", (LPVOID*)&pFineInfo, &bufLen))
			{
				WORD majorVer, minorVer, buildNum, revisionNum;
				majorVer = HIWORD(pFineInfo->dwFileVersionMS);
				minorVer = LOWORD(pFineInfo->dwFileVersionMS);
				buildNum = HIWORD(pFineInfo->dwFileVersionLS);
				revisionNum = LOWORD(pFineInfo->dwFileVersionLS);

				m_dwVersion = (majorVer << 12) + (minorVer << 8) + (buildNum << 4) + revisionNum;
			}

			delete[] pBuffer;
		}
	}

	if(!m_dwVersion)
	{
		MessageBox(0, L"패치정보를 정확히 얻어올수가 없습니다.", L"알림", 0);
		return 0;
	}

	swprintf(szPath, L"%s\\PatchInfo.db", g_szAppPath);
	FILE *fp = _wfopen(szPath, L"wb");
	if (!fp)
	{
		MessageBox(0, L"패치파일을 생성할수 없습니다", L"알림", 0);
		return 0;
	}

	swprintf(szPath, L"%s\\Patch.Zip", g_szAppPath);
	FILE *fpData = _wfopen(szPath, L"rb");
	if (!fpData)
	{
		fclose(fp);

		MessageBox(0, L"패치자료를 가져올수 없습니다", L"알림", 0);
		return 0;
	}

	BYTE* pbBuffer;

	int nLength = _filelength(fileno(fpData));
	if (nLength > 0)
	{
		pbBuffer = new BYTE[nLength];
		fread(pbBuffer, 1, nLength, fpData);
	}
	else
		nLength = 0;

	fclose(fpData);

	DeleteFile(szPath);

	fwrite(&m_dwVersion, sizeof(DWORD), 1, fp);
	fwrite(&nLength, sizeof(int), 1, fp);
	if (nLength > 0)
		fwrite(pbBuffer, nLength, 1, fp);
	fclose(fp);

	MessageBox(0, L"PatchInfo.db 파일을 서버에 복사해주시고 확인을 눌러주십시오", L"알림", MB_OK);

	int nSendSize = 0;

	pDlg->m_PatchProgress.SetRange(0, 100);
	pDlg->m_PatchProgress.SetPos(0);

	EnterCriticalSection(&g_csCritical);
			
	pDlg->m_cClient.Initialize(OnDisconnect, onSendProgress);

	BYTE pbSendData[4098];
	memset(pbSendData, 0, sizeof(BYTE) * 4098);
	pDlg->m_nSendLen = MakePacket(pbSendData, "cdd", OPCODE_PATCHEXE, m_dwVersion, 0);
	pDlg->m_nSendLen = EncryptData(pbSendData, pDlg->m_nSendLen, pbSendData, pDlg->m_pbKey);
	pDlg->m_cClient.Send(pbSendData, pDlg->m_nSendLen);
	nLength = 1;

	pDlg->m_cClient.Initialize(OnDisconnect);

	pDlg->m_cClient.Recv(&pDlg->m_pbRecvData, &pDlg->m_nRecvLen);
	pDlg->m_nRecvLen = DecryptData(pDlg->m_pbRecvData, pDlg->m_nRecvLen, pDlg->m_pbKey);

	if(pDlg->m_nRecvLen < 9)
	{
		LeaveCriticalSection(&g_csCritical);
		MessageBox(0, L"자료전송중 오류입니다.", L"알림", 0);
		delete[] pbBuffer;
		delete[] pDlg->m_pbRecvData;

		m_bPatching = FALSE;
		return 0;
	}

	if(pDlg->m_pbRecvData[0] != OPCODE_PATCHEXE)
	{
		LeaveCriticalSection(&g_csCritical);
		MessageBox(0, L"자료전송중 오류입니다.", L"알림", 0);
		delete[] pbBuffer;
		delete[] pDlg->m_pbRecvData;

		m_bPatching = FALSE;
		return 0;
	}

	if(*(DWORD*)(pDlg->m_pbRecvData + 0x01))
	{
		LeaveCriticalSection(&g_csCritical);
		MessageBox(0, L"자료전송중 오류입니다.", L"알림", 0);
		delete[] pbBuffer;
		delete[] pDlg->m_pbRecvData;

		m_bPatching = FALSE;
		return 0;
	}

	if(*(int*)(pDlg->m_pbRecvData + 0x05) != nLength)
	{
		LeaveCriticalSection(&g_csCritical);
		MessageBox(0, L"자료전송중 오류입니다.", L"알림", 0);
		delete[] pbBuffer;
		delete[] pDlg->m_pbRecvData;

		m_bPatching = FALSE;
		return 0;
	}

	delete[] pbBuffer;
	pbBuffer = NULL;
	delete[] pDlg->m_pbRecvData;
	LeaveCriticalSection(&g_csCritical);

	onSendProgress(100);

	m_bPatching = FALSE;

	MessageBox(0, L"패치가 끝났습니다.", L"알림", 0);

	VMProtectEnd();

#endif
	return 0;
}



void CSupervisorDlg::OnViewClientStatus()
{
	if(m_bPatching)
		return;

	CClientStatus pDlg;
	pDlg.DoModal();
}


DWORD AliveThread(LPVOID lpParam)
{
	CSupervisorDlg *pDlg = (CSupervisorDlg*)lpParam;
	if(!pDlg)
		return 0;

	BYTE pSendData[512];
	BYTE *pRecvData;

	int nSendLen, nRecvLen;

	VMProtectBeginUltra("AliveThread");

	while(1)
	{
		Sleep(20000);

		if(m_bPatching)
			continue;

		EnterCriticalSection(&g_csCritical);
		
		memset(pSendData, 0, 512);
		nSendLen = MakePacket(pSendData, "cd", OPCODE_ADMINALIVE, (DWORD)pSendData);
		nSendLen = EncryptData(pSendData, nSendLen, pSendData, pDlg->m_pbKey);
		if(!pDlg->m_cClient.Send(pSendData, nSendLen))
		{
			LeaveCriticalSection(&g_csCritical);
			AfxMessageBox(L"服务器断开连接");

			pDlg->m_cClient.DisConnect();
			break;
		}

		if(!pDlg->m_cClient.Recv(&pRecvData, &nRecvLen))
		{
			LeaveCriticalSection(&g_csCritical);
			AfxMessageBox(L"服务器断开连接");

			pDlg->m_cClient.DisConnect();
			break;
		}

		nRecvLen = DecryptData(pRecvData, nRecvLen, pDlg->m_pbKey);
		if(nRecvLen < 5 || pRecvData[0] != OPCODE_ADMINALIVE || *(DWORD*)(pRecvData + 0x01) != 0)
		{
			LeaveCriticalSection(&g_csCritical);
			AfxMessageBox(L"服务器断开连接");

			delete[] pRecvData;
			pDlg->m_cClient.DisConnect();
			break;
		}

		delete[] pRecvData;
		LeaveCriticalSection(&g_csCritical);
	}

	VMProtectEnd();

	ExitProcess(0);
	return 0;
}



void CSupervisorDlg::OnSearchCard()
{
	CCardSearch dlg;
	if(dlg.DoModal() == IDCANCEL)
		return;

	int nStart = 0;
// 	POSITION Pos = m_lstCard.GetFirstSelectedItemPosition();
// 	if(Pos)
// 		nStart = m_lstCard.GetNextSelectedItem(Pos);

	int nIndex = m_lstCard.GetNextItem(-1, LVNI_SELECTED);
	while(1)
	{
		if(nIndex >= 0)
		{
			m_lstCard.SetItemState(nIndex, 0, LVIS_SELECTED);
			nIndex = m_lstCard.GetNextItem(-1, LVNI_SELECTED);
		}
		else
			break;
	}
	

	WCHAR szCards[MAX_PATH];

	BOOL bFound = FALSE;

	swprintf(szCards, L"%s", dlg.m_szCards.GetBuffer());

	for(int i = nStart; i < m_lstCard.GetItemCount(); i++)
	{
		if(!wcsicmp(szCards, m_lstCard.GetItemText(i, 1).GetBuffer()))
		{
			ListView_SetItemState(m_lstCard.GetSafeHwnd(), i, LVIS_FOCUSED|LVIS_SELECTED, 0x000F);
			m_lstCard.EnsureVisible(i, TRUE);

			bFound = TRUE;
			break;
		}
	}

	if(!bFound)
	{
		MessageBox(L"卡信息不存在.", L"通知", 0);
	}
}



void onSendProgress(int nPercent)
{
	g_pApp->m_PatchProgress.SetPos(nPercent);
}



void CSupervisorDlg::OnBnClickedOk()
{
	m_cClient.DisConnect();

	OnOK();
}



void CSupervisorDlg::OnSelectCard(NMHDR *pNMHDR, LRESULT *pResult)
{
	POSITION Pos = m_lstCard.GetFirstSelectedItemPosition();
	if(!Pos)
	{
		m_szCard = L"";
	}
	else
	{
		int nIndex = m_lstCard.GetNextSelectedItem(Pos);
		m_szCard = m_lstCard.GetItemText(nIndex, 1);
	}
	
	UpdateData(FALSE);
}



void CreateZipFolder(CString szPath, CString szFolder, HZIP *hz)
{
	CFileFind file;
	BOOL chi_bool = file.FindFile(szPath + _T("\\*.*"));

	CString m_path = szPath;
	CString m_FolderPath = szFolder;

	while (chi_bool) {
		chi_bool = file.FindNextFile();
		CString strName = _T("");

		if (file.IsArchived())
		{
			strName = file.GetFileName();
			CString tmpPathName = _T("");
			CString tmpFolderPath = _T("");

			if (strName.Compare(_T(".")) == 0 ||
				strName.Compare(_T("..")) == 0 ||
				strName.Compare(_T("Thumbs.db")) == 0) continue;

			tmpPathName = m_path + _T("\\") + strName;

			if (m_FolderPath.IsEmpty())
				tmpFolderPath = strName;
			else
				tmpFolderPath = m_FolderPath + _T("\\") + strName;


			ZipAdd(*hz, tmpFolderPath, tmpPathName);
		}
		else if (file.IsDirectory())
		{
			strName = file.GetFileName();
			CString tmpPathName = _T("");
			CString tmpFolderPath = _T("");

			if (strName.Compare(_T(".")) == 0 ||
				strName.Compare(_T("..")) == 0 ||
				strName.Compare(_T("Thumbs.db")) == 0) continue;

			tmpPathName = m_path + _T("\\") + strName;
			if (m_FolderPath.IsEmpty())
				tmpFolderPath = strName;
			else
				tmpFolderPath = m_FolderPath + _T("\\") + strName;

			ZipAddFolder(*hz, tmpFolderPath);
			CreateZipFolder(tmpPathName, tmpFolderPath, hz);
		}
	}
}



void CSupervisorDlg::OnExtendUser()
{
#ifndef	ADMIN_VERSION

	VMProtectBeginUltra("OnExtendUser");

	if(m_bPatching)
		return;

	POSITION Pos = m_lstCard.GetFirstSelectedItemPosition();
	if(Pos == NULL)
		return;

	int nIndex = 0;
	int nCount = m_lstCard.GetItemCount();
	if( nCount <= 0)
		return;

	CCardExtend dlgExtend;
	if(dlgExtend.DoModal() != IDOK || dlgExtend.m_nExtendHour <= 0)
		return;

	int	*pIndex = new int[nCount];
	memset(pIndex, 0, sizeof(int) * nCount);

	while(Pos)
	{
		pIndex[nIndex++] = m_lstCard.GetNextSelectedItem(Pos);;
	}

	EnterCriticalSection(&g_csCritical);

	BYTE *pbSendLargeData = new BYTE[nIndex * sizeof(int) + 0x100];
	ZeroMemory(pbSendLargeData, sizeof(pbSendLargeData));

	m_nSendLen = MakePacket(pbSendLargeData, "cddb", OPCODE_USEREXTEND, dlgExtend.m_nExtendHour, nIndex, pIndex, nIndex * sizeof(int));
	m_nSendLen = EncryptData(pbSendLargeData, m_nSendLen, pbSendLargeData, m_pbKey);
	if(!m_cClient.Send(pbSendLargeData, m_nSendLen))
	{
		LeaveCriticalSection(&g_csCritical);
		MessageBox(L"서버에로의 요청이 실패하였습니다.");

		m_cClient.DisConnect();
		ExitProcess(0);
	}

	delete[] pbSendLargeData;

	if(!m_cClient.Recv(&m_pbRecvData, &m_nRecvLen))
	{
		LeaveCriticalSection(&g_csCritical);
		MessageBox(L"서버에로의 요청수신이 실패하였습니다.");

		m_cClient.DisConnect();
		ExitProcess(0);
	}
	m_nRecvLen = DecryptData(m_pbRecvData, m_nRecvLen, m_pbKey);

	if( m_nRecvLen < 2 )
	{
		LeaveCriticalSection(&g_csCritical);
		MessageBox(L"기일연장 실패하였습니다.", L"알림");
		delete[] m_pbRecvData;
		delete[] pIndex;
		return;
	}

	if(m_pbRecvData[0] != OPCODE_USEREXTEND)
	{
		LeaveCriticalSection(&g_csCritical);
		MessageBox(L"기일연장 실패하였습니다.", L"알림");
		delete[] m_pbRecvData;
		delete[] pIndex;
		return;
	}

	if(*(DWORD*)(m_pbRecvData + 0x01) != 0x00000000)
	{
		LeaveCriticalSection(&g_csCritical);
		MessageBox(L"기일연장 실패하였습니다.", L"알림");
		delete[] m_pbRecvData;
		delete[] pIndex;
		return;
	}

	WCHAR szMsg[50];
	for(int i = 0; i < nIndex; i++)
	{
		DWORD dwExpire = *(DWORD*)(m_pbRecvData + 0x05 + i * 4);
		if(dwExpire)
		{
			swprintf(szMsg, L"%02d-%02d-%02d %02d:%02d", dwExpire / 100000000, (dwExpire % 100000000 ) / 1000000, (dwExpire % 1000000) / 10000, (dwExpire % 10000) / 100, dwExpire % 100);
			m_lstCard.SetItemText(pIndex[i], 5, szMsg);
		}
	}

	delete[] m_pbRecvData;
	LeaveCriticalSection(&g_csCritical);

	delete[] pIndex;
	pIndex = NULL;

	VMProtectEnd();

#endif
}



void CSupervisorDlg::OnChangeUser(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMITEMACTIVATE pNMItemActivate = reinterpret_cast<LPNMITEMACTIVATE>(pNMHDR);
	if(pNMItemActivate->iItem < 0)
		return;

	if(m_bPatching)
		return;

#ifndef	ADMIN_VERSION

	VMProtectBeginUltra("OnChangeUser");

	CSettingDlg	pDlg;
	if(!wcscmp(m_lstCard.GetItemText(pNMItemActivate->iItem, 6).GetBuffer(), L"승인"))
		pDlg.bDisable = 0;
	else
		pDlg.bDisable = 1;

	WCHAR szMsg[MAX_PATH];
	swprintf(szMsg, L"%s", m_lstCard.GetItemText(pNMItemActivate->iItem, 5).GetBuffer());

	DWORD dwTime;
	swscanf(szMsg, L"%d-%d-%d %d:%d", &pDlg.nYear, &pDlg.nMonth, &pDlg.nDay, &pDlg.nHour, &pDlg.nMinute);

	if(pDlg.DoModal() == IDCANCEL)
		return;

	dwTime = pDlg.nYear * 100000000 + pDlg.nMonth * 1000000 + pDlg.nDay * 10000 + pDlg.nHour * 100 + pDlg.nMinute;

	char szID[50];
	sprintf(szID, "%S", m_lstCard.GetItemText(pNMItemActivate->iItem, 1));

	EnterCriticalSection(&g_csCritical);

	m_nSendLen = MakePacket(m_pbSendData, "cbdd", OPCODE_USERCHANGE, szID, sizeof(char) * 50, pDlg.bDisable, dwTime);
	m_nSendLen = EncryptData(m_pbSendData, m_nSendLen, m_pbSendData, m_pbKey);
	m_cClient.Send(m_pbSendData, m_nSendLen);

	m_cClient.Recv(&m_pbRecvData, &m_nRecvLen);
	m_nRecvLen = DecryptData(m_pbRecvData, m_nRecvLen, m_pbKey);
	if(m_nRecvLen < 2 || m_pbRecvData[0] != OPCODE_USERCHANGE || *(DWORD*)(m_pbRecvData + 0x01) != 0x0)
	{
		LeaveCriticalSection(&g_csCritical);
		delete[] m_pbRecvData;
		MessageBox(L"유저정보 변경에 실패하였습니다.", L"알림", 0);
		return;
	}

	swprintf(szMsg, L"%02d-%02d-%02d %02d:%02d", dwTime / 100000000, (dwTime % 100000000 ) / 1000000, (dwTime % 1000000) / 10000, (dwTime % 10000) / 100, dwTime % 100);
	m_lstCard.SetItemText(pNMItemActivate->iItem, 5, szMsg);

	if (!pDlg.bDisable)
	{
		m_lstCard.SetItemData(pNMItemActivate->iItem, 0);
		m_lstCard.SetItemText(pNMItemActivate->iItem, 6, L"승인");
	}
	else
	{
		m_lstCard.SetItemData(pNMItemActivate->iItem, 1);
		m_lstCard.SetItemText(pNMItemActivate->iItem, 6, L"페기");
	}

	delete[] m_pbRecvData;
	LeaveCriticalSection(&g_csCritical);

	VMProtectEnd();

#endif
	
	*pResult = 0;
}


void CSupervisorDlg::OnPatch()
{
	CPathMode	dlg;

	if(dlg.DoModal() != IDOK)
		return;

	if(dlg.m_nPatchMode == 0)
		OnVenjorPatch();
	else
		OnAddrPatch();
}


void CSupervisorDlg::OnNMCustomdrawList1(NMHDR* pNMHDR, LRESULT* pResult)
{
	NMLVCUSTOMDRAW* pLVCD = (NMLVCUSTOMDRAW*)pNMHDR;
	*pResult = 0;

	if (CDDS_PREPAINT == pLVCD->nmcd.dwDrawStage)
		* pResult = CDRF_NOTIFYITEMDRAW;
	else if (CDDS_ITEMPREPAINT == pLVCD->nmcd.dwDrawStage)
	{
		if (m_lstCard.GetItemData((int)pLVCD->nmcd.dwItemSpec) != 0)
			pLVCD->clrText = RGB(255, 0, 0);
		else
			pLVCD->clrText = RGB(0, 0, 0);

		*pResult = CDRF_DODEFAULT;
	}
}
