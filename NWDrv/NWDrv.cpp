#include <ntifs.h>
#include <ntdef.h>
#include <windef.h>
#include <ntimage.h>

#include "NWDrv.h"

// =============================================================================
namespace crypt {
	// =============================================================================

	// convert __TIME__ == "hh:mm:ss" to a sum of seconds this gives us a compile-time seed
	// Note: in some weird cases I've seen the seed being different from encryption
	// to decryption so it's safer to not use time and set the seed manually
#if 0
#define TBX_XSTR_SEED ((__TIME__[7] - '0') * 1ull    + (__TIME__[6] - '0') * 10ull  + \
                       (__TIME__[4] - '0') * 60ull   + (__TIME__[3] - '0') * 600ull + \
                       (__TIME__[1] - '0') * 3600ull + (__TIME__[0] - '0') * 36000ull)
#else
#define TBX_XSTR_SEED (3600ull)
#endif

// -----------------------------------------------------------------------------

// @return a pseudo random number clamped at 0xFFFFFFFF
	constexpr unsigned long long linear_congruent_generator(unsigned rounds) {
		return 1013904223ull + (1664525ull * ((rounds > 0) ? linear_congruent_generator(rounds - 1) : (TBX_XSTR_SEED))) % 0xFFFFFFFF;
	}

	// -----------------------------------------------------------------------------

#define Random() linear_congruent_generator(10)
#define XSTR_RANDOM_NUMBER(Min, Max) (Min + (Random() % (Max - Min + 1)))

// -----------------------------------------------------------------------------

	constexpr const unsigned long long XORKEY = XSTR_RANDOM_NUMBER(0, 0xFF);

	// -----------------------------------------------------------------------------

	template<typename Char >
	constexpr Char encrypt_character(const Char character, int index) {
		return character ^ (static_cast<Char>(XORKEY) + index);
	}

	// -----------------------------------------------------------------------------

	template <unsigned size, typename Char>
	class Xor_string {
	public:
		const unsigned _nb_chars = (size - 1);
		Char _string[size];

		// if every goes alright this constructor should be executed at compile time
		inline constexpr Xor_string(const Char * string)
			: _string{}
		{
			for (unsigned i = 0u; i < size; ++i)
				_string[i] = encrypt_character<Char>(string[i], i);
		}

		// This is executed at runtime.
		// HACK: although decrypt() is const we modify '_string' in place
		const Char* decrypt() const
		{
			Char* string = const_cast<Char*>(_string);
			for (unsigned t = 0; t < _nb_chars; t++) {
				string[t] = string[t] ^ (static_cast<Char>(XORKEY) + t);
			}
			string[_nb_chars] = '\0';
			return string;
		}

	};

}// END crypt NAMESPACE ========================================================

#define XorS(name, my_string)    constexpr crypt::Xor_string<(sizeof(my_string)/sizeof(char)), char> name(my_string)
// Because of a limitation/bug in msvc 2017 we need to declare crypt::Xor_string() as a constexpr 
// otherwise the constructor is not evaluated at compile time. The lambda function is here to allow this declaration inside the macro
// because there is no such thing as casting to 'constexpr' (and casting to const does not solve this bug).
#define XorString(my_string) []{ constexpr crypt::Xor_string<(sizeof(my_string)/sizeof(char)), char> expr(my_string); return expr; }().decrypt()

// Crypt normal string char*
#define _c( string ) XorString( string )

#define XorWS(name, my_string)       constexpr crypt::Xor_string<(sizeof(my_string)/sizeof(wchar_t)), wchar_t> name(my_string)
#define XorWideString(my_string) []{ constexpr crypt::Xor_string<(sizeof(my_string)/sizeof(wchar_t)), wchar_t> expr(my_string); return expr; }().decrypt()

// crypt  wide characters
#define _cw( string ) XorWideString( string )





HANDLE		g_hPrvPID[32];
int			g_nPrvCnt;
HANDLE		g_hCurPID[32];
int			g_nCurCnt;

HANDLE		g_hGamePid;
PEPROCESS	g_pGamePE;
DWORD64		g_dwGameBase;

DWORD64		g_dwKernel32;
DWORD64		g_dwKernelBase;

BOOL		g_bEnd;

typedef PVOID(*PsGetProcessDebugPort_t)(
	IN	PEPROCESS Process
	);
PsGetProcessDebugPort_t PsGetProcessDebugPort;


