#ifndef ___DEBUG_FOR_SENSOR_HEADER___
#define ___DEBUG_FOR_SENSOR_HEADER___

#pragma once

#include <stdio.h>
#include "gconst.h"

#ifdef _DEBUG
//#define new DEBUG_NEW
#endif

//#define DEBUG_BUFF_SIZE		MAX_PATH * 4
#define DEBUG_BUFF_SIZE		4096 * 5

DWORD GetLocalException(PEXCEPTION_POINTERS pExceptionInfo);
class CDebugTracer
{
public:
	CDebugTracer();
	~CDebugTracer();

	void WINAPI OutputMsg(LPCSTR strMsg, ... );
	void WINAPI OutputMsg( LPCWSTR wstrMsg, ... );
	void WINAPI OutStr(LPCSTR strMsg);
	void WINAPI OutStr( LPCWSTR wstrMsg);


	void WINAPI EnterFunc(LPCSTR strMsg, ... );
	void WINAPI EnterFunc(LPCWSTR wstrMsg, ... );

	void WINAPI LeaveFunc(LPCSTR strMsg, ... );
	void WINAPI LeaveFunc(LPCWSTR wstrMsg, ... );

private:
	void InitW();
	void InitA();

	WCHAR	m_wszBuffer[DEBUG_BUFF_SIZE];
	char	m_szBuffer[DEBUG_BUFF_SIZE];
	CRITICAL_SECTION m_cs;
};


CDebugTracer& GetDbgTracer();

#ifdef _DEBUG
#define AUTO_DEBUG_0
#endif

#if _DEBUG
#if 1
#define XEnterFunc		GetDbgTracer().EnterFunc
#define XLeaveFunc		GetDbgTracer().LeaveFunc
#define XMsg			GetDbgTracer().OutputMsg
#define XOutStr			GetDbgTracer().OutStr
#else
#define XEnterFunc
#define XLeaveFunc
#define XMsg
#define RMsg			GetDbgTracer().OutputMsg
#define XOutStr
#endif
#else
#define XEnterFunc
#define XLeaveFunc
#define XMsg			GetDbgTracer().OutputMsg
#define RMsg			GetDbgTracer().OutputMsg
#define XOutStr
#endif // _DEBUG

#ifdef _DEBUG
#define  AUTO_DEBUG_EXCEPTION
#endif
#ifdef AUTO_DEBUG_EXCEPTION
#define DebugExcpt(X) OutputDebugString(X)
#else 
#define DebugExcpt(X)
#endif // AUTO_DEBUG_EXCEPTION


#ifdef _DEBUG
//#define  AUTO_DEBUG
#endif
#ifdef AUTO_DEBUG_0
extern char g_szbuf[512];
//#define fenter EnterCriticalSection( &g_cs );\
//	sprintf_s(g_szbuf, "%s Entered\n",__FUNCTION__);\
//	OutputDebugStringA(g_szbuf);\
//	LeaveCriticalSection( &g_cs );
//
//#define fleave EnterCriticalSection( &g_cs );\
//			sprintf_s(g_szbuf, "%s Leaved\n",__FUNCTION__);\
//			OutputDebugStringA(g_szbuf);\
//			LeaveCriticalSection( &g_cs );

#define fenter sprintf_s(g_szbuf, "[LTEST] %s Entered\n",__FUNCTION__);\
	OutputDebugStringA(g_szbuf);\

#define fleave sprintf_s(g_szbuf, "[LTEST] %s Leaved\n",__FUNCTION__);\
	OutputDebugStringA(g_szbuf);
#else 
#define fenter 
#define fleave 
#endif//AUTO_DEBUG

#ifdef _DEBUG
#define BSAUTO_PTR_CHECK 
#endif

#ifdef BSAUTO_PTR_CHECK
#define AUTO_ASSERT(X) if( X == 0 ) OutputDebugString( L"비상사고 - 주소가 0인것이 있다." );
#else
#define AUTO_ASSERT(X)	
#endif

#define AUTO_TEST

#ifdef AUTO_TEST
void ViewHexData(const char* pbuf, int len);
#endif

#endif // ___DEBUG_FOR_SENSOR_HEADER___