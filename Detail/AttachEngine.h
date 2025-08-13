#pragma once
#include "io.h"
#include "AES.h"
#include <netfw.h>
#include "psapi.h"
#include "Client.h"
#include "intrin.h"
#include "Global.h"
#include "DetailDlg.h"
#include "iphlpapi.h"
#include "VMProtectSDK.h"

#pragma pack(push, 8)
#include "tlhelp32.h"
#pragma pack(pop)

#define _PRINT_LOG_
#define _TEST_VERSION_

#define WM_GAMESTART			WM_USER + 0x100
#define WM_SHOWEMESSAGE			WM_USER + 0x101
#define WM_CLOSEMESSAGE			WM_USER + 0x102
#define WM_EXITMESSAGE			WM_USER + 0x103
#define WM_RESETMESSAGE			WM_USER + 0x104
#define WM_SCHEDULEMESSAGE		WM_USER + 0x105
#define WM_AUTOMESSAGE			WM_USER + 0x106

typedef struct _Schedule_Time_
{
	WCHAR	szName[MAX_NAME];
	BYTE	nTimeMode;				// 0 - 없음, 1 - 시간, 2 - 분
	int		nTimeStart;
	int		nTimeStop;
	int		nHuntTime;
	unsigned int	dwLastScheduleTime;
}Schedule_Time;

typedef struct _Detail_Setting_Info_
{
	DWORD dwGamePID;
	DWORD dwDetailPID;
	BYTE  bUpdateSetting;
} DetailSettingInfo;

enum NewFunction
{
	NewFunction_socket = 0,
	NewFunction_setsockopt ,
	NewFunction_inet_addr ,
	NewFunction_htons ,
	NewFunction_connect ,
	NewFunction_closesocket ,
	NewFunction_send ,
	NewFunction_recv ,
};

extern CClient				g_cClient;
extern BYTE					g_pbKey[20];

extern CDetailDlg*			g_pAppDlg;

extern Align_Info*			g_pAlignInfo;

extern WCHAR				g_szAutoID[MAX_PATH];
extern WCHAR				g_szGameID[MAX_PATH];
extern WCHAR				g_szGamePW[MAX_PATH];
extern int					g_nGameServer;
extern int					g_nIndex;
extern BOOL					g_bAutoConnect;

extern DWORD				g_dwExeVersion;

extern CLIENTSTATUS*		g_pStatusInfo;
extern CRITICAL_SECTION		g_hStatusSection;
extern HANDLE				g_hStatusEvent;
extern HANDLE				g_hAnswerEvent;

extern CRITICAL_SECTION		g_csAddrSection;

extern DWORD				g_dwClientTID;
extern DWORD				g_dwGameTID;
extern DWORD				g_dwStartTime;

extern HANDLE				g_hProcessMutex;

extern DetailSettingInfo*	g_dwGamePID;

extern GAME_MAPPING*		g_pGameMapping;
extern GAME_INFO*			g_pGameInfo;

extern CRITICAL_SECTION		g_csScheduleTime;

extern int					g_nScheduleInitTime;
extern int					g_nScheduleInitDate;

extern int					g_nScheduleStartTime;
extern int					g_nScheduleDelayTime;

extern int					g_nScheduleCount;
extern Schedule_Time*		g_pScheduleTime;

extern BOOL					g_bScheduleSettingChange;
extern int					g_nScheduleCountTemp;
extern Schedule_Time*		g_pScheduleTimeTemp;

extern WORD					g_wLanguageID;

extern BOOL					g_bScheduleTimeCheck;
extern int					g_nScheduleTimeValue;
extern DWORD64				g_qwScheduleTimeTick;

extern WCHAR				g_szGamePath[MAX_PATH];

extern BOOL					g_bRandomSchedule;

void	AJLog(WCHAR* szFormat, ...);

BOOL	OnLoginAuto(BYTE &nAddrCount, BYTE *pbAddrInfo);

void	ShowStatus(int nType, int nStringCode, WCHAR *szLog = NULL, int nLogValue1 = -1, int nLogValue2 = -1);
void	SetStatus(int nStatus, int nValue = 0, WCHAR *szLog = NULL);

DWORD	GameThread(LPVOID lpParam);
DWORD	ClientThread(LPVOID lpParam);
DWORD	ControlThread(LPVOID lpParam);
DWORD	GetExeVersion();
void	BytesToString(WCHAR* szBuffer, BYTE* pbBuffer, int nLen);