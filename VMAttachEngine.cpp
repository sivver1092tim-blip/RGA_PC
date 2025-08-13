#include "stdafx.h"


#define DEREF( name )*(UINT_PTR *)(name)
#define DEREF_64( name )*(DWORD64 *)(name)
#define DEREF_32( name )*(DWORD *)(name)
#define DEREF_16( name )*(WORD *)(name)
#define DEREF_8( name )*(BYTE *)(name)

typedef BOOL(WINAPI* DLLMAIN)(HINSTANCE, DWORD, LPVOID);
typedef BOOL(WINAPI* DLLMAIN0)();

typedef struct
{
	WORD	offset : 12;
	WORD	type : 4;
} IMAGE_RELOC, * PIMAGE_RELOC;


PVOID LoadPE64(PVOID pBuffer)
{
	// the initial location of this image in memory
	ULONG_PTR uiLibraryAddress = (ULONG_PTR)pBuffer;
	// the kernels base address and later this images newly loaded base address
	ULONG_PTR uiBaseAddress;

	// variables for processing the kernels export table
	ULONG_PTR uiAddressArray;
	ULONG_PTR uiNameArray;
	ULONG_PTR uiExportDir;

	// variables for loading this image
	ULONG_PTR uiHeaderValue;
	ULONG_PTR uiValueA;
	ULONG_PTR uiValueB;
	ULONG_PTR uiValueC;
	ULONG_PTR uiValueD;
	ULONG_PTR uiValueE;

	// STEP 2: load our image into a new permanent location in memory...

	// get the VA of the NT Header for the PE to be loaded
	uiHeaderValue = uiLibraryAddress + ((PIMAGE_DOS_HEADER)uiLibraryAddress)->e_lfanew;

	// allocate all the memory for the DLL to be loaded into. we can load at any address because we will  
	// relocate the image. Also zeros all memory and marks it as READ, WRITE and EXECUTE to avoid any problems.
	uiBaseAddress = (ULONG_PTR)VirtualAlloc(NULL, ((PIMAGE_NT_HEADERS)uiHeaderValue)->OptionalHeader.SizeOfImage, MEM_RESERVE | MEM_COMMIT, PAGE_EXECUTE_READWRITE);

	// we must now copy over the headers
	uiValueA = ((PIMAGE_NT_HEADERS)uiHeaderValue)->OptionalHeader.SizeOfHeaders;
	uiValueB = uiLibraryAddress;
	uiValueC = uiBaseAddress;

	while (uiValueA--)
		* (BYTE*)uiValueC++ = *(BYTE*)uiValueB++;

	// STEP 3: load in all of our sections...

	// uiValueA = the VA of the first section
	uiValueA = ((ULONG_PTR) & ((PIMAGE_NT_HEADERS)uiHeaderValue)->OptionalHeader + ((PIMAGE_NT_HEADERS)uiHeaderValue)->FileHeader.SizeOfOptionalHeader);

	// itterate through all sections, loading them into memory.
	uiValueE = ((PIMAGE_NT_HEADERS)uiHeaderValue)->FileHeader.NumberOfSections;
	while (uiValueE--)
	{
		// uiValueB is the VA for this section
		uiValueB = (uiBaseAddress + ((PIMAGE_SECTION_HEADER)uiValueA)->VirtualAddress);

		// uiValueC if the VA for this sections data
		uiValueC = (uiLibraryAddress + ((PIMAGE_SECTION_HEADER)uiValueA)->PointerToRawData);

		// copy the section over
		uiValueD = ((PIMAGE_SECTION_HEADER)uiValueA)->SizeOfRawData;

		while (uiValueD--)
			* (BYTE*)uiValueB++ = *(BYTE*)uiValueC++;

		// get the VA of the next section
		uiValueA += sizeof(IMAGE_SECTION_HEADER);
	}

	// STEP 4: process our images import table...

	// uiValueB = the address of the import directory
	uiValueB = (ULONG_PTR) & ((PIMAGE_NT_HEADERS)uiHeaderValue)->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_IMPORT];

	// we assume their is an import table to process
	// uiValueC is the first entry in the import table
	uiValueC = (uiBaseAddress + ((PIMAGE_DATA_DIRECTORY)uiValueB)->VirtualAddress);

	// itterate through all imports
	while (((PIMAGE_IMPORT_DESCRIPTOR)uiValueC)->Name)
	{
		// use LoadLibraryA to load the imported module into memory
		uiLibraryAddress = (ULONG_PTR)LoadLibraryA((LPCSTR)(uiBaseAddress + ((PIMAGE_IMPORT_DESCRIPTOR)uiValueC)->Name));

		// uiValueD = VA of the OriginalFirstThunk
		uiValueD = (uiBaseAddress + ((PIMAGE_IMPORT_DESCRIPTOR)uiValueC)->OriginalFirstThunk);

		// uiValueA = VA of the IAT (via first thunk not origionalfirstthunk)
		uiValueA = (uiBaseAddress + ((PIMAGE_IMPORT_DESCRIPTOR)uiValueC)->FirstThunk);

		// itterate through all imported functions, importing by ordinal if no name present
		while (DEREF(uiValueA))
		{
			// sanity check uiValueD as some compilers only import by FirstThunk
			if (uiValueD && ((PIMAGE_THUNK_DATA)uiValueD)->u1.Ordinal & IMAGE_ORDINAL_FLAG)
			{
				// get the VA of the modules NT Header
				uiExportDir = uiLibraryAddress + ((PIMAGE_DOS_HEADER)uiLibraryAddress)->e_lfanew;

				// uiNameArray = the address of the modules export directory entry
				uiNameArray = (ULONG_PTR) & ((PIMAGE_NT_HEADERS)uiExportDir)->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_EXPORT];

				// get the VA of the export directory
				uiExportDir = (uiLibraryAddress + ((PIMAGE_DATA_DIRECTORY)uiNameArray)->VirtualAddress);

				// get the VA for the array of addresses
				uiAddressArray = (uiLibraryAddress + ((PIMAGE_EXPORT_DIRECTORY)uiExportDir)->AddressOfFunctions);

				// use the import ordinal (- export ordinal base) as an index into the array of addresses
				uiAddressArray += ((IMAGE_ORDINAL(((PIMAGE_THUNK_DATA)uiValueD)->u1.Ordinal) - ((PIMAGE_EXPORT_DIRECTORY)uiExportDir)->Base) * sizeof(DWORD));

				// patch in the address for this imported function
				DEREF(uiValueA) = (uiLibraryAddress + DEREF_32(uiAddressArray));
			}
			else
			{
				// get the VA of this functions import by name struct
				uiValueB = (uiBaseAddress + DEREF(uiValueA));

				// use GetProcAddress and patch in the address for this imported function
				DEREF(uiValueA) = (ULONG_PTR)GetProcAddress((HMODULE)uiLibraryAddress, (LPCSTR)((PIMAGE_IMPORT_BY_NAME)uiValueB)->Name);
			}
			// get the next imported function
			uiValueA += sizeof(ULONG_PTR);
			if (uiValueD)
				uiValueD += sizeof(ULONG_PTR);
		}

		// get the next import
		uiValueC += sizeof(IMAGE_IMPORT_DESCRIPTOR);
	}

	// STEP 5: process all of our images relocations...

	// calculate the base address delta and perform relocations (even if we load at desired image base)
	uiLibraryAddress = uiBaseAddress - ((PIMAGE_NT_HEADERS)uiHeaderValue)->OptionalHeader.ImageBase;

	// uiValueB = the address of the relocation directory
	uiValueB = (ULONG_PTR) & ((PIMAGE_NT_HEADERS)uiHeaderValue)->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_BASERELOC];

	// check if their are any relocations present
	if (((PIMAGE_DATA_DIRECTORY)uiValueB)->Size)
	{
		// uiValueC is now the first entry (IMAGE_BASE_RELOCATION)
		uiValueC = (uiBaseAddress + ((PIMAGE_DATA_DIRECTORY)uiValueB)->VirtualAddress);

		// and we itterate through all entries...
		while (((PIMAGE_BASE_RELOCATION)uiValueC)->SizeOfBlock)
		{
			// uiValueA = the VA for this relocation block
			uiValueA = (uiBaseAddress + ((PIMAGE_BASE_RELOCATION)uiValueC)->VirtualAddress);

			// uiValueB = number of entries in this relocation block
			uiValueB = (((PIMAGE_BASE_RELOCATION)uiValueC)->SizeOfBlock - sizeof(IMAGE_BASE_RELOCATION)) / sizeof(IMAGE_RELOC);

			// uiValueD is now the first entry in the current relocation block
			uiValueD = uiValueC + sizeof(IMAGE_BASE_RELOCATION);

			// we itterate through all the entries in the current block...
			while (uiValueB--)
			{
				// perform the relocation, skipping IMAGE_REL_BASED_ABSOLUTE as required.
				// we dont use a switch statement to avoid the compiler building a jump table
				// which would not be very position independent!
				if (((PIMAGE_RELOC)uiValueD)->type == IMAGE_REL_BASED_DIR64)
					* (ULONG_PTR*)(uiValueA + ((PIMAGE_RELOC)uiValueD)->offset) += uiLibraryAddress;
				else if (((PIMAGE_RELOC)uiValueD)->type == IMAGE_REL_BASED_HIGHLOW)
					* (DWORD*)(uiValueA + ((PIMAGE_RELOC)uiValueD)->offset) += (DWORD)uiLibraryAddress;
				else if (((PIMAGE_RELOC)uiValueD)->type == IMAGE_REL_BASED_HIGH)
					* (WORD*)(uiValueA + ((PIMAGE_RELOC)uiValueD)->offset) += HIWORD(uiLibraryAddress);
				else if (((PIMAGE_RELOC)uiValueD)->type == IMAGE_REL_BASED_LOW)
					* (WORD*)(uiValueA + ((PIMAGE_RELOC)uiValueD)->offset) += LOWORD(uiLibraryAddress);

				// get the next entry in the current relocation block
				uiValueD += sizeof(IMAGE_RELOC);
			}

			// get the next entry in the relocation directory
			uiValueC = uiValueC + ((PIMAGE_BASE_RELOCATION)uiValueC)->SizeOfBlock;
		}
	}

	return (PVOID)uiBaseAddress;
}

