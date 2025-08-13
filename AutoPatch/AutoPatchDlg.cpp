
// AutoPatchDlg.cpp : 구현 파일
//

#include "stdafx.h"
#include "AutoPatch.h"
#include "AutoPatchDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

int
SF_Utf8ToUnicode(PWSTR p_pwstr, LPSTR p_pstr)
{
	//	memset(p_pwstr, 0, 256 * 2);
	int nLen = (int)MultiByteToWideChar(CP_UTF8, 0, p_pstr, (int)strlen(p_pstr), NULL, NULL);
	MultiByteToWideChar(CP_UTF8, 0, p_pstr, (int)strlen(p_pstr), p_pwstr, nLen);
	return nLen;
}

int
SF_UnicodeToUtf8(char* strUtf8, PWSTR p_pwstr)
{
	int nLen = (int)WideCharToMultiByte(CP_UTF8, 0, p_pwstr, (int)lstrlenW(p_pwstr), NULL, 0, NULL, NULL);
	WideCharToMultiByte(CP_UTF8, 0, p_pwstr, (int)lstrlenW(p_pwstr), strUtf8, nLen, NULL, NULL);
	return nLen;
}

/************************************************************************/
/*                                                                      */
/************************************************************************/

#define		BYTEV(x)					(*(BYTE*)(x))
#define		WORDV(x)					(*(WORD*)(x))
#define		DWORDV(x)					(*(DWORD*)(x))
#define		INTV(x)						(*(INT*)(x))
#define		LONGV(x)					(*(LONG*)(x))
#define		FLOATV(x)					(*(FLOAT*)(x))

#define		MAX_OPCODE_LEN			256

#define		OPCODE_NONE				-1		// ?
#define		OPCODE_NULL				-2		// NONE

