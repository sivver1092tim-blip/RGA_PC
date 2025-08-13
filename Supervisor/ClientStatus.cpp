// ClientStatus.cpp : implementation file
//

#include "stdafx.h"
#include "Supervisor.h"
#include "SupervisorDlg.h"
#include "ClientStatus.h"
#include "CardSearch.h"


#define OPCODE_VIEWSTATUS		109
#define OPCODE_DISCONUSER		110
#define OPCODE_SERVERSTATUS		111

extern CRITICAL_SECTION		g_csCritical;

typedef struct _USERCONINFO
{
	char	szID[50];
	DWORD	dwIp;
	DWORD	dwConTime;
	int		nGameServer;
	WCHAR	szCharName[50];
}USERCONINFO;


// CClientStatus dialog

extern CSupervisorDlg *g_pApp;

IMPLEMENT_DYNAMIC(CClientStatus, CDialog)

CClientStatus::CClientStatus(CWnd* pParent /*=NULL*/)
	: CDialog(CClientStatus::IDD, pParent)
{

}

CClientStatus::~CClientStatus()
{
}

void CClientStatus::DoDataExchange(CDataExchange* pDX)
{
	DDX_Control(pDX, IDC_LIST1, m_lstUsers);

	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CClientStatus, CDialog)
	ON_BN_CLICKED(IDOK, &CClientStatus::OnDisConnectUser)
	ON_BN_CLICKED(IDC_BUTTON1, &CClientStatus::OnUpdateStatus)
	ON_BN_CLICKED(IDCANCEL, &CClientStatus::OnClose)
	ON_NOTIFY(NM_CLICK, IDC_LIST1, &CClientStatus::OnNMClickList1)
	ON_BN_CLICKED(IDC_BUTTON2, &CClientStatus::OnServerRepairStart)
	ON_BN_CLICKED(IDC_BUTTON3, &CClientStatus::OnServerRepairFinish)
	ON_BN_CLICKED(IDC_BUTTON4, &CClientStatus::OnSearchID)
END_MESSAGE_MAP()


// CClientStatus message handlers

void CClientStatus::OnDisConnectUser()
{
	POSITION pos = m_lstUsers.GetFirstSelectedItemPosition();

	if(!pos)
		return;

	int nCount = m_lstUsers.GetItemCount();
	if( nCount <= 0)
		return;

	int nIndex = m_lstUsers.GetNextSelectedItem(pos);

	VMProtectBeginUltra("DisConUser");

	EnterCriticalSection(&g_csCritical);
	
	char szID[50];
	sprintf(szID , "%S" , m_lstUsers.GetItemText(nIndex , 1).GetBuffer());
	g_pApp->m_nSendLen = MakePacket(g_pApp->m_pbSendData , "cb" , OPCODE_DISCONUSER , szID , sizeof(char) * 50);
	g_pApp->m_nSendLen = EncryptData(g_pApp->m_pbSendData , g_pApp->m_nSendLen , g_pApp->m_pbSendData , g_pApp->m_pbKey);
	if(!g_pApp->m_cClient.Send(g_pApp->m_pbSendData , g_pApp->m_nSendLen))
	{
		LeaveCriticalSection(&g_csCritical);
		MessageBox(L"服务器断开连接" , L"通知" , 0);
		g_pApp->m_cClient.DisConnect();
		TerminateProcess(GetCurrentProcess() , 0);
	}
	if(!g_pApp->m_cClient.Recv(&g_pApp->m_pbRecvData , &g_pApp->m_nRecvLen))
	{
		LeaveCriticalSection(&g_csCritical);
		MessageBox(L"服务器断开连接", L"通知", 0);
		g_pApp->m_cClient.DisConnect();
		TerminateProcess(GetCurrentProcess() , 0);
	}
	g_pApp->m_nRecvLen = DecryptData(g_pApp->m_pbRecvData , g_pApp->m_nRecvLen , g_pApp->m_pbKey);
	if(g_pApp->m_nRecvLen < 2 || g_pApp->m_pbRecvData[0] != OPCODE_DISCONUSER || *(DWORD*)(g_pApp->m_pbRecvData + 0x01) != 0x00000000)
	{
		delete[] g_pApp->m_pbRecvData;
		LeaveCriticalSection(&g_csCritical);
		return;
	}

	delete[] g_pApp->m_pbRecvData;
	LeaveCriticalSection(&g_csCritical);
	MessageBox(L"相应账户的连接断开" , L"通知");

	VMProtectEnd();
}