#if defined(_WIN64)
HMODULE	LoadRemoteLibrary64(HANDLE hProcess, char* szModule)
{
	HMODULE		hMod = NULL;
	HANDLE		hThread = NULL;
	DWORD64		dwAddrName, dwFunc;
	DWORD		dwThreadID;

	BYTE pbShell[] =
	{
		0x50, 0x51,
		0x48, 0x83, 0xEC, 0x78,
		0x48, 0xB9, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00,
		0xFF, 0x15, 0x02, 0x00, 0x00, 0x00, 0xEB, 0x08, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0x48, 0xB9, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00,
		0x48, 0x89, 0x01,
		0x48, 0x83, 0xC4, 0x78,
		0x59, 0x58,
		0xC3,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	};
	int nSize = (int)strlen(szModule) + 1 + (int)sizeof(pbShell);
	dwFunc = (DWORD64)GetProcAddress(LoadLibraryA("Kernel32.dll"), "LoadLibraryA");
	dwAddrName = (DWORD64)VirtualAllocEx(hProcess, NULL, nSize, MEM_RESERVE | MEM_COMMIT, PAGE_EXECUTE_READWRITE);

	*(DWORD64*)(pbShell + 0x08) = dwAddrName + sizeof(pbShell);
	*(DWORD64*)(pbShell + 0x18) = dwFunc;
	*(DWORD64*)(pbShell + 0x22) = dwAddrName + sizeof(pbShell) - 8;

	BYTE * pbBuffer = new BYTE[nSize];
	memcpy(pbBuffer, pbShell, sizeof(pbShell));
	memcpy(pbBuffer + sizeof(pbShell), szModule, strlen(szModule) + 1);

	WriteProcessMemory(hProcess, (LPVOID)dwAddrName, (LPCVOID)pbBuffer, nSize, 0);
	CreateRemoteThread(hProcess, NULL, 0, (LPTHREAD_START_ROUTINE)dwAddrName, (LPVOID)NULL, NULL, &dwThreadID);
	hThread = OpenThread(SYNCHRONIZE | THREAD_QUERY_INFORMATION, 0, dwThreadID);

	if (WaitForSingleObject(hThread, 5000) == WAIT_TIMEOUT)
		return 0;

	ReadProcessMemory(hProcess, (LPCVOID)(dwAddrName + sizeof(pbShell) - 8), (LPVOID)& hMod, sizeof(DWORD64), NULL);

	CloseHandle(hThread);
	VirtualFreeEx(hProcess, (LPVOID)dwAddrName, nSize, MEM_RELEASE);
	delete pbBuffer;
	return hMod;
}
#else