static	const	LPCTSTR		G_OPCODE_PATTERN[] =
{
	_T("ADDR_MULTICHECK                                     "), _T("F+5C 41 B8 34 02 00 00 48 8D 8C 24 54 01 00 00 E8 ? ? ? ? 33 D2 8D 4A 02"), _T(""),
	_T("ADDR_INITXIGNCODE                                   "), _T("F+3B 48 83 C0 02 48 83 F8 0E 75 ? 8B CF EB ? 1B C9 83 C9 01 8D 43 01"), _T(""),
	_T("ADDR_CHECKGUARD                                     "), _T("F-77 83 7C 24 34 0A 75 ? 83 7C 24 38 00 75 ? 81 7C 24 3C F0 55 00 00 72"), _T(""),
	_T("ADDR_ADDVECTOREDHANDLER                             "), _T("F+00 48 83 EC 28 48 8D 0D ? ? ? ? E8 ? ? ? ? 48 8D 0D ? ? ? ? C6"), _T(""),
	_T("//"), _T(""), _T(""),

	_T("ADDR_MEM_GNAMES                                     "), _T("L-13 0F 10 07 83 FB 01 0F 85 ? ? ? ? 66 0F 73 D8 08 BB 10 00 01 00 66 48 0F 7E C0 C6 45 C7 00 0F 10 07 48 C1 E8 20 B9 14 00 01 00"), _T(""),
	_T("ADDR_MEM_GOBJECTS                                   "), _T("L+96 8B 87 30 02 00 00 48 8D 0D ? ? ? ? 89 03 0F 10 B7 F0 01 00 00 48 89 5C 24 30"), _T(""),
	_T("//"), _T(""), _T(""),

	_T("ADDR_MEMORY_ADDR                                    "), _T(""), _T("// 89 0D ? ? ? ? 4D 8B C6 4C 0F 45 C0 8B C6 99 83 E6 1F 83 E2 1F 40 0F B6 CE 48 8B 74 24 70 03 C2 C1 F8 05 , above loc_ functions's data, next 2 lines"),
	_T("ADDR_SENDFUNC                                       "), _T("F-31 48 8B 49 30 48 85 C9 0F 84 ? ? ? ? 48 8B 01 FF 90 ? ? ? ? 83 F8 01 0F 85 ? ? ? ? 4D 85 F6 0F 85 ? ? ? ? 41 B9 09 00 00 00 C7 85 B0 01 00 00 08"), _T(""),
	_T("//"), _T(""), _T(""),

	_T("ADDR_MEM_GWORLD                                     "), _T("L-08 4C 8B B0 78 01 00 00 4D 85 F6 74 ? 4D 8B B6 90 00 00 00 EB ? 4C 8B B0 F0 02 00 00 F3 0F 10 B3 CC 00 00 00"), _T("// 1"),
	_T("ADDR_GARBAGECOLLECTING_FLAG                         "), _T("L+66 48 39 71 08 0F 95 C0 3A C3 74 ? 48 8B 01 8B D7 FF 50 28 B9 C0 00 00 00"), _T("// 2"),
	_T("ADDR_ITERMAPDATA                                    "), _T("L+57 83 AB 58 01 00 00 01 75 ? F6 83 60 01 00 00 01 74 ? 48 63 83 E8 00 00 00 48 8D 93 F0 00 00 00"), _T("// 3"),
	_T("ADDR_GETMAINWIDGETS                                 "), _T("L+23 48 8B 89 88 01 00 00 E8 ? ? ? ? 41 39 46 08 0F 85 ? ? ? ? 48 8B 0D ? ? ? ? 48 89 74 24 38"), _T("// 4"),
	_T("//"), _T(""), _T(""),

	_T("OFFSET_ITEMMAPCOUNT                                 "), _T(""), _T("// 0x000000000028"),
	_T("OFFSET_ITEMMAPDATA                                  "), _T(""), _T("// 0x000000000010"),
	_T("BOFFSET_ITEMMAPDATA                                 "), _T("L+76 48 8B 83 48 08 00 00 48 8B 38 44 39 A3 60 08 00 00 7E ? 48 8B 83 58 08 00 00 4C 8B 08"), _T(""),
	_T("//"), _T(""), _T(""),

	_T("OFFSET_ITEMBRANCH                                   "), _T("B+14 48 8D 0C 40 48 8B 02 48 8B 44 C8 08 48 85 C0 74 ? 44 38 60 30 75 ? 4C 3B 78 28"), _T("// 0x000000000030"),
	_T("OFFSET_ITEMUID                                      "), _T("B+1A 48 8D 0C 40 48 8B 02 48 8B 44 C8 08 48 85 C0 74 ? 44 38 60 30 75 ? 4C 3B 78 28"), _T("// 0x000000000028"),
	_T("BOFFSET_ITEMUID                                     "), _T("F+11 48 8D 0C 40 48 8B 02 48 8B 44 C8 08 48 85 C0 74 ? 44 38 60 30 75 ? 4C 3B 78 28"), _T(""),
	_T("//"), _T(""), _T(""),

	_T("ADDR_CONVWIDGETRCX                                  "), _T("L+37 08 83 ? 11 00 00 48 8B 0D ? ? ? ? E8 ? ? ? ? BA 33 00 00 00 48 8B C8"), _T("// 5"),
	_T("ADDR_GETWIDGETWITHID                                "), _T("F+00 48 8B 0D ? ? ? ? 48 8B 89 90 01 00 00 E9 ? ? ? ? CC"), _T("// 6"),
	_T("ADDR_LHGameInstance                                 "), _T("L-08 48 8B 88 ? 02 00 00 48 8B 89 80 00 00 00 48 8B 01 48 83 C4 20 5B 48 FF A0 50 02 00 00"), _T("// 7"),
	_T("ADDR_GETPLAYERCONTROLLER                            "), _T("L-0A FF 92 B0 0D 00 00 48 8B 0D ? ? ? ? E8 ? ? ? ? BA 33 00 00 00"), _T("// 8"),
	_T("ADDR_INITQUESTPARAM                                 "), _T("L+29 48 63 57 50 48 8B 4B 28 E8 ? ? ? ? 48 85 C0 0F 84 ? ? ? ? 80 B8 80 00 00 00 07"), _T("// 9"),
	_T("ADDR_QUESTTABLEDATA                                 "), _T("L-14 48 89 5C 24 68 48 89 74 24 70 48 8B 98 88 02 00 00 48 85 DB 0F 84 ? ? ? ? E8 ? ? ? ? 48 8B 4B 10 4C 8D 40 30"), _T("// 10"),
	_T("ADDR_GETQUESTTABLE                                  "), _T("L+5F 83 B9 50 01 00 00 00 48 8B D9 0F 85 ? ? ? ? 48 89 6C 24 58 48 8D 4C 24 20 33 ED 48 89 74 24 60"), _T("// 11"),
	_T("ADDR_GETQUESTINFO                                   "), _T("L-0E 0F B6 50 6C 48 8B 8F D0 00 00 00 FE 04 0A 0F B6 48 6D 48 8B 87 E0 00 00 00 FE 04 01"), _T("// 12"),
	_T("ADDR_GETGAMESTRING                                  "), _T("L+13 45 33 C9 48 8D 54 24 20 41 B8 53 8D 0C 00 48 8B 48 28"), _T("// 13"),
	_T("ADDR_GETPLAYABLE                                    "), _T("L-0C 48 8B 88 B0 07 00 00 48 85 C9 74 ? BA 00 01 00 00 E8 ? ? ? ? 84 C0"), _T("// 14"),
	_T("ADDR_AUTOPLAYQUESTID                                "), _T("L+12 48 85 C0 74 ? 48 8B 88 ? 10 00 00 48 85 C9 74"), _T("// 15"),
	_T("ADDR_GETQUICKSLOTCOMMONLIST                         "), _T("F-2E 48 8D B8 00 05 00 00 48 8B CF 4C 89 74 24 20 E8 ? ? ? ? 48 63 44 24 40 33 DB 83 F8 FF"), _T("// 16"),
	_T("ADDR_CALCPARAM                                      "), _T("F-09 80 B9 B0 00 00 00 02 45 0F B6 F8 0F B6 DA 48 8B F9 75 ? 80 FB 02"), _T("// 17"),
	_T("ADDR_MOVETOPOS                                      "), _T("L-04 80 A3 04 01 00 00 FE 40 08 B3 04 01 00 00"), _T("// 18"),
	_T("ADDR_REFRESHPURCHAGE                                "), _T("L+23 4C 63 81 D8 04 00 00 48 8B 91 E8 04 00 00 4C 3B C2 7D ? 41 8D 40 64"), _T("// 19"),
	_T("ADDR_CHANGEQUICKSLOTSTATE                           "), _T("L-C 48 8B 88 A8 01 00 00 48 8B 81 98 01 00 00 C6 80 8F 00 00 00 01"), _T("// 20 skillTable.tbl"),
	_T("    OFFSET_QUICKSLOTAUTOSTATE                       "), _T(""), _T("// 0x000000000011"),
	_T("    OFFSET_QUICKSLOTSKILLID							"), _T(""), _T("// 0x000000000008"),
	_T("//"), _T(""), _T(""),

	_T("ADDR_CHANGEITEMQUICKSLOTSTATE                       "), _T("L+41 0F 10 83 38 04 00 00 48 8B 05 ? ? ? ? 48 8D 54 24 38 F2 0F 10 8B 48 04 00 00 80 BB 49 04 00 00 00"), _T("// 21 ULHWidget_QuickSlot_Common::SetInfo -> 2nd -> L-80 goto"),
	_T("ADDR_INITSTRING                                     "), _T("L+2E 80 BF F8 05 00 00 00 44 89 B7 E4 05 00 00 44 89 BF E8 05 00 00 0F 84 ? ? ? ? 33 D2"), _T("// 22"),
	_T("ADDR_GETSKILLINFO                                   "), _T("F+00 8B 81 D0 00 00 00 ? ? ? 3B 81 FC 00 00 00 74 ? 4C 63 89 10 01 00 00 4C 8D 91 00 01 00 00"), _T("// 23 PlayerTable.tbl"),
	_T("ADDR_GETCOINCOUNT                                   "), _T("F-52 48 8B 81 ?? 01 00 00 4C 8B 80 E0 00 00 00 49 8B C0 48 83 C4 28 C3"), _T("// 24"),
	_T("ADDR_GET_CHARID                                     "), _T("F-00 48 8B 89 78 01 00 00 48 85 C9 0F 85 ? ? ? ? 33 C0 C3"), _T("// 25"),
	_T("ADDR_GETACHIEVEMENTSTATE                            "), _T("L+08 48 8B 89 ? 02 00 00 E8 ? ? ? ? 49 8B 8D C8 04 00 00 84 C0 0F 94 C2 E8"), _T("// 26"),
	_T("ADDR_GETNEWMARK                                     "), _T("F-0B 4C 8B 49 70 4C 8D 51 68 48 8B C2 48 C1 F8 20 44 6B C0 17 48 63 41 78 48 FF C8 45 03 C3 49 63 D0"), _T("// 27"),
	_T("ADDR_ATTENDANCE_TEMP                                "), _T("L-1C 48 89 83 98 04 00 00 33 C0 48 89 83 98 04 00 00 48 89 83 A0 04 00 00"), _T("// 28 ULHWidget_Attendance_Container -> above -> 3rd + L+28 function goto -> L+19 function goto"),
	_T("ADDR_ATTENDANCE_CONDITION_TEMP                      "), _T("L-1C 48 89 83 98 04 00 00 33 C0 48 89 83 C8 04 00 00 48 89 83 D0 04 00 00"), _T("// 29 ULHWidget_Attendance_Condition_Container -> 3rd + L+28 function toto -> L+19 function goto "),
	_T("ADDR_MISSION_TEMP                                   "), _T("L-1C 48 89 83 98 04 00 00 33 C0 48 89 83 A0 04 00 00 48 89 83 A8 04 00 00 48 83 C4 20"), _T("// 30 LHWidget_Event_Mission_Container"),
	_T("ADDR_MISSION_DAY_TEMP                               "), _T("L-2C 48 89 83 B0 04 00 00 48 89 83 F8 04 00 00 48 89 83 00 05 00 00 48 89 83 08 05 00 00 48 89 83 10 05 00 00"), _T("// 31"),
	_T("ADDR_GETREPATEQUESTDOINGINFO                        "), _T("F+00 8B 81 F0 02 00 00 4C 63 DA 48 8B D1 3B 81 1C 03 00 00 74 ? 4C 63 89 30 03 00 00 4C 8D 91 20 03 00 00 4D 8B 42 08"), _T("// 32"),
	_T("ADDR_GETMAINQUESTINFO                               "), _T("L+19 8B 93 3C 0B 00 00 85 D2 74 ? 48 8B 0D ? ? ? ? 48 8B 89 98 01 00 00"), _T("// 33 QuestTable.tbl -> 45th + 220L"),
	_T("    OFFSET_QUESTINFOSTART1                          "), _T("B-32 8B C8 83 F8 FF 74 ? 4C 8B 42 68 90 48 63 D1 48 8D 0C D2 45 39 1C C8 74 ? 41 8B 4C C8 40"), _T("// 0x000000000070"),
	_T("    OFFSET_QUESTINFOSTART2                          "), _T("D-29 8B C8 83 F8 FF 74 ? 4C 8B 42 68 90 48 63 D1 48 8D 0C D2 45 39 1C C8 74 ? 41 8B 4C C8 40"), _T("// 0x00000000009C"),
	_T("    OFFSET_QUESTINFOBRANCHCOUNT                     "), _T("D-20 8B C8 83 F8 FF 74 ? 4C 8B 42 68 90 48 63 D1 48 8D 0C D2 45 39 1C C8 74 ? 41 8B 4C C8 40"), _T("// 0x0000000000B0"),
	_T("    OFFSET_QUESTINFOBRANCHSTART                     "), _T("D-19 8B C8 83 F8 FF 74 ? 4C 8B 42 68 90 48 63 D1 48 8D 0C D2 45 39 1C C8 74 ? 41 8B 4C C8 40"), _T("// 0x0000000000A0"),
	_T("    OFFSET_QUESTINFOSTART                           "), _T("B+0A 8B C8 83 F8 FF 74 ? 4C 8B 42 68 90 48 63 D1 48 8D 0C D2 45 39 1C C8 74 ? 41 8B 4C C8 40"), _T("// 0x000000000068"),
	_T("    OFFSET_QUESTINFONEXT                            "), _T("B+1D 8B C8 83 F8 FF 74 ? 4C 8B 42 68 90 48 63 D1 48 8D 0C D2 45 39 1C C8 74 ? 41 8B 4C C8 40"), _T("// 0x000000000040"),
	_T("//"), _T(""), _T(""),

	_T("ADDR_GETSUBQUESTINFO                                "), _T("L-0D 41 80 7E 4C 02 0F 85 ? ? ? ? 48 8B 86 E0 04 00 00 48 8B 18 E8 ? ? ? ? 41 B8 9F 89 0C 00"), _T("// 34"),
	_T("ADDR_SETMANUALTARGET                                "), _T("F-23 48 81 C1 28 06 00 00 48 8B 01 FF 50 68 84 C0 0F 85 ? ? ? ? 48 8B 0D ? ? ? ? 48 8B 89 ? 02 00 00"), _T("// 35"),
	_T("ADDR_GETMAXREPEATEQUEST                             "), _T("L+26 48 8B 89 ? 02 00 00 E8 ? ? ? ? 84 C0 0F 84 ? ? ? ? 48 8B 0D ? ? ? ? 48 8B 99"), _T("// 36"),
	_T("ADDR_FREEMEMORY                                     "), _T("L+27 BB 03 00 00 00 48 8D 3D ? ? ? ? 66 66 0F 1F 84 00 00 00 00 00 48 8B 4F F0"), _T("// 37"),
	_T("ADDR_GETSTORECURCOUNT                               "), _T("F-0E 8B 81 78 04 00 00 48 83 C4 50 5D C3"), _T("// 38"),
	_T("ADDR_GETQUESTCOMPLETEDSTATE                         "), _T("L+0B 8B 57 58 48 8B 89 98 01 00 00 E8 ? ? ? ? BB 7D 35 0C 00 EB"), _T("// 39"),
	_T("ADDR_GETQUESTACCEPTABLE                             "), _T("L+3F 48 8B 83 F0 04 00 00 48 8B 0D ? ? ? ? 8B 58 28 8B D3 48 8B 89 98 01 00 00 E8"), _T("// 40"),
	_T("ADDR_GETBUFFITEMINFO                                "), _T("F+00 40 53 8B 81 28 05 00 00 48 8B DA 4C 8B D9 3B 81 54 05 00 00"), _T("// 41"),
	_T("ADDR_GETINSTANCEMSG                                 "), _T(""), _T("// 42 // Meesage is empty를 호출하는 함수위치에서부터 올라가면서 맨 처음 호출되는 sub_함수의 첫 주소"),
	_T("ADDR_WIDGET_ISSAMEANIMATION                         "), _T("F-09 48 8B 81 78 01 00 00 48 63 89 80 01 00 00 4C 8D 04 C8 49 3B C0 74 ? 48 8B 08 48 39 91 08 04 00 00"), _T("// 43"),
	_T("ADDR_UNSLEEPMODE                                    "), _T(""), _T("// 44 // F-3F4 48 8B CB FF 90 D0 04 00 00 89 B7 50 08 00 00 40 88 B7 4C 08 00 00 40 88 B7 54 08 00 00"),
	_T("ADDR_ADDSKILLSHOOT                                  "), _T("F-B6 48 8B CB FF 90 C8 09 00 00 48 85 C0 74 ? 48 8B 03 48 8B CB FF 90 C8 09 00 00 8B 4F 38"), _T("// 45"),
	_T("ADDR_ADDPLAYER                                      "), _T("L+2E 4C 89 7C 24 50 4C 69 F8 ? 01 00 00 0F 29 74 24 40 0F 57 F6 4C 03 FF 49 3B FF"), _T("// 46"),
	_T("ADDR_DAILYPACKAGE_TEMP                              "), _T("L-38 48 8D 8B 70 05 00 00 48 89 BB 60 05 00 00 48 89 BB 68 05 00 00"), _T("// 47"),
	_T("ADDR_DOUBLEODINPASS_TEMP                            "), _T("L-09 48 8D 8B 90 05 00 00 48 8D 05 ? ? ? ? 48 89 BB 90 04 00 00 48 89 83 08 01 00 00 48 89 BB 98 04 00 00"), _T("// 48 LHWidget_BM_OdinDoublePass_Container -> 3rd goto-> Engine에서 2줄우 -> L+2E에서 3줄우"),
	_T("ADDR_GETEQUIPITEM                                   "), _T("L+10 48 8B 89 E0 0B 00 00 B2 01 ? ? ? ? ? ? E8 ? ? ? ? 48 8B F8"), _T("// 49 ItemTable.tbl 79#"),
	_T("ADDR_ISEQUIPITEMCOMPARE                             "), _T("L+44 3C 03 74 ? 48 8B 8F 18 05 00 00 E8 ? ? ? ? 80 78 4A 6E 74 ? 48 8B 8F 18 05 00 00"), _T("// 50"),
	_T("ADDR_GETITEMCATEOGORY                               "), _T("L+21 48 8B 87 C0 00 00 00 80 78 4A 6E 0F 84 ? ? ? ? 48 8B 9F C0 00 00 00 0F B6 53 4A 0F B6 4B 49"), _T("// 51"),
	_T("ADDR_CLOSEUI                                        "), _T("L+26 48 8B 8F 40 04 00 00 33 DB 48 81 C1 C8 03 00 00 89 59 08 39 59 0C 74"), _T("// 52 // &ULHWidget_Alchemy_AutoCheckPopup::OnClicked_Close"),
	_T("OFFSET_EVENTITEMINFO                                "), _T("D+14 BA D5 FD FF FF 48 8D 4D F8 48 8B F0 E8 ? ? ? ? 49 8B 8D 30 04 00 00 48 8B F8 8B 51 14 48 8D 4D 18"), _T("// 0x000000000430"),
	_T("OFFSET_EVENTITEMMAX                                 "), _T("B+1D BA D5 FD FF FF 48 8D 4D F8 48 8B F0 E8 ? ? ? ? 49 8B 8D 30 04 00 00 48 8B F8 8B 51 14 48 8D 4D 18"), _T("// 0x000000000014"),
	_T("OFFSET_EVENTITEMCURCNT                              "), _T("D+32 BA D5 FD FF FF 48 8D 4D F8 48 8B F0 E8 ? ? ? ? 49 8B 8D 30 04 00 00 48 8B F8 8B 51 14 48 8D 4D 18"), _T("// 0x000000000080"),
	_T("BOFFSET_EVENTITEMCURCNT                             "), _T("F+11 BA D5 FD FF FF 48 8D 4D F8 48 8B F0 E8 ? ? ? ? 49 8B 8D 30 04 00 00 48 8B F8 8B 51 14 48 8D 4D 18"), _T(""),
	_T("//"), _T(""), _T(""),

	_T("ADDR_SENDMOVEPACKET                                 "), _T("F-5E 48 8B 89 88 01 00 00 48 85 C9 0F 84 ? ? ? ? E8 ? ? ? ? 89 43 2C 85 C0"), _T("// 53"),
	_T("ADDR_MAKEMOVEPACKET                                 "), _T("F-24 66 C7 43 28 00 00 48 89 03 33 C0 89 43 2C 89 43 48 66 89 43 4C 8D 48 20"), _T("// 54"),
	_T("ADDR_RESETCHARPOS                                   "), _T("L+1F 0F C6 C0 55 48 8B CB F3 0F 58 83 F4 07 00 00"), _T("// 55"),
	_T("ADDR_GETSTOREMAXCOUNT                               "), _T("L-38 41 8B 85 78 04 00 00 89 44 24 30 41 39 6C 24 08 0F 8E ? ? ? ? 33 F6 66 66 66 0F 1F 84 00 00"), _T("// 56"),
	_T("ADDR_CHECKMIMIRPOINT                                "), _T("L+29 48 8B 8F B8 04 00 00 E8 ? ? ? ? 48 8B 0D ? ? ? ? 48 8B 40 60 48 8B 89 A8 01 00 00 8B 50 08 0F AF 97 C8 04 00 00"), _T("// 57"),
	_T("//"), _T(""), _T(""),

	_T("ADDR_GUARD_DATA                                     "), _T("L-2E 41 B8 18 01 00 00 48 8D 4C 24 34 E8"), _T("// 58"),
	_T("ADDR_GUARD_GETFUNC                                  "), _T("L+40 48 8D 41 FE 48 85 DB BA 08 02 00 00 48 0F 45 C1 48 8D 8C 24 30 02 00 00 66 44 89 30"), _T("// 59"),
	_T("//"), _T(""), _T(""),

	_T("ADDR_SendSecurityLog                                "), _T(""), _T("// 60 // [SendSecurityLog] Log => %s"),
	_T("ADDR_SendWindowSizeLog                              "), _T("F-0F 48 8D 99 20 01 00 00 48 8B 03 48 63 53 08 48 8B FA 4C 8D 04 02 49 3B C0 74"), _T("// 61"),
	_T("ADDR_CheckSecurityDetections                        "), _T("L+08 48 8B 89 ? 03 00 00 E8 ? ? ? ? 84 C0 0F 85 ? ? ? ? 48 8B 0D ? ? ? ? 48 8B 89 80 01 00 00 E8"), _T("// 62"),
	_T("ADDR_SecurityMgrTick                                "), _T("F-79 F3 0F 58 B7 E0 00 00 00 0F 2F 77 0C F3 0F 11 B7 E0 00 00 00 0F 86 ? ? ? ? 48 8D 4F D8"), _T("// 63"),
	_T("//"), _T(""), _T(""),

	_T("ADDR_SELECT_WEAPONSHAPE                             "), _T("F-22 48 8B 92 38 04 00 00 48 8D 4C 24 30 E8 ? ? ? ? 48 8B D0 48 8D 8F 48 05 00 00 E8"), _T("// 64"),
	_T("ADDR_MOVECOMPONENTTEMPLATE                          "), _T("L+0A 80 A3 70 07 00 00 FD 48 8D 05 ? ? ? ? 48 89 03 33 C9 48 8D 05 ? ? ? ? C7 83 20 07 00 00 00 00"), _T("// 65"),
	_T("ADDR_GRAPHIC_MANAGER                                "), _T("L-04 41 BF FF FF FF FF 48 8B B8 40 0C 00 00 48 63 80 48 0C 00 00 48 8D 34 C7"), _T("// 66"),
	_T("ADDR_GETPLAYERSIMPLEINFO                            "), _T("L-09 48 8D 8F B8 02 00 00 48 8D 05 ? ? ? ? 48 89 87 18 02 00 00 48 8D 05 ? ? ? ? 48 89 87 20 02 00 00"), _T("// 67"),
	_T("ADDR_ATTENDANCE_EXTENDED_TEMP                       "), _T("L-1F 48 89 83 98 04 00 00 33 C0 48 89 83 C0 04 00 00 48 89 83 C8 04 00 00 48 89 83 D0 04 00 00 48 89 83 D8 04 00 00 48 89 83 E8 04 00 00"), _T("// 68 LHWidget_Attendance_Extended_Container -> 3rd -> L+28 goto -> L+19 -> goto"),
	_T("ADDR_ID_HASHVALUE                                   "), _T(""), _T("// 69"),
	_T("//"), _T(""), _T(""),
	_T("//"), _T(""), _T(""),
	
	_T("OFFSET_INVENWIDGETID                                "), _T("D+49 4C 8B 81 A8 01 00 00 4D 85 C0 74 ? 49 8B 88 ? 01 00 00 48 85 C9"), _T("// 0x00000000006A"),
	_T("BOFFSET_INVENWIDGETID                               "), _T("F+48 4C 8B 81 A8 01 00 00 4D 85 C0 74 ? 49 8B 88 ? 01 00 00 48 85 C9"), _T(""),
	
	_T("OFFSET_ITEMCOUNT                                    "), _T(""), _T("// 0x000000000038"),
	_T("BOFFSET_ITEMCOUNT                                   "), _T("L+37 48 8B ? ? ? 00 00 48 8B ? ? ? 00 00 E8 ? ? ? ? 48 8B 0D ? ? ? ? F3 0F 10 81 98 08 00 00"), _T(""),
	
	_T("OFFSET_LHCharacterMgr                               "), _T("D+09 33 D2 4C 8B 46 28 48 8B 88 ? 01 00 00 48 8B 99 ? 01 00 00 48 8B CB E8"), _T("// 0x0000000001A8"),
	_T("BOFFSET_LHCharacterMgr                              "), _T("F+06 33 D2 4C 8B 46 28 48 8B 88 ? 01 00 00 48 8B 99 ? 01 00 00 48 8B CB E8"), _T(""),
	
	_T("OFFSET_ITEMDETAIL                                   "), _T(""), _T("// 0x000000000028"),
	_T("BOFFSET_ITEMDETAIL                                  "), _T("L+48 49 8D 8E 40 04 00 00 48 89 BC 24 80 00 00 00 4C 89 64 24 78 4C 89 6C 24 70 45 33 ED 4C 89 7C 24 68 41 8B F5"), _T(""),
	
	_T("OFFSET_ITEMLOCKED                                   "), _T(""), _T("// 0x000000000028"),
	_T("OFFSET_ITEMBELONG                                   "), _T("B+46 48 8B 8F 70 04 00 00 E8 ? ? ? ? 84 C0 74 ? 40 80 FE 01 49 8D B5 30 05 00 00 74 ? 49 8D B5 40 05 00 00"), _T("// 0x000000000040"),
	_T("BOFFSET_ITEMBELONG                                  "), _T("F+44 48 8B 8F 70 04 00 00 E8 ? ? ? ? 84 C0 74 ? 40 80 FE 01 49 8D B5 30 05 00 00 74 ? 49 8D B5 40 05 00 00"), _T(""),
	
	_T("OFFSET_UNPACKITEMMAXCOUNT                           "), _T("D+02 8B 83 CC 04 00 00 48 8B CB 89 83 C8 04 00 00 48 8B 5C 24 30"), _T("// 0x0000000004CC"),
	_T("OFFSET_UNPACKITEMCURCOUNT                           "), _T("D+0B 8B 83 CC 04 00 00 48 8B CB 89 83 C8 04 00 00 48 8B 5C 24 30"), _T("// 0x0000000004C8"),
	_T("BOFFSET_UNPACKITEMCURCOUNT                          "), _T("F+00 8B 83 CC 04 00 00 48 8B CB 89 83 C8 04 00 00 48 8B 5C 24 30"), _T(""),
	
	_T("OFFSET_ENCHANTSELECTEDITEM                          "), _T("D+03 48 39 9F D0 05 00 00 75 ? 48 8B CB E8 ? ? ? ? 0F B6 40 14 38 87 E0 05 00 00"), _T("// 0x0000000005D0"),
	_T("OFFSET_ENCHANTSELECTEDSCROLLITEM                    "), _T("D+6B 48 39 9F D0 05 00 00 75 ? 48 8B CB E8 ? ? ? ? 0F B6 40 14 38 87 E0 05 00 00"), _T("// 0x0000000005D8"),
	_T("BOFFSET_ENCHANTSELECTEDSCROLLITEM                   "), _T("F+00 48 39 9F D0 05 00 00 75 ? 48 8B CB E8 ? ? ? ? 0F B6 40 14 38 87 E0 05 00 00"), _T(""),
	
	_T("OFFSET_QUESTTABLE                                   "), _T("B+2F 88 87 ? 05 00 00 48 89 B7 68 05 00 00 8B 06 89 87 ? 05 00 00 4C 89 A7 70 05 00 00"), _T("// 0x000000000028"),
	_T("BOFFSET_QUESTTABLE                                  "), _T("F+2C 88 87 ? 05 00 00 48 89 B7 68 05 00 00 8B 06 89 87 ? 05 00 00 4C 89 A7 70 05 00 00"), _T(""),
	
	_T("OFFSET_QUESTINFO                                    "), _T("B+66 88 87 ? 05 00 00 48 89 B7 68 05 00 00 8B 06 89 87 ? 05 00 00 4C 89 A7 70 05 00 00"), _T("// 0x000000000028"),
	_T("BOFFSET_QUESTINFO                                   "), _T("F+63 88 87 ? 05 00 00 48 89 B7 68 05 00 00 8B 06 89 87 ? 05 00 00 4C 89 A7 70 05 00 00"), _T(""),
	
	_T("OFFSET_QUESTSTATE                                   "), _T("B+2F 48 8B 8E A8 04 00 00 89 85 E0 01 00 00 48 8B 01 FF 90 ? ? ? ? 41 8B 56 28"), _T("// 0x000000000005"),
	_T("BOFFSET_QUESTSTATE                                  "), _T("F+2D 48 8B 8E A8 04 00 00 89 85 E0 01 00 00 48 8B 01 FF 90 ? ? ? ? 41 8B 56 28"), _T("// Icon_QuestMain03"),
	
	_T("OFFSET_PLAYERAUTOSTATE                              "), _T("D+12 48 8B 88 ? 10 00 00 48 85 C9 0F 84 ? ? ? ? 80 B9 D0 00 00 00 02"), _T("// 0x0000000000D0"),
	_T("BOFFSET_PLAYERAUTOSTATE                             "), _T("F+10 48 8B 88 ? 10 00 00 48 85 C9 0F 84 ? ? ? ? 80 B9 D0 00 00 00 02"), _T(""),
	
	_T("OFFSET_INVENCURQUICKITEM                            "), _T("D+0E 89 91 90 04 00 00 8B F2 48 8B D9 4C 89 81 88 04 00 00 33 D2"), _T("// 0x000000000488"),
	_T("BOFFSET_INVENCURQUICKITEM                           "), _T("F+0B 89 91 90 04 00 00 8B F2 48 8B D9 4C 89 81 88 04 00 00 33 D2"), _T(""),
	
	_T("OFFSET_QUICKSLOTCOMMONLIST                          "), _T("D+43 49 8B 86 98 04 00 00 48 8B 0C E8 49 8B 86 90 04 00 00 48 85 C9"), _T("// 0x000000000398"),
	_T("BOFFSET_QUICKSLOTCOMMONLIST                         "), _T("F+40 49 8B 86 98 04 00 00 48 8B 0C E8 49 8B 86 90 04 00 00 48 85 C9"), _T(""),
	
	_T("OFFSET_TARGETFINDER_MANUALSEL                       "), _T("B+03 48 83 C1 54 E8 ? ? ? ? 84 C0 74 ? 33 D2 48 8B CB 48 83 C4 20"), _T("// 0x000000000054"),
	_T("BOFFSET_TARGETFINDER_MANUALSEL                      "), _T("F+00 48 83 C1 54 E8 ? ? ? ? 84 C0 74 ? 33 D2 48 8B CB 48 83 C4 20"), _T(""),
	
	_T("OFFSET_TARGETFINDER_AUTOTARGET                      "), _T("B-16 48 8D 4E 64 E8 ? ? ? ? 48 8B 4E 28 48 8B D8 48 81 C1 28 02 00 00"), _T("// 0x000000000064"),
	_T("BOFFSET_TARGETFINDER_AUTOTARGET                     "), _T("F-19 48 8D 4E 64 E8 ? ? ? ? 48 8B 4E 28 48 8B D8 48 81 C1 28 02 00 00"), _T(""),

	_T("OFFSET_TARGETFINDER_AUTOINTER                       "), _T("B+0D 48 83 EC 20 4C 8B F1 48 8B FA 48 83 C1 6C E8 ? ? ? ? 84 C0 0F 84 ? ? ? ? 49 8D 4E 54"), _T("// 0x00000000006C"),
	_T("BOFFSET_TARGETFINDER_AUTOINTER                      "), _T("F+0A 48 83 EC 20 4C 8B F1 48 8B FA 48 83 C1 6C E8 ? ? ? ? 84 C0 0F 84 ? ? ? ? 49 8D 4E 54"), _T(""),

	_T("OFFSET_TARGETFINDER_BOSSTARGET                      "), _T("B+06 48 8B D0 48 8D 4E 74 E8 ? ? ? ? 84 C0 0F 84 ? ? ? ? 48 8B 54 24 40 48 8D 4E 74"), _T("// 0x000000000074"),
	_T("BOFFSET_TARGETFINDER_BOSSTARGET                     "), _T("F+03 48 8B D0 48 8D 4E 74 E8 ? ? ? ? 84 C0 0F 84 ? ? ? ? 48 8B 54 24 40 48 8D 4E 74"), _T(""),

	_T("OFFSET_SELECTEDTAB                                  "), _T("D+0F 48 83 EC 30 41 0F B6 E9 8B F2 48 8B D9 39 91 F4 01 00 00 75 ? 45 84 C0 75 ? 48 8B 81 48 01 00 00 48 63 89 50 01 00 00 48 C1 E1 04"), _T("// 0x0000000001F4"),
	_T("BOFFSET_SELECTEDTAB                                 "), _T("F+0D 48 83 EC 30 41 0F B6 E9 8B F2 48 8B D9 39 91 F4 01 00 00 75 ? 45 84 C0 75 ? 48 8B 81 48 01 00 00 48 63 89 50 01 00 00 48 C1 E1 04"), _T(""),

	_T("OFFSET_SHOPITEMINFO                                 "), _T("D+03 48 8B 83 D0 04 00 00 0F 85 ? ? ? ? 33 FF 8B F7 48 85 C0 74 ? 8B 70 60"), _T("// 0x0000000004D0"),
	_T("BOFFSET_SHOPITEMINFO                                "), _T("F+00 48 8B 83 D0 04 00 00 0F 85 ? ? ? ? 33 FF 8B F7 48 85 C0 74 ? 8B 70 60"), _T(""),

	_T("OFFSET_SHOPBUYTEDCOUNT                              "), _T("D+02 2B 83 CC 04 00 00 85 C9 0F 84 ? ? ? ? 85 C0 0F 8F ? ? ? ? 48 8B 8B 90 04 00 00"), _T("// 0x0000000004CC"),
	_T("BOFFSET_SHOPBUYTEDCOUNT                             "), _T("F+00 2B 83 CC 04 00 00 85 C9 0F 84 ? ? ? ? 85 C0 0F 8F ? ? ? ? 48 8B 8B 90 04 00 00"), _T(""),

	_T("OFFSET_PURCHAGECOUNT                                "), _T("D+03 4C 63 81 D8 04 00 00 48 8B 91 E8 04 00 00 4C 3B C2 7D ? 41 8D 40 64"), _T("// 0x0000000004D8"),
	_T("OFFSET_PURCHAGEMAXCOUNT                             "), _T("D+0A 4C 63 81 D8 04 00 00 48 8B 91 E8 04 00 00 4C 3B C2 7D ? 41 8D 40 64"), _T("// 0x0000000004E8"),
	_T("BOFFSET_PURCHAGEMAXCOUNT                            "), _T("F+00 4C 63 81 D8 04 00 00 48 8B 91 E8 04 00 00 4C 3B C2 7D ? 41 8D 40 64"), _T(""),

	_T("OFFSET_SELLITEMLIST                                 "), _T("D+03 48 8B B9 90 05 00 00 4C 89 A4 24 20 03 00 00 4C 89 AC 24 18 03 00 00 45 33 ED"), _T("// 0x000000000590"),
	_T("BOFFSET_SELLITEMLIST                                "), _T("F+00 48 8B B9 90 05 00 00 4C 89 A4 24 20 03 00 00 4C 89 AC 24 18 03 00 00 45 33 ED"), _T(""),

	_T("OFFSET_MYSCROLLBOXITEM                              "), _T(""), _T("// 0x000000000898"),
	_T("OFFSET_MYSCROLLBOX_ISEMPTY                          "), _T(""), _T("// 0x00000000088C"),
	_T("OFFSET_MYSCROLLBOXITEMCOUNT                         "), _T(""), _T("// 0x000000000008"),
	_T("OFFSET_MYSCROLLBOXITEMCHECK                         "), _T(""), _T("// 0x00000000000C"),
	_T("BOFFSET_MYSCROLLBOXITEMCHECK                        "), _T(""), _T("// 4C 8D B6 98 08 00 00 44 89 A6 8C 08 00 00"),

	_T("OFFSET_STOREITEMINVENLIST                           "), _T("D+1A 48 8B 88 A8 01 00 00 48 8B 89 ? ? 00 00 48 85 C9 0F 84 ? ? ? ? 48 8B 86 40 05 00 00"), _T("// 0x000000000540"),
	_T("BOFFSET_STOREITEMINVENLIST                          "), _T("F+17 48 8B 88 A8 01 00 00 48 8B 89 ? ? 00 00 48 85 C9 0F 84 ? ? ? ? 48 8B 86 40 05 00 00"), _T(""),

	_T("OFFSET_SOTREITEMLIST                                "), _T("D+1A 48 8B 88 A8 01 00 00 48 8B 89 ? ? 00 00 48 85 C9 0F 84 ? ? ? ? 49 8B 85 30 05 00 00"), _T("// 0x000000000530"),
	_T("BOFFSET_SOTREITEMLIST                               "), _T("F+17 48 8B 88 A8 01 00 00 48 8B 89 ? ? 00 00 48 85 C9 0F 84 ? ? ? ? 49 8B 85 30 05 00 00"), _T(""),

	_T("OFFSET_QUICKSLOTINFO                                "), _T("B+1A B2 0C 48 8B 88 A8 01 00 00 48 8B 89 ? ? 00 00 E8 ? ? ? ? EB ? 0F 10 47 08"), _T("// 0x000000000008"),
	_T("BOFFSET_QUICKSLOTINFO                               "), _T("F+17 B2 0C 48 8B 88 A8 01 00 00 48 8B 89 ? ? 00 00 E8 ? ? ? ? EB ? 0F 10 47 08"), _T(""),

	_T("OFFSET_CURRENTSUMINFO                               "), _T("D+1A B2 15 48 8B 89 ? 02 00 00 E8 ? ? ? ? 48 FF C3 48 83 ? 01 75 ? 48 8B 87 B8 00 00 00"), _T("// 0x0000000000B8"),
	_T("BOFFSET_CURRENTSUMINFO                              "), _T("F+17 B2 15 48 8B 89 ? 02 00 00 E8 ? ? ? ? 48 FF C3 48 83 ? 01 75 ? 48 8B 87 B8 00 00 00"), _T(""),

	_T("OFFSET_BTNSTATE                                     "), _T("D+0E 48 83 EC 50 0F B6 DA 48 8D 54 24 20 88 99 C3 00 00 00 E8 ? ? ? ? 4C 8B 44 24 20 4D 85 C0"), _T("// 0x0000000000C3"),
	_T("BOFFSET_BTNSTATE                                    "), _T("F+0C 48 83 EC 50 0F B6 DA 48 8D 54 24 20 88 99 C3 00 00 00 E8 ? ? ? ? 4C 8B 44 24 20 4D 85 C0"), _T(""),

	_T("OFFSET_AVATARALLOPENED                              "), _T("D+09 48 8D BD B8 05 00 00 C6 85 EA 05 00 00 01 44 89 67 08 44 39 67 0C"), _T("// 0x0000000005EA"),
	_T("BOFFSET_AVATARALLOPENED                             "), _T("F+07 48 8D BD B8 05 00 00 C6 85 EA 05 00 00 01 44 89 67 08 44 39 67 0C"), _T(""),

	_T("OFFSET_SKILLLEVEL                                   "), _T("D+03 44 89 B7 38 04 00 00 8B 46 28 45 85 F6 89 87 3C 04 00 00 48 8B CE 0F 99 C0 44 89 BF 40 04 00 00 88 87 49 04 00 00"), _T("// 0x000000000438"),
	_T("OFFSET_SKILLLISTITEMID                              "), _T("D+0F 44 89 B7 38 04 00 00 8B 46 28 45 85 F6 89 87 3C 04 00 00 48 8B CE 0F 99 C0 44 89 BF 40 04 00 00 88 87 49 04 00 00"), _T("// 0x00000000043C"),
	_T("OFFSET_SKILLLEVELLEARN                              "), _T("D+22 44 89 B7 38 04 00 00 8B 46 28 45 85 F6 89 87 3C 04 00 00 48 8B CE 0F 99 C0 44 89 BF 40 04 00 00 88 87 49 04 00 00"), _T("// 0x000000000449"),
	_T("BOFFSET_SKILLLEVELLEARN                             "), _T("F+00 44 89 B7 38 04 00 00 8B 46 28 45 85 F6 89 87 3C 04 00 00 48 8B CE 0F 99 C0 44 89 BF 40 04 00 00 88 87 49 04 00 00"), _T(""),

	_T("OFFSET_ITEMDETAILINFO                               "), _T("D+0D 49 8B DD 48 8B 87 ? 09 00 00 48 8B 8B E0 00 00 00 48 89 B4 24 80 01 00 00"), _T("// 0x0000000000E0"),
	_T("BOFFSET_ITEMDETAILINFO                              "), _T("F+0A 49 8B DD 48 8B 87 ? 09 00 00 48 8B 8B E0 00 00 00 48 89 B4 24 80 01 00 00"), _T(""),

	_T("OFFSET_SHOPITEINFORECORD                            "), _T("D+12 41 B0 03 48 8B CB 44 8B 48 50 E8 ? ? ? ? 49 8B 9D D8 04 00 00 E8 ? ? ? ? 44 8B 43 40"), _T("// 0x0000000004D8"),
	_T("BOFFSET_SHOPITEINFORECORD                           "), _T("F+0F 41 B0 03 48 8B CB 44 8B 48 50 E8 ? ? ? ? 49 8B 9D D8 04 00 00 E8 ? ? ? ? 44 8B 43 40"), _T("// C_ItemNameText -> -18DL"),

	_T("OFFSET_OPTION_EQUIPGETGRADE                         "), _T(""), _T("// 0x000000000073"),
	_T("OFFSET_OPTION_TARGETRANGE                           "), _T("B+0A 48 8B 88 ? 02 00 00 0F B6 41 74 6B C0 64 48 83 C4 28 C3"), _T("// 0x000000000074"),
	_T("OFFSET_OPTION_HPPOTION                              "), _T(""), _T("// 0x000000000075"),
	_T("BOFFSET_OPTION_HPPOTION                             "), _T("F+07 48 8B 88 ? 02 00 00 0F B6 41 74 6B C0 64 48 83 C4 28 C3"), _T(""),

	_T("OFFSET_OPTION_MANNERMODE                            "), _T("B+1A 3C 11 74 ? 48 8B 05 ? ? ? ? 48 8B 88 ? 02 00 00 48 85 C9 74 ? 0F B6 71 79"), _T("// 0x000000000079"),
	_T("BOFFSET_OPTION_MANNERMODE                           "), _T("F+17 3C 11 74 ? 48 8B 05 ? ? ? ? 48 8B 88 ? 02 00 00 48 85 C9 74 ? 0F B6 71 79"), _T(""),

	_T("OFFSET_LHCHARACTER_TARGET                           "), _T("D+07 48 83 EC 20 48 8D B9 88 08 00 00 48 8B DA 48 8B CF"), _T("// 0x000000000888"),
	_T("BOFFSET_LHCHARACTER_TARGET                          "), _T("F+04 48 83 EC 20 48 8D B9 88 08 00 00 48 8B DA 48 8B CF"), _T(""),

	_T("OFFSET_CASHSHOP_MAINCATEGORY                        "), _T("D+0C 41 BD 1F 00 00 00 41 3B C1 44 89 89 ? ? 00 00 40 0F 95 C7"), _T("// 0x000000000524"),
	_T("BOFFSET_CASHSHOP_MAINCATEGORY                       "), _T("F+09 41 BD 1F 00 00 00 41 3B C1 44 89 89 ? ? 00 00 40 0F 95 C7"), _T(""),

	_T("OFFSET_CASHSHOP_SUBCATEGORY                         "), _T("D+0F 48 83 EC ? 8B 81 ? ? 00 00 45 33 F6 89 91 ? ? 00 00 48 8B F9"), _T("// 0x000000000528"),
	_T("BOFFSET_CASHSHOP_SUBCATEGORY                        "), _T("F+0D 48 83 EC ? 8B 81 ? ? 00 00 45 33 F6 89 91 ? ? 00 00 48 8B F9"), _T(""),

	_T("OFFSET_CASHSHOP_BUYLIMIT1                           "), _T("D+0C 33 C9 41 88 8D ? 07 00 00 4D 8D BD D0 05 00 00 49 8B CF"), _T("// 0x0000000005D0"),
	_T("BOFFSET_CASHSHOP_BUYLIMIT1                          "), _T("F+09 33 C9 41 88 8D ? 07 00 00 4D 8D BD D0 05 00 00 49 8B CF"), _T(""),

	_T("OFFSET_CASHSHOP_BUYLIMIT2                           "), _T("B-2B 41 8B 46 48 4D 8D 66 50 4C 8D 7E 50 89 46 48 4D 3B FC"), _T("// 0x000000000028"),
	_T("BOFFSET_CASHSHOP_BUYLIMIT2                          "), _T("F-2D 41 8B 46 48 4D 8D 66 50 4C 8D 7E 50 89 46 48 4D 3B FC"), _T(""),

	_T("OFFSET_QUESTCONTAINERQUESTID                        "), _T("D+02 8B 93 88 05 00 00 48 8B 89 98 01 00 00 48 83 C4 20"), _T("// 0x000000000588"),
	_T("BOFFSET_QUESTCONTAINERQUESTID                       "), _T("F+00 8B 93 88 05 00 00 48 8B 89 98 01 00 00 48 83 C4 20"), _T(""),

	_T("OFFSET_ACHIEVEMENTMGR_LISTCNT                       "), _T("B-86 B2 0C 4C 63 07 48 8B 89 ? 02 00 00 E8 ? ? ? ? 0F B6 4F 04 83 E9 01"), _T("// 0x000000000038"),
	_T("BOFFSET_ACHIEVEMENTMGR_LISTCNT                      "), _T("F-88 B2 0C 4C 63 07 48 8B 89 ? 02 00 00 E8 ? ? ? ? 0F B6 4F 04 83 E9 01"), _T(""),

	_T("OFFSET_ACHIEVEMENTMGR_LIST                          "), _T("B-50 B2 0C 4C 63 07 48 8B 89 ? 02 00 00 E8 ? ? ? ? 0F B6 4F 04 83 E9 01"), _T("// 0x000000000030"),
	_T("BOFFSET_ACHIEVEMENTMGR_LIST                         "), _T("F-53 B2 0C 4C 63 07 48 8B 89 ? 02 00 00 E8 ? ? ? ? 0F B6 4F 04 83 E9 01"), _T(""),

	_T("OFFSET_ACHIEVEMENT_SIZE                             "), _T(""), _T("// 0x000000000048"),
	_T("OFFSET_ACHIEVEMENT_PROGRESS                         "), _T(""), _T("// 0x000000000010"),
	_T("BOFFSET_ACHIEVEMENT_PROGRESS                        "), _T("F-48 B2 0C 4C 63 07 48 8B 89 ? 02 00 00 E8 ? ? ? ? 0F B6 4F 04 83 E9 01"), _T(""),

	_T("OFFSET_ENCHANTSELECTEDTAB                           "), _T("D+28 48 8D AC 24 60 FE FF FF 48 81 EC A0 02 00 00 ? ? ? ? ? ? ? 48 33 C4 48 89 85 90 01 00 00 0F B6 FA 48 8B D9 3A 91 20 06 00 00"), _T("// 0x000000000620"),
	_T("BOFFSET_ENCHANTSELECTEDTAB                          "), _T("F+26 48 8D AC 24 60 FE FF FF 48 81 EC A0 02 00 00 ? ? ? ? ? ? ? 48 33 C4 48 89 85 90 01 00 00 0F B6 FA 48 8B D9 3A 91 20 06 00 00"), _T(""),

	_T("OFFSET_REPEATEQUESTFINISHCNT                        "), _T("D+1A 48 8D 4D F7 33 F6 44 8B F0 4C 8B 8A 98 01 00 00"), _T("// 0x000000000388"),
	_T("BOFFSET_REPEATEQUESTFINISHCNT                       "), _T("F+17 48 8D 4D F7 33 F6 44 8B F0 4C 8B 8A 98 01 00 00"), _T(""),

	_T("OFFSET_REPEATQUESTID                                "), _T("D+03 48 8B 92 A0 04 00 00 48 89 91 C8 05 00 00 44 8B 80 B0 04 00 00"), _T("// 0x0000000004A0"),
	_T("OFFSET_SELECTEDREPEATQUEST                          "), _T("D+0A 48 8B 92 A0 04 00 00 48 89 91 C8 05 00 00 44 8B 80 B0 04 00 00"), _T("// 0x0000000005C8"),
	_T("BOFFSET_SELECTEDREPEATQUEST                         "), _T("F+00 48 8B 92 A0 04 00 00 48 89 91 C8 05 00 00 44 8B 80 B0 04 00 00"), _T(""),

	_T("OFFSET_REPEATEQUESTINFO                             "), _T("B+09 49 8B DC 49 63 17 48 8B 4B 30 E8 ? ? ? ? 48 8B F0 48 85 C0 0F 84 ? ? ? ? 48 8B 8F 78 04 00 00"), _T("// 0x000000000030"),
	_T("BOFFSET_REPEATEQUESTINFO                            "), _T("F+06 49 8B DC 49 63 17 48 8B 4B 30 E8 ? ? ? ? 48 8B F0 48 85 C0 0F 84 ? ? ? ? 48 8B 8F 78 04 00 00"), _T(""),

	_T("OFFSET_REPEATEQUETITEMCNT                           "), _T("B-DA 48 8B 87 20 05 00 00 B2 01 48 8B 0C 06 48 8B 01 ? ? ? ? ? ? FF C3 48 83 C5 30"), _T("// 0x000000000018"),
	_T("OFFSET_REPEATEQUETITEMSIZE                          "), _T("B+1B 48 8B 87 20 05 00 00 B2 01 48 8B 0C 06 48 8B 01 ? ? ? ? ? ? FF C3 48 83 C5 30"), _T("// 0x000000000030"),
	_T("OFFSET_REPEATEQUESTITEM                             "), _T("B-9E 48 8B 87 20 05 00 00 B2 01 48 8B 0C 06 48 8B 01 ? ? ? ? ? ? FF C3 48 83 C5 30"), _T("// 0x000000000010"),
	_T("BOFFSET_REPEATEQUESTITEM                            "), _T("F-DD 48 8B 87 20 05 00 00 B2 01 48 8B 0C 06 48 8B 01 ? ? ? ? ? ? FF C3 48 83 C5 30"), _T(""),

	_T("OFFSET_REPEATEQUESTRCVED                            "), _T("D+03 0F B6 81 A8 04 00 00 B3 01 48 8B F9 40 B6 04 3A C3 75 ? 48 8B 89 78 04 00 00"), _T("// 0x0000000004A8"),
	_T("BOFFSET_REPEATEQUESTRCVED                           "), _T("F+00 0F B6 81 A8 04 00 00 B3 01 48 8B F9 40 B6 04 3A C3 75 ? 48 8B 89 78 04 00 00"), _T(""),

	_T("OFFSET_REFRESHREPEATEQCOUNT                         "), _T("D+14 BA D5 FD FF FF 48 8D 4D 00 48 8B F8 E8 ? ? ? ? 41 8B 95 F8 05 00 00"), _T("// 0x0000000005F8"),
	_T("BOFFSET_REFRESHREPEATEQCOUNT                        "), _T("F+11 BA D5 FD FF FF 48 8D 4D 00 48 8B F8 E8 ? ? ? ? 41 8B 95 F8 05 00 00"), _T(""),

	_T("OFFSET_BUFFINFO                                     "), _T("B+18 3B 51 38 7F ? 48 8B 49 30 48 39 04 D1 74 ? 49 8B DD 49 8B 16 48 8B 4B 48"), _T("// 0x000000000048"),
	_T("BOFFSET_BUFFINFO                                    "), _T("F+15 3B 51 38 7F ? 48 8B 49 30 48 39 04 D1 74 ? 49 8B DD 49 8B 16 48 8B 4B 48"), _T(""),

	_T("OFFSET_DUNGEONLIST_PARTY                            "), _T("B-96 48 8B 4E 28 E8 ? ? ? ? 48 85 C0 74 ? 80 B8 80 00 00 00 04 75 ? 44 38 B0 90 00 00 00"), _T("// 0x000000000030"),
	_T("OFFSET_DUNGEONLIST_PARTYSIZE                        "), _T("B+63 48 8B 4E 28 E8 ? ? ? ? 48 85 C0 74 ? 80 B8 80 00 00 00 04 75 ? 44 38 B0 90 00 00 00"), _T("// 0x000000000018"),
	_T("BOFFSET_DUNGEONLIST_PARTYSIZE                       "), _T("F-99 48 8B 4E 28 E8 ? ? ? ? 48 85 C0 74 ? 80 B8 80 00 00 00 04 75 ? 44 38 B0 90 00 00 00"), _T(""),

	_T("OFFSET_DUNGEONLIST_ELITE                            "), _T("B+21 49 8D 8D 48 04 00 00 33 D2 E8 ? ? ? ? 48 8B 0D ? ? ? ? 33 F6 48 8B 81"), _T("// 0x000000000050"),
	_T("OFFSET_DUNGEONLIST_ELITESIZE                        "), _T(""), _T("// 0x000000000050"),
	_T("BOFFSET_DUNGEONLIST_ELITESIZE                       "), _T("F+1E 49 8D 8D 48 04 00 00 33 D2 E8 ? ? ? ? 48 8B 0D ? ? ? ? 33 F6 48 8B 81"), _T(""),

	_T("OFFSET_INTERACTIONTYPE                              "), _T("D+03 0F B6 81 60 04 00 00 3C 01 75 ?"), _T("// 0x000000000460"),
	_T("BOFFSET_INTERACTIONTYPE                             "), _T("F+00 0F B6 81 60 04 00 00 3C 01 75 ?"), _T(""),
	
	_T("OFFSET_SELECTEDWORLDID                              "), _T("D+02 89 B7 74 04 00 00 48 8B 8F 38 04 00 00 8B D6 E8 ? ? ? ? 80 BF 70 04 00 00 00"), _T("// 0x000000000474"),
	_T("BOFFSET_SELECTEDWORLDID                             "), _T("F+00 89 B7 74 04 00 00 48 8B 8F 38 04 00 00 8B D6 E8 ? ? ? ? 80 BF 70 04 00 00 00"), _T(""),

	_T("OFFSET_SELECTEDVOLUMAREA                            "), _T("D+02 89 91 28 05 00 00 48 8B D9 C6 81 B0 04 00 00 00 8B FA 48 C7 81 B4 04 00 00 FF"), _T("// 0x000000000528"),
	_T("BOFFSET_SELECTEDVOLUMAREA                           "), _T("F+00 89 91 28 05 00 00 48 8B D9 C6 81 B0 04 00 00 00 8B FA 48 C7 81 B4 04 00 00 FF"), _T(""),

	_T("OFFSET_WORLDMAPID                                   "), _T("D+02 89 B1 98 04 00 00 45 33 F6 48 8D 4C 24 30 4C 89 74 24 30 33 D2 48 C7 44 24 38 14 00 00"), _T("// 0x000000000498"),
	_T("BOFFSET_WORLDMAPID                                  "), _T("F+00 89 B1 98 04 00 00 45 33 F6 48 8D 4C 24 30 4C 89 74 24 30 33 D2 48 C7 44 24 38 14 00 00"), _T(""),

	_T("OFFSET_VOLUMEAREAINFO                               "), _T("B+79 89 B1 98 04 00 00 45 33 F6 48 8D 4C 24 30 4C 89 74 24 30 33 D2 48 C7 44 24 38 14 00 00"), _T("// 0x000000000030"),
	_T("BOFFSET_VOLUMEAREAINFO                              "), _T("F+76 89 B1 98 04 00 00 45 33 F6 48 8D 4C 24 30 4C 89 74 24 30 33 D2 48 C7 44 24 38 14 00 00"), _T(""),

	_T("OFFSET_PARTYDUNGEONFREECOUNT                        "), _T("D+09 48 8B 88 B0 01 00 00 8B 81 B0 02 00 00 48 8D 4D B8"), _T("// 0x0000000002B0"),
	_T("BOFFSET_PARTYDUNGEONFREECOUNT                       "), _T("F+07 48 8B 88 B0 01 00 00 8B 81 B0 02 00 00 48 8D 4D B8"), _T(""),

	_T("OFFSET_SELECTEDQUESTLISTITEM                        "), _T("D+03 48 8B 8E F0 05 00 00 48 85 C9 74 ? 48 3B CD 0F 84 ? ? ? ? 33 D2 E8"), _T("// 0x0000000005F0"),
	_T("BOFFSET_SELECTEDQUESTLISTITEM                       "), _T("F+00 48 8B 8E F0 05 00 00 48 85 C9 74 ? 48 3B CD 0F 84 ? ? ? ? 33 D2 E8"), _T(""),

	_T("OFFSET_QUESTCONTAINERQUESTRECORD                    "), _T("D+03 4C 89 B6 F0 04 00 00 48 89 BE F8 04 00 00 66 89 BE 00 05 00 00"), _T("// 0x0000000004F0"),
	_T("BOFFSET_QUESTCONTAINERQUESTRECORD                   "), _T("F+00 4C 89 B6 F0 04 00 00 48 89 BE F8 04 00 00 66 89 BE 00 05 00 00"), _T("// C_EfcQuest"),

	_T("OFFSET_ITEMCOLLECTIONANME                           "), _T("D+0F 48 8D 76 08 3B BB F8 04 00 00 7C ? 48 8B 8B 18 05 00 00 8B 51 40"), _T("// 0x000000000518"),
	_T("BOFFSET_ITEMCOLLECTIONANME                          "), _T("F+0C 48 8D 76 08 3B BB F8 04 00 00 7C ? 48 8B 8B 18 05 00 00 8B 51 40"), _T(""),

	_T("OFFSET_ITEMCONTAINERLV                              "), _T("D+02 89 87 ? ? 00 00 84 D2 75 ? 48 8B 01 B2 01"), _T("// 0x0000000005CC"),
	_T("BOFFSET_ITEMCONTAINERLV                             "), _T("F+00 89 87 ? ? 00 00 84 D2 75 ? 48 8B 01 B2 01"), _T(""),

	_T("OFFSET_CHECKPOPUPCHECKER                            "), _T("D+02 88 91 60 04 00 00 C3"), _T("// 0x000000000460"),
	_T("BOFFSET_CHECKPOPUPCHECKER                           "), _T("F+00 88 91 60 04 00 00 C3"), _T(""),

	_T("OFFSET_EXCHANGEDEPTH                                "), _T("D+03 0F B6 87 ? 06 00 00 FF C8 83 F8 08 0F 87"), _T("// 0x000000000618"),
	_T("BOFFSET_EXCHANGEDEPTH                               "), _T("F+00 0F B6 87 ? 06 00 00 FF C8 83 F8 08 0F 87"), _T(""),

	_T("OFFSET_EXCHANGEITEMCONID                            "), _T("D+03 41 8B 95 ? 06 00 00 48 8B CB E8 ? ? ? ? 48 89 85 08 01 00 00 4C 8B F0 48 85 C0"), _T("// 0x000000000658"),
	_T("OFFSET_EXCHANGEITEMENCHANT                          "), _T("D+3E 41 8B 95 ? 06 00 00 48 8B CB E8 ? ? ? ? 48 89 85 08 01 00 00 4C 8B F0 48 85 C0"), _T("// 0x000000000660"),
	_T("BOFFSET_EXCHANGEITEMENCHANT                         "), _T("F+00 41 8B 95 ? 06 00 00 48 8B CB E8 ? ? ? ? 48 89 85 08 01 00 00 4C 8B F0 48 85 C0"), _T("//&ULHWidget_Exchange_MultiBuyPopup::OnTapCloseButton 를 검색하여 aDS_4를 리용하는 두번째 함수"),

	_T("OFFSET_EXCHANGEITEMSELLINGCOUNT                     "), _T("D+03 44 8B 8F ? 06 00 00 ? ? ? ? ? ? ? 48 8D 4C 24 20 E8"), _T("// 0x000000000638"),
	_T("BOFFSET_EXCHANGEITEMSELLINGCOUNT                    "), _T("F+00 44 8B 8F ? 06 00 00 ? ? ? ? ? ? ? 48 8D 4C 24 20 E8"), _T(""),

	_T("OFFSET_EXCHANGEITEMTOTALTPRICE                      "), _T("D+04 66 0F 6E 97 ? 06 00 00 B2 02 66 0F 6E 87 ? 06 00 00 48 8B CF"), _T("// 0x0000000006B0"),
	_T("BOFFSET_EXCHANGEITEMTOTALTPRICE                     "), _T("F+00 66 0F 6E 97 ? 06 00 00 B2 02 66 0F 6E 87 ? 06 00 00 48 8B CF"), _T(""),

	_T("OFFSET_EXCHANGEITEMBUNCHCOUNT                       "), _T("D+0E 66 0F 6E 97 ? 06 00 00 B2 02 66 0F 6E 87 ? 06 00 00 48 8B CF"), _T("// 0x00000000065C"),
	_T("BOFFSET_EXCHANGEITEMBUNCHCOUNT                      "), _T("F+0A 66 0F 6E 97 ? 06 00 00 B2 02 66 0F 6E 87 ? 06 00 00 48 8B CF"), _T(""),

	_T("OFFSET_EXCHANGEITEMPIRCE                            "), _T("D+03 44 8B 81 60 06 00 00 48 8B D9 E8 ? ? ? ? 4C 8B 8B 38 06 00 00 4D 85 C9"), _T("// 0x000000000660"),
	_T("BOFFSET_EXCHANGEITEMPIRCE                           "), _T("F+00 44 8B 81 60 06 00 00 48 8B D9 E8 ? ? ? ? 4C 8B 8B 38 06 00 00 4D 85 C9"), _T(""),

	_T("OFFSET_EXCHANGEITEMCOUNT                            "), _T("D+03 44 8B 81 58 06 00 00 48 8B D9 E8 ? ? ? ? 48 8B CB 48 83 C4 20"), _T("// 0x000000000658"),
	_T("BOFFSET_EXCHANGEITEMCOUNT                           "), _T("F+00 44 8B 81 58 06 00 00 48 8B D9 E8 ? ? ? ? 48 8B CB 48 83 C4 20"), _T(""),

	_T("OFFSET_SEARCHEXCHANGEOPTION                         "), _T("D+0A 48 8D 97 A8 04 00 00 48 8D 8B 60 04 00 00 F3 0F 58 C0"), _T("// 0x000000000460"),
	_T("BOFFSET_SEARCHEXCHANGEOPTION                        "), _T("F+07 48 8D 97 A8 04 00 00 48 8D 8B 60 04 00 00 F3 0F 58 C0"), _T(""),

	_T("OFFSET_WARNINGCOUNT                                 "), _T("D+24 48 8B F9 E8 ? ? ? ? 45 33 C9 48 8D 54 24 20 44 8B C3 48 8B 48 28 E8 ? ? ? ? 8B 87 38 04 00 00 39 87 78 04 00 00"), _T("// 0x000000000478"),
	_T("BOFFSET_WARNINGCOUNT                                "), _T("F+22 48 8B F9 E8 ? ? ? ? 45 33 C9 48 8D 54 24 20 44 8B C3 48 8B 48 28 E8 ? ? ? ? 8B 87 38 04 00 00 39 87 78 04 00 00"), _T(""),

	_T("OFFSET_WARNINGINFO                                  "), _T("D+0A 48 8B 8F 40 04 00 00 48 89 87 40 04 00 00 0F AE F8"), _T("// 0x000000000440"),
	_T("BOFFSET_WARNINGINFO                                 "), _T("F+07 48 8B 8F 40 04 00 00 48 89 87 40 04 00 00 0F AE F8"), _T(""),

	_T("OFFSET_PLAYERSERVERNAME                             "), _T("D+0C 49 63 9E ? 0D 00 00 33 F6 4D 8B A6"), _T("// 0x000000000DB0"),
	_T("BOFFSET_PLAYERSERVERNAME                            "), _T("F+09 49 63 9E ? 0D 00 00 33 F6 4D 8B A6"), _T(""),

	_T("OFFSET_PLAYERGUILDNAME                              "), _T("D+03 49 8B 86 ? 0D 00 00 48 89 45 B7 85 DB 74"), _T("// 0x000000000D18"),
	_T("BOFFSET_PLAYERGUILDNAME                             "), _T("F+00 49 8B 86 ? 0D 00 00 48 89 45 B7 85 DB 74"), _T(""),

	_T("OFFSET_REPEATQUESTPAPERITEMID                       "), _T("D+02 83 BF ? ? 00 00 00 0F 84 ? ? ? ? 48 8B 8F ? ? 00 00 40 32 F6"), _T("// 0x0000000005C8"),
	_T("BOFFSET_REPEATQUESTPAPERITEMID                      "), _T("F+00 83 BF ? ? 00 00 00 0F 84 ? ? ? ? 48 8B 8F ? ? 00 00 40 32 F6"), _T(""),

	_T("OFFSET_CURPRESET                                    "), _T("B+09 48 8B 81 68 03 00 00 8B 40 38 C3"), _T("// 0x000000000038"),
	_T("BOFFSET_CURPRESET                                   "), _T("F+07 48 8B 81 68 03 00 00 8B 40 38 C3"), _T(""),

	_T("OFFSET_DELETEITEMINFO                               "), _T(""), _T("// 0x000000000498"),
	_T("OFFSET_DELETEITEMCURCOUNT                           "), _T(""), _T("// 0x000000000490"),
	_T("BOFFSET_DELETEITEMCURCOUNT                          "), _T(""), _T("// ULHWidget_InventoryDeleteItem::OnTapAdd"),

	_T("OFFSET_PACKAGE_SELECTEDTAP                          "), _T("D+02 8B 91 A0 08 00 00 3B ? ? ? 00 00 75"), _T("// 0x0000000008A0"),
	_T("BOFFSET_PACKAGE_SELECTEDTAP                         "), _T("F+00 8B 91 A0 08 00 00 3B ?  00 00 75"), _T("// ULHWidget_Event_Popup::OnSelectCategory -> -7E -> 4th goto ->"),

	_T("OFFSET_PARTYDUNGEON_DIFFICULTY                      "), _T("D+03 40 38 BB 34 04 00 00 0F 84 ? ? ? ? 48 89 6C 24 40"), _T("// 0x000000000434"),
	_T("BOFFSET_PARTYDUNGEON_DIFFICULTY                     "), _T("F+00 40 38 BB 34 04 00 00 0F 84 ? ? ? ? 48 89 6C 24 40"), _T(""),

	_T("OFFSET_DUNGEONPARTY_MEMBERCNT                       "), _T("D+12 48 8B 89 78 01 00 00 E8 ? ? ? ? 84 C0 75 ? 83 BF 40 04 00 00 04"), _T("// 0x000000000440"),
	_T("BOFFSET_DUNGEONPARTY_MEMBERCNT                      "), _T("F+10 48 8B 89 78 01 00 00 E8 ? ? ? ? 84 C0 75 ? 83 BF 40 04 00 00 04"), _T(""),

	_T("OFFSET_DUNGEONPARTY_DIFFICULTY                      "), _T("D+0D 48 8B 11 44 39 4A 2C 75 ? 41 0F B6 85 44 04 00 00 38 42 40"), _T("// 0x000000000444"),
	_T("BOFFSET_DUNGEONPARTY_DIFFICULTY                     "), _T("F+09 48 8B 11 44 39 4A 2C 75 ? 41 0F B6 85 44 04 00 00 38 42 40"), _T(""),

	_T("OFFSET_GETPLAYERLEVERECORD                          "), _T("B+05 33 DB 48 8B 4B 30 48 8D 56 FF E8 ? ? ? ? 48 85 C0 74 ? 0F 57 FF F2 48 0F 2A 78 30"), _T("// 0x000000000030"),
	_T("BOFFSET_GETPLAYERLEVERECORD                         "), _T("F+02 33 DB 48 8B 4B 30 48 8D 56 FF E8 ? ? ? ? 48 85 C0 74 ? 0F 57 FF F2 48 0F 2A 78 30"), _T(""),

	_T("OFFSET_COLLECTIONDETAILINFOCOUNT                    "), _T("B-20 48 8B 86 18 05 00 00 48 8B 48 70 41 0F B6 3C 0C 40 84 FF"), _T("// 0x000000000008"),
	_T("OFFSET_COLLECTIONDETAILINFO                         "), _T("D+03 48 8B 86 18 05 00 00 48 8B 48 70 41 0F B6 3C 0C 40 84 FF"), _T("// 0x000000000518"),
	_T("OFFSET_COLLECTIONDETAILINFO1                        "), _T("B+0A 48 8B 86 18 05 00 00 48 8B 48 70 41 0F B6 3C 0C 40 84 FF"), _T("// 0x000000000070"),
	_T("BOFFSET_COLLECTIONDETAILINFO1                       "), _T("F-23 48 8B 86 18 05 00 00 48 8B 48 70 41 0F B6 3C 0C 40 84 FF"), _T(""),

	_T("OFFSET_ITEMSEGONG                                   "), _T("B+A 48 8D 8B ? ? 00 00 48 8D 50 48"), _T("// 0x000000000048"),
	_T("BOFFSET_ITEMSEGONG                                  "), _T("F+7 48 8D 8B ? ? 00 00 48 8D 50 48"), _T(""),

	_T("OFFSET_VEHICLE_TOTALCOUNT                           "), _T("B-2B 43 8B 04 8A 83 F8 FF 74 ? 4C 8B 41 68 66 0F 1F 44 00 00 48 63 C8 48 6B C9 38"), _T("// 0x000000000070"),
	_T("OFFSET_VEHICLE_BASEADDR                             "), _T("B+0C 43 8B 04 8A 83 F8 FF 74 ? 4C 8B 41 68 66 0F 1F 44 00 00 48 63 C8 48 6B C9 38"), _T("// 0x000000000068"),
	_T("OFFSET_VEHICLE_ADDRSIZE                             "), _T("B+19 43 8B 04 8A 83 F8 FF 74 ? 4C 8B 41 68 66 0F 1F 44 00 00 48 63 C8 48 6B C9 38"), _T("// 0x000000000038"),
	_T("BOFFSET_VEHICLE_ADDRSIZE                            "), _T("F-2D 43 8B 04 8A 83 F8 FF 74 ? 4C 8B 41 68 66 0F 1F 44 00 00 48 63 C8 48 6B C9 38"), _T(""),

	_T("OFFSET_QUESTDESC                                    "), _T("B+03 48 8B 4B 48 49 8B D7 E8 ? ? ? ? 48 8B D8 E8 ? ? ? ? 44 8B 43 2C 48 8D 54 24"), _T("// 0x000000000048"),
	_T("BOFFSET_QUESTDESC                                   "), _T("F+00 48 8B 4B 48 49 8B D7 E8 ? ? ? ? 48 8B D8 E8 ? ? ? ? 44 8B 43 2C 48 8D 54 24"), _T("// 8B 81 08 04 00 00 4C 63 DA 3B 81 34 04 00 00 -> 2nd -> sub func -> 5th -> goto"),

	_T("OFFSET_RESETCHARPOS_VALUE1                          "), _T("D+04 F3 0F 10 81 ? ? 00 00 0F 57 C9 0F 2E C1 75 ? 48 8B 81 88 02 00 00 48 85 C0"), _T("// 0x000000000A64"),
	_T("OFFSET_RESETCHARPOS_VALUE2                          "), _T("D+13 F3 0F 10 81 ? ? 00 00 0F 57 C9 0F 2E C1 75 ? 48 8B 81 88 02 00 00 48 85 C0"), _T("// 0x000000000288"),
	_T("OFFSET_RESETCHARPOS_VALUE3                          "), _T("D+20 F3 0F 10 81 ? ? 00 00 0F 57 C9 0F 2E C1 75 ? 48 8B 81 88 02 00 00 48 85 C0"), _T("// 0x0000000001E8"),
	_T("OFFSET_RESETCHARPOS_VALUE4                          "), _T("D+28 F3 0F 10 81 ? ? 00 00 0F 57 C9 0F 2E C1 75 ? 48 8B 81 88 02 00 00 48 85 C0"), _T("// 0x0000000003F0"),
	_T("BOFFSET_RESETCHARPOS_VALUE4                         "), _T("F+00 F3 0F 10 81 ? ? 00 00 0F 57 C9 0F 2E C1 75 ? 48 8B 81 88 02 00 00 48 85 C0"), _T(""),

	_T("OFFSET_PARTYWINDOW_REMAINCOUNT1                     "), _T("D+03 4C 8D B9 68 04 00 00 4C 63 F2 41 8B 47 08 48 8B F1 44 89 74 24 30 41 3B 47 34"), _T("// 0x000000000468"),
	_T("OFFSET_PARTYWINDOW_REMAINCOUNT2                     "), _T("B+19 4C 8D B9 68 04 00 00 4C 63 F2 41 8B 47 08 48 8B F1 44 89 74 24 30 41 3B 47 34"), _T("// 0x000000000034"),
	_T("BOFFSET_PARTYWINDOW_REMAINCOUNT2                    "), _T("F+00 4C 8D B9 68 04 00 00 4C 63 F2 41 8B 47 08 48 8B F1 44 89 74 24 30 41 3B 47 34"), _T(""),

	_T("OFFSET_INSTANTMESSAGE_VALUE                         "), _T("B+18 48 89 85 ? ? ? 00 48 8B FA C6 44 24 20 00 41 0F B6 D0"), _T("// 0x000000000049"),
	_T("BOFFSET_INSTANTMESSAGE_VALUE                        "), _T("F+16 48 89 85 ? ? ? 00 48 8B FA C6 44 24 20 00 41 0F B6 D0"), _T(""),

	_T("PARAM_OFF_MAXPOTIONCNT                              "), _T("B+31 48 8B 88 A8 01 00 00 48 85 C9 0F 84 ? ? ? ? 48 8B 89 ? ? 00 00 48 85 C9 0F 84 ? ? ? ? 41 B1 01 0F 57 C0 45 0F B6 C1 F3 0F 11 44 24 20 B2 43"), _T("// 0x000000000043"),
	_T("BPARAM_OFF_MAXPOTIONCNT                             "), _T("F+30 48 8B 88 A8 01 00 00 48 85 C9 0F 84 ? ? ? ? 48 8B 89 ? ? 00 00 48 85 C9 0F 84 ? ? ? ? 41 B1 01 0F 57 C0 45 0F B6 C1 F3 0F 11 44 24 20 B2 43"), _T(""),

	_T("OFFSET_SELECT_MAPWORLDID                            "), _T("B-EB C1 E8 1D A8 01 75 ? 45 38 A9 D0 02 00 00"), _T("// 0x000000000050"),
	_T("BOFFSET_SELECT_MAPWORLDID                           "), _T("F-EE C1 E8 1D A8 01 75 ? 45 38 A9 D0 02 00 00"), _T(""),

	_T("OFFSET_WEAPON_SELECTID                              "), _T("D+02 8B 91 7C 09 00 00 48 8B D9 85 D2 75 ? E8 ? ? ? ? 48 8B C8 45 33 C0 BA B6 39 0C 00"), _T("// 0x00000000097C"),
	_T("BOFFSET_WEAPON_SELECTID                             "), _T("F+00 8B 91 7C 09 00 00 48 8B D9 85 D2 75 ? E8 ? ? ? ? 48 8B C8 45 33 C0 BA B6 39 0C 00"), _T(""),

	_T("OFFSET_WEAPONALLOPENED                              "), _T("D+02 C6 85 F2 05 00 00 01 83 7F 0C 00 C7 47 08 00 00 00 00"), _T("// 0x0000000005F2"),
	_T("BOFFSET_WEAPONALLOPENED                             "), _T("F+00 C6 85 F2 05 00 00 01 83 7F 0C 00 C7 47 08 00 00 00 00"), _T(""),

	_T("OFFSET_SENDRESETMOVEPACKETFUNC                      "), _T("D+12 FF 92 ? 0E 00 00 48 8B D7 48 8B C8 4C 8B 00 41 FF 90 20 0B 00 00"), _T("// 0x000000000B20"),
	_T("BOFFSET_SENDRESETMOVEPACKETFUNC                     "), _T("F+0F FF 92 ? 0E 00 00 48 8B D7 48 8B C8 4C 8B 00 41 FF 90 20 0B 00 00"), _T(""),

	_T("OFFSET_GET_LHITEM_LIMITDATE                         "), _T("B+03 48 69 58 38 80 96 98 00 BA B2 07 00 00 44 89 7C 24 20"), _T("// 0x000000000038"),
	_T("BOFFSET_GET_LHITEM_LIMITDATE                        "), _T("F+00 48 69 58 38 80 96 98 00 BA B2 07 00 00 44 89 7C 24 20"), _T(""),

	_T("OFFSET_AVATARINFO_SIZE                              "), _T(""), _T("// 0x000000000020"),
	_T("BOFFSET_AVATARINFO_SIZE                             "), _T("F+15 4C 8B 82 50 01 00 00 66 66 66 0F 1F 84 00 00 00 00 00 48 63 D1 48 C1 E2 05 46 39 1C 02 74 ? 42 8B 4C 02 18 83 F9 FF 75"), _T(""),

	_T("OFFSET_WEAPONSHAPE_SIZE                             "), _T(""), _T("// 0x000000000018"),
	_T("BOFFSET_WEAPONSHAPE_SIZE                            "), _T("F+24 43 8B 04 8A 8B C8 83 F8 FF 74 ? 4C 8B 82 00 03 00 00 66 66 66 0F 1F 84 00 00"), _T(""),

	_T("OFFSET_GRAPHIC_SETFRAME                             "), _T("D+02 FF 90 A8 02 00 00 48 8B 0D ? ? ? ? 48 8B 89 C0 01 00 00"), _T("// 0x0000000002A8"),
	_T("BOFFSET_GRAPHIC_SETFRAME                            "), _T("F+00 FF 90 A8 02 00 00 48 8B 0D ? ? ? ? 48 8B 89 C0 01 00 00"), _T(""),

	_T("OFFSET_CHARACTERLIST                                "), _T("D+0F B2 04 48 8B C8 ? ? ? ? ? ? ? 49 8B 8F F8 01 00 00 48 8B 14 F1"), _T("// 0x0000000001F8"),
	_T("OFFSET_CHARACTERCOUNT                               "), _T("D-4A B2 04 48 8B C8 ? ? ? ? ? ? ? 49 8B 8F F8 01 00 00 48 8B 14 F1"), _T("// 0x000000000200"),
	_T("BOFFSET_CHARACTERCOUNT                              "), _T("F-4D B2 04 48 8B C8 ? ? ? ? ? ? ? 49 8B 8F F8 01 00 00 48 8B 14 F1"), _T(""),

	_T("Offset_OdinPass_RewardCount                         "), _T("D+02 83 B9 ? ? 00 00 00 48 8B ? ? ? ? ? ? ? ? ? ? ? 04 00 00 F6 80 00 05 00 00 02"), _T("// 0x000000000478"),
	_T("Offset_LHButton_GetEnableState                      "), _T("D+15 83 B9 ? ? 00 00 00 48 8B ? ? ? ? ? ? ? ? ? ? ? 04 00 00 F6 80 00 05 00 00 02"), _T("// 0x000000000500"),
	_T("BOffset_LHButton_GetEnableState                     "), _T("F+00 83 B9 ? ? 00 00 00 48 8B ? ? ? ? ? ? ? ? ? ? ? 04 00 00 F6 80 00 05 00 00 02"), _T(""),
};


