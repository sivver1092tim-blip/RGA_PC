// MakeAddrCab.cpp : Defines the entry point for the application.
//

#include "stdafx.h"
#include "stdio.h"
#include "MakeAddrCab.h"

#pragma comment(lib , "user32.lib")

int APIENTRY _tWinMain(HINSTANCE hInstance,
					   HINSTANCE hPrevInstance,
					   LPTSTR    lpCmdLine,
					   int       nCmdShow)
{
	DWORD	dwAddr[100] = { 0, };

	int nCount = 0;
	while (1)
	{
		switch (nCount)
		{
		case 0:		dwAddr[nCount] = (DWORD)0x7FF796820078;		break;
		case 1:		dwAddr[nCount] = (DWORD)0x7FF796735DF4;		break;
		case 2:		dwAddr[nCount] = (DWORD)0x7FF78FD25D90;		break;
		case 3:		dwAddr[nCount] = (DWORD)0x7FF79036CA90;		break;
		
		case 4:		dwAddr[nCount] = (DWORD)0x7FF7903B6700;		break;
		case 5:		dwAddr[nCount] = (DWORD)0x7FF7903B6710;		break;
		case 6:		dwAddr[nCount] = (DWORD)0x7FF795625E58;		break;
		case 7:		dwAddr[nCount] = (DWORD)0x7FF79036F340;		break;
		case 8:		dwAddr[nCount] = (DWORD)0x7FF79016F170;		break;
		case 9:		dwAddr[nCount] = (DWORD)0x7FF795625E80;		break;
		case 10:	dwAddr[nCount] = (DWORD)0x7FF7905FF6C0;		break;
		case 11:	dwAddr[nCount] = (DWORD)0x7FF7916AC310;		break;
		case 12:	dwAddr[nCount] = (DWORD)0x7FF790630710;		break;
		case 13:	dwAddr[nCount] = (DWORD)0x7FF7907E0020;		break;
		case 14:	dwAddr[nCount] = (DWORD)0x7FF7902251E0;		break;
		case 15:	dwAddr[nCount] = (DWORD)0x7FF790F3D320;		break;
		case 16:	dwAddr[nCount] = (DWORD)0x7FF7902F58A0;		break;
		case 17:	dwAddr[nCount] = (DWORD)0x7FF79023A7D0;		break;
		case 18:	dwAddr[nCount] = (DWORD)0x7FF7911ECE50;		break;
		case 19:	dwAddr[nCount] = (DWORD)0x7FF7905DA8B0;		break;

		case 20:	dwAddr[nCount] = (DWORD)0x7FF7905DA770;		break;
		case 21:	dwAddr[nCount] = (DWORD)0x7FF78FD1EAB0;		break;
		case 22:	dwAddr[nCount] = (DWORD)0x7FF79032B310;		break;
		case 23:	dwAddr[nCount] = (DWORD)0x7FF7904AD4D0;		break;
		case 24:	dwAddr[nCount] = (DWORD)0x7FF79036FBF0;		break;
		case 25:	dwAddr[nCount] = (DWORD)0x7FF79044DF50;		break;
		case 26:	dwAddr[nCount] = (DWORD)0x7FF790174590;		break;
		case 27:	dwAddr[nCount] = (DWORD)0x7FF704BA5878;		break;
		case 28:	dwAddr[nCount] = (DWORD)0x7FF793F84860;		break;
		case 29:	dwAddr[nCount] = (DWORD)0x7FF793F84E68;		break;
		case 30:	dwAddr[nCount] = (DWORD)0x7FF79405AE50;		break;
		case 31:	dwAddr[nCount] = (DWORD)0x7FF790577D50;		break;
		case 32:	dwAddr[nCount] = (DWORD)0x7FF7905777C0;		break;

		case 33:	dwAddr[nCount] = (DWORD)0x7FF7905779C0;		break;
		case 34:	dwAddr[nCount] = (DWORD)0x7FF79023CD80;		break;
		case 35:	dwAddr[nCount] = (DWORD)0x7FF79057FF30;		break;
		case 36:	dwAddr[nCount] = (DWORD)0x7FF7918E8210;		break;
		case 37:	dwAddr[nCount] = (DWORD)0x7FF7903F8A00;		break;
		case 38:	dwAddr[nCount] = (DWORD)0x7FF790577840;		break;
		case 39:	dwAddr[nCount] = (DWORD)0x7FF790584E00;		break;
		case 40:	dwAddr[nCount] = (DWORD)0x7FF7902EDA30;		break;
		case 41:	dwAddr[nCount] = (DWORD)0x7FF7903A0F40;		break;
		case 42:	dwAddr[nCount] = (DWORD)0x7FF79267A3B0;		break;
		case 43:	dwAddr[nCount] = (DWORD)0x7FF7913E4C90;		break;
		case 44:	dwAddr[nCount] = (DWORD)0x7FF79063FC60;		break;
		case 45:	dwAddr[nCount] = (DWORD)0x7FF79038D5B0;		break;
		case 46:	dwAddr[nCount] = (DWORD)0x7FF793FC2410;		break;
		case 47:	dwAddr[nCount] = (DWORD)0x7FF793FC4680;		break;
		case 48:	dwAddr[nCount] = (DWORD)0x7FF7903F9050;		break;
		case 49:	dwAddr[nCount] = (DWORD)0x7FF790408EA0;		break;
		case 50:	dwAddr[nCount] = (DWORD)0x7FF7903FE350;		break;
		case 51:	dwAddr[nCount] = (DWORD)0x7FF7909E1680;		break;

		case 52:	dwAddr[nCount] = (DWORD)0x7FF790237780;		break;
		case 53:	dwAddr[nCount] = (DWORD)0x7FF79021B710;		break;
		case 54:	dwAddr[nCount] = (DWORD)0x7FF79285DB00;		break;
		case 55:	dwAddr[nCount] = (DWORD)0x7FF790402D60;		break;
		case 56:	dwAddr[nCount] = (DWORD)0x7FF790498110;		break;

		case 57:	dwAddr[nCount] = (DWORD)0x7FF795615488;		break;
		case 58:	dwAddr[nCount] = (DWORD)0x7FF78FD30100;		break;

		case 59:	dwAddr[nCount] = (DWORD)0x7FF7905D8BE0;		break;
		case 60:	dwAddr[nCount] = (DWORD)0x7FF7905D97F0;		break;
		case 61:	dwAddr[nCount] = (DWORD)0x7FF7905B5840;		break;
		case 62:	dwAddr[nCount] = (DWORD)0x7FF7905E0D60;		break;

		case 63:	dwAddr[nCount] = (DWORD)0x7FF791479770;		break;
		case 64:	dwAddr[nCount] = (DWORD)0x7FF793CB8950;		break;
		case 65:	dwAddr[nCount] = (DWORD)0x7FF79681D870;		break;
		case 66:	dwAddr[nCount] = (DWORD)0x7FF793D89AB0;		break;
		case 67:	dwAddr[nCount] = (DWORD)0x7FF793F85450;		break;

		default:	goto GetOutAddr;
		}

		nCount++;
	}

GetOutAddr:
				  
	WCHAR szAppPath[MAX_PATH];
	GetModuleFileName(0, szAppPath, MAX_PATH);
	int i = wcslen(szAppPath);
	while(szAppPath[i] != L'\\')
		i--;
	szAppPath[i] = 0;

	WCHAR szPath[MAX_PATH];
	swprintf(szPath , L"%s\\SuddenAddr.cab" , szAppPath);

	FILE *fp = _wfopen(szPath , L"wb");
	if(fp)
	{
		fwrite((const void*)&nCount , 1 , sizeof(int) , fp);
		if(nCount > 0)
		{
			fwrite(dwAddr , 1 , nCount * sizeof(DWORD) , fp);
		}

		fclose(fp);
	}

	return 0;
}

