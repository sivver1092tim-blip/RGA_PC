#include "stdafx.h"
#include "BpManager.h"
#include "dbgSerial.h"

//#include "baseCommon.h"
//#include "HookingFunc.h"
//#include "globalvariable.h"
//#include "func.h"
#include <winternl.h>

HANDLE			g_hVectorHandler = NULL;
CONTEXT			*g_pContext = NULL;
DWORD64			g_hAssemblyModuleMain = 0;
HANDLE			g_hMyProc = 0;

DWORD64 g_aryCallerList[MAX_CALLER_COUNT] = { 0, };
int		g_nCallerCount = 0;

DWORD64 g_aryParamValueList[MAX_PARAM_VALUE_COUNT] = { 0, };
int		g_nParamValueCount = 0;


LONG WINAPI MyVectoredHandler(struct _EXCEPTION_POINTERS *except);
CBpManager g_BPManager;
CBpManager::CBpManager(void)
{
	m_nBPCount = 0;
	memset( m_aryBPList, 0, sizeof(m_aryBPList) );
}

CBpManager::~CBpManager(void)
{
}

BOOL CBpManager::AddBreakPoint(DWORD64 dwAddr, int nDelta, PSTExtraRegInfo pstExtraRegisterInfo, pfnBPListener pPrevListener, pfnBPListener pNextListener /*= NULL */)
{
	m_aryBPList[m_nBPCount].dwBPAddr = dwAddr;
	m_aryBPList[m_nBPCount].dwNextBPAddr = dwAddr + nDelta;
	m_aryBPList[m_nBPCount].pfnPrevListener = pPrevListener;
	m_aryBPList[m_nBPCount].pfnNextListener = pNextListener;
	m_aryBPList[m_nBPCount].nDelta = nDelta;
	if (pstExtraRegisterInfo)
	{
		memcpy(&m_aryBPList[m_nBPCount].stExtraRegisterInfo, pstExtraRegisterInfo, sizeof(STExtraRegInfo));
	}

	m_nBPCount++;
	return TRUE;
}

BOOL CBpManager::RemoveBreakPoint(DWORD64 dwAddr)
{
	for (int i = 0; i < m_nBPCount; i++)
	{
		BP_INFO* pBpInfo = &m_aryBPList[i];
		if (pBpInfo->dwBPAddr == dwAddr)
		{
			CBpManager::UnSetInt3(pBpInfo->dwBPAddr, &pBpInfo->byOrgByteVal);
			CBpManager::UnSetInt3(pBpInfo->dwNextBPAddr, &pBpInfo->byOrgNextByteVal);
			XMsg(L"[E] Remove breakpoint address [%llX]", pBpInfo->dwBPAddr);
			for (int j = i; j < m_nBPCount - 1;j++)
			{
				m_aryBPList[j] = m_aryBPList[j + 1];
			}
			memset(&m_aryBPList[m_nBPCount - 1], 0, sizeof(BP_INFO));
			m_nBPCount--;

			return TRUE;
		}
	}
	return FALSE;
}

BOOL CBpManager::RemoveAllBreakPoint()
{
	for (int i = 0; i < m_nBPCount; i++)
	{
		BP_INFO* pBpInfo = &m_aryBPList[i];
//		if (pBpInfo->dwBPAddr == ADDR_FUNC_GAME_INTERNAL_THREAD) continue;
		CBpManager::UnSetInt3(pBpInfo->dwBPAddr, &pBpInfo->byOrgByteVal);
		CBpManager::UnSetInt3(pBpInfo->dwNextBPAddr, &pBpInfo->byOrgNextByteVal);
		XMsg(L"[E] Remove breakpoint address [%llX]", pBpInfo->dwBPAddr);
		for (int j = i; j < m_nBPCount - 1; j++)
		{
			m_aryBPList[j] = m_aryBPList[j + 1];
		}
		memset(&m_aryBPList[m_nBPCount - 1], 0, sizeof(BP_INFO));
		m_nBPCount--;
	}

	g_nCallerCount = 0;
	memset(g_aryCallerList, 0, sizeof(g_aryCallerList));

	g_nParamValueCount = 0;
	memset(g_aryParamValueList, 0, sizeof(g_aryParamValueList));

	return TRUE;
}

void CBpManager::PrintCurrentBpList()
{
	XMsg(L"[E] BreakPoint Address Count (%d)", m_nBPCount);
	for (int i = 0; i < m_nBPCount; i++)
	{
		BP_INFO* pBpInfo = &m_aryBPList[i];
		XMsg(L"[E] BreakPoint (%d) => %llX(%llX)", i + 1, pBpInfo->dwBPAddr, Address_VA2RVA(pBpInfo->dwBPAddr));
	}
}

BOOL CBpManager::IsRegisterHookFunction(DWORD64 qwVAAddress)
{
	for (int i = 0; i < m_nBPCount; i++)
	{
		BP_INFO* pBpInfo = &m_aryBPList[i];
		if (pBpInfo->dwBPAddr == qwVAAddress)
			return TRUE;
	}

	return FALSE;
}