#define			LIN_OPCODE_PAT(x)		G_OPCODE_PATTERN[x]
#define			LIN_OPCODE_PAT_SIZE		sizeof(G_OPCODE_PATTERN) / sizeof(DWORD64)

// 옵코드배열

#define			OPCODE_TYPE_FUNC		1
#define			OPCODE_TYPE_DWORD		2
#define			OPCODE_TYPE_BYTE		3
#define			OPCODE_TYPE_CHANGEDWORD   4

#define			LIN_OPCODE_ARRAY(x)		G_OPCODE_ARRAY[x]

typedef	struct	TAG_OPCODE_ARRAY
{
	DWORD	dwIndex;
	TCHAR	szName[MAX_OPCODE_LEN];
	DWORD	dwType;
	INT		nOffset;
	SHORT	OpCode[MAX_OPCODE_LEN];

	DWORD	dwBaseAddr;
} OPCODE_ARRAY, *POPCODE_ARRAY;

OPCODE_ARRAY	G_OPCODE_ARRAY[LIN_OPCODE_PAT_SIZE / 3];


// 옵코드탐색

#define			DUMP_IMAGE_BASE_ADDR		0x600
#define			DELTA_SIZE					0x400

//#define			IDA_DUMP_BASE_ADDR			0x0
#define			IDA_DUMP_BASE_ADDR			0x7FF72F040000