DWORD Rva2Offset(DWORD dwRva, UINT_PTR uiBaseAddress)
{
	WORD wIndex = 0;
	PIMAGE_SECTION_HEADER pSectionHeader = NULL;
	PIMAGE_NT_HEADERS pNtHeaders = NULL;

	pNtHeaders = (PIMAGE_NT_HEADERS)(uiBaseAddress + ((PIMAGE_DOS_HEADER)uiBaseAddress)->e_lfanew);

	pSectionHeader = (PIMAGE_SECTION_HEADER)((UINT_PTR)(&pNtHeaders->OptionalHeader) + pNtHeaders->FileHeader.SizeOfOptionalHeader);

	if (dwRva < pSectionHeader[0].PointerToRawData)
		return dwRva;

	for (wIndex = 0; wIndex < pNtHeaders->FileHeader.NumberOfSections; wIndex++)
	{
		if (dwRva >= pSectionHeader[wIndex].VirtualAddress && dwRva < (pSectionHeader[wIndex].VirtualAddress + pSectionHeader[wIndex].SizeOfRawData))
			return (dwRva - pSectionHeader[wIndex].VirtualAddress + pSectionHeader[wIndex].PointerToRawData);
	}

	return 0;
}


DWORD GetReflectiveLoaderOffset(VOID * lpReflectiveDllBuffer)
{
	UINT_PTR uiBaseAddress = 0;
	UINT_PTR uiExportDir = 0;
	UINT_PTR uiNameArray = 0;
	UINT_PTR uiAddressArray = 0;
	UINT_PTR uiNameOrdinals = 0;
	DWORD dwCounter = 0;

	uiBaseAddress = (UINT_PTR)lpReflectiveDllBuffer;

	// get the File Offset of the modules NT Header
	uiExportDir = uiBaseAddress + ((PIMAGE_DOS_HEADER)uiBaseAddress)->e_lfanew;

	// uiNameArray = the address of the modules export directory entry
	uiNameArray = (UINT_PTR) & ((PIMAGE_NT_HEADERS)uiExportDir)->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_EXPORT];

	// get the File Offset of the export directory
	uiExportDir = uiBaseAddress + Rva2Offset(((PIMAGE_DATA_DIRECTORY)uiNameArray)->VirtualAddress, uiBaseAddress);

	// get the File Offset for the array of name pointers
	uiNameArray = uiBaseAddress + Rva2Offset(((PIMAGE_EXPORT_DIRECTORY)uiExportDir)->AddressOfNames, uiBaseAddress);

	// get the File Offset for the array of addresses
	uiAddressArray = uiBaseAddress + Rva2Offset(((PIMAGE_EXPORT_DIRECTORY)uiExportDir)->AddressOfFunctions, uiBaseAddress);

	// get the File Offset for the array of name ordinals
	uiNameOrdinals = uiBaseAddress + Rva2Offset(((PIMAGE_EXPORT_DIRECTORY)uiExportDir)->AddressOfNameOrdinals, uiBaseAddress);

	// get a counter for the number of exported functions...
	dwCounter = ((PIMAGE_EXPORT_DIRECTORY)uiExportDir)->NumberOfNames;

	// loop through all the exported functions to find the ReflectiveLoader
	while (dwCounter--)
	{
		char* cpExportedFunctionName = (char*)(uiBaseAddress + Rva2Offset(DEREF_32(uiNameArray), uiBaseAddress));

		if (strstr(cpExportedFunctionName, "oof") != NULL)
		{
			// get the File Offset for the array of addresses
			uiAddressArray = uiBaseAddress + Rva2Offset(((PIMAGE_EXPORT_DIRECTORY)uiExportDir)->AddressOfFunctions, uiBaseAddress);

			// use the functions name ordinal as an index into the array of name pointers
			uiAddressArray += (DEREF_16(uiNameOrdinals) * sizeof(DWORD));

			// return the File Offset to the ReflectiveLoader() functions code...
			return Rva2Offset(DEREF_32(uiAddressArray), uiBaseAddress);
		}
		// get the next exported function name
		uiNameArray += sizeof(DWORD);

		// get the next exported function name ordinal
		uiNameOrdinals += sizeof(WORD);
	}

	return 0;
}