BOOL CBpManager::SetInt3(DWORD64 dwBPAddr, BYTE* pOrgByte)
{
	if (FALSE/*IsGameModuleAddress(dwBPAddr)*/)
	{
// 		if (dwBPAddr == 0)
// 			return FALSE;
// 
// 		BYTE byByte = *(BYTE*)dwBPAddr;
// 		if (byByte == 0xCC)
// 		{
// 			XMsg("[MAIN DLL]SetBP Fail(2)[0x%llX]", dwBPAddr);
// 			return FALSE;
// 		}
// 		*pOrgByte = byByte;
// 		//	XXMSG("[MAIN DLL]setint3 read done=> write.");
// 
// 		BYTE bBreak = 0xCC;
// 		if (g_Driver.WriteVirtualMemory(g_AutoManager.m_dwMirPID, dwBPAddr, &bBreak, 1)) {
// 		}
// 		else {
// 			XMsg("[E] SetInt3 fail.");
// 			return FALSE;
// 		}
	}
	else
	{
		// XMsg( L"SetBP Start[0x%X]",dwBPAddr);
		if (dwBPAddr == 0)
			return FALSE;
		DWORD dwOldProtect;
		VirtualProtectEx(g_hMyProc, (LPVOID)dwBPAddr, 1, PAGE_EXECUTE_READWRITE, &dwOldProtect);
		//XMsg(L"ERROR 0x%x", GetLastError());
		if (IsBadReadPtr((const char*)dwBPAddr, 1) || IsBadWritePtr((void*)dwBPAddr, 1))
		{
			VirtualProtectEx(g_hMyProc, (LPVOID)dwBPAddr, 1, dwOldProtect, &dwOldProtect);
			XMsg(L"[Read]SetBP Fail(1)[0x%llX]", dwBPAddr);
			return FALSE;
		}
		BYTE byByte = *(BYTE*)dwBPAddr;
		if (byByte == 0xCC)
		{
			XMsg(L"SetBP Fail(2)[0x%llX]", dwBPAddr);
			VirtualProtectEx(g_hMyProc, (LPVOID)dwBPAddr, 1, dwOldProtect, &dwOldProtect);
			return FALSE;
		}
		*pOrgByte = *(BYTE*)dwBPAddr;
		*(BYTE*)dwBPAddr = 0xCC;
		VirtualProtectEx(g_hMyProc, (LPVOID)dwBPAddr, 1, dwOldProtect, &dwOldProtect);
		//XMsg( L"SetBP OK[0x%llX]",dwBPAddr);
	}

	return TRUE;
}

BOOL CBpManager::UnSetInt3(DWORD64 dwBPAddr, BYTE* pOrgByte)
{
	if (FALSE/*IsGameModuleAddress(dwBPAddr)*/)
	{
// 		if (dwBPAddr == 0)
// 			return FALSE;
// 
// 		BYTE byByte = *(BYTE*)dwBPAddr;
// 		if (byByte != 0xCC)
// 		{
// 			XMsg("[E] UnSetInt3 Fail[0x%llX]", dwBPAddr);
// 			return FALSE;
// 		}
// 
// 		if (g_Driver.WriteVirtualMemory(g_AutoManager.m_dwMirPID, dwBPAddr, pOrgByte, 1)) {
// 		}
// 		else {
// 			XMsg("[E] UnSetInt3 fail.");
// 			return FALSE;
// 		}
	}
	else
	{
		//	XMsg( L"UnSetBP Start[0x%X]",dwBPAddr);
		if (dwBPAddr == 0)
			return FALSE;
		DWORD dwOldProtect;
		VirtualProtectEx(g_hMyProc, (LPVOID)dwBPAddr, 1, PAGE_EXECUTE_READWRITE, &dwOldProtect);
		if (IsBadReadPtr((const char*)dwBPAddr, 1) || IsBadWritePtr((void*)dwBPAddr, 1))
		{
			VirtualProtectEx(g_hMyProc, (LPVOID)dwBPAddr, 1, dwOldProtect, &dwOldProtect);
			XMsg(L"[Read]UnSetBP Fail[0x%llX]", dwBPAddr);
			return FALSE;
		}
		BYTE byByte = *(BYTE*)dwBPAddr;
		if (byByte != 0xCC)
		{
			VirtualProtectEx(g_hMyProc, (LPVOID)dwBPAddr, 1, dwOldProtect, &dwOldProtect);
			XMsg(L"UnSetBP Fail[0x%llX]", dwBPAddr);
			return FALSE;
		}
		*(BYTE*)dwBPAddr = *pOrgByte;
		VirtualProtectEx(g_hMyProc, (LPVOID)dwBPAddr, 1, dwOldProtect, &dwOldProtect);
		//	XMsg( L"UnSetBP OK[0x%X]",dwBPAddr);
	}
	
	return TRUE;
}

BOOL CBpManager::SetByte(DWORD64 dwBPAddr, BYTE newByte)
{
	if (FALSE/*IsGameModuleAddress(dwBPAddr)*/)
	{
// 		if (dwBPAddr == 0)
// 			return FALSE;
// 		if (*(BYTE*)dwBPAddr == newByte)
// 			return TRUE;
// 
// 		if (g_Driver.WriteVirtualMemory(g_AutoManager.m_dwMirPID, dwBPAddr, &newByte, 1)) {
// 		}
// 		else {
// 			XMsg("[E] SetByte fail.");
// 			return FALSE;
// 		}
	}
	else
	{
		if (dwBPAddr == 0)
			return FALSE;
		if (*(BYTE*)dwBPAddr == newByte)
			return TRUE;
		DWORD dwOldProtect;
		VirtualProtectEx(g_hMyProc, (LPVOID)dwBPAddr, 1, PAGE_EXECUTE_READWRITE, &dwOldProtect);
		if (IsBadWritePtr((void*)dwBPAddr, 1))
		{
			VirtualProtectEx(g_hMyProc, (LPVOID)dwBPAddr, 1, dwOldProtect, &dwOldProtect);
			return FALSE;
		}

		*(BYTE*)dwBPAddr = newByte;
		VirtualProtectEx(g_hMyProc, (LPVOID)dwBPAddr, 1, dwOldProtect, &dwOldProtect);
	}

	return TRUE;
}