void CClientStatus::OnUpdateStatus()
{
 	int nTotalCount = 0 , nIndex;
	WCHAR szMsg[MAX_PATH];

	VMProtectBeginUltra("UpdateStatus");

	EnterCriticalSection(&g_csCritical);
	
	g_pApp->m_nSendLen = MakePacket(g_pApp->m_pbSendData , "cd" , OPCODE_VIEWSTATUS , 0x00000000);
	g_pApp->m_nSendLen = EncryptData(g_pApp->m_pbSendData , g_pApp->m_nSendLen , g_pApp->m_pbSendData , g_pApp->m_pbKey);
	if(!g_pApp->m_cClient.Send(g_pApp->m_pbSendData , g_pApp->m_nSendLen))
	{
		LeaveCriticalSection(&g_csCritical);
		MessageBox(L"服务器断开连接", L"通知", 0);
		g_pApp->m_cClient.DisConnect();
		TerminateProcess(GetCurrentProcess() , 0);
	}
	if(!g_pApp->m_cClient.Recv(&g_pApp->m_pbRecvData , &g_pApp->m_nRecvLen))
	{
		LeaveCriticalSection(&g_csCritical);
		MessageBox(L"服务器断开连接", L"通知", 0);
		g_pApp->m_cClient.DisConnect();
		TerminateProcess(GetCurrentProcess() , 0);
	}
	g_pApp->m_nRecvLen = DecryptData(g_pApp->m_pbRecvData , g_pApp->m_nRecvLen , g_pApp->m_pbKey);
	if(g_pApp->m_nRecvLen < 2 || g_pApp->m_pbRecvData[0] != OPCODE_VIEWSTATUS || *(DWORD*)(g_pApp->m_pbRecvData + 0x01) == 0xFFFFFFFF)
	{
		LeaveCriticalSection(&g_csCritical);
		delete[] g_pApp->m_pbRecvData;
		MessageBox(L"服务器断开连接", L"通知", 0);
		g_pApp->m_cClient.DisConnect();
		TerminateProcess(GetCurrentProcess() , 0);
	}

	m_lstUsers.DeleteAllItems();

	nTotalCount = *(DWORD*)(g_pApp->m_pbRecvData + 0x01);
	if(nTotalCount <= 0)
	{
		LeaveCriticalSection(&g_csCritical);
		delete[] g_pApp->m_pbRecvData;
		return;
	}

	VMProtectEnd();

	WCHAR m_szServerName[10][50] = { L"오딘", L"토르", L"로키", L"프레이야", L"헤임달", L"티르", L"발두르", L"이둔", L"에기르", L"뇨르드" };

	USERCONINFO	*pConInfo = (USERCONINFO*)(g_pApp->m_pbRecvData + 0x05);
	for(int i = 0; i < nTotalCount; i++)
	{
		nIndex = m_lstUsers.GetItemCount();
		swprintf(szMsg , L"%d" , i+1);
		m_lstUsers.InsertItem(nIndex , szMsg);

		swprintf(szMsg , L"%S" , pConInfo[i].szID);
		m_lstUsers.SetItemText(nIndex , 1 , szMsg);

		if(wcscmp(pConInfo[i].szCharName, L""))
		{
			swprintf(szMsg, L"%s%02d", m_szServerName[(pConInfo[i].nGameServer / 9) % 8], (pConInfo[i].nGameServer % 9) + 1);
			m_lstUsers.SetItemText(nIndex, 2, szMsg);

			m_lstUsers.SetItemText(nIndex, 3, pConInfo[i].szCharName);
		}

		swprintf(szMsg , L"%02d-%02d-%02d %02d:%02d" , pConInfo[i].dwConTime / 100000000 , (pConInfo[i].dwConTime % 100000000 ) / 1000000 ,
			(pConInfo[i].dwConTime % 1000000) / 10000 , (pConInfo[i].dwConTime % 10000) / 100 , pConInfo[i].dwConTime % 100);
		m_lstUsers.SetItemText(nIndex , 4 , szMsg);

		swprintf(szMsg , L"%u.%u.%u.%u" , (unsigned int)((unsigned char*)&pConInfo[i].dwIp)[0], (unsigned int)((unsigned char*)&pConInfo[i].dwIp)[1], (unsigned int)((unsigned char*)&pConInfo[i].dwIp)[2], (unsigned int)((unsigned char*)&pConInfo[i].dwIp)[3]);
		m_lstUsers.SetItemText(nIndex , 5 , szMsg);

		m_lstUsers.SetItemData(nIndex, pConInfo[i].nGameServer);
	}

	delete[] g_pApp->m_pbRecvData;
	LeaveCriticalSection(&g_csCritical);

	//OnSortGameServer();
}

void CClientStatus::OnClose()
{
	OnOK();
}