DWORD	g_dwAddrRecvByteArray = 0;
DWORD	g_dwAddrRecvOffsetArray = 0;
BYTE	g_btAddrRecvAddValue = 0;

//////////////////////////////////////////////////////////////////////////
DWORD* ArrangeArray(DWORD* dest, int n)
{
	DWORD dwMin = 0xFFFFFFFF;
	DWORD dwIdx = 0;

	if (n == 1)
	{
		return (DWORD*)(dest - 0x70 * 4);
	}

	for (int i = 0; i < n; i++)
	{
		if (dwMin > dest[i])
		{
			dwMin = dest[i];
			dwIdx = i;
		}
	}

	dwMin = dest[0];
	dest[0] = dest[dwIdx];
	dest[dwIdx] = dwMin;

	return ArrangeArray(++dest, n - 1);
}

//////////////////////////////////////////////////////////////////////////

/************************************************************************/
/*                                                                      */
/************************************************************************/

// CAutoPatchDlg 대화 상자
CAutoPatchDlg::CAutoPatchDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_AUTOPATCH_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	m_editPath = _T("");
}

void CAutoPatchDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT_PATH, m_editPath);
}

BEGIN_MESSAGE_MAP(CAutoPatchDlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BTN_PATH, &CAutoPatchDlg::OnBnClickedBtnPath)
	ON_BN_CLICKED(IDC_BTN_START, &CAutoPatchDlg::OnBnClickedBtnStart)
	ON_BN_CLICKED(IDC_BTN_EXIT, &CAutoPatchDlg::OnBnClickedBtnExit)