BOOL CBpManager::SetDword(DWORD64 dwBPAddr, DWORD newDWORD)
{
	if (FALSE/*IsGameModuleAddress(dwBPAddr)*/)
	{
// 		if (dwBPAddr == 0)
// 			return FALSE;
// 		if (*(DWORD*)dwBPAddr == newDWORD)
// 			return TRUE;
// 
// 		BYTE byValue[4] = { 0, };
// 		__DWORD(byValue) = newDWORD;
// 
// 		if (g_Driver.WriteVirtualMemory(g_AutoManager.m_dwMirPID, dwBPAddr, byValue, 4)) {
// 		}
// 		else {
// 			XMsg("[E] SetDword fail.");
// 			return FALSE;
// 		}
	}
	else
	{
		if (dwBPAddr == 0)
			return FALSE;
		if (*(DWORD*)dwBPAddr == newDWORD)
			return TRUE;
		DWORD dwOldProtect;
		VirtualProtectEx(g_hMyProc, (LPVOID)dwBPAddr, 1, PAGE_EXECUTE_READWRITE, &dwOldProtect);
		if (IsBadWritePtr((void*)dwBPAddr, 1))
		{
			VirtualProtectEx(g_hMyProc, (LPVOID)dwBPAddr, 1, dwOldProtect, &dwOldProtect);
			return FALSE;
		}

		*(DWORD*)dwBPAddr = newDWORD;
		VirtualProtectEx(g_hMyProc, (LPVOID)dwBPAddr, 1, dwOldProtect, &dwOldProtect);
	}

	return TRUE;
}

BOOL CBpManager::StartBPHooking()
{
	g_hVectorHandler = AddVectoredExceptionHandler(1, MyVectoredHandler);//
	RaiseException( 0, 0, 0, 0 );
	return TRUE;
}

void CBpManager::StopBPHooking()
{
	RemoveVectoredExceptionHandler(g_hVectorHandler);
	for (int i = 0; i < g_BPManager.m_nBPCount; i++)
	{
		BP_INFO* pBpInfo = &g_BPManager.m_aryBPList[i];
		CBpManager::UnSetInt3(pBpInfo->dwBPAddr, &pBpInfo->byOrgByteVal);
		CBpManager::UnSetInt3(pBpInfo->dwNextBPAddr, &pBpInfo->byOrgNextByteVal);
	}
	memset(g_BPManager.m_aryBPList, 0, sizeof(g_BPManager.m_aryBPList));
	g_BPManager.m_nBPCount = 0;
}

BOOL CBpManager::IsExeModuleAddress(DWORD64 qwAddress)
{
	//if (!qwAddress || !g_hAssemblyModuleMain || !g_dwExeImageSize)
	//	return FALSE;
	//if (qwAddress < g_hAssemblyModuleMain)
	//	return FALSE;
	//if (qwAddress > g_hAssemblyModuleMain + g_dwExeImageSize)
	//	return FALSE;
	return TRUE;
}

BOOL CBpManager::PatchByteSequence(DWORD64 dwBPAddr, BYTE* newByte, int nLen)  //窃荐矫累 40    窃荐场 C3
{
	if (FALSE/*IsGameModuleAddress(dwBPAddr)*/)
	{
// 		if (dwBPAddr == 0)
// 			return FALSE;
// 
// 		if (g_Driver.WriteVirtualMemory(g_AutoManager.m_dwMirPID, dwBPAddr, newByte, nLen)) {
// 			return TRUE;
// 		}
// 		else {
// 			XMsg(L"[E] PatchByteSequence fail");
// 			return FALSE;
// 		}
	}
	else
	{
		if (dwBPAddr == 0)
			return FALSE;
		DWORD dwOldProtect;
		VirtualProtectEx(g_hMyProc, (LPVOID)dwBPAddr, nLen, PAGE_EXECUTE_READWRITE, &dwOldProtect);
		if (IsBadWritePtr((void*)dwBPAddr, 1))
		{
			VirtualProtectEx(g_hMyProc, (LPVOID)dwBPAddr, nLen, dwOldProtect, &dwOldProtect);
			return FALSE;
		}

		for (int i = 0; i < nLen; i++)
		{
			*(BYTE*)(dwBPAddr + i) = newByte[i];
		}
		VirtualProtectEx(g_hMyProc, (LPVOID)dwBPAddr, nLen, dwOldProtect, &dwOldProtect);
		return TRUE;
	}
}

void OnReadResource(CONTEXT* pContext)
{
	XMsg(L"[E] OnReadResource Mounting Called (%s) Caller (%llX, %llX)", (WCHAR*)*(DWORD64*)(pContext->Rdx), *(DWORD64*)(pContext->Rsp), Address_VA2RVA(*(DWORD64*)(pContext->Rsp)));
}

void CBpManager::RegisterHookFunctions()
{
	XMsg(L"Start RegisterHookGameFunctions");
	//AddBreakPoint(0x411910, -1, NULL, OnHookedTemp1Called, OnHookedTempCalled);
 	//AddBreakPoint(0x411985, 3, NULL, OnHookedFuncCalled, OnHookedTempCalled);
  	//AddBreakPoint(0x411959, 3, NULL, OnHookedFuncCalled, OnHookedTempCalled);
//  	AddBreakPoint(0xBE6192, 7, NULL, OnHookedFuncCalled, OnHookedTempCalled);
//  	AddBreakPoint(0xBE6170, -1, NULL, OnHookedFuncCalled, OnHookedTempCalled);

//  	SetByte(0xBE4000, 0xb8);
//  	SetDword(0xBE4001, 0x1);
// 	SetByte(0xBE4005, 0xc3);
	
 	//AddBreakPoint((DWORD64)CompareString, -1, NULL, OnHookedFuncCalled, OnHookedTemp1Called);
	//StartBPHooking();
}

