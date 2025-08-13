//////////////////////////////////////////////////////////////////////////////////////////////////////////
#include "stdafx.h"
#include <stdio.h>
#include "dbgSerial.h"
#include "log.h"
#include <string>

#ifdef AUTO_DEBUG_0
char g_szbuf[512];
#endif//AUTO_DEBUG

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

//------------------------------------------------------------
CDebugTracer::CDebugTracer()
{
	InitializeCriticalSectionAndSpinCount(&m_cs, 2000);
	InitW();
	InitA();
}

//------------------------------------------------------------
CDebugTracer::~CDebugTracer()
{
	DeleteCriticalSection( &m_cs );
}

//------------------------------------------------------------
void CDebugTracer::InitW()
{
	memset(m_wszBuffer, 0, DEBUG_BUFF_SIZE * sizeof(WCHAR));
}

//------------------------------------------------------------
void CDebugTracer::InitA()
{
	memset(m_szBuffer, 0, DEBUG_BUFF_SIZE);
}

//------------------------------------------------------------
void WINAPI CDebugTracer::OutputMsg(LPCSTR strMsg, ... )
{
	EnterCriticalSection( &m_cs );
	InitA();

	va_list args;
	va_start(args, strMsg);
	vsprintf_s( m_szBuffer, DEBUG_BUFF_SIZE, strMsg, args );
	va_end(args);
	strcat_s(m_szBuffer, DEBUG_BUFF_SIZE, "\0");
	m_szBuffer[DEBUG_BUFF_SIZE - 1] = '\0';

#ifdef _ENGINE_PROJECT
	std::string strBuffer = "[DEV][E]";
#else
	std::string strBuffer = "[DEV][U]";
#endif

	strBuffer.append(m_szBuffer);
	OutputDebugStringA(strBuffer.c_str());
	//XMSG_EX((LPCWSTR)m_wszBuffer);

	LeaveCriticalSection( &m_cs );
}

//------------------------------------------------------------
void WINAPI CDebugTracer::OutputMsg(LPCWSTR wstrMsg, ... )
{
	EnterCriticalSection( &m_cs );
	
	InitW();
	va_list args;
	va_start(args, wstrMsg);
	vswprintf_s(m_wszBuffer, DEBUG_BUFF_SIZE, wstrMsg, args);
	va_end(args);
	wcscat_s(m_wszBuffer, DEBUG_BUFF_SIZE, L"\0");
	m_wszBuffer[DEBUG_BUFF_SIZE - 1] = L'\0';

#ifdef _ENGINE_PROJECT
	std::wstring wstrBuffer = L"[DEV][E]";
#else
	std::wstring wstrBuffer = L"[DEV][U]";
#endif
	wstrBuffer.append(m_wszBuffer);
	OutputDebugStringW(wstrBuffer.c_str());
	//XMSG_EX((LPCWSTR)m_wszBuffer);

	LeaveCriticalSection( &m_cs );
}
//------------------------------------------------------------
void WINAPI CDebugTracer::OutStr(LPCSTR strMsg)
{
	OutputDebugStringA(strMsg);
}
//------------------------------------------------------------
void WINAPI CDebugTracer::OutStr( LPCWSTR wstrMsg)
{
	OutputDebugStringW(wstrMsg);
}
//------------------------------------------------------------
void WINAPI CDebugTracer::EnterFunc(LPCSTR strMsg, ... )
{
	EnterCriticalSection( &m_cs );
	InitA();

	char szBuffer[DEBUG_BUFF_SIZE] = {0};

	va_list args;
	va_start(args, strMsg);
	vsprintf_s( szBuffer, DEBUG_BUFF_SIZE, strMsg, args );
	szBuffer[DEBUG_BUFF_SIZE - 1] = '\0';
	va_end(args);

	sprintf_s(m_szBuffer, DEBUG_BUFF_SIZE, "%s : %s", "===> [Enter Func]", szBuffer);
	strcat_s(m_szBuffer, DEBUG_BUFF_SIZE, "\r\n\0");
	m_szBuffer[DEBUG_BUFF_SIZE - 1] = '\0';

	OutputDebugStringA(m_szBuffer);
	LeaveCriticalSection( &m_cs );
}

//------------------------------------------------------------
void WINAPI CDebugTracer::EnterFunc(LPCWSTR wstrMsg, ... )
{
	EnterCriticalSection( &m_cs );
	InitW();

	WCHAR wszBuffer[DEBUG_BUFF_SIZE] = {0};
	va_list args;
	va_start(args, wstrMsg);
	vswprintf_s(wszBuffer, DEBUG_BUFF_SIZE, wstrMsg, args );
	wszBuffer[DEBUG_BUFF_SIZE - 1] = L'\0';
	va_end(args);

	swprintf_s(m_wszBuffer, DEBUG_BUFF_SIZE, L"%s : %s", L"===> [Enter Func]", wszBuffer);
	wcscat_s(m_wszBuffer, DEBUG_BUFF_SIZE, L"\r\n\0");
	m_wszBuffer[DEBUG_BUFF_SIZE - 1] = L'\0';

	OutputDebugStringW(m_wszBuffer);
	LeaveCriticalSection( &m_cs );

}