END_MESSAGE_MAP()


// CAutoPatchDlg 메시지 처리기

BOOL CAutoPatchDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 이 대화 상자의 아이콘을 설정합니다. 응용 프로그램의 주 창이 대화 상자가 아닐 경우에는
	//  프레임워크가 이 작업을 자동으로 수행합니다.
	SetIcon(m_hIcon, TRUE);			// 큰 아이콘을 설정합니다.
	SetIcon(m_hIcon, FALSE);		// 작은 아이콘을 설정합니다.

									// TODO: 여기에 추가 초기화 작업을 추가합니다.

	return TRUE;  // 포커스를 컨트롤에 설정하지 않으면 TRUE를 반환합니다.
}

// 대화 상자에 최소화 단추를 추가할 경우 아이콘을 그리려면
//  아래 코드가 필요합니다. 문서/뷰 모델을 사용하는 MFC 응용 프로그램의 경우에는
//  프레임워크에서 이 작업을 자동으로 수행합니다.

void CAutoPatchDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 그리기를 위한 디바이스 컨텍스트입니다.

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 클라이언트 사각형에서 아이콘을 가운데에 맞춥니다.
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 아이콘을 그립니다.
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// 사용자가 최소화된 창을 끄는 동안에 커서가 표시되도록 시스템에서
//  이 함수를 호출합니다.
HCURSOR CAutoPatchDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CAutoPatchDlg::OnBnClickedBtnPath()
{
	TCHAR	 szFilter[] = _T("All Files (*.*) | *.*; *.* |");
	CFileDialog		fileDlg(TRUE, NULL, _T(""), OFN_HIDEREADONLY, szFilter);
	if (fileDlg.DoModal() == IDOK)
	{
		m_editPath.Format(_T("%s"), fileDlg.GetPathName());
		UpdateData(FALSE);
	}
}

