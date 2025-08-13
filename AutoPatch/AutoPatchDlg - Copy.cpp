
// AutoPatchDlg.cpp : 구현 파일
//

#include "stdafx.h"
#include "AutoPatch.h"
#include "AutoPatchDlg.h"
#include "afxdialogex.h"
#include "../common/SF_StrConv.h"
#include "../common/dbg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

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
	_T("//멀티관련"), _T(""), _T(""),
	_T("//언리얼"), _T(""), _T(""),
	_T("ADDR_GLOBAL_WIDGET_BASE                          "), _T("L+10 C1 F8 10 48 63 C8 48 63 C2 48 8D 14 40 48 8B 05 ? ? ? ? 48 8B 0C C8 8B 44 D1 08 4C 8D 04 D1 8B C8"), _T(""),
	_T("ADDR_FUNC_UWIDGET_GET_STATIC_CLASS               "), _T("L+01 E8 ? ? ? ? 48 89 45 CF 48 8D 05 ? ? ? ? 48 89 45 E7 48 8D 05 ? ? ? ? 48 89 5D D7 48 63 5F 30"), _T(""),
	_T("ADDR_FUNC_GET_WIDGET_VISIBLE                     "), _T("L+18 48 8B CB E8 ? ? ? ? 84 C0 74 68 48 8B CB E8 ? ? ? ? 48 8B C8 E8 ? ? ? ? 84 C0 74 54 48 8B CB E8"), _T(""),
	_T("ADDR_GLOBAL_FNAMEPOOL_BASE                       "), _T("L+03 48 8D 0D ? ? ? ? E8 ? ? ? ? C6 05 ? ? ? ? ? 8B 50 08 48 8D 98"), _T(""),
	_T("ADDR_FUNC_GET_WIGET_FNAME                        "), _T("L+42 48 83 EC 40 33 C0 C7 42 2C 80 00 00 00 48 8B DA 48 89 02 48 8B F9 48 89 42 08 48 89 42 20 48 8D 4D 20"), _T(""),
	_T("ADDR_FUNC_UPANELWIDGET_GET_STATIC_CLASS          "), _T("L+01 E8 ? ? ? ? 48 8B 4B 10 48 83 C0 30 48 63 50 08 3B 51 38 7F 1A 48 8B 49 30 48 39 04 D1 75 10 4C 8D 44 24 28"), _T(""),
	_T("ADDR_FUNC_UBUTTON_CLICK                          "), _T("L+69 48 89 6C ? ? 48 89 7C ? ? E8 ? ? ? ? 48 8B E8 E8 ? ? ? ? 48 8D 88 80 00 00 00 E8"), _T(""),
	_T("ADDR_FUNC_GET_CACHED_GEOMETRY                    "), _T("F+00 12 34 56 78 90 12 34 56 78 90"), _T("Function UMG.Widget.GetCachedGeometry 내부함수"),
	_T("ADDR_FUNC_FIND_WIDGET                            "), _T("L+01 E8 ? ? ? ? 48 8B D0 48 8D ? ? ? E8 ? ? ? ? 48 8D 4C ? ? 48 8B 18 E8 ? ? ? ? 48 8B D0 48 8D"), _T(""),
	_T("ADDR_FUNC_FTEXT_TO_FSTRING                       "), _T("L+18 80 3D 2B ? ? ? 00 75 52 80 3D 4B ? ? ? ? 72 3A 48 ? ? ? ? E8 ? ? ? ? 83 78 08 00 74 05 48 8B 08 EB 03 49 8B CC 48"), _T(""),
	_T("ADDR_FUNC_FNAME_TO_FSTRING                       "), _T("L+01 E8 ? ? ? ? 48 8B 86 ? ? 00 00 0F 10 90 ? ? 00 00 48 8D 98 ? ? 00 00 0F 10 88 ? ? 00 00"), _T(""),
	_T("ADDR_FUNC_FTEXT_FROM_TEXTBLOCK                   "), _T("F+00 12 34 56 78 90 12 34 56 78 90"), _T("Function UMG.TextBlock.GetText 그대로"),
	_T("ADDR_FUNC_FTEXT_FROM_RICHTEXTBLOCK               "), _T("F+00 12 34 56 78 90 12 34 56 78 90"), _T("Function UMG.RichTextBlock.GetText 그대로"),
	_T("ADDR_FUNC_FTEXT_CONSTRUCTOR                      "), _T("L+08 48 8D 8D ? ? ? ? E8 ? ? ? ? 48 8B 16 48 8B 08 48 89 0E 48 8B 48 08 48 89 10"), _T(""),
	_T("ADDR_FUNC_EDITABLE_TEXT_BOX_SET_TEXT             "), _T("L+1F 49 8B 9F ? ? 00 00 48 8D 15 ? ? ? ? 48 8D 4C 24 30 E8 ? ? ? ? 48 8B D0 48 8B CB E8"), _T(""),
	_T("ADDR_FUNC_HOOK_CLICKDOWN_START                   "), _T("F-38 41 F7 C0 ? ? ? ? 0F 85 B7 00 00 00 48 8B 31 C6 81 ? ? 00 00 01 45 85 C0 75 61"), _T(""),
	_T("ADDR_FUNC_HOOK_CLICKDOWN_REPLACE_POS             "), _T("F+72 41 F7 C0 ? ? ? ? 0F 85 B7 00 00 00 48 8B 31 C6 81 ? ? 00 00 01 45 85 C0 75 61"), _T(""),
	_T("ADDR_FUNC_HOOK_CLICKUP_START                     "), _T("F-3E 4C 89 ? ? ? ? 00 00 E8 ? ? ? ? 48 8B 0D ? ? ? ? 48 8D ? ? ? ? 00 00 48 8B 01"), _T(""),
	_T("ADDR_FUNC_HOOK_CLICKUP_REPLACE_POS               "), _T("F+57 4C 8B 36 E8 ? ? ? ? 48 8D ? ? ? ? 00 00 48 8B 08 4C 8B 41 48 48 8B C8 41 FF D0 8B 3D ? ? ? ? 48 8D"), _T(""),

	_T("//일반"), _T(""), _T(""),
	_T("ADDR_FUNC_UMTableItem_Realm_OnClick              "), _T("F+00 12 34 56 78 90 12 34 56 78 90"), _T("Function Mad.MTableItem_Realm.RealmBtn_OnClicked 내부"),
	_T("OFFSET_UMTableItem_Realm_Server_ID               "), _T("D+00 12 34 56 78 90 12 34 56 78 90"), _T("Function Mad.MTableItem_Realm.RealmBtn_OnClicked 내부함수안에서 *(_DWORD *)(sub_7FF7E533ACD0() + 0xB0) = *(_DWORD *)(a1 + 0x348);"),
	_T("ADDR_FUNC_GET_SAVE_GAME_MANAGER                  "), _T("L+0D 48 89 9C ? ? 00 00 00 3C 01 76 27 E8 ? ? ? ? 48 8B C8 E8 ? ? ? ? 83 F8 01 75 11 E8 ? ? ? ? 44 38 70 58"), _T(""),
	_T("ADDR_FUNC_CHANGE_AUTO_USE_HP_POTION              "), _T("L+35 48 89 5C ? ? 48 89 74 ? ? 57 48 81 EC ? 00 00 00 48 8B 05 ? ? ? ? 48 33 C4 48 89 84 ? ? 00 00 00 48 63 DA"), _T(""),
	_T("ADDR_FUNC_GET_MQUICKSLOT_MANAGER                 "), _T("L+03 75 0C E8 ? ? ? ? C6 80 ? ? 00 00 01 48 8B ? ? ? ? 00 00 48 81 C4 A0 00 00 00"), _T(""),
	_T("ADDR_FUNC_SET_QUICKSLOT_AUTO_USE                 "), _T("F+00 85 D2 0F 88 ? ? 00 00 48 89 5C 24 20 55 48 83 EC ? 41 0F B6 E8"), _T(""),
	_T("ADDR_FUNC_SKILL_REGISTER_QUICKSLOT               "), _T("F+00 85 D2 0F 88 ? ? 00 00 55 41 56 41 57 "), _T(""),
	_T("ADDR_FUNC_MAKE_EMPTY_LIST                        "), _T("L+18 48 8B F0 48 8B 08 48 85 C9 74 41 48 3B 0F 75 3C 33 D2 "), _T(""),
	_T("ADDR_FUNC_GET_CURRENCY_INFO                      "), _T("L+4E 83 79 08 FF 48 8D 79 08 75 08 32 C0 48 83 C4 ? 5F C3"), _T(""),
	_T("ADDR_FUNC_GET_CURRENCY_UID                       "), _T("L+08 C6 83 ? ? 00 00 01 E8 ? ? ? ? 8B 90 ? ? 00 00 89 93 ? ? 00 00 E8"), _T(""),
	_T("ADDR_FUNC_GET_SUB_ZONE_MANAGER                   "), _T("L+04 48 8B C8 E8 ? ? ? ? 48 8B 13 48 3B 10 75 ? 48 8D 55 A0 48 8D 4F 08"), _T(""),
	_T("ADDR_FUNC_GET_SUB_ZONE_DATA                      "), _T("L+3A 49 63 46 28 85 C0 78 29 3B 86 ? 00 00 00 7D 21"), _T(""),
	_T("ADDR_FUNC_GET_SUB_ZONE_INFO                      "), _T("L-04 48 8B F0 48 85 C0 0F 84 ? ? ? ? 83 78 ? 03 "), _T(""),

	_T("ADDR_FUNC_GET_ASSET_MANAGER                      "), _T("F+00 12 34 56 78 90 12 34 56 78 90"), _T("0x1E20B50"),
	_T("ADDR_FUNC_GET_EQUIPMENT_MANAGER                  "), _T("F+00 12 34 56 78 90 12 34 56 78 90"), _T("0x1E21250"),
	_T("ADDR_FUNC_GET_IS_MOUNTED                         "), _T("F+00 12 34 56 78 90 12 34 56 78 90"), _T("0x1F419E0"),
	_T("ADDR_FUNC_GET_ITEM_NAME_1                        "), _T("F+00 12 34 56 78 90 12 34 56 78 90"), _T("0x1E23330"),
	_T("ADDR_FUNC_GET_ITEM_NAME_2                        "), _T("F+00 12 34 56 78 90 12 34 56 78 90"), _T("0x1E1E080"),
	_T("ADDR_FUNC_GET_ITEM_NAME_3                        "), _T("F+00 12 34 56 78 90 12 34 56 78 90"), _T("0x1E24050"),
	_T("ADDR_FUNC_GET_ITEM_NAME_4                        "), _T("F+00 12 34 56 78 90 12 34 56 78 90"), _T("0x1E1EF20"),
	_T("ADDR_FUNC_GET_ITEM_NAME_5                        "), _T("F+00 12 34 56 78 90 12 34 56 78 90"), _T("0x1E25550"),
	_T("ADDR_FUNC_GET_ITEM_NAME_6                        "), _T("F+00 12 34 56 78 90 12 34 56 78 90"), _T("0x1E20030"),
	_T("ADDR_FUNC_GET_ITEM_AUTO_STATUS                   "), _T("L+15 48 89 74 24 30 E8 ? ? ? ? 48 8D 93 ? ? 00 00 48 8B C8 E8 ? ? ? ? 0F B6 F0 E8"), _T(""),
	_T("ADDR_FUNC_GET_ITEM_NAME_7                        "), _T("L+35 48 89 7C 24 38 83 F8 01 0F 85 ? 00 00 00 8B 79 ? E8 ? ? ? ? 85 FF 0F 84 87 00 00 00 83 EF 01 74 5D 83 EF 01 74 33 83 FF 01 0F 85 AC"), _T(""),
	_T("ADDR_FUNC_GET_ITEM_NAME_8                        "), _T("L+55 48 89 7C 24 38 83 F8 01 0F 85 ? 00 00 00 8B 79 ? E8 ? ? ? ? 85 FF 0F 84 87 00 00 00 83 EF 01 74 5D 83 EF 01 74 33 83 FF 01 0F 85 AC"), _T(""),
	_T("ADDR_FUNC_GET_ITEM_GRADE                         "), _T("F+00 48 89 5C 24 10 48 89 74 24 18 57 48 83 EC 30 83 79 04 00 48 8B FA 8B 19 48 8B F1 0F 85 8C 00 00 00 80 3D ? ? ? ? 00 74 09"), _T(""),
	_T("ADDR_FUNC_MOUNT_EQUIPMENT                        "), _T("F+00 48 89 5C 24 18 56 48 83 EC 20 48 8B F2 48 8B D9 E8 ? ? ? ? 83 F8 FF 74 15 48 8B D6 48 8B CB 48 8B 5C 24 40"), _T(""),
	_T("ADDR_FUNC_SET_AUTO_USE_ITEM                      "), _T("F+00 48 89 5C 24 10 57 48 83 EC 40 48 8B D9 0F B6 FA 48 8B 89 ? ? 00 00 48 89 4C 24 50 E8 ? ? ? ? 84 C0 0F 84 9D 00 00 00"), _T(""),
	_T("ADDR_FUNC_GET_USE_ITEM_MANAGER                   "), _T("L+1D 4C 39 66 60 0F 84 AF 01 00 00 E8 ? ? ? ? 45 33 C9 48 8D 56 60 45 33 C0 48 8B C8 E8 ? ? ? ? 48 8B D8 48 85 C0"), _T(""),
	_T("ADDR_FUNC_USE_ITEM                               "), _T("F+00 48 89 5C 24 08 48 89 74 24 10 48 89 7C 24 20 55 48 8B EC 48 81 EC 80 00 00 00 0F B6 F2 48 8B D9 E8 ? ? ? ? 48 8B C8 E8 ? ? ? ? 48 85 C0"), _T(""),

	_T("ADDR_FUNC_AUTO_PLAY_MANAGER                      "), _T("L+2A 8B 47 20 2D A0 2A 00 00 83 F8 01 77"), _T(""),
	_T("ADDR_FUNC_GET_DISTANCE_MANAGER                   "), _T("F+00 12 34 56 78 90 12 34 56 78 90"), _T("패턴다시찾기"),
	_T("ADDR_FUNC_SHOW_TOAST_MESSAGE                     "), _T("L+9E BA 3B 02 00 00 48 8D 4C 24 50"), _T("패턴다시찾기"),
	_T("ADDR_FUNC_EXIT_SLEEP_MODE                        "), _T("F+00 12 34 56 78 90 12 34 56 78 90"), _T("Function Mad.MSleepModeWidget.CloseBtn_OnClicked 내부"),
	_T("ADDR_FUNC_GET_MGAMEDATA_MANAGER                  "), _T("L-69 BA 78 02 00 00 4C 89 7D EF"), _T(""),
	_T("ADDR_FUNC_GET_GAME_INSTANCE                      "), _T("L-F3 C7 45 87 92 01 00 00"), _T(""),
	_T("ADDR_FUNC_GET_NAME_INFO_FROM_UID                 "), _T("L+07 41 B1 01 48 8B C8 E8 ? ? ? ? 48 85 C0 74 77 E8 ? ? ? ? 48 8B C8 E8 ? ? ? ? 48 85 C0 74 18"), _T(""),
	_T("ADDR_FUNC_GET_TEXT_FROM_NAME_UID                 "), _T("L+4D 4C 89 B4 24 ? ? 00 00 E8 ? ? ? ? 48 8D ? ? ? C6 ? ? ? 01 48 8B CE E8 ? ? ? ? 4C 8B 0E 48 8D 55 80 45 33 C0 48 8B CE"), _T(""),
	_T("ADDR_FUNC_GET_MSKILL_MANAGER                     "), _T("L+0B 80 7F 48 00 0F 84 ? ? 00 00 E8 ? ? ? ? 48 8D 57 ? 48 8B C8 E8 ? ? ? ? 48 85 C0 74 ? 48 8B 08"), _T(""),
	_T("ADDR_FUNC_GET_ACVTIVE_SKILL_INFO                 "), _T("L+2A 4C 89 ? ? ? ? 00 00 E8 ? ? ? ? 48 8B C8 E8 ? ? ? ? 4C 8B E8 48 85 C0 0F 84 ? ? 00 00 E8 ? ? ? ? 48 8B C8"), _T(""),
	_T("ADDR_FUNC_GET_PASSIVE_SKILL_INFO                 "), _T("L+1E 48 8D 54 ? ? 49 8B CE E8 ? ? ? ? 84 C0 0F 84 ? 00 00 00 E8 ? ? ? ? 48 8B C8 E8 ? ? ? ? 48 85 C0 0F 84 41 01 00 00 41 B1 01"), _T(""),
	_T("ADDR_FUNC_GET_SKILL_RESOURCE_DATA                "), _T("L+0D E8 ? ? ? ? 48 8D 53 10 48 8B C8 E8 ? ? ? ? 48 8B F8 48 85 C0 74 2E E8 ? ? ? ? 48 8D 53 10 48 8B C8"), _T(""),
};


