// UpdateDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Odin.h"
#include "UpdateDlg.h"
#include "AttachEngine.h"
#include "unzip.h"
#include "dbgSerial.h"

// CUpdateDlg dialog

CUpdateDlg *g_pUpdateDlg = NULL;

IMPLEMENT_DYNAMIC(CUpdateDlg, CDialog)

CUpdateDlg::CUpdateDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CUpdateDlg::IDD, pParent)
	, m_dwServerIP(0)
	, m_dwServerPort(0)
{
}

CUpdateDlg::~CUpdateDlg()
{
}

void CUpdateDlg::DoDataExchange(CDataExchange* pDX)
{
	DDX_Control(pDX, IDC_PROGRESS1, m_pUpdateBar);

	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CUpdateDlg, CDialog)
END_MESSAGE_MAP()


void OnProgress(int nPercent)
{
	if(g_pUpdateDlg)
		g_pUpdateDlg->m_pUpdateBar.SetPos(nPercent);
}

DWORD UpdateThread(CUpdateDlg *pDlg)
{
	VMProtectBeginUltra("UpdateThread");

	CClient	cClient;
	cClient.Initialize(NULL , NULL);

	CHAR szIP[MAX_PATH] = {0,};
	if(pDlg->m_dwServerIP == 0)
		strcpy(szIP, VMProtectDecryptStringA(DEFAULTIP));
	else
		sprintf(szIP, VMProtectDecryptStringA("%u.%u.%u.%u"), (unsigned int)((unsigned char*)&pDlg->m_dwServerIP)[0], (unsigned int)((unsigned char*)&pDlg->m_dwServerIP)[1],
		(unsigned int)((unsigned char*)&pDlg->m_dwServerIP)[2], (unsigned int)((unsigned char*)&pDlg->m_dwServerIP)[3]);

	DWORD dwPort = DEFAULTPATCHPORT;
	if(pDlg->m_dwServerPort)
		dwPort = pDlg->m_dwServerPort;

	if(!cClient.Connect(szIP, dwPort))
	{
		CString strLabel;
		strLabel.LoadString(NULL, IDS_PATCHSERVERFAIL, g_wLanguageID);

		CString strAlert;
		strAlert.LoadString(NULL, IDS_ALERT, g_wLanguageID);

		MessageBox(0 , strLabel.GetBuffer(), strAlert.GetBuffer(), 0);
		ExitProcess(0);
		return 0;
	}

	BYTE *pbRecvData;
	int nRecvLen;

	if(!cClient.Recv(&pbRecvData , &nRecvLen))
	{
		cClient.DisConnect();
		
		CString strLabel;
		strLabel.LoadString(NULL, IDS_PATCHSERVERFAIL, g_wLanguageID);

		CString strAlert;
		strAlert.LoadString(NULL, IDS_ALERT, g_wLanguageID);

		MessageBox(0 , strLabel.GetBuffer(), strAlert.GetBuffer(), 0);

		ExitProcess(0);
		return 0;
	}

	BYTE pbKey[20];
	memcpy(pbKey , pbRecvData , 20);
	delete[] pbRecvData;
	pbRecvData = NULL;

	BYTE pbVerifyKey[20];
	memset(pbVerifyKey, 1, 20);

	if(!memcmp(pbVerifyKey, pbKey, 20))
	{
		cClient.DisConnect();
		
		CString strLabel;
		strLabel.LoadString(NULL, IDS_PATCHSERVERRETRY, g_wLanguageID);

		CString strAlert;
		strAlert.LoadString(NULL, IDS_ALERT, g_wLanguageID);

		MessageBox(0 , strLabel.GetBuffer(), strAlert.GetBuffer(), 0);

		ExitProcess(0);
		return 0;
	}

	cClient.Initialize(NULL , OnProgress);

	BYTE pbSendData[1024];
	memset(pbSendData , 0 , 1024);
	int nSendLen = MakePacket(pbSendData, VMProtectDecryptStringA("c"), OPCODE_PATCHDOWN);
	nSendLen = EncryptData(pbSendData , nSendLen , pbSendData , pbKey);
	if(!cClient.Send(pbSendData , nSendLen))
	{
		cClient.DisConnect();
		
		CString strLabel;
		strLabel.LoadString(NULL, IDS_PATCHSERVERFAIL, g_wLanguageID);

		CString strAlert;
		strAlert.LoadString(NULL, IDS_ALERT, g_wLanguageID);

		MessageBox(0 , strLabel.GetBuffer(), strAlert.GetBuffer(), 0);

		ExitProcess(0);
		return 0;
	}

	if(!cClient.Recv(&pbRecvData , &nRecvLen))
	{
		cClient.DisConnect();
		
		CString strLabel;
		strLabel.LoadString(NULL, IDS_PATCHSERVERFAIL, g_wLanguageID);

		CString strAlert;
		strAlert.LoadString(NULL, IDS_ALERT, g_wLanguageID);

		MessageBox(0 , strLabel.GetBuffer(), strAlert.GetBuffer(), 0);

		ExitProcess(0);
		return 0;
	}

	nRecvLen = DecryptData(pbRecvData , nRecvLen , pbKey);
	if(nRecvLen < 5)
	{
		delete[] pbRecvData;
		cClient.DisConnect();
		
		CString strLabel;
		strLabel.LoadString(NULL, IDS_PATCHSERVERFAIL, g_wLanguageID);

		CString strAlert;
		strAlert.LoadString(NULL, IDS_ALERT, g_wLanguageID);

		MessageBox(0 , strLabel.GetBuffer(), strAlert.GetBuffer(), 0);

		ExitProcess(0);
		return 0;
	}

	if(pbRecvData[0] != OPCODE_PATCHDOWN || *(DWORD*)(pbRecvData + 0x01) == 0xFFFFFFFF)
	{
		delete[] pbRecvData;
		cClient.DisConnect();
		
		CString strLabel;
		strLabel.LoadString(NULL, IDS_PATCHSERVERFAIL, g_wLanguageID);

		CString strAlert;
		strAlert.LoadString(NULL, IDS_ALERT, g_wLanguageID);

		MessageBox(0 , strLabel.GetBuffer(), strAlert.GetBuffer(), 0);

		ExitProcess(0);
		return 0;
	}

	BYTE *pbBytes;
	int nTotalBytes;
	nTotalBytes = *(DWORD*)(pbRecvData + 0x01);
	if(nTotalBytes <= 0)
	{
		delete[] pbRecvData;
		cClient.DisConnect();
		
		CString strLabel;
		strLabel.LoadString(NULL, IDS_PATCHUPDATEERROR, g_wLanguageID);

		CString strAlert;
		strAlert.LoadString(NULL, IDS_ALERT, g_wLanguageID);

		MessageBox(0 , strLabel.GetBuffer(), strAlert.GetBuffer(), 0);

		ExitProcess(0);
		return 0;
	}

	pbBytes = (BYTE *)(pbRecvData + 0x05);

	WCHAR szPath[MAX_PATH];

	HZIP hz = OpenZip((void*)(pbBytes) , nTotalBytes , 0);
	ZIPENTRY ze;
	GetZipItem(hz,-1,&ze);
	int numitems=ze.index;
	for (int zi = 0; zi < numitems; zi++)
	{
		GetZipItem(hz,zi,&ze);
		swprintf(szPath, VMProtectDecryptStringW(L"%s\\%s"), g_szAppPath, ze.name);
		UnzipItem(hz, zi, szPath);
	}
	CloseZip(hz);

	delete[] pbRecvData;
	cClient.DisConnect();
	pDlg->m_pUpdateBar.SetPos(100);
	pDlg->SendMessage(WM_EXEUPDATE);
	VMProtectEnd();
	return 0;
}

