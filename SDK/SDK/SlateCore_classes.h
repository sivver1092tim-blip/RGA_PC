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

// Class SlateCore.FontFaceInterface
// 0x0000 (0x0028 - 0x0028)
class USlateCore_FontFaceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SlateCore.FontFaceInterface");
		if (!ptr)
			ptr = UObject::FindClass("Class SlateCore.FontFaceInterface");
		return ptr;
	}

};


// Class SlateCore.FontProviderInterface
// 0x0000 (0x0028 - 0x0028)
class USlateCore_FontProviderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SlateCore.FontProviderInterface");
		if (!ptr)
			ptr = UObject::FindClass("Class SlateCore.FontProviderInterface");
		return ptr;
	}

};


// Class SlateCore.SlateTypes
// 0x0000 (0x0028 - 0x0028)
class USlateCore_SlateTypes : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SlateCore.SlateTypes");
		if (!ptr)
			ptr = UObject::FindClass("Class SlateCore.SlateTypes");
		return ptr;
	}

};


// Class SlateCore.SlateWidgetStyleAsset
// 0x0008 (0x0030 - 0x0028)
class USlateCore_SlateWidgetStyleAsset : public UObject
{
public:
	class USlateCore_SlateWidgetStyleContainerBase*    CustomStyle;                                              // 0x0028(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SlateCore.SlateWidgetStyleAsset");
		if (!ptr)
			ptr = UObject::FindClass("Class SlateCore.SlateWidgetStyleAsset");
		return ptr;
	}

};


// Class SlateCore.SlateWidgetStyleContainerBase
// 0x0008 (0x0030 - 0x0028)
class USlateCore_SlateWidgetStyleContainerBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SlateCore.SlateWidgetStyleContainerBase");
		if (!ptr)
			ptr = UObject::FindClass("Class SlateCore.SlateWidgetStyleContainerBase");
		return ptr;
	}

};


// Class SlateCore.SlateWidgetStyleContainerInterface
// 0x0000 (0x0028 - 0x0028)
class USlateCore_SlateWidgetStyleContainerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SlateCore.SlateWidgetStyleContainerInterface");
		if (!ptr)
			ptr = UObject::FindClass("Class SlateCore.SlateWidgetStyleContainerInterface");
		return ptr;
	}

};


// Class SlateCore.FontBulkData
// 0x00B8 (0x00E0 - 0x0028)
class USlateCore_FontBulkData : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0028(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SlateCore.FontBulkData");
		if (!ptr)
			ptr = UObject::FindClass("Class SlateCore.FontBulkData");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