BOOL CClientStatus::OnInitDialog()
{
	CDialog::OnInitDialog();

	m_lstUsers.SetExtendedStyle(m_lstUsers.GetExtendedStyle()|LVS_EX_FULLROWSELECT|LVS_EX_GRIDLINES);
	m_lstUsers.GetHeaderCtrl()->EnableWindow(FALSE);

	m_lstUsers.InsertColumn(1, L"号码" , LVCFMT_CENTER , 40);
	m_lstUsers.InsertColumn(2, L"卡片" , LVCFMT_LEFT , 120);
	m_lstUsers.InsertColumn(3, L"区", LVCFMT_LEFT, 90);
	m_lstUsers.InsertColumn(4, L"角色", LVCFMT_CENTER, 120);
	m_lstUsers.InsertColumn(5, L"连接时间" , LVCFMT_CENTER , 90);
	m_lstUsers.InsertColumn(6, L"连接IP" , LVCFMT_CENTER , 95);

	OnUpdateStatus();

#ifdef	ADMIN_VERSION
	
		GetDlgItem(IDC_BUTTON2)->EnableWindow(FALSE);
		GetDlgItem(IDC_BUTTON3)->EnableWindow(FALSE);
	
#endif

	return TRUE;
}





void CClientStatus::OnNMClickList1(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMITEMACTIVATE pNMItemActivate = reinterpret_cast<LPNMITEMACTIVATE>(pNMHDR);

	if(pNMItemActivate->iItem < 0)
		GetDlgItem(IDOK)->EnableWindow(FALSE);
	else
		GetDlgItem(IDOK)->EnableWindow(TRUE);
}





void CClientStatus::OnServerRepairStart()
{
#ifndef	ADMIN_VERSION

	VMProtectBeginUltra("ServerRepair");

	EnterCriticalSection(&g_csCritical);
	
	g_pApp->m_nSendLen = MakePacket(g_pApp->m_pbSendData , "cd" , OPCODE_SERVERSTATUS , 0x00000001);
	g_pApp->m_nSendLen = EncryptData(g_pApp->m_pbSendData , g_pApp->m_nSendLen , g_pApp->m_pbSendData , g_pApp->m_pbKey);
	if(!g_pApp->m_cClient.Send(g_pApp->m_pbSendData , g_pApp->m_nSendLen))
	{
		LeaveCriticalSection(&g_csCritical);
		MessageBox(L"서버와의 통신이 끊어졌습니다." , L"알림" , 0);
		g_pApp->m_cClient.DisConnect();
		TerminateProcess(GetCurrentProcess() , 0);
	}
	if(!g_pApp->m_cClient.Recv(&g_pApp->m_pbRecvData , &g_pApp->m_nRecvLen))
	{
		LeaveCriticalSection(&g_csCritical);
		MessageBox(L"서버와의 통신이 끊어졌습니다." , L"알림" , 0);
		g_pApp->m_cClient.DisConnect();
		TerminateProcess(GetCurrentProcess() , 0);
	}
	g_pApp->m_nRecvLen = DecryptData(g_pApp->m_pbRecvData , g_pApp->m_nRecvLen , g_pApp->m_pbKey);
	if(g_pApp->m_nRecvLen < 2 || g_pApp->m_pbRecvData[0] != OPCODE_SERVERSTATUS || *(DWORD*)(g_pApp->m_pbRecvData + 0x01) == 0xFFFFFFFF)
	{
		LeaveCriticalSection(&g_csCritical);
		delete[] g_pApp->m_pbRecvData;
		MessageBox(L"서버와의 통신이 끊어졌습니다." , L"알림" , 0);
		g_pApp->m_cClient.DisConnect();
		TerminateProcess(GetCurrentProcess() , 0);
	}

	delete[] g_pApp->m_pbRecvData;
	LeaveCriticalSection(&g_csCritical);
	MessageBox(L"서버점검이 시작되였습니다." , L"알림" , 0);

	VMProtectEnd();

#endif
}