//////////////////////////////////////////////////////////////////////////
// BASE PATCH
//////////////////////////////////////////////////////////////////////////
void CAutoPatchDlg::OnBnClickedBtnStart()
{
	UpdateData(TRUE);

	//XMsg(L"LIN_OPCODE_PAT_SIZE : %d", LIN_OPCODE_PAT_SIZE);


	TCHAR	szTemp[MAX_PATH];
	DWORD	dwPatchTime = GetTickCount();

	//////////////////////////////////////////////////////////////////////////
	// 옵코드패턴로드
	LoadPattern();

	if (_taccess_s(m_editPath, 0) == -1)
	{
		AfxMessageBox(_T("#ERROR: 덤프파일을 찾을 수 없습니다"), MB_ICONERROR);
		return;
	}

	//////////////////////////////////////////////////////////////////////////
	// 덤프파일로드
	FILE*	dumpFile = NULL;
	_tfopen_s(&dumpFile, m_editPath, _T("r+b"));
	if (!dumpFile)
	{
		AfxMessageBox(_T("#ERROR: 덤프파일을 읽을 수 없습니다"), MB_ICONERROR);
		return;
	}
	// 덤프파일크기얻기
	fseek(dumpFile, 0, SEEK_END);
	INT	nDumpFileSize = (INT)ftell(dumpFile);

	BYTE*	pAllOriOpCode = new BYTE[nDumpFileSize];
	fseek(dumpFile, 0, SEEK_SET);
	fread(pAllOriOpCode, nDumpFileSize, 1, dumpFile);
	fclose(dumpFile);

	//////////////////////////////////////////////////////////////////////////
	// 기초패치주소탐색
	_try
	{
		for (INT I = 0; I < LIN_OPCODE_PAT_SIZE / 3; I++)
		{
			POPCODE_ARRAY	pOpcodeArray = (POPCODE_ARRAY)&LIN_OPCODE_ARRAY(I);

			for (INT J = 0; J < nDumpFileSize; J++)
			{
				BYTE	btCode = BYTEV(pAllOriOpCode + J);
				if (btCode == pOpcodeArray->OpCode[0])
				{
					BOOL	bEqual = TRUE;
					for (INT K = 1; K < MAX_OPCODE_LEN; K++)
					{
						if (pOpcodeArray->OpCode[K] == OPCODE_NULL)
							break;

						if (pOpcodeArray->OpCode[K] == OPCODE_NONE)
							continue;

						btCode = BYTEV(pAllOriOpCode + J + K);
						if (btCode != pOpcodeArray->OpCode[K])
						{
							bEqual = FALSE;
							break;
						}
					}
					if (bEqual)
					{
						if (pOpcodeArray->dwType == OPCODE_TYPE_FUNC)
						{
							pOpcodeArray->dwBaseAddr = DUMP_IMAGE_BASE_ADDR + J + pOpcodeArray->nOffset;
						}
						else if (pOpcodeArray->dwType == OPCODE_TYPE_DWORD)
						{
							pOpcodeArray->dwBaseAddr = DWORDV(pAllOriOpCode + J + pOpcodeArray->nOffset);
						}
						else if (pOpcodeArray->dwType == OPCODE_TYPE_BYTE)
						{
							pOpcodeArray->dwBaseAddr = (DWORD)BYTEV(pAllOriOpCode + J + pOpcodeArray->nOffset);
						}
						else if (pOpcodeArray->dwType == OPCODE_TYPE_CHANGEDWORD)   //jmp 주소까지의 편위를 썼을때 주소의 위치를 보여준다.
						{
							pOpcodeArray->dwBaseAddr = DWORDV(pAllOriOpCode + J + pOpcodeArray->nOffset);
							pOpcodeArray->dwBaseAddr = pOpcodeArray->dwBaseAddr + (DUMP_IMAGE_BASE_ADDR + J + pOpcodeArray->nOffset) + 5 - 1;
						}
						else
						{
							pOpcodeArray->dwBaseAddr = 0;
						}
						break;
					}
				}
			}
		}
	}
		_except(EXCEPTION_EXECUTE_HANDLER)
	{
		AfxMessageBox(_T("#ERROR: 기초주소탐색실패!"), MB_ICONERROR);
		return;
	}

	delete	pAllOriOpCode;

	//////////////////////////////////////////////////////////////////////////
	// 패치주소보관
	if (FALSE)
	{
		TCHAR	szMsg[2000];
		ZeroMemory(szMsg, 2000);

		for (INT I = 0; I < LIN_OPCODE_PAT_SIZE / 3; I++)
		{
			POPCODE_ARRAY	pOpcodeArray = (POPCODE_ARRAY)&LIN_OPCODE_ARRAY(I);

			wsprintf(szTemp, _T("[0x%.8X] : %s"), pOpcodeArray->dwBaseAddr, pOpcodeArray->szName);
			_tcscat_s(szMsg, szTemp);
			_tcscat_s(szMsg, _T("\n"));
		}
		AfxMessageBox(szMsg, MB_ICONINFORMATION);
		return;
	}

	// 파일에 쓰기
	_try
	{
		CHAR	szReturn[2] = { 0x0D, 0x0A };

	TCHAR	tszAppPath[MAX_PATH] = { 0, };
	::GetModuleFileName(NULL, tszAppPath, MAX_PATH);
	TCHAR* tszPos = _tcsrchr(tszAppPath, '\\');
	*(tszPos + 1) = '\0';
	_tcscat_s(tszAppPath, _T("Patched_GameAddress.h"));

	FILE*	saveFile = NULL;
	_tfopen_s(&saveFile, tszAppPath, _T("w+b"));
	if (!saveFile)
	{
		AfxMessageBox(_T("#ERROR: 패치주소저장파일을 열수 없습니다"), MB_ICONERROR);
		return;
	}

	CHAR	szAddr[MAX_PATH * 8] = { 0, };

	sprintf_s(szAddr, "#pragma once");
	fwrite(szAddr, strlen(szAddr), 1, saveFile);
	fwrite(szReturn, 2, 1, saveFile);
	//sprintf_s(szAddr, "#include \"../gameaddress.h\"");
	//fwrite(szAddr, strlen(szAddr), 1, saveFile);
	//fwrite(szReturn, 2, 1, saveFile);
	//fwrite(szReturn, 2, 1, saveFile);



	for (INT I = 0; I < LIN_OPCODE_PAT_SIZE / 3; I++)
	{
		POPCODE_ARRAY	pOpcodeArray = (POPCODE_ARRAY)&LIN_OPCODE_ARRAY(I);
		//XMsg(L"%d", I);
		if (pOpcodeArray->szName[0] == '@')
			continue;

		if (pOpcodeArray->szName[0] == '#')
		{
			fwrite(szReturn, 2, 1, saveFile);
			fwrite(szReturn, 2, 1, saveFile);
			continue;
		}

		memset(szAddr, 0, sizeof(MAX_PATH * 2));

		char szComment[MAX_PATH] = { 0, };
		if (_tcsstr(pOpcodeArray->szName, _T("//")) != NULL)
		{
			SF_UnicodeToUtf8(szComment, pOpcodeArray->szName);
			sprintf_s(szAddr, "%s\r\n\r\n", szComment);
		}
		else
		{
			SF_UnicodeToUtf8(szComment, (PWSTR)LIN_OPCODE_PAT(I * 3 + 2));
			if (pOpcodeArray->dwType == OPCODE_TYPE_BYTE)
				sprintf_s(szAddr, "%s\t%S\t\t  0x%.2X // %s\r\n", "#define", pOpcodeArray->szName, pOpcodeArray->dwBaseAddr, szComment);
			else
			{
				if (IDA_DUMP_BASE_ADDR != 0x0 && pOpcodeArray->dwBaseAddr > 0x10000)
				{
					sprintf_s(szAddr, "%s\t%S\t\t  0x%llX // %s\r\n", "#define", pOpcodeArray->szName, IDA_DUMP_BASE_ADDR + DELTA_SIZE + pOpcodeArray->dwBaseAddr, szComment);
				}
				else
				{
					sprintf_s(szAddr, "%s\t%S\t\t  0x%.8X // %s\r\n", "#define", pOpcodeArray->szName, pOpcodeArray->dwBaseAddr, szComment);
				}
			}
		}
		fwrite(szAddr, strlen(szAddr), 1, saveFile);
	}

	fwrite(szReturn, 2, 1, saveFile);
	fwrite(szReturn, 2, 1, saveFile);


	/*****************************************************************************************************************************************/

	/*for ( I = 0; I < (INT)dwCaseNum - 1; I++ )
	{
	sprintf_s(szAddr, "%s    ", "#define");
	fwrite(szAddr, strlen(szAddr), 1, saveFile);
	sprintf_s( szAddr, "%s", G_RECV_STRING[I] );
	fwrite( szAddr, strlen(szAddr), 1, saveFile );
	sprintf_s(szAddr, "0x%.2X\r\n", dwResultOffsetIndex[I]);
	fwrite(szAddr, strlen(szAddr), 1, saveFile);
	}
	fwrite( szReturn, 2, 1, saveFile );*/
	// 		for ( J = 0; J < (INT)dwCaseNum2 - 1; J++ )
	// 		{	
	// 			sprintf_s(szAddr, "%s\t\t", "#define");
	// 			fwrite(szAddr, strlen(szAddr), 1, saveFile);
	// 			sprintf_s( szAddr, "RECV_%.3d\t\t", I + J );
	// 			fwrite( szAddr, strlen(szAddr), 1, saveFile );
	// 			sprintf_s(szAddr, "0x%.2X\r\n", dwResultOffsetIndex2[J]);
	// 			fwrite(szAddr, strlen(szAddr), 1, saveFile);
	// 		}
	// 		fwrite( szReturn, 2, 1, saveFile );
	fwrite(szReturn, 2, 1, saveFile);

	/*****************************************************************************************************************************************/

	fclose(saveFile);

	wsprintf(szTemp, _T(" Auto Patch Successed! Time = [%d]ms \n\n '%s' - Saved!\n\n Do You Open This File?"), GetTickCount() - dwPatchTime, tszAppPath);
	INT	nResult = AfxMessageBox(szTemp, MB_YESNO | MB_ICONINFORMATION);
	if (nResult == IDYES)
	{
		ShellExecute(NULL, _T("open"), _T("notepad"), tszAppPath, NULL, SW_SHOW);
	}
	}
		_except(EXCEPTION_EXECUTE_HANDLER)
	{
		AfxMessageBox(_T("#ERROR: 패치주소저장실패!"), MB_ICONERROR);
		return;
	}
}