HMODULE	LoadRemoteLibrary32(HANDLE hProcess, char* szModule)
{
	HMODULE		hMod;
	HANDLE		hThread;
	DWORD		dwAddrName, dwFunc;

	dwFunc = (DWORD)GetProcAddress(LoadLibrary(L"Kernel32.dll"), "LoadLibraryA");
	dwAddrName = (DWORD)VirtualAllocEx(hProcess, NULL, strlen(szModule) + 1, MEM_RESERVE | MEM_COMMIT, PAGE_EXECUTE_READWRITE);
	WriteProcessMemory(hProcess, (LPVOID)dwAddrName, szModule, strlen(szModule) + 1, 0);
	CreateRemoteThread(hProcess, NULL, 0, (LPTHREAD_START_ROUTINE)dwFunc, (LPVOID)dwAddrName, NULL, &dwFunc);
	hThread = OpenThread(SYNCHRONIZE | THREAD_QUERY_INFORMATION, 0, dwFunc);
	WaitForSingleObject(hThread, INFINITE);
	GetExitCodeThread(hThread, (DWORD*)& hMod);
	CloseHandle(hThread);
	VirtualFreeEx(hProcess, (LPVOID)dwAddrName, strlen(szModule) + 1, MEM_RELEASE);
	return hMod;
}

