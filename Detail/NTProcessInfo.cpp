//***********************************************************************/
// Functions to access NtQueryInformationProcess in NTDLL.DLL
//
// Copyright ?2007 Steven Moore (OrionScorpion).  All Rights Reserved.
//
//***********************************************************************/
#include "stdafx.h"

#pragma pack(push, 8)
#include "NTProcessInfo.h"
#pragma pack(pop)

#include "AttachEngine.h"

pfnNtQueryInformationProcess gNtQueryInformationProcess = NULL;

// Enable a privilege for a process token
// The privilege must already be assigned
// This function only enables not assigns
BOOL sm_EnableTokenPrivilege(LPCTSTR pszPrivilege)
{
	HANDLE hToken		 = 0;
	TOKEN_PRIVILEGES tkp = {0}; 

	// Get a token for this process. 
	if (!OpenProcessToken(GetCurrentProcess(),
						  TOKEN_ADJUST_PRIVILEGES |
						  TOKEN_QUERY, &hToken))
	{
        return FALSE;
	}

	// Get the LUID for the privilege. 
	if(LookupPrivilegeValue(NULL, pszPrivilege,
						    &tkp.Privileges[0].Luid)) 
	{
        tkp.PrivilegeCount = 1;  // one privilege to set    
		tkp.Privileges[0].Attributes = SE_PRIVILEGE_ENABLED;

		// Set the privilege for this process. 
		AdjustTokenPrivileges(hToken, FALSE, &tkp, 0,
							  (PTOKEN_PRIVILEGES)NULL, 0); 

		if (GetLastError() != ERROR_SUCCESS)
			return FALSE;
		
		return TRUE;
	}

	return FALSE;
}

// Load NTDLL Library and get entry address
// for NtQueryInformationProcess
HMODULE sm_LoadNTDLLFunctions()
{
	HMODULE hNtDll = LoadLibrary(_T("ntdll.dll"));
	if(hNtDll == NULL) return NULL;

	gNtQueryInformationProcess = (pfnNtQueryInformationProcess)GetProcAddress(hNtDll,
														"NtQueryInformationProcess");

	if(gNtQueryInformationProcess == NULL) {
		FreeLibrary(hNtDll);
		return NULL;
	}
	return hNtDll;
}

// Unloads the NTDLL.DLL and resets the
// global gNtQueryInformationProcess variable
void sm_FreeNTDLLFunctions(HMODULE hNtDll)
{
	if(hNtDll)
		FreeLibrary(hNtDll);
	gNtQueryInformationProcess = NULL;
}