PVOID GetProcessModule(PEPROCESS pProcess, WCHAR* pszModule, BOOL isWow64)
{
	UNICODE_STRING				usTemp;
	UNICODE_STRING				usModule;
	RtlInitUnicodeString(&usModule, pszModule);

	if (isWow64)
	{
		PPEB32					pPeb32;
		PLIST_ENTRY32			pListEntry32;
		PLDR_DATA_TABLE_ENTRY32	pEntry32;

		pPeb32 = (PPEB32)PsGetProcessWow64Process(pProcess);
		if (!pPeb32 || !pPeb32->Ldr)
		{
			//DPRINT("[NW] %s: PsGetProcessWow64Process failed\n", __FUNCTION__);
			return NULL;
		}

		for (pListEntry32 = (PLIST_ENTRY32)((PPEB_LDR_DATA32)pPeb32->Ldr)->InLoadOrderModuleList.Flink;
			pListEntry32 != &((PPEB_LDR_DATA32)pPeb32->Ldr)->InLoadOrderModuleList;
			pListEntry32 = (PLIST_ENTRY32)pListEntry32->Flink)
		{
			pEntry32 = CONTAINING_RECORD(pListEntry32, LDR_DATA_TABLE_ENTRY32, InLoadOrderLinks);

			RtlInitUnicodeString(&usTemp, (PWCH)pEntry32->BaseDllName.Buffer);
			if (RtlCompareUnicodeString(&usTemp, &usModule, TRUE) == 0)
				return (PVOID)pEntry32->DllBase;
		}
	}
	else
	{
		PPEB					pPeb;
		PLIST_ENTRY				pListEntry;
		PLDR_DATA_TABLE_ENTRY	pEntry;

		pPeb = PsGetProcessPeb(pProcess);
		if (!pPeb || !pPeb->Ldr)
		{
			//DPRINT("[NW] %s: get PsGetProcessPeb failed\n", __FUNCTION__);
			return NULL;
		}

		for (pListEntry = pPeb->Ldr->InLoadOrderModuleList.Flink;
			pListEntry != &pPeb->Ldr->InLoadOrderModuleList;
			pListEntry = pListEntry->Flink)
		{
			pEntry = CONTAINING_RECORD(pListEntry, LDR_DATA_TABLE_ENTRY, InLoadOrderLinks);
			if (RtlCompareUnicodeString(&pEntry->BaseDllName, &usModule, TRUE) == 0)
				return pEntry->DllBase;
		}
	}

	return NULL;
}


PVOID AllocateProcessMemory(HANDLE hProcessId, int nSize)
{
	NTSTATUS					ntStatus;
	HANDLE						hProcess = NULL;
	CLIENT_ID					cid;
	OBJECT_ATTRIBUTES			obAttr;
	PVOID						pAlloc = NULL;
	SIZE_T						ulAllocSize = nSize;

	cid.UniqueProcess = hProcessId;
	cid.UniqueThread = NULL;
	InitializeObjectAttributes(&obAttr, NULL, OBJ_KERNEL_HANDLE, NULL, NULL);

	ntStatus = ZwOpenProcess(&hProcess, PROCESS_ALL_ACCESS, &obAttr, &cid);
	if (!NT_SUCCESS(ntStatus) || !hProcess)
	{
		//DPRINT("[NW] %s: ZwOpenProcess failed with code %p\n", __FUNCTION__, ntStatus);
		return NULL;
	}

	ntStatus = ZwAllocateVirtualMemory(hProcess, &pAlloc, 0, &ulAllocSize, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);
	ZwClose(hProcess);
	if (!NT_SUCCESS(ntStatus) || !pAlloc)
	{
		//DPRINT("[NW] %s: ZwAllocateVirtualMemory failed with code %p\n", __FUNCTION__, ntStatus);
		return NULL;
	}

	//DPRINT("[NW] %s: Success %p\n", __FUNCTION__, pAlloc);
	return pAlloc;
}

