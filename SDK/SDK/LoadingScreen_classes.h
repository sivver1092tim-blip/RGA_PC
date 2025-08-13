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

// Class LoadingScreen.LoadingScreenSettings
// 0x01A8 (0x01E0 - 0x0038)
class ULoadingScreen_LoadingScreenSettings : public UEngine_DeveloperSettings
{
public:
	struct FLoadingScreen_LoadingScreenDescription     StartupScreen;                                            // 0x0038(0x00A0) (Edit, Config)
	struct FLoadingScreen_LoadingScreenDescription     DefaultScreen;                                            // 0x00D8(0x00A0) (Edit, Config)
	struct FSlateCore_SlateFontInfo                    TipFont;                                                  // 0x0178(0x0050) (Edit, BlueprintVisible, Config)
	float                                              TipWrapAt;                                                // 0x01C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01CC(0x0004) MISSED OFFSET
	TArray<struct FText>                               Tips;                                                     // 0x01D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LoadingScreen.LoadingScreenSettings");
		if (!ptr)
			ptr = UObject::FindClass("Class LoadingScreen.LoadingScreenSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