//------------------------------------------------------------
void WINAPI CDebugTracer::LeaveFunc(LPCSTR strMsg, ... )
{
	EnterCriticalSection( &m_cs );
	InitA();

	char szBuffer[DEBUG_BUFF_SIZE] = {0};

	va_list args;
	va_start(args, strMsg);
	vsprintf_s( szBuffer, DEBUG_BUFF_SIZE, strMsg, args );
	szBuffer[DEBUG_BUFF_SIZE - 1] = '\0';
	va_end(args);

	sprintf_s(m_szBuffer, DEBUG_BUFF_SIZE, "%s : %s", "<=== [Leave Func]", szBuffer);
	strcat_s(m_szBuffer, DEBUG_BUFF_SIZE, "\r\n\0");
	m_szBuffer[DEBUG_BUFF_SIZE - 1] = '\0';

	OutputDebugStringA(m_szBuffer);
	LeaveCriticalSection( &m_cs );
}

//------------------------------------------------------------
void WINAPI CDebugTracer::LeaveFunc(LPCWSTR wstrMsg, ...  )
{
	EnterCriticalSection( &m_cs );

	InitW();

	WCHAR wszBuffer[DEBUG_BUFF_SIZE] = {0};

	va_list args;
	va_start(args, wstrMsg);
	vswprintf_s(wszBuffer, DEBUG_BUFF_SIZE, wstrMsg, args );
	wszBuffer[DEBUG_BUFF_SIZE - 1] = L'\0';
	va_end(args);

	swprintf_s(m_wszBuffer, DEBUG_BUFF_SIZE, L"%s : %s", L"<=== [Leave Func]", wszBuffer);
	wcscat_s(m_wszBuffer, DEBUG_BUFF_SIZE, L"\r\n\0");
	m_wszBuffer[DEBUG_BUFF_SIZE - 1] = L'\0';

	OutputDebugStringW(m_wszBuffer);
	LeaveCriticalSection( &m_cs );
}

//------------------------------------------------------------
CDebugTracer& GetDbgTracer()
{
	static CDebugTracer s_DebugManagerObj;
	return s_DebugManagerObj;
}

DWORD GetLocalException(PEXCEPTION_POINTERS pExceptionInfo)
{
	CONTEXT *pContext = pExceptionInfo->ContextRecord;
//	DWORD _EAX, _EBX, _ECX, _EDX, _ESI, _EDI, _EIP, _ESP, _EBP, _EFL;

// 	_EAX = pContext->Eax;
// 	_EBX = pContext->Ebx;
// 	_ECX = pContext->Ecx;
// 	_EDX = pContext->Edx;
// 	_ESI = pContext->Esi;
// 	_EDI = pContext->Edi;
// 	_EIP = pContext->Eip;
// 	_ESP = pContext->Esp;
// 	_EBP = pContext->Ebp;
// 	_EFL = pContext->EFlags;

	//XMsg( "ERR_CODE = 0x%x , ERR_EIP = 0x%x\n"
		//,pExceptionInfo->ExceptionRecord->ExceptionCode
		//,(int)pExceptionInfo->ExceptionRecord->ExceptionAddress);

	//////////XMsg( L"call addreess[0x%08X] \n \
	//	   EAX = 0x%08X EBX = 0x%08X ECX = 0x%08X EDX = 0x%08X ESI = 0x%08X \n \
//		   EDI = 0x%08X EIP = 0x%08X ESP = 0x%08X EBP = 0x%08X EFL = 0x%08X"
		   //,*(DWORD*)_ESP
		   //,_EAX, _EBX, _ECX, _EDX, _ESI, _EDI, _EIP, _ESP, _EBP, _EFL) ;

	return EXCEPTION_EXECUTE_HANDLER;
}

void ViewHexData(const char* pbuf, int len)
{
	WCHAR			g_szStatus[700] = L"";
	WCHAR tmp[32] = L"[E] ";
	int k = 0;
	for(k=0; k < len-16 && len >=16; k += 16) {
		swprintf_s(g_szStatus, L"[E] [%03X] %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X"
			, k
			, (char)pbuf[k] & 0xFF
			, (char)pbuf[k+1] & 0xFF
			, (char)pbuf[k+2] & 0xFF
			, (char)pbuf[k+3] & 0xFF
			, (char)pbuf[k+4] & 0xFF
			, (char)pbuf[k+5] & 0xFF
			, (char)pbuf[k+6] & 0xFF
			, (char)pbuf[k+7] & 0xFF
			, (char)pbuf[k+8] & 0xFF
			, (char)pbuf[k+9] & 0xFF
			, (char)pbuf[k+10] & 0xFF
			, (char)pbuf[k+11] & 0xFF
			, (char)pbuf[k+12] & 0xFF
			, (char)pbuf[k+13] & 0xFF
			, (char)pbuf[k+14] & 0xFF
			, (char)pbuf[k+15] & 0xFF);
		XMsg(g_szStatus);
	}

// 	g_szStatus[0] = L'\0';
// 	wcscat_s(g_szStatus, L"[E] ");
// 	swprintf_s(tmp, L"[%03X] ", k);
// 	wcscat_s(g_szStatus, tmp);
// 	for (; k < len; k++)
// 	{
// 		swprintf_s(tmp, L"%02X " , (char)pbuf[k] & 0xFF);
// 		wcscat_s(g_szStatus, tmp);		
// 	}
// 	XMsg(g_szStatus);
// 	XMsg(L"\n");
}
// EOF