BOOL FindGame()
{
	NTSTATUS					ntStatus;

	WCHAR						szDWMName[] = L"ProjectLH.exe";
	UNICODE_STRING				usDWMName;

	ULONG						ulProcessInfoSize;
	PSYSTEM_PROCESS_INFORMATION	pSystemProcessInfo = NULL, pEntry;

	int	i, j;


	g_nCurCnt = 0;
	memset(g_hCurPID, 0, sizeof(g_hCurPID));

	RtlInitUnicodeString(&usDWMName, szDWMName);

	ntStatus = ZwQuerySystemInformation(SystemProcessInformation, NULL, 0, &ulProcessInfoSize);
	if (ntStatus != STATUS_INFO_LENGTH_MISMATCH)
		return FALSE;

	pSystemProcessInfo = (PSYSTEM_PROCESS_INFORMATION)ExAllocatePool(NonPagedPool, ulProcessInfoSize);
	if (!pSystemProcessInfo)
		return FALSE;

	ntStatus = ZwQuerySystemInformation(SystemProcessInformation, pSystemProcessInfo, ulProcessInfoSize, &ulProcessInfoSize);
	if (!NT_SUCCESS(ntStatus) || !pSystemProcessInfo)
	{
		if (pSystemProcessInfo) ExFreePool(pSystemProcessInfo);
		return FALSE;
	}

	pEntry = pSystemProcessInfo;
	while (TRUE)
	{
		if (RtlEqualUnicodeString(&usDWMName, &pEntry->ImageName, TRUE))
		{
			//DPRINT("ENG FIND1");
			g_hCurPID[g_nCurCnt++] = pEntry->UniqueProcessId;
		}

		if (!pEntry->NextEntryOffset)
			break;

		pEntry = (PSYSTEM_PROCESS_INFORMATION)((ULONG_PTR)(pEntry)+pEntry->NextEntryOffset);
	}

	if (pSystemProcessInfo) ExFreePool(pSystemProcessInfo);


	g_hGamePid = NULL;
	for (i = 0; i < g_nCurCnt; i++)
	{
		for (j = 0; j < g_nPrvCnt; j++)
		{
			if (g_hCurPID[i] == g_hPrvPID[j])
				break;
		}

		if (j == g_nPrvCnt)
		{
			//DPRINT("ENG FIND2");
			g_hGamePid = g_hCurPID[i];
			break;
		}
	}

	if (!g_hGamePid)
		return FALSE;

	ntStatus = PsLookupProcessByProcessId(g_hGamePid, &g_pGamePE);
	if (!NT_SUCCESS(ntStatus))
	{
		g_hGamePid = NULL;
		return FALSE;
	}

	g_dwGameBase = (DWORD64)PsGetProcessSectionBaseAddress(g_pGamePE);
	if (!g_dwGameBase)
	{
		g_hGamePid = NULL;
		return FALSE;
	}

	KAPC_STATE	ApcState;
	KeStackAttachProcess(g_pGamePE, &ApcState);
	PVOID pModule = GetProcessModule(g_pGamePE, (WCHAR*)_cw(L"kernelbase.dll"), FALSE);
	KeUnstackDetachProcess(&ApcState);

	if (!pModule)
	{
		g_hGamePid = NULL;
		return FALSE;
	}

	g_nPrvCnt = g_nCurCnt;
	memcpy(g_hPrvPID, g_hCurPID, sizeof(g_hCurPID));
	return TRUE;
}


BOOL FindProcess(WCHAR* pszName, HANDLE* pPID)
{
	NTSTATUS					ntStatus;
	HANDLE						hRet = NULL;
	UNICODE_STRING				usExpName;

	ULONG						ulProcessInfoSize;
	PSYSTEM_PROCESS_INFORMATION	pSystemProcessInfo = NULL, pEntry;


	RtlInitUnicodeString(&usExpName, pszName);

	ntStatus = ZwQuerySystemInformation(SystemProcessInformation, NULL, 0, &ulProcessInfoSize);
	if (ntStatus != STATUS_INFO_LENGTH_MISMATCH)
		return FALSE;

	pSystemProcessInfo = (PSYSTEM_PROCESS_INFORMATION)ExAllocatePool(NonPagedPool, ulProcessInfoSize);
	if (!pSystemProcessInfo)
		return FALSE;

	ntStatus = ZwQuerySystemInformation(SystemProcessInformation, pSystemProcessInfo, ulProcessInfoSize, &ulProcessInfoSize);
	if (!NT_SUCCESS(ntStatus) || !pSystemProcessInfo)
	{
		if (pSystemProcessInfo) ExFreePool(pSystemProcessInfo);
		return FALSE;
	}

	pEntry = pSystemProcessInfo;
	while (TRUE)
	{
		if (RtlEqualUnicodeString(&usExpName, &pEntry->ImageName, TRUE))
		{
			hRet = pEntry->UniqueProcessId;
			break;
		}

		if (!pEntry->NextEntryOffset)
			break;

		pEntry = (PSYSTEM_PROCESS_INFORMATION)((ULONG_PTR)(pEntry)+pEntry->NextEntryOffset);
	}

	if (pSystemProcessInfo) ExFreePool(pSystemProcessInfo);

	*pPID = hRet;
	return TRUE;
}

PEPROCESS			g_pStatusPE = 0;

