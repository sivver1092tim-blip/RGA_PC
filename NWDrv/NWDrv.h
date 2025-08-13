#pragma once

//#define DPRINT(format, ...)		DbgPrintEx(DPFLTR_IHVDRIVER_ID, DPFLTR_ERROR_LEVEL, format, __VA_ARGS__)
#define DPRINT

#define DEREF( name )*(UINT_PTR *)(name)
#define DEREF_64( name )*(DWORD64 *)(name)
#define DEREF_32( name )*(DWORD *)(name)
#define DEREF_16( name )*(WORD *)(name)
#define DEREF_8( name )*(BYTE *)(name)

#define INVALID_HANDLE_VALUE ((HANDLE)-1)


//////////////////////////////////////////////////////////////////////////
// Struct
//////////////////////////////////////////////////////////////////////////
typedef enum _SYSTEM_INFORMATION_CLASS
{
	SystemBasicInformation,
	SystemProcessorInformation,
	SystemPerformanceInformation,
	SystemTimeOfDayInformation,
	SystemPathInformation,
	SystemProcessInformation,
	SystemCallCountInformation,
	SystemDeviceInformation,
	SystemProcessorPerformanceInformation,
	SystemFlagsInformation,
	SystemCallTimeInformation,
	SystemModuleInformation,
	SystemLocksInformation,
	SystemStackTraceInformation,
	SystemPagedPoolInformation,
	SystemNonPagedPoolInformation,
	SystemHandleInformation,
	SystemObjectInformation,
	SystemPageFileInformation,
	SystemVdmInstemulInformation,
	SystemVdmBopInformation,
	SystemFileCacheInformation,
	SystemPoolTagInformation,
	SystemInterruptInformation,
	SystemDpcBehaviorInformation,
	SystemFullMemoryInformation,
	SystemLoadGdiDriverInformation,
	SystemUnloadGdiDriverInformation,
	SystemTimeAdjustmentInformation,
	SystemSummaryMemoryInformation,
	SystemNextEventIdInformation,
	SystemEventIdsInformation,
	SystemCrashDumpInformation,
	SystemExceptionInformation,
	SystemCrashDumpStateInformation,
	SystemKernelDebuggerInformation,
	SystemContextSwitchInformation,
	SystemRegistryQuotaInformation,
	SystemExtendServiceTableInformation,
	SystemPrioritySeperation,
	SystemPlugPlayBusInformation,
	SystemDockInformation,
	SystemPowerInformationRedefine, // 이름이 중복되어서 변경하였습니다.
	SystemProcessorSpeedInformation,
	SystemCurrentTimeZoneInformation,
	SystemLookasideInformation
} SYSTEM_INFORMATION_CLASS, * PSYSTEM_INFORMATION_CLASS;

typedef struct _SYSTEM_THREAD_INFORMATION
{
	LARGE_INTEGER				KernelTime;
	LARGE_INTEGER				UserTime;
	LARGE_INTEGER				CreateTime;
	ULONG						WaitTime;
	PVOID						StartAddress;
	CLIENT_ID					ClientId;
	KPRIORITY					Priority;
	LONG						BasePriority;
	ULONG						ContextSwitches;
	ULONG						ThreadState;
	ULONG						WaitReason;
} SYSTEM_THREAD_INFORMATION, * PSYSTEM_THREAD_INFORMATION;

typedef struct _SYSTEM_PROCESS_INFORMATION
{
	ULONG						NextEntryOffset;
	ULONG						NumberOfThreads;
	LARGE_INTEGER				SpareLi1;
	LARGE_INTEGER				SpareLi2;
	LARGE_INTEGER				SpareLi3;
	LARGE_INTEGER				CreateTime;
	LARGE_INTEGER				UserTime;
	LARGE_INTEGER				KernelTime;
	UNICODE_STRING				ImageName;
	DWORD64						BasePriority;
	//KPRIORITY					BasePriority;
	HANDLE						UniqueProcessId;
	HANDLE						InheritedFromUniqueProcessId;
	ULONG						HandleCount;
	ULONG						SessionId;
	ULONG_PTR					PageDirectoryBase;
	SIZE_T						PeakVirtualSize;
	SIZE_T						VirtualSize;
	ULONG						PageFaultCount;
	SIZE_T						PeakWorkingSetSize;
	SIZE_T						WorkingSetSize;
	SIZE_T						QuotaPeakPagedPoolUsage;
	SIZE_T						QuotaPagedPoolUsage;
	SIZE_T						QuotaPeakNonPagedPoolUsage;
	SIZE_T						QuotaNonPagedPoolUsage;
	SIZE_T						PagefileUsage;
	SIZE_T						PeakPagefileUsage;
	SIZE_T						PrivatePageCount;
	LARGE_INTEGER				ReadOperationCount;
	LARGE_INTEGER				WriteOperationCount;
	LARGE_INTEGER				OtherOperationCount;
	LARGE_INTEGER				ReadTransferCount;
	LARGE_INTEGER				WriteTransferCount;
	LARGE_INTEGER				OtherTransferCount;
	SYSTEM_THREAD_INFORMATION	Threads[1];
} SYSTEM_PROCESS_INFORMATION, * PSYSTEM_PROCESS_INFORMATION;