#define			LIN_OPCODE_PAT(x)		G_OPCODE_PATTERN[x]
#define			LIN_OPCODE_PAT_SIZE		sizeof(G_OPCODE_PATTERN) / sizeof(DWORD)

// 옵코드배열

#define			OPCODE_TYPE_FUNC		1
#define			OPCODE_TYPE_DWORD		2
#define			OPCODE_TYPE_BYTE		3
#define        OPCODE_TYPE_CHANGEDWORD   4

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

#define			DUMP_IMAGE_BASE_ADDR		0xA00

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

	XMsg(L"LIN_OPCODE_PAT_SIZE : %d", LIN_OPCODE_PAT_SIZE);


	TCHAR	szTemp[MAX_PATH];
	DWORD	dwPatchTime = GetTickCount();

	//////////////////////////////////////////////////////////////////////////
	// 옵코드패턴로드
	LoadPattern();

	if (_taccess_s(m_editPath, 0))
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
	sprintf_s(szAddr, "#include \"../gameaddress.h\"");
	fwrite(szAddr, strlen(szAddr), 1, saveFile);
	fwrite(szReturn, 2, 1, saveFile);
	fwrite(szReturn, 2, 1, saveFile);



	for (INT I = 0; I < LIN_OPCODE_PAT_SIZE / 3; I++)
	{
		POPCODE_ARRAY	pOpcodeArray = (POPCODE_ARRAY)&LIN_OPCODE_ARRAY(I);
		XMsg(L"%d", I);
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
				sprintf_s(szAddr, "%s\t%S\t\t  0x%.8X // %s\r\n", "#define", pOpcodeArray->szName, pOpcodeArray->dwBaseAddr, szComment);
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