VOID CopyDll(PBYTE* pResult, DWORD* pdwLen)
{
	NTSTATUS			ntStatus;
	HANDLE				hPid;
	PEPROCESS			pPE;
	KAPC_STATE			ApcState;
	PBYTE				pbSrc;
	LARGE_INTEGER		my_interval;

	DWORD				dwLen;
	DWORD64				dwAddr;

	while (TRUE)
	{
		my_interval.QuadPart = -1 * 1000 * 1000;
		KeDelayExecutionThread(KernelMode, FALSE, &my_interval);

		hPid = NULL;
		if (!FindProcess((WCHAR*)_cw(L"explorer.exe"), &hPid) || !hPid)
			continue;

		//DPRINT("[NW] Find explorer %p\n", hPid);

		ntStatus = PsLookupProcessByProcessId(hPid, &pPE);
		if (!NT_SUCCESS(ntStatus))
			continue;

		ntStatus = PsGetProcessExitStatus(pPE);
		if (ntStatus != STATUS_PENDING)
			continue;

		pbSrc = (PBYTE)PsGetProcessSectionBaseAddress(pPE);
		if (!pbSrc)
			continue;
		g_pStatusPE = pPE;

		KeStackAttachProcess(pPE, &ApcState);

		hPid = (HANDLE)*(DWORD*)(pbSrc + 0x360 + 0x00);
		dwLen = *(DWORD*)(pbSrc + 0x360 + 0x04);
		dwAddr = *(DWORD64*)(pbSrc + 0x360 + 0x08);
		g_dwKernel32 = *(DWORD64*)(pbSrc + 0x360 + 0x10);
		g_dwKernelBase = *(DWORD64*)(pbSrc + 0x360 + 0x18);

		KeUnstackDetachProcess(&ApcState);
		ObfDereferenceObject(pPE);

		if (!hPid)
			continue;

		ntStatus = PsLookupProcessByProcessId(hPid, &pPE);
		if (!NT_SUCCESS(ntStatus))
			continue;

		ntStatus = PsGetProcessExitStatus(pPE);
		if (ntStatus != STATUS_PENDING)
			continue;

		if (dwAddr)
		{
			PBYTE pBuffer = (PBYTE)ExAllocatePool(NonPagedPool, dwLen);
			if (pBuffer)
			{
				KeStackAttachProcess(pPE, &ApcState);

				memcpy(pBuffer, (PVOID)dwAddr, dwLen);

				if (dwLen)
				{
					for (int i = 0; i < (int)dwLen - 5; i++)
					{
						pBuffer[i] ^= pBuffer[i + 1] ^ pBuffer[i + 2] ^ pBuffer[i + 3] ^ pBuffer[i + 5];
					}
				}


				KeUnstackDetachProcess(&ApcState);
				ObfDereferenceObject(pPE);

				*pResult = pBuffer;
				*pdwLen = dwLen;
				break;
			}
		}

		KeUnstackDetachProcess(&ApcState);
		ObfDereferenceObject(pPE);
	}

	//DPRINT("[NW] Length - %d\n", dwLen);
}

BOOL	IsHaveRunningCmd()
{
	NTSTATUS			ntStatus;
	HANDLE				hPid;
	PEPROCESS			pPE;
	KAPC_STATE			ApcState;
	PBYTE				pbSrc;
	LARGE_INTEGER		my_interval;

	
	hPid = NULL;
	if (!FindProcess((WCHAR*)_cw(L"explorer.exe"), &hPid) || !hPid)
		return FALSE;

	//DPRINT("[NW] Find explorer2 %p\n", hPid);

	ntStatus = PsLookupProcessByProcessId(hPid, &pPE);
	if (!NT_SUCCESS(ntStatus))
		return FALSE;

	ntStatus = PsGetProcessExitStatus(pPE);
	if (ntStatus != STATUS_PENDING)
		return FALSE;
	
	pbSrc = (PBYTE)PsGetProcessSectionBaseAddress(pPE);
	if (!pbSrc)
		return FALSE;

	BOOL bRet = FALSE;
	KeStackAttachProcess(pPE, &ApcState);

	DWORD dwRunningIdx = *(DWORD*)(pbSrc + 0x360 + 0x20);

	DPRINT("[NW] RunningIdx:%d", dwRunningIdx);
	if (dwRunningIdx)
	{
		DPRINT("[NW] Have Running Cmd");

		PBYTE	pAlloc = pbSrc + 0x360 + 0x20;
		PMDL	pMdlDst;
		PVOID	pDst;

		pMdlDst = IoAllocateMdl(pAlloc, 4, FALSE, FALSE, NULL);

		DPRINT("[NW] Check 1");

		MmProbeAndLockPages(pMdlDst, KernelMode, IoReadAccess);

		DPRINT("[NW] Check 2");

		pDst = MmGetSystemAddressForMdlSafe(pMdlDst, HighPagePriority);

		DPRINT("[NW] Check 3");

		MmProtectMdlSystemAddress(pMdlDst, PAGE_EXECUTE_READWRITE);

		DPRINT("[NW] Check 4");

		*(DWORD*)pDst = 0;

		MmUnmapLockedPages(pDst, pMdlDst);

		DPRINT("[NW] Check 5");

		MmUnlockPages(pMdlDst);

		DPRINT("[NW] Check 6");

		IoFreeMdl(pMdlDst);

		DPRINT("[NW] Check 7");

		bRet = TRUE;
	}

	KeUnstackDetachProcess(&ApcState);
	ObfDereferenceObject(pPE);

	return bRet;
}