LONG WINAPI MyVectoredHandler(struct _EXCEPTION_POINTERS* except)
{
	int ExceptionCode;
	static DWORD m_pd3dxFont = NULL;
	static DWORD m_pDrawText = NULL;
	static BOOL bDrawTextHook = FALSE;

	ExceptionCode = except->ExceptionRecord->ExceptionCode;
	g_pContext = except->ContextRecord;

	if (ExceptionCode == 0)
	{
		XMsg(L"[E] ================================< Software Breakpoint Ready >================================");
		for (int i = 0; i < g_BPManager.m_nBPCount; i++)
		{
			BP_INFO* pBpInfo = &g_BPManager.m_aryBPList[i];
			CBpManager::SetInt3(pBpInfo->dwBPAddr, &pBpInfo->byOrgByteVal);
		}
		return -1;
	}

	if (ExceptionCode != EXCEPTION_SINGLE_STEP && ExceptionCode != EXCEPTION_BREAKPOINT)
		return 0;

	if (*(BYTE*)g_pContext->Rip != 0xCC)
	{
		return 0;
	}
	for (int i = 0; i < g_BPManager.m_nBPCount; i++)
	{
		BP_INFO* pBpInfo = &g_BPManager.m_aryBPList[i];
		if (g_pContext->Rip == pBpInfo->dwBPAddr)
		{
			CBpManager::UnSetInt3(pBpInfo->dwBPAddr, &pBpInfo->byOrgByteVal);
			if (pBpInfo->nDelta < 0)
				pBpInfo->dwNextBPAddr = *(DWORD64*)(g_pContext->Rsp);
			else
				pBpInfo->dwNextBPAddr = pBpInfo->dwBPAddr + pBpInfo->nDelta;

			if (pBpInfo->pfnPrevListener)
				pBpInfo->pfnPrevListener(g_pContext, &pBpInfo->stExtraRegisterInfo);

			if (pBpInfo->nDelta) //if length = 0, just hook once.
				CBpManager::SetInt3(pBpInfo->dwNextBPAddr, &pBpInfo->byOrgNextByteVal);

			return -1;
		}

		if (g_pContext->Rip == pBpInfo->dwNextBPAddr)
		{
			CBpManager::UnSetInt3(pBpInfo->dwNextBPAddr, &pBpInfo->byOrgNextByteVal);
			if (pBpInfo->pfnNextListener)
				pBpInfo->pfnNextListener(g_pContext, &pBpInfo->stExtraRegisterInfo);
			CBpManager::SetInt3(pBpInfo->dwBPAddr, &pBpInfo->byOrgByteVal);
			return -1;
		}
	}

	return 0;
}

BOOL CBpManager::IsNeedPrintWhenHooked(CONTEXT* pContext, PSTExtraRegInfo pstExtraRegisterInfo)
{
	BOOL bPrint = TRUE;
	if (pstExtraRegisterInfo && pstExtraRegisterInfo->bUnprintSameCaller)
	{
		bPrint = FALSE;

		do
		{
			DWORD64 qwCaller = *(DWORD64*)(pContext->Rsp);
			if (g_nCallerCount >= MAX_CALLER_COUNT)
			{
				break;
			}

			BOOL bExist = FALSE;
			for (int i = 0; i < g_nCallerCount; i++)
			{
				if (g_aryCallerList[i] == qwCaller)
				{
					bExist = TRUE;
					break;
				}
			}

			if (bExist)
				break;

			g_aryCallerList[g_nCallerCount] = qwCaller;
			g_nCallerCount++;
			bPrint = TRUE;

		} while (FALSE);
	}

	if (bPrint)
	{
		if (pstExtraRegisterInfo && pstExtraRegisterInfo->bUnprintSameRegister)
		{
			bPrint = FALSE;

			do
			{
				E_REGISTER_TYPE eRegType = (E_REGISTER_TYPE)pstExtraRegisterInfo->dwUnprintSameRegIdxWhenHooked;
				DWORD64 qwRegValue = 0;
				switch (eRegType)
				{
				case e_Reg_RAX: qwRegValue = pContext->Rax; break;
				case e_Reg_RBX: qwRegValue = pContext->Rbx; break;
				case e_Reg_RCX: qwRegValue = pContext->Rcx; break;
				case e_Reg_RDX: qwRegValue = pContext->Rdx; break;
				case e_Reg_RSI: qwRegValue = pContext->Rsi; break;
				case e_Reg_RDI: qwRegValue = pContext->Rdi; break;
				case e_Reg_RIP: qwRegValue = pContext->Rip; break;
				case e_Reg_RSP: qwRegValue = pContext->Rsp; break;
				case e_Reg_RBP: qwRegValue = pContext->Rbp; break;
				case e_Reg_RFL: qwRegValue = pContext->EFlags;	break;
				case e_Reg_R8: qwRegValue = pContext->R8;	break;
				case e_Reg_R9: qwRegValue = pContext->R9;	break;
				case e_Reg_R10: qwRegValue = pContext->R10;	break;
				case e_Reg_R11: qwRegValue = pContext->R11;	break;
				case e_Reg_R12: qwRegValue = pContext->R12;	break;
				case e_Reg_R13: qwRegValue = pContext->R13;	break;
				case e_Reg_R14: qwRegValue = pContext->R14;	break;
				case e_Reg_R15: qwRegValue = pContext->R15;	break;
				case e_Reg_Arg5: qwRegValue = *(DWORD64*)(pContext->Rsp + 0x28);	break;
				case e_Reg_Arg6: qwRegValue = *(DWORD64*)(pContext->Rsp + 0x30);	break;
				}

				if (g_nParamValueCount >= MAX_PARAM_VALUE_COUNT)
				{
					break;
				}

				BOOL bExist = FALSE;
				for (int i = 0; i < g_nParamValueCount; i++)
				{
					if (g_aryParamValueList[i] == qwRegValue)
					{
						bExist = TRUE;
						break;
					}
				}

				if (bExist)
					break;

				g_aryParamValueList[g_nParamValueCount] = qwRegValue;
				g_nParamValueCount++;
				bPrint = TRUE;

			} while (FALSE);
		}
	}

	return bPrint;
}