void CClientStatus::OnServerRepairFinish()
{
#ifndef	ADMIN_VERSION

	VMProtectBeginUltra("ServerFinish");

	EnterCriticalSection(&g_csCritical);
	
	g_pApp->m_nSendLen = MakePacket(g_pApp->m_pbSendData , "cd" , OPCODE_SERVERSTATUS , 0x00000000);
	g_pApp->m_nSendLen = EncryptData(g_pApp->m_pbSendData , g_pApp->m_nSendLen , g_pApp->m_pbSendData , g_pApp->m_pbKey);
	if(!g_pApp->m_cClient.Send(g_pApp->m_pbSendData , g_pApp->m_nSendLen))
	{
		LeaveCriticalSection(&g_csCritical);
		MessageBox(L"서버와의 통신이 끊어졌습니다." , L"알림" , 0);
		g_pApp->m_cClient.DisConnect();
		TerminateProcess(GetCurrentProcess() , 0);
	}
	if(!g_pApp->m_cClient.Recv(&g_pApp->m_pbRecvData , &g_pApp->m_nRecvLen))
	{
		LeaveCriticalSection(&g_csCritical);
		MessageBox(L"서버와의 통신이 끊어졌습니다." , L"알림" , 0);
		g_pApp->m_cClient.DisConnect();
		TerminateProcess(GetCurrentProcess() , 0);
	}
	g_pApp->m_nRecvLen = DecryptData(g_pApp->m_pbRecvData , g_pApp->m_nRecvLen , g_pApp->m_pbKey);
	if(g_pApp->m_nRecvLen < 2 || g_pApp->m_pbRecvData[0] != OPCODE_SERVERSTATUS || *(DWORD*)(g_pApp->m_pbRecvData + 0x01) == 0xFFFFFFFF)
	{
		LeaveCriticalSection(&g_csCritical);
		delete[] g_pApp->m_pbRecvData;
		MessageBox(L"서버와의 통신이 끊어졌습니다." , L"알림" , 0);
		g_pApp->m_cClient.DisConnect();
		TerminateProcess(GetCurrentProcess() , 0);
	}

	delete[] g_pApp->m_pbRecvData;
	LeaveCriticalSection(&g_csCritical);
	MessageBox(L"서버점검이 완료되였습니다." , L"알림" , 0);

	VMProtectEnd();

#endif
}



void CClientStatus::OnSearchID()
{
	CCardSearch	dlg;
	if(dlg.DoModal() != IDOK)
		return;

	int nIndex = m_lstUsers.GetNextItem(-1 , LVNI_SELECTED);
	while(1)
	{
		if(nIndex >= 0)
		{
			m_lstUsers.SetItemState(nIndex , 0 , LVIS_SELECTED);
			nIndex = m_lstUsers.GetNextItem(-1 , LVNI_SELECTED);
		}
		else
			break;
	}


	WCHAR szCards[MAX_PATH];

	BOOL bFound = FALSE;

	swprintf(szCards , L"%s" , dlg.m_szCards.GetBuffer());
	for(int i = 0; i < m_lstUsers.GetItemCount(); i++)
	{
		if(!wcscmp(szCards , (m_lstUsers.GetItemText(i , 1)).GetBuffer()))
		{
			ListView_SetItemState(m_lstUsers.GetSafeHwnd() , i , LVIS_FOCUSED|LVIS_SELECTED , 0x000F);
			m_lstUsers.EnsureVisible(i , TRUE);

			bFound = TRUE;
			break;
		}
	}

	if(!bFound)
	{
		MessageBox(L"未找到相关信息." , L"通知" , 0);
	}
}


void CClientStatus::OnSortGameServer()
{
	int nCount = m_lstUsers.GetItemCount();

	for(int i = 0; i < nCount - 1; i++)
	{
		for(int j = i + 1; j < nCount; j++)
		{
			int nData1 = m_lstUsers.GetItemData(i);
			int nData2 = m_lstUsers.GetItemData(j);

			if(nData1 > nData2)
			{
				CString str;

				str = m_lstUsers.GetItemText(i, 1);
				m_lstUsers.SetItemText(i, 1, m_lstUsers.GetItemText(j, 1).GetBuffer());
				m_lstUsers.SetItemText(j, 1, str.GetBuffer());

				str = m_lstUsers.GetItemText(i, 2);
				m_lstUsers.SetItemText(i, 2, m_lstUsers.GetItemText(j, 2).GetBuffer());
				m_lstUsers.SetItemText(j, 2, str.GetBuffer());

				str = m_lstUsers.GetItemText(i, 3);
				m_lstUsers.SetItemText(i, 3, m_lstUsers.GetItemText(j, 3).GetBuffer());
				m_lstUsers.SetItemText(j, 3, str.GetBuffer());

				str = m_lstUsers.GetItemText(i, 4);
				m_lstUsers.SetItemText(i, 4, m_lstUsers.GetItemText(j, 4).GetBuffer());
				m_lstUsers.SetItemText(j, 4, str.GetBuffer());

				str = m_lstUsers.GetItemText(i, 5);
				m_lstUsers.SetItemText(i, 5, m_lstUsers.GetItemText(j, 5).GetBuffer());
				m_lstUsers.SetItemText(j, 5, str.GetBuffer());

				m_lstUsers.SetItemData(i, nData2);
				m_lstUsers.SetItemData(j, nData1);
			}
		}
	}
}