// CUpdateDlg message handlers

BOOL CUpdateDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	g_pUpdateDlg = this;

	m_pUpdateBar.SetRange(0 , 100);
	m_pUpdateBar.SetPos(0);

	CreateThread(0, 0, (LPTHREAD_START_ROUTINE)UpdateThread, this, 0 , 0);
	return TRUE;
}




LRESULT CUpdateDlg::WindowProc(UINT message, WPARAM wParam, LPARAM lParam)
{
	if(message == WM_EXEUPDATE)
	{
		WCHAR szPath[MAX_PATH];
		swprintf_s(szPath, MAX_PATH, VMProtectDecryptStringW(L"%s\\HongLong.exe"), g_szAppPath);

		if(IsFileExist(szPath))
			ShellExecute(NULL , VMProtectDecryptStringW(L"open"), szPath , VMProtectDecryptStringW(L"-update"), NULL , SW_SHOW);
		else
		{
			CString strLabel;
			strLabel.LoadString(NULL, IDS_PATCHUPDATESUCCESS, g_wLanguageID);

			CString strAlert;
			strAlert.LoadString(NULL, IDS_ALERT, g_wLanguageID);

			MessageBox(strLabel.GetBuffer(), strAlert.GetBuffer());
		}

		OnCancel();
	}

	return CDialog::WindowProc(message, wParam, lParam);
}