#endif

PVOID LoadPE64(HANDLE hProcess, PVOID pBuffer, ULONG_PTR * pOutBaseVirtual)
{
	// the initial location of this image in memory
	ULONG_PTR uiLibraryAddress = (ULONG_PTR)pBuffer;
	// the kernels base address and later this images newly loaded base address
	ULONG_PTR uiTargetBase, uiBaseAddress;

	// variables for processing the kernels export table
	ULONG_PTR uiAddressArray;
	ULONG_PTR uiNameArray;
	ULONG_PTR uiExportDir;

	// variables for loading this image
	ULONG_PTR uiHeaderValue;
	ULONG_PTR uiValueA;
	ULONG_PTR uiValueB;
	ULONG_PTR uiValueC;
	ULONG_PTR uiValueD;
	ULONG_PTR uiValueE;
	ULONG_PTR uiTemp;

	// STEP 2: load our image into a new permanent location in memory...

	// get the VA of the NT Header for the PE to be loaded
	uiHeaderValue = uiLibraryAddress + ((PIMAGE_DOS_HEADER)uiLibraryAddress)->e_lfanew;

	// allocate all the memory for the DLL to be loaded into. we can load at any address because we will  
	// relocate the image. Also zeros all memory and marks it as READ, WRITE and EXECUTE to avoid any problems.

	SIZE_T sz = ((PIMAGE_NT_HEADERS)uiHeaderValue)->OptionalHeader.SizeOfImage;
	uiTargetBase = (ULONG_PTR)VirtualAllocEx(hProcess, NULL, sz, MEM_RESERVE | MEM_COMMIT, PAGE_EXECUTE_READWRITE);
	uiBaseAddress = (ULONG_PTR)VirtualAlloc(NULL, sz, MEM_RESERVE | MEM_COMMIT, PAGE_EXECUTE_READWRITE);

	if (pOutBaseVirtual)
		* (ULONG_PTR*)pOutBaseVirtual = (ULONG_PTR)uiTargetBase;

	// we must now copy over the headers, 헤더 정보 복사
	uiValueA = ((PIMAGE_NT_HEADERS)uiHeaderValue)->OptionalHeader.SizeOfHeaders;
	uiValueB = uiLibraryAddress;
	uiValueC = uiBaseAddress;

	while (uiValueA--)
		* (BYTE*)uiValueC++ = *(BYTE*)uiValueB++;

	// STEP 3: load in all of our sections...

	// uiValueA = the VA of the first section
	uiValueA = ((ULONG_PTR) & ((PIMAGE_NT_HEADERS)uiHeaderValue)->OptionalHeader + ((PIMAGE_NT_HEADERS)uiHeaderValue)->FileHeader.SizeOfOptionalHeader);

	// itterate through all sections, loading them into memory. 섹션 정보 복사
	uiValueE = ((PIMAGE_NT_HEADERS)uiHeaderValue)->FileHeader.NumberOfSections;
	while (uiValueE--)
	{
		// uiValueB is the VA for this section
		uiValueB = (uiBaseAddress + ((PIMAGE_SECTION_HEADER)uiValueA)->VirtualAddress);

		// uiValueC if the VA for this sections data
		uiValueC = (uiLibraryAddress + ((PIMAGE_SECTION_HEADER)uiValueA)->PointerToRawData);

		// copy the section over
		uiValueD = ((PIMAGE_SECTION_HEADER)uiValueA)->SizeOfRawData;

		while (uiValueD--)
			* (BYTE*)uiValueB++ = *(BYTE*)uiValueC++;

		// get the VA of the next section
		uiValueA += sizeof(IMAGE_SECTION_HEADER);
	}

	// STEP 4: process our images import table...

	// uiValueB = the address of the import directory
	uiValueB = (ULONG_PTR) & ((PIMAGE_NT_HEADERS)uiHeaderValue)->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_IMPORT];

	// we assume their is an import table to process
	// uiValueC is the first entry in the import table
	uiValueC = (uiBaseAddress + ((PIMAGE_DATA_DIRECTORY)uiValueB)->VirtualAddress);

	// itterate through all imports
	while (((PIMAGE_IMPORT_DESCRIPTOR)uiValueC)->Name)
	{
		// use LoadLibraryA to load the imported module into memory
		LPCSTR szDll = (LPCSTR)(uiBaseAddress + ((PIMAGE_IMPORT_DESCRIPTOR)uiValueC)->Name);

#if defined(_WIN64)
		uiTemp = (ULONG_PTR)LoadRemoteLibrary64(hProcess, (CHAR*)szDll);
#else
		uiTemp = (ULONG_PTR)LoadRemoteLibrary32(hProcess, (CHAR*)szDll);
#endif

		if (uiTemp == 0)
			return NULL;
		uiLibraryAddress = (ULONG_PTR)LoadLibraryA(szDll);

		// uiValueD = VA of the OriginalFirstThunk
		uiValueD = (uiBaseAddress + ((PIMAGE_IMPORT_DESCRIPTOR)uiValueC)->OriginalFirstThunk);

		// uiValueA = VA of the IAT (via first thunk not origionalfirstthunk)
		uiValueA = (uiBaseAddress + ((PIMAGE_IMPORT_DESCRIPTOR)uiValueC)->FirstThunk);

		// itterate through all imported functions, importing by ordinal if no name present
		while (DEREF(uiValueA))
		{
			// sanity check uiValueD as some compilers only import by FirstThunk
			if (uiValueD && ((PIMAGE_THUNK_DATA)uiValueD)->u1.Ordinal & IMAGE_ORDINAL_FLAG)
			{
				// get the VA of the modules NT Header
				uiExportDir = uiLibraryAddress + ((PIMAGE_DOS_HEADER)uiLibraryAddress)->e_lfanew;

				// uiNameArray = the address of the modules export directory entry
				uiNameArray = (ULONG_PTR) & ((PIMAGE_NT_HEADERS)uiExportDir)->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_EXPORT];

				// get the VA of the export directory
				uiExportDir = (uiLibraryAddress + ((PIMAGE_DATA_DIRECTORY)uiNameArray)->VirtualAddress);

				// get the VA for the array of addresses
				uiAddressArray = (uiLibraryAddress + ((PIMAGE_EXPORT_DIRECTORY)uiExportDir)->AddressOfFunctions);

				// use the import ordinal (- export ordinal base) as an index into the array of addresses
				uiAddressArray += ((IMAGE_ORDINAL(((PIMAGE_THUNK_DATA)uiValueD)->u1.Ordinal) - ((PIMAGE_EXPORT_DIRECTORY)uiExportDir)->Base) * sizeof(DWORD));

				// patch in the address for this imported function
				DEREF(uiValueA) = (uiTemp + DEREF_32(uiAddressArray));
			}
			else
			{
				// get the VA of this functions import by name struct
				uiValueB = (uiBaseAddress + DEREF(uiValueA));

				// use GetProcAddress and patch in the address for this imported function
				DEREF(uiValueA) = (ULONG_PTR)GetProcAddress((HMODULE)uiLibraryAddress, (LPCSTR)((PIMAGE_IMPORT_BY_NAME)uiValueB)->Name) + uiTemp - uiLibraryAddress;
			}
			// get the next imported function
			uiValueA += sizeof(ULONG_PTR);
			if (uiValueD)
				uiValueD += sizeof(ULONG_PTR);
		}

		// get the next import
		uiValueC += sizeof(IMAGE_IMPORT_DESCRIPTOR);
	}

	// STEP 5: process all of our images relocations...

	// calculate the base address delta and perform relocations (even if we load at desired image base)
	uiLibraryAddress = uiTargetBase/*uiBaseAddress*/ - ((PIMAGE_NT_HEADERS)uiHeaderValue)->OptionalHeader.ImageBase;

	// uiValueB = the address of the relocation directory
	uiValueB = (ULONG_PTR) & ((PIMAGE_NT_HEADERS)uiHeaderValue)->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_BASERELOC];

	// check if their are any relocations present
	if (((PIMAGE_DATA_DIRECTORY)uiValueB)->Size)
	{
		// uiValueC is now the first entry (IMAGE_BASE_RELOCATION)
		uiValueC = (uiBaseAddress + ((PIMAGE_DATA_DIRECTORY)uiValueB)->VirtualAddress);

		// and we itterate through all entries...
		while (((PIMAGE_BASE_RELOCATION)uiValueC)->SizeOfBlock)
		{
			// uiValueA = the VA for this relocation block
			uiValueA = (uiBaseAddress + ((PIMAGE_BASE_RELOCATION)uiValueC)->VirtualAddress);

			// uiValueB = number of entries in this relocation block
			uiValueB = (((PIMAGE_BASE_RELOCATION)uiValueC)->SizeOfBlock - sizeof(IMAGE_BASE_RELOCATION)) / sizeof(IMAGE_RELOC);

			// uiValueD is now the first entry in the current relocation block
			uiValueD = uiValueC + sizeof(IMAGE_BASE_RELOCATION);

			// we itterate through all the entries in the current block...
			while (uiValueB--)
			{
				// perform the relocation, skipping IMAGE_REL_BASED_ABSOLUTE as required.
				// we dont use a switch statement to avoid the compiler building a jump table
				// which would not be very position independent!

				if (((PIMAGE_RELOC)uiValueD)->type == IMAGE_REL_BASED_DIR64)
					* (ULONG_PTR*)(uiValueA + ((PIMAGE_RELOC)uiValueD)->offset) += uiLibraryAddress;
				else if (((PIMAGE_RELOC)uiValueD)->type == IMAGE_REL_BASED_HIGHLOW)
					* (DWORD*)(uiValueA + ((PIMAGE_RELOC)uiValueD)->offset) += (DWORD)uiLibraryAddress;
				else if (((PIMAGE_RELOC)uiValueD)->type == IMAGE_REL_BASED_HIGH)
					* (WORD*)(uiValueA + ((PIMAGE_RELOC)uiValueD)->offset) += HIWORD(uiLibraryAddress);
				else if (((PIMAGE_RELOC)uiValueD)->type == IMAGE_REL_BASED_LOW)
					* (WORD*)(uiValueA + ((PIMAGE_RELOC)uiValueD)->offset) += LOWORD(uiLibraryAddress);

				// get the next entry in the current relocation block
				uiValueD += sizeof(IMAGE_RELOC);
			}

			// get the next entry in the relocation directory
			uiValueC = uiValueC + ((PIMAGE_BASE_RELOCATION)uiValueC)->SizeOfBlock;
		}
	}

	// copy relocated memory to target process
	WriteProcessMemory(hProcess, (LPVOID)uiTargetBase, (LPVOID)uiBaseAddress, sz, &sz);
	return (PVOID)uiBaseAddress;
}