VOID EngineThread(LPVOID lpParam)
{
	NTSTATUS		ntStatus;
	PBYTE			pBuffer = NULL;
	DWORD			dwLen = 0;
	KAPC_STATE		ApcState;

	LARGE_INTEGER	my_interval;

	UNREFERENCED_PARAMETER(lpParam);

	DPRINT("[NW] EngineThread 1");

	g_nPrvCnt = 0;
	memset(g_hPrvPID, 0, sizeof(g_hPrvPID));

	DPRINT("[NW] EngineThread 2");

	CopyDll(&pBuffer, &dwLen);

	DPRINT("[NW] EngineThread 3");

	my_interval.QuadPart = -1 * 1000 * 1000;
	while (!g_bEnd)
	{
		KeDelayExecutionThread(KernelMode, FALSE, &my_interval);

		if (!IsHaveRunningCmd())
		{
			my_interval.QuadPart = -10 * 1000 * 1000;
			continue;
		}

		DPRINT("[NW] EngineThread 4");

		my_interval.QuadPart = -1 * 1000 * 1000;
		if (!FindGame())
			continue;
		
		DPRINT("[NW] FindGame:%d", g_hGamePid);

		DWORD dwReflectiveLoaderOffset = GetReflectiveLoaderOffset(pBuffer);
		if (dwReflectiveLoaderOffset)
		{
			KeStackAttachProcess(g_pGamePE, &ApcState);

			do
			{
				PBYTE	pAlloc;
				PMDL	pMdlDst;
				PVOID	pDst;

				DWORD64 dwSaved1 = *(DWORD64*)(g_dwKernel32 + 0x0);
				DWORD64 dwSaved2 = *(DWORD64*)(g_dwKernel32 + 0x8);

				pAlloc = (PBYTE)AllocateProcessMemory(g_hGamePid, dwLen);
				if (!pAlloc)
					break;

				pMdlDst = IoAllocateMdl(pAlloc, dwLen, FALSE, FALSE, NULL);
				MmProbeAndLockPages(pMdlDst, KernelMode, IoReadAccess);
				pDst = MmGetSystemAddressForMdlSafe(pMdlDst, HighPagePriority);
				MmProtectMdlSystemAddress(pMdlDst, PAGE_EXECUTE_READWRITE);

				memcpy(pDst, pBuffer, dwLen);

				MmUnmapLockedPages(pDst, pMdlDst);
				MmUnlockPages(pMdlDst);
				IoFreeMdl(pMdlDst);

				BYTE pbShell[] =
				{
					0x50,														// push		rax
					0x53,														// push		rbx
					0x51,														// push		rcx
					0x52,														// push		rdx
					0x56,														// push		rsi
					0x57,														// push		rdi
					0x41, 0x50,													// push		r8
					0x41, 0x51,													// push		r9
					0x41, 0x52,													// push		r10
					0x41, 0x53,													// push		r11
					0x41, 0x54,													// push		r12
					0x41, 0x55,													// push		r13
					0x41, 0x56,													// push		r14
					0x41, 0x57,													// push		r15
					0x48, 0x83, 0xEC, 0x78,										// sub		rsp, 48

					0x48, 0xBB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,	// mov		rbx, FFFFFFFFFFFFFFFF
					0x48, 0xB8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,	// mov		rax, FFFFFFFFFFFFFFFF
					0x48, 0x89, 0x03,											// mov		[rbx], rax
					0x48, 0xB8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,	// mov		rax, FFFFFFFFFFFFFFFF
					0x48, 0x89, 0x43, 0x08,										// mov		[rbx+08], rax

					0x48, 0xBB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,	// mov		rbx, FFFFFFFFFFFFFFFF
					0xFF, 0xD3,													// call		rbx

					0x48, 0x83, 0xC4, 0x78,										// add		rsp, 48
					0x41, 0x5F,													// pop		r15
					0x41, 0x5E, 												// pop		r14
					0x41, 0x5D, 												// pop		r13
					0x41, 0x5C, 												// pop		r12
					0x41, 0x5B, 												// pop		r11
					0x41, 0x5A, 												// pop		r10
					0x41, 0x59, 												// pop		r9
					0x41, 0x58, 												// pop		r8
					0x5F,														// pop		rdi
					0x5E,														// pop		rsi
					0x5A,														// pop		rdx
					0x59,														// pop		rcx
					0x5B,														// pop		rbx
					0x58,														// pop		rax
					0xFF, 0x25, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
				};

				*(DWORD64*)(pbShell + 0x1C) = g_dwKernel32;
				*(DWORD64*)(pbShell + 0x26) = dwSaved1;
				*(DWORD64*)(pbShell + 0x33) = dwSaved2;
				*(DWORD64*)(pbShell + 0x41) = (DWORD64)(pAlloc + dwReflectiveLoaderOffset);
				*(DWORD64*)(pbShell + 0x6B) = g_dwKernelBase;

				pAlloc = (PBYTE)AllocateProcessMemory(g_hGamePid, 0x1000);
				if (!pAlloc)
					break;

				pMdlDst = IoAllocateMdl(pAlloc, sizeof(pbShell), FALSE, FALSE, NULL);
				MmProbeAndLockPages(pMdlDst, KernelMode, IoReadAccess);
				pDst = MmGetSystemAddressForMdlSafe(pMdlDst, HighPagePriority);
				MmProtectMdlSystemAddress(pMdlDst, PAGE_EXECUTE_READWRITE);

				memcpy(pDst, pbShell, sizeof(pbShell));

				MmUnmapLockedPages(pDst, pMdlDst);
				MmUnlockPages(pMdlDst);
				IoFreeMdl(pMdlDst);

				DWORD64 dwTarget = g_dwKernel32;
				SIZE_T szTarget = 0x10;
				DWORD dwProtect;
				ntStatus = ZwProtectVirtualMemory(ZwCurrentProcess(), (PVOID*)& dwTarget, &szTarget, PAGE_EXECUTE_READWRITE, &dwProtect);

				*(WORD*)(g_dwKernel32 + 0x0) = 0x25FF;
				*(DWORD*)(g_dwKernel32 + 0x2) = 0;
				*(DWORD64*)(g_dwKernel32 + 0x6) = (DWORD64)pAlloc;

			} while (FALSE);

			KeUnstackDetachProcess(&ApcState);
		}
//		break;
	}

	//DPRINT("[NW] ExitEngine");
	if (pBuffer)
	{
		ExFreePool(pBuffer);
	}
}