typedef struct _PEB_LDR_DATA
{
	ULONG Length;
	UCHAR Initialized;
	PVOID SsHandle;
	LIST_ENTRY InLoadOrderModuleList;
	LIST_ENTRY InMemoryOrderModuleList;
	LIST_ENTRY InInitializationOrderModuleList;
} PEB_LDR_DATA, * PPEB_LDR_DATA;

typedef struct _LDR_DATA_TABLE_ENTRY
{
	LIST_ENTRY InLoadOrderLinks;
	LIST_ENTRY InMemoryOrderLinks;
	LIST_ENTRY InInitializationOrderLinks;
	PVOID DllBase;
	PVOID EntryPoint;
	ULONG SizeOfImage;
	UNICODE_STRING FullDllName;
	UNICODE_STRING BaseDllName;
	ULONG Flags;
	USHORT LoadCount;
	USHORT TlsIndex;
	LIST_ENTRY HashLinks;
	ULONG TimeDateStamp;
} LDR_DATA_TABLE_ENTRY, * PLDR_DATA_TABLE_ENTRY;

typedef struct _PEB
{
	UCHAR InheritedAddressSpace;
	UCHAR ReadImageFileExecOptions;
	UCHAR BeingDebugged;
	UCHAR BitField;
	PVOID Mutant;
	PVOID ImageBaseAddress;
	PPEB_LDR_DATA Ldr;
	PVOID ProcessParameters;
	PVOID SubSystemData;
	PVOID ProcessHeap;
	PVOID FastPebLock;
	PVOID AtlThunkSListPtr;
	PVOID IFEOKey;
	PVOID CrossProcessFlags;
	PVOID KernelCallbackTable;
	ULONG SystemReserved;
	ULONG AtlThunkSListPtr32;
	PVOID ApiSetMap;
} PEB, * PPEB;

typedef struct _PEB_LDR_DATA32
{
	ULONG Length;
	UCHAR Initialized;
	ULONG SsHandle;
	LIST_ENTRY32 InLoadOrderModuleList;
	LIST_ENTRY32 InMemoryOrderModuleList;
	LIST_ENTRY32 InInitializationOrderModuleList;
} PEB_LDR_DATA32, * PPEB_LDR_DATA32;

typedef struct _LDR_DATA_TABLE_ENTRY32
{
	LIST_ENTRY32 InLoadOrderLinks;
	LIST_ENTRY32 InMemoryOrderLinks;
	LIST_ENTRY32 InInitializationOrderLinks;
	ULONG DllBase;
	ULONG EntryPoint;
	ULONG SizeOfImage;
	UNICODE_STRING32 FullDllName;
	UNICODE_STRING32 BaseDllName;
	ULONG Flags;
	USHORT LoadCount;
	USHORT TlsIndex;
	LIST_ENTRY32 HashLinks;
	ULONG TimeDateStamp;
} LDR_DATA_TABLE_ENTRY32, * PLDR_DATA_TABLE_ENTRY32;

typedef struct _PEB32
{
	UCHAR InheritedAddressSpace;
	UCHAR ReadImageFileExecOptions;
	UCHAR BeingDebugged;
	UCHAR BitField;
	ULONG Mutant;
	ULONG ImageBaseAddress;
	ULONG Ldr;
	ULONG ProcessParameters;
	ULONG SubSystemData;
	ULONG ProcessHeap;
	ULONG FastPebLock;
	ULONG AtlThunkSListPtr;
	ULONG IFEOKey;
	ULONG CrossProcessFlags;
	ULONG UserSharedInfoPtr;
	ULONG SystemReserved;
	ULONG AtlThunkSListPtr32;
	ULONG ApiSetMap;
} PEB32, * PPEB32;


//////////////////////////////////////////////////////////////////////////
// Function Declaration
//////////////////////////////////////////////////////////////////////////
extern "C" NTSYSAPI NTSTATUS NTAPI ZwQuerySystemInformation(IN ULONG SystemInformationClass, IN PVOID SystemInformation, IN ULONG SystemInformationLength, OUT PULONG ReturnLength);
extern "C" NTSYSAPI NTSTATUS NTAPI ZwProtectVirtualMemory(IN HANDLE ProcessHandle, IN OUT PVOID* BaseAddress, IN OUT PSIZE_T RegionSize, IN ULONG NewProtect, OUT PULONG OldProtect);
extern "C" NTSYSAPI NTSTATUS NTAPI MmCopyVirtualMemory(PEPROCESS SourceProcess, PVOID SourceAddress, PEPROCESS TargetProcess, PVOID TargetAddress, SIZE_T BufferSize, KPROCESSOR_MODE PreviousMode, PSIZE_T ReturnSize);
extern "C" NTKERNELAPI PVOID PsGetProcessSectionBaseAddress(PEPROCESS Process);
extern "C" NTKERNELAPI PPEB NTAPI PsGetProcessPeb(IN PEPROCESS Process);
extern "C" NTKERNELAPI PVOID NTAPI PsGetProcessWow64Process(IN PEPROCESS Process);
