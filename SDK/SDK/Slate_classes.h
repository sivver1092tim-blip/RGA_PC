#pragma once

// Name: , Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x1)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class Slate.ButtonWidgetStyle
// 0x0278 (0x02A8 - 0x0030)
class USlate_ButtonWidgetStyle : public USlateCore_SlateWidgetStyleContainerBase
{
public:
	struct FSlateCore_ButtonStyle                      ButtonStyle;                                              // 0x0030(0x0278) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.ButtonWidgetStyle");
		if (!ptr)
			ptr = UObject::FindClass("Class Slate.ButtonWidgetStyle");
		return ptr;
	}

};


// Class Slate.CheckBoxWidgetStyle
// 0x0580 (0x05B0 - 0x0030)
class USlate_CheckBoxWidgetStyle : public USlateCore_SlateWidgetStyleContainerBase
{
public:
	struct FSlateCore_CheckBoxStyle                    CheckBoxStyle;                                            // 0x0030(0x0580) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.CheckBoxWidgetStyle");
		if (!ptr)
			ptr = UObject::FindClass("Class Slate.CheckBoxWidgetStyle");
		return ptr;
	}

};


// Class Slate.ComboBoxWidgetStyle
// 0x03D8 (0x0408 - 0x0030)
class USlate_ComboBoxWidgetStyle : public USlateCore_SlateWidgetStyleContainerBase
{
public:
	struct FSlateCore_ComboBoxStyle                    ComboBoxStyle;                                            // 0x0030(0x03D8) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.ComboBoxWidgetStyle");
		if (!ptr)
			ptr = UObject::FindClass("Class Slate.ComboBoxWidgetStyle");
		return ptr;
	}

};


// Class Slate.EditableTextBoxWidgetStyle
// 0x07F0 (0x0820 - 0x0030)
class USlate_EditableTextBoxWidgetStyle : public USlateCore_SlateWidgetStyleContainerBase
{
public:
	struct FSlateCore_EditableTextBoxStyle             EditableTextBoxStyle;                                     // 0x0030(0x07F0) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.EditableTextBoxWidgetStyle");
		if (!ptr)
			ptr = UObject::FindClass("Class Slate.EditableTextBoxWidgetStyle");
		return ptr;
	}

};


// Class Slate.ComboButtonWidgetStyle
// 0x03A0 (0x03D0 - 0x0030)
class USlate_ComboButtonWidgetStyle : public USlateCore_SlateWidgetStyleContainerBase
{
public:
	struct FSlateCore_ComboButtonStyle                 ComboButtonStyle;                                         // 0x0030(0x03A0) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.ComboButtonWidgetStyle");
		if (!ptr)
			ptr = UObject::FindClass("Class Slate.ComboButtonWidgetStyle");
		return ptr;
	}

};


// Class Slate.ProgressWidgetStyle
// 0x01A0 (0x01D0 - 0x0030)
class USlate_ProgressWidgetStyle : public USlateCore_SlateWidgetStyleContainerBase
{
public:
	struct FSlateCore_ProgressBarStyle                 ProgressBarStyle;                                         // 0x0030(0x01A0) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.ProgressWidgetStyle");
		if (!ptr)
			ptr = UObject::FindClass("Class Slate.ProgressWidgetStyle");
		return ptr;
	}

};


// Class Slate.ScrollBarWidgetStyle
// 0x04D0 (0x0500 - 0x0030)
class USlate_ScrollBarWidgetStyle : public USlateCore_SlateWidgetStyleContainerBase
{
public:
	struct FSlateCore_ScrollBarStyle                   ScrollBarStyle;                                           // 0x0030(0x04D0) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.ScrollBarWidgetStyle");
		if (!ptr)
			ptr = UObject::FindClass("Class Slate.ScrollBarWidgetStyle");
		return ptr;
	}

};


// Class Slate.ScrollBoxWidgetStyle
// 0x0228 (0x0258 - 0x0030)
class USlate_ScrollBoxWidgetStyle : public USlateCore_SlateWidgetStyleContainerBase
{
public:
	struct FSlateCore_ScrollBoxStyle                   ScrollBoxStyle;                                           // 0x0030(0x0228) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.ScrollBoxWidgetStyle");
		if (!ptr)
			ptr = UObject::FindClass("Class Slate.ScrollBoxWidgetStyle");
		return ptr;
	}

};


// Class Slate.SlateSettings
// 0x0008 (0x0030 - 0x0028)
class USlate_SlateSettings : public UObject
{
public:
	bool                                               bExplicitCanvasChildZOrder;                               // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.SlateSettings");
		if (!ptr)
			ptr = UObject::FindClass("Class Slate.SlateSettings");
		return ptr;
	}

};


// Class Slate.SpinBoxWidgetStyle
// 0x02E8 (0x0318 - 0x0030)
class USlate_SpinBoxWidgetStyle : public USlateCore_SlateWidgetStyleContainerBase
{
public:
	struct FSlateCore_SpinBoxStyle                     SpinBoxStyle;                                             // 0x0030(0x02E8) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.SpinBoxWidgetStyle");
		if (!ptr)
			ptr = UObject::FindClass("Class Slate.SpinBoxWidgetStyle");
		return ptr;
	}

};


// Class Slate.TextBlockWidgetStyle
// 0x0268 (0x0298 - 0x0030)
class USlate_TextBlockWidgetStyle : public USlateCore_SlateWidgetStyleContainerBase
{
public:
	struct FSlateCore_TextBlockStyle                   TextBlockStyle;                                           // 0x0030(0x0268) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.TextBlockWidgetStyle");
		if (!ptr)
			ptr = UObject::FindClass("Class Slate.TextBlockWidgetStyle");
		return ptr;
	}

};


// Class Slate.ToolMenuBase
// 0x0000 (0x0028 - 0x0028)
class USlate_ToolMenuBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.ToolMenuBase");
		if (!ptr)
			ptr = UObject::FindClass("Class Slate.ToolMenuBase");
		return ptr;
	}

};


// Class Slate.EditableTextWidgetStyle
// 0x0218 (0x0248 - 0x0030)
class USlate_EditableTextWidgetStyle : public USlateCore_SlateWidgetStyleContainerBase
{
public:
	struct FSlateCore_EditableTextStyle                EditableTextStyle;                                        // 0x0030(0x0218) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.EditableTextWidgetStyle");
		if (!ptr)
			ptr = UObject::FindClass("Class Slate.EditableTextWidgetStyle");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