//////////////////////////////////////////////////////////////////////////
// EXIT
//////////////////////////////////////////////////////////////////////////
void CAutoPatchDlg::OnBnClickedBtnExit()
{
	OnOK();
}

//////////////////////////////////////////////////////////////////////////
// 옵코드배열설정
//////////////////////////////////////////////////////////////////////////
VOID CAutoPatchDlg::LoadPattern(void)
{
	TCHAR	szTemp[MAX_PATH];

	ZeroMemory(&LIN_OPCODE_ARRAY(0), sizeof(OPCODE_ARRAY) * LIN_OPCODE_PAT_SIZE / 3);

	for (INT I = 0; I < LIN_OPCODE_PAT_SIZE / 3; I++)
	{
		POPCODE_ARRAY	pOpcodeArray = (POPCODE_ARRAY)&LIN_OPCODE_ARRAY(I);
		for (INT J = 0; J < MAX_OPCODE_LEN; J++)
			pOpcodeArray->OpCode[J] = OPCODE_NULL;

		pOpcodeArray->dwIndex = I;
		_tcscpy_s(pOpcodeArray->szName, MAX_OPCODE_LEN, G_OPCODE_PATTERN[I * 3]);

		if (_tcsstr(pOpcodeArray->szName, _T("//")) != NULL)
			continue;

		INT	nOpCodeSize = 0;
		LPCTSTR		pszOpStr = LIN_OPCODE_PAT(I * 3 + 1);
		for (INT J = 0; J < (INT)_tcslen(pszOpStr); J++)
		{
			TCHAR	szMark = (TCHAR) *(pszOpStr + J);

			if (J == 0)
			{
				// 옵코드타입설정
				if (szMark == _T('F'))
					pOpcodeArray->dwType = OPCODE_TYPE_FUNC;
				else if (szMark == _T('D'))
					pOpcodeArray->dwType = OPCODE_TYPE_DWORD;
				else if (szMark == _T('B'))
					pOpcodeArray->dwType = OPCODE_TYPE_BYTE;
				else if (szMark == _T('L'))
					pOpcodeArray->dwType = OPCODE_TYPE_CHANGEDWORD;
				else
				{
					wsprintf(szTemp, _T("#ERROR OPCODE TYPE - [%d]"), I);
					AfxMessageBox(szTemp, MB_ICONERROR);
					return;
				}
			}
			else if (J == 1)
			{
				// 옵코드오프셋설정
				if (szMark == _T('+'))
				{
					TCHAR	szOffset[3];
					szOffset[0] = *(pszOpStr + J + 1);
					szOffset[1] = *(pszOpStr + J + 2);
					szOffset[2] = NULL;
					J += 2;

					pOpcodeArray->nOffset = (INT)_tcstoul(szOffset, NULL, 16);
				}
				else if (szMark == _T('-'))
				{
					TCHAR	szOffset[3];
					szOffset[0] = *(pszOpStr + J + 1);
					szOffset[1] = *(pszOpStr + J + 2);
					szOffset[2] = NULL;
					J += 2;

					pOpcodeArray->nOffset = -(INT)(_tcstoul(szOffset, NULL, 16));
				}
				else
				{
					wsprintf(szTemp, _T("#ERROR OPCODE OFFSET - [%d]"), I);
					AfxMessageBox(szTemp, MB_ICONERROR);
					return;
				}
			}
			else
			{
				// 옵코드값설정
				if (szMark == _T('?'))
				{
					pOpcodeArray->OpCode[nOpCodeSize] = OPCODE_NONE;
					nOpCodeSize++;
				}
				else if (isHexValue(szMark))
				{
					TCHAR	szValue[3];
					szValue[0] = *(pszOpStr + J + 0);
					szValue[1] = *(pszOpStr + J + 1);
					szValue[2] = NULL;
					J += 2;

					pOpcodeArray->OpCode[nOpCodeSize] = (SHORT)_tcstoul(szValue, NULL, 16);
					nOpCodeSize++;
				}
				else
				{

				}
			}
		}
	}
}