VOID MonitorThread(LPVOID lpParam)
{
	HANDLE			hPID;
	LARGE_INTEGER	my_interval;

	UNREFERENCED_PARAMETER(lpParam);

	while (!g_bEnd)
	{
		my_interval.QuadPart = -1 * 1000 * 1000;
		KeDelayExecutionThread(KernelMode, FALSE, &my_interval);

		hPID = NULL;
		if (FindProcess((WCHAR*)_cw(L"HongLong.bin"), & hPID) && !hPID)
		{
			DPRINT("[NW] Exit\n");
			g_bEnd = TRUE;
			//PsRemoveLoadImageNotifyRoutine(ImageRoutine);
		}
	}
}

// /*
// # Name  : GetOffset
// # Param : PEPROCESS
// # Desc  : EPROCESS 구조체의 특정 멤버 오프셋 구하는 함수
// */
// BOOLEAN GetOffset(PEPROCESS Process)
// {
// 	BOOLEAN success = FALSE;
// 	HANDLE PID = PsGetCurrentProcessId();
// 	PLIST_ENTRY ListEntry = { 0, };
// 	PLIST_ENTRY NextEntry = { 0, };
// 
// 	for (int i = 0x80; i < PAGE_SIZE - 0x10; i += 4)
// 	{
// 		if (*(PHANDLE)((PCHAR)Process + i) == PID)
// 		{
// 			ListEntry = (PVOID*)((PCHAR)Process + i + 0x8);
// 			if (MmIsAddressValid(ListEntry) && MmIsAddressValid(ListEntry->Flink))
// 			{
// 				NextEntry = ListEntry->Flink;
// 				if (ListEntry == NextEntry->Blink)
// 				{
// 					iOffset.UniqueProcessid_off = i;
// 					iOffset.ActiveProcessLinks_off = i + 8;
// 					success = TRUE;
// 					break;
// 				}
// 			}
// 		}
// 	}
// 	if (!success)
// 	{
// 		DbgPrintEx(DPFLTR_ACPI_ID, 0, "[ERR] Not found offset\n");
// 		return success;
// 	}
// 
// 	// ImageFileName Offset 
// 	success = FALSE;
// 	for (int i = iOffset.ActiveProcessLinks_off; i < PAGE_SIZE; i++)
// 	{
// 		if (!strncmp((PCHAR)Process + i, szSystem, 6))
// 		{
// 			iOffset.ImageFileName_off = i;
// 			success = TRUE;
// 			break;
// 		}
// 	}
// 	if (!success)
// 	{
// 		DbgPrintEx(DPFLTR_ACPI_ID, 0, "[ERR] Not found offset\n");
// 		return success;
// 	}
// 
// 	if (!GetPebOffset())
// 	{
// 		DbgPrintEx(DPFLTR_ACPI_ID, 0, "[ERR] Not found offset\n");
// 		return success;
// 	}
// 	return success;
// }
// 
// /*
// # Name  : ObCallbackReg
// # Param : x
// # Desc  : ObRegisterCallbacks 호출
// */
// NTSTATUS ObCallbackReg()
// {
// 	OB_CALLBACK_REGISTRATION obRegistration = { 0, };
// 	OB_OPERATION_REGISTRATION opRegistration = { 0, };
// 
// 	obRegistration.Version = ObGetFilterVersion();	// Get version
// 	obRegistration.OperationRegistrationCount = 1;	// OB_OPERATION_REGISTRATION count, opRegistration[2] 인 경우 2
// 	RtlInitUnicodeString(&obRegistration.Altitude, L"300000");	// 임의의 Altitude 지정
// 	obRegistration.RegistrationContext = NULL;
// 
// 	opRegistration.ObjectType = PsProcessType;
// 	opRegistration.Operations = OB_OPERATION_HANDLE_CREATE;	// Create 또는 Open 시 동작
// 	opRegistration.PreOperation = PreCallback;	// PreOperation 등록
// 	opRegistration.PostOperation = PostCallback;	// PostOperation 등록
// 
// 	obRegistration.OperationRegistration = &opRegistration;	// OperationRegistration 등록
// 
// 	return ObRegisterCallbacks(&obRegistration, &hRegistration);
// }