void CBpManager::OnHookedCreateWindowEx(CONTEXT* pContext, PSTExtraRegInfo pstExtraRegisterInfo)
{
	XMsg(L"CreateWindowEx => ExStyle(0x%X), CName(%s), WName(%s), Style(0x%X), xy(%d,%d)(%d,%d), Parent(0x%X), Menu(0x%X), Inst(0x%llX), Param(0x%llX)",
		pContext->Rcx,
		(LPCWSTR)pContext->Rdx,
		(LPCWSTR)pContext->R8,
		pContext->R9,
		*(DWORD64*)(pContext->Rsp + 0x28),
		*(DWORD64*)(pContext->Rsp + 0x30),
		*(DWORD64*)(pContext->Rsp + 0x38),
		*(DWORD64*)(pContext->Rsp + 0x40),
		*(DWORD64*)(pContext->Rsp + 0x48),
		*(DWORD64*)(pContext->Rsp + 0x50),
		*(DWORD64*)(pContext->Rsp + 0x58),
		*(DWORD64*)(pContext->Rsp + 0x60));
		
}

void CBpManager::OnHookedCreateWindowExAfter(CONTEXT* pContext, PSTExtraRegInfo pstExtraRegisterInfo)
{
	XMsg(L"CreateWindowEx Result HWND: 0x%X", pContext->Rax);
}

void CBpManager::OnHookedSetWindowLongPtrEx(CONTEXT* pContext, PSTExtraRegInfo pstExtraRegisterInfo)
{
	XMsg(L"SetWindowLongPtrEx => HWnd(0x%X), Param:%d, Function(0x%llX)",
		pContext->Rcx,
		(int)pContext->Rdx,
		pContext->R8);

// 	if (pContext->R8 && !IsBadReadPtr((void*)pContext->R8, 0x1))
// 	{
// 		DWORD dwOffset = __DWORD(pContext->R8 + 0x1);
// 		DWORD64 qwFunctionAddress = pContext->R8 + 0x5 + dwOffset - 0x100000000;
// 		XMsg(L"FuncAddr: 0x%llX", qwFunctionAddress);
// 	}
}

void CBpManager::OnHookedTempCalled(CONTEXT* pContext, PSTExtraRegInfo pstExtraRegisterInfo)
{
	BOOL bPrint = IsNeedPrintWhenHooked(pContext, pstExtraRegisterInfo);
	//XMsg(L"%d", bPrint);
	if (bPrint) 
	{
		DEBUG_PRINT(pContext->Rax);
		XMsg(L"\n");
	}

// 	DWORD64 qwClassName = pContext->Rdx;
// 	DWORD64 qwCaptionName = pContext->R8;
// 	if (qwClassName && !IsBadReadPtr((char*)qwClassName, 0x1) && qwCaptionName && !IsBadReadPtr((char*)qwCaptionName, 0x1))
// 	{
// 		XMsg(L"Class:%s, Caption:%s", (WCHAR*)qwClassName, (WCHAR*)qwCaptionName);
// 		OnHookedFuncCalled(pContext, pstExtraRegisterInfo);
// 	}
}

void CBpManager::OnHookedTemp1Called(CONTEXT* pContext, PSTExtraRegInfo pstExtraRegisterInfo)
{
#if 1
		DEBUG_PRINT(pContext->Rax);
#else
	DEBUG_PRINT(pContext->Rip);
	DEBUG_PRINT(*(DWORD64*)(pContext->Rcx + 0x60));
	DWORD64 qwStackMinus58 = pContext->Rcx;
	ViewHexData((char*)qwStackMinus58, 0x200);

#endif
}