BOOL CAutoPatchDlg::isHexValue(TCHAR szValue)
{
	if ((szValue >= _T('0') && szValue <= _T('9')) ||
		(szValue >= _T('a') && szValue <= _T('f')) ||
		(szValue >= _T('A') && szValue <= _T('F')))
		return	TRUE;

	return FALSE;
}


/************************************************************************/
/*                                                                      */
/************************************************************************/

#define		TEL_MAX_NPC_NAME_LEN		50

typedef struct _tagTEL_MENUCLICK_INFO
{
	DWORD		dwClickNum;
	POINT		ptPos;
	DWORD		dwSleepTime;
} TEL_MENUCLICK_INFO, *PTEL_MENUCLICK_INFO;

typedef struct _tagTEL_HUNTNPC_INFO
{
	char				szNPCName[TEL_MAX_NPC_NAME_LEN];
	char				szPacketText[TEL_MAX_NPC_NAME_LEN];
	POINT				ptPos;
	int					nMenuType;
	TEL_MENUCLICK_INFO	telMenuInfo;
} TEL_HUNTNPC_INFO, *PTEL_HUNTNPC_INFO;


typedef struct _tagTEL_HUNTMENU_INFO
{
	int					nMenuType;
	int					nTelMapID;
	int					nLimintLevel;
	POINT				ptTelPos;
	TEL_MENUCLICK_INFO	telMenuInfo[5];
} TEL_HUNTMENU_INFO, *PTEL_HUNTMENU_INFO;

