#pragma once

#include "Update_address.h"
#include "Update_guard.h"
#include "Update_man.h"
#include "Update_offset.h"
#include "Update_server.h"
#include "GStruct.h"

#define	PARAM_OFF_POWER					1	//전투력
#define PARAM_OFF_HPMAX					2	//최대 HP
#define PARAM_OFF_MPMAX					3	//최대 MP
#define PARAM_OFF_ATTACKSPEED			7	//공속 0.45형식
#define PARAM_OFF_ATTACK				9	//공격력
#define PARAM_OFF_HITRATE				10	//명중
#define PARAM_OFF_DEFENSE				30	//방어력
#define PARAM_OFF_EVASION				31	//회피
#define PARAM_OFF_MPGENERATION			60	//MP자연회복
#define PARAM_OFF_ADDITIONALEXP			62	//경험치 추가 획득 211%-->2.11
#define PARAM_OFF_ADDITIONALGOLD		63	//골드 추가 획득 100%->1.00

//typedef unsigned long long	DWORD64;
//typedef long long			int64;
//typedef unsigned int		DWORD;
//typedef int                 BOOL;
//typedef unsigned char       BYTE;
//typedef unsigned short      WORD;
//typedef unsigned short		WCHAR;
//typedef void*				LPVOID;

#define BYTEV				*(BYTE*)
#define WORDV				*(WORD*)
#define DWORDV				*(DWORD*)
#define DWORD64V			*(DWORD64*)
#define FLOATV				*(float*)


//#define LOWORD(_dw)			((WORD)(((_dw)) & 0xffff))
//#define HIWORD(_dw)			((WORD)((((_dw)) >> 16) & 0xffff))
//#define LODWORD(_qw)		((DWORD)(_qw))
//#define HIDWORD(_qw)		((DWORD)(((_qw) >> 32) & 0xffffffff))

struct RET_STRUCT
{
	DWORD64		qwData1;
	DWORD64		qwData2;
	DWORD64		qwData3;
	DWORD64		qwData4;
	DWORD64		qwData5;
	DWORD64		qwData6[100];
};

#define WC(x) ( *(DWORD*)((*(DWORD_PTR *)(x.UnknownData)) + 0x34) > 0 ? *(WCHAR **)((*(DWORD_PTR *)(x.UnknownData)) + 0x28) : (WCHAR *)L"")

typedef DWORD64(__thiscall* _callFunc0) ();
typedef DWORD64(__thiscall* _callFunc1) (DWORD64);
typedef DWORD64(__thiscall* _callFunc2) (DWORD64, DWORD64);
typedef DWORD64(__thiscall* _callFunc3) (DWORD64, DWORD64, DWORD64);
typedef DWORD64(__thiscall* _callFunc4) (DWORD64, DWORD64, DWORD64, DWORD64);
typedef DWORD64(__thiscall* _callFunc5) (DWORD64, DWORD64, DWORD64, DWORD64, DWORD64);
typedef DWORD64(__thiscall* _callFunc6) (DWORD64, DWORD64, DWORD64, DWORD64, DWORD64, DWORD64);
typedef DWORD64(__thiscall* _callFunc7) (DWORD64, DWORD64, DWORD64, DWORD64, DWORD64, DWORD64, DWORD64);
typedef DWORD64(__thiscall* _callFunc8) (DWORD64, DWORD64, DWORD64, DWORD64, DWORD64, DWORD64, DWORD64, DWORD64);

typedef	DWORD64(*_CallFunc0)();
typedef	DWORD64(*_CallFunc1)(DWORD64);
typedef DWORD64(*_CallFunc2)(DWORD64, DWORD64);
typedef DWORD64(*_CallFunc3)(DWORD64, DWORD64, DWORD64);
typedef DWORD64(*_CallFunc4)(DWORD64, DWORD64, DWORD64, DWORD64);
typedef DWORD64(*_CallFunc5)(DWORD64, DWORD64, DWORD64, DWORD64, DWORD64);
typedef DWORD64(*_CallFunc6)(DWORD64, DWORD64, DWORD64, DWORD64, DWORD64, DWORD64);
typedef DWORD64(*_CallFunc7)(DWORD64, DWORD64, DWORD64, DWORD64, DWORD64, DWORD64, DWORD64);
typedef DWORD64(*_CallFunc8)(DWORD64, DWORD64, DWORD64, DWORD64, DWORD64, DWORD64, DWORD64, DWORD64);
typedef DWORD64(*_CallFunc9)(DWORD64, DWORD64, DWORD64, DWORD64, DWORD64, DWORD64, DWORD64, DWORD64, DWORD64);

typedef float(__thiscall* _callFuncF1) (DWORD64);
typedef double(__thiscall* _callFuncF5) (DWORD64, DWORD64, DWORD64, DWORD64, float);

typedef DWORD64(__thiscall* _callFunc2F) (DWORD64, float);

typedef RET_STRUCT(*_CallFunc1Struct)(DWORD64);
typedef RET_STRUCT(*_CallFunc2Struct)(DWORD64, DWORD64);
typedef RET_STRUCT(*_CallFunc3Struct)(DWORD64, DWORD64, DWORD64);
typedef RET_STRUCT(*_CallFunc4Struct)(DWORD64, DWORD64, DWORD64, DWORD64);

typedef FVector(*_callFunc1Vec)(DWORD64);
typedef RET_STRUCT(*_callFunc3Struct)(DWORD64, DWORD64, DWORD64);
typedef double(*_dCallFunc3)(DWORD64, DWORD64, DWORD64);
//typedef double(*_dCallFunc3)(DWORD64, DWORD64, DWORD64);
typedef DWORD64(*_CallMoveFunc)(DWORD64, FVector, float);