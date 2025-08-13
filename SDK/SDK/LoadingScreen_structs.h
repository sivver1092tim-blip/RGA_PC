#pragma once

// Name: , Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x1)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct LoadingScreen.LoadingScreenDescription
// 0x00A0
struct FLoadingScreen_LoadingScreenDescription
{
	float                                              MinimumLoadingScreenDisplayTime;                          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoCompleteWhenLoadingCompletes;                        // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bMoviesAreSkippable;                                      // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWaitForManualStop;                                       // 0x0006(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FMoviePlayer_MoviePlayer_EMoviePlaybackType> PlaybackType;                                             // 0x0007(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShowUIOverlay;                                           // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FText                                       LoadingText;                                              // 0x0010(0x0018) (Edit, BlueprintVisible)
	struct FSlateCore_SlateFontInfo                    LoadingFont;                                              // 0x0028(0x0050) (Edit, BlueprintVisible)
	TArray<struct FString>                             MoviePaths;                                               // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FSoftObjectPath>                     Images;                                                   // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TEnumAsByte<FSlate_Slate_EStretch>                 ImageStretch;                                             // 0x0098(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