HMODULE LoadRemoteLibraryR(HANDLE hProcess, LPVOID lpBuffer, DWORD dwLength, LPVOID lpParameter)
{
	DWORD dwTid = 0;
	HANDLE hThread = NULL;
	ULONG_PTR dwOutBase = 0;

	PBYTE pImage = (PBYTE)LoadPE64(hProcess, lpBuffer, &dwOutBase);
	if (pImage == NULL)
		return 0;

	PIMAGE_DOS_HEADER pDosHeader = (PIMAGE_DOS_HEADER)pImage;
	PIMAGE_NT_HEADERS pNTHeader = (PIMAGE_NT_HEADERS)(pImage + pDosHeader->e_lfanew);
	ULONG_PTR dwEntry = dwOutBase + pNTHeader->OptionalHeader.AddressOfEntryPoint;


	// 	((DLLMAIN)dwEntry)((HINSTANCE)pImage, DLL_PROCESS_ATTACH, lpParameter);
	// 	return;

	SIZE_T sz = 0;
#if defined(_WIN64)

	BYTE pbShell[] =
	{
		0x50, 0x51, 0x52, 0x41, 0x50,				//push rax, push rcx, push rdx, push r8
		0x48, 0x83, 0xEC, 0x78,						//sub esp, 0x78
		0x48, 0xB9, 0xFF, 0xFF, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00,	//push lparam
		0x48, 0xBA, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	//push 01
		0x49, 0xB8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	//push ImageBase
		0xFF, 0x15, 0x02, 0x00, 0x00, 0x00, 0xEB, 0x08, 0x24, 0xF3, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0x00,	//call Entry
		0x48, 0x83, 0xC4, 0x78,						//add esp, 0x78
		0x41, 0x58, 0x5A, 0x59, 0x58,				//pop r8, pop rdx, pop rcx, pop rax
		0xC3										//retn
	};

	*(ULONG_PTR*)(pbShell + 0x0B) = (ULONG_PTR)dwOutBase;
	*(ULONG_PTR*)(pbShell + 0x1F) = (ULONG_PTR)lpParameter;
	*(ULONG_PTR*)(pbShell + 0x2F) = dwEntry;

	sz = sizeof(pbShell);
	PVOID pShell = VirtualAllocEx(hProcess, NULL, sz, MEM_RESERVE | MEM_COMMIT, PAGE_EXECUTE_READWRITE);
	if (pbShell)
	{
		WriteProcessMemory(hProcess, (LPVOID)pShell, (LPCVOID)pbShell, sz, &sz);
		CreateRemoteThread(hProcess, NULL, 0, (LPTHREAD_START_ROUTINE)pShell, NULL, 0, NULL);
	}
#else
	BYTE pbShell[] =
	{
		//0x83, 0xEC, 0x78,
		0x81, 0xEC, 0x00, 0x04, 0x00, 0x00,	//sub esp, 0x400
		0x50, 0x51,							//push eax, push ecx
		0x68, 0xFF, 0xFF, 0xFF, 0x07,		//push param
		0x6A, 0x01,							//push 01(DLL_PROCESS_ATTACH)
		0x68, 0xEE, 0xEE, 0xEE, 0x07,		//push ImageBase
		0xB8, 0x07, 0xDD, 0xDD, 0xDD,		//mov eax, DllEntry
		0xFF, 0xD0,							//call eax
		0x59, 0x58,							//pop ecx, pop eax
		//0x83, 0xC4, 0x78,	
		0x81, 0xC4, 0x00, 0x04, 0x00, 0x00,	//add esp, 0x400
		0xC3								//retn
	};

	//0x78
// 	*(ULONG_PTR*)(pbShell + 0x06) = (ULONG_PTR)lpParameter;
// 	*(ULONG_PTR*)(pbShell + 0x0D) = (ULONG_PTR)dwOutBase;
// 	*(ULONG_PTR*)(pbShell + 0x12) = dwEntry;

	//0x400
	*(ULONG_PTR*)(pbShell + 0x09) = (ULONG_PTR)lpParameter;
	*(ULONG_PTR*)(pbShell + 0x10) = (ULONG_PTR)dwOutBase;
	*(ULONG_PTR*)(pbShell + 0x15) = dwEntry;

	sz = sizeof(pbShell);
	PVOID pShell = VirtualAllocEx(hProcess, NULL, sz, MEM_RESERVE | MEM_COMMIT, PAGE_EXECUTE_READWRITE);
	if (pbShell)
	{
		WriteProcessMemory(hProcess, (LPVOID)pShell, (LPCVOID)pbShell, sz, &sz);
		CreateRemoteThread(hProcess, NULL, 0, (LPTHREAD_START_ROUTINE)pShell, NULL, 0, (LPDWORD)&dwTid);

		hThread = OpenThread(SYNCHRONIZE | THREAD_QUERY_INFORMATION, 0, dwTid);
		if (hThread)
		{
			WaitForSingleObject(hThread, INFINITE);
			CloseHandle(hThread);
			Sleep(1000);
		}
		else
		{
			Sleep(1000);
		}
	}
#endif

	return (HMODULE)dwOutBase;
}


HMODULE LoadRemoteLibraryR(DWORD dwProcessID, LPVOID lpBuffer, DWORD dwLength, LPVOID lpParameter)
{
	HMODULE hRet = NULL;
	HANDLE hProcess = OpenProcess(PROCESS_ALL_ACCESS, NULL, dwProcessID);
	if (hProcess)
	{
		hRet = LoadRemoteLibraryR(hProcess, lpBuffer, dwLength, lpParameter);
		CloseHandle(hProcess);
	}
	return hRet;
}


HMODULE LoadLibraryR(LPVOID lpBuffer, DWORD dwLength, LPVOID lpParameter)
{
	PBYTE pImage = (PBYTE)LoadPE64(lpBuffer);
	PIMAGE_DOS_HEADER pDosHeader = (PIMAGE_DOS_HEADER)pImage;
	PIMAGE_NT_HEADERS pNTHeader = (PIMAGE_NT_HEADERS)(pImage + pDosHeader->e_lfanew);
	PVOID pEntry = pImage + pNTHeader->OptionalHeader.AddressOfEntryPoint;


	((DLLMAIN)pEntry)((HINSTANCE)pImage, DLL_PROCESS_ATTACH, lpParameter);

	return (HMODULE)pImage;
}