void CBpManager::OnHookedFuncCalled(CONTEXT* pContext, PSTExtraRegInfo pstExtraRegisterInfo)
{
	BOOL bPrint = IsNeedPrintWhenHooked(pContext, pstExtraRegisterInfo);

	DWORD64 _RAX, _RBX, _RCX, _RDX, _RSI, _RDI, _RIP, _RSP, _RBP, _RFL;
	DWORD64 _R8, _R9, _R10, _R11, _R12, _R13, _R14, _R15, _Arg5, _Arg6;
	M128A _XMM0, _XMM1, _XMM2, _XMM3, _XMM4, _XMM5, _XMM6, _XMM7, _XMM8, _XMM9, _XMM10, _XMM11, _XMM12, _XMM13, _XMM14, _XMM15;
	float _fXMM0, _fXMM1, _fXMM2, _fXMM3, _fXMM4, _fXMM5, _fXMM6, _fXMM7, _fXMM8, _fXMM9, _fXMM10, _fXMM11, _fXMM12, _fXMM13, _fXMM14, _fXMM15;
	DWORD64 _qwXMM0_l, _qwXMM0_h;
	DWORD64 _qwXMM1_l, _qwXMM1_h;
	DWORD64 _qwXMM2_l, _qwXMM2_h;
	DWORD64 _qwXMM3_l, _qwXMM3_h;
	DWORD64 _qwXMM4_l, _qwXMM4_h;
	DWORD64 _qwXMM5_l, _qwXMM5_h;
	DWORD64 _qwXMM6_l, _qwXMM6_h;
	DWORD64 _qwXMM7_l, _qwXMM7_h;
	DWORD64 _qwXMM8_l, _qwXMM8_h;
	DWORD64 _qwXMM9_l, _qwXMM9_h;
	DWORD64 _qwXMM10_l, _qwXMM10_h;
	DWORD64 _qwXMM11_l, _qwXMM11_h;
	DWORD64 _qwXMM12_l, _qwXMM12_h;
	DWORD64 _qwXMM13_l, _qwXMM13_h;
	DWORD64 _qwXMM14_l, _qwXMM14_h;
	DWORD64 _qwXMM15_l, _qwXMM15_h;

	_RAX = pContext->Rax;
	_RBX = pContext->Rbx;
	_RCX = pContext->Rcx;
	_RDX = pContext->Rdx;
	_RSI = pContext->Rsi;
	_RDI = pContext->Rdi;
	_RIP = pContext->Rip;
	_RSP = pContext->Rsp;
	_RBP = pContext->Rbp;
	_RFL = pContext->EFlags;

	_R8 = pContext->R8;
	_R9 = pContext->R9;
	_R10 = pContext->R10;
	_R11 = pContext->R11;
	_R12 = pContext->R12;
	_R13 = pContext->R13;
	_R14 = pContext->R14;
	_R15 = pContext->R15;

	_Arg5 = *(DWORD64*)(_RSP + 0x28);
	_Arg6 = *(DWORD64*)(_RSP + 0x30);

	_XMM0 = pContext->Xmm0;
	_qwXMM0_h = _XMM0.High;
	_qwXMM0_l = _XMM0.Low;
	_fXMM0 = *(float*)&_qwXMM0_l;

	_XMM1 = pContext->Xmm1;
	_qwXMM1_h = _XMM1.High;
	_qwXMM1_l = _XMM1.Low;
	_fXMM1 = *(float*)&_qwXMM1_l;

	_XMM2 = pContext->Xmm2;
	_qwXMM2_h = _XMM2.High;
	_qwXMM2_l = _XMM2.Low;
	_fXMM2 = *(float*)&_qwXMM2_l;

	_XMM3 = pContext->Xmm3;
	_qwXMM3_h = _XMM3.High;
	_qwXMM3_l = _XMM3.Low;
	_fXMM3 = *(float*)&_qwXMM3_l;

	_XMM4 = pContext->Xmm4;
	_qwXMM4_h = _XMM4.High;
	_qwXMM4_l = _XMM4.Low;
	_fXMM4 = *(float*)&_qwXMM4_l;

	_XMM5 = pContext->Xmm5;
	_qwXMM5_h = _XMM5.High;
	_qwXMM5_l = _XMM5.Low;
	_fXMM5 = *(float*)&_qwXMM5_l;

	_XMM6 = pContext->Xmm6;
	_qwXMM6_h = _XMM6.High;
	_qwXMM6_l = _XMM6.Low;
	_fXMM6 = *(float*)&_qwXMM6_l;

	_XMM7 = pContext->Xmm7;
	_qwXMM7_h = _XMM7.High;
	_qwXMM7_l = _XMM7.Low;
	_fXMM7 = *(float*)&_qwXMM7_l;

	_XMM8 = pContext->Xmm8;
	_qwXMM8_h = _XMM8.High;
	_qwXMM8_l = _XMM8.Low;
	_fXMM8 = *(float*)&_qwXMM8_l;

	_XMM9 = pContext->Xmm9;
	_qwXMM9_h = _XMM9.High;
	_qwXMM9_l = _XMM9.Low;
	_fXMM9 = *(float*)&_qwXMM9_l;

	_XMM10 = pContext->Xmm10;
	_qwXMM10_h = _XMM10.High;
	_qwXMM10_l = _XMM10.Low;
	_fXMM10 = *(float*)&_qwXMM10_l;

	_XMM11 = pContext->Xmm11;
	_qwXMM11_h = _XMM11.High;
	_qwXMM11_l = _XMM11.Low;
	_fXMM11 = *(float*)&_qwXMM11_l;

	_XMM12 = pContext->Xmm12;
	_qwXMM12_h = _XMM12.High;
	_qwXMM12_l = _XMM12.Low;
	_fXMM12 = *(float*)&_qwXMM12_l;

	_XMM13 = pContext->Xmm13;
	_qwXMM13_h = _XMM13.High;
	_qwXMM13_l = _XMM13.Low;
	_fXMM13 = *(float*)&_qwXMM13_l;

	_XMM14 = pContext->Xmm14;
	_qwXMM14_h = _XMM14.High;
	_qwXMM14_l = _XMM14.Low;
	_fXMM14 = *(float*)&_qwXMM14_l;

	_XMM15 = pContext->Xmm15;
	_qwXMM15_h = _XMM15.High;
	_qwXMM15_l = _XMM15.Low;
	_fXMM15 = *(float*)&_qwXMM15_l;

	if (bPrint)
	{
		XMsg(L"[E] Hooked function called, RIP: <%llX>(%llX), Caller: <%llX> (%llX)", pContext->Rip, Address_VA2RVA(pContext->Rip), *(DWORD64*)(pContext->Rsp), Address_VA2RVA(*(DWORD64*)(pContext->Rsp)));

		XMsg(L"[E] RAX = 0x%016llX RBX = 0x%016llX RCX = 0x%016llX RDX = 0x%016llX RSI = 0x%016llX \n [E]\
			   RDI = 0x%016llX RIP = 0x%016llX RSP = 0x%016llX RBP = 0x%016llX RFL = 0x%016llX \n [E]\
			   R8  = 0x%016llX R9  = 0x%016llX R10 = 0x%016llX R11 = 0x%016llX \n [E]\
			   R12 = 0x%016llX R13 = 0x%016llX R14 = 0x%016llX R15 = 0x%016llX"
			, _RAX, _RBX, _RCX, _RDX, _RSI, _RDI, _RIP, _RSP, _RBP, _RFL
			, _R8, _R9, _R10, _R11, _R12, _R13, _R14, _R15);
		XMsg(L"[E] arg=[1][0x%016llX], [2][0x%016llX], [3][0x%016llX], [4][0x%016llX], [5][0x%016llX], [6][0x%016llX]",
			_RCX
			, _RDX
			, _R8
			, _R9
			, _Arg5
			, _Arg6
		);
		DWORD64 qwTemp = _RBP + 0x60;
		if (qwTemp && !IsBadReadPtr((void*)(qwTemp), 0x1))
		{
			DEBUG_PRINT(*(DWORD64*)(qwTemp));
		}
// 		XMsg(L"[E] XMM0 = [0x%016llX %016llX, %f], XMM1 = [0x%016llX %016llX, %f], XMM2 = [0x%016llX %016llX, %f], XMM3 = [0x%016llX %016llX, %f], XMM4 = [0x%016llX %016llX, %f], XMM5 = [0x%016llX %016llX, %f], XMM6 = [0x%016llX %016llX, %f], XMM7 = [0x%016llX %016llX, %f]\n\
//  							, XMM8 = [0x%016llX %016llX, %f], XMM9 = [0x%016llX %016llX, %f], XMM10 = [0x%016llX %016llX, %f], XMM11 = [0x%016llX %016llX, %f], XMM12 = [0x%016llX %016llX, %f], XMM13 = [0x%016llX %016llX, %f], XMM14 = [0x%016llX %016llX, %f], XMM15 = [0x%016llX %016llX, %f]",
//  				_qwXMM0_h, _qwXMM0_l, _fXMM0, _qwXMM1_h, _qwXMM1_l, _fXMM1, _qwXMM2_h, _qwXMM2_l, _fXMM2, _qwXMM3_h, _qwXMM3_l, _fXMM3, _qwXMM4_h, _qwXMM4_l, _fXMM4, _qwXMM5_h, _qwXMM5_l, _fXMM5, _qwXMM6_h, _qwXMM6_l, _fXMM6, _qwXMM7_h, _qwXMM7_l, _fXMM7,
//  				_qwXMM8_h, _qwXMM8_l, _fXMM8, _qwXMM9_h, _qwXMM9_l, _fXMM9, _qwXMM10_h, _qwXMM10_l, _fXMM10, _qwXMM11_h, _qwXMM11_l, _fXMM11, _qwXMM12_h, _qwXMM12_l, _fXMM12, _qwXMM13_h, _qwXMM13_l, _fXMM13, _qwXMM14_h, _qwXMM14_l, _fXMM14, _qwXMM15_h, _qwXMM15_l, _fXMM15);
 	 	}

	if (pstExtraRegisterInfo)
	{
		BOOL bReadValueWhenHooked = (BOOL)pstExtraRegisterInfo->bReadValueWhenHooked;
		if (bReadValueWhenHooked)
		{
			DWORD dwReadRegIdxWhenHooked = pstExtraRegisterInfo->dwReadRegIdxWhenHooked;
			DWORD dwSignWhenHooked = pstExtraRegisterInfo->dwSignWhenHooked;
			DWORD dwHexValueWhenHooked = pstExtraRegisterInfo->dwOffsetValueToReadWhenHooked;
			DWORD dwHexReadLengthWhenHooked = pstExtraRegisterInfo->dwLengthToReadWhenHooked;


			E_REGISTER_TYPE eRegType = (E_REGISTER_TYPE)dwReadRegIdxWhenHooked;
			E_SIGN_TYPE eSignType = (E_SIGN_TYPE)dwSignWhenHooked;
			DWORD64 qwRegValue = 0;
			std::wstring strRegToRead, strSignToRead;
			switch (eRegType)
			{
			case e_Reg_RAX: qwRegValue = pContext->Rax; strRegToRead = L"RAX";	break;
			case e_Reg_RBX: qwRegValue = pContext->Rbx; strRegToRead = L"RBX";	break;
			case e_Reg_RCX: qwRegValue = pContext->Rcx; strRegToRead = L"RCX";	break;
			case e_Reg_RDX: qwRegValue = pContext->Rdx; strRegToRead = L"RDX";	break;
			case e_Reg_RSI: qwRegValue = pContext->Rsi; strRegToRead = L"RSI";	break;
			case e_Reg_RDI: qwRegValue = pContext->Rdi; strRegToRead = L"RDI";	break;
			case e_Reg_RIP: qwRegValue = pContext->Rip; strRegToRead = L"RIP";	break;
			case e_Reg_RSP: qwRegValue = pContext->Rsp; strRegToRead = L"RSP";	break;
			case e_Reg_RBP: qwRegValue = pContext->Rbp; strRegToRead = L"RBP";	break;
			case e_Reg_RFL: qwRegValue = pContext->EFlags; strRegToRead = L"RFL";	break;
			case e_Reg_R8: qwRegValue = pContext->R8; strRegToRead = L"R8";	break;
			case e_Reg_R9: qwRegValue = pContext->R9; strRegToRead = L"R9";	break;
			case e_Reg_R10: qwRegValue = pContext->R10; strRegToRead = L"R10";	break;
			case e_Reg_R11: qwRegValue = pContext->R11; strRegToRead = L"R11";	break;
			case e_Reg_R12: qwRegValue = pContext->R12; strRegToRead = L"R12";	break;
			case e_Reg_R13: qwRegValue = pContext->R13; strRegToRead = L"R13";	break;
			case e_Reg_R14: qwRegValue = pContext->R14; strRegToRead = L"R14";	break;
			case e_Reg_R15: qwRegValue = pContext->R15; strRegToRead = L"R15";	break;
			case e_Reg_Arg5: qwRegValue = *(DWORD64*)(_RSP + 0x28); strRegToRead = L"Arg5";	break;
			case e_Reg_Arg6: qwRegValue = *(DWORD64*)(_RSP + 0x30); strRegToRead = L"Arg6";	break;
			}

			switch (eSignType)
			{
			case e_Sign_Plus: strSignToRead = L"+"; break;
			case e_Sign_Minus: strSignToRead = L"-"; break;
			}

			DWORD64 qwRegOffsetValue = 0;
			DWORD64 qwVAValue = 0;
			DWORD64 qwRVAValue = 0;
			if (qwRegValue)
			{
				if (eSignType == e_Sign_Plus)
					qwRegOffsetValue = qwRegValue + dwHexValueWhenHooked;
				else
					qwRegOffsetValue = qwRegValue - dwHexValueWhenHooked;


				if (qwRegOffsetValue && !IsBadReadPtr((void*)qwRegOffsetValue, 8))
				{
					qwVAValue = *(DWORD64*)(qwRegOffsetValue);
					qwRVAValue = 0;
					if (qwVAValue > g_hAssemblyModuleMain)
						qwRVAValue = Address_VA2RVA(qwVAValue);

				}
			}
			if (bPrint)
			{
				XMsg(L"[E] (Read) %s:0x%llX      *(DWORD64*)(%s %s 0x%X): VA(%llX) RVA(%llX)",
					strRegToRead.c_str(), qwRegValue,
					strRegToRead.c_str(), strSignToRead.c_str(), dwHexValueWhenHooked, qwVAValue, qwRVAValue);
				//XMsg(L"123");
				if (dwHexReadLengthWhenHooked && qwRegOffsetValue && !IsBadReadPtr((void*)qwRegOffsetValue, 8))
				{
					//XMsg(L"%llx, %llx", qwVAValue, dwHexReadLengthWhenHooked);
					ViewHexData((LPCSTR)qwRegOffsetValue, (int)dwHexReadLengthWhenHooked);


					//Zeus wrote
					WCHAR wszTemp[30];
					memset(wszTemp, 0, sizeof(WCHAR) * 30);
					//XMsg(L"first:%s", wszTemp);
					DEBUG_PRINT(*(DWORD64*)(qwRegOffsetValue));
					memcpy(wszTemp, (void*)(qwRegOffsetValue), sizeof(WCHAR) * 30);
					XMsg(L"second:%s", wszTemp);

				}
		}


			if (pstExtraRegisterInfo->bWriteValueWhenHooked)
			{
				switch (pstExtraRegisterInfo->dwWriteUnitWhenHooked)
				{
				case e_DVT_BIT:
				{
					qwVAValue = qwVAValue / 2 * 2 + pstExtraRegisterInfo->qwHexValueToWriteWhenHooked % 2;
				}
				break;
				case e_DVT_BYTE:
				{
					qwVAValue = qwVAValue / 0x100 * 0x100 + pstExtraRegisterInfo->qwHexValueToWriteWhenHooked % 0x100;
				}
				break;
				case e_DVT_WORD:
				{
					qwVAValue = qwVAValue / 0x10000 * 0x10000 + pstExtraRegisterInfo->qwHexValueToWriteWhenHooked % 0x10000;
				}
				break;
				case e_DVT_DWORD:
				{
					qwVAValue = qwVAValue / 0x100000000 * 0x100000000 + pstExtraRegisterInfo->qwHexValueToWriteWhenHooked % 0x100000000;
				}
				break;
				case e_DVT_DWORD64:
				{
					qwVAValue = pstExtraRegisterInfo->qwHexValueToWriteWhenHooked;
				}
				break;
				default:
					break;
				}
				if (pstExtraRegisterInfo->bWriteToOffset)
				{
					if (qwRegOffsetValue && !IsBadReadPtr((void*)qwRegOffsetValue, 8))
					{
						if (bPrint)
						{
							XMsg(L"[E] (Write) %s:0x%llX      *(DWORD64*)(%s %s 0x%X): (%llX)",
								strRegToRead.c_str(), qwRegValue,
								strRegToRead.c_str(), strSignToRead.c_str(), dwHexValueWhenHooked, qwVAValue);
						}

						*(DWORD64*)(qwRegOffsetValue) = qwVAValue;
					}
				}
				else
				{
					if (bPrint)
					{
						XMsg(L"[E] (Write) %s:0x%llX      %s:(%llX)",
							strRegToRead.c_str(), qwRegValue,
							strRegToRead.c_str(), qwVAValue);
					}

					switch (eRegType)
					{
					case e_Reg_RAX: pContext->Rax = qwVAValue; break;
					case e_Reg_RBX: pContext->Rbx = qwVAValue; break;
					case e_Reg_RCX: pContext->Rcx = qwVAValue; break;
					case e_Reg_RDX: pContext->Rdx = qwVAValue; break;
					case e_Reg_RSI: pContext->Rsi = qwVAValue; break;
					case e_Reg_RDI: pContext->Rdi = qwVAValue; break;
					case e_Reg_RIP: pContext->Rip = qwVAValue; break;
					case e_Reg_RSP: pContext->Rsp = qwVAValue; break;
					case e_Reg_RBP: pContext->Rbp = qwVAValue; break;
					case e_Reg_RFL: pContext->EFlags = (DWORD)qwVAValue; break;
					case e_Reg_R8: pContext->R8 = qwVAValue; break;
					case e_Reg_R9: pContext->R9 = qwVAValue; break;
					case e_Reg_R10: pContext->R10 = qwVAValue; break;
					case e_Reg_R11: pContext->R11 = qwVAValue; break;
					case e_Reg_R12: pContext->R12 = qwVAValue; break;
					case e_Reg_R13: pContext->R13 = qwVAValue; break;
					case e_Reg_R14: pContext->R14 = qwVAValue; break;
					case e_Reg_R15: pContext->R15 = qwVAValue; break;
					case e_Reg_Arg5: *(DWORD64*)(_RSP + 0x28) = qwVAValue; break;
					case e_Reg_Arg6: *(DWORD64*)(_RSP + 0x30) = qwVAValue; break;
					}
				}
			}
		}
	}
}

CBpManager* GetBpManager()
{
	return &g_BPManager;
}