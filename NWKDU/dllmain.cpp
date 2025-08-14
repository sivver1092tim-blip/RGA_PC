#include "global.h"
//#include "NWGlobal.h"

#pragma data_seg("iris")
volatile LONG g_lApplicationInstances = 0;
#pragma data_seg()
#pragma comment(linker, "/Section:iris,RWS")


HINSTANCE		g_hInstance;
KDU_CONTEXT* g_ProvContext;


INT KDUProcessCommandLine(
	_In_ ULONG HvciEnabled,
	_In_ ULONG NtBuildNumber
)
{
	INT     retVal = -1;
	ULONG   providerId = KDU_PROVIDER_DEFAULT;

	OutputDebugStringW(L"[ENG] KDUProcessCommandLine");

	g_ProvContext = KDUProviderCreate(providerId, HvciEnabled, NtBuildNumber, g_hInstance, ActionTypeMapDriver);
	if (g_ProvContext)
	{
		retVal = KDUMapDriver(g_ProvContext);
		KDUProviderRelease(g_ProvContext);
	}

	return retVal;
}


int KDUMain()
{
	INT iResult = -1;

	do {

		LONG x = InterlockedIncrement((PLONG)&g_lApplicationInstances);
		if (x > 1)
			break;

		OSVERSIONINFO osv;
		RtlSecureZeroMemory(&osv, sizeof(osv));
		osv.dwOSVersionInfoSize = sizeof(osv);
		RtlGetVersion((PRTL_OSVERSIONINFOW)&osv);

		if (osv.dwMajorVersion < 6)
			break;

		BOOLEAN hvciEnabled;
		BOOLEAN hvciStrict;
		BOOLEAN hvciIUM;

		supQueryHVCIState(&hvciEnabled, &hvciStrict, &hvciIUM);
		iResult = KDUProcessCommandLine(hvciEnabled, osv.dwBuildNumber);

	} while (FALSE);

	InterlockedDecrement((PLONG)&g_lApplicationInstances);

	return iResult;
}


BOOL APIENTRY DllMain(HMODULE hModule,
	DWORD  ul_reason_for_call,
	LPVOID lpReserved
)
{
	UNREFERENCED_PARAMETER(ul_reason_for_call);
	UNREFERENCED_PARAMETER(lpReserved);

	OutputDebugStringW(L"[ENG] KDU Attached");
	g_hInstance = hModule;

	HeapSetInformation(NULL, HeapEnableTerminationOnCorruption, NULL, 0);
	KDUMain();

	return TRUE;
}