NTSTATUS DriverEntry(IN PDRIVER_OBJECT DriverObject, IN PUNICODE_STRING RegistryPath)
{
	HANDLE				hThread;
	OBJECT_ATTRIBUTES	obAttr = { 0 };

	UNREFERENCED_PARAMETER(DriverObject);
	UNREFERENCED_PARAMETER(RegistryPath);

	DPRINT("[NW] Hello \n");

	UNICODE_STRING PsGetProcessDebugPortString = { 0, };

// 	if (GetOffset(PsGetCurrentProcess()))
// 	{
// 		RtlCreateUnicodeString(&PsGetProcessDebugPortString, L"PsGetProcessDebugPort");
//		PsGetProcessDebugPort = (PsGetProcessDebugPort_t)MmGetSystemRoutineAddress(&PsGetProcessDebugPortString);
// 
// 		if (ObCallbackReg() == STATUS_SUCCESS)
// 		{
// 			PsSetLoadImageNotifyRoutine(&LoadImageNotifyRoutine);
// 		}// 	}

	//PsSetLoadImageNotifyRoutine(ImageRoutine);

	InitializeObjectAttributes(&obAttr, NULL, OBJ_KERNEL_HANDLE, NULL, NULL);
	PsCreateSystemThread(&hThread, THREAD_ALL_ACCESS, &obAttr, NULL, NULL, EngineThread, NULL);

	InitializeObjectAttributes(&obAttr, NULL, OBJ_KERNEL_HANDLE, NULL, NULL);
	PsCreateSystemThread(&hThread, THREAD_ALL_ACCESS, &obAttr, NULL, NULL, MonitorThread, NULL);

	return STATUS_SUCCESS;
}