// Gets information on process with NtQueryInformationProcess
BOOL sm_GetNtProcessInfo(const DWORD dwPID, smPROCESSINFO *ppi)
{
	BOOL  bReturnStatus						= TRUE;
	DWORD dwSize							= 0;
	DWORD dwSizeNeeded						= 0;
	DWORD dwBytesRead						= 0;
	DWORD dwBufferSize						= 0;
	HANDLE hHeap							= 0;
	WCHAR *pwszBuffer						= NULL;

	smPROCESSINFO spi						= {0};
	smPPROCESS_BASIC_INFORMATION pbi		= NULL;

	smPEB peb								= {0};
	smPEB_LDR_DATA peb_ldr					= {0};
	smRTL_USER_PROCESS_PARAMETERS peb_upp	= {0};

	ZeroMemory(&spi, sizeof(spi));
	ZeroMemory(&peb, sizeof(peb));
	ZeroMemory(&peb_ldr, sizeof(peb_ldr));
	ZeroMemory(&peb_upp, sizeof(peb_upp));

	spi.dwPID = dwPID;

	HANDLE hProcess = OpenProcess(PROCESS_QUERY_INFORMATION | PROCESS_VM_READ, FALSE, dwPID);

	if(hProcess == NULL)
		return FALSE;

	hHeap = GetProcessHeap();

	if(hHeap == NULL)
	{
		CloseHandle(hProcess);
		return FALSE;
	}

	dwSize = sizeof(smPROCESS_BASIC_INFORMATION);
	pbi = (smPPROCESS_BASIC_INFORMATION)HeapAlloc(hHeap, HEAP_ZERO_MEMORY, dwSize);

	if(!pbi)
	{
		CloseHandle(hProcess);
		return FALSE;
	}

	if(gNtQueryInformationProcess == NULL)
		sm_LoadNTDLLFunctions();

	if(gNtQueryInformationProcess == NULL)
	{
		CloseHandle(hProcess);
		return FALSE;
	}

	NTSTATUS dwStatus = gNtQueryInformationProcess(hProcess, ProcessBasicInformation, pbi, dwSize, &dwSizeNeeded);
	if(dwStatus >= 0 && dwSize < dwSizeNeeded)
	{
		if(pbi)
			HeapFree(hHeap, 0, pbi);

		pbi = (smPPROCESS_BASIC_INFORMATION)HeapAlloc(hHeap, HEAP_ZERO_MEMORY, dwSizeNeeded);
		if(!pbi)
		{
			CloseHandle(hProcess);
			return FALSE;
		}

		dwStatus = gNtQueryInformationProcess(hProcess, ProcessBasicInformation, pbi, dwSizeNeeded, &dwSizeNeeded);
	}

	if(dwStatus >= 0)
	{
		spi.dwParentPID		 = (DWORD)pbi->InheritedFromUniqueProcessId;
		spi.dwBasePriority	 = (LONG)pbi->BasePriority;
		spi.dwExitStatus	 = (NTSTATUS)pbi->ExitStatus;
		spi.dwPEBBaseAddress = (DWORD)pbi->PebBaseAddress;
		spi.dwAffinityMask	 = (DWORD)pbi->AffinityMask;

		if(pbi->PebBaseAddress)
		{
			SIZE_T	sz = 0;
			if(ReadProcessMemory(hProcess, pbi->PebBaseAddress, &peb, sizeof(peb), &sz))
			{
				spi.dwSessionID	   = (DWORD)peb.SessionId;
				spi.cBeingDebugged = (BYTE)peb.BeingDebugged;
				sz = 0;

				if(ReadProcessMemory(hProcess, peb.ProcessParameters, &peb_upp, sizeof(smRTL_USER_PROCESS_PARAMETERS), &sz))
				{
					if(peb_upp.CommandLine.Length > 0)
					{
						pwszBuffer = (WCHAR *)HeapAlloc(hHeap, HEAP_ZERO_MEMORY, peb_upp.CommandLine.Length);
						if(pwszBuffer)
						{
							if(ReadProcessMemory(hProcess, peb_upp.CommandLine.Buffer, pwszBuffer, peb_upp.CommandLine.Length, &sz))
							{
								if(peb_upp.CommandLine.Length >= sizeof(spi.szCmdLine)) 
									dwBufferSize = sizeof(spi.szCmdLine) - sizeof(TCHAR);
								else
									dwBufferSize = peb_upp.CommandLine.Length;
							
#if defined(UNICODE) || (_UNICODE)
								_tcsncpy(spi.szCmdLine, pwszBuffer, wcslen(pwszBuffer));
#else
								WideCharToMultiByte(CP_ACP, 0, pwszBuffer, (int)(dwBufferSize / sizeof(WCHAR)), spi.szCmdLine, sizeof(spi.szCmdLine), NULL, NULL);
#endif
							}

							if(!HeapFree(hHeap, 0, pwszBuffer))
							{
								bReturnStatus = FALSE;
								goto gnpiFreeMemFailed;
							}
						}
					}

					if(peb_upp.ImagePathName.Length > 0)
					{
						sz = 0;
						pwszBuffer = (WCHAR *)HeapAlloc(hHeap, HEAP_ZERO_MEMORY, peb_upp.ImagePathName.Length);
						if(pwszBuffer)
						{
                            if(ReadProcessMemory(hProcess, peb_upp.ImagePathName.Buffer, pwszBuffer, peb_upp.ImagePathName.Length, &sz))
							{
								if(peb_upp.ImagePathName.Length >= sizeof(spi.szImgPath)) 
									dwBufferSize = sizeof(spi.szImgPath) - sizeof(TCHAR);
								else
									dwBufferSize = peb_upp.ImagePathName.Length;

#if defined(UNICODE) || (_UNICODE)
								_tcsncpy(spi.szImgPath, pwszBuffer, wcslen(pwszBuffer));
#else
								WideCharToMultiByte(CP_ACP, 0, pwszBuffer, (int)(dwBufferSize / sizeof(WCHAR)), spi.szImgPath, sizeof(spi.szImgPath), NULL, NULL);
#endif
							}
							if(!HeapFree(hHeap, 0, pwszBuffer))
							{
								bReturnStatus = FALSE;
								goto gnpiFreeMemFailed;
							}
						}
					}
				}
			}
		}

		if(spi.dwPID == 4)
		{
			ExpandEnvironmentStrings(_T("%SystemRoot%\\System32\\ntoskrnl.exe"), spi.szImgPath, sizeof(spi.szImgPath));
		}
	}

gnpiFreeMemFailed:

	if(pbi != NULL && !HeapFree(hHeap, 0, pbi))
	{
	}

	CloseHandle(hProcess);

	// Return filled in structure to caller
	if (ppi)
	{
		ZeroMemory(ppi, sizeof(smPROCESSINFO));
		memcpy(ppi, &spi, sizeof(smPROCESSINFO));
	}

	return bReturnStatus;
}