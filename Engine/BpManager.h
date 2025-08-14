#pragma once
//#include "fileStruct.h"
#include "Global.h"

typedef		void( *pfnBPListener)( CONTEXT *pContext, PSTExtraRegInfo pstExtraRegisterInfo);

#define MAX_CALLER_COUNT	1000
#define MAX_PARAM_VALUE_COUNT 1000

#define  DEBUG_PRINT(val)		XMsg( L"[E] %s ==>[0x%llX]", L#val, val )
#define  Str(val)				L#val, val

#define __WORD(x)		(*(WORD*)(x))
#define __BYTE(x)		(*(BYTE*)(x))
#define __DWORD(x)		(*(DWORD*)(x))
#define __DWORD64(x)	(*(DWORD64*)(x))
#define __FLOAT(x)		(*(float*)(x))
#define __DOUBLE(x)		(*(double*)(x))

struct	BP_INFO
{
	DWORD64 dwBPAddr;
	DWORD64 dwNextBPAddr;
	pfnBPListener pfnPrevListener;
	pfnBPListener pfnNextListener;
	BYTE byOrgByteVal;
	BYTE byOrgNextByteVal;
	WORD wReserve;
	int	 nDelta;

	STExtraRegInfo stExtraRegisterInfo;
};

extern CONTEXT			*g_pContext;
extern DWORD64			g_hAssemblyModuleMain;
extern HANDLE			g_hMyProc;

#define Address_RVA2VA(x)	(DWORD64)(x + (DWORD64)g_hAssemblyModuleMain)
#define Address_VA2RVA(x)	(DWORD64)(x - (DWORD64)g_hAssemblyModuleMain)

class CBpManager
{
public:
	CBpManager(void);
	~CBpManager(void);
	BOOL	StartBPHooking();
	void	StopBPHooking();
	void	RegisterHookFunctions();
	static BOOL IsNeedPrintWhenHooked(CONTEXT* pContext, PSTExtraRegInfo pstExtraRegisterInfo = NULL);
	
	static void	OnHookedTempCalled(CONTEXT* pContext, PSTExtraRegInfo pstExtraRegisterInfo = NULL);
	static void	OnHookedTemp1Called(CONTEXT* pContext, PSTExtraRegInfo pstExtraRegisterInfo = NULL);
	static void	OnHookedFuncCalled(CONTEXT* pContext, PSTExtraRegInfo pstExtraRegisterInfo = NULL);
	static void OnHookedCreateWindowEx(CONTEXT* pContext, PSTExtraRegInfo pstExtraRegisterInfo = NULL);
	static void OnHookedCreateWindowExAfter(CONTEXT* pContext, PSTExtraRegInfo pstExtraRegisterInfo = NULL);
	static void OnHookedSetWindowLongPtrEx(CONTEXT* pContext, PSTExtraRegInfo pstExtraRegisterInfo = NULL);
	BOOL	AddBreakPoint(DWORD64 dwAddr, int dwDelta, PSTExtraRegInfo pstExtraRegisterInfo, pfnBPListener pPrevListener, pfnBPListener pNextListenrt = NULL);
	BOOL	RemoveBreakPoint(DWORD64 dwAddr );
	BOOL	RemoveAllBreakPoint();
	void	PrintCurrentBpList();
	BOOL	IsRegisterHookFunction(DWORD64 qwRVAAddress);
	BOOL	PatchByteSequence(DWORD64 dwBPAddr, BYTE* newByte, int nLen); //함수시작 40 함수끝 C3
	static	BOOL	IsExeModuleAddress(DWORD64 qwAddress);
	static	BOOL	SetInt3(DWORD64 dwAddr, BYTE* pOrgVal);
	static	BOOL	UnSetInt3(DWORD64 dwAddr, BYTE* pOrgVal);
	static  BOOL	SetByte(DWORD64 dwBPAddr, BYTE newByte);
	static  BOOL	SetDword(DWORD64 dwBPAddr, DWORD newDword);

public:
	BP_INFO	m_aryBPList[100];
	int		m_nBPCount;
};
CBpManager* GetBpManager();

extern DWORD64 g_aryCallerList[MAX_CALLER_COUNT];
extern int		g_nCallerCount;

extern DWORD64 g_aryParamValueList[MAX_PARAM_VALUE_COUNT];
extern int		g_nParamValueCount;