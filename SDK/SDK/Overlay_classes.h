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

// Class Overlay.Overlays
// 0x0000 (0x0028 - 0x0028)
class UOverlay_Overlays : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Overlay.Overlays");
		if (!ptr)
			ptr = UObject::FindClass("Class Overlay.Overlays");
		return ptr;
	}

};


// Class Overlay.BasicOverlays
// 0x0010 (0x0038 - 0x0028)
class UOverlay_BasicOverlays : public UOverlay_Overlays
{
public:
	TArray<struct FOverlay_OverlayItem>                Overlays;                                                 // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Overlay.BasicOverlays");
		if (!ptr)
			ptr = UObject::FindClass("Class Overlay.BasicOverlays");
		return ptr;
	}

};


// Class Overlay.LocalizedOverlays
// 0x0058 (0x0080 - 0x0028)
class UOverlay_LocalizedOverlays : public UOverlay_Overlays
{
public:
	class UOverlay_BasicOverlays*                      DefaultOverlays;                                          // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TMap<struct FString, class UOverlay_BasicOverlays*> LocaleToOverlaysMap;                                      // 0x0030(0x0050) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Overlay.LocalizedOverlays");
		if (!ptr)
			ptr = UObject::FindClass("Class Overlay.LocalizedOverlays");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
