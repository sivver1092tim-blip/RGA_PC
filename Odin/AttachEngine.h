#pragma once
#include "io.h"
#include "psapi.h"
#include "Client.h"
#include "Global.h"
#include "OdinDlg.h"
#include "tlhelp32.h"
#include "VMProtectSDK.h"

#define _PRINT_LOG_
//#define _TEST_VERSION_

#define WM_CLOSEPID		WM_USER + 0x0201
#define WM_EXEUPDATE	WM_USER + 0x0215
#define	WM_REFRESHDIA	WM_USER + 0x0216

extern COdinDlg*	g_pAppDlg;
extern DWORD		g_dwPatchVersion;
extern DWORD		g_dwLocalIP;

extern CRITICAL_SECTION g_csRunSection;
extern CRITICAL_SECTION g_csArraySection;

extern int			g_nArrayCount;
extern BYTE			g_pbArray[100];

extern WORD			g_wLanguageID;

extern Align_Info* g_pAlignInfo;

void	AJLog(WCHAR* szFormat, ...);
CString	FormatCurrency(unsigned int nCurrency);
void	DeleteTempFile();
int		CheckLastVersion(DWORD &dwServerIP, DWORD &dwServerPort);
DWORD	GetExeVersion();
DWORD	TraceThread(int nIndex);
void	ChangeSetting();
BOOL	InjectDevice();