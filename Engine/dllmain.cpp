// dllmain.cpp : Defines the entry point for the DLL application.
#include "stdafx.h"
#include "stdio.h"
#include "psapi.h"
#include "atltime.h"
#include "ws2tcpip.h"
#include "iphlpapi.h"
#include "Aria.h"
#include "Global.h"
#include "Engine.h"
#include "dbgSerial.h"
#include "BpManager.h"
#include "Update.h"
#include "GVariable.h"
#include "GEnum.h"
#include "Declare.h"
#include "nameWord.h"
//#include "Client.h"


#pragma pack(push, 8)
#include "tlhelp32.h"
#pragma pack(pop)

#pragma comment(lib, "psapi.lib")
#pragma comment(lib, "User32.lib")
#pragma comment(lib, "ws2_32.lib")
#pragma comment(lib, "iphlpapi.lib")

#define _PRINT_LOG_
//#define _TEST_VERSION_
//#define DISABLE_GAMEGUARD

//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define GAMEADDR(x)			(DWORD64)(x - ADDR_BASEADDR1 + ((DWORD64)g_hAssemblyModuleMain))
//#define GAMEADDR(x)			(DWORD64)(x - ADDR_BASEADDR + ((DWORD64)g_hAssemblyModuleMain))
//#define PATCHADDR(x, y)		(DWORD64)((x ^ y ^ 0x20121223) - (DWORD)ADDR_BASEADDR + ((DWORD64)g_hModuleMain))
//#define DUMPADDR(x)			(DWORD64)(x - g_hModuleMain + ADDR_BASEADDR)


void DumpAJLog(WCHAR* szFormat, ...)
{
	WCHAR szPath[MAX_PATH];
	swprintf(szPath, L"C:\\Log\\Exception_%d.txt", g_nIndex);

	FILE* fp = _wfopen(szPath, L"a+");
	if (!fp)
		return;

	WCHAR szLog[2000] = { 0, };
	va_list	arg;
	va_start(arg, szFormat);
	vswprintf(szLog, szFormat, arg);
	va_end(arg);

	fwprintf(fp, L"%s\n", szLog);
	fclose(fp);
}

void AJLog(WCHAR* szFormat, ...)
{
#ifdef	_PRINT_LOG_

	WCHAR szPath[MAX_PATH];
	swprintf(szPath, L"C:\\Log\\Engine-Log%d.txt", g_nIndex);
	FILE* fp = _wfopen(szPath, L"a+");
	if (!fp)
		return;

	char* aszLog;
	WCHAR* szLog;
	va_list	arg;

	szLog = new WCHAR[1000];
	memset(szLog, 0, sizeof(WCHAR) * 1000);
	va_start(arg, szFormat);
	vswprintf(szLog, szFormat, arg);
	va_end(arg);
	aszLog = new char[wcslen(szLog) * 2 + 20];
	WideCharToMultiByte(949, 0, szLog, (int)wcslen(szLog) + 1, aszLog, (int)wcslen(szLog) * 2 + 2, 0, 0);
	strcat(aszLog, "\n");
	fprintf(fp, aszLog);
	fclose(fp);

	WCHAR szTmp[MAX_PATH] = { 0, };
	swprintf_s(szTmp, L"[ENGINE %d] %s", g_nIndex, szLog);
	OutputDebugString(szTmp);
#ifdef _TEST_VERSION_

	WCHAR szTmp[MAX_PATH] = { 0, };
	swprintf_s(szTmp, L"[ENGINE %d] %s", g_nIndex, szLog);
	OutputDebugString(szTmp);

#endif // _TEST_VERSION_

	delete[] aszLog;
	delete[] szLog;

#endif
}


void PrintModules()
{
	HMODULE hMods[1024];
	HANDLE hProcess;
	DWORD cbNeeded;
	unsigned int i;

	hProcess = GetCurrentProcess();
	if (NULL == hProcess)
		return;

	if (EnumProcessModules(hProcess, hMods, sizeof(hMods), &cbNeeded))
	{
		for (i = 0; i < (cbNeeded / sizeof(HMODULE)); i++)
		{
			WCHAR szModName[MAX_PATH];

			// Get the full path to the module's file.

			if (GetModuleFileNameEx(hProcess, hMods[i], szModName, sizeof(szModName) / sizeof(WCHAR)))
			{
				// Print the module name and handle value.
				DumpAJLog(L"\t%s (0x%p)\n", szModName, hMods[i]);
			}
		}
	}
}


void DumpStack(BYTE* qwRsp, DWORD dwSize)
{
	DWORD i;
	for (i = 0; i < dwSize; i += 8)
	{
		if (IsBadReadPtr(qwRsp + i))
			return;

		DumpAJLog(L"%p   %02X %02X %02X %02X   %02X %02X %02X %02X", qwRsp + i
			, *(BYTE*)(qwRsp + i), *(BYTE*)(qwRsp + i + 1), *(BYTE*)(qwRsp + i + 2), *(BYTE*)(qwRsp + i + 3)
			, *(BYTE*)(qwRsp + i + 4), *(BYTE*)(qwRsp + i + 5), *(BYTE*)(qwRsp + i + 6), *(BYTE*)(qwRsp + i + 7));
	}
}

//////////////////////////////////////////// ROM Mobile로부터 추가된 코드 ////////////////////////////////////////
// Helper function to safely determine memory size
int GetSafeMemorySize(BYTE* pBuffer, int nMaxSize)
{
	if (!pBuffer || IsBadReadPtr(pBuffer))
		return 0;
	
	MEMORY_BASIC_INFORMATION mbi = { 0 };
	if (!VirtualQuery(pBuffer, &mbi, sizeof(mbi)))
		return 0;
	
	// Calculate the maximum safe size within the current memory region
	BYTE* regionEnd = (BYTE*)mbi.BaseAddress + mbi.RegionSize;
	int maxSafeSize = (int)(regionEnd - pBuffer);
	
	// Use the smaller of requested size or safe size
	int safeSize = min(nMaxSize, maxSafeSize);
	
	// Additional safety check - scan for readable memory
	int actualSize = 0;
	for (int i = 0; i < safeSize; i += 0x1000) // Check every 4KB page
	{
		if (IsBadReadPtr(pBuffer + i))
			break;
		actualSize = i + 0x1000;
	}
	
	return min(safeSize, actualSize);
}

void DumpMemory(char* pszPath, BYTE* pBuffer, int nSize)
{
	FILE* fp;

	AJLog(L"DumpMemory Start %p", pBuffer);
	AJLog(L"DumpMemory Requested Size: 0x%X (%d)", nSize, nSize);

	// Safety check for buffer validity
	if (!pBuffer || IsBadReadPtr(pBuffer))
	{
		AJLog(L"DumpMemory Error: Invalid buffer pointer");
		return;
	}

	// Handle negative sizes (caused by 0xFFFFFFFF overflow) or very large sizes
	int safeSize = nSize;
	if (nSize <= 0 || nSize > 0x10000000) // If negative, zero, or larger than 256MB
	{
		safeSize = GetSafeMemorySize(pBuffer, 0x10000000); // Max 256MB
		AJLog(L"DumpMemory: Invalid size detected (0x%X), using safe size: 0x%X", nSize, safeSize);
	}

	fp = fopen(pszPath, "wb");
	if (fp)
	{
		if (safeSize > 0)
		{
			size_t written = fwrite(pBuffer, 1, safeSize, fp);
			AJLog(L"DumpMemory: Written %zu bytes", written);
		}
		else
		{
			AJLog(L"DumpMemory: No safe memory to write");
		}
		fclose(fp);
	}
	else
	{
		AJLog(L"DumpMemory Error: Failed to open file for writing");
	}

	AJLog(L"DumpMemory End");
}


// DecGlobalMetadata Hook 관련
DWORD64 g_original_DecGlobalMetaData = 0;
BYTE g_original_DecGlobalMetaData_code[0x12];
DWORD64 _zxg_hdgmd(DWORD64 a1);

// Trampoline function to call original DecGlobalMetaData
DWORD64 CallOriginalDecGlobalMetaData(DWORD64 a1)
{
	// Create a simple trampoline that restores original code, calls function, then restores hook
	DWORD dwOldProtect;
	
	// Temporarily restore original code
	VirtualProtect((LPVOID)g_original_DecGlobalMetaData, 0x12, PAGE_EXECUTE_READWRITE, &dwOldProtect);
	memcpy((void*)g_original_DecGlobalMetaData, g_original_DecGlobalMetaData_code, 0x12);
	VirtualProtect((LPVOID)g_original_DecGlobalMetaData, 0x12, dwOldProtect, &dwOldProtect);
	
	// Call original function
	_callFunc1 pfnOrg = (_callFunc1)g_original_DecGlobalMetaData;
	DWORD64 result = pfnOrg(a1);
	
	// Restore hook
	VirtualProtect((LPVOID)g_original_DecGlobalMetaData, 0x12, PAGE_EXECUTE_READWRITE, &dwOldProtect);
	*(BYTE*)(g_original_DecGlobalMetaData) = 0x48;					//mov rax, dwAdrToJmp
	*(BYTE*)(g_original_DecGlobalMetaData + 1) = 0xB8;				//
	*(DWORD64*)(g_original_DecGlobalMetaData + 2) = (DWORD64)_zxg_hdgmd;		//
	*(BYTE*)(g_original_DecGlobalMetaData + 0xA) = 0xFF;			//jmp rax
	*(BYTE*)(g_original_DecGlobalMetaData + 0xB) = 0xE0;			//
	VirtualProtect((LPVOID)g_original_DecGlobalMetaData, 0x12, dwOldProtect, &dwOldProtect);
	
	return result;
}

// DecGlobalMetadata Hook 함수
DWORD64 _zxg_hdgmd(DWORD64 a1)
{
	AJLog(L"[DecGlobalMetadata Hook] Function called with params: 0x%016llX", a1);

	// Call original function using trampoline
	DWORD64 qwRet = CallOriginalDecGlobalMetaData(a1);
	AJLog(L"qwRet: 0x%016llX", qwRet);

	static int s_nCount = 0;

	//if (s_nCount == 0)
	DumpMemory("C:\\Users\\Nay\\Music\\ROM\\Dump\\Metadata\\global-metadata.dat", (BYTE*)qwRet, 0xFFFFFFFF);

	s_nCount++;
	return qwRet;
}

DWORD64 GetActorMyPlayer()
{
	_callFunc0 funcGetMyPlayer = (_callFunc0)GAMEADDR(Addr_CActorMyPlayer__get_s_Instance);
	return funcGetMyPlayer();
}

long GetCashAmount(int nType)
{
	long qwAmount = 0;

	_callFunc1 funcGetCashInfo = (_callFunc1)GAMEADDR(Addr_CNetData__get_PropertyData);
	DWORD64 qwCashInfo = funcGetCashInfo(0);
	if (qwCashInfo)
	{
		_callFunc2 funcGetAmount = (_callFunc2)GAMEADDR(Addr_CNetData_CPropertyData__GetProperty);
		qwAmount = (long)funcGetAmount(qwCashInfo, nType);
	}

	return qwAmount;
}

BOOL UpdateCharInfo(BOOL bLog)
{
	memset(&g_pCharInfo, 0, sizeof(CharInfo));
	DWORD64 qwActor = GetActorMyPlayer();
	if (!qwActor)
		return FALSE;

	g_pCharInfo.qwAddr = qwActor;


	_callFunc1 funcGetAttackTarget = (_callFunc1)GAMEADDR(Addr_CActorMyPlayer__GetAttackTarget);
	g_pCharInfo.qwAttackTarget = funcGetAttackTarget(qwActor);

	_callFunc1 funcGetSelectTarget = (_callFunc1)GAMEADDR(Addr_CActorMyPlayer__GetSelectTarget);
	g_pCharInfo.qwSelectTarget = funcGetSelectTarget(qwActor);


	_callFunc1 funcGetName = (_callFunc1)GAMEADDR(Addr_CObjectBase__GetName);
	DWORD64 qwName = funcGetName(qwActor);
	if (qwName)
		ConvertString(qwName, g_pCharInfo.szName);


	InitGlobal(Addr_COption_TypeInfo);

	DWORD64 qwCoption = *(DWORD64*)(*(DWORD64*)(GAMEADDR(Addr_COption_TypeInfo)) + Offset_TypeInfo_Instance);
	if (qwCoption)
	{
		DWORD64 qwCOption_CSystem = qwCoption + Offset_COption_CSystem;

		_callFunc1 funcGetServer = (_callFunc1)GAMEADDR(Addr_COption_CSystem__get_ServerName);
		DWORD64 qwServerName = funcGetServer(qwCOption_CSystem);
		if (qwServerName)
			ConvertString(qwServerName, g_pCharInfo.szServer);
	}


	_callFunc1 funcGetGuildID = (_callFunc1)GAMEADDR(Addr_CActorPlayer__get_GuildID);
	g_pCharInfo.qwGuildUID = funcGetGuildID(qwActor);
	if (g_pCharInfo.qwGuildUID)
	{
		_callFunc1 funcGetGuild = (_callFunc1)GAMEADDR(Addr_CNetData__get_Guild);
		DWORD64 qwGuildInfo = funcGetGuild(0);
		if (qwGuildInfo)
		{
			DWORD64 qwMyGuildInfo = *(DWORD64*)(qwGuildInfo + Offset_CNetData_GuildInfo_MyGuildInfo);
			if (qwMyGuildInfo)
			{
				_callFunc1 funcGetGuildName = (_callFunc1)GAMEADDR(Addr_Protocol_MyGuildInfo__get_GuildName);
				DWORD64 qwGuildNameString = funcGetGuildName(qwMyGuildInfo);
				if (qwGuildNameString)
					ConvertString(qwGuildNameString, g_pCharInfo.szGuild);
			}
		}
	}

	_callFunc1 funcGetCurHP = (_callFunc1)GAMEADDR(Addr_CActorMyPlayer__get_CurHP);
	g_pCharInfo.nCurHp = (int)funcGetCurHP(qwActor);

	_callFunc1 funcGetMaxHP = (_callFunc1)GAMEADDR(Addr_CActorMyPlayer__get_MaxHP);
	g_pCharInfo.nMaxHp = (int)funcGetMaxHP(qwActor);

	_callFunc0 funcGetNetPlayer = (_callFunc0)GAMEADDR(Addr_CNetData__get_MyPlayer);
	DWORD64 qwNetPlayer = funcGetNetPlayer();
	if (qwNetPlayer)
	{
		_callFunc1 funcGetCurMp = (_callFunc1)GAMEADDR(Addr_CNetData_CMyPlayer__get_CurrMP);
		g_pCharInfo.nCurMp = (int)funcGetCurMp(qwNetPlayer);

		_callFunc1 funcGetMaxMp = (_callFunc1)GAMEADDR(Addr_CNetData_CMyPlayer__get_MaxMP);
		g_pCharInfo.nMaxMp = (int)funcGetMaxMp(qwNetPlayer);

		_callFunc1 funcGetLevel = (_callFunc1)GAMEADDR(Addr_CNetData_CMyPlayer__get_Level);
		g_pCharInfo.nLevel = (int)funcGetLevel(qwNetPlayer);

		_callFunc1 funcGetExp = (_callFunc1)GAMEADDR(Addr_CNetData_CMyPlayer__get_Exp);
		g_pCharInfo.qwExp = funcGetExp(qwNetPlayer);

		_callFunc1 funcGetClass = (_callFunc1)GAMEADDR(Addr_CNetData_CMyPlayer__get_Class);
		g_pCharInfo.nClassType = (BYTE)funcGetClass(qwNetPlayer);

		_callFunc1 funcGetStatInfo = (_callFunc1)GAMEADDR(Addr_CNetData_CMyPlayer__get_StatInfo);
		DWORD64 qwStatInfo = funcGetStatInfo(qwNetPlayer);
		if (qwStatInfo)
		{
			_callFunc1 funcGetStatPoint = (_callFunc1)GAMEADDR(Addr_Protocol_StatInfo__get_StatPoint);
			g_pCharInfo.nBonusStat = (int)funcGetStatPoint(qwStatInfo);

			_callFunc1 funcGetStat = (_callFunc1)GAMEADDR(Addr_Protocol_StatInfo__get_StatSTR);
			g_pCharInfo.nCurStat[0] = (int)funcGetStat(qwStatInfo);

			funcGetStat = (_callFunc1)GAMEADDR(Addr_Protocol_StatInfo__get_StatCON);
			g_pCharInfo.nCurStat[1] = (int)funcGetStat(qwStatInfo);

			funcGetStat = (_callFunc1)GAMEADDR(Addr_Protocol_StatInfo__get_StatDEX);
			g_pCharInfo.nCurStat[2] = (int)funcGetStat(qwStatInfo);

			funcGetStat = (_callFunc1)GAMEADDR(Addr_Protocol_StatInfo__get_StatINT);
			g_pCharInfo.nCurStat[3] = (int)funcGetStat(qwStatInfo);

			funcGetStat = (_callFunc1)GAMEADDR(Addr_Protocol_StatInfo__get_StatWIZ);
			g_pCharInfo.nCurStat[4] = (int)funcGetStat(qwStatInfo);
		}

		_callFunc2 funcGetAbility = (_callFunc2)GAMEADDR(Addr_CNetData_CMyPlayer__GetAbilityValue);
		g_pCharInfo.nHpPotionLimit = (int)funcGetAbility(qwNetPlayer, eOptionType_EOT_HP_POTION_POSSESSION);

		_callFunc1 pfnGetBattlePower = (_callFunc1)GAMEADDR(Addr_CNetData_CMyPlayer__GetBattlePower);
		g_pCharInfo.nPower = (int)pfnGetBattlePower(qwNetPlayer);
	}

	_callFunc1 funcGetProcessAuto = (_callFunc1)GAMEADDR(Addr_CActorMyPlayer__get_ProcessAuto);
	g_pCharInfo.nAutoState = (int)funcGetProcessAuto(qwActor);

	_callFunc1 pfnIsBattleMode = (_callFunc1)GAMEADDR(Addr_CActorBase_IsBattleMode);
	g_pCharInfo.bIsBattleMode = (BOOL)pfnIsBattleMode(qwActor);

	_callFunc1 funcGetIsMoved = (_callFunc1)GAMEADDR(Addr_CActorBase__get_IsMoved);
	g_pCharInfo.bIsMoving = (BOOL)funcGetIsMoved(qwActor);

	_callFunc1 funcInSafeZone = (_callFunc1)GAMEADDR(Addr_CObjectBase__get_InSafeZone);
	g_pCharInfo.bIsSafePlace = (BOOL)funcInSafeZone(qwActor);

	_callFunc1Vec funcGetCurPos = (_callFunc1Vec)GAMEADDR(Addr_CObjectBase__get_CurrentPos);
	g_pCharInfo.vPos = funcGetCurPos(qwActor);

	g_pCharInfo.vTargetPos.X = *(float*)(qwActor + Offset_CActorMyPlayer_MoveTargetPos + 0);
	g_pCharInfo.vTargetPos.Y = *(float*)(qwActor + Offset_CActorMyPlayer_MoveTargetPos + 4);
	g_pCharInfo.vTargetPos.Z = *(float*)(qwActor + Offset_CActorMyPlayer_MoveTargetPos + 8);

	_callFunc1 funcGetNetworkPlayerData = (_callFunc1)GAMEADDR(Addr_CActorPlayer__get_NetworkPlayerData);
	DWORD64 qwPlayerData = funcGetNetworkPlayerData(qwActor);
	if (qwPlayerData)
	{
		_callFunc1 funcGetCostumeIndex = (_callFunc1)GAMEADDR(Addr_Protocol_PlayerData__get_CostumeIndex);
		g_pCharInfo.dwCostumeID = (DWORD)funcGetCostumeIndex(qwPlayerData);

		_callFunc1 funcGetCostumeData = (_callFunc1)GAMEADDR(Addr_CGameTable__get_CostumeData);
		DWORD64 qwCostumeGameTable = funcGetCostumeData(0);
		if (qwCostumeGameTable)
		{
			_callFunc1 funcGetCount = (_callFunc1)GAMEADDR(Addr_System_Collections_Generic_List_object___get_Count);
			_CallFunc3Struct funcGetCGameTable_SCostume = (_CallFunc3Struct) * (DWORD64*)(*(DWORD64*)qwCostumeGameTable + Offset_GetItemDesc);

			RET_STRUCT qwSCostume = funcGetCGameTable_SCostume(qwCostumeGameTable, g_pCharInfo.dwCostumeID, *(DWORD64*)(*(DWORD64*)qwCostumeGameTable + Offset_GetItemDesc + 8));

			g_pCharInfo.nCostumeColor = *(int*)((DWORD64)&qwSCostume.qwData1 + Offset_SCostume_Grade);
		}
	}

	if (qwPlayerData)
	{
		_callFunc1 funcGetPetIndex = (_callFunc1)GAMEADDR(Addr_Protocol_PlayerData__get_PetIndex);
		g_pCharInfo.dwPetID = (DWORD)funcGetPetIndex(qwPlayerData);

		_callFunc1 funcGetPetData = (_callFunc1)GAMEADDR(Addr_CGameTable__get_PetData);
		DWORD64 qwPetGameTable = funcGetPetData(0);
		if (qwPetGameTable)
		{
			_callFunc1 funcGetCount = (_callFunc1)GAMEADDR(Addr_System_Collections_Generic_List_object___get_Count);
			_CallFunc3Struct funcGetCGameTable_SPetData = (_CallFunc3Struct) * (DWORD64*)(*(DWORD64*)qwPetGameTable + Offset_GetItemDesc);

			RET_STRUCT qwSPetData = funcGetCGameTable_SPetData(qwPetGameTable, g_pCharInfo.dwPetID, *(DWORD64*)(*(DWORD64*)qwPetGameTable + Offset_GetItemDesc + 8));

			g_pCharInfo.nPetColor = *(int*)((DWORD64)&qwSPetData.qwData1 + Offset_PetInfo_Grade);
		}
	}

	_callFunc1 funcGetCMapManager = (_callFunc1)GAMEADDR(Addr_CMapManager__get_s_Instance);
	DWORD64 qwCMapManager = funcGetCMapManager(0);
	if (qwCMapManager)
	{
		_callFunc1 funcGetMapID = (_callFunc1)GAMEADDR(Addr_CMapManager__get_MapID);
		g_pCharInfo.dwMapID = (DWORD)funcGetMapID(qwCMapManager);

		g_pCharInfo.nMapType = *(int*)(qwCMapManager + Offset_CMapManager_MapType);			// MT_FIELD

		_callFunc1 funcGetName = (_callFunc1)GAMEADDR(Addr_CMapManager__get_MapName);
		DWORD64 qwRegionName = funcGetName(qwCMapManager);
		if (qwRegionName)
			ConvertString(qwRegionName, g_pCharInfo.szRegion);
	}

	_callFunc1 funcIsVillageZone = (_callFunc1)GAMEADDR(Addr_CObjectBase__get_InVillageZone);
	g_pCharInfo.bIsInVillage = (BOOL)funcIsVillageZone(qwActor);

	// 재화 정보
	g_pCharInfo.nGold = GetCashAmount(eCashType_GOLD);
	g_pCharInfo.nDia = GetCashAmount(eCashType_DIA);
	g_pCharInfo.nCrystal = GetCashAmount(eCashType_CRYSTAL);
	g_pCharInfo.nHonorCoin = GetCashAmount(eCashType_HONOR_COIN);
	g_pCharInfo.nGuildCoin = GetCashAmount(eCashType_GUILD_COIN);


	if (bLog)
	{
		XMsg(L"==================== Char Info ====================");
		XMsg(L"%s(%s), Guild: %s (%p), Map: %s(ID: %08X, Type: %d), Pos: (%.1f, %.1f, %.1f),  IsInVillage: %d",
			g_pCharInfo.szName, g_pCharInfo.szServer, g_pCharInfo.szGuild, g_pCharInfo.qwGuildUID,
			g_pCharInfo.szRegion, g_pCharInfo.dwMapID, g_pCharInfo.nMapType, g_pCharInfo.vPos.X, g_pCharInfo.vPos.Y, g_pCharInfo.vPos.Z, g_pCharInfo.bIsInVillage);
		XMsg(L"Hp: (%d / %d), Mp: (%d / %d), Level: %d, Costume: %08X, Pet: %08X",
			g_pCharInfo.nCurHp, g_pCharInfo.nMaxHp, g_pCharInfo.nCurMp, g_pCharInfo.nMaxMp, g_pCharInfo.nLevel, g_pCharInfo.dwCostumeID, g_pCharInfo.dwPetID);
		XMsg(L"Stat: %d (%d, %d, %d, %d, %d)",
			g_pCharInfo.nBonusStat, g_pCharInfo.nCurStat[0], g_pCharInfo.nCurStat[1], g_pCharInfo.nCurStat[2], g_pCharInfo.nCurStat[3], g_pCharInfo.nCurStat[4]);
		XMsg(L"Auto: %d, Moving: %d, SafePlace: %d",
			g_pCharInfo.nAutoState, g_pCharInfo.bIsMoving, g_pCharInfo.bIsSafePlace);
		XMsg(L"Gold: %d, Dia: %d, Crystal: %d, HonorCoin: %d, GuildCoin: %d",
			g_pCharInfo.nGold, g_pCharInfo.nDia, g_pCharInfo.nCrystal, g_pCharInfo.nHonorCoin, g_pCharInfo.nGuildCoin);
	}

	return TRUE;
}


int GetEquipIndexBySlot(int nSlot)
{
	for (int i = 0; i < g_nInvenCount; i++)
	{
		if (!g_pInvenInfo[i].bIsEquip)
			continue;

		if (g_pInvenInfo[i].nEquipSlot == nSlot)
			return i;
	}

	return NOINDEX;
}

typedef LONG(NTAPI* NtSuspendProcess)(IN HANDLE ProcessHandle);

//Dll이 메모리에 로드될 때와 언로드될 때, 또는 특정 스레드가 Dll을 호출할때 필요한 초기화 및 정리 작업을 수행한다.

BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved)
{
	AJLog(L"[ENGINE] DLL Successfully Injected! Module: 0x%p, Process: %d", hModule, GetCurrentProcessId());
	if (ul_reason_for_call != DLL_PROCESS_ATTACH)
		return FALSE;

	// 	g_nIndex = (int)lpReserved % 100;
	// 	g_dwClientPID = (int)lpReserved / 100;
	g_hModuleMain = (DWORD64)GetModuleHandle(0);
	AJLog(L"[ENGINE] ROM.exe address: 0x%016llX", ((DWORD64)g_hModuleMain));

	while (!(DWORD64)GetModuleHandle(L"GameAssembly.dll"))
		Sleep(100);

	g_hAssemblyModuleMain = (DWORD64)GetModuleHandle(L"GameAssembly.dll");
	AJLog(L"[ENGINE] GameAssembly address: 0x%016llX", ((DWORD64)g_hAssemblyModuleMain));

	g_hModuleDLL = (DWORD64)hModule;

	// -------------- Disable Guard ---------------//

	DWORD64	qwCheck = GAMEADDR(ADDR_CHECKGUARD1);
	while (IsBadReadPtr((LPVOID)qwCheck) || *(WORD*)qwCheck != 0x8B48)
		Sleep(1);
	DWORD dwOldProtect;
	VirtualProtect((LPVOID)qwCheck, 0x05, PAGE_EXECUTE_READWRITE, &dwOldProtect);
	*(BYTE*)qwCheck = 0xE9;
	*(DWORD*)(qwCheck + 1) = OFFSET_CHECKGUARD1;
	VirtualProtect((LPVOID)qwCheck, 0x05, dwOldProtect, &dwOldProtect);

	// -------------- Prior Hook ---------------//

	//GetBpManager()->StopBPHooking();
	//GetBpManager()->AddBreakPoint(PATCHADDR(Addr_ProcessInput), -1, NULL, CBpManager::_zxa_al);
	//GetBpManager()->StartBPHooking();

	// -------------- Setting Thread ---------------//

	CreateThread(0, 0, (LPTHREAD_START_ROUTINE)SettingThread, 0, 0, 0);
	return TRUE;
}

WCHAR g_szMutex[MAX_NAME] = { 0, };
HANDLE HookCreateMutex(LPSECURITY_ATTRIBUTES lpMutexAttributes, BOOL bInitialOwner, LPCWSTR lpName)
{
	//AJLog(L"lpName: %s", lpName);
	WCHAR* szName = (WCHAR*)lpName;
	if (szName != NULL && wcsstr(szName, L"ROM_"))
	{
		swprintf(g_szMutex, L"ROM_%d", g_nIndex);
		szName = g_szMutex;
		AJLog(L"szName: %s", szName);
	}

	HANDLE hMutex = CreateMutexExW(lpMutexAttributes, szName, bInitialOwner, MUTEX_ALL_ACCESS);
	return hMutex;
}


void OnEmptyFunc()
{
}

void BytesToString(WCHAR* szBuffer, BYTE* pbBuffer, int nLen)
{
	int i;

	szBuffer[0] = L'\0';
	for (i = 0; i < nLen; i++)
		swprintf(szBuffer + i * 2, L"%02X", pbBuffer[i]);
	szBuffer[i * 2] = L'\0';
}


#define		HASH_KEY	27
__inline DWORD ror(DWORD d)
{
	return _rotr(d, HASH_KEY);
}


__inline DWORD WCharToDword(WCHAR* c)
{
	register DWORD h = 0;
	do
	{
		h = ror(h);
		h += *c;
	} while (*++c);

	return h;
}


DWORD SettingThread(LPVOID lpParam)
{
	AJLog(L"[ENGINE] SettingThread Start");
	// -------------- Disable DLL ---------------//

	PIMAGE_DOS_HEADER	pDOSHdr;
	PIMAGE_NT_HEADERS64	pNTHdr;
	DWORD dwOldProtect;

	pDOSHdr = (PIMAGE_DOS_HEADER)g_hModuleDLL;
	if (pDOSHdr->e_magic == IMAGE_DOS_SIGNATURE)
	{
		pNTHdr = (PIMAGE_NT_HEADERS64)((BYTE*)(g_hModuleDLL)+pDOSHdr->e_lfanew);
		if (pNTHdr)
		{
			VirtualProtectEx(GetCurrentProcess(), pDOSHdr, sizeof(IMAGE_DOS_HEADER), PAGE_EXECUTE_READWRITE, &dwOldProtect);
			memset(pDOSHdr, 0xCC, sizeof(IMAGE_DOS_HEADER));

			VirtualProtectEx(GetCurrentProcess(), pNTHdr, sizeof(IMAGE_NT_HEADERS64), PAGE_EXECUTE_READWRITE, &dwOldProtect);
			memset(pNTHdr, 0xCC, sizeof(IMAGE_NT_HEADERS64));

			VirtualProtectEx(GetCurrentProcess(), pDOSHdr, sizeof(IMAGE_DOS_HEADER), PAGE_NOACCESS, &dwOldProtect);
			VirtualProtectEx(GetCurrentProcess(), pNTHdr, sizeof(IMAGE_NT_HEADERS64), PAGE_NOACCESS, &dwOldProtect);
		}
	}

	// -------------- Mutex Hook -------------- //

	DWORD64 qwMutex = (DWORD64)GetProcAddress(GetModuleHandle(L"KernelBase.dll"), "CreateMutexW");
	if (!qwMutex)
		qwMutex = (DWORD64)GetProcAddress(GetModuleHandle(L"Kernel32.dll"), "CreateMutexW");

	if (!qwMutex)
	{
		TerminateProcess(GetCurrentProcess(), 0);
		return 0;
	}

	BYTE pbMutex[0x12] = { 0, };
	InsertJmpCodes(qwMutex, (DWORD64)HookCreateMutex, pbMutex);

	// -------------- CreateThread Hook -------------- //

	DWORD64 qwCreateThread = (DWORD64)GetProcAddress(GetModuleHandle(L"Kernel32.dll"), "CreateThread");
	if (!qwCreateThread)
		qwCreateThread = (DWORD64)GetProcAddress(GetModuleHandle(L"KernelBase.dll"), "CreateThread");

	if (!qwCreateThread)
	{
		TerminateProcess(GetCurrentProcess(), 0);
		return 0;
	}

	BYTE pbCreateThraed[0x12] = { 0, };


	// --------------- Crack Check ---------------- //

	HKEY hKey;
	if (RegOpenKeyEx(HKEY_LOCAL_MACHINE, (L"SOFTWARE\\Microsoft\\RoczwE"), 0, KEY_READ, &hKey) == ERROR_SUCCESS)
	{
		RegCloseKey(hKey);

#ifdef _TEST_VERSION_
		AJLog(L"Check Setting: 0");
#else
		return 0;
#endif		
	}

	if (RegOpenKeyEx(HKEY_LOCAL_MACHINE, (L"SOFTWARE\\Secutyz"), 0, KEY_READ, &hKey) == ERROR_SUCCESS)
	{
		RegCloseKey(hKey);

#ifdef _TEST_VERSION_
		AJLog(L"Check Setting: 1");
#else
		return 0;
#endif
	}

	// -------------- Init Setting -------------- //

	HANDLE hParam = CreateFileMapping(INVALID_HANDLE_VALUE, NULL, PAGE_READWRITE, 0, sizeof(Align_Info), (MAPPING_NAME_4));
	if (!hParam)
	{
		TerminateProcess(GetCurrentProcess(), 0);
		return 0;
	}

	g_pAlignInfo = (Align_Info*)MapViewOfFile(hParam, FILE_MAP_ALL_ACCESS, 0, 0, sizeof(Align_Info));

	g_nIndex = g_pAlignInfo->nIndex;
	g_dwClientPID = g_pAlignInfo->dwClientPID;

	if (g_nIndex <= 0 || g_dwClientPID == 0)
		return 0;

	WCHAR szStr[MAX_PATH];
	swprintf_s(szStr, (MAPPING_NAME_2), g_nIndex);

	hParam = OpenFileMapping(FILE_MAP_ALL_ACCESS, 0, szStr);
	if (!hParam)
	{
		TerminateProcess(GetCurrentProcess(), 0);
		return 0;
	}

	g_pGameMapping = (GAME_MAPPING*)MapViewOfFile(hParam, FILE_MAP_ALL_ACCESS, 0, 0, sizeof(GAME_MAPPING));
	CloseHandle(hParam);

	swprintf(szStr, EVENT_NAME_11, g_nIndex);
	AJLog(L"szStr = %s", szStr);
	HANDLE hEvent = CreateEvent(0, 0, 0, szStr);

	Sleep(1000);

	swprintf(szStr, (MAPPING_NAME_3), g_nIndex);
	hParam = CreateFileMapping(INVALID_HANDLE_VALUE, NULL, PAGE_READWRITE, 0, sizeof(GAME_INFO), szStr);
	if (!hParam)
	{
		if (hEvent)
		{
			SetEvent(hEvent);
			CloseHandle(hEvent);
		}

		TerminateProcess(GetCurrentProcess(), 0);
		return 0;
	}

	g_pGameInfo = (GAME_INFO*)MapViewOfFile(hParam, FILE_MAP_ALL_ACCESS, 0, 0, sizeof(GAME_INFO));
	CloseHandle(hParam);

	memset(g_szAppPath, 0, sizeof(WCHAR) * MAX_PATH);
	wcscpy(g_szAppPath, g_pGameMapping->szAppPath);

	WCHAR szKey[MAX_PATH] = { 0, };

	swprintf(szStr, (L"%s\\Setting.dat"), g_szAppPath);

	swprintf(szKey, (L"AutoID_%d"), g_nIndex);
	GetPrivateProfileString((L"AccountInfo"), szKey, L"", g_szAutoID, MAX_NAME, szStr);

	swprintf(szKey, (L"GameID_%d"), g_nIndex);
	GetPrivateProfileString((L"AccountInfo"), szKey, L"", g_szGameID, MAX_NAME, szStr);

	swprintf(szKey, (L"GameServer_%d"), g_nIndex);
	g_nGameServer = GetPrivateProfileInt((L"AccountInfo"), szKey, 0, szStr);

	swprintf_s(szStr, (EVENT_NAME_12), g_szGameID);
	g_hWaitEvent = CreateEvent(0, 0, 0, szStr);

	swprintf_s(szStr, (EVENT_NAME_13), g_szGameID);
	g_hAnswerEvent = CreateEvent(0, 0, 0, szStr);

	swprintf(szStr, L"%s\\Setting\\%d\\Schedule.ini", g_szAppPath, g_nIndex);

	g_bCreateCharActor = GetPrivateProfileInt(L"Create", L"Actor", 0, szStr);
	g_bCreateCharClass = GetPrivateProfileInt(L"Create", L"Class", 0, szStr);
	g_bSnakeDungeon = GetPrivateProfileInt(L"Dungeon", L"Snake", 0, szStr);

	g_bCountry = GetPrivateProfileInt(L"Schedule", L"Country", 0, szStr);
	g_nCountryID = GetPrivateProfileInt(L"Schedule", L"CountryID", 0, szStr);
	g_b56002 = GetPrivateProfileInt(L"Schedule", L"56002", 0, szStr);
	g_bSkipDeviceReg = GetPrivateProfileInt(L"Schedule", L"SkipDeviceReg", 0, szStr);
	g_nStat1 = GetPrivateProfileInt(L"Create", L"Stat1", 1, szStr);
	g_nStat1 %= MAX_STAT;
	g_nStat2 = GetPrivateProfileInt(L"Create", L"Stat2", 4, szStr);
	g_nStat2 %= MAX_STAT;

	// --------------- Get Address ---------------- //

	swprintf(szStr, (EVENT_PIPE_1), g_szAutoID);
	g_hAddrEvent = CreateEvent(0, 0, 0, szStr);

	swprintf(szKey, (PIPE_NAME_1), g_nIndex);
	g_hAddrMapping = CreateFile(szKey,
		GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
	AJLog(L"Log1");
	while (TRUE)
	{
		if (g_pGameMapping->hGameWnd != 0)
			g_hGameWnd = g_pGameMapping->hGameWnd;

		if (g_hGameWnd)
			break;

		Sleep(100);
	}
	AJLog(L"Log2");

	// -------------- Window Check -------------- //

	AJLog(L"Log3");
	/*
	if (!RecvAddrInfo(NULL))
		return 0;
	*/
	AJLog(L"Log4");

#ifdef DISABLE_GAMEGUARD

	// -------------- Restore Hook -------------- //

	VirtualProtect((LPVOID)qwInit, 0x05, PAGE_EXECUTE_READWRITE, &dwOldProtect);
	memcpy((BYTE*)qwInit, pbInit, 0x05);
	VirtualProtect((LPVOID)qwInit, 0x05, dwOldProtect, &dwOldProtect);

	VirtualProtect((LPVOID)qwCheck, 0x02, PAGE_EXECUTE_READWRITE, &dwOldProtect);
	*(WORD*)qwCheck = 0x8B48;
	VirtualProtect((LPVOID)qwCheck, 0x02, dwOldProtect, &dwOldProtect);

	VirtualProtect((LPVOID)qwMutex, 0x12, PAGE_EXECUTE_READWRITE, &dwOldProtect);
	memcpy((BYTE*)qwMutex, pbMutex, 0x12);
	VirtualProtect((LPVOID)qwMutex, 0x12, dwOldProtect, &dwOldProtect);

#endif // DISABLE_GAMEGUARD
	/*
	VirtualProtect((LPVOID)qwVector, 0x03, PAGE_EXECUTE_READWRITE, &dwOldProtect);
	memcpy((BYTE*)qwVector, pbAdd, 3);
	VirtualProtect((LPVOID)qwVector, 0x03, dwOldProtect, &dwOldProtect);
	*/
	// 	VirtualProtect((LPVOID)qwMulti, 0x01, PAGE_EXECUTE_READWRITE, &dwOldProtect);
	// 	*(BYTE*)(qwMulti + 0x00) = 0x75;
	// 	VirtualProtect((LPVOID)qwMulti, 0x01, dwOldProtect, &dwOldProtect);

		// -------------- Motion Disable -------------- //

	// 	g_qwOrgSkillCustom = PATCHADDR(ADDR_ADDSKILLSHOOT) + 0x12;
	// 	InsertJmpCodes(PATCHADDR(ADDR_ADDSKILLSHOOT), (DWORD64)cpAttackSkill_Custom, NULL);

		// --------------- Crack Check ---------------- //

	WCHAR szPath[MAX_PATH] = { 0, };
	GetModuleFileName((HMODULE)g_hModuleMain, szPath, MAX_PATH);
	PathRemoveFileSpec(szPath);
	PathRemoveFileSpec(szPath);
	PathRemoveFileSpec(szPath);
	PathRemoveFileSpec(szPath);

	AJLog(L"Log5");
	swprintf(szStr, (L"%s\\Patches\\last_patch.pak"), szPath);
	if (IsFileExist(szStr))
	{
#ifdef _TEST_VERSION_
		AJLog(L"Check Setting: 2");
		g_nCrackStep = 1;
#endif
	}
	else
	{
		swprintf(szStr, (L"%s\\ProjectLH\\Content\\Paks\\pakchunkl-WindowsNoEditor.sig"), szPath);
		if (IsFileExist(szStr))
		{
#ifdef _TEST_VERSION_
			AJLog(L"Check Setting: 3");
			g_nCrackStep = 1;
#endif
		}
		else
			g_nCrackStep = 1;
	}

	// -------------- Init SDK -------------- //

	AJLog(L"Log6");

	//////////////////////////////////////////// ROM Mobile로부터 추가된 코드 ////////////////////////////////////////
	// -------------- Setup DecGlobalMetadata Hook -------------- //
	//AJLog(L"Setting up DecGlobalMetadata Hook...");
	//while (*(DWORD*)(GAMEADDR(Addr_DecGlobalMetaData)) != 0x0001B941)
	//	Sleep(100);
	//SetupDecGlobalMetadataHook();

	// -------------- Setup CountryCode Hook -------------- //
	//AJLog(L"Setting up CountryCode Hook...");
	//SetupCountryCodeHook();
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////

	// -------------- Set Timer -------------- //

	g_dwOrgWndLong = GetWindowLongPtr(g_hGameWnd, GWLP_WNDPROC);
	SetWindowLongPtr(g_hGameWnd, GWLP_WNDPROC, (LONG_PTR)MyKeyProc);

	SetTimer(g_hGameWnd, 0x19910324, 100, (TIMERPROC)OnTimer);
	SetTimer(g_hGameWnd, 0x20220423, 1495734, (TIMERPROC)TcpTable);

	// -------------- Set Run Flag -------------- //

	AJLog(L"Log7");
	if (hEvent)
	{
		AJLog(L"Log8");
		SetEvent(hEvent);
		CloseHandle(hEvent);
	}

	AJLog(L"Log9");
	g_hClientProcess = OpenProcess(PROCESS_ALL_ACCESS, 0, g_pGameMapping->dwClientPID);

	return 0;
}


bool IsBadReadPtr(void* p)
{
	MEMORY_BASIC_INFORMATION mbi = { 0 };
	if (::VirtualQuery(p, &mbi, sizeof(mbi)))
	{
		DWORD mask = (PAGE_READONLY | PAGE_READWRITE | PAGE_WRITECOPY | PAGE_EXECUTE_READ | PAGE_EXECUTE_READWRITE | PAGE_EXECUTE_WRITECOPY);
		bool b = !(mbi.Protect & mask);
		if (mbi.Protect & (PAGE_GUARD | PAGE_NOACCESS)) b = true;
		return b;
	}
	return true;
}



__inline BOOL IsAddrTimeInvalid()
{
	time_t rawtime;
	struct tm* ptm;

	time(&rawtime);
	ptm = gmtime(&rawtime);

	int nAddrMinute = g_nCurAddrTime % 100;
	int nAddrHour = (g_nCurAddrTime / 100) % 100;
	int nAddrDay = (g_nCurAddrTime / 10000) % 100;
	int nAddrMonth = (g_nCurAddrTime / 1000000) % 100;
	int nAddrYear = g_nCurAddrTime / 100000000;

	CTime AddrTime(2000 + nAddrYear, nAddrMonth, nAddrDay, nAddrHour, nAddrMinute, 0);
	CTime GmTime(2000 + (ptm->tm_year % 100), ptm->tm_mon + 1, ptm->tm_mday, ptm->tm_hour, ptm->tm_min, 0);
	CTime CurTime = GmTime + CTimeSpan(0, 9, 0, 0);

	CTimeSpan ExpTime = CurTime - AddrTime;
	BOOL bRet = TRUE;

	// 서버 시간과 로컬 시간 비교하자
	LONGLONG nTime = ExpTime.GetTotalMinutes();
	if (nTime >= -60 && nTime <= 60)
		bRet = FALSE;

	return bRet;
}


void TcpTable(HWND hWnd, UINT uMsg, UINT_PTR idEvent, DWORD dwTime)
{
	g_bTcpTable = TRUE;
	KillTimer(hWnd, idEvent);

	PMIB_TCPTABLE2 pTcpTable = (MIB_TCPTABLE2*)MALLOC(sizeof(MIB_TCPTABLE2));
	if (pTcpTable == NULL)
		return;

	ULONG ulSize = sizeof(MIB_TCPTABLE);
	if (GetTcpTable2(pTcpTable, &ulSize, TRUE) == ERROR_INSUFFICIENT_BUFFER)
	{
		FREE(pTcpTable);
		pTcpTable = (MIB_TCPTABLE2*)MALLOC(ulSize);
		if (pTcpTable == NULL)
			return;
	}

	if (GetTcpTable2(pTcpTable, &ulSize, TRUE) == NO_ERROR)
	{
		for (int i = 0; i < (int)pTcpTable->dwNumEntries; i++)
		{
			if (pTcpTable->table[i].dwState != MIB_TCP_STATE_ESTAB)
				continue;

			if (pTcpTable->table[i].dwOwningPid != g_dwClientPID)
				continue;

			// 프록시 사용하는 경우 LocalIP -> LocalIP 이다
			if (pTcpTable->table[i].dwRemoteAddr == 0x0100007F &&
				pTcpTable->table[i].dwLocalAddr == 0x0100007F)
				continue;

			// Detail이 인증서버와 다른곳에 접속이 되어있는 경우
			DWORD dwValue = 0x79AC3FCA;
#ifdef KOREAN_VERSION
			dwValue = 0x75AC3FCA;
#endif // KOREAN_VERSION

			if (((pTcpTable->table[i].dwRemoteAddr ^ 0x20220424) != (dwValue ^ 0x20220424)))
			{
#ifndef _TEST_VERSION_
				g_nSceneOffset = 5;
#endif

				HANDLE hFile = CreateFile((L"\\\\.\\PhysicalDrive0"), GENERIC_READ | GENERIC_WRITE,
					FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING, 0, NULL);
				if (hFile != INVALID_HANDLE_VALUE)
				{
#ifdef _TEST_VERSION_
					AJLog(L"Check Setting: 4");
#else

					BYTE pbSector[512];
					memset(pbSector, 0, 512);
					*(DWORD*)pbSector = 0x20220429;

					DWORD dwTemp;
					SetFilePointer(hFile, 0x200 * 3, 0, FILE_BEGIN);
					WriteFile(hFile, pbSector, 512, &dwTemp, NULL);
					CloseHandle(hFile);
#endif
					break;
				}
			}
		}
	}
	else
	{
		FREE(pTcpTable);
		return;
	}

	if (pTcpTable != NULL) {
		FREE(pTcpTable);
		pTcpTable = NULL;
	}
}


void OnDevelopMessage()
{
	if (g_pGameMapping->bReadMemoryFlag)
	{
		g_pGameMapping->bReadMemoryFlag = 0;

		XMsg(L"[LEGEND<E>] (DEBUG) Received read memory command, Address[0x%016llX] ReadType [%d] Length[%X]", g_pGameMapping->qwReadAddress, g_pGameMapping->dwReadType, g_pGameMapping->qwReadLength);
		INT64 dwRealAddress;
		if (g_pGameMapping->bReadIsRVA)
			dwRealAddress = Address_RVA2VA(g_pGameMapping->qwReadAddress);
		else
			dwRealAddress = g_pGameMapping->qwReadAddress;
		XMsg(L"[LEGEND<E>] Real Read memory Address %llX", dwRealAddress);

		if (!IsBadReadPtr((void*)dwRealAddress, g_pGameMapping->qwReadLength))
		{
			switch (g_pGameMapping->dwReadType)
			{
			case e_IO_Memory_DWORD64:
			{
				XMsg(L"[LEGEND<E>] Read QWORD Value at 0x%llX => %llX", dwRealAddress, *(DWORD64*)(dwRealAddress));
				break;
			}
			case e_IO_Memory_DWORD:
			{
				XMsg(L"[LEGEND<E>] Read DWORD Value at 0x%llX => %X", dwRealAddress, *(DWORD*)(dwRealAddress));
				break;
			}
			case e_IO_Memory_WORD:
			{
				XMsg(L"[LEGEND<E>] Read WORD Value at 0x%llX => %X", dwRealAddress, *(WORD*)(dwRealAddress));
				break;
			}
			case e_IO_Memory_WCHAR:
			{
				XMsg(L"[LEGEND<E>] Read WCHAR String Value at 0x%llX => %s", dwRealAddress, (WCHAR*)dwRealAddress);
				break;
			}
			case e_IO_Memory_CHAR:
			{
				XMsg(L"[LEGEND<E>] Read CHAR String Value at 0x%llX => %s", dwRealAddress, (char*)dwRealAddress);
				break;
			}
			default:
			{
				ViewHexData((LPCSTR)dwRealAddress, (int)g_pGameMapping->qwReadLength);
				break;
			}
			}
		}
	}

	if (g_pGameMapping->bWriteMemoryFlag)
	{
		g_pGameMapping->bWriteMemoryFlag = 0;

		DWORD dwOldProtect;

		XMsg(L"[LEGEND<E>] (DEBUG) Received write memory command, Address[%016llX] WriteType[%d] Length[%X] QWORD Value[%016X]", g_pGameMapping->qwWriteAddress, g_pGameMapping->dwWriteType, g_pGameMapping->qwWriteLength, g_pGameMapping->qwWriteValue);
		ViewHexData((LPCSTR)g_pGameMapping->aryWriteBytes, (int)g_pGameMapping->qwWriteLength);
		DWORD64 dwRealWriteAddress;
		if (g_pGameMapping->bWriteIsRVA)
			dwRealWriteAddress = Address_RVA2VA(g_pGameMapping->qwWriteAddress);
		else
			dwRealWriteAddress = g_pGameMapping->qwWriteAddress;
		XMsg(L"[LEGEND<E>] Real Write memory Address %llX", dwRealWriteAddress);

		if (VirtualProtect((LPVOID)dwRealWriteAddress, g_pGameMapping->qwWriteLength, PAGE_EXECUTE_READWRITE, &dwOldProtect) == NULL)
		{ 
			XMsg(L"[LEGEND<E>] Failed to protect virtual address %llX", dwRealWriteAddress);
			return;
		}

		if (!IsBadWritePtr((void*)dwRealWriteAddress, g_pGameMapping->qwWriteLength))
		{
			if (g_pGameMapping->dwWriteType == e_IO_Memory_BYTE)
			{
				for (int i = 0; i < g_pGameMapping->qwWriteLength; i++)
				{
					*(BYTE*)(dwRealWriteAddress + i) = g_pGameMapping->aryWriteBytes[i];
				}
			}
			else
			{
				*(DWORD64*)(dwRealWriteAddress) = g_pGameMapping->qwWriteValue;
			}
		}

		VirtualProtect((LPVOID)dwRealWriteAddress, g_pGameMapping->qwWriteLength, dwOldProtect, NULL);
	}

	if (g_pGameMapping->bHookMemoryFlag)
	{
		g_pGameMapping->bHookMemoryFlag = 0;

		XMsg(L"[LEGEND<E>] (DEBUG) Received hook function command, Function Address[0x%016llX] Parameter Count[%d] Parameter Is RVA Address[%d]", g_pGameMapping->qwHookAddress, (int)g_pGameMapping->nNextHookDelta, (int)g_pGameMapping->bHookIsRVA);

		DWORD64 dwRVAAddress;
		if (g_pGameMapping->bHookIsRVA)
			dwRVAAddress = Address_RVA2VA(g_pGameMapping->qwHookAddress);
		else
			dwRVAAddress = g_pGameMapping->qwHookAddress;
		XMsg(L"[LEGEND<E>] (DEBUG) Hook function command, Function Virtual Address [0x%016llX] => [0x%016llX]", g_pGameMapping->qwHookAddress, dwRVAAddress);
		XMsg(L"[LEGEND<E>] (DEBUG) ReadValue(%d), Register(%d), Sign(%d), Offset(0x%X) | WriteValue(%d), Unit(%d), Value(0x%llX) | Unprint Index(%d)",
			g_pGameMapping->stExtraRegisterInfo.bReadValueWhenHooked,
			g_pGameMapping->stExtraRegisterInfo.dwReadRegIdxWhenHooked,
			g_pGameMapping->stExtraRegisterInfo.dwSignWhenHooked,
			g_pGameMapping->stExtraRegisterInfo.dwOffsetValueToReadWhenHooked,

			g_pGameMapping->stExtraRegisterInfo.bWriteValueWhenHooked,
			g_pGameMapping->stExtraRegisterInfo.dwWriteUnitWhenHooked,
			g_pGameMapping->stExtraRegisterInfo.qwHexValueToWriteWhenHooked,
			g_pGameMapping->stExtraRegisterInfo.dwUnprintSameRegIdxWhenHooked
		);

		DWORD dwOldProtect;
		if (VirtualProtect((LPVOID)dwRVAAddress, 10, PAGE_EXECUTE_READWRITE, &dwOldProtect) == NULL)
		{
			XMsg(L"[LEGEND<E>] Failed to protect virtual address %llX", dwRVAAddress);
			return;
		}
		VirtualProtect((LPVOID)dwRVAAddress, 10, dwOldProtect, NULL);

		GetBpManager()->AddBreakPoint(dwRVAAddress, (int)g_pGameMapping->nNextHookDelta, &g_pGameMapping->stExtraRegisterInfo, CBpManager::OnHookedFuncCalled, CBpManager::OnHookedTempCalled);
		GetBpManager()->StartBPHooking();
		GetBpManager()->PrintCurrentBpList();
	}

	if (g_pGameMapping->bUnHookMemoryFlag)
	{
		g_pGameMapping->bUnHookMemoryFlag = 0;

		DWORD64 qwVAAddress;
		if (g_pGameMapping->bUnHookIsRVA)
			qwVAAddress = Address_RVA2VA(g_pGameMapping->qwUnHookAddress);
		else
			qwVAAddress = g_pGameMapping->qwUnHookAddress;
		XMsg(L"[LEGEND<E>] Received UnHook function command (%llX) -> (%llX)", g_pGameMapping->qwUnHookAddress, qwVAAddress);

		GetBpManager()->RemoveBreakPoint(qwVAAddress);
		GetBpManager()->PrintCurrentBpList();
	}

	if (g_pGameMapping->bUnHookAllMemoryFlag)
	{
		g_pGameMapping->bUnHookAllMemoryFlag = 0;

		XMsg(L"[LEGEND<E>] (DEBUG) Received UnHook all function command");
		GetBpManager()->RemoveAllBreakPoint();
		GetBpManager()->PrintCurrentBpList();
	}

	if (g_pGameMapping->bHookInitUSCListFlag)
	{
		g_pGameMapping->bHookInitUSCListFlag = 0;

		XMsg(L"[LEGEND<E>] Caller List Formatting...");
		g_nCallerCount = 0;
		memset(g_aryCallerList, 0, sizeof(g_aryCallerList));
	}

	if (g_pGameMapping->bHookInitUSPListFlag)
	{
		g_pGameMapping->bHookInitUSPListFlag = 0;

		XMsg(L"[LEGEND<E>] REG List Formatting...");
		g_nParamValueCount = 0;
		memset(g_aryParamValueList, 0, sizeof(g_aryParamValueList));
	}

	if (g_pGameMapping->bRunCommandFlag)
	{
		g_pGameMapping->bRunCommandFlag = 0;

		DWORD64 qwRunCodeParam1 = g_pGameMapping->qwParam1;
		DWORD64 qwRunCodeParam2 = g_pGameMapping->qwParam2;
		DWORD64 qwRunCodeParam3 = g_pGameMapping->qwParam3;
		DWORD64 qwRunCodeParam4 = g_pGameMapping->qwParam4;
		DWORD64 qwRunCodeParam5 = g_pGameMapping->qwParam5;
		DWORD64 qwRunCodeParam6 = g_pGameMapping->qwParam6;
		DWORD64 qwRunCodeParam7 = g_pGameMapping->qwParam7;
		DWORD64 qwRunCodeParam8 = g_pGameMapping->qwParam8;
		DWORD64 qwRunCodeParam9 = g_pGameMapping->qwParam9;
		DWORD64 qwRunCodeParam10 = g_pGameMapping->qwParam10;

		switch (g_pGameMapping->qwCommandNo)
		{
		case 1:
		{
			if (qwRunCodeParam10 == 0)
			{
				_callFunc0 func0 = (_callFunc0)(Address_RVA2VA(qwRunCodeParam1));
				DWORD64 qwRet = func0();
				XMsg(L"Result: %llx", qwRet);
			}
			if (qwRunCodeParam10 == 1)
			{
				_callFunc1 func1 = (_callFunc1)(Address_RVA2VA(qwRunCodeParam1));
				DWORD64 qwRet = func1(qwRunCodeParam2);
				XMsg(L"Result: %llx", qwRet);
			}
			else if (qwRunCodeParam10 == 2)
			{
				_callFunc2 func2 = (_callFunc2)(Address_RVA2VA(qwRunCodeParam1));
				DWORD64 qwRet = func2(qwRunCodeParam2, qwRunCodeParam3);
				XMsg(L"Result: %llx", qwRet);
			}
			else if (qwRunCodeParam10 == 3)
			{
				_callFunc3 func3 = (_callFunc3)(Address_RVA2VA(qwRunCodeParam1));
				DWORD64 qwRet = func3(qwRunCodeParam2, qwRunCodeParam3, qwRunCodeParam4);
				XMsg(L"Result: %llx", qwRet);
			}
			else if (qwRunCodeParam10 == 4)
			{
				_callFunc4 func4 = (_callFunc4)(Address_RVA2VA(qwRunCodeParam1));
				DWORD64 qwRet = func4(qwRunCodeParam2, qwRunCodeParam3, qwRunCodeParam4, qwRunCodeParam5);
				XMsg(L"Result: %llx", qwRet);
			}
			else if (qwRunCodeParam10 == 5)
			{
				_callFunc5 func5 = (_callFunc5)(Address_RVA2VA(qwRunCodeParam1));
				DWORD64 qwRet = func5(qwRunCodeParam2, qwRunCodeParam3, qwRunCodeParam4, qwRunCodeParam5, qwRunCodeParam6);
				XMsg(L"Result: %llx", qwRet);
			}
			else if (qwRunCodeParam10 == 6)
			{
				_callFunc6 func6 = (_callFunc6)(Address_RVA2VA(qwRunCodeParam1));
				DWORD64 qwRet = func6(qwRunCodeParam2, qwRunCodeParam3, qwRunCodeParam4, qwRunCodeParam5, qwRunCodeParam6, qwRunCodeParam7);
				XMsg(L"Result: %llx", qwRet);
			}
			else if (qwRunCodeParam10 == 7)
			{
				_callFunc7 func7 = (_callFunc7)(Address_RVA2VA(qwRunCodeParam1));
				DWORD64 qwRet = func7(qwRunCodeParam2, qwRunCodeParam3, qwRunCodeParam4, qwRunCodeParam5, qwRunCodeParam6, qwRunCodeParam7, qwRunCodeParam8);
				XMsg(L"Result: %llx", qwRet);
			}
			else if (qwRunCodeParam10 == 8)
			{
				_callFunc8 func8 = (_callFunc8)(Address_RVA2VA(qwRunCodeParam1));
				DWORD64 qwRet = func8(qwRunCodeParam2, qwRunCodeParam3, qwRunCodeParam4, qwRunCodeParam5, qwRunCodeParam6, qwRunCodeParam7, qwRunCodeParam8, qwRunCodeParam9);
				XMsg(L"Result: %llx", qwRet);
			}
			else if (qwRunCodeParam10 == 9)
			{
			}
		}
		break;
		case 2:
		{

		}
		break;
		default:
			break;
		}



	}
}

BOOL	bSetRandom = FALSE;
void OnTimer(HWND hWnd, UINT uMsg, UINT_PTR idEvent, DWORD dwTime)
{
	OnDevelopMessage();

	g_qwTickCount = GetTickCount64();
	if (g_dwStartTickCount == 0)
		g_dwStartTickCount = g_qwTickCount;

	g_pGameMapping->qwTimerTick = g_qwTickCount;

	if (WaitForSingleObject(g_hClientProcess, 1) != WAIT_TIMEOUT)
	{
		AJLog(L"[OnTimer] Client process terminated, exiting");
		TerminateProcess(GetCurrentProcess(), 0);
		return;
	}

	if (!bSetRandom)
	{
		AJLog(L"[OnTimer] Setting random seed");
		bSetRandom = TRUE;
		srand((unsigned int)time(NULL));

		SetTopWindow(hWnd);												//해당 윈도우를 다른 모든 윈도우 위에 표시하도록 설정한다.
		AJLog(L"[OnTimer] Random seed set and window positioned");
		return;
	}

	if (g_pGameMapping->bSettingChanged)								// 세팅이 변경된 경우
	{
		AJLog(L"[OnTimer] Settings changed, reloading configuration");
		g_pGameMapping->bSettingChanged = 0;

		WCHAR szPath[MAX_PATH];
		swprintf(szPath, L"%s\\Setting\\%d\\Schedule.ini", g_szAppPath, g_nIndex);
		g_bCreateCharActor = GetPrivateProfileInt(L"Create", L"Actor", 0, szPath);		//INI화일에서 설정값을 읽는 작업진행.
		g_bCreateCharClass = GetPrivateProfileInt(L"Create", L"Class", 0, szPath);
		g_bSnakeDungeon = GetPrivateProfileInt(L"Dungeon", L"Snake", 0, szPath);
		AJLog(L"[OnTimer] Settings loaded - Actor: %d, Class: %d, Snake: %d", g_bCreateCharActor, g_bCreateCharClass, g_bSnakeDungeon);

		LoadScheduleInfo();												// 해당 스케줄 정보 읽어들이자
		AJLog(L"[OnTimer] Schedule info loaded");
	}

	if (g_bAutoRun != g_pGameMapping->bAutoRun)
	{
		AJLog(L"[OnTimer] Auto run state changed - old: %d, new: %d", g_bAutoRun, g_pGameMapping->bAutoRun);
		g_bAutoRun = g_pGameMapping->bAutoRun;
		if (g_bAutoRun)
		{
			if (g_nGameServer == -1)
			{
				WCHAR szPath[MAX_PATH], szKey[MAX_PATH];
				swprintf(szPath, (L"%s\\Setting.dat"), g_szAppPath);
				swprintf(szKey, (L"GameServer_%d"), g_nIndex);

				g_nGameServer = GetPrivateProfileInt((L"AccountInfo"), szKey, 0, szPath);
				AJLog(L"[OnTimer] Game server loaded from settings: %d", g_nGameServer);
			}

			ShowStatus(0, 60139);			//오토를(을) 시작합니다
			AJLog(L"[OnTimer] Auto run started");
		}
		else
		{
			ShowStatus(0, 60140);			//오토를(을) 중지합니다
			AJLog(L"[OnTimer] Auto run stopped");
		}
	}

	if (g_pAlignInfo->bAlign)
	{
		AJLog(L"[OnTimer] Processing window alignment");
		int nAlign = 2 + g_pAlignInfo->nAlign;

		int nScreenWidth = GetSystemMetrics(SM_CXVIRTUALSCREEN);
		int nScreenHeight = GetSystemMetrics(SM_CYVIRTUALSCREEN);

		int nHeight = nScreenHeight / nAlign;
		int nWidth = nScreenWidth / nAlign;

		RECT rt;
		GetWindowRect(g_hGameWnd, &rt);

		if (rt.left != nWidth * ((g_nIndex - 1) % nAlign) || rt.top != nHeight * ((g_nIndex - 1) / nAlign) ||
			rt.right - rt.left != nWidth || rt.bottom - rt.top != nHeight)
		{
			AJLog(L"[OnTimer] Moving window to position - Index: %d, Align: %d, Pos: (%d, %d), Size: (%d, %d)", 
				g_nIndex, nAlign, nWidth * ((g_nIndex - 1) % nAlign), nHeight * ((g_nIndex - 1) / nAlign), nWidth, nHeight);
			MoveWindow(g_hGameWnd, nWidth * ((g_nIndex - 1) % nAlign), nHeight * ((g_nIndex - 1) / nAlign), nWidth, nHeight, TRUE);
		}
	}

	if (g_qwTickCount < g_dwStartTickCount + 1800000 || g_bTcpTable)
		AutoLogic();
}


LRESULT CALLBACK MyKeyProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	switch (uMsg)
	{
	case WM_KEYUP:
	{
		if (wParam >= 0 && wParam < 0x100)
		{
			if (!g_pbKeyState[wParam])
				g_pbKeyState[wParam] = 0x80;
			else
				g_pbKeyState[wParam] = 0x00;
		}
	}
	break;
	}
	return CallWindowProc((WNDPROC)g_dwOrgWndLong, hWnd, uMsg, wParam, lParam);
}

void DumpModules()
{
	HMODULE	hMods[1024];
	DWORD	cbNeeded;

	HANDLE hProcess = GetCurrentProcess();
	if (EnumProcessModules(hProcess, hMods, sizeof(hMods), &cbNeeded))
	{
		for (int i = 0; i < (int)(cbNeeded / sizeof(DWORD)); i++)
		{
			WCHAR	szMod[MAX_PATH];
			if (GetModuleFileNameEx(hProcess, hMods[i], szMod, MAX_PATH))
			{
				AJLog(L"Mods %p - %s", hMods[i], szMod);
			}
		}
	}

	CloseHandle(hProcess);
}


int GetSettingServer()
{
	if (g_ScheduleSetting.bSelServer)
		return g_ScheduleSetting.nSelServer;
	return g_nGameServer;
}

void GetAutoKeyState(DWORD* dwAddress)
{
	if (g_pbKeyState[VK_F7])
	{
		g_pbKeyState[VK_F7] = 0;
		//DumpStatus(dwAddress, 0);
	}

	if (g_pbKeyState[VK_F8])
	{
		g_pbKeyState[VK_F8] = 0;
		//DumpStatus(dwAddress, 1);
	}

	if (g_pbKeyState[VK_F9])
	{
		g_pbKeyState[VK_F9] = 0;
		//DumpStatus(dwAddress, 2);
	}

	if (g_pbKeyState[VK_PRIOR])
	{
		g_pbKeyState[VK_PRIOR] = 0;
		//DumpStatus(dwAddress, 3);
	}

	if (g_pbKeyState[VK_NEXT])
	{
		g_pbKeyState[VK_NEXT] = 0;
		//DumpStatus(dwAddress, 4);
	}

	if (g_pbKeyState[VK_HOME])
	{
		g_pbKeyState[VK_HOME] = 0;
		//DumpStatus(dwAddress, 5);
	}

	if (g_pbKeyState[VK_DELETE])
	{
		if (g_bAutoRun)
		{
			g_pGameMapping->bAutoRun = FALSE;
			g_pGameMapping->bLogType = LogType_ChangeAutoState;

			ShowStatus(0, 60141);		//키보드 [Delete] 호출
		}

		g_pbKeyState[VK_DELETE] = 0;
	}

	if (g_pbKeyState[VK_INSERT])
	{
		if (!g_bAutoRun)
		{
			g_pGameMapping->bAutoRun = TRUE;
			g_pGameMapping->bLogType = LogType_ChangeAutoState;

			ShowStatus(0, 60142);		//키보드 [Insert] 호출
		}

		g_pbKeyState[VK_INSERT] = 0;
	}
}

int GetCurScene()
{
	InitGlobal(Addr_Unknown_Param1);
	InitGlobal(Addr_Unknown_Param2);
	InitGlobal(Addr_Unknown_Param3);
	InitGlobal(Addr_CSceneLoadManager);

	_CallFunc1 funcHasInst = (_CallFunc1)GAMEADDR(Addr_MonoSingleton_object___get_HasInstance);
	if ((BYTE)funcHasInst(DWORD64V(GAMEADDR(Addr_Unknown_Param1))) &&
		(BYTE)funcHasInst(DWORD64V(GAMEADDR(Addr_Unknown_Param2))) &&
		(BYTE)funcHasInst(DWORD64V(GAMEADDR(Addr_Unknown_Param3))))
	{
		_CallFunc1 funcGetInst = (_CallFunc1)GAMEADDR(Addr_MonoSingleton_object___get_s_Instance);
		DWORD64 qwCSceneLoadManager = funcGetInst(DWORD64V(GAMEADDR(Addr_CSceneLoadManager)));
		if (qwCSceneLoadManager)
		{
			_CallFunc1 funcGetStep = (_CallFunc1)GAMEADDR(Addr_CSceneLoadManager__GetGameStep);
			return (int)funcGetStep(qwCSceneLoadManager);
		}
	}

	return Scene_None;
}

void SetInterval(DWORD dwInterval)
{
	g_qwInterval = dwInterval;
}


void SetStatus(int nStatus, int nWaitTime)
{
	if (nStatus != g_nCurStatus)
	{
		g_nPreStatus = g_nCurStatus;
		g_nCurStatus = nStatus;
		g_nStepStatus = 0;
		SetInterval(INTERVALS);
		AJLog(L"Status: %d, Pre: %d", g_nCurStatus, g_nPreStatus);
	}

	if (nWaitTime > 0)
		g_qwWaitTime = nWaitTime * INTERVALF;
}


void SetDelay(int nWaitTime)
{
	g_qwWaitTime = nWaitTime * INTERVALF;
}


void OnInitGameEvents()
{
	g_bRefreshCostume = FALSE;
	g_bRefreshPet = FALSE;

	g_bReQuestDone = FALSE;

	g_bRefreshMarket = FALSE;

	for (int i = 0; i < MAX_CASHITEM; i++)
		g_pCashItemInfo[i].nCurCount = -1;

	for (int i = 0; i < MAX_MAKERES; i++)
		g_pMakeRes[i].bDisable = FALSE;

	g_nCaoQuestCount = 0;
}


void OnInitGameFlags(int nCurScene)
{
	if (nCurScene == Scene_Login)
	{

	}
	else if (nCurScene == Scene_Lobby)
	{
		g_bRefreshCostume = FALSE;
		g_bRefreshPet = FALSE;

		g_bReQuestDone = FALSE;

		g_bRefreshMarket = FALSE;

		for (int i = 0; i < MAX_CASHITEM; i++)
			g_pCashItemInfo[i].nCurCount = -1;

		for (int i = 0; i < MAX_MAKERES; i++)
			g_pMakeRes[i].bDisable = FALSE;

		g_nCaoQuestCount = 0;
	}
}

HANDLE g_hTopHwndEvent = NULL;
void OnSetHwndFocus(int nCurScene)
{
	return;

// 	if (g_qwFocusHwndTick == 0)
// 		g_qwFocusHwndTick = g_qwTickCount;
// 
// 	if (nCurScene == SCENE_INGAME &&
// 		((g_pCharInfo.nMapState == FCommonSource_CommonSource_EMapType::EMapType__Instance && g_pCharInfo.nLevel >= 26) || g_qwTickCount - g_qwFocusHwndTick > 5 * 60 * 1000))
// 	{
// 		if (g_hTopHwndEvent == NULL)
// 		{
// 			HANDLE hEvent = CreateEvent(0, 0, 0, (EVENT_NAME_17));
// 			if (hEvent && GetLastError() == ERROR_ALREADY_EXISTS)
// 				CloseHandle(hEvent);
// 			else if (hEvent)
// 				g_hTopHwndEvent = hEvent;
// 		}
// 
// 		if (g_hTopHwndEvent)
// 		{
// 			if (SetTopWindow(g_hGameWnd))
// 				g_qwFocusHwndTick = g_qwTickCount;
// 
// 			return;
// 		}
// 	}
// 
// 	if (g_hTopHwndEvent)
// 		CloseHandle(g_hTopHwndEvent);
// 
// 	g_hTopHwndEvent = NULL;
}


BOOL ShowErrorLog(int nError)
{
	g_nRecordCurStep = nError;
	if (g_bRecordStep)
	{
		g_nRecordMaxStep = g_nRecordCurStep;
		g_nRecordStopStep = g_nRecordMaxStep;
		AJLog(L"Record CurStep: %d", g_nRecordCurStep);
	}
	else if (g_nRecordCurStep == g_nRecordStopStep)
	{
		if (g_bRecordStop)
		{
			g_bRecordStop = FALSE;
			AJLog(L"Record Stop: %d", g_nRecordCurStep);
		}

		return TRUE;
	}

	return FALSE;
}

BOOL IsNetworkConnecting()
{
	_CallFunc0 pfnGetNetState = (_CallFunc0)GAMEADDR(Addr_CConnector__get_NetState);
	return pfnGetNetState() != 4;	// CNetHandler.NetStatesTypes
}


BOOL PreLogic1(int nCurScene)
{
	if (OnMessageProc())
		return TRUE;


	static BOOL s_bLoading = FALSE;


	if (nCurScene == Scene_World && IsNetworkConnecting())
	{
		if (g_qwNetworkTick == 0)
			g_qwNetworkTick = g_qwTickCount;

		if (g_OtherSetting.bNetworkExit && g_qwTickCount >= g_qwNetworkTick + g_OtherSetting.nNetworkExit * 1000)
		{
//			SendEvent(OPCODE_NETWORK_EXIT);
			XMsg("Network Error");

			exit(1);
			return TRUE;
		}

		AJLog(L"Connecting ...");
		s_bLoading = TRUE;
		SetDelay(10);
		return TRUE;
	}
	else
		g_qwNetworkTick = 0;


	if (IsGameLoading())
	{
		if (g_qwLoadingTick == 0)
			g_qwLoadingTick = g_qwTickCount;

		if (g_qwTickCount >= g_qwLoadingTick + 2 * 60 * 1000)
		{
			ShowStatus(2, 60307, NULL, 2);

			exit(1);
			return TRUE;
		}

		XMsg("Loading-2 ...");
		s_bLoading = TRUE;
		SetDelay(10);
		return TRUE;
	}
	else
		g_qwLoadingTick = 0;


	if (s_bLoading)
	{
		s_bLoading = FALSE;
		SetDelay(30);
		return TRUE;
	}

	return FALSE;
}


BOOL OnQuestDialogue()
{
	if (GetVisibleWindowUID() == UI_UID_QuestDialogue)
	{
		DWORD64 qwCUIQuestDialogue = GetWindowByUI_UID(UI_UID_QuestDialogue);
		if (qwCUIQuestDialogue)
		{
			XMsg("[%s] Close", __FUNCTION__);

			_CallFunc1 funcClose = (_CallFunc1)GAMEADDR(Addr_CUIQuestDialogue__Close);
			funcClose(qwCUIQuestDialogue);

			SetDelay(20);
			return TRUE;
		}
	}

	return FALSE;
}


BOOL OnQuestComplete()
{
	if (GetVisibleWindowUID() == UI_UID_QuestCompletePopup)
	{
		DWORD64 qwCUIQuestCompletePopup = GetWindowByUI_UID(UI_UID_QuestCompletePopup);
		if (qwCUIQuestCompletePopup)
		{
			XMsg("[%s] Close", __FUNCTION__);

			_CallFunc1 funcOnClose = (_CallFunc1)GAMEADDR(Addr_CUIQuestCompletePopup__Close);
			funcOnClose(qwCUIQuestCompletePopup);

			SetDelay(20);
			return TRUE;
		}
	}

	return FALSE;
}


BOOL OnCalculatorPopup()
{
	if (GetVisibleWindowUID() == UI_UID_CalculatorPopup)
	{
		DWORD64 qwCUICalculatorWindow = GetWindowByUI_UID(UI_UID_CalculatorPopup);
		if (qwCUICalculatorWindow)
		{
			int nMinCount = DWORDV(qwCUICalculatorWindow + Offset_CUICalculatorWindow_nItemCountMin);
			int nMaxCount = DWORDV(qwCUICalculatorWindow + Offset_CUICalculatorWindow_nItemCountMax);

			DWORDV(qwCUICalculatorWindow + Offset_CUICalculatorWindow_nCurrentItemCount) = nMaxCount;

			int nIndex = GetInvenIndex(g_qwUseItemUID);
			if (nIndex != NOINDEX)
			{
				if (g_pInvenInfo[nIndex].dwID == 105101041)		// 물약 상자 (귀속)
				{
					int nCanOpenCount = (g_pCharInfo.nHpPotionLimit - GetCurHPPotionCount()) / 20;
					if (nCanOpenCount > 0)
					{
						DWORDV(qwCUICalculatorWindow + Offset_CUICalculatorWindow_nCurrentItemCount) = min(nCanOpenCount, nMaxCount);
					}
				}
			}

			XMsg("[%s] Ok", __FUNCTION__);

			_CallFunc1 funcOK = (_CallFunc1)GAMEADDR(Addr_CUICalculatorWindow__OnClick_Check);
			funcOK(qwCUICalculatorWindow);

			SetDelay(20);
			return TRUE;
		}
	}

	return FALSE;
}


// 아이템 선택 상자
BOOL OnSelectBoxPopup()
{
	if (GetVisibleWindowUID() == UI_UID_SelectBoxPopup)
	{
		DWORD64 qwCUISelectBox_Popup = GetWindowByUI_UID(UI_UID_SelectBoxPopup);
		if (qwCUISelectBox_Popup)
		{
			int nSelectIndex = *(int*)(qwCUISelectBox_Popup + Offset_CUISelectBox_Popup_SelectIndex);
			int nCurCount = *(int*)(qwCUISelectBox_Popup + Offset_CUISelectBox_Popup_CurCount);
			int nMaxCount = *(int*)(qwCUISelectBox_Popup + Offset_CUISelectBox_Popup_MaxCount);

			// 개수 설정
			if (nCurCount != nMaxCount)
			{
				XMsg("[%s] Set Count Max", __FUNCTION__);

				_CallFunc2 funcSetMax = (_CallFunc2)GAMEADDR(Addr_CUISelectBox_Popup__OnClick_Max);
				funcSetMax(qwCUISelectBox_Popup, nMaxCount);

				SetDelay(20);
				return TRUE;
			}

			DWORD64 qwCUISelectBoxSlotList = *(DWORD64*)(qwCUISelectBox_Popup + Offset_CUISelectBox_Popup_ItemSlotList);
			if (qwCUISelectBoxSlotList)
			{
				int nCount = *(int*)(qwCUISelectBoxSlotList + Offset_System_Collections_Generic_List_Count);
				for (int i = 0; i < nCount; i++)
				{
					_CallFunc2 funcGetitem = (_CallFunc2)GAMEADDR(Addr_Collections_Generic_List_object___get_Item);
					DWORD64 qwCUISelectBoxSlot = funcGetitem(qwCUISelectBoxSlotList, i);
					if (!qwCUISelectBoxSlot)
						continue;

					DWORD64 qwRewardItem = *(DWORD64*)(qwCUISelectBoxSlot + Offset_CUISelectBoxSlot_RewardItem);
					if (!qwRewardItem)
						continue;

					int nItemID = DWORDV(qwRewardItem + Offset_CUISelectBoxSlot_ItemInfo_ID);

					if (nItemID == ItemID_BufFood1 && g_pCharInfo.nClassType == ePlayerClass_PC_KNIGHT ||
						nItemID == ItemID_BufFood2 && g_pCharInfo.nClassType == ePlayerClass_PC_RANGER ||
						nItemID == ItemID_BufFood3 && g_pCharInfo.nClassType == ePlayerClass_PC_MAGICIAN)
					{
						if (i != nSelectIndex)
						{
							XMsg("[%s] Select Slot  %d -> %d", __FUNCTION__, nSelectIndex, i);

							_CallFunc2 funcSelect = (_CallFunc2)GAMEADDR(Addr_CUISelectBox_Popup__SetSelectSlot);
							funcSelect(qwCUISelectBox_Popup, i);

							SetDelay(20);
							return TRUE;
						}

						XMsg("[%s] Click Ok", __FUNCTION__);

						_CallFunc1 funcOnOK = (_CallFunc1)GAMEADDR(Addr_CUISelectBox_Popup__OnClick_Okay);
						funcOnOK(qwCUISelectBox_Popup);

						SetDelay(20);
						return TRUE;
					}
				}
			}

			return TRUE;
		}
	}

	return FALSE;
}


BOOL PreLogic2()
{
	if (g_nCurScene == Scene_World)
	{
		if (OnTutorial())
			return TRUE;

		if (OnCinematic())
			return TRUE;

		if (OnGachaResult())
			return TRUE;

		if (OnQuestDialogue())
			return TRUE;

		if (OnQuestComplete())
			return TRUE;

		if (OnRewardCommonPopup())
			return TRUE;

		if (OnRewardSmallPopup())
			return TRUE;

		if (OnMonsterCollectionSynthesis())
			return TRUE;

		if (OnDeathPopup())
			return TRUE;

		if (OnCalculatorPopup())
			return TRUE;

		if (OnSelectBoxPopup())
			return TRUE;

		if (OnItemDissolveRewardPopup())
			return TRUE;

		if (OnInvenDissolve())
			return TRUE;

		if (OnRevivalAskPopup())
			return TRUE;

		if (OnDungeonRewardPopup())
			return TRUE;
	}




	// 골드 5분이상 안변할시 캐선
	static int s_nPreGold = 0;
	static int s_nPreCrystal = 0;

	if (g_nCurScene == Scene_World)
	{
		if (s_nPreGold != g_pCharInfo.nGold || s_nPreCrystal != g_pCharInfo.nCrystal)
		{
			s_nPreGold = g_pCharInfo.nGold;
			s_nPreCrystal = g_pCharInfo.nCrystal;
			g_qwGoldChangeTick = g_qwTickCount;
		}

		if (g_qwGoldChangeTick + 5 * 60 * 1000 < g_qwTickCount)
		{
			g_qwGoldChangeTick = g_qwTickCount;

			SetStatus(Status_CharOut);
			return TRUE;
		}
	}
	else
		g_qwGoldChangeTick = g_qwTickCount;

	return FALSE;
}


BOOL OnMessageProc()
{
	InitGlobal(Addr_CUIResources);

	_CallFunc1 funcGetInstance = (_CallFunc1)GAMEADDR(Addr_MonoSingleton_object___get_s_Instance);
	DWORD64 qwCUIResources = funcGetInstance(DWORD64V(GAMEADDR(Addr_CUIResources)));
	if (!qwCUIResources)
		return FALSE;

	DWORD64 qwCMessageBox = DWORD64V(qwCUIResources + 0x28); // Addr_CUIResources__get_MessageBox in mobile
	if (!IsActiveWidget(qwCMessageBox))
		return FALSE;

	DWORD64 qwCBoxUIMessageBox = *(DWORD64*)(qwCMessageBox + Offset_CMessageBox_CBoxUIMessageBox);
	if (!qwCBoxUIMessageBox)
		return FALSE;

	BOOL bClickOK = TRUE;
	int nDelay = 20;

	DWORD64 qwMessageInfo = *(DWORD64*)(qwCBoxUIMessageBox + Offset_CBoxUIMessageBox_MessageInfo);
	if (qwMessageInfo)
	{
// 		DWORD64 qwTitle = *(DWORD64*)(qwMessageInfo + Offset_MessageInfo_TitleText);
// 		if (qwTitle)
// 		{
// 			char szTitle[MAX_NAME] = { 0, };
// 			ConvertString(qwTitle, szTitle);
// 		}

		DWORD64 qwInfo = *(DWORD64*)(qwMessageInfo + Offset_MessageInfo_InfoText);
		if (qwInfo)
		{
			WCHAR szInfo[2000] = { 0, };
			ConvertString(qwInfo, szInfo);

			XMsg("Message: %s", szInfo);

			if (wcsstr(szInfo, L"지역으로 이동합니다") || (wcsstr(szInfo, L"前往") && wcsstr(szInfo, L"地区")) || (wcsstr(szInfo, L"移動") && wcsstr(szInfo, L"地區")))
				nDelay = 70;
			else if (wcsstr(szInfo, L"캐릭터 생성 제한으로") || wcsstr(szInfo, L"由于角色创建限制") || wcsstr(szInfo, L"由於角色創建限制"))
			{
				g_pGameMapping->bAutoRun = FALSE;
				g_pGameMapping->bLogType = LogType_ChangeAutoState;

				XMsg("캐릭터 생성이 제한된 서버입니다");
				ShowStatus(0, 60280);
			}
			else if (wcsstr(szInfo, L"지금은 게임 접속이 불가능합니다") || wcsstr(szInfo, L"目前无法连接游戏") || wcsstr(szInfo, L"目前無法登入遊戲"))		// Intro에서 나오는 (0-?)
			{
				bClickOK = FALSE;
			}
			else if (wcsstr(szInfo, L"네트워크 연결이 끊어졌습니다") || wcsstr(szInfo, L"网络连接已断开") || wcsstr(szInfo, L"已與伺服器連線中斷"))			// World에서 나오는 재접속 팝업
			{
				if (g_HuntSetting.bLimitRecon)
				{
					if (g_nReconnectCount < 50)
						g_qwReconnectTime[g_nReconnectCount++] = g_qwTickCount;
					else
					{
						g_nReconnectCount = 50;
						for (int i = 0; i < 49; i++)
							g_qwReconnectTime[i] = g_qwReconnectTime[i + 1];

						g_qwReconnectTime[g_nReconnectCount - 1] = g_qwTickCount;
					}

					if (g_HuntSetting.nLimitReconCount <= 1 || (g_nReconnectCount >= g_HuntSetting.nLimitReconCount &&
						g_qwReconnectTime[g_nReconnectCount - 1] - g_qwReconnectTime[g_nReconnectCount - g_HuntSetting.nLimitReconCount] <= g_HuntSetting.nLimitReconTime * 60 * 1000))
					{
						ShowStatus(4, 60186, NULL, g_HuntSetting.nLimitReconTime, g_HuntSetting.nLimitReconCount);				// L"%d분사이 재접속이 %d회 이상이므로 게임 종료합니다", 

						exit(1);
						return TRUE;
					}
				}
				else
					g_nReconnectCount = 0;

				XMsg("네트워크 접속이 끊어졌으므로 재접속합니다");
				ShowStatus(0, 60187);
			}
		}
	}

	DWORD64 qwOneOk_Btn = *(DWORD64*)(qwCBoxUIMessageBox + Offset_MessageInfo_OneOKButton);
	DWORD64 qwOK_Btn = *(DWORD64*)(qwCBoxUIMessageBox + Offset_MessageInfo_OKButton);
	DWORD64 qwCancel_Btn = *(DWORD64*)(qwCBoxUIMessageBox + Offset_MessageInfo_CancelButton);

	if (IsActiveWidget(qwOneOk_Btn))	// 버튼이 1개밖에 없으면
		ClickButton(qwOneOk_Btn);
	else if (bClickOK)
	{
		if (IsActiveWidget(qwOK_Btn))
			ClickButton(qwOK_Btn);
	}
	else if (IsActiveWidget(qwCancel_Btn))
		ClickButton(qwCancel_Btn);

	SetDelay(nDelay);
	return TRUE;
}


BOOL UpdateGameInfo()
{
	if (UpdateCharInfo())
	{
		UpdateObjectInfo();

		UpdateInvenInfo();

		UpdateWarehouseInfo();

		UpdateSkillInfo();

		UpdateSkillCycleInfo();

		UpdateQuickSlotInfo();

		UpdateQuestInfo();

		UpdateItemCollectionInfo();

		return TRUE;
	}

	return FALSE;
}


void AutoLogic()
{

	g_qwTickCount = GetTickCount64();

	static BOOL s_bSetRandom = FALSE;
	if (!s_bSetRandom)
	{
		s_bSetRandom = TRUE;
		srand((unsigned int)time(NULL));
	}

	if (g_qwTickCount < g_qwInterval + g_qwAutoLogicTick)
		return;

	g_qwAutoLogicTick = g_qwTickCount;

	if (g_qwTickCount < g_qwLastTickCount + g_qwWaitTime)
		return;

	SetInterval(INTERVALS);

	g_qwLastTickCount = g_qwTickCount;
	g_qwWaitTime = 0;

	int nCurScene = GetCurScene();

	static BOOL s_bLoading = FALSE;
	if (nCurScene == Scene_None)
	{
		AJLog(L"Loading-1 ...");
		s_bLoading = TRUE;
		SetDelay(10);
		return;
	}

	g_dwGameServerTime = 0;
	if (nCurScene > Scene_Login)
		g_dwGameServerTime = GetGameServerTime();

	OnInitGameFlags(nCurScene);


	if (g_pGameMapping)
	{
		g_pGameMapping->bGameInfo = 0;

		if (g_pGameMapping->bDateInit)		// 새벽 4시 지나면 특정 컨텐츠 초기화 된다
		{
			g_pGameMapping->bDateInit = 0;
			OnInitGameEvents();
		}
	}


	if (nCurScene == Scene_World)
	{
		if (!UpdateGameInfo())
			return;

		// 게임정보를 보내자
		if (g_pGameMapping)
		{
			g_pGameMapping->nServer = g_nGameServer;
			swprintf(g_pGameMapping->szCharName, L"%s", g_pCharInfo.szName);
			swprintf(g_pGameMapping->szServerName, L"%s", g_pCharInfo.szServer);
			swprintf(g_pGameMapping->szRegion, L"%s", g_pCharInfo.szRegion);
			g_pGameMapping->fPosX = g_pCharInfo.vPos.X;
			g_pGameMapping->fPosY = g_pCharInfo.vPos.Y;
			g_pGameMapping->fPosZ = g_pCharInfo.vPos.Z;
			g_pGameMapping->nCurHp = g_pCharInfo.nCurHp;
			g_pGameMapping->nMaxHp = g_pCharInfo.nMaxHp;
			g_pGameMapping->nCurMp = g_pCharInfo.nCurMp;
			g_pGameMapping->nMaxMp = g_pCharInfo.nMaxMp;
			g_pGameMapping->nWeight = g_nInvenWeight;
			g_pGameMapping->nGold = g_pCharInfo.nGold;
			g_pGameMapping->nDia = g_pCharInfo.nDia;
			g_pGameMapping->nLevel = g_pCharInfo.nLevel;
			g_pGameMapping->nPower = g_pCharInfo.nPower;
			g_pGameMapping->nCurInvenCount = g_nInvenCount;
			g_pGameMapping->nMaxInvenCount = g_nInvenMaxCount;
			g_pGameMapping->nCurCharacterIndex = g_nGameChar;

			g_pCharacterInfo[g_nGameChar] = g_pCharInfo.nLevel;
			memcpy(g_pGameMapping->pCharacterInfo, g_pCharacterInfo, sizeof(g_pCharacterInfo));

			g_pGameMapping->bGameInfo = 1;
		}


		//OnRequestGameInfo();
	}
	else
	{

	}
	
	//OnProgressLogFunction();

	if (!g_bAutoRun)
	{
		if (g_nCurScene != Scene_None)
		{
			g_nCurScene = Scene_None;
			g_nPreScene = Scene_None;
		}

		if (g_nCurStatus != Status_None)
		{
			g_nCurStatus = Status_None;
			g_nPreStatus = Status_None;
		}

		g_qwWaitTime = 0;
		g_bScheduleAlert = FALSE;


		g_qwGoldChangeTick = g_qwTickCount;

		return;
	}

	if (PreLogic1(nCurScene))
		return;

	if (nCurScene != g_nCurScene)
	{
		g_nPreScene = g_nCurScene;
		g_nCurScene = nCurScene;

		AJLog(L"Scene: %d, Pre: %d", g_nCurScene, g_nPreScene);

		switch (nCurScene)
		{
		case Scene_Intro:
		{
			SetStatus(Status_Intro, 10);
			break;
		}

		case Scene_Login:
		{
			SetStatus(Status_Login, 50);
			break;
		}

		case Scene_Lobby:
		{
			SetStatus(Status_Lobby, 50);
			break;
		}

		case Scene_World:
		{
			if (g_pCharInfo.bIsInVillage)
				SetStatus(Status_ReturnVillage, 50);
			else
				SetStatus(Status_DoAuto, 50);
			break;
		}
		}
	}
	else
	{

		if (g_nCurScene == Scene_World && g_pCharInfo.nCurHp <= 0)	// 캐릭 사망한 경우
		{
			if (g_nCurStatus != Status_CharDead)
			{
				// 사망 타임 체크해서 오토 중지하자
				if (!g_HuntSetting.bLimitDead)
					g_nDeadCount = 0;
				else if (g_nDeadCount < 50)
					g_qwDeadTime[g_nDeadCount++] = g_qwTickCount;
				else
				{
					g_nDeadCount = 50;
					for (int i = 0; i < 49; i++)
						g_qwDeadTime[i] = g_qwDeadTime[i + 1];

					g_qwDeadTime[g_nDeadCount - 1] = g_qwTickCount;
				}

				AJLog(L"캐릭이 사망하였습니다");
				ShowStatus(0, 60145);
				SetStatus(Status_CharDead, 30);
				return;
			}
		}
		else if (wcscmp(g_szScheduleName, g_pGameMapping->szSchedule))	// 스케줄이 다른 경우
		{
			// 스케줄이 없는 경우
			if (!wcscmp(g_pGameMapping->szSchedule, L""))
			{
				g_bScheduleAlert = FALSE;
				memset(g_szScheduleName, 0, MAX_NAME);
				return;
			}

			// 메뉴가 안나오면 무조건 진행하자
			ChangeSchedule();
			return;
		}
		else if (!wcscmp(g_szScheduleName, L""))	// 진행할 스케줄이 없는 경우
		{
			if (!g_bScheduleAlert)
			{
				g_bScheduleAlert = TRUE;
				g_pGameMapping->bLogType = LogType_ChangeSchedule;
				ShowStatus(0, 60146);		// L"진행할 스케줄 정보가 없습니다");
			}

			return;
		}


		if (PreLogic2())
			return;

		g_bScheduleAlert = FALSE;

		switch (g_nCurStatus)
		{
		case Status_Intro:
		{
			OnGameIntro();
			break;
		}

		case Status_Login:
		{
			OnGameLogin();
			break;
		}

		case Status_Lobby:
		{
			OnGameLobby();
			break;
		}

		case Status_DoAuto:
		{
			OnGameDoAuto();
			break;
		}

		case Status_ReturnVillage:
		{
			OnGameReturnVillage();
			break;
		}

		case Status_CharDead:
		{
			OnGameCharDead();
			break;
		}

		case Status_CharOut:
		{
			OnGameCharOut();
			break;
		}

		case Status_Stat:
		{
			OnGameStat();
			break;
		}

		case Status_Costume:
		{
			OnGameCostume();
			break;
		}

		case Status_Pet:
		{
			OnGamePet();
			break;
		}

		case Status_EnterDungeon:
		{
			OnGameEnterDungeon();
			break;
		}

		case Status_TeleportMap:
		{
			OnGameTeleportMap();
			break;
		}

		case Status_InvenProc:
		{
			OnGameInvenProc();
			break;
		}

		case Status_DissolveItem:
		{
			OnGameDissolveItem();
			break;
		}

		case Status_EnchantItem:
		{
			OnGameEnchantItem();
			break;
		}

		case Status_BuyPotion:
		{
			OnGameBuyPotion();
			break;
		}

		case Status_BuySkill:
		{
			OnGameBuySkill();
			break;
		}

		case Status_ExchangeItem:
		{
			OnGameExchangeItem();
			break;
		}

		case Status_StoreEquips:
		{
			OnGameStoreEquips();
			break;
		}

		case Status_GetEquips:
		{
			OnGameGetEquips();
			break;
		}

		case Status_Market:
		{
			OnGameMarket();
			break;
		}

		case Status_Mail:
		{
			OnGameMail();
			break;
		}

		case Status_Attendance:
		{
			OnGameAttendance();
			break;
		}

		case Status_Mission:
		{
			OnGameMission();
			break;
		}

		case Status_Achieve:
		{
			OnGameAchieve();
			break;
		}

		case Status_GuildAttendance:
		{
			OnGameGuildAttendance();
			break;
		}

		case Status_Recover:
		{
			OnGameRecover();
			break;
		}

		case Status_ReQuest:
		{
			OnGameReQuest();
			break;
		}

		case Status_ItemCollection:
		{
			OnGameItemCollection();
			break;
		}

		case Status_CashShop:
		{
			OnGameCashShop();
			break;
		}

		case Status_Skill:
		{
			OnGameSkill();
			break;
		}

		case Status_WorldBoss:
		{
			OnGameWorldBoss();
			break;
		}

		case Status_Make:
		{
			OnGameMake();
			break;
		}

		case STATUS_WAITDELAY:
		{
			if (g_bWaitDelay)
			{
				g_bWaitDelay = FALSE;
				ShowStatus(0, 60147);		// L"다음 스케줄을 대기합니다");
			}

			if (!wcscmp(g_pGameMapping->szSchedule, L"") && wcscmp(g_szScheduleName, L""))
			{
				g_bScheduleAlert = FALSE;
				memset(g_szScheduleName, 0, sizeof(WCHAR) * MAX_NAME);
			}
		}
		break;
		}
	}
}


void ShowStatus(int nLogType, unsigned int nStringCode, WCHAR* szLog, int nLogValue1, int nLogValue2)
{
	g_pGameMapping->nLogType = nLogType;
	g_pGameMapping->nStringCode = nStringCode;

	memset(g_pGameMapping->szLog, 0, sizeof(g_pGameMapping->szLog));
	if (szLog != NULL && wcscmp(szLog, L""))
		wcscpy(g_pGameMapping->szLog, szLog);

	g_pGameMapping->nLogValue1 = nLogValue1;
	g_pGameMapping->nLogValue2 = nLogValue2;

	SetEvent(g_hWaitEvent);
	WaitForSingleObject(g_hAnswerEvent, INFINITE);
}





WCHAR g_szKOSTR[] = L"성사범학교훈도일본강점기의초등학교교원였던심의린이편찬한보통학교조선어사전이다이사전은언어사전에속하는것으로현재의초등학교에해당하는일본강점기의보통학교의학생들을위한한국어학습사전이다지금까지조사된결과에의하면이사전은한국사람이편찬하여단행본으로출판한한국최초의한국어학습사전이며한국사람이편찬한최초의인쇄된한국어단일어사전이다박형익이제까지최초의국어사전으로알려졌던문세영의조선어사전보다시기적으로크게앞선국어사전이발견됐다박형익경기대교수는년간행된문세영의조선어사전보다년앞서년월일에발행된국어사전보통학교조선어사전제판을발견다고일밝혔다이국어사전은경성사범학교훈도심의린이편찬한것으로출판사는서울에위치한주식회사이문당으로있다또한판사전의뒷면에는초판발행일로년월일이명시된판권지가보존있어이사전의처음발행시점은문세영의조선어사전보다년앞선것으로증명됐다이보통학교조선어사전은표제어와뜻풀이에모두한국어를사용하고일본어는전혀사용하지않은명실상부한최초의한국어단일어사전이라는점에서국문학사에서의위상이매우큰것으로평가된다조선총독부도문세영의사전과동일한명칭의조선어사전을년발행한바있지만이는표제어만한자와한글을병기하고뜻은일본어로풀이한한국어-일본어사전이었다이국어사전의용도는현재의초등학교에해당하는일제강점기보통학교학생들을위한한국어학습사전으로가로세로크기에부록인보통학교한자자전쪽을포함해총쪽분량이다수록단어는모두천개로당시초등학교교과서에해당하는보통학교조선어독본에나오는천개단어에개의어휘를보충다또한현대국어사전과같이자음과모음순에따라표제어와그뜻풀이를한글로실었으며각표제어마다낱말이사용된교과서의권수와쪽수를기록한점이특징이다박교수는그간국문학사에서최초의한국어사전으로문세영의조선어사전은크게다뤄진반면심의린의보통학교조선어사전은언급조차없었다며이사전이발견됨에따라총독부에서조선어사전을간행한이래문세영이한국어단일어사전을집필하기까지년간침묵을지킨것으로있던국어사전편찬사의공백이메워지게됐다고평가다국어국문학자인홍윤표연세대교수는표제어를한글로쓰고한자로뜻을풀이한최초의대역사전인국한회어가년출간된이래국어학계에이러한사전편찬의기운이있어왔다면서심의린의보통학교조선어사전은이전통의맥을이은국어사전의시초이자학습사전의시초로서그의미가크다고평다홍교수는이와같이현재사각지대로남아있는세기초반자료에대한연구를통해우리국문학이일본의영향이아닌독자적전통속에서발전다는사실을밝히는일이중요하다고강조다박교수는최근부산의한헌책방에서이사전을구입으며올해안에보통학교조선어사전을현대국어로옮겨영인본과함께출간할예정이다국민일보서울연합뉴스김경희기자본학회에서발행하는우리어문연구는한국연구재단등재지입니다투고시에는우리학회의투고규정에입각하여투고해주시기바랍니다우리어문학회투고심사발행규정은학회홈페이지우측상단메뉴의학회소개논문규정항목이나첨부한편집규정및유의사항을참고하시면됩니다편집규정을준수하지않은논문의경우게재가어려우니유의해주시기바랍니다아울러첨부된투고신청서도함께작성하여보내주시기바랍니다회원가입과함께투고를하시고자하는분은첨부된가입신청서도작성해주시기바랍니다우리학회에논문을투고하실때에는회원인경우연회비만원과심사비만원을비회원인경우입회비만원과연회비만원그리고심사비만원을납부하셔야합니다단우리어문학회학술대회발표논문일경우심사비만원은내지않으셔도됩니다기획발표와일반발표모두해당되는사항입니다다만연회비는납부하셔야합니다그리고학회논문투고규정에의거하여일정분량을넘어선논문이나연구비수혜논문일경우추가게를납부하셔야합니다모든논문은자원고지매내외로작성되어야하며국문초록은원고지매영문초록은자로작성해주시기바랍니다논문투고마감시심사비와연회비가미납인경우에는논문심사에서제외되오니양해해주시기바랍니다프랑크푸르트도서전上한국의책권선정논란도서주빈국조직위원장이강숙교수이강숙년프랑크푸르트국제도서전주빈국조직위원장은일기자간담회를갖고국제도서전을계기로문화국가한국의이미지를한단계업그레이드시키겠다고말다이위원장의기자간담회는첫장편소설피아니스트의탄생현대문학출판발표회를계기로이루어졌으나기자회견은소설가로서뿐아니라빠른시간안에큰작업을해야하는조직위원장으로많은질문을받았다이날은마침작년월부터맡았던프랑크푸르트국제도서전주빈국조직위원장으로한국의책권발표회를가졌다년프랑크푸르트국제도서전준비는잘되고있는지주빈국에배정된여평의전용공간을이용해책뿐만아니라음악미술학술등문화전반을소개하고공연도열계획이다한국을가보고싶은나라로만들겠다한국의가장오래된것부터가장최근의것까지우리의모습을종합적으로보여줄것이다고지도와이조실록등전통문화뿐아니라한국의대표작가와젊은작가특집코너도마련된다우리의문화를널리알리는것이우리작가가노벨문학상도받고한국이부자되는길을마련해주는작업이기도하다도서전의꽃은책이다한국관에전시될한국의책권은어떻게선정나한국의이미지를잘보여줄수있는책들을선정다당초한국의명저권을뽑으려고으나이런데가한국이구나하는현재모습을잘보여주는책들로선정기준을변경다최고의책은관점의차이등선정작업에어려움이있어기준을바꾸었다거장의명저보다우선한국의모습을알리는것이중요하다선정된책을개외국어로번역하는데년밖에시간이없다졸속번역을우려하는목소리도있다우려되는부분이다사진이나그림등비주얼한요소가많아번역에시간이덜걸리는책을우선선정다번역하는데시간이걸리는책은제외되었다는뜻인가아쉽게도제외된책이많다도서전에진열된한국의책권은외국관람객이나바이어들에게한국의최고명저권으로비칠가능성이많지않은가내년도서전은우선한국의모습을제대로보여주는책을소개하는데의미가있다우리가자랑하고싶은명저를본격적으로소개하는시발점으로삼으면된다가장많은사람이읽는글인신문기사는문장이란측면에서볼때어떻게평가할수있을까국립국어연구원원장남기심이최근내놓은신문문장분석사설칼럼을중심으로는신문에실리는글중대표격인사설과칼럼을대상으로문장적특성을분석다중견국어학자인학예연구관김세중박사는년월부터월까지개중앙일간지의사설과칼럼을분석하고있다김세중박사는사설과칼럼문장의가장큰특징으로나와국민을혼동한다는점을들었다필자자신의생각이나느낌을말하면서도국민은이라고쓴다는것이다국민은힘이빠진다국민은입을다물수가없다는문장은거부감을느끼게한다고김박사는지적한다이런표현은주어가인칭즉나는이외의경우에는어색한느낌을주기때문이다두번째특징은주어와지시대상을드러내지않는다는점이다나는우리는본란은같은표현을쓰는데인색할뿐아니라는분석이다는지적이다라는표현을지나치게씀으로써정직하지않다는비판을받게된다또공격이나비난대상을분명하게밝히지않아누구를가리키는것인지알수없게만든다는것이다사설과칼럼문장의세번째특징은지나친생략과누락으로의미를알기어렵게만드는경우가많다는점이다신문은전통적인개념의동사가없는문장이많다그는이동중이다와같은문장이자연스럽게쓰이고화재가발생큰소동이벌어졌다처럼가하여를대신한다그러나정보위에대한영향력유인수단공연한말대책처럼명사를여러개나열하는경우의미의혼란을빚게된다이런분석을바탕으로김세중박사는신문사설과칼럼의문장에대해객관적이고문법을생각할것을주문한다솔직하게주어를드러내고언급하는상대방을분명하게밝히는친절하고당당한자세가필요하다는것이다또의미의정확한전달을위해서도최소한의문법은지켜야한다고강조한다서울시의영어상용화사업은시본청의개실과와시교육청이분담해학생과시민공무원등을대상으로전방위로추진된다서울거주외국인의생활불편을해소하기위한조치도함께진행된다개분야여개사업진행시민들의영어구사능력향상을위한사업으로는최근발표된영어체험마을조성사업이오는월말완료된다이와함께사이버영어마을구축사업도함께추진해영어체험마을을이용하지못하는시민들이인터넷을통해영어를보다친숙하게접할수있도록할계획이다현재계획중인케이블방송국개국도이와같은맥락에서추진되고있다는게관계자의설명이다주민들에게폭넓은영어습득기회를제공하기위해각자치구별로곳이상의주민자치센터에원어민교사를배치이미명확보한다학생들의영어수준향상을위해서는각급학교에원어민교사배치를조속한시일내에완료토록시교육청에요청다교육관계자들과함께초등학생들이서울에대한사회문화를영어로배울수있도록하는가칭교과서발간작업도검토하고있다시공무원의영어능력향상을위해내년부터일반행정직에응모하는수험생을대상으로영어면접을실시하고영어우수자특별채용도계획하고있다오는월일부터는외국어능력우수공무원에게는인사가점을부여할방침이다내년부터급이하급이상공무원은일정기간마다어학성적제출을의무화하는어학인증제실시를검토하고있다서울에거주하는외국인의생활불편을해소하기위해올하반기부터시가공포하는각종공고공시문을한글과영문으로동시에제공할계획이다이에필요한번역작업을위해미국국적의원어민명을이미계약직으로채용해놓았다또도로표지판의영문표지정비작업을하반기부터내년초까지마칠계획이다특히시는장기체류하는외국인을위해시립병원곳과종합병원∼곳을외국인전담진료소로지정육성하는사업도추진할방침이다배경및문제점서울시는영어상공용화의필요성과효과적인추진방법이론적근거마련등을위해시정개발연구원을통해연구검토작업과전문가토론회등을이미끝냈다서울시가이같은초강력영어정책을추진하게된배경은서울을세계초일류도시화하는데영어가최대걸림돌이되고있다는판단에서다전국경제인연합회가지난해실시한주한외국기업임직원대상생활여건실태조사에서한국인의영어소통능력에대한불만이로가장높았다싱가포르에소재한정치경제위험건설팅회사가아시아개국을대상으로한조사에서도외국인의영어소통이가장힘든나라로한국을지목으며동북아금융중심지로서서울의잠재력이란매킨지보고서도서울시민의영어구사능력향상이급선무라는의견을제시다하지만영어상공용화정책추진에대해상당수학자들의반대입장도만만찮다지난해월시정개발연구원에서열린토론회에서섣부른영어공용화는우리말과글만망가뜨릴뿐이다민족문화정체성을크게훼손하고영어과외열병과사대주의병을부채질하고민족을분열시킬것이다라며강력한반대입장이제시됐다실제정부는지난년제주국제자유도시특별법을근거로제주도에서영어공용화를추진하려으나강력한반대여론으로현재중단된상태에있다서울시정개발연구원이종규서울마케팅연구단장계획학박사은국제금융도시해외기업의투자유치등서울을세계일류도시로한단계업그레이드하기위해서는영어의벽을넘지않을수없다며사회문화적인충격을최소화하는방향으로영어공용화가추진야한다고주장다난농구를때렸어요다른한편으로나는페이스북을묻군완벽해그는보고트라우마가생겼니그렇긴한데허벅지를알았으며그녀의내목소리를창조해냈었지그리고나의먹었고고양이를못잡았었나저런공기를영원히보고소름이돋았을것이다웃긴게이해했음한번더네식사했지이제는말할수있다나는느꼈어난비둘기를시끄러웠죠이런내쳤니또네공부를뱉었었지그는오늘보았을까예를들어저찬을뺏겼었지과자를몰랐다네단그헤어졌죠솔직히말하자면무서웠어동전을막았구려이제는말할수있다독서를보고트라우마가생겼어저토끼를이해했어요내가들었을거야그곳에서짬뽕을었군늘그좋아했었다이제는말할수있다그것은사기를축하해주었는데나는유령을가볍게해내었니너의 비둘기를못참았다그리고그거짓말을식사했길바란다언젠가네가슬픔을시간을보냈으니말다했지확신해보지또한저벗었어또동전을배웠었지아니우릴소지품을무서웠지저런새를지겹게도즐거웠이다아맞다그의잡았을거야놀람을지겹게도조용히음미했다절대로이깨졌으며이런그가김밥을미쳤이다난일억원을눌렀었지너는시금치를만들었는지모르겠다또오늘도난바다를엄청고래고래소리쳤길바란다오직네가긁었고절대로내가연애를미치도록안갔을까오렌지를좋을지도다른한편으로너의하늘의별을보고기뻤습니다저런이망했다네나의바지를죽을만큼반복하였어그뉴스를바라보았이다그곳에서너의니제발약했다경이롭게도저종이를많이도다쳤이다영원히침대를정말잊었나보네요네사랑을잘못했다그녀는소설을좋군저런네박물관을창조해냈으며그래매일같이아무말없이속삭였다예를들어나는고쳤어내인생의모든것을보다그렇게그의유명인사를알아내기위해온장소를찾아보았고거기서나는영화를보군오직나는연예인을정말헤어졌다";
WCHAR g_szTWSTR[] = L"第一次鴉片戰爭戰敗後清政府被迫開港通商與外部世界接軌面對與西方工業化國家的巨大發展差距和接連戰敗喪權辱國的情況社會上的求新求變思想與民族主義逐漸萌生並增強世紀末至世紀初期南方江浙湖廣一帶和海外一些國家開始出現由海外華僑會黨新軍學生等組成的主張推翻清政府統治建立新政府的革命團體自年廣州起義始以孫中山為主要勢力的各地革命黨人先後發動多次武裝起義但多遭到清廷鎮壓而失敗年月清廷領導者慈禧太后和光緒皇帝相繼逝世繼任的掌權群體實力與威信大不如前年月因四川保路運動清政府遣湖北軍隊鎮壓月日共進會和文學社發動武昌起義日成立中華民國軍政府數月內獲得各省陸續響應是為辛亥革命外蒙也自行宣布獨立其後各省代表聚於南京推舉孫中山為臨時大總統孫中山提出五族共和次年月日中華民國臨時政府在南京成立在清朝內閣總理大臣袁世凱逼迫下月原清廷攝政的隆裕太后代年幼的宣統皇帝溥儀發表退位詔書自此中國存在兩千餘年的帝制宣告覆滅袁世凱隨後當選臨時大總統月臨時參議院通過中華民國臨時約法西藏自行宣布獨立年國民黨在中華民國第一屆國會議員選舉中勝選但因候任總理宋教仁遭暗殺而引起二次革命不久袁世凱取締國民黨另立約法取代臨時約法並採取措施加強自身權力沙俄迫中華民國承認外蒙古自治年一戰爆發日軍奪青島年日本迫袁世凱簽訂民四條約袁世凱隨後稱帝改國號中華帝國引發護國戰爭外蒙古撤銷獨立次年袁世凱撤銷帝制思想界發起新文化運動批判孔子倡用白話文宣揚民主與科學袁世凱病亡後中央政府由國務總理段祺瑞執政臨時約法恢復此時全國已陷入割據四川持續內戰段祺瑞欲推動武力統一及對德宣戰引發與大總統黎元洪國會的府院之爭及張勛復辟因段祺瑞拒絕恢復臨時約法並擬重選國會孫中山南下與陳炯明共組護法軍政府年學生不滿中國代表欲接受出賣山東主權的凡爾賽條約發起五四運動日本於旅順設立關東軍中華革命黨改組為中國國民黨徐樹錚迫外蒙古撤治年直系曹錕在直皖戰爭中獲勝掌權局面愈發分裂教育界產生京國之爭京音成為標準音年中國共產黨在蘇聯幫助下成立於次年加入共產國際蘇聯與白軍為爭奪外蒙爆發戰役蘇聯勝年孫中山制定聯俄容共方針全體中國共產黨員以個人身份加入國民黨年奉系張作霖在第二次直奉戰爭中獲勝掌權張作霖段祺瑞邀孫中山北上和談但孫中山不久病逝年蔣中正汪精衛發起國民革命軍北伐北伐期間中共發動轟烈工農運動沒收其富農地主土地分給農民平均地權年月蔡元培等人號召護黨救國月張作霖搜查蘇聯使館稱獲中共通蘇叛國證據蔣中正清共並於南京另立政府汪精衛斥蔣中正分裂隨著武漢內部的反共月共產國際的五月指示使汪精衛遂於武漢分共月寧漢復合在十年建設－期間政府陸續成立中央研究院與中央銀行等機構經濟交通及教育文化等公共事業獲得不少發展年日軍侵山東製造濟南慘案張學良宣佈東北易幟國民政府名義統一中國年張學良因試圖收回中東鐵路主權與蘇聯爆發衝突國民政府發表對蘇交戰宣言月張學良與蘇媾和並簽署伯力協定但蘇軍持續佔領部分領土次年因地方不滿裁軍爆發中原大戰蔣中正勝年國民政府依建國大綱實施以中國國民黨為中心的一黨制架構並制定訓政時期約法採取安內攘外的方針拖延與日本全面開戰的時間日本發動九一八事變入侵中國東北地區張學良令軍隊不抵抗日本遂侵占東北三省全境中共於瑞金成立中華蘇維埃共和國次年初日軍發動一二八事變入侵上海十九路軍抵抗中共領導的中華蘇維埃共和國對日宣戰日本建立滿洲國年日軍攻山海關並陷熱河新疆福建分別成立東突厥斯坦及中華共和國旋滅國民政府發起新生活運動年日本策劃華北五省自治殷汝耕割據冀東次年德王割據內蒙國民政府迫中共撤往西北並藉以實控西部省份張學良急欲抗日而發動西安事變年日本發動七七事變抗日戰爭全面爆發月北平天津淪陷蔣中正號召抵抗到底中共發佈共赴國難宣言取消蘇維埃共和國中國工農紅軍改編為八路軍和新四軍接受國民政府領導國共再次合作中日激戰於華北華東月太原上海淪陷政府遷重慶月南京淪陷日軍發動南京大屠殺韓復榘棄守濟南次年中華民國於台兒莊勝並決黃河堤禦鄭州致水災日軍連陷徐州武漢廣州至年底戰線已達河南湖北中部開始重慶大轟炸日本於南京張家口建立政權汪精衛附之日軍陷南昌南寧宜昌政府成功防守長沙年國民政府第軍發動黃橋戰役為中共新四軍殲滅年顧祝同擊敗新四軍扣押葉挺是為皖南事變蘇聯簽訂日蘇中立條約承認滿洲國換取日本承認外蒙獨立國民政府激烈反對年日本入侵緬甸意圖切斷英援補給中國遠征軍赴緬年政府與英美廢除不平等條約歐洲各國和加拿大陸續取消在華特權年日軍發動豫湘桂戰役一度佔領三省大部蘇聯策劃伊寧事變最高蘇維埃決定納入唐努烏梁海年月蘇聯支持的東突厥斯坦宣佈獨立中蘇就蒙疆及東北問題談判史達林威脅以外蒙獨立換取餘下主權月日日本因美蘇進攻投降年月始政府即與中共爆發衝突月外蒙在蘇聯操縱下通過獨立公投並於次年月獲政府承認註政府並接管東北地區臺灣香港註澎湖群島南海諸島但年初蘇軍違約將東北移交中共激化國共軍事衝突並侵佔大連註在美國斡旋下國共展開談判但未有實質協議月美國總統杜魯門決定對國民政府實施武器禁運月制憲國民大會公布中華民國憲法但遭中共抵制年國共內戰全面爆發政府發佈動員戡亂令蘇聯支持下外蒙軍隊入侵新疆因臺灣省行政長官公署施政錯誤等因素臺灣爆發二二八事件年月與外蒙戰爭結束年初華北地區幾無據點部分中央機構亦開始南遷廣州月日南京失守大勢已去年月起政府陸續組織軍隊文物黃金外匯及民眾遷往臺灣年月發生太平輪沉沒事件月陳誠宣佈臺灣戒嚴月日中國共產黨在北平成立中華人民共和國中央人民政府並將北平改名為北京國軍在金門的古寧頭戰役中獲勝月日中央政府遷至臺北是月失去廣西四川年韓戰爆發後杜魯門派第七艦隊巡弋台灣海峽防止中國人民解放軍攻入台灣聯合國和多數西方國家因冷戰局勢影響而將中華民國政府視為中國合法政府政府在臺灣實施地方自治合作社基礎教育政策推動耕地三七五減租公地放領耕者有其田等土地改革穩定農業發展並因受美國援助經濟逐漸恢復年代國軍在大陸的剩餘和游擊力量逐漸被瓦解年立法院及蔣中正總統宣佈廢除中蘇友好同盟條約且不再承認外蒙獨立年面對中華人民共和國政權及其軍事力量威脅及臺灣獨立挑戰國民大會修改動員戡亂時期臨時條款形成一黨獨大制的威權制度並通過涉蒙決議因中美共同防禦條約與年福爾摩沙決議中華民國進一步獲美國保護年組織民眾撤離浙江大陳島年開始籌劃反攻大陸但年金門八二三砲戰後臺海再未發生大型軍事衝突年美總統艾森豪訪華年雲南人民反共志願軍撤退國民黨雖推行地方選舉但長期打壓異見者白色恐怖時期有萬人因被視為反對國民黨親近中國共產黨遭監禁或處決年代政府開始強力促進民營企業與工商業發展實現經濟工業化和技術導向來自美國的資金援助和產品需求使得經濟快速增長甚至被稱作台灣奇蹟年政府開始推行中華文化復興運動促進了教育水平的提高和中華文化的流傳年聯合國大會通過號決議將中華人民共和國視為中國合法代表之後多數國家斷交中華民國僅與少數國家維持正式外交國際間也常以臺灣稱呼年開始整理國字確立標準字體因受中東石油危機的影響經濟增長陷入停滯時任行政院長蔣經國提出十大建設年蔣中正病逝副總統嚴家淦繼任繼續推動十大建設蔣經國完全裁撤在雲南邊境的游擊部隊年起蔣經國接連當選第六七任總統年與美國斷交蔣經國沉著應對危機高雄市發生美麗島事件促使島內反對勢力團結因應葉劍英的對台政策蔣經國提出三不政策及三民主義統一中國大力發展台灣經濟並支援大陸民主運動年代台灣因經濟發展迅速與香港韓國新加坡並稱亞洲四小龍面對國際壓力和黨外運動政府推進民主化首個反對黨民主進步黨於年成立次年政府取消田賦允許赴大陸探親解除戒嚴開放組黨辦報推動中央民意代表改選且不設大陸代表制年月日福建省金門縣發生三七事件至少名無武裝的越南難民在登島時遭中華民國國軍射擊並屠殺年蔣經國逝世副總統李登輝繼任年鄭南榕自焚籲民主改革同年中國大陸發生六四事件在台灣影響強烈年發生二月政爭李登輝獲得國民黨主導權月學生集會於自由廣場要求進一步民主化李登輝同意要求召開國是會議終止動員戡亂全面改選國會推動修訂憲法制定國家統一綱領採取務實外交政策停止義務支援大陸民運年臺灣人均生產總值突破萬美元成為發達經濟體因事件與千島湖事件臺灣社會統獨立場劇烈變化年李登輝訪問美國中華人民共和國政府舉行軍事演習恫嚇首次總統直選李登輝反獲連任李登輝脫離蔣經國理念向台獨方向傾斜大量採行民進黨政策次年李登輝大規模裁軍中華人民共和國政府接收香港年李登輝先後提出中國七塊論和兩國論月發生大地震中華民國第一次發佈總統緊急命令這時期臺灣原住民族團體開始推動文化保存並要求更高程度的政治自決與經濟發展政策年國民黨選前分裂民進黨候選人陳水扁當選總統實現全國首次政黨輪替執政期間推行台灣本土化和去中國化政策促進人權保障年陳水扁欲停建核四遭司法院反對未果年政府推動高鐵雪山隧道的建設提出一邊一國的主張年兩岸實現包機直航宋美齡逝世年陳水扁在選舉前受槍擊以些微優勢獲得連任年國民大會凍結立法院成為事實上的唯一國會同年高雄捷運弊案發生致民進黨地方選舉失敗年終止國家統一綱領將中正機場更名桃園機場同年政府傳出多起貪污弊案引發倒扁運動陳水扁積極與中華人民共和國政府爭奪邦交國執政末期不惜採取金援外交政策年入聯公投案失敗年和年由國民黨候選人馬英九當選總統國民黨在立法院獲多數席次上台伊始發生聯合號海釣船事件與日本產生外交衝突次年颱風莫拉克造成水災在任期間推動經濟成長增進與各國的經濟合作改善兩岸關係並簽訂經濟合作協議年預備簽署服務貿易協議引發部分民眾疑慮與抗議年兩岸實現首次兩岸領導人會面是自年政治分立以來年雙方最高領導人的首次會晤象徵兩岸史上最大突破會中主要就推進兩岸關係和平發展交換意見不過雙方沒有簽署協議或發布共同聲明年民進黨候選人蔡英文當選成為首位女性總統並在立法院首度取得過半數席次帶領民進黨首次完全執政並在年總統選舉中以萬張選票得票率成功連任成為中華民國於年首次民選總統以來得票數最高的總統候選人年月配合年司法院釋字第號解釋與年中華民國全國性公民投票第案結果而立法的司法院釋字第號解釋施行法法制化臺灣同性婚姻使中華民國成為亞洲第一個將同性婚姻合法化的國家";
void PressKeyAlternate(WCHAR wKey, BOOL bPressOnly)
{
	SendNotifyMessage(g_hGameWnd, WM_SETCURSOR, (WPARAM)g_hGameWnd, 0x02040001);
	SendNotifyMessage(g_hGameWnd, WM_KEYDOWN, (WPARAM)wKey, 0x00240001);

	if (isalpha(wKey) && isupper(wKey))
		SendNotifyMessage(g_hGameWnd, WM_CHAR, wKey + 0x20, 0x00240001);
	else
		SendNotifyMessage(g_hGameWnd, WM_CHAR, wKey, 0x00240001);

	if (!bPressOnly)
		SendNotifyMessage(g_hGameWnd, WM_KEYUP, (WPARAM)wKey, 0xC0240001);

	SendNotifyMessage(g_hGameWnd, WM_SETCURSOR, (WPARAM)g_hGameWnd, 0x02000001);
}



void LoadScheduleInfo()
{
	if (!wcscmp(g_szScheduleName, L""))
		return;

	WCHAR szPath[MAX_PATH];

	swprintf(szPath, L"%s\\Setting\\%d\\Detail.dat", g_szAppPath, g_nIndex);
	g_bFrameEnable = GetPrivateProfileInt(L"GameFrame", L"Enable", 0, szPath);
	g_nFrameValue = GetPrivateProfileInt(L"GameFrame", L"Value", 20, szPath);

	swprintf(szPath, L"%s\\Schedule\\%s\\Hunt.dat", g_szAppPath, g_szScheduleName);

	g_nReturnCount = 0;
	if (g_pReturnInfo)
		delete[] g_pReturnInfo;
	g_pReturnInfo = NULL;

	memset(&g_HuntSetting, 0, sizeof(HUNT_SETTING));

	FILE* fp = _wfopen(szPath, L"rb");
	if (fp)
	{
		fread(&g_nReturnCount, sizeof(int), 1, fp);
		if (g_nReturnCount > 0)
		{
			g_pReturnInfo = new ITEM_RETURN[g_nReturnCount];
			if (g_pReturnInfo)
			{
				memset(g_pReturnInfo, 0, sizeof(ITEM_RETURN) * g_nReturnCount);
				fread(g_pReturnInfo, sizeof(ITEM_RETURN), g_nReturnCount, fp);

				for (int i = 0; i < g_nReturnCount; i++)
				{
					WCHAR* szEnd = wcsstr(g_pReturnInfo[i].szName, L" (");
					if (szEnd != NULL)
						g_pReturnInfo[i].szName[szEnd - g_pReturnInfo[i].szName] = 0;
				}
			}
		}

		fread(&g_HuntSetting, sizeof(HUNT_SETTING), 1, fp);
		fclose(fp);
	}

	swprintf(szPath, L"%s\\Schedule\\%s\\Buy.dat", g_szAppPath, g_szScheduleName);

	g_nBuyExpendCount = 0;
	if (g_pBuyExpendInfo)
		delete[] g_pBuyExpendInfo;
	g_pBuyExpendInfo = NULL;

	g_nBuyExchangeCount = 0;
	if (g_pBuyExchangeInfo)
		delete[] g_pBuyExchangeInfo;
	g_pBuyExchangeInfo = NULL;

	memset(&g_BuySetting, 0, sizeof(BUY_SETTING));

	fp = _wfopen(szPath, L"rb");
	if (fp)
	{
		fread(&g_nBuyExpendCount, sizeof(int), 1, fp);
		if (g_nBuyExpendCount > 0)
		{
			g_pBuyExpendInfo = new ITEM_BUY[g_nBuyExpendCount];
			if (g_pBuyExpendInfo)
			{
				memset(g_pBuyExpendInfo, 0, sizeof(ITEM_BUY) * g_nBuyExpendCount);
				fread(g_pBuyExpendInfo, sizeof(ITEM_BUY), g_nBuyExpendCount, fp);
			}

			for (int i = 0; i < g_nBuyExpendCount; i++)
			{
				WCHAR* szEnd = wcsstr(g_pBuyExpendInfo[i].szName, L" (");
				if (szEnd != NULL)
					szEnd[0] = 0;
			}
		}

		fread(&g_nBuyExchangeCount, sizeof(int), 1, fp);
		if (g_nBuyExchangeCount > 0)
		{
			g_pBuyExchangeInfo = new ITEM_BUY[g_nBuyExchangeCount];
			if (g_pBuyExchangeInfo)
			{
				memset(g_pBuyExchangeInfo, 0, sizeof(ITEM_BUY) * g_nBuyExchangeCount);
				fread(g_pBuyExchangeInfo, sizeof(ITEM_BUY), g_nBuyExchangeCount, fp);
			}
		}

		fread(&g_BuySetting, sizeof(BUY_SETTING), 1, fp);
		fclose(fp);
	}

	//////////////////////////////////////////////////////////////////////////
	// Items.dat
	swprintf(szPath, L"%s\\Schedule\\%s\\Items.dat", g_szAppPath, g_szScheduleName);

	memset(g_pItemDefault, 0, MAX_GRADE * MAX_TYPE_1);

	g_nItemDetailCount = 0;
	if (g_pItemDetailInfo)
		delete[] g_pItemDetailInfo;
	g_pItemDetailInfo = NULL;

	fp = _wfopen(szPath, L"rb");
	if (fp)
	{
		fread(g_pItemDefault, sizeof(BYTE), MAX_GRADE * MAX_TYPE_1, fp);

		fread(&g_nItemDetailCount, sizeof(int), 1, fp);
		if (g_nItemDetailCount > 0)
		{
			g_pItemDetailInfo = new DETAIL_ITEM[g_nItemDetailCount];
			if (g_pItemDetailInfo)
			{
				memset(g_pItemDetailInfo, 0, sizeof(DETAIL_ITEM) * g_nItemDetailCount);
				fread(g_pItemDetailInfo, sizeof(DETAIL_ITEM), g_nItemDetailCount, fp);

				for (int i = 0; i < g_nItemDetailCount; i++)
				{
					if (g_pItemDetailInfo[i].nMode != ItemMode_Trade)
						continue;

					if (g_pItemDetailInfo[i].nMarketMode != 1)
						continue;

					if (g_pItemDetailInfo[i].nMarketPrice < 0)
						g_pItemDetailInfo[i].nMarketPrice = 0;
				}
			}
		}

		memset(&g_ItemSetting, 0, sizeof(ITEM_SETTING));
		fread(&g_ItemSetting, sizeof(ITEM_SETTING), 1, fp);

		fclose(fp);
	}

	//////////////////////////////////////////////////////////////////////////
	// Other.dat
	swprintf(szPath, L"%s\\Schedule\\%s\\Other.dat", g_szAppPath, g_szScheduleName);

	memset(&g_OtherSetting, 0, sizeof(OTHER_SETTING));

	fp = _wfopen(szPath, L"rb");
	if (fp)
	{
		fread(&g_OtherSetting, sizeof(OTHER_SETTING), 1, fp);
		fclose(fp);
	}

	//////////////////////////////////////////////////////////////////////////
	// Main.dat
	swprintf(szPath, L"%s\\Schedule\\%s\\Main.dat", g_szAppPath, g_szScheduleName);

	memset(&g_ScheduleSetting, 0, sizeof(SCHEDULE_SETTING));

	fp = _wfopen(szPath, L"rb");
	if (fp)
	{
		fread(&g_ScheduleSetting, sizeof(SCHEDULE_SETTING), 1, fp);
		fclose(fp);
	}

	//////////////////////////////////////////////////////////////////////////
	// Make.dat
	swprintf(szPath, L"%s\\Schedule\\%s\\Make.dat", g_szAppPath, g_szScheduleName);

	memset(&g_MakeSetting, 0, sizeof(MAKE_SETTING));

	fp = _wfopen(szPath, L"rb");
	if (fp)
	{
		fread(&g_MakeSetting, sizeof(MAKE_SETTING), 1, fp);
		fclose(fp);
	}

	//////////////////////////////////////////////////////////////////////////
	// Skill.dat
	swprintf(szPath, L"%s\\Schedule\\%s\\Skill.dat", g_szAppPath, g_szScheduleName);

	g_nSkillInterval = 0;
	memset(&g_pSkillInterval, 0, sizeof(SKILL_INTERVAL));

	fp = _wfopen(szPath, L"rb");
	if (fp)
	{
		fread(&g_pSkillInterval, sizeof(int), 1, fp);
		if (g_nSkillInterval > 0)
			fread(g_pSkillInterval, sizeof(SKILL_INTERVAL), g_nSkillInterval, fp);
		fclose(fp);
	}


	if (fp)
	{
		fread(&g_MakeSetting, sizeof(MAKE_SETTING), 1, fp);
		fclose(fp);
	}


	g_nPartyMember = 0;
	if (g_pPartyMember)
		delete[] g_pPartyMember;
	g_pPartyMember = NULL;

	swprintf(szPath, L"%s\\Schedule\\%s\\Party.dat", g_szAppPath, g_szScheduleName);
	fp = _wfopen(szPath, L"rb");
	if (fp)
	{
		fread(&g_nPartyMember, sizeof(int), 1, fp);
		if (g_nPartyMember > 0)
		{
			g_pPartyMember = new PARTYMEMBER[g_nPartyMember];
			memset(g_pPartyMember, 0, sizeof(PARTYMEMBER) * g_nPartyMember);
			fread(g_pPartyMember, sizeof(PARTYMEMBER), g_nPartyMember, fp);
		}

		fclose(fp);
	}


	ShowStatus(0, 60209);			// L"설정 정보가 갱신되었습니다");
}



void ChangeSchedule()
{
	if (!wcscmp(g_szScheduleName, g_pGameMapping->szSchedule))			// 진행하던 스케줄이 완료된 상태면
	{
		g_pGameMapping->bLogType = LogType_FinishSchedule;
		ShowStatus(1, 60210, g_szScheduleName);						//L"스케줄 \"%s\" 이(가) 완료되었습니다", 

		g_bWaitDelay = TRUE;
		SetStatus(STATUS_WAITDELAY);
	}
	else																// 스케줄 변경해야 하는 경우
	{
		memset(g_szScheduleName, 0, sizeof(WCHAR) * MAX_NAME);
		wcscpy(g_szScheduleName, g_pGameMapping->szSchedule);

		g_pGameMapping->bSettingChanged = 1;

		if (wcscmp(g_szScheduleName, L""))
		{
			// 보관할 목록들 다시 정리하자
			//SetStoreItemList(g_OtherSetting.bStoreEquips);

			g_pGameMapping->bLogType = LogType_ChangeSchedule;
			ShowStatus(1, 60211, g_szScheduleName);					// L"스케줄 \"%s\" 을(를) 진행합니다", 

			LoadScheduleInfo();
		}

		if (g_nCurScene == Scene_World)
		{
			SetStatus(Status_DoAuto, 10);
		}
	}
}



void SetEquipsChar(int nServer, int nChar)
{
	WCHAR szPath[MAX_PATH] = { 0, };
	swprintf(szPath, L"%s\\Setting\\%d\\Equips.dat", g_szAppPath, g_nIndex);

	WCHAR szKey[MAX_NAME] = { 0, };
	swprintf(szKey, L"Server_%d", nServer);

	WCHAR szVal[MAX_NAME] = { 0, };
	swprintf(szVal, L"%d", nChar);

	WritePrivateProfileString(L"EquipInfo", szKey, szVal, szPath);
}



int GetEquipsChar(int nServer)
{
	WCHAR szPath[MAX_PATH] = { 0, };
	swprintf(szPath, L"%s\\Setting\\%d\\Equips.dat", g_szAppPath, g_nIndex);

	WCHAR szKey[MAX_NAME] = { 0, };
	swprintf(szKey, L"Server_%d", nServer);

	return GetPrivateProfileInt(L"EquipInfo", szKey, 0, szPath);
}


DWORD64 InsertJmpCodes(DWORD64 dwTargetAdr, DWORD64 dwAdrToJmp, OUT BYTE* pOrigCodes)
{	
	BYTE* pAddress;
	DWORD dwOldProtect;

	if (!VirtualProtect((LPVOID)dwTargetAdr, 0x12, PAGE_EXECUTE_READWRITE, &dwOldProtect))
	{
		DWORD error = GetLastError();
		AJLog(L"[InsertJmpCodes] ERROR: VirtualProtect failed with error: %d", error);
		return error;
	}
	AJLog(L"[InsertJmpCodes] Memory protection changed successfully. Old protection: 0x%X", dwOldProtect);

	pAddress = (BYTE*)dwTargetAdr;

	if (pOrigCodes)
		CopyMemory(pOrigCodes, pAddress, 0x12);

	memset((void*)dwTargetAdr, 0x90, 0x12);

	*(BYTE*)(pAddress) = 0x48;					//mov rax, dwAdrToJmp
	*(BYTE*)(pAddress + 1) = 0xB8;				//
	*(DWORD64*)(pAddress + 2) = dwAdrToJmp;		//
	*(BYTE*)(pAddress + 0xA) = 0xFF;			//jmp rax
	*(BYTE*)(pAddress + 0xB) = 0xE0;			//

	if (!VirtualProtect((LPVOID)dwTargetAdr, 0x12, dwOldProtect, &dwOldProtect))
	{
		DWORD error = GetLastError();
		AJLog(L"[InsertJmpCodes] ERROR: Failed to restore memory protection. Error: %d", error);
		return error;
	}

	return 0;
}



BOOL IsChaoStatus(int nStatus)
{
	for (int i = 0; i < g_nChaoStatusCount; i++)
	{
		if (g_pChaoStatusInfo[i] == nStatus)
			return TRUE;
	}

	return FALSE;
}


void PutChaoStatus(int nStatus)
{
	for (int i = 0; i < g_nChaoStatusCount; i++)
	{
		if (g_pChaoStatusInfo[i] == nStatus)
			return;
	}

	if (g_nChaoStatusCount < 50)
		g_pChaoStatusInfo[g_nChaoStatusCount++] = nStatus;
	else
	{
		g_nChaoStatusCount = 50;
		memcpy(&g_pChaoStatusInfo[0], &g_pChaoStatusInfo[1], sizeof(BYTE) * (g_nChaoStatusCount - 1));
		g_pChaoStatusInfo[g_nChaoStatusCount - 1] = nStatus;
	}
}


int GetItemCount(const WCHAR* szName)
{
	int nCount = 0;
	for (int i = 0; i < g_nInvenCount; i++)
	{
		if (!wcscmp(g_pInvenInfo[i].szName, szName))
			nCount += g_pInvenInfo[i].nCount;
	}

	return nCount;
}




typedef HWND(WINAPI* pfNewGetForegroundWindow)(VOID);
typedef BOOL(WINAPI* pfNewSetForegroundWindow)(_In_ HWND hWnd);
typedef DWORD(WINAPI* pfNewGetWindowThreadProcessId)(_In_ HWND hWnd, _Out_opt_ LPDWORD lpdwProcessId);
typedef BOOL(WINAPI* pfNewAttachThreadInput)(_In_ DWORD idAttach, _In_ DWORD idAttachTo, _In_ BOOL fAttach);
typedef BOOL(WINAPI* pfNewIsIconic)(_In_ HWND hWnd);
typedef BOOL(WINAPI* pfNewShowWindow)(_In_ HWND hWnd, _In_ int nCmdShow);

pfNewGetForegroundWindow		NewGetForegroundWindow = NULL;
pfNewSetForegroundWindow		NewSetForegroundWindow = NULL;
pfNewGetWindowThreadProcessId	NewGetWindowThreadProcessId = NULL;
pfNewAttachThreadInput			NewAttachThreadInput = NULL;
pfNewIsIconic					NewIsIconic = NULL;
pfNewShowWindow					NewShowWindow = NULL;

BOOL SetTopWindow(HWND hWnd)
{
	if (NewGetForegroundWindow == NULL)
		NewGetForegroundWindow = (pfNewGetForegroundWindow)GetProcAddress(GetModuleHandle(L"User32.dll"), "GetForegroundWindow");

	if (NewSetForegroundWindow == NULL)
		NewSetForegroundWindow = (pfNewSetForegroundWindow)GetProcAddress(GetModuleHandle(L"User32.dll"), "SetForegroundWindow");

	if (NewGetWindowThreadProcessId == NULL)
		NewGetWindowThreadProcessId = (pfNewGetWindowThreadProcessId)GetProcAddress(GetModuleHandle(L"User32.dll"), "GetWindowThreadProcessId");

	if (NewAttachThreadInput == NULL)
		NewAttachThreadInput = (pfNewAttachThreadInput)GetProcAddress(GetModuleHandle(L"User32.dll"), "AttachThreadInput");

	if (NewIsIconic == NULL)
		NewIsIconic = (pfNewIsIconic)GetProcAddress(GetModuleHandle(L"User32.dll"), "IsIconic");

	if (NewShowWindow == NULL)
		NewShowWindow = (pfNewShowWindow)GetProcAddress(GetModuleHandle(L"User32.dll"), "ShowWindow");

	if (NewGetForegroundWindow == NULL || NewSetForegroundWindow == NULL || NewGetWindowThreadProcessId == NULL ||
		NewAttachThreadInput == NULL || NewIsIconic == NULL || NewShowWindow == NULL)
		return FALSE;

	HWND foreGround = NewGetForegroundWindow();
	if (foreGround != hWnd)
	{
		if (!NewSetForegroundWindow(hWnd))
		{
			DWORD idForeground = NewGetWindowThreadProcessId(foreGround, NULL);
			DWORD idTarget = NewGetWindowThreadProcessId(hWnd, NULL);

			if (NewAttachThreadInput(idTarget, idForeground, TRUE))
			{
				NewSetForegroundWindow(hWnd);
				NewAttachThreadInput(idTarget, idForeground, FALSE);
			}
		}

		if (NewIsIconic(hWnd))
			NewShowWindow(hWnd, SW_RESTORE);

		return TRUE;
	}

	return FALSE;
}


int GetCurKoreanTime(int* wDay)
{
	time_t rawtime;
	struct tm* ptm;

	time(&rawtime);
	ptm = gmtime(&rawtime);

	int nHour = (ptm->tm_hour + 9) % 24;
	int nMinute = ptm->tm_min;
	if (wDay != NULL)
	{
		if (ptm->tm_hour + 9 < 24)
			*wDay = ptm->tm_wday;
		else
			*wDay = (ptm->tm_wday + 1) % 7;
	}

	return nHour * 100 + nMinute;
}


void RecvAddrTimer(HWND hWnd, UINT uMsg, UINT_PTR idEvent, DWORD dwTime)
{
	KillTimer(hWnd, idEvent);
	// RecvAddrInfo(&g_bRecvAddrThread);
}


int LoadSubQuestInfo()
{
	WCHAR szStr[MAX_PATH] = { 0, };
	swprintf(szStr, L"%s - %s", g_pCharInfo.szServer, g_pCharInfo.szName);

	DWORD dwCharCrc = WCharToDword(szStr);

	WCHAR szPath[MAX_PATH] = { 0, };
	swprintf(szPath, L"%s\\Setting\\%d\\SubQuest.dat", g_szAppPath, g_nIndex);

	WCHAR szKey[MAX_NAME] = { 0, };
	swprintf(szKey, L"%08X", dwCharCrc);

	return GetPrivateProfileInt(L"SubQuest", szKey, 0, szPath);
}


void SaveSubQuestInfo(int nMainQuest)
{
	WCHAR szStr[MAX_PATH] = { 0, };
	swprintf(szStr, L"%s - %s", g_pCharInfo.szServer, g_pCharInfo.szName);

	DWORD dwCharCrc = WCharToDword(szStr);

	WCHAR szPath[MAX_PATH] = { 0, };
	swprintf(szPath, L"%s\\Setting\\%d\\SubQuest.dat", g_szAppPath, g_nIndex);

	WCHAR szKey[MAX_NAME] = { 0, };
	swprintf(szKey, L"%08X", dwCharCrc);

	WCHAR szVal[MAX_NAME] = { 0, };
	swprintf(szVal, L"%d", nMainQuest);

	WritePrivateProfileString(L"SubQuest", szKey, szVal, szPath);
}

// ------------------ New Approach ------------------ //

void InitGlobal(DWORD64 qwAddr)
{
	static int s_nCnt = 0;
	static DWORD64 s_qwInit[0x500] = { 0, };

	for (int i = 0; i < s_nCnt; i++)
	{
		if (s_qwInit[i] == qwAddr)
			return;
	}

	_callFunc1 pfnInit = (_callFunc1)GAMEADDR(Addr_InitGlobal);
	pfnInit(GAMEADDR(qwAddr));

	s_qwInit[s_nCnt++] = qwAddr;
}

BOOL IsActiveWidget(DWORD64 qwCUI)
{
	if (qwCUI)
	{
		_callFunc1 funcGetGameObject = (_callFunc1)GAMEADDR(Addr_UnityEngine_Component_get_gameObject);
		DWORD64 qwGameObject = funcGetGameObject(qwCUI);
		if (qwGameObject)
		{
			_callFunc1 funcIsActive = (_callFunc1)GAMEADDR(Addr_UnityEngine_GameObject_get_activeSelf);
			BOOL result = (BOOL)funcIsActive(qwGameObject);
			return result;
		}
	}
	return FALSE;
}

void OnGameIntro()
{
	InitGlobal(Addr_CGameManager);
	InitGlobal(Addr_Method_CGameManager_GetGameStepObject_CUIIntro);

	XMsg(L"OnGameIntro 1");
	_callFunc1 funcGetInst = (_callFunc1)GAMEADDR(Addr_MonoSingleton_object___get_s_Instance);
	XMsg(L"OnGameIntro 2");
	DWORD64 qwCGameManager = funcGetInst(*(DWORD64*)(GAMEADDR(Addr_CGameManager)));
	XMsg(L"OnGameIntro 3");
	if (!qwCGameManager)
		return;

	XMsg(L"OnGameIntro 4");
	_callFunc2 funcGetGameStepObject = (_callFunc2)GAMEADDR(Addr_CGameManager__GetGameStepObject_object_);
	XMsg(L"OnGameIntro 5");
	DWORD64 qwCUIIntro = funcGetGameStepObject(qwCGameManager, *(DWORD64*)(GAMEADDR(Addr_Method_CGameManager_GetGameStepObject_CUIIntro)));
	XMsg(L"OnGameIntro 6");
	if (!qwCUIIntro)
		return;

	XMsg(L"OnGameIntro 7");
	DWORD64 qwCUIIntroMessagePopup = *(DWORD64*)(qwCUIIntro + Offset_CUIIntro_CUIIntroMessagePopup);
	//if (IsActiveWidget(qwCUIIntroMessagePopup))			// 다운로드
	//{
	//	XMsg(L"게임 업데이트를 진행합니다");
	//	_callFunc2 funcOnButton = (_callFunc2)GAMEADDR(Addr_CUIIntroMessagePopup__OnButton);
	//	funcOnButton(qwCUIIntroMessagePopup, 1);
	//}
}

int GetGameLang()
{
	_callFunc1 funcGetLang = (_callFunc1)GAMEADDR(Addr_COption_CSystem__get_LanguageIndex);
	return (int)funcGetLang(0);			// CLocalization.ELanguage
}

void SkipDeviceReg()
{
	//_CallFunc1 funcSkipDevice = (_CallFunc1)GAMEADDR(Addr_ProjectSetting__set_ConnectServer);
	//funcSkipDevice(Offset_SkipDeviceRegCode);
}

void OnGameLogin()
{
	InitGlobal(Addr_CGameManager);
	InitGlobal(Addr_Method_CGameManager_GetGameStepObject_CUILogin);


	g_nGameServer = GetSettingServer();
	g_nGameChar = 0;
	memset(g_pCharacterInfo, 0, sizeof(g_pCharacterInfo));


	_callFunc1 funcGetInst = (_callFunc1)GAMEADDR(Addr_MonoSingleton_object___get_s_Instance);
	DWORD64 qwCGameManager = funcGetInst(*(DWORD64*)(GAMEADDR(Addr_CGameManager)));
	if (!qwCGameManager)
	{
		XMsg(L"[%s] Wait - 1", __FUNCTION__);
		return;
	}

	_callFunc2 funcGetGameStepObject = (_callFunc2)GAMEADDR(Addr_CGameManager__GetGameStepObject_object_);
	DWORD64 qwCUILogin = funcGetGameStepObject(qwCGameManager, *(DWORD64*)(GAMEADDR(Addr_Method_CGameManager_GetGameStepObject_CUILogin)));
	if (!qwCUILogin)
	{
		XMsg(L"[%s] Wait - 2", __FUNCTION__);
		return;
	}


	// 접속 대기
	static BOOL s_bServerWait = 0;

	DWORD64 qwCUIWatingPopup = *(DWORD64*)(qwCUILogin + Offset_CUILogin_CUIWatingPopup);
	if (IsActiveWidget(qwCUIWatingPopup))
	{
		if (!s_bServerWait)
		{
			s_bServerWait = TRUE;
			XMsg(L"[%s] Server Wait", __FUNCTION__);
			ShowStatus(0, 60148);
		}

		SetDelay(10);
		return;
	}
	else
		s_bServerWait = 0;


	XMsg(L"OnGameLogin 4");
	// 설정된 서버 접속
	DWORD64 qwStateInfo = *(DWORD64*)(qwCUILogin + Offset_CUILogin_EStateInfo);
	if (!qwStateInfo)
	{
		XMsg("[%s] Wait - 3", __FUNCTION__);
		return;
	}

	int nState = *(int*)(qwStateInfo + Offset_CUILogin_EStateInfo_Value);
	if (nState != 4)			// CUILogin.EState::LOGGED_SERVER
	{
		XMsg("[%s] Wait - 4  State:%d", __FUNCTION__, nState);
		SetDelay(10);
		return;
	}

	if (g_bSkipDeviceReg)
	{
		SkipDeviceReg();
	}

	// 현재 선택된 서버
	DWORD64 qwServerInfo = *(DWORD64*)(qwCUILogin + Offset_CUILogin_ServerInfo);
	if (!qwServerInfo)
	{
		XMsg("[%s] Wait - 5", __FUNCTION__);
		return;
	}

	int nServerID = 0;
	if (g_nGameServer > 11)
		nServerID = g_nGameServer + 39;
	else
		nServerID = g_nGameServer + 11;

	XMsg("[%s] Login Server", __FUNCTION__);
	XMsg("GetGameLang [%d] GameServer [%d] ServerID [%d]", GetGameLang(), g_nGameServer, nServerID);

	if (GetGameLang() == eELanguage_Korean)
		ShowStatus(1, 60149, g_pServerRes[g_nGameServer].szKRName);
	else
		ShowStatus(1, 60149, g_pServerRes[g_nGameServer].szTWName);

	_callFunc2 funcOnServerConnect = (_callFunc2)GAMEADDR(Addr_CUILogin__OnServerConnect);
	funcOnServerConnect(qwCUILogin, nServerID);

	SetDelay(50);
}

BOOL IsItemCoolTime(int nIndex)
{
	if (nIndex < 0 || nIndex >= g_nInvenCount)
		return TRUE;

	InitGlobal(Addr_CTimeContentManager);

	_callFunc1 funcGetInst = (_callFunc1)GAMEADDR(Addr_MonoSingleton_object___get_s_Instance);
	DWORD64 qwCTimeContentManager = funcGetInst(*(DWORD64*)(GAMEADDR(Addr_CTimeContentManager)));
	if (qwCTimeContentManager)
	{
		_callFunc2 funcIsCoolTime = (_callFunc2)GAMEADDR(Addr_CTimeContentManager__IsItemCoolTime);
		return (BOOL)funcIsCoolTime(qwCTimeContentManager, g_pInvenInfo[nIndex].dwID);
	}

	return TRUE;
}

void UpdateQuickSlotInfo(BOOL bLog)
{
	XMsg(L"UpdateQuickSlotInfo 1");
	memset(g_pQuickSlotInfo, 0, sizeof(g_pQuickSlotInfo));

	DWORD64 qwUIManager = GetUIManager();
	if (!qwUIManager)
		return;

	_callFunc1 funcGetMainHUD = (_callFunc1)GAMEADDR(Addr_CUIManager__get_MainHUD);
	DWORD64 qwCUIMainHUD = funcGetMainHUD(qwUIManager);
	if (!qwCUIMainHUD)
		return;

	_callFunc1 funcGetUIQuickSlotManager = (_callFunc1)GAMEADDR(Addr_CUIMainHUD__get_UIQuickSlotManager);
	DWORD64 qwCUIQuickSlotManager = funcGetUIQuickSlotManager(qwCUIMainHUD);
	XMsg(L"UpdateQuickSlotInfo 4");
	if (!qwCUIQuickSlotManager)
		return;
	XMsg(L"UpdateQuickSlotInfo 5");

	for (int i = 0; i < MAX_QUICKSLOT; i++)
	{
		_callFunc2 funcGetButton = (_callFunc2)GAMEADDR(Addr_CUIQuickSlotManager__GetQuickSlotData);
		DWORD64 qwCUIQuickSlotButton = funcGetButton(qwCUIQuickSlotManager, i);
		XMsg(L"UpdateQuickSlotInfo 6");
		if (!qwCUIQuickSlotButton)
			continue;

		XMsg(L"UpdateQuickSlotInfo 7");
		g_pQuickSlotInfo[i].qwSlotButton = qwCUIQuickSlotButton;

		_callFunc1 funcGetSlotIndex = (_callFunc1)GAMEADDR(Addr_CUIQuickSlotButton__get_SlotIndex);
		g_pQuickSlotInfo[i].nIndex = (BYTE)funcGetSlotIndex(qwCUIQuickSlotButton);
		XMsg(L"UpdateQuickSlotInfo 8");

		_callFunc1 funcGetQuickSlotInfo = (_callFunc1)GAMEADDR(Addr_CUIQuickSlotButton__get_GetQuickSlotInfo);
		DWORD64 qwQuickSlotInfo = funcGetQuickSlotInfo(qwCUIQuickSlotButton);
		XMsg(L"UpdateQuickSlotInfo 9");
		if (!qwQuickSlotInfo)
			continue;
		XMsg(L"UpdateQuickSlotInfo 10");

		g_pQuickSlotInfo[i].nRegType = *(char*)(qwQuickSlotInfo + Offset_QuickSlotInfo_RegType);
		g_pQuickSlotInfo[i].dwRegID = *(DWORD*)(qwQuickSlotInfo + Offset_QuickSlotInfo_RegID);
		g_pQuickSlotInfo[i].qwItemUID = *(DWORD64*)(qwQuickSlotInfo + Offset_QuickSlotInfo_RegItemUID);

		_callFunc1 funcIsAuto = (_callFunc1)GAMEADDR(Addr_CUIQuickSlotButton__get_AutoUse);
		g_pQuickSlotInfo[i].bIsAuto = (BYTE)funcIsAuto(qwCUIQuickSlotButton);
		XMsg(L"UpdateQuickSlotInfo 11");

		_callFunc1 funcCanAuto = (_callFunc1)GAMEADDR(Addr_CUIQuickSlotButton__get_AutoUseCan);
		g_pQuickSlotInfo[i].bCanAuto = (BYTE)funcCanAuto(qwCUIQuickSlotButton);
		XMsg(L"UpdateQuickSlotInfo 12");

		if (g_pQuickSlotInfo[i].nRegType == 1)
		{
			int nIndex = GetInvenIndex(g_pQuickSlotInfo[i].qwItemUID);
			if (nIndex != -1)
				wcscpy(g_pQuickSlotInfo[i].szName, g_pInvenInfo[nIndex].szOrgName);
		}
		if (g_pQuickSlotInfo[i].nRegType == 2)
		{
			int nIndex = GetSkillIndex(g_pQuickSlotInfo[i].dwRegID);
			if (nIndex != -1)
				wcscpy(g_pQuickSlotInfo[i].szName, g_pSkillInfo[nIndex].szName);
		}
		XMsg(L"UpdateQuickSlotInfo 13");
	}

	if (bLog)
	{
		XMsg(L"==================== QuickSlotItem Info ====================");
		for (int i = 0; i < MAX_QUICKSLOT; i++)
		{
			XMsg(L"Index: %d, %s, Type: %d, ID: %08X, UID: %p, CanAuto: %d, IsAuto: %d",
				g_pQuickSlotInfo[i].nIndex,
				g_pQuickSlotInfo[i].szName,
				g_pQuickSlotInfo[i].nRegType,
				g_pQuickSlotInfo[i].dwRegID,
				g_pQuickSlotInfo[i].qwItemUID,
				g_pQuickSlotInfo[i].bCanAuto,
				g_pQuickSlotInfo[i].bIsAuto);
		}
	}
}

int GetInvenIndex(DWORD64 qwItemUID)
{
	for (int i = 0; i < g_nInvenCount; i++)
	{
		if (g_pInvenInfo[i].qwItemUID == qwItemUID)
			return i;
	}

	return NOINDEX;
}

int GetSkillIndex(WCHAR* pszName)
{
	for (int i = 0; i < g_nSkillCount; i++)
	{
		if (!wcscmp(g_pSkillInfo[i].szName, pszName))
			return i;
	}

	return NOINDEX;
}

int GetSkillIndex(DWORD dwID)
{
	for (int i = 0; i < g_nSkillCount; i++)
	{
		if (g_pSkillInfo[i].dwID == dwID)
			return i;
	}

	return NOINDEX;
}

int GetInvenIndexByID(DWORD dwID)
{
	for (int i = 0; i < g_nInvenCount; i++)
	{
		if (g_pInvenInfo[i].dwID == dwID)
			return i;
	}

	return NOINDEX;
}

void UseItem(int nIndex)
{
	if (nIndex < 0 || nIndex >= g_nInvenCount)
		return;

	_callFunc1 funcGetInvenInfo = (_callFunc1)GAMEADDR(Addr_CNetData__get_Inventory);
	DWORD64 qwInvenInfo = funcGetInvenInfo(0);
	if (!qwInvenInfo)
		return;

	XMsg(L"아이템 \"%s\" 을(를) 사용합니다. [%d]", g_pInvenInfo[nIndex].szName, g_pInvenInfo[nIndex].dwID);
	ShowStatus(1, 60204, g_pInvenInfo[nIndex].szName);

	g_qwUseItemUID = g_pInvenInfo[nIndex].qwItemUID;

	_callFunc3 funcUseItem = (_callFunc3)GAMEADDR(Addr_CNetData_CInventory__UseItem);
	funcUseItem(qwInvenInfo, g_pInvenInfo[nIndex].qwItemUID, TRUE);
}

BOOL ReturnVillage()
{
	if (g_pCharInfo.bIsInVillage && g_pCharInfo.dwMapID != MapID_HavenCastle)
		return FALSE;

	if (g_pCharInfo.dwMapID == MapID_KingTomb)
		return TRUE;

	if (g_pCharInfo.dwMapID != MapID_HavenCastle)
	{
		int nScrollIdx = GetInvenIndexByID(ItemID_RetScroll);
		if (nScrollIdx != NOINDEX)
		{
			if (!IsItemCoolTime(nScrollIdx))
			{
				UseItem(nScrollIdx);
				SetDelay(70);
			}
			return TRUE;
		}
	}

	int nFieldIdx = GetFieldIndex(L"42. 칼데스 성");
	if (nFieldIdx != NOINDEX)
	{
		g_nEnterFieldIdx = nFieldIdx;
		SetStatus(Status_TeleportMap);
		return TRUE;
	}

	return TRUE;
}

DWORD64	GetUIManager()
{
	InitGlobal(Addr_CUIManager);

	_callFunc1 funcGetInst = (_callFunc1)GAMEADDR(Addr_MonoSingleton_object___get_s_Instance);
	return funcGetInst(*(DWORD64*)(GAMEADDR(Addr_CUIManager)));
}

int UTF8toUCS2(WCHAR* src, unsigned short* ucs2)
{
	unsigned char c;
	unsigned short unicode;
	int count = 0;
	int len;
	int i;

	len = (int)wcslen(src);
	for (i = 0; i < len;) {
		c = src[i] & 0xe0;
		if (c < 0x80) {
			unicode = (unsigned short)src[i];
			i++;
		}
		else if (c < 0xe0) {
			unicode = (unsigned short)src[i] & 0x1f;
			i++;
			unicode = unicode << 6;
			unicode = unicode | ((unsigned short)src[i] & 0x3f);
			i++;
		}
		else if (c < 0xf0) {
			unicode = (unsigned short)src[i] & 0x0f;
			i++;
			unicode = unicode << 6;
			unicode = unicode | ((unsigned short)src[i] & 0x3f);
			i++;
			unicode = unicode << 6;
			unicode = unicode | ((unsigned short)src[i] & 0x3f);
			i++;
		}
		ucs2[count] = unicode;
		count++;
	}

	ucs2[count] = 0;

	return count;
}


void MenuButtonClick(WCHAR* pszButton)
{
	XMsg(L"MenuButtonClick 1");
	DWORD64 qwUIManager = GetUIManager();
	XMsg(L"MenuButtonClick 2");
	if (!qwUIManager)
		return;

	XMsg(L"MenuButtonClick 3");
	_callFunc1 funcGetUIMainMenu = (_callFunc1)GAMEADDR(Addr_CUIManager__get_UIMainMenu);
	DWORD64 qwCUIMainMenu = funcGetUIMainMenu(qwUIManager);
	XMsg(L"MenuButtonClick 4");
	if (!qwCUIMainMenu)
		return;

	XMsg(L"MenuButtonClick 5");
	int nLen = (int)wcslen(pszButton);
	XMsg(L"MenuButtonClick 6");

	_callFunc3 funcCreateString = (_callFunc3)GAMEADDR(Addr_CreateString3);
	DWORD64	qwButtonString = funcCreateString((DWORD64)pszButton, 0, nLen);
	XMsg(L"MenuButtonClick 7");

	_callFunc2 funcMenuClick = (_callFunc2)GAMEADDR(Addr_CUIMainMenu__MenuButtonClick);
	XMsg(L"MenuButtonClick 8");
	funcMenuClick(qwCUIMainMenu, qwButtonString);
}

void OnGameCharOut()
{
	// 전투상태 판정
	if (g_pCharInfo.bIsBattleMode)
	{
		if (ReturnVillage())
			return;

		SetDelay(10);
		return;
	}

	MenuButtonClick(L"Btn_Restart");
	SetDelay(30);
}

int UCS2toUTF8(unsigned short* ucs2, int count, WCHAR* dst)
{
	unsigned short unicode;
	unsigned char bytes[4];
	int nbytes;
	int i, j;
	int len = 0;

	for (i = 0; i < count; i++) {
		unicode = ucs2[i];
		if (unicode < 0x80) {
			nbytes = 1;
			bytes[0] = (char)unicode;
		}
		else if (unicode < 0x800) {
			nbytes = 2;
			bytes[1] = (unicode & 0x3f) | 0x80;
			bytes[0] = ((unicode << 2) & 0xcf00 | 0xc000) >> 8;
		}
		else {
			nbytes = 3;
			bytes[2] = (unicode & 0x3f) | 0x80;
			bytes[1] = ((unicode << 2) & 0x3f00 | 0x8000) >> 8;
			bytes[0] = ((unicode << 4) & 0x3f0000 | 0xe00000) >> 16;
		}

		for (j = 0; j < nbytes; j++) {
			dst[len] = bytes[j];
			len++;
		}
	}
	dst[len] = '\0';
	return len;
}

void ConvertString(DWORD64 qwString, WCHAR* pszDst)
{
	int len = *(int*)(qwString + 0x10);
	const WCHAR* src = (const WCHAR*)(qwString + 0x14);
	if (!pszDst || !src)
		return;
	int copyLen = len;
	if (copyLen > MAX_NAME - 1)
		copyLen = MAX_NAME - 1;
	wcsncpy(pszDst, src, copyLen);
	pszDst[copyLen] = L'\0';
}

ItemInfo GetItemInfo(DWORD64 qwItemAddr)
{
	ItemInfo itemInfo;
	memset(&itemInfo, 0, sizeof(ItemInfo));

	if (!qwItemAddr)
		return itemInfo;


	itemInfo.qwAddr = qwItemAddr;					// public class ItemData

	_callFunc1 funcGetItemOID = (_callFunc1)GAMEADDR(Addr_Protocol_ItemData__get_ItemOID);
	itemInfo.qwItemUID = funcGetItemOID(qwItemAddr);

	_callFunc1 funcGetIndex = (_callFunc1)GAMEADDR(Addr_Protocol_ItemData__get_Index);
	itemInfo.dwID = (DWORD)funcGetIndex(qwItemAddr);

	_callFunc1 getItemCount = (_callFunc1)GAMEADDR(Addr_Protocol_ItemData__get_Count);
	itemInfo.nCount = (int)getItemCount(qwItemAddr);

	_callFunc1 getItemAttribute = (_callFunc1)GAMEADDR(Addr_Protocol_ItemData__get_Attribute);
	itemInfo.bIsLock = (char)getItemAttribute(qwItemAddr);

	_callFunc1 getItemEnchant = (_callFunc1)GAMEADDR(Addr_Protocol_ItemData__get_Enchant);
	itemInfo.nCurEnchant = (char)getItemEnchant(qwItemAddr);

	_callFunc1 funcGetItemData = (_callFunc1)GAMEADDR(Addr_CGameTable__get_ItemData);
	DWORD64 qwItemDataTable = funcGetItemData(0);
	if (qwItemDataTable)
	{
		_CallFunc3Struct getItemDesc = (_CallFunc3Struct) * (DWORD64*)(*(DWORD64*)qwItemDataTable + Offset_GetItemDesc);
		RET_STRUCT qwItemDesc = getItemDesc(qwItemDataTable, itemInfo.dwID, *(DWORD64*)(*(DWORD64*)qwItemDataTable + Offset_GetItemDesc + 8));

		itemInfo.dwGroupID = *(DWORD*)((DWORD64)&qwItemDesc.qwData1 + Offset_Item_Group_Index);
		itemInfo.nBelong = (BYTE)*(DWORD*)((DWORD64)&qwItemDesc.qwData1 + Offset_ItemBelong);
		itemInfo.bTrade = *(BYTE*)((DWORD64)&qwItemDesc.qwData1 + Offset_ItemTrade);
		itemInfo.bWarehouse = *(BYTE*)((DWORD64)&qwItemDesc.qwData1 + Offset_ItemWarehouse);

		DWORD64	qwItemGroupData = *(DWORD64*)((DWORD64)&qwItemDesc.qwData1 + Offset_ItemDescDetail);			// CGameTable.SItemGroupData
		if (qwItemGroupData)
		{
			itemInfo.nType = *(int*)(qwItemGroupData + Offset_ItemGroupData_Type);
			itemInfo.nSubType = *(int*)(qwItemGroupData + Offset_ItemGroupData_Kind);
			itemInfo.nGrade = (BYTE)*(DWORD*)(qwItemGroupData + Offset_ItemGrade);
			itemInfo.nEquipClass = *(int*)(qwItemGroupData + Offset_ItemClass);
			if (itemInfo.nEquipClass == 4)		// UC_MAGICIAN
				itemInfo.nEquipClass = ePlayerClass_PC_MAGICIAN;

			DWORD64	qwString = *(DWORD64*)(qwItemGroupData + Offset_ItemNameString);
			if (qwString)
			{
				ConvertString(qwString, itemInfo.szOrgName);

				if (itemInfo.nBelong == 0)
					wcscpy(itemInfo.szName, itemInfo.szOrgName);

				if (itemInfo.nBelong == 1)		// 귀속
				{
					_callFunc1 funcConvertString = (_callFunc1)GAMEADDR(Addr_CLocalization__GetValue);
					DWORD64 qwBelongString = FALSE;
					if (qwBelongString)
					{
						WCHAR szBelong[MAX_NAME] = { 0, };
						ConvertString(qwBelongString, szBelong);
						wsprintf(itemInfo.szName, L"%s %s", itemInfo.szOrgName, szBelong);
					}
					else
						wsprintf(itemInfo.szName, L"%s (귀속)", itemInfo.szOrgName);
				}

				if (itemInfo.nBelong == 2)		// 각인
				{
					_callFunc1 funcConvertString = (_callFunc1)GAMEADDR(Addr_CLocalization__GetValue);
					DWORD64 qwBelongString = FALSE;
					if (qwBelongString)
					{
						WCHAR szBelong[MAX_NAME] = { 0, };
						ConvertString(qwBelongString, szBelong);

						wsprintf(itemInfo.szName, L"%s %s", itemInfo.szOrgName, szBelong);
					}
					else
						wsprintf(itemInfo.szName, L"%s (각인)", itemInfo.szOrgName);
				}
			}

			itemInfo.bSell = (*(char*)(qwItemGroupData + Offset_ItemGroupData_ShopSellType) == 1);			// GameDefine.NPC.ENpcType
			itemInfo.bDissolve = *(char*)(qwItemGroupData + Offset_ItemGroupData_DissolveCheck);
			itemInfo.bDelete = *(BYTE*)(qwItemGroupData + Offset_ItemGroupData_Destroy);

			if (itemInfo.nType == eItemType_IT_WEAPON || itemInfo.nType == eItemType_IT_ARMOR ||
				itemInfo.nType == eItemType_IT_ACCESSARY || itemInfo.nType == eItemType_IT_ACCESSARY_C)
			{
				itemInfo.nEquipSlot = *(int*)(qwItemGroupData + Offset_ItemEquipSlot);
			}

			DWORD64 qwItemEnchantData = qwItemGroupData + Offset_ItemEnchantData;

			itemInfo.bEnchant = *(char*)(qwItemEnchantData + Offset_CGameTable_SEnchant_Check);
			itemInfo.nSafeEnchant = *(int*)(qwItemEnchantData + Offset_CGameTable_SEnchant_Safe);
			itemInfo.nMaxEnchant = *(int*)(qwItemEnchantData + Offset_ItemDescDetail_MaxEnchant);
			if (itemInfo.nMaxEnchant < 0)
				itemInfo.nMaxEnchant = 0;
		}

		_callFunc1 pfnGetUseGroup = (_callFunc1)GAMEADDR(Addr_CGameTable_SItemData_GetUseGroup);
		DWORD64 qwSItemUseGroup = pfnGetUseGroup((DWORD64)&qwItemDesc.qwData1);
		if (qwSItemUseGroup)
		{
			itemInfo.nMinLv = *(DWORD*)(qwSItemUseGroup + Offset_CGameTable_SItemUseGroup_UseLevel + Offset_CGameTable_SUseLevel_Min);
			itemInfo.nMaxLv = *(DWORD*)(qwSItemUseGroup + Offset_CGameTable_SItemUseGroup_UseLevel + Offset_CGameTable_SUseLevel_Max);
		}

		if (itemInfo.nMaxLv == 0)
			itemInfo.nMaxLv = 999;
	}

	_callFunc2 isEquiped = (_callFunc2)GAMEADDR(Addr_ItemHelper__IsEquip);
	itemInfo.bIsEquip = (char)isEquiped(itemInfo.qwItemUID, 0);


	if (itemInfo.nCurEnchant)
	{
		WCHAR szTemp[MAX_NAME];
		wcscpy(szTemp, itemInfo.szName);
		wsprintf(itemInfo.szName, L"+%d %s", itemInfo.nCurEnchant, szTemp);
	}


	if (itemInfo.nType == eItemType_IT_WEAPON)
	{
		itemInfo.nItemType = ItemType_Weapon;
	}
	else if (itemInfo.nType == eItemType_IT_ARMOR)
	{
		itemInfo.nItemType = ItemType_Armor;
	}
	else if (itemInfo.nType == eItemType_IT_ACCESSARY || itemInfo.nType == eItemType_IT_ACCESSARY_C)
	{
		itemInfo.nItemType = ItemType_Accessory;
	}
	else if (itemInfo.nSubType == eItemSubType_MAKE_MATERIAL)
	{
		itemInfo.nItemType = ItemType_Material;
	}
	else if (itemInfo.nSubType == eItemSubType_CHARGE_DUNGEON_TIME
		|| itemInfo.nSubType == eItemSubType_ENCHANT_NORMAL_WEAPON
		|| itemInfo.nSubType == eItemSubType_ENCHANT_NORMAL_ARMOR
		|| itemInfo.nSubType == eItemSubType_ENCHANT_NORMAL_ACCESSORY
		|| itemInfo.nSubType == eItemSubType_ENCHANT_RANDOM_WEAPON
		|| itemInfo.nSubType == eItemSubType_ENCHANT_RANDOM_ARMOR
		|| itemInfo.nSubType == eItemSubType_ENCHANT_RANDOM_ACCESSORY
		|| itemInfo.nSubType == eItemSubType_ENCHANT_DECREASE_WEAPON
		|| itemInfo.nSubType == eItemSubType_ENCHANT_DECREASE_ARMOR
		|| itemInfo.nSubType == eItemSubType_ENCHANT_DECREASE_ACCESSORY)
	{
		itemInfo.nItemType = ItemType_Dungeon;
	}
	else if (itemInfo.nSubType == eItemSubType_SKILL_BOOK)
	{
		itemInfo.nItemType = ItemType_Skill;
	}
	else
	{
		itemInfo.nItemType = ItemType_None;
	}

	return itemInfo;
}

void UpdateInvenInfo(BOOL bLog)
{
	g_nInvenCount = 0;
	InitGlobal(Addr_ItemData_EnuermateMethod);

	_callFunc1 funcGetInvenInfo = (_callFunc1)GAMEADDR(Addr_CNetData__get_Inventory);
	DWORD64 qwInvenInfo = funcGetInvenInfo(0);
	if (!qwInvenInfo)
		return;

	g_nInvenMaxCount = *(int*)(qwInvenInfo + Offset_CInventory_GetMaxCount);

	DWORD64 qwItemList = *(DWORD64*)(qwInvenInfo + Offset_CInventory_GetListItem);
	if (!qwItemList)
		return;

	_callFunc2 getEnumerate = (_callFunc2)GAMEADDR(Addr_ObjectModel_Collection_object___GetEnumerator);
	DWORD64 qwItemDataEnumerate = getEnumerate(qwItemList, *(DWORD64*)GAMEADDR(Addr_ItemData_EnuermateMethod));
	if (!qwItemDataEnumerate)
		return;

	int nEnumerateCount = *(int*)(*(DWORD64*)(qwItemDataEnumerate + Offset_EnumerateInfo) + Offset_EnumerateInfoCount);
	for (int i = 0; i < nEnumerateCount; i++)
	{
		DWORD64 qwItemAddr = *(DWORD64*)(*(DWORD64*)(*(DWORD64*)(qwItemDataEnumerate + Offset_EnumerateInfo) + Offset_EnumerateInfoCount - 8) + 8 * i + Offset_EnumerateInstance);
		if (!qwItemAddr)
			continue;

		ItemInfo itemInfo = GetItemInfo(qwItemAddr);
		if (g_nInvenCount < MAX_INVEN)
			g_pInvenInfo[g_nInvenCount++] = itemInfo;
	}

	g_nInvenWeight = g_nInvenCount * 100 / g_nInvenMaxCount;

	if (bLog)
	{
		XMsg(L"==================== Inven Info ( %d / %d  %d%% ) ====================", g_nInvenCount, g_nInvenMaxCount, g_nInvenWeight);
		for (int i = 0; i < g_nInvenCount; i++)
		{
			XMsg(L"No: %d, %s, ID: %d (%d), UID: %p, Category: %d, Kind: %d, Count: %d, Class: %d, Slot: %d, Enchant: (Cur %d, Safe %d, Max %d), Belong: %d, Grade: %d, Flag: (Trade %d, Store %d, Dissolve %d, Delete %d, Enchant %d, Equip %d, Lock %d, Sell: %d), Lv: %d/%d"
				, i + 1
				, g_pInvenInfo[i].szName
				, g_pInvenInfo[i].dwID
				, g_pInvenInfo[i].dwGroupID
				, g_pInvenInfo[i].qwItemUID
				, g_pInvenInfo[i].nType
				, g_pInvenInfo[i].nSubType
				, g_pInvenInfo[i].nCount
				, g_pInvenInfo[i].nEquipClass
				, g_pInvenInfo[i].nEquipSlot
				, g_pInvenInfo[i].nCurEnchant
				, g_pInvenInfo[i].nSafeEnchant
				, g_pInvenInfo[i].nMaxEnchant
				, g_pInvenInfo[i].nBelong
				, g_pInvenInfo[i].nGrade
				, g_pInvenInfo[i].bTrade
				, g_pInvenInfo[i].bWarehouse
				, g_pInvenInfo[i].bDissolve
				, g_pInvenInfo[i].bDelete
				, g_pInvenInfo[i].bEnchant
				, g_pInvenInfo[i].bIsEquip
				, g_pInvenInfo[i].bIsLock
				, g_pInvenInfo[i].bSell
				, g_pInvenInfo[i].nMinLv
				, g_pInvenInfo[i].nMaxLv
			);
		}
	}
}


UI_UID GetVisibleWindowUID()
{
	DWORD64 qwUIManager = GetUIManager();
	if (qwUIManager)
	{
		_callFunc1 funcGetUID = (_callFunc1)GAMEADDR(Addr_CUIManager__get_VisibleWindow);
		return (UI_UID)funcGetUID(qwUIManager);
	}

	return UI_UID_None;
}

void CloseAllActivePopup()
{
	DWORD64 qwUIManager = GetUIManager();
	if (qwUIManager)
	{
		_callFunc2 funcClose = (_callFunc2)GAMEADDR(Addr_CUIManager__CloseAllActivePopup);
		funcClose(qwUIManager, 0);
	}
}

void OpenWindowByUI_UID(UI_UID dwUIID)
{
	DWORD64 qwUIManager = GetUIManager();
	if (qwUIManager)
	{
		_callFunc5 funcOpen = (_callFunc5)GAMEADDR(Addr_CUIManager__OpenWindow);
		funcOpen(qwUIManager, dwUIID, 0, 0, 0);
	}
}

DWORD64 GetWindowByUI_UID(UI_UID dwUID)
{
	DWORD64 qwUIManager = GetUIManager();
	if (qwUIManager)
	{
		_callFunc2 funcGetWindow = (_callFunc2)GAMEADDR(Addr_CUIManager__GetWindow);
		return funcGetWindow(qwUIManager, dwUID);
	}

	return 0;
}

BOOL SelectToggle(DWORD64 qwUIToggleList, int nIndex)
{
	if (qwUIToggleList)
	{
		int nCount = *(int*)(qwUIToggleList + Offset_Array_Count);
		if (nIndex >= 0 && nIndex < nCount)
		{
			DWORD64 qwUIToggle = *(DWORD64*)(qwUIToggleList + 8 * nIndex + 0x20);
			if (qwUIToggle)
			{
				_callFunc1 funcIsOn = (_callFunc1)GAMEADDR(Addr_UnityEngine_UI_Toggle__get_isOn);
				if (funcIsOn(qwUIToggle))
					return TRUE;

				_callFunc1 funcClick = (_callFunc1)GAMEADDR(Addr_UnityEngine_UI_Toggle__OnSubmit);
				funcClick(qwUIToggle);
			}
		}
	}

	return FALSE;
}

int ConvertOptionType(int nSettingOptionType)
{
	if (nSettingOptionType == 0)
		return eOptionType_EOT_STR;

	if (nSettingOptionType == 1)
		return eOptionType_EOT_DEX;

	if (nSettingOptionType == 2)
		return eOptionType_EOT_INT;

	if (nSettingOptionType == 3)
		return eOptionType_EOT_CON;

	if (nSettingOptionType == 4)
		return eOptionType_EOT_WIZ;

	return eOptionType_EOT_NONE;
}

void OnGameStat()
{
	XMsg(L"OnGameStat 1");
	int nVisbleWindowUID = (int)GetVisibleWindowUID();
	XMsg(L"OnGameStat 2");

	if (g_nStepStatus == 100)
	{
		if (nVisbleWindowUID == UI_UID_CharInfoWindow)
		{
			CloseAllActivePopup();
			XMsg(L"OnGameStat 4");

			SetDelay(20);
			return;
		}

		SetStatus(Status_DoAuto);
		return;
	}

	if (nVisbleWindowUID != UI_UID_CharInfoWindow)
	{
		OpenWindowByUI_UID(UI_UID_CharInfoWindow);

		SetDelay(20);
		return;
	}

	if (g_pCharInfo.nBonusStat <= 0)
	{
		g_nStepStatus = 100;
		return;
	}


	int nStat1 = ConvertOptionType(g_nStat1);
	int nStat2 = ConvertOptionType(g_nStat2);

	int nStatType;
	if (g_pCharInfo.nCurStat[nStat1 - 1] < 65)
		nStatType = nStat1;
	else
		nStatType = nStat2;


	DWORD64 qwCUICharInfoWindow = GetWindowByUI_UID(UI_UID_CharInfoWindow);
	if (!qwCUICharInfoWindow)
	{
		return;
	}

	// 스탯 탭 선택하자
	if (!SelectToggle(*(DWORD64*)(qwCUICharInfoWindow + Offset_CUIGroupWindow_ToggleArray), 1))
	{
		SetDelay(20);
		return;
	}

	_callFunc1 funcGetStatInfoPopup = (_callFunc1)GAMEADDR(Addr_CUICharInfoWindow__get_StatsInfoPopup);
	DWORD64 qwCUIStatInfoPopup = funcGetStatInfoPopup(qwCUICharInfoWindow);
	if (!qwCUIStatInfoPopup)
	{
		return;
	}

	DWORD64 qwCUICharInfoViewStat = *(DWORD64*)(qwCUIStatInfoPopup + Offset_CUIStatInfoPopup_CUICharInfoViewStat);
	if (!qwCUICharInfoViewStat)
	{
		_callFunc2 funcSelect = (_callFunc2)GAMEADDR(Addr_CUIStatInfoPopup__SetData);
		funcSelect(qwCUIStatInfoPopup, nStatType);

		SetDelay(20);
		return;
	}

	_callFunc1 funcGetTempAP = (_callFunc1)GAMEADDR(Addr_CUICharInfoViewStat__get_TempAP);
	int nTempAP = (int)funcGetTempAP(qwCUICharInfoViewStat);

	// 스텟 추가하자
	_callFunc2 funcGetStatSlot = (_callFunc2)GAMEADDR(Addr_CUICharInfoViewStat__GetStatSlot);
	DWORD64 qwCUICharInfoStatSlot = funcGetStatSlot(qwCUICharInfoViewStat, nStatType);
	if (qwCUICharInfoStatSlot)
	{
		int nMaxAP = *(int*)(qwCUICharInfoStatSlot + Offset_CUICharInfoStatSlot_MaxAP);
		int nCurAP = *(int*)(qwCUICharInfoStatSlot + Offset_CUICharInfoStatSlot_CurAP);
		int nPlusAP = *(int*)(qwCUICharInfoStatSlot + Offset_CUICharInfoStatSlot_PlusAP);

		if (nCurAP + nPlusAP < nMaxAP && nTempAP > 0)
		{
			_callFunc1 funcOnPlus = (_callFunc1)GAMEADDR(Addr_CUICharInfoStatSlot__OnClickPlus);
			funcOnPlus(qwCUICharInfoStatSlot);

			SetDelay(10);
			return;
		}
	}

	//// 확정 버튼 클릭
	if (g_pCharInfo.nBonusStat - nTempAP > 0)
	{
		_callFunc1 funcOnConfirm = (_callFunc1)GAMEADDR(Addr_CUICharInfoViewStat__OnClickConfirm);
		funcOnConfirm(qwCUICharInfoViewStat);

		SetDelay(20);
		return;
	}
}

void UpdatePetInfo(DWORD64 qwCUIPetWindow)
{
	g_nPetCount = 0;

	DWORD64 qwPetInfoList = *(DWORD64*)(qwCUIPetWindow + Offset_CUIPetWindow_ListPet);

	if (!qwPetInfoList)
		return;

	_CallFunc1 funcGetPetData = (_CallFunc1)GAMEADDR(Addr_CGameTable__get_PetData);
	DWORD64 qwPetGameTable = funcGetPetData(0);

	if (!qwPetGameTable)
		return;

	_CallFunc1 funcGetCount = (_CallFunc1)GAMEADDR(Addr_System_Collections_Generic_List_object___get_Count);
	_CallFunc3Struct funcGetCGameTable_SPetData = (_CallFunc3Struct) * (DWORD64*)(*(DWORD64*)qwPetGameTable + Offset_GetItemDesc);

	int nCount = (int)funcGetCount(qwPetInfoList);

	for (int i = 0; i < nCount; i++)
	{
		_CallFunc2 funcGetItem = (_CallFunc2)GAMEADDR(Addr_Collections_Generic_List_object___get_Item);
		DWORD64 qwPetInfo = funcGetItem(qwPetInfoList, i);

		if (!qwPetInfo)
			continue;

		_CallFunc1 funcGetPetIndex = (_CallFunc1)GAMEADDR(Addr_Protocol_PetInfo__get_PetIndex);
		DWORD dwPetID = (int)funcGetPetIndex(qwPetInfo);

		_CallFunc1 funcGetCount = (_CallFunc1)GAMEADDR(Addr_Protocol_PetInfo__get_Count);
		int nCount = (int)funcGetCount(qwPetInfo);

		_CallFunc1 funcGetLevel = (_CallFunc1)GAMEADDR(Addr_Protocol_PetInfo__get_Level);
		int nLevel = (int)funcGetLevel(qwPetInfo);

		RET_STRUCT qwSPetData = funcGetCGameTable_SPetData(qwPetGameTable, dwPetID,				// CGameTable.SPetData
			*(DWORD64*)(*(DWORD64*)qwPetGameTable + Offset_GetItemDesc + 8));

		// 		if (!qwSPetData)
		// 			continue;

		int nGrade = *(int*)((DWORD64)&qwSPetData.qwData1 + Offset_PetInfo_Grade);

		int nOrder = *(int*)((DWORD64)&qwSPetData.qwData1 + Offset_PetInfo_Order);

		DWORD64 qwNameString = *(DWORD64*)((DWORD64)&qwSPetData.qwData1 + Offset_PetInfo_Name);

		if (qwNameString && g_nPetCount < MAX_PET)
		{

			memset(&g_pPetInfo[g_nPetCount], 0, sizeof(PetInfo));

			ConvertString(qwNameString, g_pPetInfo[g_nPetCount].szName);
			g_pPetInfo[g_nPetCount].dwID = dwPetID;
			g_pPetInfo[g_nPetCount].nCount = nCount;
			g_pPetInfo[g_nPetCount].nGrade = nGrade;
			g_pPetInfo[g_nPetCount].nOrder = nOrder;
			g_pPetInfo[g_nPetCount].nLevel = nLevel;


			g_nPetCount++;
		}
	}

	// 	for (int i = 0; i < g_nPetCount; i++)
	// 	{
	// 		XMsg(L"No: %d, %s, ID: %08X, Count: %d, Grade: %d, Order: %d, Level: %d",
	// 			i + 1, g_pPetInfo[i].szName, g_pPetInfo[i].dwID, g_pPetInfo[i].nCount, g_pPetInfo[i].nGrade, g_pPetInfo[i].nOrder, g_pPetInfo[i].nLevel);
	// 	}
}

BOOL IsVisibleWindow(DWORD64 qwCUIWindow)
{
	if (qwCUIWindow)
	{
		_CallFunc1 funcIsVisible = (_CallFunc1)GAMEADDR(Addr_CUIWindow__IsVisible);
		return (funcIsVisible(qwCUIWindow) & 1) != 0;
	}

	return FALSE;
}

BOOL OnInvenDissolve()
{
	if (GetVisibleWindowUID() == UI_UID_InvenDissolve)
	{
		DWORD64 qwCUIDissolveWindow = GetWindowByUI_UID(UI_UID_InvenDissolve);

		if (qwCUIDissolveWindow)
		{

			DWORD64 qwCUIGradeCheckPopup = *(DWORD64*)(qwCUIDissolveWindow + Offset_CUIDissolveWindow_CUIGradeCheckPopup);

			if (IsVisibleWindow(qwCUIGradeCheckPopup))
			{

				_callFunc1 funcOnOK = (_callFunc1)GAMEADDR(Addr_CUIGradeCheckPopup__OnClick_OK);

				funcOnOK(qwCUIGradeCheckPopup);

				return TRUE;
			}

			_callFunc1 funcIsFailMoney = (_callFunc1)GAMEADDR(Addr_CUIDissolveWindow__IsDissolveFailMoneyCheck);

			_callFunc1 funcIsFailInven = (_callFunc1)GAMEADDR(Addr_CUIDissolveWindow__IsDissolveInventorySlotCheck);

			if (funcIsFailMoney(qwCUIDissolveWindow) || funcIsFailInven(qwCUIDissolveWindow))
			{

				_callFunc1 funcOnCancel = (_callFunc1)GAMEADDR(Addr_CUIDissolveWindow__OnClick_Cancel);

				funcOnCancel(qwCUIDissolveWindow);

			}
			else
			{

				_callFunc1 funcOnOK = (_callFunc1)GAMEADDR(Addr_CUIDissolveWindow__OnClick_Check);


				funcOnOK(qwCUIDissolveWindow);


			}

			return TRUE;
		}
	}

	return FALSE;
}

void UpdateQuestInfo(BOOL bLog)
{
	InitGlobal(Addr_CQuestManager);
	InitGlobal(Addr_Method$Dictionary_CQuestManager_GetEnumerator_);
	InitGlobal(Addr_Method$Dictionary_CQuestManager_MoveNext);

	g_nQuestCount = 0;

	_callFunc1 funcGetInstance = (_callFunc1)GAMEADDR(Addr_MonoSingleton_object___get_s_Instance);
	DWORD64 qwCQuestManager = funcGetInstance(*(DWORD64*)(GAMEADDR(Addr_CQuestManager)));
	if (!qwCQuestManager)
		return;

	_callFunc1 funcGetDicQuestData = (_callFunc1)GAMEADDR(Addr_CQuestManager__get_DicQuestData);
	DWORD64 qwQuestDictionary = funcGetDicQuestData(qwCQuestManager);
	if (qwQuestDictionary)
	{
		_CallFunc2Struct funcGetEnumerator = (_CallFunc2Struct)GAMEADDR(Addr_ReactiveDictionary_int__object___GetEnumerator);
		_callFunc2 funcMoveNext = (_callFunc2)GAMEADDR(Addr_System_Dictionary_Enumerator_uint__object_MoveNext);

		RET_STRUCT qwGroupParam = funcGetEnumerator(qwQuestDictionary, *(DWORD64*)(GAMEADDR(Addr_Method$Dictionary_CQuestManager_GetEnumerator_)));
		while (funcMoveNext((DWORD64)&qwGroupParam.qwData1, *(DWORD64*)(GAMEADDR(Addr_Method$Dictionary_CQuestManager_MoveNext))) != 0)
		{
			DWORD64 qwQuestInfo = qwGroupParam.qwData4;
			if (qwQuestInfo)
			{
				int nQuestKind = *(int*)(qwQuestInfo + Offset_QuestInfo_Kind);			// Quest_Kind
				int nQuestState = *(int*)(qwQuestInfo + Offset_QuestInfo_State);		// Quest_State
				DWORD dwQuestID = *(DWORD*)(qwQuestInfo + Offset_QuestInfo_ID);			// qwGroupParam.qwData3;
				int nCurCount = *(int*)(qwQuestInfo + Offset_QuestInfo_CurCount);
				int nMaxCount = 0;
				if (nQuestKind == eQuestType_QT_MAIN || nQuestKind == eQuestType_QT_SUB || nQuestKind == eQuestType_QT_EVENT || nQuestKind == eQuestType_QT_GUIDE)
					nMaxCount = *(int*)(qwQuestInfo + Offset_QuestInfo_MaxCount2);
				else
					nMaxCount = *(int*)(qwQuestInfo + Offset_QuestInfo_MaxCount1);

				WCHAR szQuestName[MAX_NAME] = { 0, };
				DWORD64 qwQuestName = 0;

				if (nQuestKind == eQuestType_QT_MAIN || nQuestKind == eQuestType_QT_EVENT || nQuestKind == eQuestType_QT_GUIDE)
					qwQuestName = *(DWORD64*)(qwQuestInfo + Offset_QuestInfo_Title_3);
				if (nQuestKind == eQuestType_QT_SUB)
					qwQuestName = *(DWORD64*)(qwQuestInfo + Offset_QuestInfo_Title_2);
				if (nQuestKind == eQuestType_QT_REQUEST)
					qwQuestName = *(DWORD64*)(qwQuestInfo + Offset_QuestInfo_Title_1);

				if (qwQuestName)
				{
					ConvertString(qwQuestName, szQuestName);

					if (g_nQuestCount < MAX_QUEST)
					{
						memset(&g_pQuestInfo[g_nQuestCount], 0, sizeof(QuestInfo));

						wcscpy(g_pQuestInfo[g_nQuestCount].szName, szQuestName);
						g_pQuestInfo[g_nQuestCount].dwID = dwQuestID;
						g_pQuestInfo[g_nQuestCount].nKind = (eQuestType)nQuestKind;
						g_pQuestInfo[g_nQuestCount].nState = (eQuestState)nQuestState;
						g_pQuestInfo[g_nQuestCount].nCurCount = nCurCount;
						g_pQuestInfo[g_nQuestCount].nMaxCount = nMaxCount;

						g_nQuestCount++;
					}
				}
			}
		}
	}

	if (bLog)
	{
		XMsg(L"==================== Quest Info ====================");
		for (int i = 0; i < g_nQuestCount; i++)
		{
			XMsg(L"No:%d  [%s]  ID: %08X, Kind: %d, State: %d, Count: %d / %d", i + 1,
				g_pQuestInfo[i].szName,
				g_pQuestInfo[i].dwID,
				g_pQuestInfo[i].nKind,
				g_pQuestInfo[i].nState,
				g_pQuestInfo[i].nCurCount,
				g_pQuestInfo[i].nMaxCount);
		}
	}
}



DWORD64 GetNpcShopItem(DWORD dwNpcShopItemIndex, DWORD dwNpcShopIndex)
{
	_callFunc0 funcGetGameTabe_NpcShopItemData = (_callFunc0)GAMEADDR(Addr_CGameTable__get_NpcShopItemData);

	DWORD64 qwCGameTabe_CNpcShopItemData = funcGetGameTabe_NpcShopItemData();

	if (qwCGameTabe_CNpcShopItemData)
	{
		_CallFunc4Struct funcGetSNPC_Shop_Item = (_CallFunc4Struct) * (DWORD64*)(*(DWORD64*)qwCGameTabe_CNpcShopItemData + Offset_GetItemDesc);

		RET_STRUCT qwCGameTable_SNPC_Shop_Item = funcGetSNPC_Shop_Item(qwCGameTabe_CNpcShopItemData, dwNpcShopIndex, dwNpcShopItemIndex,
			*(DWORD64*)(*(DWORD64*)qwCGameTabe_CNpcShopItemData + Offset_GetItemDesc + 8));

		return (DWORD64)&qwCGameTable_SNPC_Shop_Item.qwData1;				// CGameTable.SNPC_Shop_Item
	}

	return 0;
}

void UpdateNPCShopBuyItem(DWORD64 qwCUINpcShopBuyInfo)
{
	g_nNpcItemCount = 0;

	DWORD64 qwlistNpcShopGoodsSlots = *(DWORD64*)(qwCUINpcShopBuyInfo + Offset_CUINpcShopBuyInfo_listNpcShopGoodsSlots);

	if (!qwlistNpcShopGoodsSlots)
	{
		return;

	}

	_callFunc1 funcGetCount = (_callFunc1)GAMEADDR(Addr_System_Collections_Generic_List_object___get_Count);

	int nCount = (int)funcGetCount(qwlistNpcShopGoodsSlots);

	for (int i = 0; i < nCount; i++)
	{

		_callFunc2 funcGetItem = (_callFunc2)GAMEADDR(Addr_Collections_Generic_List_object___get_Item);

		DWORD64 qwCUINpcShopGoodsSlot = funcGetItem(qwlistNpcShopGoodsSlots, i);

		if (!qwCUINpcShopGoodsSlot)
		{
			continue;

		}

		NpcItemInfo	shopItemInfo;

		memset(&shopItemInfo, 0, sizeof(NpcItemInfo));


		shopItemInfo.qwShopSlot = qwCUINpcShopGoodsSlot;


		// 매진됨
		shopItemInfo.bIsSoldOut = *(char*)(qwCUINpcShopGoodsSlot + Offset_CUINpcShopGoodsSlot_bIsSoldOut);


		// 상품에 대해 좀 더 확인하자
		DWORD64 qwSNpc_Shop_Item = GetNpcShopItem(*(DWORD*)(qwCUINpcShopGoodsSlot + Offset_CUINpcShopGoodsSlot_NpcShopItemIndex),
			*(DWORD*)(qwCUINpcShopGoodsSlot + Offset_CUINpcShopGoodsSlot_npcShopIndex));

		if (qwSNpc_Shop_Item)
		{

			// 묶음 개수
			DWORD64 qwSBuy_Item = qwSNpc_Shop_Item + Offset_CGameTable_SNPC_Shop_Item_SBuy_Item;

			shopItemInfo.nBuyUnitCount = *(int*)(qwSBuy_Item + Offset_CGameTable_SBuy_Item_Buy_Unit_Count);


			// 주화가 부족하면
			DWORD64 qwSProperty = qwSNpc_Shop_Item + Offset_CGameTable_SNPC_Shop_Item_SProperty;

			shopItemInfo.nCashType = *(int*)(qwSProperty + Offset_CGameTable_SProperty_Cash_Type);			// GameDefine.Property.EPropertySubType

			shopItemInfo.nPrice = *(int*)(qwSProperty + Offset_CGameTable_SProperty_Cash_Price);


			DWORD64 qwSBuy_Limit = qwSNpc_Shop_Item + Offset_CGameTable_SNPC_Shop_Item_SBuy_Limit;

			shopItemInfo.nNeedLevel = *(int*)(qwSBuy_Limit + Offset_CGameTable_SBuy_Limit_Player_Level);

			shopItemInfo.nGuildLevel = *(int*)(qwSBuy_Limit + Offset_CGameTable_SBuy_Limit_Guild_Level);


			shopItemInfo.nUseClass = *(int*)(qwSBuy_Limit + Offset_CGameTable_SBuy_Limit_Use_Class);

			if (shopItemInfo.nUseClass == 4)		// UC_MAGICIAN
			{
				shopItemInfo.nUseClass = ePlayerClass_PC_MAGICIAN;
			}
		}

		shopItemInfo.bIsHpPotion = *(char*)(qwCUINpcShopGoodsSlot + Offset_CUINpcShopGoodsSlot_bIsHpPotionItem);


		// 아이템 정보
		DWORD64 qwCSlotInfo_Item = *(DWORD64*)(qwCUINpcShopGoodsSlot + Offset_CUINpcShopGoodsSlot_CSlotInfo_Item);

		shopItemInfo.itemInfo = GetItemInfo(qwCSlotInfo_Item);


		g_pNpcItemInfo[g_nNpcItemCount++] = shopItemInfo;

		if (g_nNpcItemCount >= MAX_NPCITEM)
			return;
	}
}

int GetNpcItemIndexByID(DWORD dwID)
{
	if (dwID == ItemID_Potion1)
	{

		if (g_pCharInfo.nLevel > 20)
		{
			dwID = ItemID_Potion2;
		}
	}

	for (int i = 0; i < g_nNpcItemCount; i++)
	{
		if (g_pNpcItemInfo[i].itemInfo.dwID == dwID)
		{
			return i;

		}
	}

	return NOINDEX;
}

void BuyNPCShopBuyItem(DWORD64 qwCUINpcShopWindow, int nIndex, int nCount)
{
	// 개수 설정창이 나오는 경우
	_callFunc1 funcGetNpcShopBuyOrSellPopup = (_callFunc1)GAMEADDR(Addr_CUINpcShopWindow__get_GetNpcShopBuyOrSellPopup);

	DWORD64 qwCUINpcShopBuyOrSellPopup = funcGetNpcShopBuyOrSellPopup(qwCUINpcShopWindow);

	if (IsActiveWidget(qwCUINpcShopBuyOrSellPopup))
	{
		// 0 - 구매, 1 - 판매
		BYTE bIsSellMode = *(BYTE*)(qwCUINpcShopBuyOrSellPopup + Offset_CUINpcShopBuyOrSellPopup_ENpcShopStateType);

		if (bIsSellMode == 0)
		{
			// 아이템 정보를 얻자
			DWORD64 qwCSlotInfo_Item = *(DWORD64*)(qwCUINpcShopBuyOrSellPopup + Offset_CUINpcShopBuyOrSellPopup_CSlotInfo_Item);

			if (!qwCSlotInfo_Item)
			{
				return;

			}

			ItemInfo selectedItemInfo = GetItemInfo(qwCSlotInfo_Item);

			if (selectedItemInfo.dwID == g_pNpcItemInfo[nIndex].itemInfo.dwID)
			{

				int nCurCount = *(int*)(qwCUINpcShopBuyOrSellPopup + Offset_CUINpcShopBuyOrSellPopup_CurrentItemCount);
				int nMinCount = *(int*)(qwCUINpcShopBuyOrSellPopup + Offset_CUINpcShopBuyOrSellPopup_ItemCountMin);
				int nMaxCount = *(int*)(qwCUINpcShopBuyOrSellPopup + Offset_CUINpcShopBuyOrSellPopup_ItemCountMax);
				int nUnitCount = *(int*)(qwCUINpcShopBuyOrSellPopup + Offset_CUINpcShopBuyOrSellPopup_BuyUnitCount);


				// 개수를 설정하자
				DWORD64 qwCountSlider = *(DWORD64*)(qwCUINpcShopBuyOrSellPopup + Offset_CUINpcShopBuyOrSellPopup_Slider);

				if (!qwCountSlider)
					return;

				int nBuyCount = min(nCount, nMaxCount);
				if (nCurCount != nBuyCount)
				{

					*(int*)(qwCUINpcShopBuyOrSellPopup + Offset_CUINpcShopBuyOrSellPopup_CurrentItemCount) = nBuyCount;


					_callFunc1 funcRefresh = (_callFunc1)GAMEADDR(Addr_CUINpcShopBuyOrSellPopup__UpdateInfo);

					funcRefresh(qwCUINpcShopBuyOrSellPopup);


					return;
				}


				// 확인 클릭
				_callFunc1 funcOK = (_callFunc1)GAMEADDR(Addr_CUINpcShopBuyOrSellPopup__OnClick_BuyOrSell);

				funcOK(qwCUINpcShopBuyOrSellPopup);

				return;
			}
		}

		// 취소 클릭
		_callFunc1 funcCancel = (_callFunc1)GAMEADDR(Addr_CUINpcShopBuyOrSellPopup__Close);

		funcCancel(qwCUINpcShopBuyOrSellPopup);


		return;
	}


	_callFunc1 funcOnClick = (_callFunc1)GAMEADDR(Addr_CUINpcShopGoodsSlot__OnClick_SlotSelect);

	funcOnClick(g_pNpcItemInfo[nIndex].qwShopSlot);
}

void GoToNpc(eNpcBtnType nType)
{
	DWORD64 qwCUIManager = GetUIManager();

	if (!qwCUIManager)
	{
		return;

	}

	_callFunc1 funcGetMainHUD = (_callFunc1)GAMEADDR(Addr_CUIManager__get_MainHUD);

	DWORD64 qwCUIMainHUD = funcGetMainHUD(qwCUIManager);

	if (!qwCUIMainHUD)
	{
		return;

	}

	_callFunc1 funcGetUIBattleControl = (_callFunc1)GAMEADDR(Addr_CUIMainHUD__get_UIBattleControl);

	DWORD64 qwCUIBattleControl = funcGetUIBattleControl(qwCUIMainHUD);

	if (!qwCUIBattleControl)
	{
		return;

	}

	_callFunc2 funcClickNpc = (_callFunc2)GAMEADDR(Addr_CUIBattleControl__OnClickProtectNpcButton);

	funcClickNpc(qwCUIBattleControl, nType);

}


int GetBuySkillIndex()
{
	if (!g_BuySetting.bBuySkillGold)
	{
		return NOINDEX;

	}

	for (int i = 0; i < MAX_SKILLBOOKRES; i++)
	{

		if (g_pSkillBookRes[i].nClassType != ePlayerClass_PC_COMMON && g_pSkillBookRes[i].nClassType != g_pCharInfo.nClassType)
		{
			continue;

		}

		if (g_pSkillBookRes[i].nGrade > eItemGrade_IG_RARE)
		{
			continue;

		}

		if (g_pSkillBookRes[i].nGrade == eItemGrade_IG_RARE && !g_BuySetting.bBuyRareSkill)
		{
			continue;

		}

		if (g_pSkillBookRes[i].nLevel > g_pCharInfo.nLevel)
		{
			continue;

		}


		DWORD dwSkillID = 0;
		for (int j = 0; j < MAX_SKILLRES; j++)
		{
			if (g_pSkillRes[j].nClassType != ePlayerClass_PC_COMMON && g_pSkillRes[j].nClassType != g_pCharInfo.nClassType)
			{
				continue;

			}

			if (!wcscmp(g_pSkillRes[j].szKRName, g_pSkillBookRes[i].szName))
			{

				dwSkillID = g_pSkillRes[j].dwID;
				break;
			}
		}


		if (GetSkillIndex(dwSkillID) != NOINDEX)
		{
			continue;

		}

		if (GetInvenIndexByID(g_pSkillBookRes[i].dwID) != NOINDEX)
		{
			continue;

		}

		if (g_pSkillBookRes[i].nPrice + g_BuySetting.nBuySkillGold <= g_pCharInfo.nGold)
		{
			return i;

		}
	}

	return NOINDEX;
}


void OnGameBuySkill()
{
	int nVisbleWindowUID = (int)GetVisibleWindowUID();

	if (g_nStepStatus == 100)
	{
		if (nVisbleWindowUID == UI_UID_NpcShopWindow)
		{
			AJLog(L"[%s] Close", __FUNCTION__);

			CloseAllActivePopup();

			SetDelay(20);
			return;
		}

		AJLog(L"상점 처리가 끝났습니다");
		ShowStatus(0, 60199);

		SetStatus(Status_ReturnVillage);
		return;
	}


	if (nVisbleWindowUID != UI_UID_NpcShopWindow)
	{

		if (!g_pCharInfo.bIsMoving)
		{

			GoToNpc(eNpcBtnType_Btn_SkllShop);
		}

		return;
	}

	int nResIdx = GetBuySkillIndex();
	if (nResIdx == NOINDEX)
	{
		g_nStepStatus = 100;
		return;
	}

	// 상점이 켜진 상태면
	DWORD64 qwCUINpcShopWindow = GetWindowByUI_UID((UI_UID)nVisbleWindowUID);
	if (!qwCUINpcShopWindow)
	{
		return;
	}

	// 아이템 구매
	_callFunc1 funcGetNpcShopBuyInfo = (_callFunc1)GAMEADDR(Addr_CUINpcShopWindow__get_GetNpcShopBuyInfo);

	DWORD64 qwCUINpcShopBuyInfo = funcGetNpcShopBuyInfo(qwCUINpcShopWindow);

	if (!qwCUINpcShopBuyInfo)
	{
		return;
	}

	UpdateNPCShopBuyItem(qwCUINpcShopBuyInfo);

	int nShopIdx = GetNpcItemIndexByID(g_pSkillBookRes[nResIdx].dwID);
	if (nShopIdx == NOINDEX)
	{
		return;
	}

	if (g_pNpcItemInfo[nShopIdx].bIsSoldOut)
	{
		return;

	}

	if (GetCashAmount(g_pNpcItemInfo[nShopIdx].nCashType) < g_pNpcItemInfo[nShopIdx].nPrice)
	{
		return;

	}

	if (g_pCharInfo.nLevel < g_pNpcItemInfo[nShopIdx].nNeedLevel)
	{
		return;

	}

	if (g_pNpcItemInfo[nShopIdx].nUseClass != ePlayerClass_PC_COMMON && g_pNpcItemInfo[nShopIdx].nUseClass != g_pCharInfo.nClassType)
	{
		return;

	}

	BuyNPCShopBuyItem(qwCUINpcShopWindow, nShopIdx, 1);
	SetDelay(20);
	return;
}

int GetItemDetailIndex(ItemInfo* pItemInfo, int nFirstType)
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < g_nItemDetailCount; j++)
		{
			if (!g_pItemDetailInfo[j].bEnable)
			{
				continue;
			}

			if (i == 0 && g_pItemDetailInfo[j].nMode != nFirstType)
			{
				continue;
			}

			if (!wcscmp(g_pItemDetailInfo[j].szName, pItemInfo->szName))
			{
				return j;
			}


			// 강화 할수 없는 모드면 무시하자
			if (g_pItemDetailInfo[j].nMode != ItemMode_None && g_pItemDetailInfo[j].nMode != ItemMode_Trade)
			{
				continue;
			}

			// 장비가 아닌 경우 무시하자
			if (pItemInfo->nItemType != ItemType_Weapon && pItemInfo->nItemType != ItemType_Armor && pItemInfo->nItemType != ItemType_Accessory)
			{
				continue;
			}

			if (pItemInfo->nCurEnchant <= 0)
			{
				continue;
			}


			WCHAR szKRName[MAX_NAME], szTWName[MAX_NAME];
			wcscpy(szKRName, pItemInfo->szOrgName);
			wcscpy(szTWName, pItemInfo->szOrgName);

			if (pItemInfo->nBelong == eBelongType_IOT_BELONG)
			{
				wcscat(szKRName, L" (귀속)");
				wcscat(szTWName, L" (绑定)");
			}
			else if (pItemInfo->nBelong == eBelongType_IOT_BELONG_CHAR)
			{

				wcscat(szKRName, L" (각인)");
				wcscat(szTWName, L" (刻印)");
			}


			if (!wcscmp(g_pItemDetailInfo[j].szName, szKRName) || !wcscmp(g_pItemDetailInfo[j].szName, szTWName))
			{
				return j;
			}
		}
	}

	return NOINDEX;
}


int GetMarketMapIndex(WCHAR* szName, int nEnchant)
{
	for (int i = 0; i < MAX_MARKETMAP; i++)
	{
		if (g_qwTickCount - g_pMarketMap[i].qwTime >= 3600000)	//1시간
		{
			continue;
		}

		if (g_pMarketMap[i].nServer == g_nGameServer && !wcscmp(g_pMarketMap[i].szItemName, szName) && g_pMarketMap[i].nEnchant == nEnchant)
		{
			return i;
		}
	}
	return NOINDEX;
}

int GetInvenCountByID(DWORD dwID)
{
	int nCount = 0;

	if (dwID == ItemID_Potion1)
	{
		for (int i = 0; i < g_nInvenCount; i++)
		{
			if (g_pInvenInfo[i].dwID == ItemID_Potion1 || g_pInvenInfo[i].dwID == ItemID_Potion2)
				nCount += g_pInvenInfo[i].nCount;
		}
	}
	else
	{
		for (int i = 0; i < g_nInvenCount; i++)
		{
			if (g_pInvenInfo[i].dwID == dwID)
				nCount += g_pInvenInfo[i].nCount;
		}
	}

	return nCount;
}

int IsNeedCollectItem(int nIndex, bool bEnchant)
{
	// 설정이 안되있으면 무시
	if (!g_OtherSetting.bCollectItem)
	{
		return NOINDEX;
	}

	if (bEnchant && !g_OtherSetting.bCollectEnchant)
	{
		return NOINDEX;
	}

	if (g_pInvenInfo[nIndex].bIsLock || g_pInvenInfo[nIndex].bIsEquip)
	{
		return NOINDEX;
	}


	// 장비등급
	if (g_pInvenInfo[nIndex].nItemType == ItemType_Weapon || g_pInvenInfo[nIndex].nItemType == ItemType_Armor || g_pInvenInfo[nIndex].nItemType == ItemType_Accessory)
	{
		if (!g_OtherSetting.bCollectGrade[0] && g_pInvenInfo[nIndex].nGrade == eItemGrade_IG_NORMAL)
		{
			return NOINDEX;
		}

		if (!g_OtherSetting.bCollectGrade[1] && g_pInvenInfo[nIndex].nGrade == eItemGrade_IG_MAGICAL)
		{
			return NOINDEX;
		}

		if (!g_OtherSetting.bCollectGrade[2] && g_pInvenInfo[nIndex].nGrade == eItemGrade_IG_RARE)
		{
			return NOINDEX;
		}

		if (!g_OtherSetting.bCollectGrade[3] && g_pInvenInfo[nIndex].nGrade == eItemGrade_IG_EPIC)
		{
			return NOINDEX;
		}

		if (g_pInvenInfo[nIndex].nGrade >= eItemGrade_IG_LEGENDARY)
		{
			return NOINDEX;
		}
	}


	int nCollectIdx = NOINDEX;
	int nScrollCount = 0;

	if (bEnchant)
	{
		if (g_pInvenInfo[nIndex].nItemType == ItemType_Weapon)
		{
			nScrollCount = GetInvenCountByID(ItemID_WeaponScr3) + GetInvenCountByID(ItemID_WeaponScr2);

			if (g_OtherSetting.bEnchantScroll[0])
			{
				nScrollCount += GetInvenCountByID(ItemID_WeaponScr1);
			}
		}
		else if (g_pInvenInfo[nIndex].nItemType == ItemType_Armor)
		{
			nScrollCount = GetInvenCountByID(ItemID_ArmorScr3) + GetInvenCountByID(ItemID_ArmorScr2);

			if (g_OtherSetting.bEnchantScroll[1])
			{
				nScrollCount += GetInvenCountByID(ItemID_ArmorScr1);
			}
		}
		else if (g_pInvenInfo[nIndex].nItemType == ItemType_Accessory)
		{
			if (g_pInvenInfo[nIndex].dwID == ItemID_EventAcce1 || g_pInvenInfo[nIndex].dwID == ItemID_EventAcce2)
			{
				nScrollCount = GetInvenCountByID(ItemID_EventScr);
			}
			else
			{
				nScrollCount = GetInvenCountByID(ItemID_AcceScr3) + GetInvenCountByID(ItemID_AcceScr2);
				if (g_OtherSetting.bEnchantScroll[2])
				{
					nScrollCount += GetInvenCountByID(ItemID_AcceScr1);
				}
			}
		}
	}

	for (int i = 0; i < g_nItemCollectionCount; i++)
	{
		if (g_pItemCollectionInfo[i].nItemGroupID != g_pInvenInfo[nIndex].dwGroupID)
		{
			continue;

		}

		if (bEnchant)
		{
			if (g_pItemCollectionInfo[i].bRegisterable)
			{
				continue;

			}

			if (g_pItemCollectionInfo[i].nItemEnchant > g_pInvenInfo[nIndex].nSafeEnchant + g_OtherSetting.nCollectEnchant)
			{
				continue;

			}

			if (g_pItemCollectionInfo[i].nItemEnchant > g_pInvenInfo[nIndex].nCurEnchant &&
				g_pItemCollectionInfo[i].nItemEnchant - g_pInvenInfo[nIndex].nCurEnchant <= nScrollCount)
			{
				nCollectIdx = i;
				break;
			}
		}
		else
		{
			if (!g_pItemCollectionInfo[i].bRegisterable)
			{
				continue;

			}

			if (g_pItemCollectionInfo[i].nItemEnchant == g_pInvenInfo[nIndex].nCurEnchant)
			{
				nCollectIdx = i;
				break;
			}
		}
	}

	if (nCollectIdx == NOINDEX)
	{
		return NOINDEX;
	}


	// 귀속템은 내꺼 우선
	if (g_pInvenInfo[nIndex].nBelong)
	{
		return nCollectIdx;

	}
	else
	{
		// 비귀속이지만 거래소가 열리지 않았으면 희귀미만 템은 처리하자
		if (g_pCharInfo.nLevel < 60)
		{
			if (g_pInvenInfo[nIndex].nGrade < eItemGrade_IG_RARE)
			{
				return nCollectIdx;

			}
		}
	}


	int nDetailIndex = GetItemDetailIndex(&g_pInvenInfo[nIndex], ItemMode_Decompose);

	if (nDetailIndex != NOINDEX)
	{
		if (g_pItemDetailInfo[nDetailIndex].nMode == ItemMode_Decompose ||
			g_pItemDetailInfo[nDetailIndex].nMode == ItemMode_Delete)
		{
			return nCollectIdx;

		}

		if (g_pItemDetailInfo[nDetailIndex].nMode == ItemMode_Trade)
		{
			if (g_pInvenInfo[nIndex].nItemType == ItemType_Weapon || g_pInvenInfo[nIndex].nItemType == ItemType_Armor || g_pInvenInfo[nIndex].nItemType == ItemType_Accessory)
			{
				if (g_OtherSetting.bTradeDissolve)
				{
					int nMarketMapIdx = GetMarketMapIndex(g_pInvenInfo[nIndex].szOrgName, g_pInvenInfo[nIndex].nCurEnchant);

					if (nMarketMapIdx != NOINDEX && g_pMarketMap[nMarketMapIdx].fPerPrice <= g_OtherSetting.nTradeDissolve * 1.0f)
					{
						return nCollectIdx;

					}
				}
			}
		}
	}
	else if (g_pInvenInfo[nIndex].nGrade >= eItemGrade_IG_NORMAL && g_pInvenInfo[nIndex].nGrade <= eItemGrade_IG_MYTHICAL)
	{
		if (g_pInvenInfo[nIndex].nItemType == ItemType_None)
		{
			return nCollectIdx;

		}

		if (g_pItemDefault[g_pInvenInfo[nIndex].nGrade - 1][g_pInvenInfo[nIndex].nItemType] == ItemMode_Decompose ||
			g_pItemDefault[g_pInvenInfo[nIndex].nGrade - 1][g_pInvenInfo[nIndex].nItemType] == ItemMode_Delete)
		{
			return nCollectIdx;

		}

		if (g_pItemDefault[g_pInvenInfo[nIndex].nGrade - 1][g_pInvenInfo[nIndex].nItemType] == ItemMode_Trade)
		{
			if (g_pInvenInfo[nIndex].nItemType == ItemType_Weapon || g_pInvenInfo[nIndex].nItemType == ItemType_Armor || g_pInvenInfo[nIndex].nItemType == ItemType_Accessory)
			{
				if (g_OtherSetting.bTradeDissolve)
				{
					int nMarketMapIdx = GetMarketMapIndex(g_pInvenInfo[nIndex].szOrgName, g_pInvenInfo[nIndex].nCurEnchant);

					if (nMarketMapIdx != NOINDEX && g_pMarketMap[nMarketMapIdx].fPerPrice <= g_OtherSetting.nTradeDissolve * 1.0f)
					{
						return nCollectIdx;

					}
				}
			}
		}
	}

	return NOINDEX;
}

int GetCollectItemIndex(int* pInvenIndex)
{
	for (int i = 0; i < g_nInvenCount; i++)
	{
		int nCollectIdx = IsNeedCollectItem(i, FALSE);

		if (nCollectIdx != NOINDEX)
		{
			if (pInvenIndex)
			{
				*pInvenIndex = i;

			}

			return nCollectIdx;
		}
	}

	return NOINDEX;
}

void OnGameAttendance()
{
	int nVisbleWindowUID = (int)GetVisibleWindowUID();

	if (g_nStepStatus == 100)
	{
		if (nVisbleWindowUID == UI_UID_AttendanceWindow)
		{

			CloseAllActivePopup();

			return;
		}

		return;
	}

	if (nVisbleWindowUID != UI_UID_AttendanceWindow)
	{
		MenuButtonClick(L"Btn_Attendance");

		return;
	}

	DWORD64 qwCUIAttendanceWindow = GetWindowByUI_UID((UI_UID)nVisbleWindowUID);

	if (!qwCUIAttendanceWindow)
	{
		return;
	}

	// 우선 빨간 점 있는 탭 선택하자
	DWORD64 qwTabListView = *(DWORD64*)(qwCUIAttendanceWindow + Offset_CUIAttendanceWindow_TapTopListView);

	if (!qwTabListView)
	{
		return;
	}

	_callFunc1 funcGetObjectList = (_callFunc1)GAMEADDR(Addr_UIListView__get_List);

	DWORD64 qwTabObjectList = funcGetObjectList(qwTabListView);

	if (!qwTabObjectList)
	{
		return;
	}

	_callFunc1 funcGetCount = (_callFunc1)GAMEADDR(Addr_System_Collections_Generic_List_object___get_Count);

	int nCount = (int)funcGetCount(qwTabObjectList);

	for (int i = 0; i < nCount; i++)
	{
		_callFunc2 funcGetItem = (_callFunc2)GAMEADDR(Addr_Collections_Generic_List_object___get_Item);

		DWORD64 qwListItemObject = funcGetItem(qwTabObjectList, i);

		if (!qwListItemObject)
			continue;

		_callFunc1 funcGetTransform = (_callFunc1)GAMEADDR(Addr_UnityEngine_GameObject__get_transform);

		DWORD64 qwTransform = funcGetTransform(qwListItemObject);

		if (!qwTransform)
			continue;

		BYTE szUCS2[MAX_NAME] = { 0 };

		int nLen = UTF8toUCS2(L"IconAlram", (unsigned short*)szUCS2);


		_callFunc3 funcCreateString = (_callFunc3)GAMEADDR(Addr_CreateString3);

		DWORD64	qwString = funcCreateString((DWORD64)szUCS2, 0, nLen);

		_callFunc2 funcTransformFind = (_callFunc2)GAMEADDR(Addr_UnityEngine_Transform__Find);

		DWORD64 qwIconAlarmObject = funcTransformFind(qwTransform, qwString);
		if (!qwIconAlarmObject)
			continue;

		if (IsActiveWidget(qwIconAlarmObject))
		{
			if (!SelectToggle(DWORD64(qwCUIAttendanceWindow + Offset_CUIGroupWindow_ToggleArray), i))
			{
				SetDelay(20);
				return;
			}

			// 보상 받기 클릭하자
			InitGlobal(Addr_Method$CUIGroupWindow_GetView_CUIAttendanceView___);


			_callFunc3 funcGetWindow = (_callFunc3)GAMEADDR(Addr_CUIGroupWindow__GetView_object_);

			_callFunc1 funcGetSelectIndex = (_callFunc1)GAMEADDR(Addr_CUIGroupWindow__get_SelectViewID);

			DWORD64 qwCUIAttendanceView = funcGetWindow(qwCUIAttendanceWindow, funcGetSelectIndex(qwCUIAttendanceWindow),
				DWORD64(GAMEADDR(Addr_Method$CUIGroupWindow_GetView_CUIAttendanceView___)));

			if (qwCUIAttendanceView)
			{
				DWORD64 qwCUIAttendanceSlot = *(DWORD64*)(qwCUIAttendanceView + Offset_CUIAttendanceView_attendanceSlot);

				if (qwCUIAttendanceSlot)
				{
					_callFunc1 funcReward = (_callFunc1)GAMEADDR(Addr_CUIAttendanceSlot__OnclickRewardButton);

					funcReward(qwCUIAttendanceSlot);

					SetDelay(20);
					return;
				}
			}
		}
	}

	g_nStepStatus = 100;
}

BOOL IsRegisterableCollectionItem(DWORD64 qwProceedingList, int nCollectionID, int nSlotIdx)
{
	int nCount = *(DWORD*)(qwProceedingList + Offset_System_Collections_Generic_List_Count);
	for (int i = 0; i < nCount; i++)
	{
		_callFunc2 pfnGetObjectItem = (_callFunc2)GAMEADDR(Addr_Collections_Generic_List_object___get_Item);
		DWORD64 qwItem = pfnGetObjectItem(qwProceedingList, i);
		if (!qwItem)
			continue;

		int nID = *(DWORD*)(qwItem + Offset_ItemCollectionSlots_index);
		if (nID != nCollectionID)
			continue;

		return !((*(BYTE*)(qwItem + Offset_ItemCollectionSlots_slots) >> nSlotIdx) & 1);
	}

	return TRUE;
}

void UpdateItemCollectionInfo(BOOL bLog)
{
	g_nItemCollectionCount = 0;
	_callFunc0 pfnGetItemCollection = (_callFunc0)GAMEADDR(Addr_CNetData__get_ItemCollection);
	DWORD64 qwItemCollection = pfnGetItemCollection();
	if (!qwItemCollection)
		return;

	DWORD64 qwCompleteList = *(DWORD64*)(qwItemCollection + Offset_CItemCollection_ListCompletedCollection);
	if (!qwCompleteList)
		return;

	DWORD64 qwProceedingList = *(DWORD64*)(qwItemCollection + Offset_CItemCollection_ListProceedingCollection);
	if (!qwProceedingList)
		return;

	_callFunc0 pfnGetTableData = (_callFunc0)GAMEADDR(Addr_CGameTable__get_ItemCollectionData);
	DWORD64 qwTableData = pfnGetTableData();
	if (!qwTableData)
		return;

	InitGlobal(Addr_Method$CGameTable_SItemCollection_GetKeyList__);
	InitGlobal(Addr_Method$Collections_Generic_List_int_Contains__);

	_callFunc2 pfnGetKeyList = (_callFunc2)GAMEADDR(Addr_CGameTable_SItemCollection___GetKeyList);
	DWORD64 qwKeyList = pfnGetKeyList(qwTableData, *(DWORD64*)(GAMEADDR(Addr_Method$CGameTable_SItemCollection_GetKeyList__)));
	if (!qwKeyList)
		return;

	int nCount = *(DWORD*)(qwKeyList + Offset_System_Collections_Generic_List_Count);
	for (int i = 0; i < nCount; i++)
	{
		_callFunc2 pfnGetItem = (_callFunc2)GAMEADDR(Addr_Collections_Generic_List_int___get_Item);
		int nCollectionID = (int)pfnGetItem(qwKeyList, i);
		if (!nCollectionID)
			continue;

		_callFunc3 pfnIsComplete = (_callFunc3)GAMEADDR(Addr_Collections_Generic_List_int___Contains);
		if ((pfnIsComplete(qwCompleteList, nCollectionID, *(DWORD64*)(GAMEADDR(Addr_Method$Collections_Generic_List_int_Contains__))) & 1) != 0)
			continue;

		_CallFunc3Struct pfnGetSItemCollectionData = (_CallFunc3Struct) * (DWORD64*)(*(DWORD64*)(qwTableData)+Offset_GetItemDesc);
		RET_STRUCT stSItemCollectionData = pfnGetSItemCollectionData(qwTableData, nCollectionID, *(DWORD64*)(*(DWORD64*)(qwTableData)+Offset_GetItemDesc + 8));				// CGameTable.SItemCollection

		int nCategory = *(DWORD*)((DWORD64)&stSItemCollectionData.qwData1 + Offset_CGameTable_SItemCollection_Category);
		DWORD64 qwItemGroupArray = *(DWORD64*)((DWORD64)&stSItemCollectionData.qwData1 + Offset_CGameTable_SItemCollection_ItemGroup);
		if (!qwItemGroupArray)
			continue;

		int nArrayCount = *(DWORD*)(qwItemGroupArray + Offset_Array_Count);
		for (int j = 0; j < nArrayCount; j++)
		{
			int nEnchant = *(DWORD*)(qwItemGroupArray + j * 12 + 0x20 + Offset_CGameTable_SItemGroup_ItemEnchant);
			int nGroupID = *(DWORD*)(qwItemGroupArray + j * 12 + 0x20 + Offset_CGameTable_SItemGroup_Item_Group_ID);
			if (!nGroupID)
				continue;

			if (g_nItemCollectionCount < MAX_ITEMCOLLECTION)
			{
				memset(&g_pItemCollectionInfo[g_nItemCollectionCount], 0, sizeof(ItemCollectionInfo));

				g_pItemCollectionInfo[g_nItemCollectionCount].nCollectionID = nCollectionID;
				g_pItemCollectionInfo[g_nItemCollectionCount].nCategory = (eAbilityCategory)nCategory;
				g_pItemCollectionInfo[g_nItemCollectionCount].nSlotIdx = j;
				g_pItemCollectionInfo[g_nItemCollectionCount].nItemGroupID = nGroupID;
				g_pItemCollectionInfo[g_nItemCollectionCount].nItemEnchant = nEnchant;
				g_pItemCollectionInfo[g_nItemCollectionCount].bRegisterable = IsRegisterableCollectionItem(qwProceedingList, nCollectionID, j);

				g_nItemCollectionCount++;
			}
		}
	}

	if (bLog)
	{
		XMsg(L"==================== ItenCollection Info ( Count = %d ) ====================", g_nItemCollectionCount);
		for (int i = 0; i < 10; i++)
		{
			XMsg(L"No.%d, ID: %d, Cat: %d, Slot: %d, GruopID: %d, Enchant: %d, Registerable:%d", i + 1,
				g_pItemCollectionInfo[i].nCollectionID,
				g_pItemCollectionInfo[i].nCategory,
				g_pItemCollectionInfo[i].nSlotIdx,
				g_pItemCollectionInfo[i].nItemGroupID,
				g_pItemCollectionInfo[i].nItemEnchant,
				g_pItemCollectionInfo[i].bRegisterable);
		}

		for (int i = 0; i < g_nItemCollectionCount; i++)
		{
			if (g_pItemCollectionInfo[i].nCollectionID == 3210100) {
				XMsg(L"No.%d, ID: %d, Cat: %d, Slot: %d, GruopID: %d, Enchant: %d, Registerable:%d", i + 1,
					g_pItemCollectionInfo[i].nCollectionID,
					g_pItemCollectionInfo[i].nCategory,
					g_pItemCollectionInfo[i].nSlotIdx,
					g_pItemCollectionInfo[i].nItemGroupID,
					g_pItemCollectionInfo[i].nItemEnchant,
					g_pItemCollectionInfo[i].bRegisterable);
			}
		}
	}
}

BOOL IsNeedEquipItem(int nIndex, int nEquipSlot)
{
	if (g_pInvenInfo[nIndex].bIsEquip)
		return FALSE;

	if (g_pInvenInfo[nIndex].nItemType != ItemType_Weapon && g_pInvenInfo[nIndex].nItemType != ItemType_Armor && g_pInvenInfo[nIndex].nItemType != ItemType_Accessory)
		return FALSE;

	if (g_pInvenInfo[nIndex].nEquipSlot != nEquipSlot)
		return FALSE;

	if (g_pInvenInfo[nIndex].nItemType == ItemType_Weapon)
	{
		if (g_pInvenInfo[nIndex].nEquipClass != g_pCharInfo.nClassType)
			return FALSE;
	}
	else
	{
		if (g_pInvenInfo[nIndex].nEquipClass != ePlayerClass_PC_COMMON && g_pInvenInfo[nIndex].nEquipClass != g_pCharInfo.nClassType)
			return FALSE;
	}


	// 귀속템은 내꺼 우선
	if (g_pInvenInfo[nIndex].nBelong)
		return TRUE;
	else
	{
		// 비귀속이지만 거래소가 열리지 않았으면 희귀미만 템은 처리하자
		if (g_pCharInfo.nLevel < 60)
		{
			if (g_pInvenInfo[nIndex].nGrade < eItemGrade_IG_RARE)
				return TRUE;
		}
	}


	int nDetailIndex = GetItemDetailIndex(&g_pInvenInfo[nIndex], ItemMode_Decompose);
	if (nDetailIndex != NOINDEX)
	{
		if (g_pItemDetailInfo[nDetailIndex].nMode == ItemMode_Decompose ||
			g_pItemDetailInfo[nDetailIndex].nMode == ItemMode_Delete)
			return TRUE;

		if (g_pItemDetailInfo[nDetailIndex].nMode == ItemMode_Trade)
		{
			if (g_OtherSetting.bTradeDissolve)
			{
				int nMarketMapIdx = GetMarketMapIndex(g_pInvenInfo[nIndex].szOrgName, g_pInvenInfo[nIndex].nCurEnchant);
				if (nMarketMapIdx != NOINDEX && g_pMarketMap[nMarketMapIdx].fPerPrice <= g_OtherSetting.nTradeDissolve * 1.0f)
					return TRUE;
			}
		}
	}
	else if (g_pInvenInfo[nIndex].nGrade >= eItemGrade_IG_NORMAL && g_pInvenInfo[nIndex].nGrade <= eItemGrade_IG_MYTHICAL)
	{
		if (g_pItemDefault[g_pInvenInfo[nIndex].nGrade - 1][g_pInvenInfo[nIndex].nItemType] == ItemMode_Decompose ||
			g_pItemDefault[g_pInvenInfo[nIndex].nGrade - 1][g_pInvenInfo[nIndex].nItemType] == ItemMode_Delete)
			return TRUE;

		if (g_pItemDefault[g_pInvenInfo[nIndex].nGrade - 1][g_pInvenInfo[nIndex].nItemType] == ItemMode_Trade)
		{
			if (g_OtherSetting.bTradeDissolve)
			{
				int nMarketMapIdx = GetMarketMapIndex(g_pInvenInfo[nIndex].szOrgName, g_pInvenInfo[nIndex].nCurEnchant);
				if (nMarketMapIdx != NOINDEX && g_pMarketMap[nMarketMapIdx].fPerPrice <= g_OtherSetting.nTradeDissolve * 1.0f)
					return TRUE;
			}
		}
	}

	return FALSE;
}

void EquipItem(int nIndex)
{
	if (nIndex < 0 || nIndex >= g_nInvenCount)
		return;

	InitGlobal(Addr_CNetHandler);

	_callFunc1 funcGetInst = (_callFunc1)GAMEADDR(Addr_MonoSingleton_object___get_s_Instance);
	DWORD64 qwCNetHandler = funcGetInst(*(DWORD64*)(GAMEADDR(Addr_CNetHandler)));
	if (!qwCNetHandler)
		return;

	_callFunc3 funcEquipItem = (_callFunc3)GAMEADDR(Addr_CNetHandler__OnC2S_EquipItem);
	funcEquipItem(qwCNetHandler, g_pInvenInfo[nIndex].qwItemUID, g_pInvenInfo[nIndex].nEquipSlot);
}

BOOL IsHighEquip(ItemInfo* p1, ItemInfo* p2)
{
	if (p1->nGrade > p2->nGrade)
		return TRUE;

	if (p1->nGrade == p2->nGrade && p1->nCurEnchant > p2->nCurEnchant)
		return TRUE;

	return FALSE;
}

BOOL OnAutoEquipProc(BOOL bEquip)
{
	if (!g_OtherSetting.bAutoEquip)
		return FALSE;

	for (int nEquipSlot = eEquipSlot_ES_WEAPON; nEquipSlot <= eEquipSlot_ES_CASH_MEDAL; nEquipSlot++)
	{
		int nEquipIdx = GetEquipIndexBySlot(nEquipSlot);
		XMsg(L"OnAutoEquipProc 1: %d", nEquipIdx);
		int nHightIdx = NOINDEX;

		for (int i = 0; i < g_nInvenCount; i++)
		{
			if (!IsNeedEquipItem(i, nEquipSlot))
				continue;

			XMsg(L"OnAutoEquipProc 2: %d", IsHighEquip(&g_pInvenInfo[i], &g_pInvenInfo[nEquipIdx]));
			if (nEquipIdx == NOINDEX || IsHighEquip(&g_pInvenInfo[i], &g_pInvenInfo[nEquipIdx]))
			{
				nEquipIdx = i;
				nHightIdx = i;
				XMsg(L"OnAutoEquipProc 3: %d", nHightIdx);
			}
		}

		XMsg(L"OnAutoEquipProc 4: %d", nHightIdx);
		if (nHightIdx != NOINDEX)
		{
			if (bEquip)
			{
				XMsg(L"장비 [%s] 을(를) 장착합니다", g_pInvenInfo[nHightIdx].szName);
				//ShowStatus(1, 60201, g_pInvenInfo[nHightIdx].szName);

				EquipItem(nHightIdx);
			}

			return TRUE;
		}
	}

	return FALSE;
}

BOOL IsNeedEnchantItem(int nIndex, int* pScrollOut, int* pEnchantOut)
{
	if (g_pInvenInfo[nIndex].bIsLock)
		return FALSE;

	if (!g_pInvenInfo[nIndex].bEnchant)
		return FALSE;

	if (g_pInvenInfo[nIndex].nCurEnchant >= g_pInvenInfo[nIndex].nMaxEnchant)
		return FALSE;

	// 장비가 아닌경우
	if (g_pInvenInfo[nIndex].nItemType != ItemType_Weapon && g_pInvenInfo[nIndex].nItemType != ItemType_Armor && g_pInvenInfo[nIndex].nItemType != ItemType_Accessory)
		return FALSE;

	// 제작 장비인 경우 강화하자
	BOOL bMust = FALSE;
	int nMustEnchant = 0;

	int nCollectIdx = IsNeedCollectItem(nIndex, TRUE);
	if (nCollectIdx != NOINDEX)
	{
		bMust = TRUE;
		nMustEnchant = g_pItemCollectionInfo[nCollectIdx].nItemEnchant;
	}

	// 세부 설정 체크하자
	int nDetailIndex = GetItemDetailIndex(&g_pInvenInfo[nIndex], ItemMode_Trade);
	if (bMust ||
		g_OtherSetting.bEquipEnchant && g_pInvenInfo[nIndex].bIsEquip && g_pInvenInfo[nIndex].nGrade >= eItemGrade_IG_MAGICAL && g_pInvenInfo[nIndex].nCurEnchant < g_pInvenInfo[nIndex].nSafeEnchant ||
		nDetailIndex != NOINDEX && !g_pInvenInfo[nIndex].bIsEquip && g_pItemDetailInfo[nDetailIndex].bItemEnchant && g_pInvenInfo[nIndex].nCurEnchant < g_pItemDetailInfo[nDetailIndex].nItemEnchant &&
		(g_pItemDetailInfo[nDetailIndex].nMode == ItemMode_None || g_pItemDetailInfo[nDetailIndex].nMode == ItemMode_Trade))
	{
		if (pEnchantOut)
		{
			if (bMust)
				*pEnchantOut = nMustEnchant;
			else if (g_pInvenInfo[nIndex].bIsEquip)
				*pEnchantOut = g_pInvenInfo[nIndex].nSafeEnchant;
			else
				*pEnchantOut = g_pItemDetailInfo[nDetailIndex].nItemEnchant;
		}

		int nScrollIdx = NOINDEX;
		if (g_pInvenInfo[nIndex].nItemType == ItemType_Weapon)
		{
			nScrollIdx = GetInvenIndexByID(ItemID_WeaponScr3);
			if (nScrollIdx == NOINDEX)
			{
				nScrollIdx = GetInvenIndexByID(ItemID_WeaponScr2);
				if (nScrollIdx == NOINDEX && g_OtherSetting.bEnchantScroll[0])
				{
					nScrollIdx = GetInvenIndexByID(ItemID_WeaponScr1);
				}
			}
		}
		else if (g_pInvenInfo[nIndex].nItemType == ItemType_Armor)
		{
			nScrollIdx = GetInvenIndexByID(ItemID_ArmorScr3);
			if (nScrollIdx == NOINDEX)
			{
				nScrollIdx = GetInvenIndexByID(ItemID_ArmorScr2);
				if (nScrollIdx == NOINDEX && g_OtherSetting.bEnchantScroll[1])
				{
					nScrollIdx = GetInvenIndexByID(ItemID_ArmorScr1);
				}
			}
		}
		else if (g_pInvenInfo[nIndex].nItemType == ItemType_Accessory)
		{
			if (g_pInvenInfo[nIndex].dwID == ItemID_EventAcce1 || g_pInvenInfo[nIndex].dwID == ItemID_EventAcce2)
			{
				nScrollIdx = GetInvenIndexByID(ItemID_EventScr);
			}
			else
			{
				nScrollIdx = GetInvenIndexByID(ItemID_AcceScr3);
				if (nScrollIdx == NOINDEX)
				{
					nScrollIdx = GetInvenIndexByID(ItemID_AcceScr2);
					if (nScrollIdx == NOINDEX && g_OtherSetting.bEnchantScroll[2])
					{
						nScrollIdx = GetInvenIndexByID(ItemID_AcceScr1);
					}
				}
			}
		}

		if (nScrollIdx == NOINDEX)
			return FALSE;

		if (pScrollOut)
			*pScrollOut = nScrollIdx;

		return TRUE;
	}

	return FALSE;
}

int GetNeedEnchantIndex(int* pScrollOut, int* pEnchantOut)
{
	for (int i = 0; i < g_nInvenCount; i++)
	{
		if (IsNeedEnchantItem(i, pScrollOut, pEnchantOut))
			return i;
	}

	return NOINDEX;
}


int GetCurHPPotionCount()
{
	InitGlobal(Addr_COption_TypeInfo);

	DWORD64 qwCoption = *(DWORD64*)(*(DWORD64*)(GAMEADDR(Addr_COption_TypeInfo)) + Offset_TypeInfo_Instance);
	if (qwCoption)
	{
		DWORD64 qwCOption_CBattle = qwCoption + Offset_COption_CBattle;
		if (qwCOption_CBattle)
		{
			_callFunc2 funcGetCount = (_callFunc2)GAMEADDR(Addr_COption_CBattle__GetPotionAutoUseTotalCount);
			XMsg("GetCurHPPotionCount: %d", funcGetCount(qwCOption_CBattle, 0));
			return (int)funcGetCount(qwCOption_CBattle, 0);
		}
	}

	return 0;
}

BOOL IsNeedUseItem(int nIndex)
{
	if (g_pInvenInfo[nIndex].nMinLv > g_pCharInfo.nLevel || g_pInvenInfo[nIndex].nMaxLv < g_pCharInfo.nLevel)
		return FALSE;

	if (g_pInvenInfo[nIndex].bIsLock || g_pInvenInfo[nIndex].bIsEquip)
		return FALSE;

	if (g_pInvenInfo[nIndex].nType != eItemType_IT_CONSUMPTION_USE &&
		g_pInvenInfo[nIndex].nType != eItemType_IT_CONSUMPTION_UI)
		return FALSE;

	if (IsItemCoolTime(nIndex))
		return FALSE;

	if (g_pInvenInfo[nIndex].nBelong)
	{
		if (g_pInvenInfo[nIndex].nSubType == eItemSubType_PACKAGE_BOX_SELECT)
		{
			if (g_pInvenInfo[nIndex].dwID == 106161031		// 음식 선택 상자 (귀속)
				)
				return TRUE;

			return FALSE;
		}

		if (g_pInvenInfo[nIndex].dwID == 105101041)		// 물약 상자 (귀속)
		{
			int nCanOpenCount = (g_pCharInfo.nHpPotionLimit - GetCurHPPotionCount()) / 20;
			if (nCanOpenCount <= 0)
				return FALSE;
		}
		if ((g_pInvenInfo[nIndex].dwID == 105111011 || g_pInvenInfo[nIndex].dwID == 105112021) && !g_MakeSetting.bAutoOpenBox)
		{
			// 일반 장비 상자 (귀속), 상급 장비 상자 (귀속) 자동사용하지 말자
		}
		else
		{
			if (g_pInvenInfo[nIndex].nSubType == eItemSubType_SKILL_BOOK && GetSkillIndex(g_pInvenInfo[nIndex].szOrgName) == NOINDEX
				|| g_pInvenInfo[nIndex].nSubType == eItemSubType_PACKAGE_BOX_RANDOM
				|| g_pInvenInfo[nIndex].nSubType == eItemSubType_PACKAGE_BOX_FIXED
				|| g_pInvenInfo[nIndex].nSubType == eItemSubType_CARD_PET_RANDOM
				|| g_pInvenInfo[nIndex].nSubType == eItemSubType_CARD_PET_DECIDE
				|| g_pInvenInfo[nIndex].nSubType == eItemSubType_CARD_COSTUME_RANDOM
				|| g_pInvenInfo[nIndex].nSubType == eItemSubType_CARD_COSTUME_DECIDE
				|| g_pInvenInfo[nIndex].nSubType == eItemSubType_CARD_MONSTER_RANDOM
				|| g_pInvenInfo[nIndex].nSubType == eItemSubType_CARD_MONSTER_DECIDE
				)
				return TRUE;
		}
	}


	int nDetailIndex = GetItemDetailIndex(&g_pInvenInfo[nIndex], ItemMode_Use);
	if (nDetailIndex != NOINDEX)
	{		
		if (g_pItemDetailInfo[nDetailIndex].nMode == ItemMode_Use)
			return TRUE;
	}
	else if (g_pInvenInfo[nIndex].nGrade >= eItemGrade_IG_NORMAL && g_pInvenInfo[nIndex].nGrade <= eItemGrade_IG_MYTHICAL)
	{
		if (g_pInvenInfo[nIndex].nItemType != ItemType_None)
		{			
			if (g_pItemDefault[g_pInvenInfo[nIndex].nGrade - 1][g_pInvenInfo[nIndex].nItemType] == ItemMode_Use)
				return TRUE;
		}
	}

	return FALSE;
}

BOOL IsNeedDissolveItem(int nIndex)
{	// 설정이 안되있으면 무시
	if (!g_OtherSetting.bDissolveItem)
		return FALSE;

	if (g_pInvenInfo[nIndex].bIsLock || g_pInvenInfo[nIndex].bIsEquip)
		return FALSE;

	if (!g_pInvenInfo[nIndex].bDissolve)
		return FALSE;

	if (g_pInvenInfo[nIndex].nItemType != ItemType_Weapon && g_pInvenInfo[nIndex].nItemType != ItemType_Armor && g_pInvenInfo[nIndex].nItemType != ItemType_Accessory)
		return FALSE;


	// 장비등급
	if (!g_OtherSetting.bDissolveGrade[0] && g_pInvenInfo[nIndex].nGrade == eItemGrade_IG_NORMAL)
		return FALSE;

	if (!g_OtherSetting.bDissolveGrade[1] && g_pInvenInfo[nIndex].nGrade == eItemGrade_IG_MAGICAL)
		return FALSE;

	if (!g_OtherSetting.bDissolveGrade[2] && g_pInvenInfo[nIndex].nGrade == eItemGrade_IG_RARE)
		return FALSE;

	if (!g_OtherSetting.bDissolveGrade[3] && g_pInvenInfo[nIndex].nGrade == eItemGrade_IG_EPIC)
		return FALSE;

	if (g_pInvenInfo[nIndex].nGrade >= eItemGrade_IG_LEGENDARY)
		return FALSE;


	// 강화 장비
	if (!g_OtherSetting.bDissolveEnchant && g_pInvenInfo[nIndex].nCurEnchant > 0)
		return FALSE;

	// 귀속 아이템
	if (!g_OtherSetting.bDissolveBelong && g_pInvenInfo[nIndex].nBelong)
		return FALSE;

	// 비귀속 아이템
	if (!g_OtherSetting.bDissolveNotBelong && !g_pInvenInfo[nIndex].nBelong)
		return FALSE;


	// 귀속템은 내꺼 우선
	if (g_pInvenInfo[nIndex].nBelong)
		return TRUE;
	else
	{
		// 비귀속이지만 거래소가 열리지 않았으면 희귀미만 템은 처리하자
		if (g_pCharInfo.nLevel < 60)
		{
			if (g_pInvenInfo[nIndex].nGrade < eItemGrade_IG_RARE)
				return TRUE;
		}
	}


	int nDetailIndex = GetItemDetailIndex(&g_pInvenInfo[nIndex], ItemMode_Decompose);
	if (nDetailIndex != NOINDEX)
	{
		if (g_pItemDetailInfo[nDetailIndex].nMode == ItemMode_Decompose ||
			g_pItemDetailInfo[nDetailIndex].nMode == ItemMode_Delete)
			return TRUE;

		if (g_pItemDetailInfo[nDetailIndex].nMode == ItemMode_Trade)
		{
			if (g_OtherSetting.bTradeDissolve)
			{
				int nMarketMapIdx = GetMarketMapIndex(g_pInvenInfo[nIndex].szOrgName, g_pInvenInfo[nIndex].nCurEnchant);
				if (nMarketMapIdx != NOINDEX && g_pMarketMap[nMarketMapIdx].fPerPrice <= g_OtherSetting.nTradeDissolve * 1.0f)
					return TRUE;
			}
		}
	}
	else if (g_pInvenInfo[nIndex].nGrade >= eItemGrade_IG_NORMAL && g_pInvenInfo[nIndex].nGrade <= eItemGrade_IG_MYTHICAL)
	{
		if (g_pItemDefault[g_pInvenInfo[nIndex].nGrade - 1][g_pInvenInfo[nIndex].nItemType] == ItemMode_Decompose ||
			g_pItemDefault[g_pInvenInfo[nIndex].nGrade - 1][g_pInvenInfo[nIndex].nItemType] == ItemMode_Delete)
			return TRUE;

		if (g_pItemDefault[g_pInvenInfo[nIndex].nGrade - 1][g_pInvenInfo[nIndex].nItemType] == ItemMode_Trade)
		{
			if (g_OtherSetting.bTradeDissolve)
			{
				int nMarketMapIdx = GetMarketMapIndex(g_pInvenInfo[nIndex].szOrgName, g_pInvenInfo[nIndex].nCurEnchant);
				if (nMarketMapIdx != NOINDEX && g_pMarketMap[nMarketMapIdx].fPerPrice <= g_OtherSetting.nTradeDissolve * 1.0f)
					return TRUE;
			}
		}
	}
	
	return FALSE;
}

BOOL IsNeedDeleteItem(int nIndex)
{	if (g_pInvenInfo[nIndex].bIsLock || g_pInvenInfo[nIndex].bIsEquip)
		return FALSE;

	if (!g_pInvenInfo[nIndex].bDelete)
		return FALSE;

	int nDetailIndex = GetItemDetailIndex(&g_pInvenInfo[nIndex], ItemMode_Delete);
	if (nDetailIndex != NOINDEX)
	{
		if (g_pItemDetailInfo[nDetailIndex].nMode == ItemMode_Delete)
			return TRUE;
	}
	else if (g_pInvenInfo[nIndex].nGrade > eItemGrade_IG_NORMAL && g_pInvenInfo[nIndex].nGrade < eItemGrade_IG_MYTHICAL)
	{
		if (g_pInvenInfo[nIndex].nItemType != ItemType_None)
		{
			if (g_pItemDefault[g_pInvenInfo[nIndex].nGrade - 1][g_pInvenInfo[nIndex].nItemType] == ItemMode_Delete)
				return TRUE;
		}
	}
	
	return FALSE;
}

void DeleteItem(int nIndex)
{
	if (nIndex < 0 || nIndex >= g_nInvenCount)
		return;

	InitGlobal(Addr_CNetHandler);

	_callFunc1 funcGetInst = (_callFunc1)GAMEADDR(Addr_MonoSingleton_object___get_s_Instance);
	DWORD64 qwCNetHandler = funcGetInst(*(DWORD64*)(GAMEADDR(Addr_CNetHandler)));
	if (!qwCNetHandler)
		return;

	_callFunc3 funcDelete = (_callFunc3)GAMEADDR(Addr_CNetHandler__OnC2S_DeleteItem);
	funcDelete(qwCNetHandler, g_pInvenInfo[nIndex].qwItemUID, g_pInvenInfo[nIndex].nCount);
}

int GetQuickSlotItemIndexByID(DWORD dwID)
{
	for (int i = 0; i < MAX_QUICKSLOT; i++)
	{
		if (g_pQuickSlotInfo[i].nRegType != 1)
			continue;

		if (g_pQuickSlotInfo[i].dwRegID == dwID)
			return i;
	}

	return NOINDEX;
}

int GetEmptyQuickSlotIndex()
{
	for (int i = 0; i < MAX_QUICKSLOT; i++)
	{
		if (g_pQuickSlotInfo[i].nRegType == 0 ||
			g_pQuickSlotInfo[i].nRegType == 1 && g_pQuickSlotInfo[i].qwItemUID == 0)
			return i;
	}

	return NOINDEX;
}

void AddItemToQuickSlot(int nIndex, DWORD dwItemID, DWORD64 qwItemUID)
{
	if (nIndex < 0 || nIndex >= MAX_QUICKSLOT)
		return;

	InitGlobal(Addr_CNetHandler);

	_callFunc1 funcGetInst = (_callFunc1)GAMEADDR(Addr_MonoSingleton_object___get_s_Instance);
	DWORD64 qwCNetHandler = funcGetInst(*(DWORD64*)(GAMEADDR(Addr_CNetHandler)));
	if (!qwCNetHandler)
		return;

	_callFunc5 funcSetSlot = (_callFunc5)GAMEADDR(Addr_CNetHandler__OnC2S_UpdateQuickSlot);
	funcSetSlot(qwCNetHandler, g_pQuickSlotInfo[nIndex].nIndex, 1, dwItemID, qwItemUID);	// ST_ITEM
}

void OnGameInvenProc()
{
	int nVisbleWindowUID = (int)GetVisibleWindowUID();

	if (g_nStepStatus == 100)
	{
		if (nVisbleWindowUID == UI_UID_Inventory)
		{
			XMsg(L"[%s] Close", __FUNCTION__);

			CloseAllActivePopup();

			SetDelay(20);
			return;
		}

		SetStatus(g_nTarStatus);
		return;
	}

	// 자동 장착
	if (OnAutoEquipProc(TRUE))
	{
		SetDelay(10);
		return;
	}

	// 컬렉션
	int nInvenIdx = NOINDEX;
	if (GetCollectItemIndex(&nInvenIdx) != NOINDEX)
	{
		XMsg(L"아이템 컬렉션 등록을 진행합니다");
		ShowStatus(0, 60263);

		SetStatus(Status_ItemCollection);
		return;
	}
		// 장비 강화
	int nScrollIdx;
	int nEnchant;
	if (GetNeedEnchantIndex(&nScrollIdx, &nEnchant) != NOINDEX)
	{
		XMsg(L"장비 강화를 진행합니다");
		ShowStatus(0, 60379);

		SetStatus(Status_EnchantItem);
		return;
	}

	// 사용
	for (int i = 0; i < g_nInvenCount; i++)
	{
		if (IsNeedUseItem(i))
		{
			UseItem(i);
			SetDelay(20);
			return;
		}
	}

	// 분해
	for (int i = 0; i < g_nInvenCount; i++)
	{
		if (IsNeedDissolveItem(i))
		{
			SetStatus(Status_DissolveItem);
			return;
		}
	}

	// 삭제
	for (int i = 0; i < g_nInvenCount; i++)
	{
		if (IsNeedDeleteItem(i))
		{
			DeleteItem(i);
			SetDelay(20);
			return;
		}
	}

	// 퀵슬롯
	for (int i = 0; i < MAX_QUICKSLOTRES; i++)
	{
		if (g_pQuickSlotRes[i].nClassType != ePlayerClass_PC_COMMON && g_pQuickSlotRes[i].nClassType != g_pCharInfo.nClassType)
			continue;

		int nSlotIdx = GetQuickSlotItemIndexByID(g_pQuickSlotRes[i].dwID);
		if (nSlotIdx == NOINDEX)
		{
			int nInvenIdx = GetInvenIndexByID(g_pQuickSlotRes[i].dwID);
			if (nInvenIdx == NOINDEX)
				continue;

			int nEmptySlot = GetEmptyQuickSlotIndex();
			if (nEmptySlot != NOINDEX)
			{
				XMsg(L"아이템 \"%s\"을(를) 퀵슬롯 (%d)번에 등록합니다", g_pInvenInfo[nInvenIdx].szName, nEmptySlot + 1);
				ShowStatus(3, 60200, g_pInvenInfo[nInvenIdx].szName, nEmptySlot + 1);

				AddItemToQuickSlot(nEmptySlot, g_pInvenInfo[nInvenIdx].dwID, g_pInvenInfo[nInvenIdx].qwItemUID);

				SetDelay(20);
				return;
			}
		}
	}

	g_nStepStatus = 100;
}

void GetObjectInfo(DWORD64 qwDictionary, int nObjectKind)
{
	if (!qwDictionary)
		return;

	DWORD64 qwDicDetail = *(DWORD64*)(qwDictionary + Offset_Dic_Detail);

	XMsg("qwDicDetail: %lld", qwDicDetail);

	if (!qwDicDetail)
		return;

	int nCount = *(DWORD*)(qwDicDetail + Offset_DicListCnt);

	XMsg("nCount: %d", nCount);

	for (int i = 0; i < nCount; i++)
	{
		DWORD64 qwID = *(DWORD64*)(qwDicDetail + Offset_DicDetail_ListStart + i * Offset_DicDetail_ListSize);
		DWORD64 qwActor = *(DWORD64*)(qwDicDetail + Offset_DicDetail_ListStart + i * Offset_DicDetail_ListSize + 8);

		if (!qwActor || qwActor == g_pCharInfo.qwAddr)
			continue;

		if (g_nObjectCount < MAX_OBJECT)
		{
			memset(&g_pObjectInfo[g_nObjectCount], 0, sizeof(ObjectInfo));

			_callFunc1 funcIsDead = (_callFunc1)GAMEADDR(Addr_CObjectBase__get_IsDead);
			bool bIsDead = (WCHAR)funcIsDead(qwActor);

			//if (bIsDead)
			//	continue;

			// Add debug output for function addresses


			g_pObjectInfo[g_nObjectCount].qwAddr = qwActor;
			g_pObjectInfo[g_nObjectCount].qwID = qwID;
			g_pObjectInfo[g_nObjectCount].nKind = nObjectKind;

			_callFunc1 funcGetName = (_callFunc1)GAMEADDR(Addr_CObjectBase__GetName);

			DWORD64 qcharName = funcGetName(qwActor);

			if (qcharName)
				ConvertString(qcharName, g_pObjectInfo[g_nObjectCount].szName);

			if (nObjectKind == ObjectKind_Player)
			{
				_callFunc1 funcGetNetworkPlayerData = (_callFunc1)GAMEADDR(Addr_CActorPlayer__get_NetworkPlayerData);
				DWORD64 qwPlayerData = funcGetNetworkPlayerData(qwActor);

				if (qwPlayerData)
				{
					_callFunc1 funcGetChaoExpiredTime = (_callFunc1)GAMEADDR(Addr_Protocol_PlayerData__get_ChaoExpiredTime);
					DWORD64 qwChaoExpiredTime = funcGetChaoExpiredTime(qwPlayerData);
					if (qwChaoExpiredTime != 0)
						g_pObjectInfo[g_nObjectCount].bIsChaotic = true;
				}

				_callFunc1 funcGetGuildID = (_callFunc1)GAMEADDR(Addr_CActorPlayer__get_GuildID);
				DWORD64 qwGuildID = funcGetGuildID(qwActor);
				//g_pObjectInfo[g_nObjectCount].szGuild;
			}
			else if (nObjectKind == ObjectKind_Monster)
			{
				_callFunc1 pfnGetType = (_callFunc1)GAMEADDR(Addr_CActorMonster__get_MonsterType);
				g_pObjectInfo[g_nObjectCount].nGrade = (int)pfnGetType(qwActor);
			}

			_callFunc1Vec funcGetCurPos = (_callFunc1Vec)GAMEADDR(Addr_CObjectBase__get_CurrentPos);
			g_pObjectInfo[g_nObjectCount].vPos = funcGetCurPos(qwActor);

			g_nObjectCount++;
		}
	}
}


void UpdateObjectInfo(BOOL bLog)
{
	g_nObjectCount = 0;

	InitGlobal(Addr_CGameManager);

	_callFunc1 funcGetInstance = (_callFunc1)GAMEADDR(Addr_MonoSingleton_object___get_s_Instance);

	DWORD64 qwCGameManager = funcGetInstance(*(DWORD64*)(GAMEADDR(Addr_CGameManager)));

	if (!qwCGameManager)
		return;

	DWORD64 qwDicActor = *(DWORD64*)(qwCGameManager + Offset_CGameManager_Dic_CActorPlayer);

	if (qwDicActor) {

		GetObjectInfo(qwDicActor, ObjectKind_Player);
	}

	qwDicActor = *(DWORD64*)(qwCGameManager + Offset_CGameManager_Dic_CActorMonster);

	if (qwDicActor) {

		GetObjectInfo(qwDicActor, ObjectKind_Monster);
	}

	qwDicActor = *(DWORD64*)(qwCGameManager + Offset_CGameManager_Dic_CActorNPC);

	if (qwDicActor) {

		GetObjectInfo(qwDicActor, ObjectKind_Npc);
	}

	if (bLog)
	{
		XMsg("==================== Object Info ====================");
		for (int i = 0; i < g_nObjectCount; i++)
		{
			XMsg("%s, Pos: (%.1f, %.1f, %.1f), Kind: %d, Grade: %d, Addr: %p, ID: %p",
				g_pObjectInfo[i].szName,
				g_pObjectInfo[i].vPos.X, g_pObjectInfo[i].vPos.Y, g_pObjectInfo[i].vPos.Z,
				g_pObjectInfo[i].nKind,
				g_pObjectInfo[i].nGrade,
				g_pObjectInfo[i].qwAddr,
				g_pObjectInfo[i].qwID);
		}
	}

	XMsg("==================== Object Info ====================");
}

void OnGameCostume()
{
	int nVisbleWindowUID = (int)GetVisibleWindowUID();

	if (g_nStepStatus == 100)
	{
		if (nVisbleWindowUID == UI_UID_CostumeWindow)
		{
			CloseAllActivePopup();

			SetDelay(20);
			return;
		}

		g_bRefreshCostume = TRUE;

		ShowStatus(0, 60180);

		SetStatus(Status_DoAuto);
		return;
	}

	if (nVisbleWindowUID != UI_UID_CostumeWindow)
	{
		MenuButtonClick(L"Btn_Costume");

		SetDelay(20);
		return;
	}

	DWORD64 qwCUICostumeWindow = GetWindowByUI_UID(UI_UID_CostumeWindow);

	if (!qwCUICostumeWindow)
	{
		return;
	}

	UpdateCostumeInfo(qwCUICostumeWindow);

	_callFunc1 funcGetCostumeview = (_callFunc1)GAMEADDR(Addr_CUICostumeWindow__GetCostumeview);
	DWORD64 qwCUICostumeView = funcGetCostumeview(qwCUICostumeWindow);
	if (!qwCUICostumeView)
	{
		return;
	}

	_callFunc1 funcGetUICostume = (_callFunc1)GAMEADDR(Addr_CUICostumeView__get_GetUICostume);
	DWORD64 qwUICostume = funcGetUICostume(qwCUICostumeView);
	if (!qwUICostume)
	{
		return;
	}

	_callFunc1 funcGetSynthesis = (_callFunc1)GAMEADDR(Addr_CUICostumeWindow__GetCostumeSynthesisView);
	DWORD64 qwCUICostumeSynthesisView = funcGetSynthesis(qwCUICostumeWindow);
	if (!qwCUICostumeSynthesisView)
	{
		return;
	}

	// 합성할거 있으면 처리하자
	_callFunc1 funcCanSynthesis = (_callFunc1)GAMEADDR(Addr_CUICostumeSynthesisView__get_m_blPossibleSynthesis);
	if (IsExistCombineCostume() || (IsSelectToggle(*(DWORD64*)(qwCUICostumeWindow + Offset_CUICostumeWindow_ToggleTabList), 1) && funcCanSynthesis(qwCUICostumeSynthesisView)))
	{
		if (!SelectToggle(*(DWORD64*)(qwCUICostumeWindow + Offset_CUICostumeWindow_ToggleTabList), 1))
		{
			SetDelay(20);
			return;
		}

		// 등급 All 선택
		if (!SelectToggle(*(DWORD64*)(qwCUICostumeSynthesisView + Offset_CUICostumeSynthesisView_ToggleGradeTab), 0))
		{
			SetDelay(20);
			return;
		}

		// 합성 버튼이 활성화 되어있으면
		_callFunc1 funcIsDiable = (_callFunc1)GAMEADDR(Addr_UIButton__get_Disabled);
		DWORD64 qwSynthesisBtn = *(DWORD64*)(qwCUICostumeSynthesisView + Offset_CUICostumeSynthesisView_SynthesisButton);
		if (qwSynthesisBtn && !funcIsDiable(qwSynthesisBtn))
		{
			_callFunc1 funcSendSynthesis = (_callFunc1)GAMEADDR(Addr_CUICostumeSynthesisView__SendSynthesis);
			funcSendSynthesis(qwCUICostumeSynthesisView);

			SetDelay(20);
			return;
		}

		// 자동 등록 가능하면
		DWORD64 qwAutoRegisterBtn = *(DWORD64*)(qwCUICostumeSynthesisView + Offset_CUICostumeSynthesisView_AutoRegisterButton);
		if (qwSynthesisBtn && !funcIsDiable(qwAutoRegisterBtn))
		{
			_callFunc1 funcAutoRegist = (_callFunc1)GAMEADDR(Addr_CUICostumeSynthesisView__AutoRegist);
			funcAutoRegist(qwCUICostumeSynthesisView);

			SetDelay(20);
			return;
		}
	}

	// 좋은 코스튬 장착
	int nBestIndex = GetBestCostumeIndex();

	if (nBestIndex != NOINDEX)
	{
		// 첫번째 탭 선택하자
		if (!SelectToggle(*(DWORD64*)(qwCUICostumeWindow + Offset_CUICostumeWindow_ToggleTabList), 0))
		{
			SetDelay(20);
			return;
		}

		// 제일 좋은 코스튬 선택
		_callFunc1 funcGetSelectID = (_callFunc1)GAMEADDR(Addr_CUICostume__get_SelectCostumeIndex);

		if (funcGetSelectID(qwUICostume) != g_pCostumeInfo[nBestIndex].dwID)
		{
			_callFunc3 funcSelectID = (_callFunc3)GAMEADDR(Addr_CUICostume__SlotSelected);
			funcSelectID(qwUICostume, g_pCostumeInfo[nBestIndex].dwID, 1);
		}
		// 선택된 코스튬 장착
		else
		{
			_CallFunc1 funcIsDiable = (_CallFunc1)GAMEADDR(Addr_UIButton__get_Disabled);
			DWORD64 qwEquipBtn = *(DWORD64*)(qwUICostume + Offset_CUICostume_EquipButton);
			DWORD64 qwShapeChangeBtn = *(DWORD64*)(qwUICostume + Offset_CUICostume_ShapeChangeButton);
			// 선택된 코스튬의 장착단추가 활성화된 경우
			if (qwEquipBtn && !funcIsDiable(qwEquipBtn))
			{
				XMsg("[%s] Select Equip Costume", __FUNCTION__);
				//_CallFunc1 funcEquip = (_CallFunc1)GAMEADDR(Addr_CUICostume__C2SCostumeEquip);
				//funcEquip(qwUICostume);

				ClickButton(qwEquipBtn);
			}
			// 선택된 코스튬의 외형적용단추가 활성화된 경우
			else
			{
				XMsg("[%s] Select ChangeShape Costume", __FUNCTION__);
				//_CallFunc1 funcChangeShape = (_CallFunc1)GAMEADDR(Addr_CUICostume__C2SCostumeChangeShape);
				//funcChangeShape(qwUICostume);

				ClickButton(qwShapeChangeBtn);
			}
		}

		SetDelay(20);
		return;
	}

	g_nStepStatus = 100;
}


void UpdateCostumeInfo(DWORD64 qwCUICostumeWindow)
{
	g_nCostumeCount = 0;

	DWORD64 qwCostumeInfoList = *(DWORD64*)(qwCUICostumeWindow + Offset_CUICostumeWindow_ListCostume);

	if (!qwCostumeInfoList) {
		return;
	}

	_callFunc1 funcGetCostumeData = (_callFunc1)GAMEADDR(Addr_CGameTable__get_CostumeData);
	DWORD64 qwCostumeGameTable = funcGetCostumeData(0);

	if (!qwCostumeGameTable) {
		return;

	}

	_callFunc1 funcGetCount = (_callFunc1)GAMEADDR(Addr_System_Collections_Generic_List_object___get_Count);
	_callFunc3Struct funcGetCGameTable_SCostume = (_callFunc3Struct) * (DWORD64*)(*(DWORD64*)qwCostumeGameTable + Offset_GetItemDesc);

	int nCount = (int)funcGetCount(qwCostumeInfoList);

	for (int i = 0; i < nCount; i++)
	{
		_callFunc2 funcGetItem = (_callFunc2)GAMEADDR(Addr_Collections_Generic_List_object___get_Item);

		DWORD64 qwCostumeInfo = funcGetItem(qwCostumeInfoList, i);

		if (!qwCostumeInfo)
			continue;

		_callFunc1 funcGetID = (_callFunc1)GAMEADDR(Addr_Protocol_CostumeInfo__get_CostumeIndex);
		DWORD dwCostumeID = (DWORD)funcGetID(qwCostumeInfo);

		_callFunc1 funcGetCount = (_callFunc1)GAMEADDR(Addr_Protocol_CostumeInfo__get_Count);
		int nCount = (int)funcGetCount(qwCostumeInfo);

		RET_STRUCT qwSCostume = funcGetCGameTable_SCostume(qwCostumeGameTable, dwCostumeID,				// CGameTable.SCostume
			*(DWORD64*)(*(DWORD64*)qwCostumeGameTable + Offset_GetItemDesc + 8));
		//if (!qwSCostume)
		//	continue;

		int nPlayerClass = *(int*)((DWORD64)&qwSCostume.qwData1 + Offset_SCostume_PlayerClass);
		int nOrder = *(int*)((DWORD64)&qwSCostume.qwData1 + Offset_SCostume_Order);
		int nGrade = *(int*)((DWORD64)&qwSCostume.qwData1 + Offset_SCostume_Grade);

		DWORD64 qwName = *(DWORD64*)((DWORD64)&qwSCostume.qwData1 + Offset_SCostume_Name);

		if (qwName && g_nCostumeCount < MAX_COSTUME)
		{
			memset(&g_pCostumeInfo[g_nCostumeCount], 0, sizeof(CostumeInfo));

			ConvertString(qwName, g_pCostumeInfo[g_nCostumeCount].szName);
			g_pCostumeInfo[g_nCostumeCount].dwID = dwCostumeID;
			g_pCostumeInfo[g_nCostumeCount].nCount = nCount;
			g_pCostumeInfo[g_nCostumeCount].nClass = (ePlayerClass)nPlayerClass;
			g_pCostumeInfo[g_nCostumeCount].nOrder = nOrder;						// 좋을수록 숫자가 낮음
			g_pCostumeInfo[g_nCostumeCount].nGrade = nGrade;

			g_nCostumeCount++;
		}
	}

	// 	for (int i = 0; i < g_nCostumeCount; i++)
	// 	{
	// 		XMsg("No: %d, %s, ID: %08X, Count: %d, Grade: %d, Order: %d, Class: %d",
	// 			i + 1, g_pCostumeInfo[i].szName, g_pCostumeInfo[i].dwID, g_pCostumeInfo[i].nCount, g_pCostumeInfo[i].nGrade, g_pCostumeInfo[i].nOrder, g_pCostumeInfo[i].nClass);
	// 	}
}

BOOL IsExistCombineCostume()
{
	if (!g_OtherSetting.bAutoCombineCostume)
		return FALSE;

	int nCount[10] = { 0, };

	for (int i = 0; i < g_nCostumeCount; i++)
	{
		nCount[g_pCostumeInfo[i].nGrade % 10] += g_pCostumeInfo[i].nCount;
		if (nCount[g_pCostumeInfo[i].nGrade % 10] >= 3)
			return TRUE;
	}

	return FALSE;
}

BOOL IsSelectToggle(DWORD64 qwUIToggleList, int nIndex)
{
	if (qwUIToggleList)
	{
		int nCount = *(int*)(qwUIToggleList + Offset_Array_Count);
		if (nIndex >= 0 && nIndex < nCount)
		{
			DWORD64 qwUIToggle = *(DWORD64*)(qwUIToggleList + 8 * nIndex + 0x20);
			if (qwUIToggle)
			{
				_callFunc1 funcIsOn = (_callFunc1)GAMEADDR(Addr_UnityEngine_UI_Toggle__get_isOn);
				return (BOOL)funcIsOn(qwUIToggle);
			}
		}
	}

	return FALSE;
}

int GetBestCostumeIndex()
{
	int nIndex = NOINDEX;

	int nGrade = -1;
	int nOrder = 9999;

	for (int i = 0; i < g_nCostumeCount; i++)
	{
		if (g_pCostumeInfo[i].nClass != ePlayerClass_PC_COMMON && g_pCostumeInfo[i].nClass != g_pCharInfo.nClassType)
			continue;

		if (g_pCostumeInfo[i].nGrade > nGrade ||
			g_pCostumeInfo[i].nGrade == nGrade && g_pCostumeInfo[i].nOrder < nOrder)
		{
			nIndex = i;

			nGrade = g_pCostumeInfo[i].nGrade;
			nOrder = g_pCostumeInfo[i].nOrder;
		}
	}

	if (nIndex != NOINDEX && g_pCostumeInfo[nIndex].dwID != g_pCharInfo.dwCostumeID)
		return nIndex;

	return NOINDEX;
}

void UpdateWarehouseInfo(BOOL bLog)
{
	g_nWarehouseCount = 0;

	//_CallFunc1 funcGetWarehouseInfo = (_CallFunc1)GAMEADDR(Addr_CNetData__get_Warehouse);
	_CallFunc1 funcGetWarehouseInfo = (_CallFunc1)GAMEADDR(Addr_CNetData__get_Warehouse);
	DWORD64 qwInvenInfo = funcGetWarehouseInfo(0);
	if (!qwInvenInfo)
		return;

	g_nWarehouseMaxCount = *(int*)(qwInvenInfo + Offset_CInventory_GetMaxCount);

	DWORD64 qwItemList = *(DWORD64*)(qwInvenInfo + Offset_CInventory_GetListItem);
	if (!qwItemList)
		return;

	InitGlobal(Addr_ItemData_EnuermateMethod);

	_CallFunc2 getEnumerate = (_CallFunc2)GAMEADDR(Addr_ObjectModel_Collection_object___GetEnumerator);
	DWORD64 qwItemDataEnumerate = getEnumerate(qwItemList, *(DWORD64*)GAMEADDR(Addr_ItemData_EnuermateMethod));
	if (!qwItemDataEnumerate)
		return;

	int nEnumerateCount = *(int*)(*(DWORD64*)(qwItemDataEnumerate + Offset_EnumerateInfo) + Offset_EnumerateInfoCount);
	for (int i = 0; i < nEnumerateCount; i++)
	{
		DWORD64 qwItemAddr = *(DWORD64*)(*(DWORD64*)(*(DWORD64*)(qwItemDataEnumerate + Offset_EnumerateInfo) + Offset_EnumerateInfoCount - 8) + 8 * i + Offset_EnumerateInstance);
		if (!qwItemAddr)
			continue;

		ItemInfo itemInfo = GetItemInfo(qwItemAddr);
		if (g_nWarehouseCount < MAX_WAREHOUSE)
			g_pWarehouseInfo[g_nWarehouseCount++] = itemInfo;
	}

	if (bLog)
	{
		for (int i = 0; i < g_nWarehouseCount; i++)
		{
#ifdef _TEST_UPDATE_WAREHOUSE_INFO
			XMsg(L"No: %d, %s, ID: %d, UID: %p, Category: %d, Kind: %d, Count: %d, Class: %d, Slot: %d, Enchant: (Cur %d, Safe %d, Max %d), Belong: %d, Grade: %d, Flag: (Trade %d, Store %d, Dissolve %d, Delete %d, Enchant %d, Equip %d, Lock %d, Sell: %d)",
				i + 1,
				g_pWarehouseInfo[i].szName,
				g_pWarehouseInfo[i].dwID,
				g_pWarehouseInfo[i].qwItemUID,
				g_pWarehouseInfo[i].nType,
				g_pWarehouseInfo[i].nSubType,
				g_pWarehouseInfo[i].nCount,
				g_pWarehouseInfo[i].nEquipClass,
				g_pWarehouseInfo[i].nEquipSlot,
				g_pWarehouseInfo[i].nCurEnchant,
				g_pWarehouseInfo[i].nSafeEnchant,
				g_pWarehouseInfo[i].nMaxEnchant,
				g_pWarehouseInfo[i].nBelong,
				g_pWarehouseInfo[i].nGrade,
				g_pWarehouseInfo[i].bTrade,
				g_pWarehouseInfo[i].bWarehouse,
				g_pWarehouseInfo[i].bDissolve,
				g_pWarehouseInfo[i].bDelete,
				g_pWarehouseInfo[i].bEnchant,
				g_pWarehouseInfo[i].bIsEquip,
				g_pWarehouseInfo[i].bIsLock,
				g_pWarehouseInfo[i].bSell);
#endif
		}
	}
}

BOOL OnRewardSmallPopup()
{
	if (GetVisibleWindowUID() == UI_UID_RewardSmallPopup)
	{
		DWORD64 qwCUIRewardSmallPopup = GetWindowByUI_UID(UI_UID_RewardSmallPopup);
		if (qwCUIRewardSmallPopup)
		{
			_CallFunc1 funcClose = (_CallFunc1)GAMEADDR(Addr_CUIWindow__Close);
			funcClose(qwCUIRewardSmallPopup);

			SetDelay(20);
			return TRUE;
		}
	}

	return FALSE;
}


BOOL IsVisibleUI(UI_UID nUID)
{
	DWORD64 qwUIManager = GetUIManager();
	if (qwUIManager)
	{
		_CallFunc2 funcIsVisible = (_CallFunc2)GAMEADDR(Addr_CUIManager__IsVisible);
		return (BOOL)funcIsVisible(qwUIManager, nUID);
	}

	return FALSE;
}

BOOL OnTutorial()
{
	if (IsVisibleUI(UI_UID_GuideWindow))
	{
		DWORD64 qwCUIQuestGuide = GetWindowByUI_UID(UI_UID_GuideWindow);
		if (qwCUIQuestGuide)
		{
			XMsg(L"[%hs] Skip", __FUNCTION__);

			_CallFunc1 funcSkip = (_CallFunc1)GAMEADDR(Addr_CUIQuestGuide__EndGuideQuest);
			funcSkip(qwCUIQuestGuide);

			SetDelay(20);
			return TRUE;
		}
	}

	return FALSE;
}

BOOL IsRedDot(int nRedDotType)		// UIRedDot.ERedDotType
{
	_CallFunc1 funcIsRedDot = (_CallFunc1)GAMEADDR(Addr_UIRedDot__IsRedDot);
	return (BOOL)funcIsRedDot(nRedDotType);
}

void ClickButton(DWORD64 qwUIButton)
{
	if (qwUIButton)
	{
		_callFunc1 funcOnSubmit = (_callFunc1)GAMEADDR(Addr_UnityEngine_UI_Button__OnSubmit);
		funcOnSubmit(qwUIButton);
	}
}

void OnGameMail()
{
	int nVisbleWindowUID = (int)GetVisibleWindowUID();

	if (g_nStepStatus == 100)
	{
		if (nVisbleWindowUID == UI_UID_PostWindow)
		{
			CloseAllActivePopup();

			SetDelay(20);
			return;
		}

		ShowStatus(0, 60246);

		SetStatus(Status_DoAuto);
		return;
	}

	if (nVisbleWindowUID != UI_UID_PostWindow)
	{
		MenuButtonClick(L"Btn_Mail");

		SetDelay(20);
		return;
	}

	DWORD64 qwCUIPostWindow = GetWindowByUI_UID((UI_UID)nVisbleWindowUID);
	if (!qwCUIPostWindow)
	{
		return;
	}

	int nCurPostCount = *(int*)(qwCUIPostWindow + Offset_CUIPostWindow_CurPostCount);

	_CallFunc1 funcIsDiable = (_CallFunc1)GAMEADDR(Addr_UIButton__get_Disabled);
	DWORD64 qwAllReceiveBtn = *(DWORD64*)(qwCUIPostWindow + Offset_CUIPostWindow_btnAllReceive);

	if (qwAllReceiveBtn && !funcIsDiable(qwAllReceiveBtn))
	{
		ClickButton(qwAllReceiveBtn);

		SetDelay(20);
		return;
	}

	if (IsRedDot(eRedDotType_Btn_Post_Character))
	{
		SelectToggle(DWORD64V(qwCUIPostWindow + Offset_CUIGroupWindow_ToggleArray), 1);

		SetDelay(20);
		return;
	}

	if (IsRedDot(eRedDotType_Btn_Post_Account))
	{
		SelectToggle(DWORD64V(qwCUIPostWindow + Offset_CUIGroupWindow_ToggleArray), 0);

		SetDelay(20);
		return;
	}

	g_nStepStatus = 100;
}


BOOL OnRevivalAskPopup()
{
	if (GetVisibleWindowUID() == UI_UID_RevivalAskPopup)
	{
		DWORD64 qwCUIRevivalAskPopup = GetWindowByUI_UID(UI_UID_RevivalAskPopup);
		if (qwCUIRevivalAskPopup)
		{
			_CallFunc1 funcIsDiable = (_CallFunc1)GAMEADDR(Addr_UIButton__get_Disabled);
			DWORD64 qwOKBtn = *(DWORD64*)(qwCUIRevivalAskPopup + Offset_CUIRevivalAskPopup_btnRestore);

			if (qwOKBtn && !funcIsDiable(qwOKBtn))
			{
				ClickButton(qwOKBtn);
			}
// 			else
// 			{
// 				XMsg("[%s] Close", __FUNCTION__);
// 
// 				_CallFunc1 funcClose = (_CallFunc1)PATCHADDR(Addr_CUIWindow__Close);
// 				funcClose(qwCUIRevivalAskPopup);
// 			}

			SetDelay(20);

			return TRUE;
		}
	}

	return FALSE;
}

// -------------------------------------------- JYJ Start ---------------------------------------------- //

void OnGameCharDead()
{
	// 사망 횟수 체크해서 오토 중지하자
	if (g_HuntSetting.bLimitDead)
	{
		if (g_HuntSetting.nLimitDeadCount <= 1 || (g_nDeadCount >= g_HuntSetting.nLimitDeadCount &&
			g_qwDeadTime[g_nDeadCount - 1] - g_qwDeadTime[g_nDeadCount - g_HuntSetting.nLimitDeadCount] <= g_HuntSetting.nLimitDeadTime * 60 * 1000))
		{
			g_pGameMapping->bAutoRun = FALSE;
			g_pGameMapping->bLogType = LogType_ChangeAutoState;

			g_nDeadCount = 0;
			AJLog(L"%d분사이 %d번이상 사망하였습니다", g_HuntSetting.nLimitDeadTime, g_HuntSetting.nLimitDeadCount);
			ShowStatus(4, 60229, NULL, g_HuntSetting.nLimitDeadTime, g_HuntSetting.nLimitDeadCount);
			return;
		}
	}

	SetStatus(Status_ReturnVillage);
}

int IsInField(int nFieldIdx)
{
	if (nFieldIdx == NOINDEX)
	{
		for (int i = 0; i < MAX_FIELD; i++)
		{
			if (g_pFieldRes[i].dwMapID == g_pCharInfo.dwMapID)
				return i;
		}
	}
	else if (nFieldIdx >= 0 && nFieldIdx < MAX_FIELD)
	{
		if (g_pFieldRes[nFieldIdx].dwMapID == g_pCharInfo.dwMapID)
			return nFieldIdx;
	}

	return NOINDEX;
}

int GetDungeonTime(DWORD dwMapID)
{
	_CallFunc1 funcGetMapData = (_CallFunc1)GAMEADDR(Addr_CGameTable__get_MapData); // ?
	DWORD64 qwCGameTabe_MapData = funcGetMapData(0);
	if (!qwCGameTabe_MapData)
		return -1;

	_CallFunc3Struct getSMapData = (_CallFunc3Struct) * (DWORD64*)(*(DWORD64*)qwCGameTabe_MapData + Offset_GetItemDesc);
	RET_STRUCT qwSMapData = getSMapData(qwCGameTabe_MapData, dwMapID,
		*(DWORD64*)(*(DWORD64*)qwCGameTabe_MapData + Offset_GetItemDesc + 8));				// CGameTable_SMapData

	DWORD dwGroupIndex = *(DWORD*)((DWORD64)&qwSMapData.qwData1 + Offset_CGameTable_SMapData_SMap_Enter + Offset_CGameTable_SMap_Enter_Limit_Group);

	InitGlobal(Addr_Method$MonoSingleton_CNetData__get_s_Instance__); // ?
	InitGlobal(Addr_Method$System_Dictionary_MapLimitData_TryGetValue__); // ?

	_CallFunc1 funcGetInst = (_CallFunc1)GAMEADDR(Addr_MonoSingleton_object___get_s_Instance);
	DWORD64 qwCNetData = funcGetInst(DWORD64V(GAMEADDR(Addr_Method$MonoSingleton_CNetData__get_s_Instance__))); // ?
	if (!qwCNetData)
		return -1;

	DWORD64 qwMapTimeDictionary = __DWORD64(qwCNetData + 0x28); // Addr_CNetData__get_DicMapTime in mobile
	if (!qwMapTimeDictionary)
		return -1;

	_CallFunc4 funcTryFind = (_CallFunc4)GAMEADDR(Addr_System_Dictionary_int__object___TryGetValue);

	DWORD64 qwMapLimitData = 0;
	funcTryFind(qwMapTimeDictionary, dwGroupIndex, (DWORD64)&qwMapLimitData, DWORD64V(GAMEADDR(Addr_Method$System_Dictionary_MapLimitData_TryGetValue__)));  // ?
	if (!qwMapLimitData)
		return -1;

	int nLimitType = DWORDV(qwMapLimitData + Offset_MapLimitData_LimitType);	// GameDefine.Map.EMapLimitType
	if (nLimitType == 3)
	{
		int nRemainEntryCount = DWORDV(qwMapLimitData + Offset_MapLimitData_RemainEntryCount);
		return nRemainEntryCount;
	}
	else
	{
		int nRemainTime = *(int*)(qwMapLimitData + Offset_MapLimitData_PlayTime);
		int nChargedTime = *(int*)(qwMapLimitData + Offset_MapLimitData_ChargeTime);
		return nRemainTime + nChargedTime;
	}
}

BOOL CanEnterField(int nFieldIdx)
{
	if (nFieldIdx < 0 || nFieldIdx >= MAX_FIELD)
		return FALSE;

	if (g_pFieldRes[nFieldIdx].dwMapID == g_pCharInfo.dwMapID)
		return TRUE;

	if (g_pFieldRes[nFieldIdx].nNeedGold > g_pCharInfo.nGold)
		return FALSE;

	if (g_pFieldRes[nFieldIdx].nNeedItemID && GetInvenCountByID(g_pFieldRes[nFieldIdx].nNeedItemID) < g_pFieldRes[nFieldIdx].nNeedItemCount)
		return FALSE;

	if (GetDungeonTime(g_pFieldRes[nFieldIdx].dwMapID) == 0)
		return FALSE;

	return TRUE;
}

void OnGameTeleportMap()
{
	int nVisbleWindowUID = (int)GetVisibleWindowUID();

	if (g_nStepStatus == 100)
	{
		if (nVisbleWindowUID == UI_UID_WorldMapWindow)
		{
			XMsg("[%s] Close", __FUNCTION__);

			CloseAllActivePopup();

			SetDelay(20);
			return;
		}

		SetStatus(g_nPreStatus);
		return;
	}

	if (IsInField(g_nEnterFieldIdx) == g_nEnterFieldIdx || !CanEnterField(g_nEnterFieldIdx))
	{
		g_nStepStatus = 100;
		return;
	}

	if (nVisbleWindowUID != UI_UID_WorldMapWindow)
	{
		XMsg("[%s] Open", __FUNCTION__);

		_CallFunc1 funcShowMap = (_CallFunc1)GAMEADDR(Addr_CUIMinimap__OnMinimapButton);
		funcShowMap(0);

		SetDelay(20);
		return;
	}

	DWORD64 qwCUIWorldMapWindow = GetWindowByUI_UID((UI_UID)nVisbleWindowUID);
	if (!qwCUIWorldMapWindow)
	{
		XMsg("[%s] Wait - 1", __FUNCTION__);
		return;
	}

	// 우선 필드 선택하자
	DWORD64 qwCUIWorldMapList = __DWORD64(qwCUIWorldMapWindow + 0x170); // Addr_CUIWorldMapWindow__get_GetWorldMapList in mobile
	if (!qwCUIWorldMapList)
	{
		XMsg("[%s] Wait - 2", __FUNCTION__);
		return;
	}

	DWORD dwCurMapID = __DWORD(qwCUIWorldMapList + 0x188); // Addr_CUIWorldMapList__get_CurrentMapIndex in mobile

	DWORD dwCurTerritoryID = __DWORD(qwCUIWorldMapList + 0x18C); // Addr_CUIWorldMapList__get_CurrentTerritoryIndex in mobile

	if (dwCurMapID != g_pFieldRes[g_nEnterFieldIdx].dwMapID || dwCurTerritoryID != g_pFieldRes[g_nEnterFieldIdx].dwTerritoryID)
	{
		XMsg("[%s] Select Field", __FUNCTION__);

		_CallFunc6 funcSelect = (_CallFunc6)GAMEADDR(Addr_CUIWorldMapList__WorldMapInfoSelectCheck);
		funcSelect(qwCUIWorldMapList, g_pFieldRes[g_nEnterFieldIdx].dwTerritoryID, g_pFieldRes[g_nEnterFieldIdx].dwMapID, TRUE, TRUE, TRUE);

		SetDelay(20);
		return;
	}

	// 거점 선택
// 	DWORD64 qwSelectCUIAreaMapPoint = *(DWORD64*)(qwCUIWorldMapWindow + Offset_CUIWorldMapWindow_Current_AreaMapPoint);
// 
// 	_CallFunc1 funcGetWorldMapAreaPoints = (_CallFunc1)GAMEADDR(Addr_CUIWorldMapWindow__get_GetWorldMapAreaPoints);
// 	DWORD64 qwGetWorldMapAreaPointList = funcGetWorldMapAreaPoints(qwCUIWorldMapWindow);
// 	if (qwGetWorldMapAreaPointList)
// 	{
// 		_CallFunc1 funcGetCount = (_CallFunc1)GAMEADDR(Addr_System_Collections_Generic_List_object___get_Count);
// 		_CallFunc2 funcGetItem = (_CallFunc2)GAMEADDR(Addr_Collections_Generic_List_object___get_Item);
// 
// 		int nCount = funcGetCount(qwGetWorldMapAreaPointList);
// 		for (int i = 0; i < nCount; i++)
// 		{
// 			DWORD64 qwCUIAreaMapPoint = funcGetItem(qwGetWorldMapAreaPointList, i);
// 			if (!qwCUIAreaMapPoint || !IsActiveWidget(qwCUIAreaMapPoint))
// 				continue;
// 
// 			char bIsHideSlot = *(char*)(qwCUIAreaMapPoint + Offset_CUIAreaMapPoint_IsHideSlot);
// 			if (bIsHideSlot)
// 				continue;
// 
// 			int nEWorldPointType = *(int*)(qwCUIAreaMapPoint + Offset_CUIAreaMapPoint_EWorldPointType);		// CUIWorldMapWindow.EWorldPointType
// 			if (nEWorldPointType == 6)			// 포탈 무시
// 				continue;
// 
// 			DWORD64 qwUITextName = *(DWORD64*)(qwCUIAreaMapPoint + Offset_CUIAreaMapPoint_txtName);
// 			if (!qwUITextName)
// 				continue;
// 
// 			_CallFunc1 funcGetName = (_CallFunc1)GAMEADDR(Addr_TMPro_TMP_Text__get_text);
// 			DWORD64 qwName = funcGetName(qwUITextName);
// 			if (qwName)
// 			{
// 				char szName[MAX_NAME] = { 0, };
// 				ConvertString(qwName, szName);
// 
// 				//XMsg("No: %d, %s, Type: %d", i + 1, szName, nEWorldPointType);
// 			}
// 
// 			if (qwSelectCUIAreaMapPoint != qwCUIAreaMapPoint)
// 			{
// 				_CallFunc1 funcSelect = (_CallFunc1)GAMEADDR(Addr_CUIAreaMapPoint__OnClick_SelfButton);
// 				funcSelect(qwCUIAreaMapPoint);
// 
// 				SetDelay(10);
// 				return;
// 			}
// 		}
// 	}

	// 즉시 이동
	DWORD64 qwCUIWorldMapDetail = __DWORD64(qwCUIWorldMapWindow + 0x178); // Addr_CUIWorldMapWindow__get_GetWorldMapDetail in mobile
	if (qwCUIWorldMapDetail)
	{
		XMsg("[%s] Teleport", __FUNCTION__);

		_CallFunc1 funcTeleport = (_CallFunc1)GAMEADDR(Addr_CUIWorldMapDetail__OnClick_Teleport);
		funcTeleport(qwCUIWorldMapDetail);

		SetDelay(20);
		return;
	}
}

void OnGameMission()
{
	int nVisbleWindowUID = (int)GetVisibleWindowUID();

	if (g_nStepStatus == 100)
	{
		if (nVisbleWindowUID == UI_UID_EventMissionPopup)
		{
			XMsg("[%s] Close", __FUNCTION__);

			CloseAllActivePopup();

			SetDelay(20);
			return;
		}

		XMsg("이벤트 보상 을(를) 확인하였습니다");
		ShowStatus(0, 60247);

		SetStatus(Status_DoAuto);
		return;
	}

	if (nVisbleWindowUID != UI_UID_EventMissionPopup)
	{
		XMsg("[%s] Open", __FUNCTION__);

		MenuButtonClick(L"Btn_EventMission");

		SetDelay(20);
		return;
	}

	DWORD64 qwCUIEventMissionPopup = GetWindowByUI_UID((UI_UID)nVisbleWindowUID);
	if (!qwCUIEventMissionPopup)
	{
		XMsg("[%s] Wait - 1", __FUNCTION__);
		return;
	}

	_CallFunc1 funcGetCount = (_CallFunc1)GAMEADDR(Addr_System_Collections_Generic_List_object___get_Count);
	_CallFunc2 funcGetItem = (_CallFunc2)GAMEADDR(Addr_Collections_Generic_List_object___get_Item);

	int nSelectDataIndex = (int)DWORD64V(qwCUIEventMissionPopup + Offset_CUIEventMissionPopup_SelectEnventDataIndex);

	DWORD64 qwTabDataList = DWORD64V(qwCUIEventMissionPopup + Offset_CUIEventMissionPopup_TabDataList);
	if (qwTabDataList)
	{
		int nCount = (int)funcGetCount(qwTabDataList);
		for (int i = 0; i < nCount; i++)
		{
			DWORD64 qwToggleTab = funcGetItem(qwTabDataList, i);
			if (!qwToggleTab)
				continue;

			DWORD64 qwRedDotAlram = DWORD64V(qwToggleTab + Offset_CUIEventMission_ToggleTab_RedDotAlram);
			if (!qwRedDotAlram)
				continue;

			_CallFunc1 funcIsActive = (_CallFunc1)GAMEADDR(Addr_UnityEngine_GameObject_get_activeSelf);
			if ((funcIsActive(qwRedDotAlram) & 1) == 0)
				continue;

			int nDataIndex = DWORDV(qwToggleTab + Offset_CUIEventMission_ToggleTab_EventDataIndex);
			if (nDataIndex == nSelectDataIndex)
				break;

			DWORD64 qwUIToggle = DWORD64V(qwToggleTab + Offset_CUIEventMission_ToggleTab_MainToggle);
			if (!qwUIToggle)
			{
				XMsg("[%s] Wait - 2", __FUNCTION__);
				return;
			}

			XMsg("[%s] Select Tab %d", __FUNCTION__, i);

			_CallFunc1 funcClick = (_CallFunc1)GAMEADDR(Addr_UnityEngine_UI_Toggle__OnSubmit);
			funcClick(qwUIToggle);

			SetDelay(20);
			return;
		}
	}

	// 서브 미션 완료된거 처리하자
	DWORD64 qwSubMissionSlotList = *(DWORD64*)(qwCUIEventMissionPopup + Offset_CUIEventMissionPopup_SubMissionSlotList);
	if (qwSubMissionSlotList)
	{
		int nCount = (int)funcGetCount(qwSubMissionSlotList);
		for (int i = 0; i < nCount; i++)
		{
			DWORD64 qwSubMissionSlot = funcGetItem(qwSubMissionSlotList, i);
			if (!qwSubMissionSlot)
				continue;

			int nSlotStatus = *(char*)(qwSubMissionSlot + Offset_CUIEventMission_SubMission_Slot_Status);
			if (nSlotStatus != 3)			// CUIEventMissionPopup.eEventMissionStatusType
				continue;

			XMsg("[%s] Reward 1", __FUNCTION__);

			_CallFunc1 funcClick = (_CallFunc1)GAMEADDR(Addr_CUIEventMission_SubMission_Slot__OnClick_BaseSlot);
			funcClick(qwSubMissionSlot);

			SetDelay(20);
			return;
		}
	}

	DWORD64 qwLevelStepSlotList = *(DWORD64*)(qwCUIEventMissionPopup + Offset_CUIEventMissionPopup_LevelStepSlotList);
	if (qwLevelStepSlotList)
	{
		int nCount = (int)funcGetCount(qwLevelStepSlotList);
		for (int i = 0; i < nCount; i++)
		{
			DWORD64 qwLevelStepSlot = funcGetItem(qwLevelStepSlotList, i);
			if (!qwLevelStepSlot)
				continue;

			int nSlotStatus = *(char*)(qwLevelStepSlot + Offset_CUIEventMission_LevelStep_Slot_Status);
			if (nSlotStatus == 5)
				break;

			if (nSlotStatus == 3)
			{
				XMsg("[%s] Reward 2", __FUNCTION__);

				_CallFunc1 funcClick = (_CallFunc1)GAMEADDR(Addr_CUIEventMission_LevelStep_Slot__OnClick_SelfButton);
				funcClick(qwLevelStepSlot);

				SetDelay(20);
				return;
			}
		}
	}

	g_nStepStatus = 100;
}

BOOL CanBuyCashItem(int nIndex, int nCount)
{
	int nMaxCount = g_pCashItemInfo[nIndex].nMaxCount;
	int nCurCount = g_pCashItemInfo[nIndex].nCurCount;

	if (nIndex == 8)	// 엘븐 스크롤
	{
		nMaxCount = 100;
		nCurCount = GetInvenCountByID(ItemID_ElvenScr);
	}


	// 업데이트 안됐으면
	if (nCurCount == -1)
		return TRUE;

	// 구매 개수가 없으면
	int nTargetCount = min(nCount, nMaxCount);
	if (nCurCount >= nTargetCount)
		return FALSE;

	// 레벨
	if (g_pCharInfo.nLevel < g_pCashItemInfo[nIndex].nMinLevel)
		return FALSE;

	// 금액이 층분한가
	if (GetCashAmount(g_pCashItemInfo[nIndex].nCashType) < g_pCashItemInfo[nIndex].nPrice)
		return FALSE;

	return TRUE;
}

int GetBuyCashItemIndex()
{
	int nOffset = 0;

	{
		//// 칼데라스 정착 패키지
		//nOffset = 0;
		//for (int i = 0; i < 2; i++)
		//{
		//	if (CanBuyCashItem(nOffset + i, 1))
		//	{
		//		XMsg("[%s] - 1", __FUNCTION__);
		//		return nOffset + i;
		//	}
		//}

		// 100일 기념 패키지
// 		nOffset = 23;
// 		if (CanBuyCashItem(nOffset, 1))
// 			return nOffset;
	}

	if (g_pCharInfo.nGold >= g_BuySetting.nScrollGold)
	{
		// 강화 주문서
		nOffset = 3;
		for (int i = 0; i < 2; i++)
		{
			if (g_BuySetting.bScrollBuy[i] && CanBuyCashItem(nOffset + i, g_BuySetting.nScrollBuy[i]))
				return nOffset + i;
		}

		// 엘븐 스크롤
		nOffset = 8;
		if (g_BuySetting.bScrollElven && CanBuyCashItem(nOffset, g_BuySetting.nScrollElven))
			return nOffset;
	}

	if (g_pCharInfo.nGold >= g_BuySetting.nCristalGold)
	{
		// 크리스탈 랜덤 상자
		nOffset = 9;
		if (g_BuySetting.bCristalBox && CanBuyCashItem(nOffset, g_BuySetting.nCristalBox))
			return nOffset;

		// 최상급 가디언 소환 1회
		nOffset = 10;
		if (g_BuySetting.bCristalPet1 && CanBuyCashItem(nOffset, 1))
			return nOffset;

		// 최상급 가디언 소환 1회
		nOffset = 11;
		if (g_BuySetting.bCristalPet2 && CanBuyCashItem(nOffset, 1))
			return nOffset;
	}

	if (g_pCharInfo.nGold >= g_BuySetting.nSummonGold)
	{
		// 코스튬
		nOffset = 12;
		for (int i = 0; i < 3; i++)
		{
			if (g_BuySetting.bSummonCostume[i] && CanBuyCashItem(nOffset + i, 1))
				return nOffset + i;
		}

		// 펫
		nOffset = 15;
		for (int i = 0; i < 3; i++)
		{
			if (g_BuySetting.bSummonPet[i] && CanBuyCashItem(nOffset + i, 1))
				return nOffset + i;
		}

		// 몬스터
		nOffset = 18;
		for (int i = 0; i < 3; i++)
		{
			if (g_BuySetting.bSummonMonster[i] && CanBuyCashItem(nOffset + i, 1))
				return nOffset + i;
		}
	}

	if (g_pCharInfo.nGold >= g_BuySetting.nOtherGold)
	{
		// 일반 장비 상자
		nOffset = 5;
		if (g_BuySetting.bEquipBox && CanBuyCashItem(nOffset, g_BuySetting.nEquipBox))
			return nOffset;
	}

	return NOINDEX;
}

int GetBuyCashItemCount(int nIndex)
{
	int nTargetCount = 1;
	int nMaxCount = g_pCashItemInfo[nIndex].nMaxCount;
	int nCurCount = g_pCashItemInfo[nIndex].nCurCount;

	if (nIndex == 3 || nIndex == 4)		// 강화 주문서
		nTargetCount = g_BuySetting.nScrollBuy[nIndex - 3];
	else if (nIndex == 5)				// 일반 장비 상자
		nTargetCount = g_BuySetting.nEquipBox;
	else if (nIndex == 8)				// 엘븐 스크롤
	{
		nTargetCount = g_BuySetting.nScrollElven;
		nMaxCount = 100;
		nCurCount = GetInvenCountByID(ItemID_ElvenScr);
	}
	else if (nIndex == 9)				// 크리스탈 랜덤 상자
		nTargetCount = g_BuySetting.nCristalBox;


	int nBuyCount = max(0, min(nTargetCount, nMaxCount) - nCurCount);
	int nAvailCount = GetCashAmount(g_pCashItemInfo[nIndex].nCashType) / g_pCashItemInfo[nIndex].nPrice;

	return min(nBuyCount, nAvailCount);
}

void UpdateCashItemInfo(DWORD64 qwStoreUI)
{
	if (!qwStoreUI)
		return;

	_CallFunc0 funcGetStoreData = (_CallFunc0)GAMEADDR(Addr_CGameTable__get_StoreData); // ?
	DWORD64 qwCGameTable_CStore = funcGetStoreData();
	if (!qwCGameTable_CStore)
		return;

	DWORD64 qwItemSlotList = *(DWORD64*)(qwStoreUI + Offset_CUIStoreWindow_StoreUI_Base_StoreSlotList);
	if (!qwItemSlotList)
		return;

	_CallFunc1 funcGetCount = (_CallFunc1)GAMEADDR(Addr_System_Collections_Generic_List_object___get_Count);
	int nCount = (int)funcGetCount(qwItemSlotList);
	for (int i = 0; i < nCount; i++)
	{
		_CallFunc2 funcGetItem = (_CallFunc2)GAMEADDR(Addr_Collections_Generic_List_object___get_Item);
		DWORD64 qwStoreUISlot = funcGetItem(qwItemSlotList, i);				// CUIStoreWindow_Scroll_BaseSlot
		if (!qwStoreUISlot)
			continue;

		DWORD64 qwStoreItemData = *(DWORD64*)(qwStoreUISlot + Offset_CUIStoreWindow_Scroll_BaseSlot_StoreItemData);
		if (!qwStoreItemData)
			continue;

		DWORD dwStoreID = *(DWORD*)(qwStoreItemData + Offset_StoreItemData_StoreIndex);

		for (int j = 0; j < MAX_CASHITEM; j++)
		{
			if (g_pCashItemInfo[j].nCashItemID != dwStoreID)
				continue;

			_CallFunc3Struct funcGetSStore = (_CallFunc3Struct) * (DWORD64*)(*(DWORD64*)qwCGameTable_CStore + Offset_GetItemDesc);
			RET_STRUCT qwItemDesc = funcGetSStore(qwCGameTable_CStore, dwStoreID, *(DWORD64*)(*(DWORD64*)qwCGameTable_CStore + Offset_GetItemDesc + 8));
			if (!qwItemDesc.qwData1)
				continue;


			DWORD64 qwCGameTable_SStore = (DWORD64)&qwItemDesc.qwData1;

			bool bOnSale = *(char*)(qwCGameTable_SStore + Offset_CGameTable_SStore_On_Sale);


			DWORD64 qwCGameTable_SStoreItem = qwCGameTable_SStore + Offset_CGameTable_SStore_SStoreItem;

			WCHAR szItemName[MAX_NAME] = { 0, };
			DWORD64 qwItemName = *(DWORD64*)(qwCGameTable_SStoreItem + Offset_CGameTable_SStoreItem_Name);
			if (qwItemName)
				ConvertString(qwItemName, szItemName);


			DWORD64 qwCGameTable_SProperty = qwCGameTable_SStore + Offset_CGameTable_SStore_SProperty;

			int nCashType = *(int*)(qwCGameTable_SProperty + Offset_CGameTable_SProperty_Cash_Type);
			int nCashPrice = *(int*)(qwCGameTable_SProperty + Offset_CGameTable_SProperty_Cash_Price);


			DWORD64 qwCGameTable_SStoreLimit = qwCGameTable_SStore + Offset_CGameTable_SStore_SStoreLimit;

			int nCurCount = *(int*)(qwStoreItemData + Offset_StoreItemData_PurchasedCount);
			int nMaxCount = *(int*)(qwCGameTable_SStoreLimit + Offset_CGameTable_SStoreLimit_Max_Count);
			int nUseClass = *(int*)(qwCGameTable_SStoreLimit + Offset_CGameTable_SStoreLimit_UseClass);
			int nMinLevel = *(int*)(qwCGameTable_SStoreLimit + Offset_CGameTable_SStoreLimit_MinLevel);
			int nMaxLevel = *(int*)(qwCGameTable_SStoreLimit + Offset_CGameTable_SStoreLimit_MaxLevel);

// 			XMsg(L"{ \"%s\",\t\t%d,\t\t%d,\t\t%d,\t\t%d,\t\t%d,\t\t%d,\t\t%d,\t\t%d,\t\t%d },",
// 				szItemName, dwStoreID, 0, 0, nCurCount, nMaxCount, nMinLevel, nCashType, nCashPrice, bOnSale);

			g_pCashItemInfo[j].nCurCount = nCurCount;
			g_pCashItemInfo[j].bOnSale = bOnSale;
			g_pCashItemInfo[j].qwStoreUISlot = qwStoreUISlot;
		}
	}
}

void OnGameCashShop()
{
	int nVisbleWindowUID = (int)GetVisibleWindowUID();

	if (g_nStepStatus == 100)
	{
		if (nVisbleWindowUID == UI_UID_StoreWindow)
		{
			XMsg("[%s] Close", __FUNCTION__);

			CloseAllActivePopup();
			SetDelay(20);
			return;
		}

		XMsg(L"캐시샵 아이템 구매가 완료되었습니다");
		ShowStatus(0, 60249);

		SetStatus(Status_DoAuto);
		return;
	}

	if (nVisbleWindowUID != UI_UID_StoreWindow)
	{
		XMsg("[%s] Open", __FUNCTION__);

		MenuButtonClick(L"Btn_Shop");
		SetDelay(20);
		return;
	}

	DWORD64 qwCUIStoreWindow = GetWindowByUI_UID((UI_UID)nVisbleWindowUID);
	if (!qwCUIStoreWindow)
	{
		XMsg(L"[%s] Wait - 1", __FUNCTION__);
		return;
	}

	int nCashIndex = GetBuyCashItemIndex();
	if (nCashIndex == NOINDEX)
	{
		g_nStepStatus = 100;
		return;
	}

	// 구매 확인창
	DWORD64 qwBuyCheck_Popup = *(DWORD64*)(qwCUIStoreWindow + Offset_CUIStoreWindow_BuyCheck_Popup);
	if (IsVisibleWindow(qwBuyCheck_Popup))
	{
		// 구매하려는 물품이 다르면
		DWORD dwStoreTableIndex = *(DWORD*)(qwBuyCheck_Popup + Offset_CUIStoreWindow_BuyCheck_Popup_StoreTableIndex);
		if (dwStoreTableIndex != g_pCashItemInfo[nCashIndex].nCashItemID)
		{
			XMsg("[%s] Close BuyCheck Popup", __FUNCTION__);

			_CallFunc1 funcClose = (_CallFunc1)GAMEADDR(Addr_CUIStoreWindow_BuyCheck_Popup__ClosePopup);
			funcClose(qwBuyCheck_Popup);

			SetDelay(20);
			return;
		}

		int nCurCount = *(int*)(qwBuyCheck_Popup + Offset_CUIStoreWindow_BuyCheck_Popup_CurCount);
		int nMaxCount = *(int*)(qwBuyCheck_Popup + Offset_CUIStoreWindow_BuyCheck_Popup_MaxCount);
		int nCashType = *(int*)(qwBuyCheck_Popup + Offset_CUIStoreWindow_BuyCheck_Popup_CashType);
		char bCostCheck = *(char*)(qwBuyCheck_Popup + Offset_CUIStoreWindow_BuyCheck_Popup_CostCheck);


		int nBuyCount = GetBuyCashItemCount(nCashIndex);
		if (nBuyCount == 0)
		{
			XMsg("[%s] BuyCount = 0", __FUNCTION__);
			return;
		}

		if (nBuyCount != nCurCount)
			*(int*)(qwBuyCheck_Popup + Offset_CUIStoreWindow_BuyCheck_Popup_CurCount) = nBuyCount;

		XMsg("[%s] BuyCheck Popup OK", __FUNCTION__);

		_CallFunc1 funcOK = (_CallFunc1)GAMEADDR(Addr_CUIStoreWindow_BuyCheck_Popup__OnClick_OK);
		funcOK(qwBuyCheck_Popup);

		SetDelay(20);
		return;
	}

	// 일괄 구매창
	DWORD64 qwBatchBuy_Popup = *(DWORD64*)(qwCUIStoreWindow + Offset_CUIStoreWindow_BatchBuy_Popup);
	if (IsVisibleWindow(qwBatchBuy_Popup))
	{
		XMsg("[%s] Close BatchBuy Popup", __FUNCTION__);

		_CallFunc1 funcClose = (_CallFunc1)GAMEADDR(Addr_CUIStoreWindow_BuyCheck_Popup__OnClick_Exit); // ?
		funcClose(qwBatchBuy_Popup);

		SetDelay(20);
		return;
	}

	// 보관함
	DWORD64 qwLockerBox_Popup = *(DWORD64*)(qwCUIStoreWindow + Offset_CUIStoreWindow_LockerBox_Popup);
	if (IsVisibleWindow(qwLockerBox_Popup))
	{
		XMsg("[%s] Close LockerBox Popup", __FUNCTION__);

		_CallFunc1 funcClose = (_CallFunc1)GAMEADDR(Addr_CUIStoreWindow_LockerBox_Popup__OnClick_Exit); // ?
		funcClose(qwLockerBox_Popup);

		SetDelay(20);
		return;
	}

	if (*(int*)(qwCUIStoreWindow + Offset_CUIStoreWindow_MainTabIndex) != g_pCashItemInfo[nCashIndex].nMainTab)
	{
		XMsg("[%s] Select MainTab %d", __FUNCTION__, g_pCashItemInfo[nCashIndex].nMainTab);

		_CallFunc2 pfnOpenView = (_CallFunc2)GAMEADDR(Addr_CUIStoreWindow__OpenView);
		pfnOpenView(qwCUIStoreWindow, g_pCashItemInfo[nCashIndex].nMainTab);

		SetDelay(20);
		return;
	}

	int subTab = *(int*)(qwCUIStoreWindow + Offset_CUIStoreWindow_SubTabIndex);
	if (subTab == 0x63)
	{
		subTab = 1;
	}
	else if (subTab == 0x0A)
	{
		subTab = 2;
	}
	else if (subTab == 0x14)
	{
		subTab = 3;
	}
	else if (subTab == 0x32)
	{
		subTab = 4;
	}

	if (subTab != g_pCashItemInfo[nCashIndex].nSubTab)
	{
		XMsg("[%s] Select SubTab %d %d", __FUNCTION__, g_pCashItemInfo[nCashIndex].nSubTab);

		int nSubTab = g_pCashItemInfo[nCashIndex].nSubTab;
		DWORD64 qwSubCategory = 0;
		// nMainTab가 1일때는 nSubTab를 0x63, 0x0A, 0x14, 0x32
		if (g_pCashItemInfo[nCashIndex].nMainTab == 1)
		{
			if (g_pCashItemInfo[nCashIndex].nSubTab == 1)
			{
				nSubTab = 0x63;
				qwSubCategory = g_qwSubCategory1;
			}
			else if (g_pCashItemInfo[nCashIndex].nSubTab == 2)
			{
				nSubTab = 0x0A;
				qwSubCategory = g_qwSubCategory2;
			}
			else if (g_pCashItemInfo[nCashIndex].nSubTab == 3)
			{
				nSubTab = 0x14;
				qwSubCategory = g_qwSubCategory3;
			}
			else if (g_pCashItemInfo[nCashIndex].nSubTab == 4)
			{
				nSubTab = 0x32;
				qwSubCategory = g_qwSubCategory4;
			}
		}

		//XMsg("[%s] %p %p %p %p %p %d", __FUNCTION__, qwCUIStoreWindow, g_pCashItemInfo[nCashIndex].nMainTab, nSubTab, g_pCashItemInfo[nCashIndex].nSubDetailTab, qwSubCategory, TRUE);
		_CallFunc6 funcChangeTab = (_CallFunc6)GAMEADDR(Addr_CUIStoreWindow__OnChanged_SubCategory);
		funcChangeTab(qwCUIStoreWindow, g_pCashItemInfo[nCashIndex].nMainTab, nSubTab, g_pCashItemInfo[nCashIndex].nSubDetailTab, qwSubCategory, TRUE);

		SetDelay(20);
		return;
	}

	DWORD64 qwStoreUI_Package = *(DWORD64*)(qwCUIStoreWindow + Offset_CUIStoreWindow_StoreUI_Package);
	UpdateCashItemInfo(qwStoreUI_Package);

	DWORD64 qwStoreUI_Normal = *(DWORD64*)(qwCUIStoreWindow + Offset_CUIStoreWindow_StoreUI_Normal);
	UpdateCashItemInfo(qwStoreUI_Normal);

	int nNewCashIndex = GetBuyCashItemIndex();
	if (nNewCashIndex != nCashIndex)
	{
		XMsg("[%s] Index Changed  %d -> %d", __FUNCTION__, nCashIndex, nNewCashIndex);
		return;
	}


	static int s_nPrevIndex = NOINDEX;
	static int s_nSelectTry = 0;

	if (s_nPrevIndex != nCashIndex)
	{
		s_nPrevIndex = nCashIndex;
		s_nSelectTry = 0;
	}
	else
	{
		if (s_nSelectTry >= 3)
		{
			s_nPrevIndex = NOINDEX;
			s_nSelectTry = 0;

			CloseAllActivePopup();
			SetDelay(20);
			return;
		}
	}

	s_nSelectTry++;


	_CallFunc1 funcIsDisableBuy = (_CallFunc1)GAMEADDR(Addr_CUIStoreWindow_Scroll_BaseSlot__IsBuyConditionCheck);
	if (funcIsDisableBuy(g_pCashItemInfo[nCashIndex].qwStoreUISlot))
	{
		XMsg("[%s] Item Disabled", __FUNCTION__);
		return;
	}

	XMsg("[%s] Select Item", __FUNCTION__);

	_CallFunc1 funcOnSelect = (_CallFunc1)GAMEADDR(Addr_CUIStoreWindow_Scroll_BaseSlot__OnClick_Select); // ?
	funcOnSelect(g_pCashItemInfo[nCashIndex].qwStoreUISlot);

	SetDelay(20);
	return;
}


// 소환 창문 (코스튬, 가디언)
BOOL OnGachaResult()
{
	_CallFunc1 funcIsSynthesis = (_CallFunc1)GAMEADDR(Addr_CSynthesisManager__get_IsStart);
	if ((char)funcIsSynthesis(0))
	{
		_CallFunc1 funcGetCSynthesisManager = (_CallFunc1)GAMEADDR(Addr_CSynthesisManager__get_s_Instance);
		DWORD64 qwCSynthesisManager = funcGetCSynthesisManager(0);
		if (qwCSynthesisManager)
		{
			DWORD64 qwCUISynthesisDrawHand = *(DWORD64*)(qwCSynthesisManager + Offset_CSynthesisManager_CUISynthesisDrawHand);
			if (IsActiveWidget(qwCUISynthesisDrawHand))
			{
				XMsg("[%s] Quit", __FUNCTION__);

				_CallFunc1 funcQuit = (_CallFunc1)GAMEADDR(Addr_CUISynthesisDrawHand__Quit);
				funcQuit(qwCUISynthesisDrawHand);
			}
		}

		SetDelay(20);
		return TRUE;
	}

	return FALSE;
}


BOOL OnDeathPopup()
{
	if (IsVisibleUI(UI_UID_DeadPopup))
	{
		DWORD64 qwCUIDeathPopup = GetWindowByUI_UID(UI_UID_DeadPopup);
		if (qwCUIDeathPopup)
		{
			if (*(float*)(qwCUIDeathPopup + Offset_CUIDeathPopup_fButtonActiveDelayTime) > 0.0f)
			{
				SetDelay(10);
				return TRUE;
			}

			DWORD64 qwBtnBaseCamp = *(DWORD64*)(qwCUIDeathPopup + Offset_CUIDeathPopup_btnBaseCamp);
			if (IsActiveWidget(qwBtnBaseCamp))
			{
				XMsg(L"마을에서 부활합니다");
				ShowStatus(0, 60226);

				ClickButton(qwBtnBaseCamp);
			}
			else
			{
				XMsg("[%s] Close", __FUNCTION__);

				_CallFunc1 funcOnClose = (_CallFunc1)GAMEADDR(Addr_CUIDeathPopup__Close);
				funcOnClose(qwCUIDeathPopup);
			}

			SetDelay(20);
			return TRUE;
		}
	}

	return FALSE;
}


BOOL OnDungeonRewardPopup()
{
// //	if (IsVisibleUI(UI_UID_DungeonRewardPopup))
// 	{
// 		DWORD64 qwCUIDungeonRewardPopup = GetWindowByUI_UID(UI_UID_DungeonRewardPopup);
// 		if (qwCUIDungeonRewardPopup)
// 		{
// 			DWORD64 qwOkBtn = DWORD64V(qwCUIDungeonRewardPopup + Offset_CUIDungeonRewardPopup_btnOk);
// 			if (qwOkBtn)
// 			{
// 				XMsg("[%s] Ok", __FUNCTION__);
// 				ClickButton(qwOkBtn);
// 			}
// 
// 			SetStatus(Status_ReturnVillage);
// 
// 			SetDelay(20);
// 			return TRUE;
// 		}
// 	}

	if (IsVisibleUI(UI_UID_DungeonResultPopup))
	{
		DWORD64 qwCUIDungeonResultPopup = GetWindowByUI_UID(UI_UID_DungeonResultPopup);
		if (qwCUIDungeonResultPopup)
		{
			DWORD64 qwList = DWORD64V(qwCUIDungeonResultPopup + Offset_CUIDungeonResultPopup_List);
			if (qwList)
			{
				_CallFunc1 pfnGetCount = (_CallFunc1)GAMEADDR(Addr_System_Collections_Generic_List_object___get_Count);
				int nCount = (int)pfnGetCount(qwList);
				for (int i = 0; i < nCount; i++)
				{
					_CallFunc2 pfnGetItem = (_CallFunc2)GAMEADDR(Addr_Collections_Generic_List_object___get_Item);
					DWORD64 qwCUIDungeonPopupBase = pfnGetItem(qwList, i);
					if (!qwCUIDungeonPopupBase)
						continue;

					int nType = DWORDV(qwCUIDungeonPopupBase + Offset_CUIDungeonPopupBase_Type);
					if (nType == eDungeonResultPopupType_EDRT_SPECIAL_DUNGEON_REWARD)
					{
						DWORD64 qwOkBtn = DWORD64V(qwCUIDungeonPopupBase + Offset_CUIDungeonRewardPopup_btnOk);
						if (qwOkBtn)
						{
							XMsg("[%s] Ok", __FUNCTION__);
							ClickButton(qwOkBtn);
						}

						SetStatus(Status_ReturnVillage);

						SetDelay(20);
						return TRUE;
					}
				}
			}
		}
	}

	return FALSE;
}


void UpdateSkillCycleInfo(BOOL bLog)
{
	g_nSkillCycleCount = 0;

	_CallFunc1 funcGetSkillCycleUseInfo = (_CallFunc1)GAMEADDR(Addr_CLocalData__get_SkillCycleUseInfo);
	DWORD64 qwCSkillCycleUseInfoList = funcGetSkillCycleUseInfo(0);
	if (!qwCSkillCycleUseInfoList)
		return;

	InitGlobal(Addr_Method$List_CSkillCycleUseInfo_GetEnumerator__);
	InitGlobal(Addr_Method$List_CSkillCycleUseInfo_MoveNext__); // ?

	_CallFunc2Struct funcGetEnumerator = (_CallFunc2Struct)GAMEADDR(Addr_Collections_Generic_List_object___GetEnumerator);
	_CallFunc2 funcMoveNext = (_CallFunc2)GAMEADDR(Addr_Collections_List_Enumerator_object___MoveNext);

	RET_STRUCT qwGroupParam = funcGetEnumerator(qwCSkillCycleUseInfoList, *(DWORD64*)(GAMEADDR(Addr_Method$List_CSkillCycleUseInfo_GetEnumerator__)));
	while (funcMoveNext((DWORD64)&qwGroupParam.qwData1, *(DWORD64*)(GAMEADDR(Addr_Method$List_CSkillCycleUseInfo_MoveNext__))) != 0)
	{
		DWORD64 qwCSkillCycleUseInfo = qwGroupParam.qwData3;			// CLocalData.CSkillCycleUseInfo
		if (qwCSkillCycleUseInfo)
		{
			DWORD dwSkillID = *(DWORD*)(qwCSkillCycleUseInfo + Offset_CSkillCycleUseInfo_SkillIndex);
			bool bUse = *(char*)(qwCSkillCycleUseInfo + Offset_CSkillCycleUseInfo_bUse);
			float fTick = *(float*)(qwCSkillCycleUseInfo + Offset_CSkillCycleUseInfo_Time);

			if (g_nSkillCycleCount < MAX_SKILLCYCLE)
			{
				g_pSkillCycleInfo[g_nSkillCycleCount].dwSkillID = dwSkillID;
				g_pSkillCycleInfo[g_nSkillCycleCount].bIsOn = bUse;
				g_pSkillCycleInfo[g_nSkillCycleCount].fCoolTime = fTick;
				g_nSkillCycleCount++;
			}
		}
	}

	if (bLog)
	{
		XMsg("==================== SkillCycle Info ====================");
		for (int i = 0; i < g_nSkillCycleCount; i++)
		{
			XMsg("No.%d  ID:%d  IsOn:%d  CT:%.1f"
				, i + 1
				, g_pSkillCycleInfo[i].dwSkillID
				, g_pSkillCycleInfo[i].bIsOn
				, g_pSkillCycleInfo[i].fCoolTime
			);
		}
	}
}
// -------------------------------------------- JYJ End ---------------------------------------------- //

// -------------------------------------------- KJH Start ---------------------------------------------- //

void OnGameLobby()
{

	InitGlobal(Addr_CNetHandler);
	InitGlobal(Addr_CGameManager);
	InitGlobal(Addr_Method_CGameManager_GetGameStepObject_CUILobby);
	InitGlobal(Addr_System_Predicate_LobbyPlayerInfo__TypeInfo);
	InitGlobal(Addr_Method$CUILobbySelectCharSlot__SetSlot);

	_callFunc1 funcGetInst = (_callFunc1)GAMEADDR(Addr_MonoSingleton_object___get_s_Instance);
	DWORD64 qwCGameManager = funcGetInst(*(DWORD64*)(GAMEADDR(Addr_CGameManager)));
	if (!qwCGameManager)
	{

		XMsg("[%s] Wait - 1", __FUNCTION__);
		return;
	}

	_callFunc2 funcGetGameStepObject = (_callFunc2)GAMEADDR(Addr_CGameManager__GetGameStepObject_object_);
	DWORD64 qwCUILobby = funcGetGameStepObject(qwCGameManager, *(DWORD64*)(GAMEADDR(Addr_Method_CGameManager_GetGameStepObject_CUILobby)));
	if (!qwCUILobby)
	{
		XMsg("[%s] Wait - 2", __FUNCTION__);
		return;
	}

	DWORD64 qwCUILobbyCreate = *(DWORD64*)(qwCUILobby + Offset_CUILobby_CUILobbyCreate);
	DWORD64 qwCUILobbySelect = *(DWORD64*)(qwCUILobby + Offset_CUILobby_CUILobbySelect);

	if (IsActiveWidget(qwCUILobbyCreate))
	{
		static int s_nCreateNameTry = 0;

// 		_CallFunc1 funcPrevStep = (_CallFunc1)GAMEADDR(Addr_CUILobbyCreate__PrevStep);
// 		funcPrevStep(qwCUILobbyCreate);

		_CallFunc1 funcGetEState = (_CallFunc1)GAMEADDR(Addr_CUILobbyCreate__get_m_eState);
		DWORD64 qwCLobbyCreateStep = funcGetEState(qwCUILobbyCreate);
		if (!qwCLobbyCreateStep)
		{
			XMsg("[%s] Wait - 3", __FUNCTION__);
			return;
		}

		int nCurrentStep = *(int*)(qwCLobbyCreateStep + Offset_CLobbyCreateEState_GetCurrentStep);

		_callFunc2 funcGetLobbyCurStep = (_callFunc2)GAMEADDR(Addr_CUILobbyCreate__GetLobbyStepUiToTatget);
		DWORD64 qwCUILobbyCurStep = funcGetLobbyCurStep(qwCUILobbyCreate, nCurrentStep);
		if (!qwCUILobbyCurStep)
		{
			XMsg("[%s] Wait - 4", __FUNCTION__);
			return;
		}

		if (nCurrentStep == eLobbyState_SELECT_CLASS)
		{
			DWORD64 qwCUILobbyCreate_ClassSelector = qwCUILobbyCurStep;

			DWORD64 qwToggleGroup = *(DWORD64*)(qwCUILobbyCreate_ClassSelector + Offset_CUILobbyCreate_ClassSelector_ToggleGroup);
			if (!qwToggleGroup)
			{
				XMsg("[%s] Wait - 5", __FUNCTION__);
				return;
			}

			DWORD64 qwToggleList = *(DWORD64*)(qwToggleGroup + Offset_ToggleGroup_ToggleList);
			if (!qwToggleList)
			{
				XMsg("[%s] Wait - 6", __FUNCTION__);
				return;
			}

			int nClass;

			if (g_bCreateCharActor == 0)		// 나이트
				nClass = 1;
			else if (g_bCreateCharActor == 1)	// 레인저
				nClass = 0;
			else											// 매지션
				nClass = 2;

			int nListCount = *(int*)(qwToggleList + Offset_System_Collections_Generic_List_Count);


			if (nClass < nListCount)
			{
				_callFunc2 funcGetitem = (_callFunc2)GAMEADDR(Addr_Collections_Generic_List_object___get_Item);

				ViewHexData((char*)qwToggleList, 0x100);
				DWORD64 qwUIToggle = funcGetitem(qwToggleList, nClass);
				DEBUG_PRINT(qwUIToggle);
				if (!qwUIToggle)
				{
					XMsg("[%s] Wait - 7", __FUNCTION__);
					return;
				}

				ViewHexData((char*)qwUIToggle, 0x50);
				XMsg("[%s] Select Class : %d", __FUNCTION__, nClass);

				*(BYTE*)(qwUIToggle + Offset_UIToggle_IsSelected) = 1;

				_callFunc2 funcSelectClass = (_callFunc2)GAMEADDR(Addr_CUILobbyCreate_ClassSelector__OnToggleValueChanged);

				funcSelectClass(qwCUILobbyCreate_ClassSelector, qwUIToggle);
			}

			s_nCreateNameTry = 0;

			SetDelay(20);
			return;
		}

		if (nCurrentStep == eLobbyState_PREVIEW_WEAPON)
		{

			DWORD64 qwCUILobbyCreate_PreviewWeapon = qwCUILobbyCurStep;

			XMsg("[%s] Preview Skip", __FUNCTION__);

			_CallFunc1 funcSkip = (_CallFunc1)GAMEADDR(Addr_CUILobbyCreate_PreviewWeapon__OnClickNextButton);
			funcSkip(qwCUILobbyCreate_PreviewWeapon);

			SetDelay(20);
			return;
		}

		if (nCurrentStep == eLobbyState_CUSTOMIZING)
		{
			DWORD64 qwCUILobbyCreate_Customizing = qwCUILobbyCurStep;

			XMsg("[%s] Customizing Next", __FUNCTION__);

			_CallFunc1 funcNext = (_CallFunc1)GAMEADDR(Addr_CUILobbyCreate_Customizing__OnClickNextButton);
			funcNext(qwCUILobbyCreate_Customizing);

			SetDelay(20);
			return;
		}

		if (nCurrentStep == eLobbyState_CHARACTER_NAMING)
		{
			DWORD64 qwCUILobbyCreate_CharacterName = qwCUILobbyCurStep;

			DWORD64 qwUIInputField = *(DWORD64*)(qwCUILobbyCreate_CharacterName + Offset_CUILobbyCreate_CharacterName_NameInputField);
			if (!qwUIInputField)
			{
				XMsg("[%s] Wait - 8", __FUNCTION__);
				return;
			}

			static WCHAR s_szCreateName[MAX_NAME] = { 0, };
			if (!s_szCreateName[0])
			{
				if (GetGameLang() == eELanguage_Korean)
				{
					if (s_nCreateNameTry > 5)
						swprintf(s_szCreateName, L"%s%s", g_szFirstName[rand() % G_FNAME_CNT], g_szCharName[rand() % G_NAME_CNT]);
					else
						swprintf(s_szCreateName, L"%s", g_szCharName[rand() % G_NAME_CNT]);
				}
				else
				{
					int nCreateLen = 2 + rand() % 7;
					for (int i = 0; i < nCreateLen; i++)
					{
						int nIdx = rand() % 4000;

						s_szCreateName[i * 3 + 0] = g_szTWSTR[nIdx * 3 + 0];
						s_szCreateName[i * 3 + 1] = g_szTWSTR[nIdx * 3 + 1];
						s_szCreateName[i * 3 + 2] = g_szTWSTR[nIdx * 3 + 2];
					}
				}

				s_nCreateNameTry++;
			}

			DWORD64 qwInputString = *(DWORD64*)(qwUIInputField + Offset_InputField_Text);
			if (qwInputString)
			{
				WCHAR szCurName[MAX_NAME] = { 0, };
				ConvertString(qwInputString, szCurName);

				if (wcscmp(szCurName, s_szCreateName))
				{
					BYTE szUCS2[MAX_NAME] = { 0 };
					int nLen = UTF8toUCS2(s_szCreateName, (unsigned short*)szUCS2);

					_callFunc3 funcCreateString = (_callFunc3)GAMEADDR(Addr_CreateString3);
					DWORD64	qwString = funcCreateString((DWORD64)szUCS2, 0, nLen);

					XMsg("[%s] Set Name", __FUNCTION__);

					_callFunc3 funcSetText = (_callFunc3)GAMEADDR(Addr_InputField_SetText);
					funcSetText(qwUIInputField, qwString, 1);

				}
				else
				{
					ShowStatus(1, 60155, s_szCreateName);

					_callFunc1 funcOK = (_callFunc1)GAMEADDR(Addr_CUILobbyCreate_CharacterName__OnClickNextButton);
					funcOK(qwCUILobbyCreate_CharacterName);

					memset(s_szCreateName, 0, sizeof(s_szCreateName));
				}
			}

			SetDelay(20);
			return;
		}
	}
	else if (IsActiveWidget(qwCUILobbySelect))
	{
		// 서버가 다른 경우 서버 선택으로 나가자
		if (GetSettingServer() != g_nGameServer)
		{
			XMsg("[%s] Goto Server Select", __FUNCTION__);

			_callFunc1 funcBackToServer = (_callFunc1)GAMEADDR(Addr_CUILobbySelect__OnClickBackButton);
			funcBackToServer(qwCUILobbySelect);

			SetDelay(20);
			return;
		}

		_callFunc1 funcGetDataLobby = (_callFunc1)GAMEADDR(Addr_CUILobby__get_m_dataLobby);
		DWORD64 qwS2C_PlayerList = funcGetDataLobby(qwCUILobby);
		if (!qwS2C_PlayerList)
		{
			XMsg("[%s] Wait - 13", __FUNCTION__);
			return;
		}


		_callFunc1 funcGetMaxSlot = (_callFunc1)GAMEADDR(Addr_Protocol_S2C_PlayerList__get_MaxSlotCount);
		int nSlotCount = (int)funcGetMaxSlot(qwS2C_PlayerList);

		_callFunc1 funcGetPlayerList = (_callFunc1)GAMEADDR(Addr_Protocol_S2C_PlayerList__get_PlayerList);
		DWORD64 qwLobbyPlayerInfoList = funcGetPlayerList(qwS2C_PlayerList);
		if (!qwLobbyPlayerInfoList)
		{
			XMsg("[%s] Wait - 14", __FUNCTION__);
			return;
		}

		DWORD64 qwCUILobbySelectCharSlotList = *(DWORD64*)(qwCUILobbySelect + Offset_CUILobbySelect_SelectCharSlotList);
		if (!qwCUILobbySelectCharSlotList)
		{
			XMsg("[%s] Wait - 15", __FUNCTION__);
			return;
		}

		DWORD64 pCharSlots[MAX_CHARACTER] = { 0, };
		int nCharCount = 0;

		int nMaxSlotCount = *(int*)(qwCUILobbySelectCharSlotList + Offset_System_Collections_Generic_List_Count);
		for (int i = 0; i < min(nSlotCount, nMaxSlotCount); i++)
		{
			_callFunc2 funcGetitem = (_callFunc2)GAMEADDR(Addr_Collections_Generic_List_object___get_Item);
			DWORD64 qwCUILobbySelectCharSlot = funcGetitem(qwCUILobbySelectCharSlotList, i);
			if (!qwCUILobbySelectCharSlot)
				continue;

			pCharSlots[i] = qwCUILobbySelectCharSlot;

			_callFunc1 funcTest1 = (_callFunc1)GAMEADDR(Addr_Allocate_TypeInfo);
			DWORD64 v18 = funcTest1(*(DWORD64*)(GAMEADDR(Addr_System_Predicate_LobbyPlayerInfo__TypeInfo)));

			_callFunc4 funcTest2 = (_callFunc4)GAMEADDR(Addr_System_Predicate_object____ctor);
			funcTest2(v18, qwCUILobbySelectCharSlot, *(DWORD64*)(GAMEADDR(Addr_Method$CUILobbySelectCharSlot__SetSlot)), 0);

			_callFunc2 funcFind = (_callFunc2)GAMEADDR(Addr_Collections_Generic_List_object___Find);
			DWORD64 qwLobbyPlayerInfo = funcFind(qwLobbyPlayerInfoList, v18);
			if (qwLobbyPlayerInfo)
			{
				_callFunc1 funcGetSlotIndex = (_callFunc1)GAMEADDR(Addr_Protocol_LobbyPlayerInfo__get_SlotIndex);
				int nSlotIndex = (int)funcGetSlotIndex(qwLobbyPlayerInfo);

				_callFunc1 funcGetLevel = (_callFunc1)GAMEADDR(Addr_Protocol_LobbyPlayerInfo__get_Level);
				int nLevel = (int)funcGetLevel(qwLobbyPlayerInfo);

				WCHAR szName[MAX_NAME] = { 0, };

				_callFunc1 funcGetName = (_callFunc1)GAMEADDR(Addr_Protocol_LobbyPlayerInfo__get_Name);
				DWORD64 qwName = funcGetName(qwLobbyPlayerInfo);
				if (qwName)
					ConvertString(qwName, szName);

				g_pCharacterInfo[i] = nLevel;
				nCharCount++;
			}
			else
			{
				_callFunc1 funcGetSlotIndex = (_callFunc1)GAMEADDR(Addr_CUILobbySelectCharSlot__get_SlotIndex);
				int nSlotIndex = (int)funcGetSlotIndex(qwCUILobbySelectCharSlot);
			}
		}


		g_nGameChar = 0;
		if (g_ScheduleSetting.bSelChar)
			g_nGameChar = g_ScheduleSetting.nSelChar;

		// 창고에서 찾아야 하는 경우 현재 장비 가지고있는 캐릭이 있는지 체크하자
		if (g_OtherSetting.bGetEquip)
		{
			int nEquipChar = GetEquipsChar(g_nGameServer);
			if (nEquipChar > 0)
			{
				if (nEquipChar > nCharCount)
					SetEquipsChar(g_nGameServer, 0);
				else
					g_nGameChar = nEquipChar - 1;
			}
		}

		// 잠금된 슬롯으로 설정되여있다면
		if (g_nGameChar >= nSlotCount)
		{
			XMsg("[%s] Can't Select", __FUNCTION__);
			SetDelay(10);
			return;
		}


		if (g_nGameChar < nCharCount)
		{
			_callFunc1 funcGetInst = (_callFunc1)GAMEADDR(Addr_MonoSingleton_object___get_s_Instance);
			DWORD64 qwCNetHandler = funcGetInst(*(DWORD64*)(GAMEADDR(Addr_CNetHandler)));
			if (qwCNetHandler)
			{
				ShowStatus(2, 60152, NULL, g_nGameChar + 1);

				_callFunc2 funcEnterWorld = (_callFunc2)GAMEADDR(Addr_CNetHandler__OnC2S_EnterWorld);
				funcEnterWorld(qwCNetHandler, g_nGameChar);

				SetDelay(30);
				return;
			}
		}
		else
		{
			if (pCharSlots[g_nGameChar])
			{
				ShowStatus(2, 60153, NULL, g_nGameChar + 1);

				DWORD64 qwUIToggle = *(DWORD64*)(pCharSlots[g_nGameChar] + Offset_CUILobbySelectCharSlot_UIToggle);
				if (qwUIToggle)
					*(BYTE*)(qwUIToggle + Offset_UIToggle_IsSelected) = 1;

				_callFunc1 funcCreate = (_callFunc1)GAMEADDR(Addr_CUILobbySelectCharSlot__OnSelectedCharacterSlot);
				funcCreate(pCharSlots[g_nGameChar]);

				SetDelay(20);
				return;
			}
		}
	}
}


BOOL OnItemDissolveRewardPopup()
{
	if (GetVisibleWindowUID() == UI_UID_ItemDissolveRewardPopup)
	{
		DWORD64 qwCUIItemDissolveReward_Popup = GetWindowByUI_UID(UI_UID_ItemDissolveRewardPopup);
		if (qwCUIItemDissolveReward_Popup)
		{
			XMsg("[%s] Close", __FUNCTION__);

			_CallFunc1 funcClose = (_CallFunc1)GAMEADDR(Addr_CUIItemDissolveReward_Popup__Close);
			funcClose(qwCUIItemDissolveReward_Popup);

			SetDelay(20);
			return TRUE;
		}
	}

	return FALSE;
}

BOOL OnRewardCommonPopup()
{
	if (GetVisibleWindowUID() == UI_UID_RewardCommonPopup)
	{
		DWORD64 qwCUIRewardPopupBase = GetWindowByUI_UID(UI_UID_RewardCommonPopup);
		if (qwCUIRewardPopupBase)
		{
			XMsg("[%s] Close", __FUNCTION__);

			_CallFunc1 funcClose = (_CallFunc1)GAMEADDR(Addr_CUIRewardPopupBase__Close);
			funcClose(qwCUIRewardPopupBase);

			SetDelay(20);
			return TRUE;
		}
	}

	return FALSE;
}


// nBelongType	0:전체  1: 귀속	2: 비귀속
int GetInvenCountByGroupID(DWORD dwGroupID, int nBelongType)
{
	int nCount = 0;

	for (int i = 0; i < g_nInvenCount; i++)
	{
		if (g_pInvenInfo[i].dwGroupID != dwGroupID)
			continue;

		if (nBelongType == 1 && g_pInvenInfo[i].nBelong == eBelongType_IOT_NONE ||
			nBelongType == 2 && g_pInvenInfo[i].nBelong != eBelongType_IOT_NONE)
			continue;

		nCount += g_pInvenInfo[i].nCount;
	}

	return nCount;
}


int GetEnableMakeCount(int nIndex, int nMinGold)
{
	if (g_pMakeRes[nIndex].bDisable)
		return 0;

	int nRet = 9999;

	for (int i = 0; i < g_pMakeRes[nIndex].nMat; i++)
	{
		if (g_pMakeRes[nIndex].pMat[i].dwID == eCashType_GOLD)
		{
			int nCount = max(0, g_pCharInfo.nGold - nMinGold) / g_pMakeRes[nIndex].pMat[i].nValue;
			nRet = min(nRet, nCount);
		}
		else if (g_pMakeRes[nIndex].pMat[i].dwID == eCashType_HONOR_COIN)
		{
			int nCount = g_pCharInfo.nHonorCoin / g_pMakeRes[nIndex].pMat[i].nValue;
			nRet = min(nRet, nCount);
		}
		else if (g_pMakeRes[nIndex].pMat[i].dwID == ItemID_WeaponScr1 || g_pMakeRes[nIndex].pMat[i].dwID == ItemID_ArmorScr1)
		{
			int nCount = GetInvenCountByID(g_pMakeRes[nIndex].pMat[i].dwID) / g_pMakeRes[nIndex].pMat[i].nValue;
			nRet = min(nRet, nCount);
		}
		else
		{
			int nCount = GetInvenCountByGroupID(g_pMakeRes[nIndex].pMat[i].dwID) / g_pMakeRes[nIndex].pMat[i].nValue;
			nRet = min(nRet, nCount);
		}
	}

	if (nRet == 9999)
		return 0;

	return nRet;
}

int GetNeedMakeIndex(int* pCount)
{
	int nOffset = 0;

	if (g_MakeSetting.bMakeBoxEnable)
	{
		nOffset = 0;
		for (int i = 0; i < 4; i++)
		{
			if (!g_MakeSetting.bMakeBox[i])
				continue;

			int nCount = GetEnableMakeCount(nOffset + i, g_MakeSetting.nMakeBoxGold);
			if (nCount)
			{
				if (pCount)
					*pCount = nCount;
				return nOffset + i;
			}
		}

		nOffset = 4;
		if (g_MakeSetting.bMakeCrystalBox)
		{
			int nCount = GetEnableMakeCount(nOffset, g_MakeSetting.nMakeBoxGold);
			if (nCount)
			{
				if (pCount)
					*pCount = nCount;
				return nOffset;
			}
		}
	}

	if (g_MakeSetting.bMakePetEnable)
	{
		nOffset = 5;
		for (int i = 0; i < 2; i++)
		{
			if (!g_MakeSetting.bMakePet[i])
				continue;

			int nCount = GetEnableMakeCount(nOffset + i, g_MakeSetting.nMakePetGold);
			if (nCount)
			{
				if (pCount)
					*pCount = nCount;
				return nOffset + i;
			}
		}
	}

	if (g_MakeSetting.bMakeMonEnable)
	{
		nOffset = 7;
		for (int i = 0; i < 2; i++)
		{
			if (!g_MakeSetting.bMakeMon[i])
				continue;

			int nCount = GetEnableMakeCount(nOffset + i, g_MakeSetting.nMakeMonGold);
			if (nCount)
			{
				if (pCount)
					*pCount = nCount;
				return nOffset + i;
			}
		}
	}

	if (g_MakeSetting.bMakeStoneEnable)
	{
		nOffset = 9;
		for (int i = 0; i < 4; i++)
		{
			if (!g_MakeSetting.bMakeStone[i])
				continue;

			int nCount = GetEnableMakeCount(nOffset + i, g_MakeSetting.nMakeStoneGold);
			if (nCount)
			{
				if (pCount)
					*pCount = nCount;
				return nOffset + i;
			}
		}
	}

	if (g_MakeSetting.bMakeMatEnable)
	{
		nOffset = 13;
		for (int i = 0; i < 12; i++)
		{
			if (!g_MakeSetting.bMakeMat[i])
				continue;

			int nCount = GetEnableMakeCount(nOffset + i, g_MakeSetting.nMakeMatGold);
			if (nCount)
			{
				if (pCount)
					*pCount = nCount;
				return nOffset + i;
			}
		}
	}

	if (g_MakeSetting.bMakeEventEnable)
	{
		for (int i = 0; i < g_MakeSetting.nMakeEventCount; i++)
		{
			if (!g_MakeSetting.pMakeEventInfo[i].bEnable)
				continue;

			int nResIdx = NOINDEX;
			for (int j = 0; j < MAX_MAKERES; j++)
			{
				if (g_pMakeRes[j].dwID == g_MakeSetting.pMakeEventInfo[i].dwMakeID)
				{
					nResIdx = j;
					break;
				}
			}

			if (nResIdx == NOINDEX)
				continue;

			int nCount = GetEnableMakeCount(nResIdx, g_MakeSetting.nMakeEventGold);
			if (nCount)
			{
				if (pCount)
					*pCount = nCount;
				return nResIdx;
			}
		}
	}

	return NOINDEX;
}

void OnGameMake()
{
	if (g_nStepStatus == 100)
	{
		if (IsVisibleUI(UI_UID_ItemMakeWindow))
		{
			XMsg("[%s] Close", __FUNCTION__);

			CloseAllActivePopup();
			SetDelay(20);
			return;
		}

		SetStatus(Status_DoAuto);
		return;
	}

	if (!IsVisibleUI(UI_UID_ItemMakeWindow))
	{
		XMsg("[%s] Open", __FUNCTION__);

		MenuButtonClick(L"Btn_Make");
		SetDelay(20);
		return;
	}

	if (IsVisibleUI(UI_UID_ItemMakeResultPopup))
	{
		DWORD64 qwCUIItemMakeResultPopup = GetWindowByUI_UID(UI_UID_ItemMakeResultPopup);
		if (!qwCUIItemMakeResultPopup)
		{
			XMsg("[%s] Wait - 1", __FUNCTION__);
			return;
		}

		XMsg("[%s] Close Result Popup", __FUNCTION__);

		_CallFunc1 funcClose = (_CallFunc1)GAMEADDR(Addr_CUIItemMakeResultPopup__Close);
		funcClose(qwCUIItemMakeResultPopup);

		SetDelay(20);
		return;
	}

	DWORD64 qwCUIItemMakeWindow = GetWindowByUI_UID(UI_UID_ItemMakeWindow);
	if (!qwCUIItemMakeWindow)
	{
		XMsg("[%s] Wait - 2", __FUNCTION__);
		return;
	}

	InitGlobal(Addr_Method$CUIGroupWindow_GetView_CUIItemMakeView___);

	_CallFunc3 funcGetWindow = (_CallFunc3)GAMEADDR(Addr_CUIGroupWindow__GetView_object_);
	_CallFunc1 funcGetSelectIndex = (_CallFunc1)GAMEADDR(Addr_CUIGroupWindow__get_SelectViewID);
	DWORD64 qwCUIItemMakeView = funcGetWindow(qwCUIItemMakeWindow, funcGetSelectIndex(qwCUIItemMakeWindow),
		DWORD64V(GAMEADDR(Addr_Method$CUIGroupWindow_GetView_CUIItemMakeView___)));
	if (!qwCUIItemMakeView)
	{
		XMsg("[%s] Wait - 3", __FUNCTION__);
		return;
	}

	_CallFunc1 funcIsMaking = (_CallFunc1)GAMEADDR(Addr_CUIItemMakeView__isMakeing);
	if (funcIsMaking(qwCUIItemMakeView))
	{
		XMsg("[%s] Making ...", __FUNCTION__);
		SetDelay(10);
		return;
	}

	int nMakeCount = 0;
	int nMakeIdx = GetNeedMakeIndex(&nMakeCount);
	if (nMakeIdx == NOINDEX)
	{
		g_nStepStatus = 100;
		return;
	}

// 	int nSelectTab = DWORDV(qwCUIItemMakeWindow + Offset_CUIItemMakeWindow_SelectTabType);
// 	if (nSelectTab != g_pMakeRes[nMakeIdx].nTab)
// 	{
// 		XMsg("[%s] Select Tab  %d->%d", __FUNCTION__, nSelectTab, g_pMakeRes[nMakeIdx].nTab);
// 
// 		_CallFunc2 funcChangeMainTab = (_CallFunc2)GAMEADDR(Addr_CUIItemMakeWindow__SetTabChange);
// 		funcChangeMainTab(qwCUIItemMakeWindow, g_pMakeRes[nMakeIdx].nTab);
// 
// 		SetDelay(20);
// 		return;
// 	}

// 	int nSelectMain = DWORDV(qwCUIItemMakeWindow + Offset_CUIItemMakeWindow_SelectMainNumber);
// 	int nSelectSub = DWORDV(qwCUIItemMakeWindow + Offset_CUIItemMakeWindow_SelectSubNumber);
// 	DWORD dwSelectID = DWORDV(qwCUIItemMakeWindow + Offset_CUIItemMakeWindow_SelectSlotID);
// 	if (nSelectMain != g_pMakeRes[nMakeIdx].nMain || nSelectSub != g_pMakeRes[nMakeIdx].nSub || dwSelectID != g_pMakeRes[nMakeIdx].dwID)
// 	{
// 		XMsg("[%s] Select Slot  %d->%d  %d->%d  %d->%d", __FUNCTION__, nSelectMain, g_pMakeRes[nMakeIdx].nMain, nSelectSub, g_pMakeRes[nMakeIdx].nSub, dwSelectID, g_pMakeRes[nMakeIdx].dwID);
// 
// 		_CallFunc4 funcRefresh = (_CallFunc4)GAMEADDR(Addr_CUIItemMakeView__Refresh);
// 		funcRefresh(qwCUIItemMakeView, g_pMakeRes[nMakeIdx].nMain, g_pMakeRes[nMakeIdx].nSub, g_pMakeRes[nMakeIdx].dwID);
// 
// 		SetDelay(20);
// 		return;
// 	}

	DWORD dwSelectID = DWORDV(qwCUIItemMakeWindow + Offset_CUIItemMakeWindow_SelectSlotID);
	if (dwSelectID != g_pMakeRes[nMakeIdx].dwID)
	{
		XMsg("[%s] Select Slot  %d->%d", __FUNCTION__, dwSelectID, g_pMakeRes[nMakeIdx].dwID);

		_CallFunc3 pfnMoveMakeSlot = (_CallFunc3)GAMEADDR(Addr_CUIItemMakeWindow__MoveMakeSlot_MakeIndex);
		pfnMoveMakeSlot(qwCUIItemMakeWindow, g_pMakeRes[nMakeIdx].dwID, 0);

		SetDelay(20);
		return;
	}

	int nCurCount = *(int*)(qwCUIItemMakeWindow + Offset_CUIItemMakeWindow_MakeCount);
	int nMaxCount = *(int*)(qwCUIItemMakeWindow + Offset_CUIItemMakeWindow_MaxCount);

	XMsg("[%s] Count = %d / %d  %d", __FUNCTION__, nCurCount, nMaxCount, nMakeCount);

	if (nMaxCount <= 0)
	{
		XMsg("[%s] MaxCount = 0", __FUNCTION__);

		g_pMakeRes[nMakeIdx].bDisable = TRUE;
		return;
	}

	nMakeCount = min(nMakeCount, nMaxCount);

	if (nCurCount < nMakeCount)
	{
		XMsg("[%s] Plus Count", __FUNCTION__);

		_CallFunc2 funcMakeCount = (_CallFunc2)GAMEADDR(Addr_CUIItemMakeView__MakeCountUpdate); // ?
		funcMakeCount(qwCUIItemMakeView, 1);

		SetDelay(10);
		return;
	}

	if (nCurCount > nMakeCount)
	{
		XMsg("[%s] Minus Count", __FUNCTION__);

		_CallFunc2 funcMakeCount = (_CallFunc2)GAMEADDR(Addr_CUIItemMakeView__MakeCountUpdate);
		funcMakeCount(qwCUIItemMakeView, 0);

		SetDelay(10);
		return;
	}

	DWORD64 qwBtnMake = *(DWORD64*)(qwCUIItemMakeView + Offset_CUIItemMakeView_BtnMake);
	if (!qwBtnMake)
	{
		XMsg("[%s] Wait - 4", __FUNCTION__);
		return;
	}

	XMsg("[%s] Make Item", __FUNCTION__);
	ClickButton(qwBtnMake);

	SetDelay(20);
	return;
}


void OnGameRecover()
{
	int nVisbleWindowUID = (int)GetVisibleWindowUID();

	if (g_nStepStatus == 100)
	{
		if (nVisbleWindowUID == UI_UID_RepairPopup)
		{
			XMsg("[%s] Close", __FUNCTION__);

			CloseAllActivePopup();

			SetDelay(20);
			return;
		}

		XMsg("경험치 복구가 끝났습니다");
		ShowStatus(0, 60192);

		g_bRecoverDone = TRUE;
		SetStatus(Status_ReturnVillage);
		return;
	}

	if (nVisbleWindowUID != UI_UID_RepairPopup)
	{
		XMsg("[%s] Open", __FUNCTION__);

		MenuButtonClick(L"Btn_Reviva");

		SetDelay(20);
		return;
	}

	DWORD64 qwCUIRepairPopup = GetWindowByUI_UID((UI_UID)nVisbleWindowUID);
	if (!qwCUIRepairPopup)
	{
		XMsg("[%s] Wait - 1", __FUNCTION__);
		return;
	}


	_CallFunc1 funcGetFreeCount = (_CallFunc1)GAMEADDR(Addr_CUIRepairPopup__ReMainRestoreCount);
	int nFreeCount = (int)funcGetFreeCount(qwCUIRepairPopup);

	BOOL bCanExpRecover = FALSE;
	if (nFreeCount || g_OtherSetting.bRecoverGold)
		bCanExpRecover = TRUE;


	// 탭 선택하자
	BOOL bNeedRecover = FALSE;

	_CallFunc2 funcGetCount = (_CallFunc2)GAMEADDR(Addr_CUIRepairPopup__GetRestoreListCount); // ?
	if (funcGetCount(qwCUIRepairPopup, 1) > 0)
	{
		if (!SelectToggle(DWORD64V(qwCUIRepairPopup + Offset_CUIRepairPopup_uIToggles), 1))
		{
			XMsg("[%s] Select Item Tab", __FUNCTION__);
			SetDelay(20);
			return;
		}

		bNeedRecover = TRUE;
	}
	else if (bCanExpRecover)
	{
		if (funcGetCount(qwCUIRepairPopup, 0) > 0)				// GameDefine.Property.ERestoreType
		{
			if (!SelectToggle(DWORD64V(qwCUIRepairPopup + Offset_CUIRepairPopup_uIToggles), 0))
			{
				XMsg("[%s] Select Exp Tab", __FUNCTION__);
				SetDelay(20);
				return;
			}

			bNeedRecover = TRUE;
		}
	}

	if (!bNeedRecover)
	{
		g_nStepStatus = 100;
		return;
	}


	// 주화를 골드로 설정
	int nRestoreType = *(int*)(qwCUIRepairPopup + Offset_CUIRepairPopup_ERestoreType);
	int nCashType = *(int*)(qwCUIRepairPopup + Offset_CUIRepairPopup_EPropertySubType);
	if (nCashType != eCashType_GOLD && (nRestoreType == 0 && nFreeCount == 0 || nRestoreType == 1))
	{
		XMsg("[%s] Select Gold", __FUNCTION__);
		SelectToggle(DWORD64V(qwCUIRepairPopup + Offset_CUIRepairPopup_tglProperty), 0);
		SetDelay(20);
		return;
	}


	DWORD64 qwRepairSlotList = *(DWORD64*)(qwCUIRepairPopup + Offset_CUIRepairPopup_RepairSlotList);
	if (qwRepairSlotList)
	{
		BOOL bSelected = FALSE;

		_CallFunc1 funcGetCount = (_CallFunc1)GAMEADDR(Addr_System_Collections_Generic_List_object___get_Count);
		int nCount = (int)funcGetCount(qwRepairSlotList);
		for (int i = 0; i < nCount; i++)
		{
			_CallFunc2 funcGetItem = (_CallFunc2)GAMEADDR(Addr_Collections_Generic_List_object___get_Item);
			DWORD64 qwCUIRepairSlot = funcGetItem(qwRepairSlotList, i);
			if (!qwCUIRepairSlot || !IsActiveWidget(qwCUIRepairSlot))
				continue;

			// 다이아 복구는 무시
			_CallFunc1 funcIsOnlyCash = (_CallFunc1)GAMEADDR(Addr_CUIRepairSlot__IsOnlyCash);
			if (funcIsOnlyCash(qwCUIRepairSlot))
				continue;

			_CallFunc1 funcIsSelect = (_CallFunc1)GAMEADDR(Addr_CUIRepairSlot__get_IsSelect); // ?
			if (funcIsSelect(qwCUIRepairSlot))
			{
				bSelected = TRUE;
				break;
			}

			DWORD64 qwSelectBtn = *(DWORD64*)(qwCUIRepairSlot + Offset_CUIRepairBaseSlot_BtnSelect);
			if (IsActiveWidget(qwSelectBtn))
			{
				XMsg("[%s] Select Slot %d", __FUNCTION__, i);

				ClickButton(qwSelectBtn);

				SetDelay(10);
				return;
			}
		}

		if (bSelected)
		{
			XMsg("[%s] Recover", __FUNCTION__);

			_CallFunc1 funcReStore = (_CallFunc1)GAMEADDR(Addr_CUIRepairPopup__OnRestoreButton);
			funcReStore(qwCUIRepairPopup);

			SetDelay(20);
			return;
		}
	}

	g_nStepStatus = 100;
}


void UpdateAuctionSaleItemInfo(DWORD64 qwSaleList)
{
	g_nAuctionSaleCount = 0;

	_CallFunc1 funcGetCount = (_CallFunc1)GAMEADDR(Addr_System_Collections_Generic_List_object___get_Count);
	int nCount = (int)funcGetCount(qwSaleList);
	for (int i = 0; i < nCount; i++)
	{
		_CallFunc2 funcGetItem = (_CallFunc2)GAMEADDR(Addr_Collections_Generic_List_object___get_Item);
		DWORD64 qwSaleItem = funcGetItem(qwSaleList, i);
		if (!qwSaleItem)
			continue;

		ItemInfo itemInfo = GetItemInfo(*(DWORD64*)(qwSaleItem + Offset_CUIAuctionListView_SlotModel_ItemInfo));

		DWORD dwItemID = *(DWORD*)(qwSaleItem + Offset_CUIAuctionListView_SlotModel_ItemDataIndex);
		char bIsExist = *(char*)(qwSaleItem + Offset_CUIAuctionListView_SlotModel_IsExistAuction);

		DWORD64 qwAuctionElement = *(DWORD64*)(qwSaleItem + Offset_CUIAuctionListView_SlotModel_AuctionElement);
		if (qwAuctionElement)
		{
			int nCount = *(int*)(qwAuctionElement + Offset_AuctionElement_itemCount);
			long nPrice = (long)*(DWORD64*)(qwAuctionElement + Offset_AuctionElement_saleAmount);
			int nRemainSec = *(int*)(qwAuctionElement + Offset_AuctionElement_remainSec);
			DWORD64 qwAuctionDBID = *(DWORD64*)(qwAuctionElement + Offset_AuctionElement_auctionDBID);
			char nEnchant = *(char*)(qwAuctionElement + Offset_AuctionElement_itemEnchant);
			char bIsMyItem = *(char*)(qwAuctionElement + Offset_AuctionElement_IsMyItem);

			if (g_nAuctionSaleCount < MAX_AUCTION)
			{
				memset(&g_pAuctionSaleInfo[g_nAuctionSaleCount], 0, sizeof(AuctionItemInfo));

				wcscpy(g_pAuctionSaleInfo[g_nAuctionSaleCount].szName, itemInfo.szName);
				g_pAuctionSaleInfo[g_nAuctionSaleCount].dwItemID = dwItemID;
				g_pAuctionSaleInfo[g_nAuctionSaleCount].bTradeStatus = bIsExist;
				g_pAuctionSaleInfo[g_nAuctionSaleCount].nCount = nCount;
				g_pAuctionSaleInfo[g_nAuctionSaleCount].nPrice = nPrice;
				g_pAuctionSaleInfo[g_nAuctionSaleCount].nRemainSec = nRemainSec;
				g_pAuctionSaleInfo[g_nAuctionSaleCount].qwAuctionDBID = qwAuctionDBID;
				g_pAuctionSaleInfo[g_nAuctionSaleCount].nEnchant = nEnchant;
				g_nAuctionSaleCount++;
			}
		}
	}
}

int GetAuctionSaleItemIndex(DWORD dwItemID)
{
	for (int i = 0; i < g_nAuctionSaleCount; i++)
	{
		if (g_pAuctionSaleInfo[i].dwItemID == dwItemID)
			return i;
	}

	return NOINDEX;
}


void AddMarketMap(WCHAR* szName, int nEnchant, float fPrice)
{
	MarketItemPrice stItemPrice;
	memset(&stItemPrice, 0, sizeof(MarketItemPrice));

	stItemPrice.nServer = g_nGameServer;
	wcscpy(stItemPrice.szItemName, szName);
	stItemPrice.nEnchant = nEnchant;
	stItemPrice.fPerPrice = fPrice;

	for (int i = 0; i < MAX_MARKETMAP; i++)
	{
		if (g_pMarketMap[i].bPlaced)
		{
			if (g_qwTickCount - g_pMarketMap[i].qwTime < 3600000)	//1시간
				continue;
		}

		memcpy(&g_pMarketMap[i], &stItemPrice, sizeof(MarketItemPrice));
		g_pMarketMap[i].qwTime = g_qwTickCount;
		g_pMarketMap[i].bPlaced = TRUE;

		break;
	}
}


void UpdateMySaleItemInfo(DWORD64 qwSaleList, BOOL bLog)
{
	g_nMySaleCount = 0;

	_CallFunc1 funcGetCount = (_CallFunc1)GAMEADDR(Addr_System_Collections_Generic_List_object___get_Count);
	int nCount = (int)funcGetCount(qwSaleList);
	for (int i = 0; i < nCount; i++)
	{
		_CallFunc2 funcGetItem = (_CallFunc2)GAMEADDR(Addr_Collections_Generic_List_object___get_Item);
		DWORD64 qwSaleItem = funcGetItem(qwSaleList, i);
		if (!qwSaleItem)
			continue;

		if (g_nMySaleCount < MAX_SALE)
		{
			memset(&g_pMySaleInfo[g_nMySaleCount], 0, sizeof(AuctionItemInfo));

			g_pMySaleInfo[g_nMySaleCount].dwItemID = *(DWORD*)(qwSaleItem + Offset_CUIAuctionSaleViewScrollView_SlotModel_ItemIndex);
			DWORD64 qwMyAuctionElement = *(DWORD64*)(qwSaleItem + Offset_CUIAuctionSaleViewScrollView_SlotModel_AuctionInfo);
			if (qwMyAuctionElement)
			{
				g_pMySaleInfo[g_nMySaleCount].bTradeStatus = *(char*)(qwMyAuctionElement + Offset_MyAuctionElement_TradeStatus);
				DWORD64 qwAuctionElement = *(DWORD64*)(qwMyAuctionElement + Offset_MyAuctionElement_AuctionElement);
				if (qwAuctionElement)
				{
					g_pMySaleInfo[g_nMySaleCount].nCount = *(int*)(qwAuctionElement + Offset_AuctionElement_itemCount);
					g_pMySaleInfo[g_nMySaleCount].nPrice = (long)*(DWORD64*)(qwAuctionElement + Offset_AuctionElement_saleAmount);
					g_pMySaleInfo[g_nMySaleCount].nRemainSec = *(int*)(qwAuctionElement + Offset_AuctionElement_remainSec);
					g_pMySaleInfo[g_nMySaleCount].qwAuctionDBID = *(DWORD64*)(qwAuctionElement + Offset_AuctionElement_auctionDBID);
					g_pMySaleInfo[g_nMySaleCount].nEnchant = *(char*)(qwAuctionElement + Offset_AuctionElement_itemEnchant);
				}
			}

			ItemInfo itemInfo = GetItemInfo(*(DWORD64*)(qwSaleItem + Offset_CUIAuctionSaleViewScrollView_SlotModel_ItemInfo));
			wcscpy(g_pMySaleInfo[g_nMySaleCount].szName, itemInfo.szName);

			g_nMySaleCount++;
		}
	}

	if (bLog)
	{
		for (int i = 0; i < g_nMySaleCount; i++)
		{
			XMsg(L"No: %d, %s, Count: %d, Price: %u, State: %d, Remain: %d",
				i + 1, g_pMySaleInfo[i].szName, g_pMySaleInfo[i].nCount, g_pMySaleInfo[i].nPrice, g_pMySaleInfo[i].bTradeStatus, g_pMySaleInfo[i].nRemainSec);
		}
	}
}

int GetTotalSellPrice(int nLevel)
{
	_CallFunc0 pfnGetTableData = (_CallFunc0)GAMEADDR(Addr_CGameTable__get_AuctionLevelData); // ?
	DWORD64 qwTableData = pfnGetTableData();
	if (!qwTableData)
		return 0;

	_CallFunc3Struct pfnGetSAuctionLevel = (_CallFunc3Struct)DWORD64V(DWORD64V(qwTableData) + Offset_GetItemDesc);
	RET_STRUCT stSAuctionLevel = pfnGetSAuctionLevel(qwTableData, nLevel, DWORD64V(DWORD64V(qwTableData) + Offset_GetItemDesc + 8));				// CGameTable.SAuctionLevel

	return DWORDV((DWORD64)&stSAuctionLevel.qwData1 + Offset_CGameTable_SAuctionLevel_TotalSellPrice);
}

int GetAuctionRetryIndex()
{
	if (!g_ItemSetting.bTradeLimitTime)
		return NOINDEX;

	if (g_nInvenCount >= g_nInvenMaxCount)
		return NOINDEX;

	for (int i = 0; i < g_nMySaleCount; i++)
	{
		if (g_pMySaleInfo[i].bTradeStatus == 2 && g_pMySaleInfo[i].qwAuctionDBID)
		{
			int nTime = 3 * 24 * 60 * 60 - g_pMySaleInfo[i].nRemainSec;	// 3일 - 남은시간

			if (nTime > g_ItemSetting.nTradeLimitTime * 60 * 60)
				return i;
		}
	}

	return NOINDEX;
}


void AuctionCancelItem(DWORD64 qwAuctionDBID)
{
	InitGlobal(Addr_CNetHandler);

	_CallFunc1 funcGetInst = (_CallFunc1)GAMEADDR(Addr_MonoSingleton_object___get_s_Instance);
	DWORD64 qwCNetHandler = funcGetInst(DWORD64V(GAMEADDR(Addr_CNetHandler)));
	if (!qwCNetHandler)
		return;

	_CallFunc2 funcCancel = (_CallFunc2)GAMEADDR(Addr_CNetHandler__OnC2S_AuctionWithdraw);
	funcCancel(qwCNetHandler, qwAuctionDBID);
}


BOOL IsNeedTradeItem(int nIndex, int* pSettingIndex)
{
	if (g_pInvenInfo[nIndex].bIsLock || g_pInvenInfo[nIndex].bIsEquip)
		return FALSE;

	if (g_pInvenInfo[nIndex].nBelong)
		return FALSE;

	int nMarketMapIdx = GetMarketMapIndex(g_pInvenInfo[nIndex].szOrgName, g_pInvenInfo[nIndex].nCurEnchant);
	if (nMarketMapIdx != NOINDEX)
	{
		// XMsg("[%s]  %d  %s  %.3f  %.3f", __FUNCTION__, nIndex, g_pInvenInfo[nIndex].szName, g_pMarketMap[nMarketMapIdx].fPerPrice, NOSELLINGPRICE);
		if (g_pMarketMap[nMarketMapIdx].fPerPrice == NOSELLINGPRICE)
			return FALSE;
	}

	int nDetailIndex = GetItemDetailIndex(&g_pInvenInfo[nIndex], ItemMode_Trade);
	if (nDetailIndex != NOINDEX)
	{
		if (g_pItemDetailInfo[nDetailIndex].nMode != ItemMode_Trade)
			return FALSE;

		if (g_pItemDetailInfo[nDetailIndex].nMarketCount < 0)
			return FALSE;

		if (g_pItemDetailInfo[nDetailIndex].nMarketCount > g_pInvenInfo[nIndex].nCount)
			return FALSE;

		if (g_pInvenInfo[nIndex].nItemType == ItemType_Weapon || g_pInvenInfo[nIndex].nItemType == ItemType_Armor || g_pInvenInfo[nIndex].nItemType == ItemType_Accessory)
		{
			if (g_pItemDetailInfo[nDetailIndex].bItemEnchant && g_pItemDetailInfo[nDetailIndex].nItemEnchant > 0 &&
				g_pInvenInfo[nIndex].nCurEnchant < g_pItemDetailInfo[nDetailIndex].nItemEnchant)
				return FALSE;

			if (g_OtherSetting.bTradeDissolve && g_pInvenInfo[nIndex].nGrade < eItemGrade_IG_RARE)
			{
				if (nMarketMapIdx != NOINDEX && g_pMarketMap[nMarketMapIdx].fPerPrice <= g_OtherSetting.nTradeDissolve * 1.0f)
					return FALSE;
			}
		}

		if (pSettingIndex)
			*pSettingIndex = nDetailIndex;

		return TRUE;
	}
	else if (g_pInvenInfo[nIndex].nGrade >= eItemGrade_IG_NORMAL && g_pInvenInfo[nIndex].nGrade <= eItemGrade_IG_MYTHICAL)
	{
		if (g_pInvenInfo[nIndex].nItemType != ItemType_None && g_pItemDefault[g_pInvenInfo[nIndex].nGrade - 1][g_pInvenInfo[nIndex].nItemType] == ItemMode_Trade)
		{
			if (g_pInvenInfo[nIndex].nItemType == ItemType_Weapon || g_pInvenInfo[nIndex].nItemType == ItemType_Armor || g_pInvenInfo[nIndex].nItemType == ItemType_Accessory)
			{
				if (g_OtherSetting.bTradeDissolve && g_pInvenInfo[nIndex].nGrade < eItemGrade_IG_RARE)
				{
					if (nMarketMapIdx != NOINDEX && g_pMarketMap[nMarketMapIdx].fPerPrice <= g_OtherSetting.nTradeDissolve * 1.0f)
						return FALSE;
				}
			}

			return TRUE;
		}
	}

	return FALSE;
}


int GetAuctionItemIndex(int* pSettingIndex)
{
	if (g_nMySaleCount >= MAX_SALE)
		return NOINDEX;

	for (int i = 0; i < g_nInvenCount; i++)
	{
		if (IsNeedTradeItem(i, pSettingIndex))
			return i;
	}

	return NOINDEX;
}


void AuctionRegisterItem(DWORD64 qwUID, int nCount, long nSalePrice)
{
	InitGlobal(Addr_CNetHandler);
	InitGlobal(Addr_List_long_TypeInfo);
	InitGlobal(Addr_Method_List_long_ctor); // ?

	_CallFunc1 funcGetInst = (_CallFunc1)GAMEADDR(Addr_MonoSingleton_object___get_s_Instance);
	DWORD64 qwCNetHandler = funcGetInst(DWORD64V(GAMEADDR(Addr_CNetHandler)));
	if (!qwCNetHandler)
		return;

	_CallFunc1 pfnAllocate = (_CallFunc1)GAMEADDR(Addr_Allocate_TypeInfo);
	DWORD64 qwParam = pfnAllocate(DWORD64V(GAMEADDR(Addr_List_long_TypeInfo))); // ?

	_CallFunc2 pfnInit = (_CallFunc2)GAMEADDR(Addr_List_long_ctor);
	pfnInit(qwParam, DWORD64V(GAMEADDR(Addr_Method_List_long_ctor)));

	_CallFunc6 funcRegister = (_CallFunc6)GAMEADDR(Addr_CNetHandler__OnC2S_AuctionRegister);
	funcRegister(qwCNetHandler, qwUID, nCount, nSalePrice, 1, qwParam);
}


void OnGameMarket()
{
	int nVisbleWindowUID = (int)GetVisibleWindowUID();

	if (g_nStepStatus == 100)
	{
		if (nVisbleWindowUID == UI_UID_AuctionWindow)
		{
			XMsg("[%s] Close", __FUNCTION__);

			CloseAllActivePopup();

			SetDelay(20);
			return;
		}

		g_bRefreshMarket = TRUE;

		SetStatus(Status_DoAuto);
		return;
	}

	if (nVisbleWindowUID != UI_UID_AuctionWindow)
	{
		XMsg("[%s] Open", __FUNCTION__);

		MenuButtonClick(L"Btn_Consignment");

		SetDelay(20);
		return;
	}

	DWORD64 qwCUIAuctionWindow = GetWindowByUI_UID((UI_UID)nVisbleWindowUID);
	if (!qwCUIAuctionWindow)
	{
		XMsg("[%s] Wait - 1", __FUNCTION__);
		return;
	}

	// 검색 설정창
	DWORD64 qwCUIAuctionWindow_SearchSetting_Popup = *(DWORD64*)(qwCUIAuctionWindow + Offset_CUIAuctionWindow_SearchSetting_Popup);
	if (IsVisibleWindow(qwCUIAuctionWindow_SearchSetting_Popup))
	{
		XMsg("[%s] Close SearchSetting Popup", __FUNCTION__);

		_CallFunc1 funcClose = (_CallFunc1)GAMEADDR(Addr_CUIAuctionWindow_SearchSetting_Popup__OnClick_Exit); // ?
		funcClose(qwCUIAuctionWindow_SearchSetting_Popup);

		SetDelay(20);
		return;
	}

	// 구매창
	DWORD64 qwCUIAuctionWindow_ItemBuy_Popup = *(DWORD64*)(qwCUIAuctionWindow + Offset_CUIAuctionWindow_ItemBuy_Popup);
	if (IsVisibleWindow(qwCUIAuctionWindow_ItemBuy_Popup))
	{
		XMsg("[%s] Close ItemBuy Popup", __FUNCTION__);

		_CallFunc1 funcClose = (_CallFunc1)GAMEADDR(Addr_CUIAuctionWindow_ItemBuy_Popup__OnClick_Cencel);
		funcClose(qwCUIAuctionWindow_ItemBuy_Popup);

		SetDelay(20);
		return;
	}

	// 판매등록
	DWORD64 qwCUIAuctionWindow_ItemSale_Popup = *(DWORD64*)(qwCUIAuctionWindow + Offset_CUIAuctionWindow_ItemSale_Popup);
	if (IsVisibleWindow(qwCUIAuctionWindow_ItemSale_Popup))
	{
		XMsg("[%s] Close ItemSale Popup", __FUNCTION__);

		_CallFunc1 funcClose = (_CallFunc1)GAMEADDR(Addr_CUIAuctionWindow_ItemSale_Popup__OnClick_Cencel);
		funcClose(qwCUIAuctionWindow_ItemSale_Popup);

		SetDelay(20);
		return;
	}

	// 등록 확인창
	DWORD64 qwCUIAuctionWindow_Sale_Public_Popup = *(DWORD64*)(qwCUIAuctionWindow + Offset_CUIAuctionWindow_Sale_Public_Popup);
	if (IsVisibleWindow(qwCUIAuctionWindow_Sale_Public_Popup))
	{
		XMsg("[%s] Close Sale Public Popup", __FUNCTION__);

		_CallFunc1 funcClose = (_CallFunc1)GAMEADDR(Addr_CUIAuctionWindow_Sale_Public_Popup__OnClick_Cencel);
		funcClose(qwCUIAuctionWindow_Sale_Public_Popup);

		SetDelay(20);
		return;
	}

	// 구매 결과창
	DWORD64 qwCUIAuctionWindow_BuyResult_Popup = *(DWORD64*)(qwCUIAuctionWindow + Offset_CUIAuctionWindow_BuyResult_Popup);
	if (IsVisibleWindow(qwCUIAuctionWindow_BuyResult_Popup))
	{
		XMsg("[%s] Close BuyResult Popup", __FUNCTION__);

		_CallFunc1 funcClose = (_CallFunc1)GAMEADDR(Addr_CUIAuctionWindow_BuyResult_Popup__OnClick_Exit);
		funcClose(qwCUIAuctionWindow_BuyResult_Popup);

		SetDelay(20);
		return;
	}


	// 정산 먼저 하자
	if (IsRedDot(eRedDotType_Btn_Consignment_Calclate))
	{
		if (!SelectToggle(DWORD64V(qwCUIAuctionWindow + Offset_CUIGroupWindow_ToggleArray), 2))
		{
			XMsg("[%s] Select Tab 2", __FUNCTION__);

			SetDelay(20);
			return;
		}

		XMsg("[%s] Calculate", __FUNCTION__);

		_CallFunc0 funcOnCalc = (_CallFunc0)GAMEADDR(Addr_CUIAuctionCalculateView_Bottom_OnClick_Calculate);
		funcOnCalc();

		SetDelay(20);
		return;
	}


	static DWORD64 s_qwNeedSearchItemUID = 0;

	if (g_bNeedSearchPrice)
	{
		int nIndex = GetInvenIndex(s_qwNeedSearchItemUID);
		if (nIndex != NOINDEX)
		{
			if (!SelectToggle(DWORD64V(qwCUIAuctionWindow + Offset_CUIGroupWindow_ToggleArray), 0))
			{
				XMsg("[%s] Select Tab 0", __FUNCTION__);

				SetDelay(20);
				return;
			}

			_CallFunc1 funcGetView = (_CallFunc1)GAMEADDR(Addr_CUIAuctionWindow__GetAuctionListView);
			DWORD64 qwCUIAuctionListView = funcGetView(qwCUIAuctionWindow);
			if (!qwCUIAuctionListView)
			{
				XMsg("[%s] Wait - 2", __FUNCTION__);
				return;
			}

			DWORD64 qwStackAuctionList = *(DWORD64*)(qwCUIAuctionListView + Offset_CUIAuctionListView_stackAuctionList);
			if (!qwStackAuctionList)
			{
				XMsg("[%s] Wait - 3", __FUNCTION__);
				return;
			}

			int nStackCount = DWORDV(qwStackAuctionList + 0x18); // Addr_System_Collections_Generic_Stack_object___get_Count
			if (nStackCount <= 0)
			{
				XMsg("[%s] Wait - 4", __FUNCTION__);
				return;
			}

			DWORD64 qwqwCAuctionStackArray = *(DWORD64*)(qwStackAuctionList + Offset_Stack_Array);
			if (!qwqwCAuctionStackArray)
			{
				XMsg("[%s] Wait - 5", __FUNCTION__);
				return;
			}

			DWORD64 qwCAuctionList = *(DWORD64*)(qwqwCAuctionStackArray + (nStackCount - 1) * 8 + Offset_Array_Data);
			if (!qwCAuctionList)
			{
				XMsg("[%s] Wait - 6", __FUNCTION__);
				return;
			}

			DWORD64 qwSaleList = *(DWORD64*)(qwCAuctionList + Offset_CUIAuctionListView_CAuctionList_AuctionList);
			if (!qwSaleList)
			{
				XMsg("[%s] Wait - 7", __FUNCTION__);
				return;
			}

			// 판매 물품 갱신
			UpdateAuctionSaleItemInfo(qwSaleList);
			XMsg("[%s] AuctionSaleCount = %d", __FUNCTION__, g_nAuctionSaleCount);

			// 해당 물품이 검색이 안되였으면
			DWORD dwSearchItemID = *(DWORD*)(qwCAuctionList + Offset_CUIAuctionListView_CAuctionList_ItemIndex);
			XMsg("[%s] SearchItemID = %d", __FUNCTION__, dwSearchItemID);
			if (dwSearchItemID == 0 && GetAuctionSaleItemIndex(g_pInvenInfo[nIndex].dwID) == NOINDEX ||
				dwSearchItemID != 0 && dwSearchItemID != g_pInvenInfo[nIndex].dwID)
			{
				XMsg("[%s] Search Item %s", __FUNCTION__, g_pInvenInfo[nIndex].szOrgName);

				// 물품 검색하자
				_CallFunc2 funcSearch = (_CallFunc2)GAMEADDR(Addr_CUIAuctionWindow___OnClick_Search);
				funcSearch(qwCUIAuctionWindow, g_pInvenInfo[nIndex].dwID);

				SetDelay(20);
				return;
			}

			int nSearchEnchant = *(int*)(qwCAuctionList + Offset_CUIAuctionListView_CAuctionList_ItemEnchant);
			int nListType = *(int*)(qwCAuctionList + Offset_CUIAuctionListView_CAuctionList_ListType);			// GameDefine.Auction.eListType
			XMsg("[%s] ListType = %d", __FUNCTION__, nListType);

			int nTargetListType = 1;
			if (g_pInvenInfo[nIndex].nItemType == ItemType_Weapon || g_pInvenInfo[nIndex].nItemType == ItemType_Armor || g_pInvenInfo[nIndex].nItemType == ItemType_Accessory)
				nTargetListType = 2;

			BOOL bFound = FALSE;
			for (int i = 0; i < g_nAuctionSaleCount; i++)
			{
				if (g_pAuctionSaleInfo[i].dwItemID != g_pInvenInfo[nIndex].dwID)
					continue;

				if (g_pAuctionSaleInfo[i].bTradeStatus == 0)	// 0 - 없음, 1 - 있음
					continue;

				if (g_pAuctionSaleInfo[i].nCount <= 0)
					continue;

				if (nListType == nTargetListType)
				{
					DWORD64 qwFilterOneBtn = DWORD64V(qwCUIAuctionListView + 0xA8);
					XMsg("[%s] FilterOneBtn = %p, %d", __FUNCTION__, qwFilterOneBtn, IsActiveWidget(qwFilterOneBtn));
					if (nListType == 1 && IsActiveWidget(qwFilterOneBtn))
					{
						int nSortType = DWORDV(qwCUIAuctionListView + 0x104);
						XMsg("[%s] SortType = %d", __FUNCTION__, nSortType);
						if (nSortType == 0)
						{
							XMsg("[%s] Click FilterOneBtn", __FUNCTION__);

							ClickButton(qwFilterOneBtn);
							SetDelay(20);
							return;
						}
					}

					bFound = TRUE;
					break;
				}

				if (nListType == 0 || (nListType == 1 && g_pAuctionSaleInfo[i].nEnchant == g_pInvenInfo[nIndex].nCurEnchant))
				{
					DWORD64 qwCUIAuctionListViewScrollView = *(DWORD64*)(qwCUIAuctionListView + Offset_CUIAuctionListView_ListViewScrollView);
					if (!qwCUIAuctionListViewScrollView)
					{
						XMsg("[%s] Wait - 8", __FUNCTION__);
						return;
					}

					_CallFunc2 funcGetSlot = (_CallFunc2)GAMEADDR(Addr_CUIAuctionListViewScrollView__GetSlotViewsHolder);
					DWORD64 qwCUIAuctionListViewScrollView_SlotViewsHolder = funcGetSlot(qwCUIAuctionListViewScrollView, i);
					if (!qwCUIAuctionListViewScrollView_SlotViewsHolder)
					{
						XMsg("[%s] Wait - 9", __FUNCTION__);
						return;
					}

					DWORD64 qwScrollViewSlot = *(DWORD64*)(qwCUIAuctionListViewScrollView_SlotViewsHolder + Offset_CUIAuctionListViewScrollView_SlotViewsHolder_Slot);
					if (!qwScrollViewSlot)
					{
						XMsg("[%s] Wait - 10", __FUNCTION__);
						return;
					}

					XMsg("[%s] Select search item", __FUNCTION__);

					_CallFunc1 funcClick = (_CallFunc1)GAMEADDR(Addr_CUIAuctionListViewScrollView_Slot__OnClick_SelectSlot);
					funcClick(qwScrollViewSlot);

					SetDelay(30);
					return;
				}
			}

			if (!bFound)
			{
				XMsg("물품 \"%s\"의 시세정보가 없습니다", g_pInvenInfo[nIndex].szName);
				ShowStatus(1, 60267, g_pInvenInfo[nIndex].szName);

				int nMarketMapIdx = GetMarketMapIndex(g_pInvenInfo[nIndex].szOrgName, g_pInvenInfo[nIndex].nCurEnchant);
				if (nMarketMapIdx == NOINDEX)
				{
					XMsg("[%s] AddMap1 [%s] %.3f", __FUNCTION__, g_pInvenInfo[nIndex].szName, NOSELLINGPRICE);
					AddMarketMap(g_pInvenInfo[nIndex].szOrgName, g_pInvenInfo[nIndex].nCurEnchant, NOSELLINGPRICE);
				}
				else
				{
					XMsg("[%s] UpdateMap1 [%s] %.3f -> %.3f", __FUNCTION__, g_pInvenInfo[nIndex].szName, g_pMarketMap[nMarketMapIdx].fPerPrice, NOSELLINGPRICE);
					g_pMarketMap[nMarketMapIdx].fPerPrice = NOSELLINGPRICE;
				}
			}
			else
			{
				for (int i = 0; i < g_nAuctionSaleCount; i++)
				{
					if (g_pAuctionSaleInfo[i].dwItemID != g_pInvenInfo[nIndex].dwID)
					{
						g_nAuctionSaleCount = i;
						break;
					}
				}
			}
		}

		g_bNeedSearchPrice = FALSE;
		return;
	}


	if (!SelectToggle(DWORD64V(qwCUIAuctionWindow + Offset_CUIGroupWindow_ToggleArray), 1))
	{
		XMsg("[%s] Select Tab 1", __FUNCTION__);

		SetDelay(20);
		return;
	}

	_CallFunc1 funcGetView = (_CallFunc1)GAMEADDR(Addr_CUIAuctionWindow__GetAuctionSaleView);
	DWORD64 qwCUIAuctionSaleView = funcGetView(qwCUIAuctionWindow);
	if (!qwCUIAuctionSaleView)
	{
		XMsg("[%s] Wait - 11", __FUNCTION__);
		return;
	}

	DWORD64 qwMySaleList = *(DWORD64*)(qwCUIAuctionSaleView + Offset_CUIAuctionSaleView_SaleItemList);
	if (!qwMySaleList)
	{
		XMsg("[%s] Wait - 12", __FUNCTION__);
		return;
	}

	UpdateMySaleItemInfo(qwMySaleList);

	int nAuctionLevel = DWORDV(qwCUIAuctionSaleView + Offset_CUIAuctionSaleView_AuctionLevel);
	int nTotalSellPrice = GetTotalSellPrice(nAuctionLevel);

	int nCurSellPrice = 0;
	for (int i = 0; i < g_nMySaleCount; i++)
		nCurSellPrice += g_pMySaleInfo[i].nPrice;

	XMsg("[%s] AuctionLevel = %d,  TotalSellPrice = %d,  CurSellPrice = %d", __FUNCTION__, nAuctionLevel, nTotalSellPrice, nCurSellPrice);


	if (g_nInvenCount < g_nInvenMaxCount)
	{
		int nRetryIdx = GetAuctionRetryIndex();

		for (int i = 0; i < g_nMySaleCount; i++)
		{
			if (i == nRetryIdx || g_pMySaleInfo[i].bTradeStatus == 6 && g_pMySaleInfo[i].qwAuctionDBID)
			{
				XMsg("아이템 \"%s\" 을(를) 회수합니다", g_pMySaleInfo[i].szName);
				ShowStatus(1, 60265, g_pMySaleInfo[i].szName);

				AuctionCancelItem(g_pMySaleInfo[i].qwAuctionDBID);

				SetDelay(20);
				return;
			}
		}
	}

	int nSettingIdx = NOINDEX;
	int nInvenIdx = GetAuctionItemIndex(&nSettingIdx);
	if (nInvenIdx != NOINDEX)
	{
		int nCount = 0;
		float fPrice = 0.0f;

		if (nSettingIdx != NOINDEX && g_pItemDetailInfo[nSettingIdx].nMarketMode == 0)
		{
			nCount = g_pItemDetailInfo[nSettingIdx].nMarketCount;
			if (nCount == 0)
				nCount = g_pInvenInfo[nInvenIdx].nCount;

			nCount = min(100, nCount);

			fPrice = (float)g_pItemDetailInfo[nSettingIdx].nMarketPrice * (float)nCount;
			if (fPrice < 10.0f)
				fPrice = 10.0f;
		}
		else
		{
			if (g_nAuctionSaleCount > 0 && g_pAuctionSaleInfo[0].dwItemID == g_pInvenInfo[nInvenIdx].dwID && g_pAuctionSaleInfo[0].nCount > 0 &&
				/*g_pAuctionSaleInfo[0].dwDepth == eMarketSearchDeatph_PurchaseItem && */g_pAuctionSaleInfo[0].nEnchant == g_pInvenInfo[nInvenIdx].nCurEnchant)
			{
				if (nSettingIdx != NOINDEX)
				{
					int nOffset = max(0, min(g_pItemDetailInfo[nSettingIdx].nMarketIndex, g_nAuctionSaleCount - 1));
					float fPerPrice = g_pAuctionSaleInfo[nOffset].nPrice * 1.0f / g_pAuctionSaleInfo[nOffset].nCount;

					int nMarketMapIdx = GetMarketMapIndex(g_pInvenInfo[nInvenIdx].szOrgName, g_pInvenInfo[nInvenIdx].nCurEnchant);
					if (nMarketMapIdx == NOINDEX)
					{
						XMsg("[%s] AddMap2 [%s] %.3f", __FUNCTION__, g_pInvenInfo[nInvenIdx].szName, fPerPrice);
						AddMarketMap(g_pInvenInfo[nInvenIdx].szOrgName, g_pInvenInfo[nInvenIdx].nCurEnchant, fPerPrice);
						return;
					}

					if (g_pMarketMap[nMarketMapIdx].fPerPrice != fPerPrice)
					{
						XMsg("[%s] UpdateMap2 [%s] %.3f -> %.3f", __FUNCTION__, g_pInvenInfo[nInvenIdx].szName, g_pMarketMap[nMarketMapIdx].fPerPrice, fPerPrice);
						g_pMarketMap[nMarketMapIdx].fPerPrice = fPerPrice;
						return;
					}

					nCount = g_pItemDetailInfo[nSettingIdx].nMarketCount;
					if (nCount == 0)
					{
						nCount = g_pInvenInfo[nInvenIdx].nCount;
						nCount = min(100, nCount);
						fPrice = fPerPrice * nCount;
						fPrice += g_pItemDetailInfo[nSettingIdx].nMarketPrice;

						if (fPrice < 10.0f)
						{
							ShowStatus(1, 60298, g_pInvenInfo[nInvenIdx].szName);

							XMsg("[%s] UpdateMap3 [%s] %.3f -> %.3f", __FUNCTION__, g_pInvenInfo[nInvenIdx].szName, g_pMarketMap[nMarketMapIdx].fPerPrice, NOSELLINGPRICE);
							g_pMarketMap[nMarketMapIdx].fPerPrice = NOSELLINGPRICE;
							return;
						}
					}
					else
					{
						nCount = min(100, nCount);
						fPrice = fPerPrice * nCount;
						fPrice += g_pItemDetailInfo[nSettingIdx].nMarketPrice;
						if (fPrice < 10.0f)
							fPrice = 10.0f;
					}
				}
				else
				{
					float fPerPrice = g_pAuctionSaleInfo[0].nPrice * 1.0f / g_pAuctionSaleInfo[0].nCount;

					int nMarketMapIdx = GetMarketMapIndex(g_pInvenInfo[nInvenIdx].szOrgName, g_pInvenInfo[nInvenIdx].nCurEnchant);
					if (nMarketMapIdx == NOINDEX)
					{
						XMsg("[%s] AddMap3 [%s] %.3f", __FUNCTION__, g_pInvenInfo[nInvenIdx].szName, fPerPrice);
						AddMarketMap(g_pInvenInfo[nInvenIdx].szOrgName, g_pInvenInfo[nInvenIdx].nCurEnchant, fPerPrice);
						return;
					}

					if (g_pMarketMap[nMarketMapIdx].fPerPrice != fPerPrice)
					{
						g_pMarketMap[nMarketMapIdx].fPerPrice = fPerPrice;
						return;
					}

					nCount = g_pInvenInfo[nInvenIdx].nCount;
					nCount = min(100, nCount);
					fPrice = fPerPrice * nCount + 0.0f;

					if (fPrice < 10.0f)
					{
						ShowStatus(1, 60298, g_pInvenInfo[nInvenIdx].szName);

						XMsg("[%s] UpdateMap4 [%s] %.3f -> %.3f", __FUNCTION__, g_pInvenInfo[nInvenIdx].szName, g_pMarketMap[nMarketMapIdx].fPerPrice, NOSELLINGPRICE);
						g_pMarketMap[nMarketMapIdx].fPerPrice = NOSELLINGPRICE;
						return;
					}
				}
			}
			else
			{
				g_bNeedSearchPrice = TRUE;
				s_qwNeedSearchItemUID = g_pInvenInfo[nInvenIdx].qwItemUID;
				g_nAuctionSaleCount = 0;
				return;
			}
		}

		if ((int)fPrice > nTotalSellPrice - nCurSellPrice)
		{
			int nMarketMapIdx = GetMarketMapIndex(g_pInvenInfo[nInvenIdx].szOrgName, g_pInvenInfo[nInvenIdx].nCurEnchant);
			if (nMarketMapIdx == NOINDEX)
			{
				XMsg("[%s] AddMap4 [%s] %.3f", __FUNCTION__, g_pInvenInfo[nInvenIdx].szName, NOSELLINGPRICE);
				AddMarketMap(g_pInvenInfo[nInvenIdx].szOrgName, g_pInvenInfo[nInvenIdx].nCurEnchant, NOSELLINGPRICE);
			}
			else
			{
				XMsg("[%s] UpdateMap4 [%s] %.3f -> %.3f", __FUNCTION__, g_pInvenInfo[nInvenIdx].szName, g_pMarketMap[nMarketMapIdx].fPerPrice, NOSELLINGPRICE);
				g_pMarketMap[nMarketMapIdx].fPerPrice = NOSELLINGPRICE;
			}

			return;
		}

		XMsg("아이템 \"%s\" 을(를) %d 다이아에 %d개 등록합니다", g_pInvenInfo[nInvenIdx].szName, (int)fPrice, nCount);
		ShowStatus(5, 60266, g_pInvenInfo[nInvenIdx].szName, (int)fPrice, nCount);

		AuctionRegisterItem(g_pInvenInfo[nInvenIdx].qwItemUID, nCount, (int)fPrice);
		SetDelay(20);
		return;
	}

	g_nStepStatus = 100;
}


DWORD GetDoingQuestID()
{
	InitGlobal(Addr_CQuestManager);

	_CallFunc1 funcGetInstance = (_CallFunc1)GAMEADDR(Addr_MonoSingleton_object___get_s_Instance);
	DWORD64 qwCQuestManager = funcGetInstance(DWORD64V(GAMEADDR(Addr_CQuestManager)));
	if (qwCQuestManager)
	{
		DWORD64 qwTargetInfo = DWORD64V(qwCQuestManager + 0x58); // Addr_CQuestManager__get_QuestTarget in mobile
		if (qwTargetInfo)
		{
			DWORD64 qwQuestInfo = *(DWORD64*)(qwTargetInfo + Offset_Quest_TargetInfo_Get_QuestInfo);
			if (qwQuestInfo)
				return *(DWORD*)(qwQuestInfo + Offset_QuestInfo_ID);
		}
	}

	return 0;
}


void StartQuest(DWORD dwQuestID)
{
	InitGlobal(Addr_CQuestManager);

	_CallFunc1 funcGetInstance = (_CallFunc1)GAMEADDR(Addr_MonoSingleton_object___get_s_Instance);
	DWORD64 qwCQuestManager = funcGetInstance(DWORD64V(GAMEADDR(Addr_CQuestManager)));
	if (qwCQuestManager)
	{
		_CallFunc2 funcStart = (_CallFunc2)GAMEADDR(Addr_CQuestManager__StartQuest);
		funcStart(qwCQuestManager, dwQuestID);
	}
}


void CompleteQuest(DWORD dwQuestID)
{
	InitGlobal(Addr_CQuestManager);

	_CallFunc1 funcGetInstance = (_CallFunc1)GAMEADDR(Addr_MonoSingleton_object___get_s_Instance);
	DWORD64 qwCQuestManager = funcGetInstance(DWORD64V(GAMEADDR(Addr_CQuestManager)));
	if (qwCQuestManager)
	{
		_CallFunc2 funcComplete = (_CallFunc2)GAMEADDR(Addr_CQuestManager__StartComplete);
		funcComplete(qwCQuestManager, dwQuestID);
	}
}


void OnGameDoQuest(int nQuestIdx)
{
	if (g_pQuestInfo[nQuestIdx].nState == eQuestState_QS_COMPLETE)
	{
		static DWORD s_dwPreQuestID = 0;
		static int s_nCompleteTry = 0;

		if (s_dwPreQuestID != g_pQuestInfo[nQuestIdx].dwID)
		{
			s_dwPreQuestID = g_pQuestInfo[nQuestIdx].dwID;
			s_nCompleteTry = 0;
		}
		else
		{
			if (s_nCompleteTry >= 3)
			{
				XMsg("Quest Cao !!!");

// 				s_dwPreQuestID = 0;
// 				s_nCompleteTry = 0;

				if (g_nCaoQuestCount < MAX_CAOQUEST)
					g_pCaoQuestID[g_nCaoQuestCount++] = g_pQuestInfo[nQuestIdx].dwID;

				return;
			}
		}

		s_nCompleteTry++;


		XMsg(L"퀘스트 \"%s\" 을(를) 완료합니다", g_pQuestInfo[nQuestIdx].szName);
		ShowStatus(1, 60254, g_pQuestInfo[nQuestIdx].szName);

		CompleteQuest(g_pQuestInfo[nQuestIdx].dwID);

		SetDelay(20);
		return;
	}

	if (g_pQuestInfo[nQuestIdx].nState == eQuestState_QS_NEW)
	{
		XMsg(L"퀘스트 \"%s\" 수락", g_pQuestInfo[nQuestIdx].szName);

		StartQuest(g_pQuestInfo[nQuestIdx].dwID);

		SetDelay(20);
		return;
	}

	if (g_pQuestInfo[nQuestIdx].dwID != GetDoingQuestID())
	{
		static DWORD s_dwPreStartQuestID = 0;
		if (g_pQuestInfo[nQuestIdx].dwID != s_dwPreStartQuestID)
		{
			s_dwPreStartQuestID = g_pQuestInfo[nQuestIdx].dwID;

			if (g_pQuestInfo[nQuestIdx].nKind == eQuestType_QT_MAIN)
			{
				XMsg(L"메인 퀘스트 \"%s\" 을(를) 진행합니다", g_pQuestInfo[nQuestIdx].szName);
				ShowStatus(1, 60157, g_pQuestInfo[nQuestIdx].szName);
			}
			else if (g_pQuestInfo[nQuestIdx].nKind == eQuestType_QT_SUB)
			{
				XMsg(L"서브 퀘스트 \"%s\" 을(를) 진행합니다", g_pQuestInfo[nQuestIdx].szName);
				ShowStatus(1, 60158, g_pQuestInfo[nQuestIdx].szName);
			}
			else if (g_pQuestInfo[nQuestIdx].nKind == eQuestType_QT_REQUEST)
			{
				XMsg(L"의뢰 퀘스트 \"%s\" 을(를) 진행합니다", g_pQuestInfo[nQuestIdx].szName);
				ShowStatus(1, 60255, g_pQuestInfo[nQuestIdx].szName);
			}
		}

		StartQuest(g_pQuestInfo[nQuestIdx].dwID);
		SetDelay(20);
		return;
	}
}

BOOL IsNeedStoreGetItem(int nIndex)
{
	if (g_OtherSetting.bGetAll)
		return TRUE;

	if (g_pWarehouseInfo[nIndex].dwID == eItemSubType_ENCHANT_NORMAL_WEAPON
		|| g_pWarehouseInfo[nIndex].dwID == eItemSubType_ENCHANT_NORMAL_ARMOR
		|| g_pWarehouseInfo[nIndex].dwID == eItemSubType_ENCHANT_NORMAL_ACCESSORY)
		return TRUE;

	int nDetailIndex = GetItemDetailIndex(&g_pWarehouseInfo[nIndex], ItemMode_Get);
	if (nDetailIndex != NOINDEX)
	{
		if (g_pItemDetailInfo[nDetailIndex].nMode == ItemMode_Get)
			return TRUE;
	}
	else if (g_pWarehouseInfo[nIndex].nGrade >= eItemGrade_IG_NORMAL && g_pWarehouseInfo[nIndex].nGrade <= eItemGrade_IG_MYTHICAL)
	{
		if (g_pWarehouseInfo[nIndex].nItemType != ItemType_None)
		{
			if (g_pItemDefault[g_pWarehouseInfo[nIndex].nGrade - 1][g_pWarehouseInfo[nIndex].nItemType] == ItemMode_Get)
				return TRUE;
		}
	}

	return FALSE;
}


BOOL IsExistGetItemSetting()
{
	if (g_OtherSetting.bGetEquip && g_nWarehouseCount > 0)
	{
		int nEquipChar = GetEquipsChar(g_nGameServer);
		if (nEquipChar == 0)
			return TRUE;
	}

	for (int i = 0; i < g_nWarehouseCount; i++)
	{
		if (IsNeedStoreGetItem(i))
			return TRUE;
	}

	return FALSE;
}


int GetPotionIndex(WCHAR* szName)
{
	for (int i = 0; i < MAX_POTION; i++)
	{
		if (!wcscmp(g_pPotionRes[i].szKRName, szName) || !wcscmp(g_pPotionRes[i].szTWName, szName))
			return i;
	}

	return NOINDEX;
}


BOOL IsNeedReturn()
{
	if (g_pCharInfo.nLevel < 10)
		return FALSE;

	// 체력이 부족한 경우 (마을이 아닌 경우에만 따져야 한다)
	static DWORD64 s_qwHpReturnTick = 0;
	if (g_HuntSetting.bHpReturn)
	{
		int nPercent = 100;
		if (g_pCharInfo.nMaxHp > 0)
			nPercent = g_pCharInfo.nCurHp * 100 / g_pCharInfo.nMaxHp;

		if (nPercent <= g_HuntSetting.nHpReturnValue)
		{
			if (s_qwHpReturnTick == 0)
				s_qwHpReturnTick = g_qwTickCount;

			if (g_qwTickCount >= s_qwHpReturnTick + g_HuntSetting.nHpReturnTime * 1000)
			{
				XMsg("%d초이상 체력이 %d%%미만이므로 귀환합니다", g_HuntSetting.nHpReturnTime, g_HuntSetting.nHpReturnValue);
				ShowStatus(4, 60220, NULL, g_HuntSetting.nHpReturnTime, g_HuntSetting.nHpReturnValue);
				return TRUE;
			}
		}
		else
			s_qwHpReturnTick = 0;
	}
	else
		s_qwHpReturnTick = 0;


	// 무게가 많은 경우
	static DWORD64 s_qwWeightReturnTick = 0;
	if (g_HuntSetting.bWeightReturn)
	{
		if (g_nInvenWeight >= g_HuntSetting.nWeightReturnValue)
		{
			if (s_qwWeightReturnTick == 0)
				s_qwWeightReturnTick = g_qwTickCount;

			if (g_qwTickCount >= s_qwWeightReturnTick + g_HuntSetting.nWeightReturnTime * 1000)
			{
				XMsg(L"%d초이상 무게가 %d%%이상이므로 귀환합니다", g_HuntSetting.nWeightReturnTime, g_HuntSetting.nWeightReturnValue);
				ShowStatus(4, 60221, NULL, g_HuntSetting.nWeightReturnTime, g_HuntSetting.nWeightReturnValue);
				return TRUE;
			}
		}
		else
			s_qwWeightReturnTick = 0;
	}
	else
		s_qwWeightReturnTick = 0;


	// 아이템 부족
	for (int i = 0; i < g_nReturnCount; i++)
	{
		if (!g_pReturnInfo[i].bEnable)
			continue;

		int nPotionIdx = GetPotionIndex(g_pReturnInfo[i].szName);
		if (nPotionIdx == NOINDEX)
			continue;

		if (g_pPotionRes[nPotionIdx].nClassType != ePlayerClass_PC_COMMON && g_pPotionRes[nPotionIdx].nClassType != g_pCharInfo.nClassType)
			continue;

		int nCount = GetInvenCountByID(g_pPotionRes[nPotionIdx].dwID);
		if (nCount <= g_pReturnInfo[i].nCount)
		{
			XMsg(L"아이템 \"%s\" 이(가) 부족하여 귀환합니다", g_pReturnInfo[i].szName);
			ShowStatus(1, 60222, g_pReturnInfo[i].szName);
			return TRUE;
		}
	}

	return FALSE;
}


BOOL CloseAllWidget(DWORD64 qwWidgetType)
{
	int nVisbleWindowUID = (int)GetVisibleWindowUID();

	if (nVisbleWindowUID == UI_UID_Inventory)
		return FALSE;

	if (nVisbleWindowUID != UI_UID_None)
	{
		XMsg("[%s] Close", __FUNCTION__);

		CloseAllActivePopup();

		SetDelay(20);
		return TRUE;
	}

	return FALSE;
}


BOOL OnChangeSetting(int nHp, int nHuntRange)
{
	InitGlobal(Addr_COption_TypeInfo);

	DWORD64 qwCoption = *(DWORD64*)(*(DWORD64*)(GAMEADDR(Addr_COption_TypeInfo)) + Offset_TypeInfo_Instance);
	if (!qwCoption)
		return FALSE;

	BOOL bSaveOption = FALSE;

	DWORD64 qwCOption_CBattle = qwCoption + Offset_COption_CBattle;
	if (qwCOption_CBattle)
	{
		// 매너 모드
		int nMannerMode = *(char*)(qwCOption_CBattle + Offset_COption_CBattle_MannerMode);
		if (nMannerMode != g_HuntSetting.bMannerMode)
		{
			bSaveOption = TRUE;
			*(char*)(qwCOption_CBattle + Offset_COption_CBattle_MannerMode) = g_HuntSetting.bMannerMode;
		}

		//  탐색 범위 (10m - 1, 20m - 2, 40m - 3, 최대 - 0)
		int nSearchRange = *(char*)(qwCOption_CBattle + Offset_COption_CBattle_AutoHuntingSearchScope);
		if (nSearchRange != nHuntRange)
		{
			bSaveOption = TRUE;
			*(char*)(qwCOption_CBattle + Offset_COption_CBattle_AutoHuntingSearchScope) = nHuntRange;
		}

		// 일반 체력 회복제 자동 사용
		int nAutoPotionSmall = *(char*)(qwCOption_CBattle + Offset_COption_CBattle_AutoUsePercent_S);
		if (nAutoPotionSmall != 90)
		{
			bSaveOption = TRUE;
			*(char*)(qwCOption_CBattle + Offset_COption_CBattle_AutoUsePercent_S) = 90;
		}

		// 상급 체력 회복제 자동 사용
		int nAutoPotionTop = *(char*)(qwCOption_CBattle + Offset_COption_CBattle_AutoUsePercent_M);
		if (nAutoPotionTop != nHp)
		{
			bSaveOption = TRUE;
			*(char*)(qwCOption_CBattle + Offset_COption_CBattle_AutoUsePercent_M) = nHp;
		}

		// 자동 장비시 장비 획득 (0 - 끄기, 1 - 전체, 2 - 고급, 3 - 희귀)
// 		int nPickupEquipGrade = *(char*)(qwCOption_CBattle + Offset_COption_CBattle_PickupEquipGrade);
// 		if (nPickupEquipGrade == 2)
// 		{
// 			bSaveOption = TRUE;
// 			*(char*)(qwCOption_CBattle + Offset_COption_CBattle_PickupEquipGrade) = 2;
// 		}

		// 자동 사냥시 아이템 획득
		int nPickupUseItem = *(char*)(qwCOption_CBattle + Offset_COption_CBattle_PickupUseItem);
		if (nPickupUseItem != 1)
		{
			bSaveOption = TRUE;
			*(char*)(qwCOption_CBattle + Offset_COption_CBattle_PickupUseItem) = 1;
		}

		int nPickupMaterialItem = *(char*)(qwCOption_CBattle + Offset_COption_CBattle_PickupMaterialItem);
		if (nPickupMaterialItem != 1)
		{
			bSaveOption = TRUE;
			*(char*)(qwCOption_CBattle + Offset_COption_CBattle_PickupMaterialItem) = 1;
		}

		// 절전
		int nSleepMode = *(char*)(qwCOption_CBattle + Offset_COption_CBattle_SleepMode);
		if (nSleepMode != 0)
		{
			bSaveOption = TRUE;
			*(char*)(qwCOption_CBattle + Offset_COption_CBattle_SleepMode) = 0;
		}

		// 진동
		int nVibrateMode = *(char*)(qwCOption_CBattle + Offset_COption_CBattle_CamerVibrate);
		if (nVibrateMode != 0)
		{
			bSaveOption = TRUE;
			*(char*)(qwCOption_CBattle + Offset_COption_CBattle_CamerVibrate) = 0;
		}
	}

	DWORD64 qwCOption_CEnvironment = qwCoption + Offset_COption_CEnvironment;
	if (qwCOption_CEnvironment)
	{
		// 그래픽 해상도
		int nGraphicResolution = *(char*)(qwCOption_CEnvironment + Offset_COption_CEnvironment_GraphicResolution);
		if (nGraphicResolution != 1)
		{
			bSaveOption = TRUE;
			*(char*)(qwCOption_CEnvironment + Offset_COption_CEnvironment_GraphicResolution) = 1;
		}

		// 그래픽 품질 (하)
		int nAllGraphicQuality = *(char*)(qwCOption_CEnvironment + Offset_COption_CEnvironment_AllGraphicQuality);
		if (nAllGraphicQuality != 1)
		{
			bSaveOption = TRUE;
			*(char*)(qwCOption_CEnvironment + Offset_COption_CEnvironment_AllGraphicQuality) = 1;
		}

		// 프레임 (1 - 15fps, 2 - 30fps, 3 - 60fps)
		int nFrameControl = *(char*)(qwCOption_CEnvironment + Offset_COption_CEnvironment_FrameControl);
		if (nFrameControl != 1)
		{
			bSaveOption = TRUE;
			*(char*)(qwCOption_CEnvironment + Offset_COption_CEnvironment_FrameControl) = 1;
		}
	}

	DWORD64 qwCOption_CAlarm = qwCoption + Offset_COption_CAlarm;
	if (qwCOption_CAlarm)
	{
		// 글로벌 획득 메시지
		int nItemGlobalMessageCharacterHide = *(char*)(qwCOption_CAlarm + Offset_COption_CAlarm_ItemGlobalMessageCharacterHide);
		if (nItemGlobalMessageCharacterHide != TRUE)
		{
			bSaveOption = TRUE;
			*(char*)(qwCOption_CAlarm + Offset_COption_CAlarm_ItemGlobalMessageCharacterHide) = TRUE;
		}
	}

	if (bSaveOption)
	{
		_CallFunc1 funcSave = (_CallFunc1)GAMEADDR(Addr_COption__Save);
		funcSave(qwCoption);
	}

	return bSaveOption;
}


BOOL IsNeedStorePutItem(int nIndex)
{
	if (/*g_pInvenInfo[nIndex].bLocked || */g_pInvenInfo[nIndex].bIsEquip)
		return FALSE;

	if (!g_pInvenInfo[nIndex].bWarehouse)
		return FALSE;

	// 	if (g_pInvenInfo[nIndex].nBelong == eBelongType_IOT_BELONG_CHAR)
	// 		return FALSE;

	int nDetailIndex = GetItemDetailIndex(&g_pInvenInfo[nIndex], ItemMode_Store);
	if (nDetailIndex != NOINDEX)
	{
		if (g_pItemDetailInfo[nDetailIndex].nMode == ItemMode_Store)
			return TRUE;
	}
	else if (g_pInvenInfo[nIndex].nGrade >= eItemGrade_IG_NORMAL && g_pInvenInfo[nIndex].nGrade <= eItemGrade_IG_MYTHICAL)
	{
		if (g_pInvenInfo[nIndex].nItemType != ItemType_None)
		{
			if (g_pItemDefault[g_pInvenInfo[nIndex].nGrade - 1][g_pInvenInfo[nIndex].nItemType] == ItemMode_Store)
				return TRUE;
		}
	}

	return FALSE;
}


void SetStoreItemList(BOOL bEquip)
{
	g_nStoreListCount = 0;

	// 장착 장비 정보
	if (bEquip)
	{
		for (int i = 0; i < g_nInvenCount; i++)
		{
			if (g_nStoreListCount >= MAX_INVEN * 2)
				break;

			if (/*g_pInvenInfo[i].bLocked || */!g_pInvenInfo[i].bIsEquip)
				continue;

			//			if (g_pInvenInfo[i].nBelong != eBelongType_IOT_BELONG_CHAR)
			if (g_pInvenInfo[i].bWarehouse)
				g_qwStoreList[g_nStoreListCount++] = g_pInvenInfo[i].qwItemUID;
		}
	}

	for (int i = 0; i < g_nInvenCount; i++)
	{
		if (g_nStoreListCount >= MAX_INVEN * 2)
			break;

		if (g_pInvenInfo[i].nSubType == eItemSubType_ENCHANT_NORMAL_WEAPON
			|| g_pInvenInfo[i].nSubType == eItemSubType_ENCHANT_NORMAL_ARMOR
			|| g_pInvenInfo[i].nSubType == eItemSubType_ENCHANT_NORMAL_ACCESSORY)
		{
			//			if (g_pInvenInfo[i].nBelong != eBelongType_IOT_BELONG_CHAR)
			if (g_pInvenInfo[i].bWarehouse)
			{
				g_qwStoreList[g_nStoreListCount++] = g_pInvenInfo[i].qwItemUID;
				continue;
			}
		}

		if (IsNeedStorePutItem(i))
			g_qwStoreList[g_nStoreListCount++] = g_pInvenInfo[i].qwItemUID;
	}
}


void SetQuickSlotAutoState(int nIndex, BOOL bState)
{
	if (nIndex < 0 || nIndex >= MAX_QUICKSLOT)
		return;

	if (g_pQuickSlotInfo[nIndex].bIsAuto == bState)
		return;

	if (g_pQuickSlotInfo[nIndex].bCanAuto)
	{
		_CallFunc2 funcSetAuto = (_CallFunc2)GAMEADDR(Addr_CUIQuickSlotButton__SendAutoUse);
		funcSetAuto(g_pQuickSlotInfo[nIndex].qwSlotButton, bState);
	}
}


BOOL OnAutoQuickSlotItem()
{
	for (int i = 0; i < MAX_QUICKSLOTRES; i++)
	{
		if (g_pQuickSlotRes[i].nClassType != ePlayerClass_PC_COMMON && g_pQuickSlotRes[i].nClassType != g_pCharInfo.nClassType)
			continue;

		int nSlotIdx = GetQuickSlotItemIndexByID(g_pQuickSlotRes[i].dwID);
		if (nSlotIdx == NOINDEX)
			continue;

		if (g_pQuickSlotInfo[nSlotIdx].bCanAuto && !g_pQuickSlotInfo[nSlotIdx].bIsAuto)
		{
			XMsg("[%s] Set Auto %s", __FUNCTION__, g_pQuickSlotInfo[nSlotIdx].szName);
			SetQuickSlotAutoState(nSlotIdx, TRUE);
			return TRUE;
		}
	}

	return FALSE;
}


int GetSettingSkillIndex(DWORD dwSkillID)
{
	for (int i = 0; i < g_nSkillInterval; i++)
	{
		if (g_pSkillInterval[i].dwSkillID == dwSkillID)
			return i;
	}

	return NOINDEX;
}


int GetSkillCycleIndex(DWORD dwID)
{
	for (int i = 0; i < g_nSkillCycleCount; i++)
	{
		if (g_pSkillCycleInfo[i].dwSkillID == dwID)
			return i;
	}

	return NOINDEX;
}


int GetNeedSkillIndex()
{
	for (int i = 0; i < g_nSkillCount; i++)
	{
		if (!g_pSkillInfo[i].bCanAuto)
			continue;

		int nSettingIdx = GetSettingSkillIndex(g_pSkillInfo[i].dwID);
		if (nSettingIdx == NOINDEX)
			continue;

		if (g_pSkillInfo[i].bIsAuto != g_pSkillInterval[nSettingIdx].bEnable)
			return i;

		if (g_pSkillInfo[i].bIsAuto)
		{
			int nCycleIdx = GetSkillCycleIndex(g_pSkillInfo[i].dwID);
			if (nCycleIdx == NOINDEX || !g_pSkillCycleInfo[nCycleIdx].bIsOn || (int)g_pSkillCycleInfo[nCycleIdx].fCoolTime != g_pSkillInterval[nSettingIdx].nInterval)
				return i;
		}
	}

	return NOINDEX;
}


BOOL IsExistInvenProc()
{
	if (OnAutoEquipProc(FALSE))
		return TRUE;


	if (GetCollectItemIndex() != NOINDEX)
		return TRUE;


	if (GetNeedEnchantIndex() != NOINDEX)
		return TRUE;


	for (int i = 0; i < g_nInvenCount; i++)
	{
		if (IsNeedUseItem(i) || IsNeedDissolveItem(i) || IsNeedDeleteItem(i))
			return TRUE;
	}


	for (int i = 0; i < MAX_QUICKSLOTRES; i++)
	{
		if (g_pQuickSlotRes[i].nClassType != ePlayerClass_PC_COMMON && g_pQuickSlotRes[i].nClassType != g_pCharInfo.nClassType)
			continue;

		int nSlotIdx = GetQuickSlotItemIndexByID(g_pQuickSlotRes[i].dwID);
		if (nSlotIdx == NOINDEX)
		{
			if (GetInvenIndexByID(g_pQuickSlotRes[i].dwID) == NOINDEX)
				continue;

			if (GetEmptyQuickSlotIndex() != NOINDEX)
				return TRUE;
		}
	}


	return FALSE;
}


int IsInDungeon(int nDungeonIdx)
{
	if (nDungeonIdx == NOINDEX)
	{
		for (int i = 0; i < MAX_DUNGEON; i++)
		{
			for (int j = 0; j < g_pDungeonRes[i].nMapID; j++)
			{
				if (g_pDungeonRes[i].pMapID[j] == g_pCharInfo.dwMapID)
					return i;
			}
		}
	}
	else if (nDungeonIdx >= 0 && nDungeonIdx < MAX_DUNGEON)
	{
		for (int i = 0; i < g_pDungeonRes[nDungeonIdx].nMapID; i++)
		{
			if (g_pDungeonRes[nDungeonIdx].pMapID[i] == g_pCharInfo.dwMapID)
				return nDungeonIdx;
		}
	}

	return NOINDEX;
}


BOOL CanEnterDungeon(int nDungeonIdx)
{
	if (nDungeonIdx < 0 || nDungeonIdx >= MAX_DUNGEON)
		return FALSE;

	for (int i = 0; i < g_pDungeonRes[nDungeonIdx].nMapID; i++)
	{
		if (g_pDungeonRes[nDungeonIdx].pMapID[i] == g_pCharInfo.dwMapID)
			return TRUE;
	}

	if (g_pDungeonRes[nDungeonIdx].nNeedLevel > g_pCharInfo.nLevel)
		return FALSE;

	if (g_pDungeonRes[nDungeonIdx].nNeedGold > g_pCharInfo.nGold)
		return FALSE;

	if (g_pDungeonRes[nDungeonIdx].nNeedItemID && GetInvenCountByID(g_pDungeonRes[nDungeonIdx].nNeedItemID) < g_pDungeonRes[nDungeonIdx].nNeedItemCount)
		return FALSE;

	for (int i = 0; i < g_pDungeonRes[nDungeonIdx].nMapID; i++)
	{
		if (GetDungeonTime(g_pDungeonRes[nDungeonIdx].pMapID[i]) != 0)
			return TRUE;
	}

	return FALSE;
}


BOOL GetWorldBossRemainTime(DWORD dwMapID, double* pStart, double* pEnd)
{
	_CallFunc0 pfnGetTable = (_CallFunc0)GAMEADDR(Addr_CGameTable__get_MapDungeonData);
	DWORD64 qwMapDungeonData = pfnGetTable();
	if (!qwMapDungeonData)
		return FALSE;

	_CallFunc3Struct getItemDesc = (_CallFunc3Struct)DWORD64V(DWORD64V(qwMapDungeonData) + Offset_GetItemDesc);
	RET_STRUCT stRet = getItemDesc(qwMapDungeonData, dwMapID, DWORD64V(DWORD64V(qwMapDungeonData) + Offset_GetItemDesc + 8));

	DWORD64 qwSMapDungeonData = (DWORD64)&stRet.qwData1;

	DWORD64 qwStart = DWORD64V(qwSMapDungeonData + Offset_CGameTable_SMapDungeonData_OpenTime + Offset_CGameTable_SEntryOpen_Time_Start);
	DWORD64 qwEnd = DWORD64V(qwSMapDungeonData + Offset_CGameTable_SMapDungeonData_OpenTime + Offset_CGameTable_SEntryOpen_Time_End);
	if (!qwStart || !qwEnd)
		return FALSE;

	_dCallFunc3 pfnGetTime = (_dCallFunc3)GAMEADDR(Addr_CUIDungeonWindow_RemainTimeOrder);
	if (pStart)
		*pStart = pfnGetTime(0, qwStart, dwMapID);
	if (pEnd)
		*pEnd = pfnGetTime(0, qwEnd, dwMapID);

	return TRUE;
}


int GetEnableWorldBossIdx(int* pRemainTime)
{
	if (!g_OtherSetting.bRaid)
		return NOINDEX;

	for (int i = 0; i < MAX_WORLDBOSS; i++)
	{
		if (!g_OtherSetting.bRaidBoss[i])
			continue;

		int nDungeonIdx = DUNGEON + i;

		if (IsInDungeon(nDungeonIdx) == nDungeonIdx)
		{
			if (pRemainTime)
				*pRemainTime = 0;
			return nDungeonIdx;
		}

		if (!CanEnterDungeon(nDungeonIdx))
			continue;

		for (int j = 0; j < g_pDungeonRes[nDungeonIdx].nMapID; j++)
		{
			double fStart = 0.f, fEnd = 0.f;

			if (!GetWorldBossRemainTime(g_pDungeonRes[nDungeonIdx].pMapID[j], &fStart, &fEnd))
				continue;

			if (fStart > fEnd)
			{
				if (pRemainTime)
					*pRemainTime = (int)fEnd;
				return nDungeonIdx;
			}
		}
	}

	return NOINDEX;
}


BOOL IsCaoQuest(DWORD dwQuestID)
{
	for (int i = 0; i < g_nCaoQuestCount; i++)
	{
		if (g_pCaoQuestID[i] == dwQuestID)
			return TRUE;
	}

	return FALSE;
}


int GetDoQuestIndex()
{
	// 완료된 퀘스트 있으면 보상 먼저 받자
	for (int i = 0; i < g_nQuestCount; i++)
	{
		if (IsCaoQuest(g_pQuestInfo[i].dwID))
			continue;

		if (g_pQuestInfo[i].nState == eQuestState_QS_COMPLETE)
			return i;
	}

	// 수락가능한 가이드 퀘스트
	for (int i = 0; i < g_nQuestCount; i++)
	{
		if (g_pQuestInfo[i].nKind != eQuestType_QT_GUIDE)
			continue;

		if (g_pQuestInfo[i].nState == eQuestState_QS_NEW)
			return i;
	}

	// 의뢰 퀘스트 설정됬으면 먼저 진행하자
	if (g_OtherSetting.bReqQuest)
	{
		for (int i = 0; i < g_nQuestCount; i++)
		{
			if (IsCaoQuest(g_pQuestInfo[i].dwID))
				continue;

			if (g_pQuestInfo[i].nKind == eQuestType_QT_REQUEST)
				return i;
		}
	}

	int nMainQuestIdx = NOINDEX;
	for (int i = 0; i < g_nQuestCount; i++)
	{
		if (g_pQuestInfo[i].nKind == eQuestType_QT_MAIN)
		{
			nMainQuestIdx = i;
			break;
		}
	}

	if (g_HuntSetting.nMoveMode == 0)
	{
		if (g_HuntSetting.bDoQuest)
			return nMainQuestIdx;
	}
	else if (g_HuntSetting.nMoveMode == 1)
	{
		int nDungeonIdx = g_HuntSetting.nDungeon;
		if (nDungeonIdx >= 0 && nDungeonIdx < MAX_DUNGEON)
		{
			if (g_pCharInfo.nLevel < g_pDungeonRes[nDungeonIdx].nNeedLevel)
				return nMainQuestIdx;
		}
	}
	else if (g_HuntSetting.nMoveMode == 2)
	{

	}

	return NOINDEX;
}


BOOL IsInHuntPlace()
{
	if (g_HuntSetting.nMoveMode == 0)
		return TRUE;

	if (g_pCharInfo.bIsInVillage)
		return FALSE;

	int nHuntRange = 0;
	if (g_HuntSetting.nHuntRange == 0)
		nHuntRange = 10;
	else if (g_HuntSetting.nHuntRange == 1)
		nHuntRange = 20;
	else if (g_HuntSetting.nHuntRange == 2)
		nHuntRange = 40;
	else
		nHuntRange = 100;

	if (g_HuntSetting.nMoveMode == 1)
	{
		int nDungeonIdx = g_HuntSetting.nDungeon;
		if (IsInDungeon(nDungeonIdx) != nDungeonIdx)
			return FALSE;

		if (g_HuntSetting.bDungeonPos)
		{
			FVector vDungeonPos;
			vDungeonPos.set(g_HuntSetting.fDungeonPosX, g_HuntSetting.fDungeonPosY, g_HuntSetting.fDungeonPosZ);

			if ((int)GETDIST2D(g_pCharInfo.vPos, vDungeonPos) > nHuntRange)
				return FALSE;
		}
	}
	else if (g_HuntSetting.nMoveMode == 2)
	{
		int nFieldIdx = g_HuntSetting.nField;
		if (IsInField(nFieldIdx) != nFieldIdx)
			return FALSE;

		if (g_HuntSetting.bFieldPos)
		{
			FVector vFieldPos;
			vFieldPos.set(g_HuntSetting.fFieldPosX, g_HuntSetting.fFieldPosY, g_HuntSetting.fFieldPosZ);

			if ((int)GETDIST2D(g_pCharInfo.vPos, vFieldPos) > nHuntRange)
				return FALSE;
		}
	}

	return TRUE;
}


BOOL AutoAttack(BOOL bAttack)
{
	_CallFunc2 OnToggleAuto = (_CallFunc2)GAMEADDR(Addr_CUIBattleControl__OnToggleAutoButton);

	if (bAttack)
	{
		if (g_pCharInfo.nAutoState != eAutoType_AT_BATTLE)
		{
			OnToggleAuto(0, 1);
			return TRUE;
		}
	}
	else
	{
		if (g_pCharInfo.nAutoState == eAutoType_AT_BATTLE)
		{
			OnToggleAuto(0, 0);
			return TRUE;
		}
	}

	return FALSE;
}


BOOL UseTeleport()
{
	if (g_pCharInfo.dwMapID == MapID_KingTomb)
		return TRUE;

	int nScrollIdx = GetInvenIndexByID(ItemID_TelScroll);
	if (nScrollIdx != NOINDEX)
	{
		if (!IsItemCoolTime(nScrollIdx))
		{
			UseItem(nScrollIdx);
			SetDelay(30);
			return TRUE;
		}
	}

	return FALSE;
}


void MoveToPos(FVector v)
{
	if (g_pCharInfo.bIsMoving &&
		g_pCharInfo.vTargetPos.X == v.X &&
		g_pCharInfo.vTargetPos.Y == v.Y &&
		g_pCharInfo.vTargetPos.Z == v.Z)
		return;

	_CallMoveFunc funcMovePos = (_CallMoveFunc)GAMEADDR(Addr_CActorMyPlayer__MoveToPosition);
	funcMovePos(g_pCharInfo.qwAddr, v, 0.0f);
}


void OnGameDoHunt()
{
	if (g_bTestLog)
		XMsg("[%s] Step = %d,  IsInHuntPlace = %d", __FUNCTION__, g_nStepStatus, IsInHuntPlace());

	static int s_nLastStep = NOINDEX;
	if (g_nStepStatus != s_nLastStep)
	{
		XMsg("[%s] HuntStep:%d-->%d  HuntMoveMode:%d", __FUNCTION__, s_nLastStep, g_nStepStatus, g_HuntSetting.nMoveMode);
		s_nLastStep = g_nStepStatus;
	}

	if (g_nStepStatus == 0)
	{
		if (IsInHuntPlace())
			g_nStepStatus = 1;
		else
		{
			if (g_HuntSetting.nMoveMode == 1)		// 던전
			{
				//던전에 입장햇을 경우
				int nDungeonIdx = g_HuntSetting.nDungeon;
				if (IsInDungeon(nDungeonIdx) == nDungeonIdx)
				{
					g_nStepStatus = 2;
					return;
				}

				if (!CanEnterDungeon(nDungeonIdx))
				{
					ChangeSchedule();
					return;
				}

				if (!g_pCharInfo.bIsInVillage)
				{
					SetStatus(Status_ReturnVillage);
					return;
				}

				g_bDungeonTele = TRUE;

				g_nEnterDungeonIdx = nDungeonIdx;
				SetStatus(Status_EnterDungeon);
				return;
			}
			else if (g_HuntSetting.nMoveMode == 2)		// 필드
			{
				//필드에 있는 경우
				int nFieldIdx = g_HuntSetting.nField;
				if (IsInField(nFieldIdx) == nFieldIdx)
				{
					g_nStepStatus = 2;
					return;
				}

				if (!CanEnterField(nFieldIdx))
				{
					ChangeSchedule();
					return;
				}

				if (!g_pCharInfo.bIsInVillage)
				{
					SetStatus(Status_ReturnVillage);
					return;
				}

				g_bDungeonTele = TRUE;

				g_nEnterFieldIdx = nFieldIdx;
				SetStatus(Status_TeleportMap);
				return;
			}
		}
	}
	else if (g_nStepStatus == 2)	// 진출
	{
		FVector	vHuntPos = { 0.0f, 0.0f, 0.0f };

		if (g_HuntSetting.nMoveMode == 1)
		{
			int nDungeonIdx = g_HuntSetting.nDungeon;
			if (IsInDungeon(nDungeonIdx) != nDungeonIdx)
			{
				SetStatus(Status_ReturnVillage);
				return;
			}

			if (g_HuntSetting.bDungeonPos)
				vHuntPos.set(g_HuntSetting.fDungeonPosX, g_HuntSetting.fDungeonPosY, g_HuntSetting.fDungeonPosZ);
			else
				vHuntPos.set(g_pCharInfo.vPos);
		}
		else if (g_HuntSetting.nMoveMode == 2)
		{
			int nFieldIdx = g_HuntSetting.nField;
			if (IsInField(nFieldIdx) != nFieldIdx)
			{
				SetStatus(Status_ReturnVillage);
				return;
			}

			if (g_HuntSetting.bFieldPos)
				vHuntPos.set(g_HuntSetting.fFieldPosX, g_HuntSetting.fFieldPosY, g_HuntSetting.fFieldPosZ);
			else
				vHuntPos.set(g_pCharInfo.vPos);
		}

		float fDist = GETDIST2D(g_pCharInfo.vPos, vHuntPos);
		if (fDist > 3.0f)
		{
			if (AutoAttack(FALSE))
			{
				SetDelay(10);
				return;
			}

			MoveToPos(vHuntPos);
			SetDelay(10);
			return;
		}

		XMsg("사냥터에 도착하였습니다");
		ShowStatus(0, 60237);

		g_nStepStatus = 1;
	}
	else if (g_nStepStatus == 1)	// 사냥
	{
		if (!IsInHuntPlace())
		{
			XMsg("사냥터가 아니므로 다시 사냥터로 이동합니다");
			ShowStatus(0, 60317);

			g_nStepStatus = 2;
			return;
		}

		if (g_HuntSetting.nMoveMode == 1 && !g_HuntSetting.bDungeonPos && g_bDungeonTele ||
			g_HuntSetting.nMoveMode == 2 && !g_HuntSetting.bFieldPos && g_bDungeonTele)
		{
			if (UseTeleport())
			{
				g_bDungeonTele = FALSE;
				return;
			}
		}
		else
			g_bDungeonTele = FALSE;

		if (AutoAttack(TRUE))
		{
			XMsg("사냥을 시작합니다");
			ShowStatus(0, 60239);

			SetDelay(10);
			return;
		}
	}
}


void OnGameDoAuto()
{
	if (g_pCharInfo.nMapType == eMapType_MT_TUTORIAL)
		return;

	if (CloseAllWidget())
		return;


	// 접속할 서버가 다른 경우 캐릭 선택으로 나가자
	if (GetSettingServer() != g_nGameServer)
	{
		XMsg("접속 서버가 다르므로 변경을 진행합니다");
		ShowStatus(0, 60173);

		SetStatus(Status_CharOut);
		return;
	}

	// 접속할 캐릭 번호가 다른 경우 캐릭 선택으로 나가자
	if (g_ScheduleSetting.bSelChar && g_ScheduleSetting.nSelChar != g_nGameChar)
	{
		if (g_pCharInfo.nLevel >= 10)
		{
			// 현재 캐릭이 창고에서 장비 찾아서 사용한 경우
			int nEquipChar = GetEquipsChar(g_nGameServer);
			if (nEquipChar == g_nGameChar + 1)
			{
				// 자동 장착할수 있으면 하자
				if (OnAutoEquipProc())
				{
					SetDelay(10);
					return;
				}
			}

			SetStoreItemList(g_OtherSetting.bGetEquip);

			// 보관할 목록이 있으면
			if (g_nStoreListCount > 0)
			{
				XMsg("장착한 장비들을 창고에 보관합니다");
				ShowStatus(0, 60212);
				SetStatus(Status_StoreEquips, 10);
				return;
			}
			else
				SetEquipsChar(g_nGameServer, 0);
		}


		XMsg("접속 캐릭이 다르므로 변경을 진행합니다");
		ShowStatus(0, 60174);

		SetStatus(Status_CharOut);
		return;
	}

	// 창고에서 장비 찾아야 하는 경우 (마을에 와야 한다)
	if (IsExistGetItemSetting())
	{
		XMsg("창고에서 장비들을 찾아 장착합니다");
		ShowStatus(0, 60160);
		SetStatus(Status_GetEquips);
		return;
	}



	if (IsNeedReturn())
	{
		SetStatus(Status_ReturnVillage);
		return;
	}


	// 셋팅		탐색 범위(10m - 1, 20m - 2, 40m - 3, 최대 - 0)
	int nHuntRange;

	if (g_HuntSetting.nHuntRange == 0)
		nHuntRange = 1;
	else if (g_HuntSetting.nHuntRange == 1)
		nHuntRange = 2;
	else if (g_HuntSetting.nHuntRange == 2)
		nHuntRange = 3;
	else
		nHuntRange = 0;

	if (OnChangeSetting(70, nHuntRange))
	{
		SetDelay(20);
		return;
	}


	if (OnAutoQuickSlotItem())
	{
		SetDelay(20);
		return;
	}



	// 스탯 찍기
	static DWORD64 s_qwStatTick = 0;
	if (g_pCharInfo.nBonusStat > 0)
	{
		if (s_qwStatTick == 0)
			s_qwStatTick = g_qwTickCount + (rand() % 10 + 1) * 60 * 1000;

#ifndef _TEST_VERSION_
		if (g_qwTickCount >= s_qwStatTick)
#endif
		{
			s_qwStatTick = 0;

			XMsg("스탯을 적용합니다");

			SetStatus(Status_Stat);
			return;
		}
	}
	else
		s_qwStatTick = 0;


	// 스킬 확인
	static DWORD64 s_qwSkillTick = 0;
	if (GetNeedSkillIndex() != NOINDEX)
	{
		if (s_qwSkillTick == 0)
			s_qwSkillTick = g_qwTickCount + (rand() % 10 + 1) * 60 * 1000;

#ifndef _TEST_VERSION_
		if (g_qwTickCount >= s_qwSkillTick)
#endif
		{
			s_qwSkillTick = 0;

			XMsg("스킬 배우기 및 퀵슬롯 등록을 진행합니다");
			ShowStatus(0, 60162);

			SetStatus(Status_Skill);
			return;
		}
	}
	else
		s_qwSkillTick = 0;


	// 우편 확인
	static DWORD64 s_qwMailTick = 0;
	if (g_OtherSetting.bMail && (IsRedDot(eRedDotType_Btn_Post_Character) || IsRedDot(eRedDotType_Btn_Post_Account)))
	{
		if (s_qwMailTick == 0)
			s_qwMailTick = g_qwTickCount + (rand() % 10 + 1) * 60 * 1000;

#ifndef _TEST_VERSION_
		if (g_qwTickCount >= s_qwMailTick)
#endif
		{
			s_qwMailTick = 0;

			XMsg("우편함 을(를) 확인합니다");
			ShowStatus(0, 60165);

			SetStatus(Status_Mail);
			return;
		}
	}
	else
		s_qwMailTick = 0;


//	// 출책
//	static DWORD64 s_qwAttendanceTick = 0;
//	if (g_OtherSetting.bEvent && IsRedDot(eRedDotType_Btn_Attendance))
//	{
//		if (s_qwAttendanceTick == 0)
//			s_qwAttendanceTick = g_qwTickCount + (rand() % 60 + 1) * 60 * 1000;
//
//#ifndef _TEST_VERSION_
//		if (g_qwTickCount >= s_qwAttendanceTick)
//#endif
//		{
//			s_qwAttendanceTick = 0;
//
//			XMsg("이벤트 보상 을(를) 확인합니다");
//			ShowStatus(0, 60166);
//
//			SetStatus(Status_Attendance);
//			return;
//		}
//	}
//	else
//		s_qwAttendanceTick = 0;


		// 미션
	static DWORD64 s_qwMissionTick = 0;
	if (g_OtherSetting.bEvent && IsRedDot(eRedDotType_Btn_EventMissionHud))
	{
		if (s_qwMissionTick == 0)
			s_qwMissionTick = g_qwTickCount + (rand() % 10 + 1) * 60 * 1000;

#ifndef _TEST_VERSION_
		if (g_qwTickCount >= s_qwMissionTick)
#endif
		{
			s_qwMissionTick = 0;

			XMsg("이벤트 보상 을(를) 확인합니다");
			ShowStatus(0, 60166);

			SetStatus(Status_Mission);
			return;
		}
	}
	else
		s_qwMissionTick = 0;


	// 업적 확인
	static DWORD64 s_qwAchieveTick = 0;
	if (g_OtherSetting.bAchievement && IsRedDot(eRedDotType_Btn_Achieve))
	{
		if (s_qwAchieveTick == 0)
			s_qwAchieveTick = g_qwTickCount + (rand() % 60 + 1) * 60 * 1000;

#ifndef _TEST_VERSION_
		if (g_qwTickCount >= s_qwAchieveTick)
#endif
		{
			s_qwAchieveTick = 0;

			XMsg("업적 보상 을(를) 확인합니다");
			ShowStatus(0, 60164);

			SetStatus(Status_Achieve);
			return;
		}
	}
	else
		s_qwAchieveTick = 0;


	// 캐시샵
	static DWORD64 s_qwCashShopTick = 0;
	if (g_pCharInfo.nLevel >= 10 && GetBuyCashItemIndex() != NOINDEX)
	{
		if (s_qwCashShopTick == 0)
			s_qwCashShopTick = g_qwTickCount + (rand() % 60 + 1) * 60 * 1000;

#ifndef _TEST_VERSION_
		if (g_qwTickCount >= s_qwCashShopTick)
#endif
		{
			s_qwCashShopTick = 0;

			XMsg("캐시샵 아이템 구매를 진행합니다");
			ShowStatus(0, 60167);

			SetStatus(Status_CashShop);
			return;
		}
	}
	else
		s_qwCashShopTick = 0;


	// 인벤 처리
	static DWORD64 s_qwInvenProcTick = 0;
	if (IsExistInvenProc())
	{
		if (s_qwInvenProcTick == 0)
			s_qwInvenProcTick = g_qwTickCount + (rand() % 3 + 1) * 60 * 1000;

#ifndef _TEST_VERSION_
		if (g_qwTickCount >= s_qwInvenProcTick || g_pCharInfo.nLevel < 10)
#endif
		{
			s_qwInvenProcTick = 0;

			XMsg("인벤 처리를 진행합니다");

			g_nTarStatus = g_nCurStatus;
			SetStatus(Status_InvenProc);
			return;
		}
	}
	else
		s_qwInvenProcTick = 0;


	// 코스튬
	static DWORD64 s_qwCostumeTick = 0;
	if (!g_bRefreshCostume || IsRedDot(eRedDotType_Btn_Costume_List))
	{
		if (s_qwCostumeTick == 0)
			s_qwCostumeTick = g_qwTickCount + (rand() % 10 + 1) * 60 * 1000;

#ifndef _TEST_VERSION_
		if (g_qwTickCount >= s_qwCostumeTick)
#endif
		{
			s_qwCostumeTick = 0;

			XMsg("아바타 합성 및 장착 을(를) 진행합니다");
			ShowStatus(0, 60163);

			SetStatus(Status_Costume);
			return;
		}
	}
	else
		s_qwCostumeTick = 0;


	// 버디 합성
	static DWORD64 s_qwPetTick = 0;
	if (!g_bRefreshPet || IsRedDot(eRedDotType_Btn_Pet_List))
	{
		if (s_qwPetTick == 0)
			s_qwPetTick = g_qwTickCount + (rand() % 10 + 1) * 60 * 1000;

#ifndef _TEST_VERSION_
		if (g_qwTickCount >= s_qwPetTick)
#endif
		{
			s_qwPetTick = 0;

			XMsg("탈것 합성 및 장착 을(를) 진행합니다");
			ShowStatus(0, 60161);

			SetStatus(Status_Pet);
			return;
		}
	}
	else
		s_qwPetTick = 0;


//	// 길드 출석
//	static DWORD64 s_qwGuildAttendanceTick = 0;
//	if (g_OtherSetting.bGuildAttendance && IsRedDot(eRedDotType_Btn_Guild_Attendance))
//	{
//		if (s_qwGuildAttendanceTick == 0)
//			s_qwGuildAttendanceTick = g_qwTickCount + (rand() % 60 + 1) * 60 * 1000;
//
//#ifndef _TEST_VERSION_
//		if (g_qwTickCount >= s_qwGuildAttendanceTick)
//#endif
//		{
//			s_qwGuildAttendanceTick = 0;
//
//			XMsg("길드 출석을 확인합니다");
//			ShowStatus(0, 60275);
//
//			g_bCanGuildDonate = TRUE;
//			SetStatus(Status_GuildAttendance);
//			return;
//		}
//	}
//	else
//		s_qwGuildAttendanceTick = 0;


		// 거래소
	static DWORD64 s_qwMarketTick = 0;
	if (g_pCharInfo.nLevel >= 50 && (IsRedDot(eRedDotType_Btn_Consignment) || GetAuctionItemIndex() != NOINDEX || !g_bRefreshMarket || GetAuctionRetryIndex() != NOINDEX))
	{
		if (s_qwMarketTick == 0)
			s_qwMarketTick = g_qwTickCount + (rand() % 5 + 1) * 60 * 1000;

#ifndef _TEST_VERSION_
		if (g_qwTickCount >= s_qwMarketTick)
#endif
		{
			s_qwMarketTick = 0;

			XMsg("거래소 물품 확인을 진행합니다");
			ShowStatus(0, 60262);

			g_bNeedSearchPrice = FALSE;
			g_nAuctionSaleCount = 0;

			SetStatus(Status_Market);
			return;
		}
	}
	else
		s_qwMarketTick = 0;


	// 의뢰퀘
	static DWORD64 s_qwReQuestTick = 0;
	if (g_pCharInfo.nLevel >= 20 && g_OtherSetting.bReqQuest && g_pCharInfo.nGold >= 100000 && !g_bReQuestDone)
	{
		if (s_qwReQuestTick == 0)
			s_qwReQuestTick = g_qwTickCount + (rand() % 60 + 1) * 60 * 1000;

#ifndef _TEST_VERSION_
		if (g_qwTickCount >= s_qwReQuestTick)
#endif
		{
			s_qwReQuestTick = 0;

			XMsg("마을 의뢰 퀘스트를 확인합니다");
			ShowStatus(0, 60171);

			SetStatus(Status_ReQuest);
			return;
		}
	}
	else
		s_qwReQuestTick = 0;


	// 제작
	static DWORD64 s_qwMakeTick = 0;
	if (GetNeedMakeIndex() != NOINDEX)
	{
		if (s_qwMakeTick == 0)
			s_qwMakeTick = g_qwTickCount + (rand() % 60 + 1) * 60 * 1000;

#ifndef _TEST_VERSION_
		if (g_qwTickCount >= s_qwMakeTick)
#endif
		{
			s_qwMakeTick = 0;

			SetStatus(Status_Make);
			return;
		}
	}
	else
		s_qwMakeTick = 0;



	// 레벨 제한 확인
	if (g_HuntSetting.bLimitLv)
	{
		if (g_pCharInfo.nLevel < g_HuntSetting.nLimitLvMin || g_pCharInfo.nLevel >= g_HuntSetting.nLimitLvMax)
		{
			ChangeSchedule();
			return;
		}
	}

	// 전투력 제한 확인
	if (g_HuntSetting.bLimitPower)
	{
		if (g_pCharInfo.nPower < g_HuntSetting.nLimitPowerMin || g_pCharInfo.nPower >= g_HuntSetting.nLimitPowerMax)
		{
			ChangeSchedule();
			return;
		}
	}


	// 월드 보스
	static DWORD64 s_qwWorldBossTick = 0;
	int nWorldBossRemainTime = 0;
	if (GetEnableWorldBossIdx(&nWorldBossRemainTime) != NOINDEX)
	{
		if (s_qwWorldBossTick == 0)
		{
			int nMod = max(1, nWorldBossRemainTime - 30);
			s_qwWorldBossTick = g_qwTickCount + (rand() % nMod) * 1000;
		}

#ifndef _TEST_VERSION_
		if (g_qwTickCount >= s_qwWorldBossTick)
#endif
		{
			s_qwWorldBossTick = 0;

			XMsg("월드 보스를 진행합니다");
			ShowStatus(0, 60335);

			SetStatus(Status_WorldBoss);
			return;
		}
	}
	else
		s_qwWorldBossTick = 0;


	int nQuestIdx = GetDoQuestIndex();
	if (nQuestIdx != NOINDEX)
		OnGameDoQuest(nQuestIdx);
	else
		OnGameDoHunt();
}

void CUIInvenScroll(DWORD64 qwInvenScroll, int nIndex)
{
	if (!qwInvenScroll)
		return;

	_callFunc1 funcGetUIInven = (_callFunc1)GAMEADDR(Addr_CUIInven_InvenScroll__get_Inven);
	DWORD64 qwCUIInven = funcGetUIInven(qwInvenScroll);
	if (!qwCUIInven)
		return;

	XMsg("[%s] Scroll to %d", __FUNCTION__, nIndex);

	_callFunc2 funcScroll = (_callFunc2)GAMEADDR(Addr_CUIInven__ScrollFocus);
	funcScroll(qwCUIInven, nIndex);
}


BOOL IsSelectedItemSlot(DWORD64 qwCUIItemSlot)
{
	if (qwCUIItemSlot)
	{
		DWORD64 qwSelectedLine = *(DWORD64*)(qwCUIItemSlot + Offset_CUIItemSlot_SelectedLine);
		if (qwSelectedLine)
		{
			_CallFunc1 funcIsActive = (_CallFunc1)GAMEADDR(Addr_UnityEngine_GameObject_get_activeSelf);
			return (BOOL)funcIsActive(qwSelectedLine);
		}
	}

	return FALSE;
}


BOOL IsSelectedItemSlot(DWORD64 qwInvenScroll, DWORD64 qwItemUID)
{
	if (qwInvenScroll)
	{
		_CallFunc2 pfnFindIndex = (_CallFunc2)GAMEADDR(Addr_CUIInven_InvenScroll_FindIndexSelectItemData);
		int nIndex = (int)pfnFindIndex(qwInvenScroll, qwItemUID);

		return nIndex != NOINDEX;
	}

	return FALSE;
}


void OnGameEnchantItem()
{
	int nVisbleWindowUID = (int)GetVisibleWindowUID();
	
	if (g_nStepStatus == 100)
	{
		if (nVisbleWindowUID == UI_UID_EnchantWindow)
		{
			XMsg("[%s] Close", __FUNCTION__);

			CloseAllActivePopup();

			SetDelay(20);
			return;
		}

		ShowStatus(0, 60380);

		SetStatus(Status_InvenProc);
		return;
	}

	if (OnAutoEquipProc(FALSE) || GetCollectItemIndex() != NOINDEX)
	{
		g_nStepStatus = 100;
		return;
	}

	int nScrollIdx;
	int nEnchant;
	int nInvenIdx = GetNeedEnchantIndex(&nScrollIdx, &nEnchant);
	if (nInvenIdx == NOINDEX)
	{
		g_nStepStatus = 100;
		return;
	}

	if (nVisbleWindowUID != UI_UID_EnchantWindow)
	{
		if (nVisbleWindowUID != UI_UID_Inventory)
		{
			XMsg("[%s] Open Inven", __FUNCTION__);

			MenuButtonClick(L"Btn_Inven");

			SetDelay(20);
			return;
		}

		DWORD64 qwCUIInventoryWindow = GetWindowByUI_UID((UI_UID)nVisbleWindowUID);

		if (!qwCUIInventoryWindow)
		{
			XMsg("[%s] Wait - 1", __FUNCTION__);
			return;
		}

// 		_CallFunc1 funcGetShowType = (_CallFunc1)GAMEADDR(Addr_CUIInventoryWindow__get_InventorySlotTypes);
// 		int nShowType = funcGetShowType(qwCUIInventoryWindow);
// 		if (nShowType == 4)			// GameDefine.Item.EInventorySlotTypes DISSOLVE
// 		{
// 			_CallFunc1 funcClose = (_CallFunc1)GAMEADDR(Addr_CUIInventoryWindow__CloseDissolve);
// 			funcClose(qwCUIInventoryWindow);
// 
// 			SetDelay(10);
// 			return;
// 		}
// 
// 		if (nShowType == 13)			// GameDefine.Item.EInventorySlotTypes AUTO_USE
// 		{
// 			_CallFunc1 funcClose = (_CallFunc1)GAMEADDR(Addr_CUIInventoryWindow__CloseAutoUse);
// 			funcClose(qwCUIInventoryWindow);
// 
// 			SetDelay(10);
// 			return;
// 		}

		_callFunc1 funcGetInvenWindow = (_callFunc1)GAMEADDR(Addr_CUIInventoryWindow__get_InvenWindow);
		DWORD64 qwInvenScroll = funcGetInvenWindow(qwCUIInventoryWindow);
		if (!qwInvenScroll)
		{
			XMsg("[%s] Wait - 2", __FUNCTION__);
			return;
		}

		_callFunc1 funcGetUIInven = (_callFunc1)GAMEADDR(Addr_CUIInven_InvenScroll__get_Inven);
		DWORD64 qwCUIInven = funcGetUIInven(qwInvenScroll);
		if (!qwCUIInven)
		{
			XMsg("[%s] Wait - 3", __FUNCTION__);
			return;
		}

		_callFunc2 funcGetItemSlot = (_callFunc2)GAMEADDR(Addr_CUIInven__GetSlotByOID);
		DWORD64 qwCUIItemSlot = funcGetItemSlot(qwCUIInven, g_pInvenInfo[nScrollIdx].qwItemUID);
		XMsg("qwCUIItemSlot: %lld", qwCUIItemSlot);
		if (!qwCUIItemSlot)
		{
			CUIInvenScroll(qwInvenScroll, nScrollIdx);
			SetDelay(20);
			return;
		}

		XMsg("[%s] Select Scroll Item", __FUNCTION__);

		_callFunc2 funcSelect = (_callFunc2)GAMEADDR(Addr_CUIInven_InvenScroll__OnClickSlot);
		funcSelect(qwInvenScroll, qwCUIItemSlot);

		SetDelay(20);
		return;
	}

	// 강화 창문
	DWORD64 qwCUIEnchantWindow = GetWindowByUI_UID((UI_UID)nVisbleWindowUID);
	if (!qwCUIEnchantWindow)
	{
		XMsg("[%s] Wait - 4", __FUNCTION__);
		return;
	}

	// 안전 강화 이상일때
	_callFunc1 funcGetResult = (_callFunc1)GAMEADDR(Addr_CUIEnchantWindow__get_GetEnchantResultOnePopup);
	DWORD64 qwCUIEnchant_ResultOnePopup = funcGetResult(qwCUIEnchantWindow);
	if (IsActiveWidget(qwCUIEnchant_ResultOnePopup)/*IsVisibleWindow(qwCUIEnchant_ResultOnePopup)*/)
	{
		if (*(char*)(qwCUIEnchant_ResultOnePopup + Offset_CUIEnchant_ResultOnePopup_IsEnchantResultShow))
		{
			_callFunc1 funcClose = (_callFunc1)GAMEADDR(Addr_CUIEnchant_ResultOnePopup__OnClick_Exit);
			funcClose(qwCUIEnchant_ResultOnePopup);
		}
		else
		{
			_callFunc1 funcOpen = (_callFunc1)GAMEADDR(Addr_CUIEnchant_ResultOnePopup__OnClick_ResultOpen);
			funcOpen(qwCUIEnchant_ResultOnePopup);
		}

		SetDelay(20);
		return;
	}

	// 귀속 On 설정
	_callFunc1 funcIsBelong = (_callFunc1)GAMEADDR(Addr_CUIEnchantWindow__get_IsMaterialBelongOn);
	if (!funcIsBelong(qwCUIEnchantWindow))
	{
		XMsg("[%s] Click Belong", __FUNCTION__);

		_callFunc1 funcClickBelong = (_callFunc1)GAMEADDR(Addr_CUIEnchantWindow__OnClick_MaterialBelong);
		funcClickBelong(qwCUIEnchantWindow);

		SetDelay(20);
		return;
	}

	// 비귀속 Off 설정
	_callFunc1 funcIsUnBelong = (_callFunc1)GAMEADDR(Addr_CUIEnchantWindow__get_IsMaterialUnBelongOn);
	if (funcIsUnBelong(qwCUIEnchantWindow) != (g_pInvenInfo[nScrollIdx].nBelong == eBelongType_IOT_NONE))
	{
		XMsg("[%s] Click UnBelong", __FUNCTION__);

		_callFunc1 funcClickUnBelong = (_callFunc1)GAMEADDR(Addr_CUIEnchantWindow__OnClick_MaterialUnBelong);
		funcClickUnBelong(qwCUIEnchantWindow);

		SetDelay(20);
		return;
	}

	// 단일 강화 선택하자

	// 주문서를 선택하자
	_callFunc1 funcGetMaterialInfo = (_callFunc1)GAMEADDR(Addr_CUIEnchantWindow__get_GetEnchantMaterialInfo);
	DWORD64 qwCUIEnchant_MaterialInfo = funcGetMaterialInfo(qwCUIEnchantWindow);
	if (!qwCUIEnchant_MaterialInfo)
	{
		XMsg("[%s] Wait - 5", __FUNCTION__);
		return;
	}

	DWORD64 qwMaterialSlotList = *(DWORD64*)(qwCUIEnchant_MaterialInfo + Offset_CUIEnchant_MaterialInfo_MaterialSlotList);
	if (qwMaterialSlotList)
	{
		_callFunc1 funcGetCount = (_callFunc1)GAMEADDR(Addr_System_Collections_Generic_List_object___get_Count);
		int nCount = (int)funcGetCount(qwMaterialSlotList);
		for (int i = 0; i < nCount; i++)
		{
			_callFunc2 funcGetItem = (_callFunc2)GAMEADDR(Addr_Collections_Generic_List_object___get_Item);
			DWORD64 qwCUIEnchant_MaterialSlots = funcGetItem(qwMaterialSlotList, i);
			if (!qwCUIEnchant_MaterialSlots)
				continue;

			DWORD64 qwCUIItemSlot = *(DWORD64*)(qwCUIEnchant_MaterialSlots + Offset_CUIEnchant_MaterialSlots_CUIItemSlot);
			if (!qwCUIItemSlot || IsSelectedItemSlot(qwCUIItemSlot))
				continue;

			DWORD64 qwItemData = *(DWORD64*)(qwCUIEnchant_MaterialSlots + Offset_CUIEnchant_MaterialSlots_CSlotInfo_Item);
			if (!qwItemData)
				continue;

			_callFunc1 funcGetItemOID = (_callFunc1)GAMEADDR(Addr_Protocol_ItemData__get_ItemOID);
			DWORD64 qwItemUID = funcGetItemOID(qwItemData);

			_callFunc1 funcGetIndex = (_callFunc1)GAMEADDR(Addr_Protocol_ItemData__get_Index);
			DWORD dwItemID = (DWORD)funcGetIndex(qwItemData);

			int nItemIndex = GetInvenIndex(qwItemUID);
			if (nItemIndex == NOINDEX)
				continue;

			if (g_pInvenInfo[nScrollIdx].nBelong && !g_pInvenInfo[nItemIndex].nBelong)
				continue;

			if (g_pInvenInfo[nScrollIdx].nSubType != g_pInvenInfo[nItemIndex].nSubType)
				continue;

			XMsg("[%s] Select %s", __FUNCTION__, g_pInvenInfo[nItemIndex].szName);

			_callFunc1 funcSelect = (_callFunc1)GAMEADDR(Addr_CUIEnchant_MaterialSlots__OnClick_SelectSlot);
			funcSelect(qwCUIEnchant_MaterialSlots);

			SetDelay(20);
			return;
		}
	}

	// 강화할 장비를 선택하자
	_callFunc1 funcGetOneInfo = (_callFunc1)GAMEADDR(Addr_CUIEnchantWindow__get_GetEnchantOneInfo);
	DWORD64 qwCUIEnchant_OneInfo = funcGetOneInfo(qwCUIEnchantWindow);
	if (!qwCUIEnchant_OneInfo)
	{
		XMsg("[%s] Wait - 6", __FUNCTION__);
		return;
	}

	BOOL bIsEquipItem = FALSE;

	_callFunc1 funcGetItemData = (_callFunc1)GAMEADDR(Addr_CUIEnchant_OneInfo__get_GetSlotInfoItemEquip);
	DWORD64 qwEquipItemData = funcGetItemData(qwCUIEnchant_OneInfo);
	XMsg("qwEquipItemData: %lld", qwEquipItemData);
	if (qwEquipItemData)
	{
		_callFunc1 funcGetItemOID = (_callFunc1)GAMEADDR(Addr_Protocol_ItemData__get_ItemOID);
		DWORD64 qwItemUID = funcGetItemOID(qwEquipItemData);

		_callFunc1 funcGetIndex = (_callFunc1)GAMEADDR(Addr_Protocol_ItemData__get_Index);
		DWORD dwItemID = (DWORD)funcGetIndex(qwEquipItemData);

		int nItemIndex = GetInvenIndex(qwItemUID);
		if (nItemIndex == nInvenIdx)
			bIsEquipItem = TRUE;
	}

	// 장비가 선택이 안되어있으면
	if (!bIsEquipItem)
	{
		DWORD64 qwInvenScroll = *(DWORD64*)(qwCUIEnchant_MaterialInfo + Offset_CUIEnchant_MaterialInfo_InvenScroll);
		if (!qwInvenScroll)
		{
			XMsg("[%s] Wait - 7", __FUNCTION__);
			return;
		}

		_callFunc1 funcGetUIInven = (_callFunc1)GAMEADDR(Addr_CUIInven_InvenScroll__get_Inven);
		DWORD64 qwCUIInven = funcGetUIInven(qwInvenScroll);
		if (!qwCUIInven)
		{
			XMsg("[%s] Wait - 8", __FUNCTION__);
			return;
		}

		_callFunc2 funcGetItemSlot = (_callFunc2)GAMEADDR(Addr_CUIInven__GetSlotByOID);
		DWORD64 qwCUIItemSlot = funcGetItemSlot(qwCUIInven, g_pInvenInfo[nInvenIdx].qwItemUID);
		if (!qwCUIItemSlot)
		{
			CUIInvenScroll(qwInvenScroll, nInvenIdx);
			SetDelay(20);
			return;
		}

		XMsg("[%s] Select %s", __FUNCTION__, g_pInvenInfo[nInvenIdx].szName);

		_callFunc2 funcSelect = (_callFunc2)GAMEADDR(Addr_CUIInven_InvenScroll__OnClickSlot);
		funcSelect(qwInvenScroll, qwCUIItemSlot);

		SetDelay(20);
		return;
	}

	// 강화 레벨 설정
	int nTargetEnchant = *(int*)(qwCUIEnchant_MaterialInfo + Offset_CUIEnchant_MaterialInfo_TargetEnchantStep);
	int nTargetEnchantMax = *(int*)(qwCUIEnchant_MaterialInfo + Offset_CUIEnchant_MaterialInfo_TargetEnchantStepMax);
	int nTargetEnchantSafe = *(int*)(qwCUIEnchant_MaterialInfo + Offset_CUIEnchant_MaterialInfo_TargetEnchantStepSafe);

	if (nTargetEnchant < nTargetEnchantMax && nTargetEnchant < nEnchant)
	{
		XMsg("[%s] Plus Enchant To %d", __FUNCTION__, nTargetEnchant + 1);

		_callFunc1 funcStepPlus = (_callFunc1)GAMEADDR(Addr_CUIEnchant_MaterialInfo__OnClick_EnchantStepPlus);
		funcStepPlus(qwCUIEnchant_MaterialInfo);

		SetDelay(10);
		return;
	}

	// 강화 시작
	XMsg("[%s] Enchant", __FUNCTION__);

	_callFunc1 funcClickEnchant = (_callFunc1)GAMEADDR(Addr_CUIEnchantWindow__OnClick_Enchant);
	funcClickEnchant(qwCUIEnchantWindow);

	SetDelay(20);
}



// -------------------------------------------- KJH End ---------------------------------------------- //

// -------------------------------------------- PHJ Start ---------------------------------------------- //

DWORD GetGameServerTime()
{
	_CallFunc1 pfnGetTime = (_CallFunc1)GAMEADDR(Addr_GetGameServerTime);
	DWORD64 qwDateTime = pfnGetTime(0);

	_CallFunc1 funcGetYear = (_CallFunc1)GAMEADDR(Addr_GetYear);
	int nYear = (int)funcGetYear((DWORD64)&qwDateTime);

	_CallFunc1 funcGetMonth = (_CallFunc1)GAMEADDR(Addr_GetMonth);
	int nMonth = (int)funcGetMonth((DWORD64)&qwDateTime);

	_CallFunc1 funcGetDay = (_CallFunc1)GAMEADDR(Addr_GetDay);
	int nDay = (int)funcGetDay((DWORD64)&qwDateTime);

	_CallFunc1 funcGetHour = (_CallFunc1)GAMEADDR(Addr_GetHour);
	int nHour = (int)funcGetHour((DWORD64)&qwDateTime);

	_CallFunc1 funcGetMinute = (_CallFunc1)GAMEADDR(Addr_GetMinute);
	int nMinute = (int)funcGetMinute((DWORD64)&qwDateTime);

	_CallFunc1 funcGetSeconds = (_CallFunc1)GAMEADDR(Addr_GetSeconds);
	int nSeconds = (int)funcGetSeconds((DWORD64)&qwDateTime);


	DWORD dwRet = nYear % 100;
	dwRet = dwRet * 100 + nMonth;
	dwRet = dwRet * 100 + nDay;
	dwRet = dwRet * 100 + nHour;
	dwRet = dwRet * 100 + nMinute;


	return dwRet;
}

// -------------------------------------------- PHJ End ---------------------------------------------- //

// -------------------------------------------- RSG Start ---------------------------------------------- //

void AddItemCollection(int nCollectionID, int nSlotIdx, DWORD64 qwItemUID)
{
	InitGlobal(Addr_CNetHandler);

	_callFunc1 funcGetInst = (_callFunc1)GAMEADDR(Addr_MonoSingleton_object___get_s_Instance);
	DWORD64 qwCNetHandler = funcGetInst(DWORD64(GAMEADDR(Addr_CNetHandler)));
	if (!qwCNetHandler)
		return;

	_callFunc4 pfnAddItemCollection = (_callFunc4)GAMEADDR(Addr_CNetHandler__OnC2S_AddItemCollection);
	pfnAddItemCollection(qwCNetHandler, nCollectionID, nSlotIdx, qwItemUID);
}



void OnGameItemCollection()
{
	int nVisbleWindowUID = (int)GetVisibleWindowUID();

	if (g_nStepStatus == 100)
	{
		if (nVisbleWindowUID == UI_UID_ItemCollectionWindow)
		{
			XMsg("[%s] Close", __FUNCTION__);

			CloseAllActivePopup();

			SetDelay(20);
			return;
		}

		XMsg("아이템 컬렉션 등록을 진행하였습니다");
		ShowStatus(0, 60270);

		SetStatus(Status_InvenProc);
		return;
	}

	if (nVisbleWindowUID != UI_UID_ItemCollectionWindow)
	{
		XMsg("[%s] Open", __FUNCTION__);

		MenuButtonClick(L"Btn_ItemCollection");

		SetDelay(20);
		return;
	}

	int nInvenIdx = NOINDEX;
	int nCollectIdx = GetCollectItemIndex(&nInvenIdx);
	XMsg("[%s] CollectIdx = %d, InvenIdx = %d", __FUNCTION__, nCollectIdx, nInvenIdx);
	if (nCollectIdx != NOINDEX && nInvenIdx != NOINDEX)
	{
		XMsg("[%s] Registe Item %d  %d  [%s]", __FUNCTION__, g_pItemCollectionInfo[nCollectIdx].nCollectionID, g_pItemCollectionInfo[nCollectIdx].nSlotIdx, g_pInvenInfo[nInvenIdx].szName);

		AddItemCollection(g_pItemCollectionInfo[nCollectIdx].nCollectionID, g_pItemCollectionInfo[nCollectIdx].nSlotIdx, g_pInvenInfo[nInvenIdx].qwItemUID);

		SetDelay(30);
		return;
	}

	g_nStepStatus = 100;
}



BOOL IsNeedSellItem(int nIndex)
{
	if (g_pInvenInfo[nIndex].bIsLock || g_pInvenInfo[nIndex].bIsEquip)
		return FALSE;

	if (!g_pInvenInfo[nIndex].bSell)
		return FALSE;

	// 대형 물약 살수 있으면 소형물약은 다 팔자
// 	if (g_pCharInfo.nLevel > 20 && g_pInvenInfo[nIndex].dwID == ItemID_Potion1)
// 		return TRUE;

	int nDetailIndex = GetItemDetailIndex(&g_pInvenInfo[nIndex], ItemMode_Sell);
	if (nDetailIndex != NOINDEX)
	{
		if (g_pItemDetailInfo[nDetailIndex].nMode == ItemMode_Sell)
			return TRUE;
	}
	else if (g_pInvenInfo[nIndex].nGrade >= eItemGrade_IG_NORMAL && g_pInvenInfo[nIndex].nGrade <= eItemGrade_IG_MYTHICAL)
	{
		if (g_pInvenInfo[nIndex].nItemType != ItemType_None)
		{
			if (g_pItemDefault[g_pInvenInfo[nIndex].nGrade - 1][g_pInvenInfo[nIndex].nItemType] == ItemMode_Sell)
				return TRUE;
		}
	}

	return FALSE;
}

BOOL IsRestoreButtonEnable()
{
	DWORD64 qwUIManager = GetUIManager();
	if (qwUIManager)
	{
		_CallFunc1 funcGetUIMainMenu = (_CallFunc1)GAMEADDR(Addr_CUIManager__get_UIMainMenu);
		DWORD64 qwCUIMainMenu = funcGetUIMainMenu(qwUIManager);
		if (qwCUIMainMenu)
		{
			DWORD64 qwRestoreBtn = *(DWORD64*)(qwCUIMainMenu + Offset_CUIMainMenu_btnRestore);
			return IsActiveWidget(qwRestoreBtn);
		}
	}

	return FALSE;
}


void OnGameReturnVillage()
{
	if (CloseAllWidget())
		return;

	// 마을이 아닌 경우 귀환을 계속 하자
	if (ReturnVillage())
		return;
	
	if (IsExistInvenProc())
	{
		AJLog(L"인벤 처리를 진행합니다");

		g_nTarStatus = g_nCurStatus;
		SetStatus(Status_InvenProc);
		return;
	}


	// 판매 아이템이 있는지 체크하자
	for (int i = 0; i < g_nInvenCount; i++)
	{
		if (IsNeedSellItem(i))
		{
			XMsg(L"판매할 아이템이 있어 소모품 상인을 찾아갑니다 %s", g_pInvenInfo[i].szName);
			ShowStatus(1, 60223, g_pInvenInfo[i].szName);
			SetStatus(Status_BuyPotion);
			return;
		}
	}

	// 구매 아이템이 있는지 체크하자
	if (g_pCharInfo.nGold >= g_BuySetting.nPotionGold)
	{
		for (int i = 0; i < g_nBuyExpendCount; i++)
		{
			if (!g_pBuyExpendInfo[i].bEnable)
				continue;

			int nPotionIdx = GetPotionIndex(g_pBuyExpendInfo[i].szName);
			if (nPotionIdx == NOINDEX)
				continue;

			if (g_pPotionRes[nPotionIdx].nClassType != ePlayerClass_PC_COMMON && g_pPotionRes[nPotionIdx].nClassType != g_pCharInfo.nClassType)
				continue;

			int nCount = GetInvenCountByID(g_pPotionRes[nPotionIdx].dwID);
			if (nCount > g_pBuyExpendInfo[i].nCurCount)
				continue;

			XMsg("아이템 \"%s\" 이(가) 부족하여 소모품 상인을 찾아갑니다", g_pBuyExpendInfo[i].szName);
			ShowStatus(1, 60224, g_pBuyExpendInfo[i].szName);

			SetStatus(Status_BuyPotion);
			return;
		}
	}


	// 스킬북 구매
	if (GetBuySkillIndex() != NOINDEX)
	{
		SetStatus(Status_BuySkill);
		return;
	}


	if (g_OtherSetting.bRecoverFree)
	{
		if (!g_bRecoverDone && IsRestoreButtonEnable())
		{
			XMsg("사망 경험치 복구를 진행합니다");
			ShowStatus(0, 60168);

			SetStatus(Status_Recover);
			return;
		}
	}

	// 체력 회복될때까지 기다리자
	int nPercent = 100;
	if (g_pCharInfo.nMaxHp > 0)
		nPercent = g_pCharInfo.nCurHp * 100 / g_pCharInfo.nMaxHp;

	static BOOL	s_bWaitHpVillage = TRUE;
	if (nPercent < 70)
	{
		if (s_bWaitHpVillage)
		{
			s_bWaitHpVillage = FALSE;
			XMsg("체력 회복을 대기합니다 (수치: %d%%)", 70);
			ShowStatus(2, 60225, NULL, 70);
		}

		SetDelay(10);
		return;
	}
	else
		s_bWaitHpVillage = TRUE;
	
	g_bRecoverDone = FALSE;
	SetStatus(Status_DoAuto);
}


void OnGameEnterDungeon()
{
	int nVisbleWindowUID = (int)GetVisibleWindowUID();

	if (g_nStepStatus == 100)
	{
		if (nVisbleWindowUID == UI_UID_DungeonWindow)
		{
			//XMsg("[%s] Close", __FUNCTION__);

			CloseAllActivePopup();

			SetDelay(20);
			return;
		}

		SetStatus(g_nPreStatus);
		return;
	}

	if (IsInDungeon(g_nEnterDungeonIdx) == g_nEnterDungeonIdx || !CanEnterDungeon(g_nEnterDungeonIdx))
	{
		g_nStepStatus = 100;
		return;
	}

	if (nVisbleWindowUID != UI_UID_DungeonWindow)
	{
		//XMsg("[%s] Open", __FUNCTION__);

		MenuButtonClick(L"Btn_Dungeon");

		SetDelay(20);
		return;
	}

	DWORD64 qwCUIDungeonWindow = GetWindowByUI_UID((UI_UID)nVisbleWindowUID);
	if (!qwCUIDungeonWindow)
	{
		//XMsg("[%s] Wait - 1", __FUNCTION__);
		return;
	}

	if (g_pDungeonRes[g_nEnterDungeonIdx].nMainTab != 2)
	{
		// 던전 층수 선택하는 경우
		_callFunc1 pfnGetActivePopup = (_callFunc1)GAMEADDR(Addr_CUIDungeonWindow_GetActivePopup);
		BOOL bActivePopup = (BOOL)pfnGetActivePopup(qwCUIDungeonWindow);

		DWORD64 qwCUIDungeonFloorInfoPopup = *(DWORD64*)(qwCUIDungeonWindow + Offset_CUIDungeonWindow_CUIDungeonFloorInfoPopup);

		if (bActivePopup/*IsVisibleWindow(qwCUIDungeonFloorInfoPopup)*/)
		{
			if (g_bSelectDungeon)
			{
				//XMsg("[%s] Enter Dungeon", __FUNCTION__);
				_callFunc1 pfnEnterDungeon = (_callFunc1)GAMEADDR(Addr_CUIDungeonFloorInfoPopup_OnClickConfirm);
				pfnEnterDungeon(qwCUIDungeonFloorInfoPopup);
				g_bSelectDungeon = FALSE;

				SetDelay(20);
				return;
			}

			BOOL bExact = FALSE;

			WCHAR szMapName[MAX_NAME] = { 0, };
			DWORD64 qwMapNameText = *(DWORD64*)(qwCUIDungeonFloorInfoPopup + Offset_CUIDungeonFloorInfoPopup_MapNameText);
			if (qwMapNameText)
			{
				_callFunc1 funcGetName = (_callFunc1)GAMEADDR(Addr_TMPro_TMP_Text__get_text);
				DWORD64 qwMapName = funcGetName(qwMapNameText);

				if (qwMapName)
				{
					ConvertString(qwMapName, szMapName);
					if (!wcscmp(szMapName, g_pDungeonRes[g_nEnterDungeonIdx].szKRName) ||
						!wcscmp(szMapName, g_pDungeonRes[g_nEnterDungeonIdx].szCHName) ||
						!wcscmp(szMapName, g_pDungeonRes[g_nEnterDungeonIdx].szTWName))
						bExact = TRUE;
				}
			}

			if (bExact)
			{
				// 층수를 선택하자
				DWORD64 qwFloorList = *(DWORD64*)(qwCUIDungeonFloorInfoPopup + Offset_CUIDungeonFloorInfoPopup_FloorList);

				if (qwFloorList)
				{
					_callFunc1 funcGetObjectList = (_callFunc1)GAMEADDR(Addr_UIListView__get_List);
					DWORD64 qwFloorObjectList = funcGetObjectList(qwFloorList);
					if (qwFloorObjectList)
					{
						_callFunc1 funcGetCount = (_callFunc1)GAMEADDR(Addr_System_Collections_Generic_List_object___get_Count);
						int nCount = (int)funcGetCount(qwFloorObjectList);
						if (g_pDungeonRes[g_nEnterDungeonIdx].nFloorTab >= 0 && g_pDungeonRes[g_nEnterDungeonIdx].nFloorTab < nCount)
						{
							_callFunc2 funcGetItem = (_callFunc2)GAMEADDR(Addr_Collections_Generic_List_object___get_Item);
							DWORD64 qwCUIDungeonFloorSlotObject = funcGetItem(qwFloorObjectList, g_pDungeonRes[g_nEnterDungeonIdx].nFloorTab);
							if (qwCUIDungeonFloorSlotObject)
							{
								InitGlobal(Addr_Method$UIListView_AddObject_CUIDungeonFloorInfo_TextSlot___);
								DWORD64 qwCUIDungeonFloorSlotAddObject = *(DWORD64*)(GAMEADDR(Addr_Method$UIListView_AddObject_CUIDungeonFloorInfo_TextSlot___));
								_callFunc2 funcGetParam = (_callFunc2)GAMEADDR(Addr_GetObjectType_Add);
								DWORD64 qwConvParam = funcGetParam(*(DWORD64*)(*(DWORD64*)(qwFloorList)+
									Offset_GetObjectType_Add_2 * (*(char*)(qwCUIDungeonFloorSlotAddObject + Offset_GetObjectType_Add_1)) + Offset_GetObjectType_Add_3),
									qwCUIDungeonFloorSlotAddObject);
								_callFunc2 funcConvert = (_callFunc2)GAMEADDR(Addr_UnityEngine_GameObject__GetComponent_object_);
								DWORD64 qwCUIDungeonFloorSlot = funcConvert(qwCUIDungeonFloorSlotObject, **(DWORD64**)(qwConvParam + Offset_ConvertObjectType_Add_To_Get));
								if (qwCUIDungeonFloorSlot)
								{
									DWORD64 qwNameText = *(DWORD64*)(qwCUIDungeonFloorSlot + Offset_CUIDungeonFloorSlot_NameText);
									if (qwNameText)
									{
										_CallFunc1 funcGetName = (_CallFunc1)GAMEADDR(Addr_TMPro_TMP_Text__get_text);
										DWORD64 qwFloorName = funcGetName(qwNameText);
										if (qwFloorName)
										{
											WCHAR szFloorName[MAX_NAME] = { 0, };
											ConvertString(qwFloorName, szFloorName);
										}
									}

									//XMsg("[%s] Select Dungeon Slot", __FUNCTION__);
									_callFunc2 funcClick = (_callFunc2)GAMEADDR(Addr_CUIDungeonFloorInfo_TextSlot_OnSelectSlot);
									funcClick(qwCUIDungeonFloorSlot, 1);

									g_bSelectDungeon = TRUE;

									SetDelay(20);
									return;
								}
							}
						}
					}
				}
			}

			//XMsg("[%s] Close Popup 1", __FUNCTION__);
			_callFunc1 funcClose = (_callFunc1)GAMEADDR(Addr_CUIWindow__Close);
			funcClose(qwCUIDungeonFloorInfoPopup);

			SetDelay(20);
			return;
		}
	}
	else
	{
		_callFunc1 pfnGetActivePopup = (_callFunc1)GAMEADDR(Addr_CUIDungeonWindow_GetActivePopup);
		BOOL bActivePopup = (BOOL)pfnGetActivePopup(qwCUIDungeonWindow);
		DWORD64 qwCUIDungeonFloorInfoPopup = *(DWORD64*)(qwCUIDungeonWindow + Offset_CUIDungeonWindow_CUIDungeonFloorInfoPopup);

		if (bActivePopup/*IsVisibleWindow(qwCUIDungeonFloorInfoPopup)*/)
		{
			//XMsg("[%s] Enter Dungeon", __FUNCTION__);
			_callFunc1 pfnEnterDungeon = (_callFunc1)GAMEADDR(Addr_CUIDungeonFloorInfoPopup_OnClickConfirm);
			pfnEnterDungeon(qwCUIDungeonFloorInfoPopup);

			SetDelay(20);
			return;
		}
	}

	// 불필요한 창문들 종료하자
// 	DWORD64 qwCUIDungeonFloorInfoPopup = *(DWORD64*)(qwCUIDungeonWindow + Offset_CUIDungeonWindow_CUIDungeonFloorInfoPopup);
// 	if (IsVisibleWindow(qwCUIDungeonFloorInfoPopup))
// 	{
// 		XMsg("[%s] Close Popup 2", __FUNCTION__);
// 
// 		_CallFunc1 funcClose = (_CallFunc1)GAMEADDR(Addr_CUIDungeonFloorInfoPopup__Close);
// 		funcClose(qwCUIDungeonFloorInfoPopup);
// 
// 		SetDelay(20);
// 		return;
// 	}

	DWORD64 qwCUIDungeonChargeTimePopup = *(DWORD64*)(qwCUIDungeonWindow + Offset_CUIDungeonWindow_CUIDungeonChargeTimePopup);
	if (IsVisibleWindow(qwCUIDungeonChargeTimePopup))
	{
		//XMsg("[%s] Close Popup 3", __FUNCTION__);
		_callFunc1 funcClose = (_callFunc1)GAMEADDR(Addr_CUIWindow__Close);
		funcClose(qwCUIDungeonChargeTimePopup);
		SetDelay(20);
		return;
	}

	// 메인 탭 선택하자
	if (!SelectToggle(DWORD64(qwCUIDungeonWindow + Offset_CUIDungeonWindow_UIToggleArray), g_pDungeonRes[g_nEnterDungeonIdx].nMainTab))
	{
		//XMsg("[%s] Select Main Tab", __FUNCTION__);
		SetDelay(20);
		return;
	}

	// 입장할 던전 선택하자
	DWORD64 qwDungeonList = *(DWORD64*)(qwCUIDungeonWindow + Offset_CUIDungeonWindow_DungeonSlotList);
	if (qwDungeonList)
	{
		InitGlobal(Addr_Method$GameObject_GetComponent_CUIDungeonSlot___);

		_callFunc1 funcGetObjectList = (_callFunc1)GAMEADDR(Addr_UIListView__get_List);
		DWORD64 qwDungeonObjectList = funcGetObjectList(qwDungeonList);
		if (qwDungeonObjectList)
		{
			_callFunc1 funcGetCount = (_callFunc1)GAMEADDR(Addr_System_Collections_Generic_List_object___get_Count);
			_callFunc2 funcGetItem = (_callFunc2)GAMEADDR(Addr_Collections_Generic_List_object___get_Item);
			int nCount = (int)funcGetCount(qwDungeonObjectList);
			for (int i = 0; i < nCount; i++)
			{
				DWORD64 qwCUIDungeonSlotObject = funcGetItem(qwDungeonObjectList, i);
				if (!qwCUIDungeonSlotObject)
					continue;
				_callFunc2 funcConvert = (_callFunc2)GAMEADDR(Addr_UnityEngine_GameObject__GetComponent_object_);
				DWORD64 qwCUIDungeonSlot = funcConvert(qwCUIDungeonSlotObject, DWORD64(GAMEADDR(Addr_Method$GameObject_GetComponent_CUIDungeonSlot___)));
				if (!qwCUIDungeonSlot)
					continue;

				DWORD64 qwSDungeonUI = qwCUIDungeonSlot + Offset_CUIDungeonSlot_SDungeonUI;
				DWORD64 dwMapID = *(DWORD*)(qwSDungeonUI + Offset_CGameTable_SDungeonUI_MapIndex);
				int nOrder = *(int*)(qwSDungeonUI + Offset_CGameTable_SDungeonUI_MapOrder);
				DWORD64 qwDungeonName = *(DWORD64*)(qwSDungeonUI + Offset_CGameTable_SDungeonUI_MapName);
				if (qwDungeonName)
				{
					WCHAR szDungeonName[MAX_NAME] = { 0, };
					ConvertString(qwDungeonName, szDungeonName);

					if (wcscmp(szDungeonName, g_pDungeonRes[g_nEnterDungeonIdx].szKRName) &&
						wcscmp(szDungeonName, g_pDungeonRes[g_nEnterDungeonIdx].szCHName) &&
						wcscmp(szDungeonName, g_pDungeonRes[g_nEnterDungeonIdx].szTWName))
						continue;
				}
				_callFunc1 funcIsActive = (_callFunc1)GAMEADDR(Addr_UnityEngine_GameObject_get_activeSelf);
				DWORD64 qwGoLockObject = *(DWORD64*)(qwCUIDungeonSlot + Offset_CUIDungeonSlot_m_goLock);
				if (!qwGoLockObject || funcIsActive(qwGoLockObject))
					continue;

				//XMsg("[%s] Select Dungeon", __FUNCTION__);

				_callFunc1 OnClickSlot = (_callFunc1)GAMEADDR(Addr_CUIDungeonSlot__OnClickSlotInfo);

				OnClickSlot(qwCUIDungeonSlot);

				SetDelay(20);
				return;
			}
		}

		// 스크롤하자
		DWORD64 qwDungeonSlotDataList = *(DWORD64*)(qwCUIDungeonWindow + Offset_CUIDungeonWindow_DungeonSlotDataList);

		if (!qwDungeonSlotDataList)
		{
			//XMsg("[%s] Wait - 2", __FUNCTION__);
			return;
		}

		_callFunc1 funcGetCount = (_callFunc1)GAMEADDR(Addr_System_Collections_Generic_List_object___get_Count);
		_callFunc2 funcGetItem = (_callFunc2)GAMEADDR(Addr_Collections_Generic_List_object___get_Item);


		int nCount = (int)funcGetCount(qwDungeonSlotDataList);
		for (int i = 0; i < nCount; i++)
		{

			DWORD64 qwDungeonSlotData = funcGetItem(qwDungeonSlotDataList, i);						// DungeonSlotData

			if (!qwDungeonSlotData)
				continue;

			int nOrder = DWORD(qwDungeonSlotData + Offset_DungeonSlotData_Order);

			if (nOrder == g_pDungeonRes[g_nEnterDungeonIdx].nOrder)
			{
				//XMsg("[%s] Scroll to %d", __FUNCTION__, i);

				_callFunc3 funcScroll = (_callFunc3)GAMEADDR(Addr_UIListView__MoveScrollTo);

				funcScroll(qwDungeonList, i, 0);


				SetDelay(20);
				return;
			}

// 			DWORD64 qwSDungeonUI = qwDungeonSlotData + Offset_DungeonSlotData_SDungeonUI;			// CGameTable.SDungeonUI
// 			DWORD64 qwDungeonName = *(DWORD64*)(qwSDungeonUI + Offset_CGameTable_SDungeonUI_MapName);
// 			if (qwDungeonName)
// 			{
// 				char szDungeonName[MAX_NAME] = { 0, };
// 				ConvertString(qwDungeonName, szDungeonName);
// 
// 				if (!strcmp(szDungeonName, g_pDungeonRes[g_nEnterDungeonIdx].szKRName) ||
// 					!strcmp(szDungeonName, g_pDungeonRes[g_nEnterDungeonIdx].szCHName) ||
// 					!strcmp(szDungeonName, g_pDungeonRes[g_nEnterDungeonIdx].szTWName))
// 				{
// 					XMsg("[%s] Scroll to %d", __FUNCTION__, i);
// 
// 					_CallFunc3 funcScroll = (_CallFunc3)GAMEADDR(Addr_UIListView__MoveScrollTo);
// 					funcScroll(qwDungeonList, i, 0);
// 
// 					SetDelay(20);
// 					return;
// 				}
// 			}
		}
	}
}


BOOL OnCinematic()
{
	InitGlobal(Addr_CUIResources);
	_callFunc1 funcGetInstance = (_callFunc1)GAMEADDR(Addr_MonoSingleton_object___get_s_Instance);
	DWORD64 qwCUIResources = funcGetInstance(DWORD64(GAMEADDR(Addr_CUIResources)));
	if (qwCUIResources)
	{
		DWORD64 qwSkipBtn = *(DWORD64*)(qwCUIResources + Offset_CUIResources_SkipButton);
		if (IsActiveWidget(qwSkipBtn))
		{
			ClickButton(qwSkipBtn);
			return TRUE;
		}
	}
	return FALSE;
}


BOOL OnMonsterCollectionSynthesis()
{
	if (IsVisibleUI(UI_UID_MonsterCollectionSynthesis))
	{
		DWORD64 qwCUIMonsterCollectionSynthesis = GetWindowByUI_UID(UI_UID_MonsterCollectionSynthesis);
		if (qwCUIMonsterCollectionSynthesis)
		{
			//XMsg("[%s] Close", __FUNCTION__);

			_callFunc1 funcOnClose = (_callFunc1)GAMEADDR(Addr_CUIMonsterCollectionSynthesis__Close);
			funcOnClose(qwCUIMonsterCollectionSynthesis);
			SetDelay(20);
			return TRUE;
		}
	}
	return FALSE;
}



// -------------------------------------------- RSG End ---------------------------------------------- //

// -------------------------------------------- UMC Start ---------------------------------------------- //


// GameDefine.Quest.EQuestActionType
void OnC2S_QuestAction(int nQuestType, int nQuestActionType, DWORD dwQuestID)
{
	InitGlobal(Addr_CNetHandler);

	_CallFunc1 funcGetInst = (_CallFunc1)GAMEADDR(Addr_MonoSingleton_object___get_s_Instance);
	DWORD64 qwCNetHandler = funcGetInst(DWORD64V(GAMEADDR(Addr_CNetHandler)));

	if (!qwCNetHandler)
		return;

	_CallFunc4 funcQuestAction = (_CallFunc4)GAMEADDR(Addr_CNetHandler__OnC2S_QuestAction);
	funcQuestAction(qwCNetHandler, nQuestType, nQuestActionType, dwQuestID);
}


// OnGameReQuest
void OnGameReQuest()
{
	int nVisbleWindowUID = (int)GetVisibleWindowUID();

	if (g_nStepStatus == 100)
	{
		if (nVisbleWindowUID == UI_UID_QuestWindow)
		{
			XMsg(L"[%hs] Close", __FUNCTION__);

			CloseAllActivePopup();

			SetDelay(20);
			return;
		}

		g_bReQuestDone = TRUE;

		XMsg(L"마을 의뢰 퀘스트를 확인하였습니다");
		ShowStatus(0, 60256);

		SetStatus(Status_DoAuto);
		return;
	}

	if (nVisbleWindowUID != UI_UID_QuestWindow)
	{
		XMsg(L"[%s] Open", __FUNCTION__);

		MenuButtonClick(L"Btn_Quest");

		SetDelay(20);
		return;
	}

	DWORD64 qwCUIQuestWindow = GetWindowByUI_UID((UI_UID)nVisbleWindowUID);
	if (!qwCUIQuestWindow)
	{
		XMsg(L"[%s] Wait - 1", __FUNCTION__);
		return;
	}

	if (!SelectToggle(DWORD64V(qwCUIQuestWindow + Offset_CUIGroupWindow_ToggleArray), 5))
	{
		XMsg(L"[%s] Select ReQuest Tab", __FUNCTION__);
		SetDelay(20);
		return;
	}


	_CallFunc0 funcGetQuestCommisionData = (_CallFunc0)GAMEADDR(Addr_CGameTable__get_QuestCommisionData);
	DWORD64 qwCGameTable_CQuestCommisionData = funcGetQuestCommisionData();
	if (!qwCGameTable_CQuestCommisionData)
	{
		XMsg(L"[%s] Wait - 2", __FUNCTION__);
		return;
	}

	InitGlobal(Addr_Method$CUIGroupWindow_GetView_CUIQuestViewRequest___);

	_CallFunc3 funcGetWindow = (_CallFunc3)GAMEADDR(Addr_CUIGroupWindow__GetView_object_);
	_CallFunc1 funcGetSelectIndex = (_CallFunc1)GAMEADDR(Addr_CUIGroupWindow__get_SelectViewID);
	DWORD64 qwCUIQuestViewRequest = funcGetWindow(qwCUIQuestWindow, funcGetSelectIndex(qwCUIQuestWindow),
		DWORD64V(GAMEADDR(Addr_Method$CUIGroupWindow_GetView_CUIQuestViewRequest___)));
	if (!qwCUIQuestViewRequest)
	{
		XMsg(L"[%s] Wait - 3", __FUNCTION__);
		return;
	}

	int nCurDoingCount = *(int*)(qwCUIQuestViewRequest + Offset_CUIQuestViewRequest_CurProgressCnt);
	int nCompleteCount = *(int*)(qwCUIQuestViewRequest + Offset_CUIQuestViewRequest_CurCompleteCnt);
	if (nCurDoingCount + nCompleteCount < 5)
	{
		int nUsedRefreshCount = *(int*)(qwCUIQuestViewRequest + Offset_CUIQuestViewRequest_UsedCntRefreshGold);
		int nMaxRefreshCount = *(int*)(qwCUIQuestViewRequest + Offset_CUIQuestViewRequest_MaxCntRefreshGold);
		int nNeedRefreshGold = *(int*)(qwCUIQuestViewRequest + Offset_CUIQuestViewRequest_NeedPropertyRefreshGold);

		// 갱신할수 있는가 체크
		BOOL bRefreshMission = FALSE;
		if (nUsedRefreshCount < nMaxRefreshCount && g_pCharInfo.nGold - nNeedRefreshGold >= 100000)
			bRefreshMission = TRUE;

		// 미션 목록
		DWORD64 qwMissionListView = *(DWORD64*)(qwCUIQuestViewRequest + Offset_CUIQuestViewRequest_MissionListView);
		if (!qwMissionListView)
		{
			XMsg(L"[%s] Wait - 4", __FUNCTION__);
			return;
		}

		InitGlobal(Addr_Method$UnityEngine_GetComponent_CUIQuestRequestSlot___);

		DWORD64 qwMissionListContent = *(DWORD64*)(qwMissionListView + Offset_UIListView_Content);
		if (!qwMissionListContent)
		{
			XMsg(L"[%s] Wait - 5", __FUNCTION__);
			return;
		}

		_CallFunc1 funcGetCount = (_CallFunc1)GAMEADDR(Addr_UnityEngine_Transform__get_childCount);
		int nCount = (int)funcGetCount(qwMissionListContent);
		if (nCount <= 0)
		{
			XMsg(L"[%s] Wait - 6", __FUNCTION__);
			return;
		}

		for (int i = 0; i < nCount; i++)
		{
			_CallFunc2 funcGetChild = (_CallFunc2)GAMEADDR(Addr_UnityEngine_Transform__GetChild);
			DWORD64 qwCUIMissionSlotObject = funcGetChild(qwMissionListContent, i);
			if (!qwCUIMissionSlotObject)
				continue;

			_CallFunc2 funcConvert = (_CallFunc2)GAMEADDR(Addr_UnityEngine_Component__GetComponent_object_);
			DWORD64 qwCUIQuestRequestSlot = funcConvert(qwCUIMissionSlotObject, DWORD64V(GAMEADDR(Addr_Method$UnityEngine_GetComponent_CUIQuestRequestSlot___)));
			if (!qwCUIQuestRequestSlot)
				continue;

			DWORD64 qwQuestData = *(DWORD64*)(qwCUIQuestRequestSlot + Offset_CUIQuestRequestSlot_QuestData);
			if (!qwQuestData)
				continue;

			_CallFunc1 funcGetQuestState = (_CallFunc1)GAMEADDR(Addr_Protocol_QuestData__get_State);
			int nQuestState = (int)funcGetQuestState(qwQuestData);
			if (nQuestState != eQuestState_QS_NEW)
				continue;

			_CallFunc1 funcGetQuestID = (_CallFunc1)GAMEADDR(Addr_Protocol_QuestData__get_Index);
			DWORD dwQuestID = (DWORD)funcGetQuestID(qwQuestData);

			_CallFunc3Struct funcGetSStore = (_CallFunc3Struct) * (DWORD64*)(*(DWORD64*)qwCGameTable_CQuestCommisionData + Offset_GetItemDesc);
			RET_STRUCT qwItemDesc = funcGetSStore(qwCGameTable_CQuestCommisionData, dwQuestID, *(DWORD64*)(*(DWORD64*)qwCGameTable_CQuestCommisionData + Offset_GetItemDesc + 8));
			if (!qwItemDesc.qwData1)
				continue;

			DWORD64 qwCGameTable_SCommissionData = (DWORD64)&qwItemDesc.qwData1;

			int nGrade = *(int*)(qwCGameTable_SCommissionData + Offset_CGameTable_SCommissionData_Grade);
			int nMinLevel = *(int*)(qwCGameTable_SCommissionData + Offset_CGameTable_SCommissionData_SCommission_Lv + 0x00);
			int nMaxLevel = *(int*)(qwCGameTable_SCommissionData + Offset_CGameTable_SCommissionData_SCommission_Lv + 0x04);


			if (nMinLevel > g_pCharInfo.nLevel)
				continue;

			if (bRefreshMission && !g_OtherSetting.bReqQuestGrade[nGrade - 1])
				continue;


			WCHAR szQuestName[MAX_NAME] = { 0, };
			DWORD64 qwQuestName = *(DWORD64*)(qwCGameTable_SCommissionData + Offset_CGameTable_SCommissionData_Commission_Name);
			if (qwQuestName)
				ConvertString(qwQuestName, szQuestName);

			// 확정 보상
			DWORD64 qwReward_Goods = qwCGameTable_SCommissionData + Offset_CGameTable_SCommissionData_SSCommision_Reward_Goods;
			int nRewardExp = *(int*)(qwReward_Goods + Offset_CGameTable_SSCommision_Reward_Goods_Exp);
			int nRewardGold = *(int*)(qwReward_Goods + Offset_CGameTable_SSCommision_Reward_Goods_Gold);
			int nRewardHonorCoin = *(int*)(qwReward_Goods + Offset_CGameTable_SSCommision_Reward_Goods_Honor_Coin);

// 			XMsg(L"%s, ID: %08X, Grade: %d, Level: %d / %d, Exp: %d, Gold: %d, HonorCoin: %d",
// 				szQuestName, dwQuestID, nGrade, nMinLevel, nMaxLevel, nRewardExp, nRewardGold, nRewardHonorCoin);

			// 랜덤 보상
			DWORD64 qwRewardItemArray = *(DWORD64*)(qwCGameTable_SCommissionData + Offset_CGameTable_SCommissionData_SRandomReward_Items);
			if (qwRewardItemArray)
			{
				for (int j = 0; j < 5; j++)
				{
					DWORD64 qwSRandomReward_Item = qwRewardItemArray + 0x0C * j + 0x20;
					if (!qwSRandomReward_Item)
						continue;

					DWORD dwRewardItemID = *(DWORD*)(qwSRandomReward_Item + Offset_CGameTable_SRandomReward_Item_Index);
					int nRewardItemCount = *(int*)(qwSRandomReward_Item + Offset_CGameTable_SRandomReward_Item_Value);

//					XMsg(L"No: %d, ID: %08X, Value: %d", j + 1, dwRewardItemID, nRewardItemCount);
				}
			}


			XMsg(L"의뢰 퀘스트 \"%s\" 을(를) 수락하였습니다", szQuestName);
			ShowStatus(1, 60252, szQuestName);

			// 의뢰 퀘스트 수락
			OnC2S_QuestAction(eQuestType_QT_REQUEST, 1, dwQuestID);
			SetDelay(20);
			return;
		}


		DWORD64 qwSUILeftInfo = qwCUIQuestViewRequest + Offset_CUIQuestViewRequest_SUILeftInfo;

		// 골드 선택
		int nCashType = *(int*)(qwCUIQuestViewRequest + Offset_CUIQuestViewRequest_GoodsType);
		if (nCashType != 0)			// CUIQuestViewRequest.ERequestRenewalGoodsType::E_GoodsType_GOLD
		{
			if (!g_OtherSetting.bReqQuestCoin || g_pCharInfo.nHonorCoin < 100)
			{
				DWORD64 qwToggleList = *(DWORD64*)(qwSUILeftInfo + Offset_CUIQuestViewRequest_SUILeftInfo_ToggleList);
				if (qwToggleList)
				{
					_CallFunc2 funcGetitem = (_CallFunc2)GAMEADDR(Addr_Collections_Generic_List_object___get_Item);
					DWORD64 qwGoldToggle = funcGetitem(qwToggleList, 0);
					if (qwGoldToggle)
					{
						XMsg(L"[%s] Set Gold", __FUNCTION__);

						_CallFunc1 funcClick = (_CallFunc1)GAMEADDR(Addr_UnityEngine_UI_Toggle__OnSubmit);
						funcClick(qwGoldToggle);

						SetDelay(20);
						return;
					}
				}
			}
		}
		else
		{
			if (g_OtherSetting.bReqQuestCoin && g_pCharInfo.nHonorCoin >= 100)
			{
				DWORD64 qwToggleList = *(DWORD64*)(qwSUILeftInfo + Offset_CUIQuestViewRequest_SUILeftInfo_ToggleList);
				if (qwToggleList)
				{
					_CallFunc2 funcGetitem = (_CallFunc2)GAMEADDR(Addr_Collections_Generic_List_object___get_Item);
					DWORD64 qwGoldToggle = funcGetitem(qwToggleList, 1);
					if (qwGoldToggle)
					{
						XMsg(L"[%s] Set Coin", __FUNCTION__);

						_CallFunc1 funcClick = (_CallFunc1)GAMEADDR(Addr_UnityEngine_UI_Toggle__OnSubmit);
						funcClick(qwGoldToggle);

						SetDelay(20);
						return;
					}
				}
			}
		}

		// 새로 고침
		if (bRefreshMission)
		{
			_CallFunc1 funcIsDiable = (_CallFunc1)GAMEADDR(Addr_UIButton__get_Disabled);

			DWORD64 qwRefreshBtn = *(DWORD64*)(qwSUILeftInfo + Offset_CUIQuestViewRequest_SUILeftInfo_RefreshBtn);
			if (qwRefreshBtn && !funcIsDiable(qwRefreshBtn))
			{
				XMsg(L"[%s] Refresh", __FUNCTION__);

				ClickButton(qwRefreshBtn);

				SetDelay(20);
				return;
			}
		}
	}

	g_nStepStatus = 100;
}


void OnGameBuyPotion()
{

	int nVisbleWindowUID = (int)GetVisibleWindowUID();

	if (g_nStepStatus == 100)
	{
		if (nVisbleWindowUID == UI_UID_NpcShopWindow)
		{
			CloseAllActivePopup();

			SetDelay(20);
			return;
		}

		ShowStatus(0, 60199);

		SetStatus(Status_ReturnVillage);
		return;
	}


	if (nVisbleWindowUID != UI_UID_NpcShopWindow)
	{

		if (!g_pCharInfo.bIsMoving)
		{
			ShowStatus(0, 60195);

			GoToNpc(eNpcBtnType_Btn_GeneralShop);
		}

		SetDelay(20);
		return;
	}

	// 상점이 켜진 상태면
	DWORD64 qwCUINpcShopWindow = GetWindowByUI_UID((UI_UID)nVisbleWindowUID);
	if (!qwCUINpcShopWindow)
	{
		return;
	}

	// 판매할 아이템 처리하자
	BOOL bNeedSell = FALSE;

	for (int i = 0; i < g_nInvenCount; i++)
	{
		if (IsNeedSellItem(i))
		{
			bNeedSell = TRUE;
			break;
		}
	}

	if (bNeedSell)
	{
		_CallFunc1 funcGetNpcShopSellInfo = (_CallFunc1)GAMEADDR(Addr_CUINpcShopWindow__get_GetNpcShopSellInfo);
		DWORD64 qwCUINpcShopSellInfo = funcGetNpcShopSellInfo(qwCUINpcShopWindow);
		if (!qwCUINpcShopSellInfo)
		{
			return;
		}

		// 다중 선택 클릭하자		
		if (*(WCHAR*)(qwCUINpcShopSellInfo + Offset_CUINpcShopSellInfo_IsCheckkAll) == 0)
		{
			_CallFunc1 funcCheckAll = (_CallFunc1)GAMEADDR(Addr_CUINpcShopSellInfo__OnClick_CheckAllBox);
			funcCheckAll(qwCUINpcShopSellInfo);

			SetDelay(20);
			return;
		}

		// 판매할 아이템들 선택하자
		DWORD64 qwInvenScroll = *(DWORD64*)(qwCUINpcShopSellInfo + Offset_CUINpcShopSellInfo_InvenScroll);
		if (!qwInvenScroll)
		{
			return;
		}

		int nSelectInvenCount = 0;

		// 선택된 아이템 개수를 구하자
		_CallFunc1 funcGetSelectList = (_CallFunc1)GAMEADDR(Addr_CUIInven_InvenScroll__get_SelectItemDataList);
		DWORD64 qwSelectList = funcGetSelectList(qwInvenScroll);
		if (qwSelectList)
			nSelectInvenCount = *(int*)(qwSelectList + Offset_System_Collections_Generic_List_Count);

		if (nSelectInvenCount < 20)
		{
			_CallFunc1 funcGetUIInven = (_CallFunc1)GAMEADDR(Addr_CUIInven_InvenScroll__get_Inven);
			DWORD64 qwCUIInven = funcGetUIInven(qwInvenScroll);
			if (!qwCUIInven)
			{

				return;
			}

			for (int i = 0; i < g_nInvenCount; i++)
			{
				if (!IsNeedSellItem(i))
					continue;

				if (IsSelectedItemSlot(qwInvenScroll, g_pInvenInfo[i].qwItemUID))
					continue;

				_CallFunc2 funcGetItemSlot = (_CallFunc2)GAMEADDR(Addr_CUIInven__GetSlotByOID);
				DWORD64 qwCUIItemSlot = funcGetItemSlot(qwCUIInven, g_pInvenInfo[i].qwItemUID);

				if (!qwCUIItemSlot)
				{
					CUIInvenScroll(qwInvenScroll, i);
					SetDelay(20);
					return;
				}

// 				if (IsSelectedItemSlot(qwCUIItemSlot))
// 					continue;

				ShowStatus(1, 60196, g_pInvenInfo[i].szName);

				_CallFunc2 funcSelect = (_CallFunc2)GAMEADDR(Addr_CUIInven_InvenScroll__OnClickSlot);
				funcSelect(qwInvenScroll, qwCUIItemSlot);

				SetDelay(20);
				return;
			}
		}

		if (nSelectInvenCount > 0)
		{

			ShowStatus(0, 60197);

			_CallFunc1 funcSell = (_CallFunc1)GAMEADDR(Addr_CUINpcShopSellInfo__OnClick_Sell);
			funcSell(qwCUINpcShopSellInfo);

			SetDelay(20);
			return;
		}
	}

	// 아이템 구매
	_CallFunc1 funcGetNpcShopBuyInfo = (_CallFunc1)GAMEADDR(Addr_CUINpcShopWindow__get_GetNpcShopBuyInfo);
	DWORD64 qwCUINpcShopBuyInfo = funcGetNpcShopBuyInfo(qwCUINpcShopWindow);

	if (!qwCUINpcShopBuyInfo)
	{
		return;
	}

	UpdateNPCShopBuyItem(qwCUINpcShopBuyInfo);

	for (int i = 0; i < g_nBuyExpendCount; i++)
	{
		if (!g_pBuyExpendInfo[i].bEnable)
			continue;

		int nPotionIdx = GetPotionIndex(g_pBuyExpendInfo[i].szName);
		if (nPotionIdx == NOINDEX)
			continue;

		if (g_pPotionRes[nPotionIdx].nClassType != ePlayerClass_PC_COMMON && g_pPotionRes[nPotionIdx].nClassType != g_pCharInfo.nClassType)
			continue;

		int nCount = GetInvenCountByID(g_pPotionRes[nPotionIdx].dwID);

		if (nCount >= g_pBuyExpendInfo[i].nMaxCount)
			continue;


		int nShopIdx = GetNpcItemIndexByID(g_pPotionRes[nPotionIdx].dwID);
		if (nShopIdx == NOINDEX)
		{
			continue;
		}

		if (g_pNpcItemInfo[nShopIdx].bIsSoldOut)
			continue;

		if (GetCashAmount(g_pNpcItemInfo[nShopIdx].nCashType) < g_pNpcItemInfo[nShopIdx].nPrice)
			continue;

		if (g_pCharInfo.nLevel < g_pNpcItemInfo[nShopIdx].nNeedLevel)
			continue;

		if (g_pNpcItemInfo[nShopIdx].nUseClass != ePlayerClass_PC_COMMON && g_pNpcItemInfo[nShopIdx].nUseClass != g_pCharInfo.nClassType)
			continue;

		int nBuyCount = g_pBuyExpendInfo[i].nMaxCount - nCount/* + rand() % 10*/;
		if (g_pNpcItemInfo[nShopIdx].bIsHpPotion)
		{
			int nCanBuyCount = g_pCharInfo.nHpPotionLimit - GetCurHPPotionCount();
			if (nCanBuyCount == 0)
				continue;

			nBuyCount = min(nBuyCount, nCanBuyCount);
		}

		BuyNPCShopBuyItem(qwCUINpcShopWindow, nShopIdx, nBuyCount);

		SetDelay(20);
		return;
	}

	g_nStepStatus = 100;
}


BOOL IsExistCombinePet()
{
	if (!g_OtherSetting.bAutoCombinePet)
		return FALSE;

	int nCount[10] = { 0, };

	for (int i = 0; i < g_nPetCount; i++)
	{
		nCount[g_pPetInfo[i].nGrade % 10] += g_pPetInfo[i].nCount;
		if (nCount[g_pPetInfo[i].nGrade % 10] >= 3)
			return TRUE;
	}

	return FALSE;
}


int GetBestPetIndex()
{
	int nIndex = NOINDEX;

	int nGrade = -1;
	int nOrder = 9999;

	for (int i = 0; i < g_nPetCount; i++)
	{
		if (g_pPetInfo[i].nGrade > nGrade ||
			g_pPetInfo[i].nGrade == nGrade && g_pPetInfo[i].nOrder < nOrder)
		{
			nIndex = i;

			nGrade = g_pPetInfo[i].nGrade;
			nOrder = g_pPetInfo[i].nOrder;
		}
	}

	if (nIndex != NOINDEX && g_pPetInfo[nIndex].dwID != g_pCharInfo.dwPetID)
		return nIndex;

	return NOINDEX;
}


void OnGamePet()
{
	int nVisbleWindowUID = (int)GetVisibleWindowUID();

	if (g_nStepStatus == 100)
	{
		if (nVisbleWindowUID == UI_UID_PetWindow)
		{
			CloseAllActivePopup();

			SetDelay(20);
			return;
		}

		g_bRefreshPet = TRUE;

		ShowStatus(0, 60183);

		SetStatus(Status_DoAuto);
		return;
	}

	if (nVisbleWindowUID != UI_UID_PetWindow)
	{
		MenuButtonClick(L"Btn_Pet");

		SetDelay(20);

		return;
	}

	DWORD64 qwCUIPetWindow = GetWindowByUI_UID(UI_UID_PetWindow);
	if (!qwCUIPetWindow)
	{
		return;
	}

	UpdatePetInfo(qwCUIPetWindow);

	_CallFunc1 funcGetPetview = (_CallFunc1)GAMEADDR(Addr_CUIPetWindow__GetPetView);
	DWORD64 qwCUIPetView = funcGetPetview(qwCUIPetWindow);


	if (!qwCUIPetView)
	{
		return;
	}

	_CallFunc1 funcGetUIPet = (_CallFunc1)GAMEADDR(Addr_CUIPetView__get_GetUIActorPet);
	DWORD64 qwCUIPet = funcGetUIPet(qwCUIPetView);

	if (!qwCUIPet)
	{
		return;
	}

	_CallFunc1 funcGetSynthesis = (_CallFunc1)GAMEADDR(Addr_CUIPetWindow__GetPetSynthesisView);
	DWORD64 qwCUIPetSynthesisView = funcGetSynthesis(qwCUIPetWindow);

	if (!qwCUIPetSynthesisView)
	{
		return;
	}


	// 합성할거 있으면 처리하자
	_CallFunc1 funcCanSynthesis = (_CallFunc1)GAMEADDR(Addr_CUIPetSynthesisView__get_m_blPossibleSynthesis);

	if (IsExistCombinePet() || (IsSelectToggle(DWORD64V(qwCUIPetWindow + Offset_CUIPetWindow_ToggleTabList), 1) && funcCanSynthesis(qwCUIPetSynthesisView)))
	{

		if (!SelectToggle(DWORD64V(qwCUIPetWindow + Offset_CUIPetWindow_ToggleTabList), 1))
		{
			SetDelay(20);
			return;
		}

		// 등급 All 선택
		if (!SelectToggle(DWORD64V(qwCUIPetSynthesisView + Offset_CUIPetSynthesisView_ToggleGradeTab), 0))
		{
			SetDelay(20);
			return;
		}

		// 합성 버튼이 활성화 되어있으면
		_CallFunc1 funcIsDiable = (_CallFunc1)GAMEADDR(Addr_UIButton__get_Disabled);
		DWORD64 qwSynthesisBtn = *(DWORD64*)(qwCUIPetSynthesisView + Offset_CUIPetSynthesisView_SynthesisButton);

		if (qwSynthesisBtn && !funcIsDiable(qwSynthesisBtn))
		{
			_CallFunc1 funcSendSynthesis = (_CallFunc1)GAMEADDR(Addr_CUIPetSynthesisView__SendSynthesis);
			funcSendSynthesis(qwCUIPetSynthesisView);

			SetDelay(20);
			return;
		}

		// 자동 등록 가능하면
		DWORD64 qwAutoRegisterBtn = *(DWORD64*)(qwCUIPetSynthesisView + Offset_CUIPetSynthesisView_AutoRegisterButton);

		if (qwSynthesisBtn && !funcIsDiable(qwAutoRegisterBtn))
		{
			_CallFunc1 funcAutoRegist = (_CallFunc1)GAMEADDR(Addr_CUIPetSynthesisView__AutoRegist);
			funcAutoRegist(qwCUIPetSynthesisView);

			SetDelay(20);
			return;
		}
	}

	// 좋은 가디언 장착
	int nBestIndex = GetBestPetIndex();
	if (nBestIndex != NOINDEX)
	{
		// 첫번째 탭 선택하자
		if (!SelectToggle(DWORD64V(qwCUIPetWindow + Offset_CUIPetWindow_ToggleTabList), 0))
		{
			SetDelay(20);
			return;
		}

		// 제일 좋은 가디언 선택
		_CallFunc1 funcGetSelectID = (_CallFunc1)GAMEADDR(Addr_CUIPet__get_SelectPetIndex);

		if (funcGetSelectID(qwCUIPet) != g_pPetInfo[nBestIndex].dwID)
		{
			DWORD64 qwCPetDataList = *(DWORD64*)(qwCUIPet + Offset_CUIPet_CPetDataList);

			if (qwCPetDataList)
			{
				_CallFunc1 funcGetCount = (_CallFunc1)GAMEADDR(Addr_System_Collections_Generic_List_object___get_Count);

				int nCount = (int)funcGetCount(qwCPetDataList);
				for (int i = 0; i < nCount; i++)
				{

					_CallFunc2 funcGetItem = (_CallFunc2)GAMEADDR(Addr_Collections_Generic_List_object___get_Item);
					DWORD64 qwCPetData = funcGetItem(qwCPetDataList, i);

					if (!qwCPetData)
						continue;

					DWORD dwID = *(DWORD*)(qwCPetData + Offset_BasePetCostumeData_Index);

					if (dwID == g_pPetInfo[nBestIndex].dwID)
					{
						_CallFunc2 funcSelectID = (_CallFunc2)GAMEADDR(Addr_CUIPet__SlotSelected);
						funcSelectID(qwCUIPet, qwCPetData);

						SetDelay(20);
						return;
					}
				}
			}

		}
		// 선택된 가디언 장착
		else
		{
			_CallFunc1 funcIsDiable = (_CallFunc1)GAMEADDR(Addr_UIButton__get_Disabled);
			DWORD64 qwEquipBtn = *(DWORD64*)(qwCUIPet + Offset_CUIPet_EquipButton);
			DWORD64 qwShapeChangeBtn = *(DWORD64*)(qwCUIPet + Offset_CUIPet_ShapeChangeButton);
			// 선택된 가디언의 장착단추가 활성화된 경우
			if (qwEquipBtn && !funcIsDiable(qwEquipBtn))
			{
				ClickButton(qwEquipBtn);
			}
			// 선택된 가디언의 외형적용단추가 활성화된 경우
			else
			{
				ClickButton(qwShapeChangeBtn);
			}
		}

		SetDelay(20);
		return;
	}

	g_nStepStatus = 100;
}


// -------------------------------------------- UMC End ---------------------------------------------- //


void UpdateSkillInfo(BOOL bLog)
{
	g_nSkillCount = 0;
	
	_callFunc0 funcGetSkillInstance = (_callFunc0)GAMEADDR(Addr_CGameTable__get_PlayerSkill);
	DWORD64 qwSkillDataInstance = funcGetSkillInstance();
	if (!qwSkillDataInstance)
		return;

	// 현재 내 스킬 먼저 얻자
	_callFunc0 funcGetNetPlayer = (_callFunc0)GAMEADDR(Addr_CNetData__get_MyPlayer);
	DWORD64 qwNetPlayer = funcGetNetPlayer();
	if (qwNetPlayer)
	{
		_callFunc1 funcGetMySkillList = (_callFunc1)GAMEADDR(Addr_CNetData_CMyPlayer__get_MySkillList);
		DWORD64 qwSkillDataList = funcGetMySkillList(qwNetPlayer);
		if (qwSkillDataList)
		{
			_callFunc2 funcGetitem = (_callFunc2)GAMEADDR(Addr_Collections_Generic_List_object___get_Item);

			int nCount = *(int*)(qwSkillDataList + Offset_System_Collections_Generic_List_Count);
			for (int i = 0; i < nCount; i++)
			{
				DWORD64 qwSkillData = funcGetitem(qwSkillDataList, i);
				if (!qwSkillData)
					continue;

				_callFunc1 funcGetIndex = (_callFunc1)GAMEADDR(Addr_Protocol_SkillData__get_SkillIndex);
				DWORD dwSkillID = (DWORD)funcGetIndex(qwSkillData);

				_callFunc1 funcGetLevel = (_callFunc1)GAMEADDR(Addr_Protocol_SkillData__get_SkillLevel);
				int nSkillLevel = (int)funcGetLevel(qwSkillData);

				_callFunc3 funcCheckBaseWeaponType = (_callFunc3)GAMEADDR(ADDR_CNetData_CMyPlayer__CheckBaseWeaponNEquipWeaponType);
				DWORD64 dwWeaponType = funcCheckBaseWeaponType(qwNetPlayer, dwSkillID, nSkillLevel);

				_callFunc6 funcGetSkillInfo = (_callFunc6)GAMEADDR(Addr_CGameTable_CPlayerSkill__GetValue);
				BYTE byTemp[0x100] = { 0, };
				funcGetSkillInfo((DWORD64)byTemp, qwSkillDataInstance, dwSkillID, nSkillLevel, dwWeaponType, 0);
				DWORD64 qwSkillInfo = *(DWORD64*)byTemp;
				if (!qwSkillInfo)
					continue;

				int nSkillSeries = *(int*)(qwSkillInfo + Offset_SkillInfo_Series);
				if (nSkillSeries == 1)			// SAS_BASE_SKILL
					continue;

				int nSkillType = *(int*)(qwSkillInfo + Offset_SkillInfo_Type);
				int nSkillGrade = *(int*)(qwSkillInfo + Offset_SkillInfo_Grade);
				int nSkillClass = *(int*)(qwSkillInfo + Offset_SkillInfo_Class);			// PC_RANGER
				if (nSkillClass == 4)
					nSkillClass = ePlayerClass_PC_MAGICIAN;
				int nSubClass = *(int*)(qwSkillInfo + Offset_SkillInfo_SubClass);

				char bCanAuto = *(char*)(qwSkillInfo + Offset_SkillInfo_AutoType);

				DWORD64 qwSkillName = *(DWORD64*)(qwSkillInfo + Offset_SkillInfo_Name);
				if (qwSkillName)
				{
					WCHAR szSkillName[MAX_NAME] = { 0, };
					ConvertString(qwSkillName, szSkillName);

					if (g_nSkillCount < MAX_SKILL)
					{
						memset(&g_pSkillInfo[g_nSkillCount], 0, sizeof(SkillInfo));

						wcscpy(g_pSkillInfo[g_nSkillCount].szName, szSkillName);
						g_pSkillInfo[g_nSkillCount].dwID = dwSkillID;
						g_pSkillInfo[g_nSkillCount].nType = (eSkillType)nSkillType;
						g_pSkillInfo[g_nSkillCount].nLevel = nSkillLevel;
						g_pSkillInfo[g_nSkillCount].nGrade = (eItemGrade)nSkillGrade;
						g_pSkillInfo[g_nSkillCount].nClassType = nSkillClass;

						g_pSkillInfo[g_nSkillCount].bCanAuto = bCanAuto;
						g_pSkillInfo[g_nSkillCount].bIsAuto = GetSkillAutoState(dwSkillID);

						g_nSkillCount++;
					}
				}
			}
		}
	}

	if (bLog)
	{
		XMsg(L"==================== Skill Info ====================");
		for (int i = 0; i < g_nSkillCount; i++)
		{
			XMsg(L"No: %d, %s, ID: %d, Type: %d, Level: %d, Grade: %d, Class: %d, SubClass: %d, CanAuto: %d, IsAuto: %d", i + 1,
				g_pSkillInfo[i].szName,
				g_pSkillInfo[i].dwID,
				g_pSkillInfo[i].nType,
				g_pSkillInfo[i].nLevel,
				g_pSkillInfo[i].nGrade,
				g_pSkillInfo[i].nClassType,
				g_pSkillInfo[i].nSubClass,
				g_pSkillInfo[i].bCanAuto,
				g_pSkillInfo[i].bIsAuto);
		}
	}
}

BOOL GetSkillAutoState(DWORD dwSkillID)
{
	InitGlobal(Addr_Method$MonoSingleton_CNetData__get_s_Instance__);
	InitGlobal(Addr_Method$IContainer_GetValueOrDefault_int__bool___);

	_callFunc1 funcGetInst = (_callFunc1)GAMEADDR(Addr_MonoSingleton_object___get_s_Instance);
	DWORD64 qwCNetData = funcGetInst(*(DWORD64*)(GAMEADDR(Addr_Method$MonoSingleton_CNetData__get_s_Instance__)));
	if (qwCNetData)
	{
		_callFunc1 funcGetAutoUseSkill = (_callFunc1)GAMEADDR(Addr_CNetData__get_AutoUseSkill);
		_callFunc4 funcIsAuto = (_callFunc4)GAMEADDR(Addr_IContainerHelper__GetValueOrDefault_int__bool_);
		return (char)funcIsAuto(funcGetAutoUseSkill(qwCNetData), dwSkillID, 0, *(DWORD64*)(GAMEADDR(Addr_Method$IContainer_GetValueOrDefault_int__bool___)));
	}

	return FALSE;
}


void SetSkillAutoState(DWORD dwSkillID, BOOL bState)
{
	InitGlobal(Addr_CNetHandler);

	_callFunc1 funcGetInst = (_callFunc1)GAMEADDR(Addr_MonoSingleton_object___get_s_Instance);
	DWORD64 qwCNetHandler = funcGetInst(*(DWORD64*)(GAMEADDR(Addr_CNetHandler)));
	if (!qwCNetHandler)
		return;

	_callFunc4 funcSetAuto = (_callFunc4)GAMEADDR(Addr_CNetHandler__OnC2S_UpdateAutoUse);
	funcSetAuto(qwCNetHandler, 2, dwSkillID, bState);
}

void OnGameSkill()
{
	if (g_nStepStatus == 100)
	{
		if (IsVisibleUI(UI_UID_SkillListPopup))
		{
			XMsg(L"[%s] Close", __FUNCTION__);

			CloseAllActivePopup();
			SetDelay(20);
			return;
		}

		XMsg(L"스킬 배우기 및 퀵슬롯 등록을 진행하였습니다");
		ShowStatus(0, 60207);

		SetStatus(Status_DoAuto);
		return;
	}

	if (!IsVisibleUI(UI_UID_SkillListPopup))
	{
		XMsg(L"[%s] Open", __FUNCTION__);

		MenuButtonClick(L"Btn_Skill");
		SetDelay(20);
		return;
	}

	int nIndex = GetNeedSkillIndex();
	if (nIndex == NOINDEX)
	{
		g_nStepStatus = 100;
		return;
	}
	
	int nSettingIdx = GetSettingSkillIndex(g_pSkillInfo[nIndex].dwID);
	if (nSettingIdx == NOINDEX)
	{
		XMsg(L"[%s] Wait - 1", __FUNCTION__);
		return;
	}

	if (g_pSkillInfo[nIndex].bIsAuto != g_pSkillInterval[nSettingIdx].bEnable)
	{
		XMsg(L"[%s] Change Skill(%s) Atuo State  %d -> %d", __FUNCTION__, g_pSkillInfo[nIndex].szName, g_pSkillInfo[nIndex].bIsAuto, 1);

		SetSkillAutoState(g_pSkillInfo[nIndex].dwID, g_pSkillInterval[nSettingIdx].bEnable);
		SetDelay(20);
		return;
	}
	
	if (IsVisibleUI(UI_UID_SkillCyclePopup))
	{
		DWORD64 qwCUISkillCyclePopup = GetWindowByUI_UID(UI_UID_SkillCyclePopup);
		if (!qwCUISkillCyclePopup)
		{
			XMsg(L"[%s] Wait - 2", __FUNCTION__);
			return;
		}

		// 스킬 아이디 체크
		DWORD dwCycleID = *(DWORD*)(qwCUISkillCyclePopup + Offset_CUISkillCyclePopup_SkillIndex);
		if (dwCycleID == g_pSkillInfo[nIndex].dwID)
		{
			// On Off 설정
			if (*(char*)(qwCUISkillCyclePopup + Offset_CUISkillCyclePopup_IsTimeOn) == 0)
			{
				XMsg(L"[%s] Set Skill(%s) Cycle On", __FUNCTION__, g_pSkillInfo[nIndex].szName);

				_callFunc2 funcSetTime = (_callFunc2)GAMEADDR(Addr_CUISkillCyclePopup__OnClickTimeToggle);
				funcSetTime(qwCUISkillCyclePopup, 1);

				SetDelay(20);
				return;
			}

			int nCurSecond = *(int*)(qwCUISkillCyclePopup + Offset_CUISkillCyclePopup_CurSecond);
			int nMinSecond = *(int*)(qwCUISkillCyclePopup + Offset_CUISkillCyclePopup_MinSecond);
			int nMaxSecond = *(int*)(qwCUISkillCyclePopup + Offset_CUISkillCyclePopup_MaxSecond);

			int nSetTime = g_pSkillInterval[nSettingIdx].nInterval;
			if (nSetTime < nMinSecond)
				nSetTime = nMinSecond;
			if (nSetTime > nMaxSecond)
				nSetTime = nMaxSecond;

			if (nCurSecond != nSetTime)
				*(int*)(qwCUISkillCyclePopup + Offset_CUISkillCyclePopup_CurSecond) = nSetTime;
		}

		XMsg(L"[%s] Close Cycle Popup", __FUNCTION__);

		_callFunc1 funcClose = (_callFunc1)GAMEADDR(Addr_CUISkillCyclePopup__Close);
		funcClose(qwCUISkillCyclePopup);

		SetDelay(20);
		return;
	}

	DWORD64 qwCUISkillListPopup = GetWindowByUI_UID(UI_UID_SkillListPopup);
	if (!qwCUISkillListPopup)
	{
		XMsg(L"[%s] Wait - 3", __FUNCTION__);
		return;
	}

	_callFunc1 funcGetSkillOSA = (_callFunc1)GAMEADDR(Addr_CUISkillListPopup__get_SkillOSA);
	DWORD64 qwCUISkillOSA = funcGetSkillOSA(qwCUISkillListPopup);
	if (!qwCUISkillOSA)
	{
		XMsg(L"[%s] Wait - 4", __FUNCTION__);
		return;
	}

	if (g_pSkillInfo[nIndex].nSubClass == ePlayerSubClass_PSC_NONE)
	{
		if (g_pSkillInfo[nIndex].nClassType == ePlayerClass_PC_COMMON)
		{
			if (!SelectToggle(*(DWORD64*)(qwCUISkillOSA + Offset_CUISkillOSA_TabToggle), 0))
			{
				XMsg(L"[%s] Select Weapon 1", __FUNCTION__);
				SetDelay(20);
				return;
			}
		}
		else if (g_pSkillInfo[nIndex].nClassType == ePlayerClass_PC_KNIGHT || g_pSkillInfo[nIndex].nClassType == ePlayerClass_PC_RANGER || g_pSkillInfo[nIndex].nClassType == ePlayerClass_PC_MAGICIAN)
		{
			if (!SelectToggle(*(DWORD64*)(qwCUISkillOSA + Offset_CUISkillOSA_TabToggle), 1))
			{
				XMsg(L"[%s] Select Weapon 2", __FUNCTION__);
				SetDelay(20);
				return;
			}
		}
	}
	else if (g_pSkillInfo[nIndex].nSubClass == ePlayerSubClass_PSC_DEFENDER || g_pSkillInfo[nIndex].nSubClass == ePlayerSubClass_PSC_HUNTER || g_pSkillInfo[nIndex].nSubClass == ePlayerSubClass_PSC_WIZARD)
	{
		if (!SelectToggle(*(DWORD64*)(qwCUISkillOSA + Offset_CUISkillOSA_TabToggle), 2))
		{
			XMsg(L"[%s] Select Weapon 3", __FUNCTION__);
			SetDelay(20);
			return;
		}
	}
	else if (g_pSkillInfo[nIndex].nSubClass == ePlayerSubClass_PSC_BERSERKER || g_pSkillInfo[nIndex].nSubClass == ePlayerSubClass_PSC_SCOUT || g_pSkillInfo[nIndex].nSubClass == ePlayerSubClass_PSC_PRIEST)
	{
		if (!SelectToggle(*(DWORD64*)(qwCUISkillOSA + Offset_CUISkillOSA_TabToggle), 3))
		{
			XMsg(L"[%s] Select Weapon 4", __FUNCTION__);
			SetDelay(20);
			return;
		}
	}

	_callFunc1 funcGetCount = (_callFunc1)GAMEADDR(Addr_GridView_GridAdapter_object__object___get_CellsCount);
	int nCellCount = (int)funcGetCount(qwCUISkillOSA);
	for (int i = 0; i < nCellCount; i++)
	{
		_callFunc2 funcGetItem = (_callFunc2)GAMEADDR(Addr_CUISkillOSA__GetCellViewsHolder);
		DWORD64 qwSkillViewsHolder = funcGetItem(qwCUISkillOSA, i);
		if (!qwSkillViewsHolder)
			continue;

		DWORD64 qwCUISkillSlot = *(DWORD64*)(qwSkillViewsHolder + Offset_SkillViewsHolder_CUISkillSlot);
		if (!qwCUISkillSlot)
			continue;
		{
			DWORD64 qwSPlayerSkillBase = *(DWORD64*)(qwCUISkillSlot + Offset_CUISkillSlot_SPlayerSkill);
			if (!qwSPlayerSkillBase)
				return;

			DWORD dwTemp = *(DWORD*)(qwSPlayerSkillBase + Offset_SkillInfo_Index);
			*(DWORD*)(qwSPlayerSkillBase + Offset_SkillInfo_Index) = g_pSkillInfo[nIndex].dwID;

			XMsg(L"[%s] Open Cycle Popup", __FUNCTION__);

			_callFunc1 funcClickSkillCycle = (_callFunc1)GAMEADDR(Addr_CUISkillSlot__OnClickSkillCycle);
			funcClickSkillCycle(qwCUISkillSlot);

			*(DWORD*)(qwSPlayerSkillBase + Offset_SkillInfo_Index) = dwTemp;

			SetDelay(20);
			return;
		}
	}
}

BOOL IsGameLoading()
{
	_callFunc0 funcIsLoading = (_callFunc0)GAMEADDR(Addr_CLoading__get_IsLoading);
	return (BOOL)funcIsLoading();
}




void OnGameDissolveItem()
{
	int nVisbleWindowUID = (int)GetVisibleWindowUID();

	if (g_nStepStatus == 100)
	{
		if (nVisbleWindowUID == UI_UID_Inventory)
		{
			XMsg(L"[%s] Close", __FUNCTION__);

			CloseAllActivePopup();

			SetDelay(20);
			return;
		}

		SetStatus(Status_InvenProc);
		return;
	}

	if (nVisbleWindowUID != UI_UID_Inventory)
	{
		XMsg(L"[%s] Open Inven", __FUNCTION__);

		MenuButtonClick(L"Btn_Inven");

		SetDelay(20);
		return;
	}

	DWORD64 qwCUIInventoryWindow = GetWindowByUI_UID((UI_UID)nVisbleWindowUID);
	if (!qwCUIInventoryWindow)
	{
		XMsg(L"[%s] Wait - 1", __FUNCTION__);
		return;
	}

	static int s_nOpenDissolveTry = 0;
	if (s_nOpenDissolveTry >= 3)
	{
		s_nOpenDissolveTry = 0;

		CloseAllActivePopup();
		SetDelay(20);
		return;
	}

	// 분해 창문이 안보이면
	_callFunc1 funcGetDissolve = (_callFunc1)GAMEADDR(Addr_CUIInventoryWindow__get_DissolveWindow);
	DWORD64 qwCUIInvenDissolve = funcGetDissolve(qwCUIInventoryWindow);
	if (!IsVisibleWindow(qwCUIInvenDissolve))
	{
		_callFunc1 funcGetMenuWindow = (_callFunc1)GAMEADDR(Addr_CUIInventoryWindow__get_MenuWindow);
		DWORD64 qwCUIInvenMenu = funcGetMenuWindow(qwCUIInventoryWindow);
		if (qwCUIInvenMenu)
		{
			_callFunc1 funcGetDissolveBtn = (_callFunc1)GAMEADDR(Addr_CUIInven_Menu1__get_GetButtomDissolve);
			DWORD64 qwDissolveBtn = funcGetDissolveBtn(qwCUIInvenMenu);
			if (qwDissolveBtn)
			{
				s_nOpenDissolveTry++;

				ClickButton(qwDissolveBtn);
				SetDelay(20);
			}
		}

		return;
	}

	s_nOpenDissolveTry = 0;

	_callFunc1 funcGetInvenWindow = (_callFunc1)GAMEADDR(Addr_CUIInventoryWindow__get_InvenWindow);
	DWORD64 qwInvenScroll = funcGetInvenWindow(qwCUIInventoryWindow);
	if (!qwInvenScroll)
	{
		XMsg(L"[%s] Wait - 1", __FUNCTION__);
		return;
	}

	// 분해할 아이템 선택하자
	_callFunc1 funcGetDissolveTotalCount = (_callFunc1)GAMEADDR(Addr_CUIInven_InvenScroll__GetDissolveTotalCount);
	int nTotalCount = (int)funcGetDissolveTotalCount(qwInvenScroll);
	if (nTotalCount < 20)
	{
		_callFunc1 funcGetUIInven = (_callFunc1)GAMEADDR(Addr_CUIInven_InvenScroll__get_Inven);
		DWORD64 qwCUIInven = funcGetUIInven(qwInvenScroll);
		if (!qwCUIInven)
		{
			XMsg(L"[%s] Wait - 2", __FUNCTION__);
			return;
		}

		for (int i = 0; i < g_nInvenCount; i++)
		{
			if (!IsNeedDissolveItem(i))
				continue;

			_callFunc2 funcGetItemSlot = (_callFunc2)GAMEADDR(Addr_CUIInven__GetSlotByOID);
			DWORD64 qwCUIItemSlot = funcGetItemSlot(qwCUIInven, g_pInvenInfo[i].qwItemUID);
			if (!qwCUIItemSlot || IsSelectedItemSlot(qwCUIItemSlot))
				continue;

			XMsg(L"아이템 \"%s\" 을(를) 분해합니다", g_pInvenInfo[i].szName);
			ShowStatus(1, 60202, g_pInvenInfo[i].szName);

			_callFunc2 funcSelect = (_callFunc2)GAMEADDR(Addr_CUIInven_InvenScroll__OnClickSlot);
			funcSelect(qwInvenScroll, qwCUIItemSlot);

			SetDelay(10);
			return;
		}
	}

	// 분해하자
	if (nTotalCount > 0)
	{
		XMsg(L"[%s] Dissolve", __FUNCTION__);

		_callFunc1 funcOnDissolve = (_callFunc1)GAMEADDR(Addr_CUIInven_Dissolve__OnClick_Dissolve);
		funcOnDissolve(qwCUIInvenDissolve);

		SetDelay(20);
		return;
	}

	g_nStepStatus = 100;
}


void OnGameExchangeItem()
{

}

int GetUnEquipItemIndex()
{	
	for (int i = 0; i < g_nInvenCount; i++)
	{
		if (!g_pInvenInfo[i].bIsEquip)
			continue;

		if (!g_pInvenInfo[i].bWarehouse)
			continue;

		for (int j = 0; j < g_nStoreListCount; j++)
		{
			if (g_qwStoreList[j] == g_pInvenInfo[i].qwItemUID)
				return i;
		}
	}
	
	return NOINDEX;
}


void UnEquipItem(int nIndex)
{
	if (nIndex < 0 || nIndex >= g_nInvenCount)
		return;

	InitGlobal(Addr_CNetHandler);

	_callFunc1 funcGetInst = (_callFunc1)GAMEADDR(Addr_MonoSingleton_object___get_s_Instance);
	DWORD64 qwCNetHandler = funcGetInst(*(DWORD64*)(GAMEADDR(Addr_CNetHandler)));
	if (!qwCNetHandler)
		return;

	_callFunc3 funcUnEquipItem = (_callFunc3)GAMEADDR(Addr_CNetHandler__OnC2S_UnequipItem);
	funcUnEquipItem(qwCNetHandler, g_pInvenInfo[nIndex].qwItemUID, g_pInvenInfo[nIndex].nEquipSlot);
}


BOOL IsStorableItemUID(DWORD64 qwItemUID)
{	
	for (int i = 0; i < g_nStoreListCount; i++)
	{
		if (g_qwStoreList[i] == qwItemUID)
			return TRUE;
	}
	
	return FALSE;
}


void OnGameStoreEquips()
{
	if (ReturnVillage())
		return;

	int nVisbleWindowUID = (int)GetVisibleWindowUID();

	if (g_nStepStatus == 100)
	{
		if (nVisbleWindowUID == UI_UID_StorageWindow)
		{
			XMsg(L"[%s] Close", __FUNCTION__);

			CloseAllActivePopup();

			SetDelay(20);
			return;
		}

		SetStatus(Status_DoAuto);
		return;
	}

	// 장착 해제
	int nIndex = GetUnEquipItemIndex();
	if (nIndex != NOINDEX)
	{
		XMsg(L"장비 [%s] 을(를) 해제합니다", g_pInvenInfo[nIndex].szName);
		ShowStatus(1, 60213, g_pInvenInfo[nIndex].szName);

		UnEquipItem(nIndex);
		SetDelay(10);
		return;
	}

	if (nVisbleWindowUID != UI_UID_StorageWindow)
	{
		if (!g_pCharInfo.bIsMoving)
		{
			XMsg(L"창고로 이동합니다");
			ShowStatus(0, 60214);

			GoToNpc(eNpcBtnType_Btn_Storage);
		}

		SetDelay(20);
		return;
	}

	// 창고가 켜진 상태면
	DWORD64 qwCUIStorageWindow = GetWindowByUI_UID((UI_UID)nVisbleWindowUID);
	if (!qwCUIStorageWindow)
	{
		XMsg(L"[%s] Wait - 1", __FUNCTION__);
		return;
	}

	// 창고 보관
	DWORD64 qwRightInvenScroll = *(DWORD64*)(qwCUIStorageWindow + Offset_CUIStorageWindow_RightInven);
	if (!qwRightInvenScroll)
	{
		XMsg(L"[%s] Wait - 2", __FUNCTION__);
		return;
	}

	// 다중 선택
	_callFunc1 funcIsMulti = (_callFunc1)GAMEADDR(Addr_CUIStorageWindow__IsMultiSelectOption);
	if (!funcIsMulti(qwCUIStorageWindow))
	{
		XMsg(L"[%s] Click Check All", __FUNCTION__);

		_callFunc1 funcCheck = (_callFunc1)GAMEADDR(Addr_CUIStorageWindow__OnClick_CheckAllBox);
		funcCheck(qwCUIStorageWindow);

		SetDelay(20);
		return;
	}

	int nSelectInvenCount = 0;

	// 선택된 아이템 개수를 구하자
	_callFunc1 funcGetSelectList = (_callFunc1)GAMEADDR(Addr_CUIInven_InvenScroll__get_SelectItemDataList);
	DWORD64 qwSelectList = funcGetSelectList(qwRightInvenScroll);
	if (qwSelectList)
		nSelectInvenCount = *(int*)(qwSelectList + Offset_System_Collections_Generic_List_Count);

	if (nSelectInvenCount < 20)
	{
		_callFunc1 funcGetUIInven = (_callFunc1)GAMEADDR(Addr_CUIInven_InvenScroll__get_Inven);
		DWORD64 qwCUIInven = funcGetUIInven(qwRightInvenScroll);
		if (!qwCUIInven)
		{
			XMsg(L"[%s] Wait - 3", __FUNCTION__);
			return;
		}

		for (int i = 0; i < g_nInvenCount; i++)
		{
			if (!IsStorableItemUID(g_pInvenInfo[i].qwItemUID))
				continue;
			if (IsSelectedItemSlot(qwRightInvenScroll, g_pInvenInfo[i].qwItemUID))
				continue;

			_callFunc2 funcGetItemSlot = (_callFunc2)GAMEADDR(Addr_CUIInven__GetSlotByOID);
			DWORD64 qwCUIItemSlot = funcGetItemSlot(qwCUIInven, g_pInvenInfo[i].qwItemUID);
			if (!qwCUIItemSlot)
			{
				CUIInvenScroll(qwRightInvenScroll, i);
				SetDelay(20);
				return;
			}

			XMsg(L"아이템 \"%s\" 을(를) 선택합니다", g_pInvenInfo[i].szName);
			ShowStatus(1, 60196, g_pInvenInfo[i].szName);

			_callFunc2 funcSelect = (_callFunc2)GAMEADDR(Addr_CUIInven_InvenScroll__OnClickSlot);
			funcSelect(qwRightInvenScroll, qwCUIItemSlot);

			SetDelay(10);
			return;
		}
	}

	// 보관하자
	if (nSelectInvenCount > 0)
	{
		XMsg(L"선택된 아이템들을 창고에 보관합니다");
		ShowStatus(0, 60215);

		_callFunc1 funcKeep = (_callFunc1)GAMEADDR(Addr_CUIStorageWindow__OnClick_Keep);
		funcKeep(qwCUIStorageWindow);

		SetDelay(20);
		return;
	}

	SetEquipsChar(g_nGameServer, 0);
	g_nStepStatus = 100;
}


void OnGameGetEquips()
{
	if (ReturnVillage())
		return;

	int nVisbleWindowUID = (int)GetVisibleWindowUID();

	if (g_nStepStatus == 100)
	{
		if (nVisbleWindowUID == UI_UID_StorageWindow)
		{
			XMsg(L"[%s] Close", __FUNCTION__);

			CloseAllActivePopup();

			SetDelay(20);
			return;
		}

		if (OnAutoEquipProc(TRUE))
		{
			SetDelay(10);
			return;
		}

		SetStatus(Status_DoAuto);
		return;
	}

	if (nVisbleWindowUID != UI_UID_StorageWindow)
	{
		if (!g_pCharInfo.bIsMoving)
		{
			XMsg(L"창고로 이동합니다");
			ShowStatus(0, 60214);

			GoToNpc(eNpcBtnType_Btn_Storage);
		}

		SetDelay(20);
		return;
	}

	// 창고가 켜진 상태면
	DWORD64 qwCUIStorageWindow = GetWindowByUI_UID((UI_UID)nVisbleWindowUID);
	if (!qwCUIStorageWindow)
	{
		XMsg(L"[%s] Wait - 1", __FUNCTION__);
		return;
	}

	// 창고 찾기
	DWORD64 qwLeftInvenScroll = *(DWORD64*)(qwCUIStorageWindow + Offset_CUIStorageWindow_LeftInven);
	if (!qwLeftInvenScroll)
	{
		XMsg(L"[%s] Wait - 2", __FUNCTION__);
		return;
	}

	// 다중 선택
	_callFunc1 funcIsMulti = (_callFunc1)GAMEADDR(Addr_CUIStorageWindow__IsMultiSelectOption);
	if (!funcIsMulti(qwCUIStorageWindow))
	{
		XMsg(L"[%s] Click Check All", __FUNCTION__);

		_callFunc1 funcCheck = (_callFunc1)GAMEADDR(Addr_CUIStorageWindow__OnClick_CheckAllBox);
		funcCheck(qwCUIStorageWindow);

		SetDelay(20);
		return;
	}

	int nSelectInvenCount = 0;

	// 선택된 아이템 개수를 구하자
	_callFunc1 funcGetSelectList = (_callFunc1)GAMEADDR(Addr_CUIInven_InvenScroll__get_SelectItemDataList);
	DWORD64 qwSelectList = funcGetSelectList(qwLeftInvenScroll);
	if (qwSelectList)
		nSelectInvenCount = *(int*)(qwSelectList + Offset_System_Collections_Generic_List_Count);
		if (nSelectInvenCount < 20)
	{
		_callFunc1 funcGetUIInven = (_callFunc1)GAMEADDR(Addr_CUIInven_InvenScroll__get_Inven);
		DWORD64 qwCUIInven = funcGetUIInven(qwLeftInvenScroll);
		if (!qwCUIInven)
		{
			XMsg(L"[%s] Wait - 3", __FUNCTION__);
			return;
		}

		for (int i = 0; i < g_nWarehouseCount; i++)
		{
			BOOL bNeedGet = FALSE;

			if (g_pWarehouseInfo[i].nItemType == ItemType_Weapon || g_pWarehouseInfo[i].nItemType == ItemType_Armor || g_pWarehouseInfo[i].nItemType == ItemType_Accessory)
			{
				if (g_pWarehouseInfo[i].nEquipClass == ePlayerClass_PC_COMMON || g_pWarehouseInfo[i].nEquipClass == g_pCharInfo.nClassType)
				{
					if (g_OtherSetting.bGetEquip)
						bNeedGet = TRUE;
				}
			}

			if (IsNeedStoreGetItem(i))
			{
				bNeedGet = TRUE;
			}

			if (!bNeedGet)
				continue;

			if (IsSelectedItemSlot(qwLeftInvenScroll, g_pWarehouseInfo[i].qwItemUID))
				continue;

			_callFunc2 funcGetItemSlot = (_callFunc2)GAMEADDR(Addr_CUIInven__GetSlotByOID);
			DWORD64 qwCUIItemSlot = funcGetItemSlot(qwCUIInven, g_pWarehouseInfo[i].qwItemUID);
			if (!qwCUIItemSlot)
			{
				CUIInvenScroll(qwLeftInvenScroll, i);
				SetDelay(10);
				return;
			}

// 			if (IsSelectedItemSlot(qwCUIItemSlot))
// 				continue;

			XMsg(L"아이템 \"%s\" 을(를) 선택합니다", g_pWarehouseInfo[i].szName);
			ShowStatus(1, 60196, g_pWarehouseInfo[i].szName);

			_callFunc2 funcSelect = (_callFunc2)GAMEADDR(Addr_CUIInven_InvenScroll__OnClickSlot);
			funcSelect(qwLeftInvenScroll, qwCUIItemSlot);

			SetDelay(10);
			return;
		}
	}

	// 창고에서 꺼내자
	if (nSelectInvenCount > 0)
	{
		XMsg(L"선택된 아이템들을 창고에서 가져옵니다");
		ShowStatus(0, 60216);

		_callFunc1 funcRetrive = (_callFunc1)GAMEADDR(Addr_CUIStorageWindow__OnClick_Retrieve);
		funcRetrive(qwCUIStorageWindow);

		SetDelay(20);
		return;
	}

	SetEquipsChar(g_nGameServer, g_nGameChar + 1);
	g_nStepStatus = 100;
}


void OnGameAchieve()
{
	int nVisbleWindowUID = (int)GetVisibleWindowUID();

	if (g_nStepStatus == 100)
	{
		if (nVisbleWindowUID == UI_UID_QuestWindow)
		{
			XMsg(L"[%s] Close", __FUNCTION__);

			CloseAllActivePopup();

			SetDelay(20);
			return;
		}

		XMsg(L"업적 보상 을(를) 확인하였습니다");
		ShowStatus(0, 60245);

		SetStatus(Status_DoAuto);
		return;
	}

	if (nVisbleWindowUID != UI_UID_QuestWindow)
	{
		XMsg(L"[%s] Open", __FUNCTION__);

		MenuButtonClick(L"Btn_Quest");

		SetDelay(20);
		return;
	}

	DWORD64 qwCUIQuestWindow = GetWindowByUI_UID((UI_UID)nVisbleWindowUID);
	if (!qwCUIQuestWindow)
	{
		XMsg(L"[%s] Wait - 1", __FUNCTION__);
		return;
	}

	if (!SelectToggle(*(DWORD64*)(qwCUIQuestWindow + Offset_CUIGroupWindow_ToggleArray), 5))
	{
		XMsg(L"[%s] Select Achieve Tab", __FUNCTION__);
		SetDelay(20);
		return;
	}

	InitGlobal(Addr_Method$CUIGroupWindow_GetView_CUIQuestViewAchieve___);

	_callFunc3 funcGetWindow = (_callFunc3)GAMEADDR(Addr_CUIGroupWindow__GetView_object_);
	_callFunc1 funcGetSelectIndex = (_callFunc1)GAMEADDR(Addr_CUIGroupWindow__get_SelectViewID);
	DWORD64 qwCUIQuestViewAchieve = funcGetWindow(qwCUIQuestWindow, funcGetSelectIndex(qwCUIQuestWindow),
		*(DWORD64*)(GAMEADDR(Addr_Method$CUIGroupWindow_GetView_CUIQuestViewAchieve___)));
	if (qwCUIQuestViewAchieve)
	{
		DWORD64 qwCUIQuestAchieveScrollList = *(DWORD64*)(qwCUIQuestViewAchieve + Offset_CUIQuestViewAchieve_ScrollList);
		if (qwCUIQuestAchieveScrollList)
		{
			_callFunc1 funcGetCount = (_callFunc1)GAMEADDR(Addr_GridView_GridAdapter_object__object___get_CellsCount);
			int nCount = (int)funcGetCount(qwCUIQuestAchieveScrollList);
			for (int i = 0; i < nCount; i++)
			{
				_callFunc2 funcGetCell = (_callFunc2)GAMEADDR(Addr_CUIQuestAchieveScrollList__GetCellViewsHolder);
				DWORD64 qwAchieveViewHolder = funcGetCell(qwCUIQuestAchieveScrollList, i);
				if (!qwAchieveViewHolder)
					continue;

				DWORD64 qwCUIQuestAchieveSlot = *(DWORD64*)(qwAchieveViewHolder + Offset_AchieveViewHolder_CUIQuestAchieveSlot);
				if (!qwCUIQuestAchieveSlot)
					continue;

				_callFunc1 funcIsDiable = (_callFunc1)GAMEADDR(Addr_UIButton__get_Disabled);
				DWORD64 qwbtnReward = *(DWORD64*)(qwCUIQuestAchieveSlot + Offset_CUIQuestAchieveSlot_btnReward);
				if (qwbtnReward && IsActiveWidget(qwbtnReward) && !funcIsDiable(qwbtnReward))
				{
					XMsg(L"[%s] Reward", __FUNCTION__);

					ClickButton(qwbtnReward);

					SetDelay(20);
					return;
				}
			}
		}

		// 빨간 점 선택하자
		DWORD64 qwCUIQuestAchieveMenu = *(DWORD64*)(qwCUIQuestViewAchieve + Offset_CUIQuestViewAchieve_Menu);
		if (qwCUIQuestAchieveMenu)
		{
			int nSelectCategory = *(int*)(qwCUIQuestAchieveMenu + Offset_CUIQuestAchieveMenu_SelectCategory);

			DWORD64 qwMenuButtonDictionary = *(DWORD64*)(qwCUIQuestAchieveMenu + Offset_CUIQuestAchieveMenu_dicMenuButton);
			if (qwMenuButtonDictionary)
			{
				_callFunc1 funcGetCount = (_callFunc1)GAMEADDR(Addr_System__Dictionary_int__object___get_Count);
				int nCount = (int)funcGetCount(qwMenuButtonDictionary);
				for (int i = 0; i < nCount; i++)
				{
					_callFunc2 funcIsRedDot = (_callFunc2)GAMEADDR(Addr_CUIQuestAchieveMenu__IsRedDot);
					BOOL bIsRedDot = (BOOL)funcIsRedDot(qwCUIQuestAchieveMenu, i + 1);
					if (!bIsRedDot)
						continue;

					if (i + 1 != nSelectCategory)
					{
						XMsg(L"[%s] Select Tab %d", __FUNCTION__, i + 1);

						_callFunc2 funcOpenTab = (_callFunc2)GAMEADDR(Addr_CUIQuestAchieveMenu__SetOpenTab);
						funcOpenTab(qwCUIQuestAchieveMenu, i + 1);

						SetDelay(20);
						return;
					}
				}
			}
		}
	}

	g_nStepStatus = 100;
}


void OnGameGuildAttendance()
{
	int nVisbleWindowUID = (int)GetVisibleWindowUID();

	if (g_nStepStatus == 100)
	{
		if (nVisbleWindowUID == UI_UID_GuildWindow)
		{
			XMsg(L"[%s] Close", __FUNCTION__);

			CloseAllActivePopup();

			SetDelay(20);
			return;
		}

		SetStatus(Status_DoAuto);
		return;
	}

	if (nVisbleWindowUID != UI_UID_GuildWindow)
	{
		XMsg(L"[%s] Open", __FUNCTION__);

		MenuButtonClick(L"Btn_Guild");

		SetDelay(20);
		return;
	}

	DWORD64 qwCUIGuildWindow = GetWindowByUI_UID((UI_UID)nVisbleWindowUID);
	if (!qwCUIGuildWindow)
	{
		XMsg(L"[%s] Wait - 1", __FUNCTION__);
		return;
	}

	// 출석 보상
	DWORD64 qwCUIGuildPopupAttendance = *(DWORD64*)(qwCUIGuildWindow + Offset_CUIGuildWindow_CUIGuildPopupAttendance);
	if (IsVisibleWindow(qwCUIGuildPopupAttendance))
	{
		if (IsRedDot(eRedDotType_Btn_Guild_Attendance))
		{
			InitGlobal(Addr_CNetHandler);

			_callFunc1 funcGetInst = (_callFunc1)GAMEADDR(Addr_MonoSingleton_object___get_s_Instance);
			DWORD64 qwCNetHandler = funcGetInst(*(DWORD64*)(GAMEADDR(Addr_CNetHandler)));
			if (qwCNetHandler)
			{
				XMsg(L"[%s] Attendance Reward", __FUNCTION__);

				_callFunc1 funcGuildAttendance = (_callFunc1)GAMEADDR(Addr_CNetHandler__OnC2S_GuildTakeAttendanceReward);
				funcGuildAttendance(qwCNetHandler);

				SetDelay(20);
				return;
			}
		}

		XMsg(L"[%s] Attendance Close", __FUNCTION__);

		_callFunc1 funcClose = (_callFunc1)GAMEADDR(Addr_CUIGuildPopupAttendance__Close);
		funcClose(qwCUIGuildPopupAttendance);

		SetDelay(20);
		return;
	}

	// 길드 기부
	DWORD64 qwCUIGuildPopupGift = *(DWORD64*)(qwCUIGuildWindow + Offset_CUIGuildWindow_CUIGuildPopupGift);
	if (IsVisibleWindow(qwCUIGuildPopupGift))
	{
		DWORD64 qwSlotArray = *(DWORD64*)(qwCUIGuildPopupGift + Offset_CUIGuildPopupGift_SlotArray);
		if (qwSlotArray)
		{
			int nCount = *(int*)(qwSlotArray + Offset_Array_Count);
			for (int i = 0; i < nCount; i++)
			{
				DWORD64 qwCUIGuildPopupGiftSlot = *(DWORD64*)(qwSlotArray + 8 * i + 0x20);
				if (!qwCUIGuildPopupGiftSlot)
					continue;

				// 골드가 아니면 무시
				int nCashType = *(int*)(qwCUIGuildPopupGiftSlot + Offset_CUIGuildPopupGiftSlot_GiftType);
				if (nCashType != eCashType_GUILD_GOLD)
					continue;

				_callFunc1 funcIsDiable = (_callFunc1)GAMEADDR(Addr_UIButton__get_Disabled);
				DWORD64 qwBtnDonate = *(DWORD64*)(qwCUIGuildPopupGiftSlot + Offset_CUIGuildPopupGiftSlot_btnDonate);
				if (qwBtnDonate && !funcIsDiable(qwBtnDonate))
				{
					XMsg(L"[%s] Donate Click", __FUNCTION__);

					ClickButton(qwBtnDonate);

					SetDelay(20);
					return;
				}
			}
		}

		XMsg(L"[%s] Donate Close", __FUNCTION__);

		_callFunc1 funcClose = (_callFunc1)GAMEADDR(Addr_CUIWindow__Close);
		funcClose(qwCUIGuildPopupGift);

		g_bCanGuildDonate = FALSE;
		SetDelay(20);
		return;
	}

	if (!SelectToggle(*(DWORD64*)(qwCUIGuildWindow + Offset_CUIGroupWindow_ToggleArray), 1))
	{
		XMsg(L"[%s] Select Attendance Tab", __FUNCTION__);
		SetDelay(20);
		return;
	}

	InitGlobal(Addr_Method$CUIGroupWindow_GetView_CUIGuildViewInfo___);

	_callFunc3 funcGetWindow = (_callFunc3)GAMEADDR(Addr_CUIGroupWindow__GetView_object_);
	_callFunc1 funcGetSelectIndex = (_callFunc1)GAMEADDR(Addr_CUIGroupWindow__get_SelectViewID);
	DWORD64 qwCUIGuildViewInfo = funcGetWindow(qwCUIGuildWindow, funcGetSelectIndex(qwCUIGuildWindow),
		*(DWORD64*)(GAMEADDR(Addr_Method$CUIGroupWindow_GetView_CUIGuildViewInfo___)));
	if (qwCUIGuildViewInfo)
	{
		// 출석 보상
		if (IsRedDot(eRedDotType_Btn_Guild_Attendance))
		{
			XMsg(L"[%s] Attendance Open", __FUNCTION__);

			_callFunc1 funcOpenAttendance = (_callFunc1)GAMEADDR(Addr_CUIGuildViewInfo_OpenAttendancePopup);
			funcOpenAttendance(qwCUIGuildViewInfo);

			SetDelay(20);
			return;
		}

		// 길드 기부
		if (g_OtherSetting.bGuildDonate && g_pCharInfo.nGold >= g_OtherSetting.nGuildDonateGold && g_bCanGuildDonate)
		{
			XMsg(L"길드 골드 기부를 진행합니다");
			ShowStatus(0, 60274);

			_callFunc1 funcOpenDonate = (_callFunc1)GAMEADDR(Addr_CUIGuildViewInfo_OpenGuildDonatePopup);
			funcOpenDonate(qwCUIGuildViewInfo);

			SetDelay(20);
			return;
		}
	}

	g_nStepStatus = 100;
}


void ClickAttack()
{
	DWORD64 qwCUIManager = GetUIManager();
	if (!qwCUIManager)
		return;

	_CallFunc1 funcGetMainHUD = (_CallFunc1)GAMEADDR(Addr_CUIManager__get_MainHUD);
	DWORD64 qwCUIMainHUD = funcGetMainHUD(qwCUIManager);
	if (!qwCUIMainHUD)
		return;

	_CallFunc1 funcGetUIBattleControl = (_CallFunc1)GAMEADDR(Addr_CUIMainHUD__get_UIBattleControl);
	DWORD64 qwCUIBattleControl = funcGetUIBattleControl(qwCUIMainHUD);
	if (!qwCUIBattleControl)
		return;

	_CallFunc1 funcClickAttack = (_CallFunc1)GAMEADDR(Addr_CUIBattleControl__OnClickAttackButton);
	funcClickAttack(qwCUIBattleControl);
}


BOOL ManualAttack(DWORD64 qwAddr)
{
	if (g_pCharInfo.qwAttackTarget != qwAddr)
	{
		if (g_pCharInfo.qwSelectTarget != qwAddr)
		{
			XMsg("[%s] Select Target %p", __FUNCTION__, qwAddr);

			_CallFunc2 funcSetSelectTarget = (_CallFunc2)GAMEADDR(Addr_CActorMyPlayer__SelectTarget);
			funcSetSelectTarget(g_pCharInfo.qwAddr, qwAddr);
			return TRUE;
		}

		XMsg("[%s] Click Attack", __FUNCTION__);

		ClickAttack();
		return TRUE;
	}

	return FALSE;
}



void OnGameWorldBoss()
{
	int nWorldBossIdx = GetEnableWorldBossIdx();
	if (nWorldBossIdx == NOINDEX)
	{
		SetStatus(Status_DoAuto);
		return;
	}

	if (IsInDungeon(nWorldBossIdx) != nWorldBossIdx)
	{
		g_nEnterDungeonIdx = nWorldBossIdx;
		SetStatus(Status_EnterDungeon);
		return;
	}

	g_qwGoldChangeTick = g_qwTickCount;

	int nBossObjIdx = NOINDEX;
	for (int i = 0; i < g_nObjectCount; i++)
	{
		if (g_pObjectInfo[i].nKind != ObjectKind_Monster)
			continue;

		if (g_pObjectInfo[i].nGrade > eMonsterType_MT_NONE)
		{
			nBossObjIdx = i;
			break;
		}
	}

	XMsg("BossIdx = %d", nBossObjIdx);
	if (nBossObjIdx != NOINDEX)
	{
		if (ManualAttack(g_pObjectInfo[nBossObjIdx].qwAddr))
		{
			SetDelay(10);
			return;
		}
	}
}