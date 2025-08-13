#pragma once

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

typedef float(__thiscall* _callFuncF1) (DWORD64);
typedef double(__thiscall* _callFuncF5) (DWORD64, DWORD64, DWORD64, DWORD64, float);

typedef DWORD64(__thiscall* _callFunc2F) (DWORD64, float);
