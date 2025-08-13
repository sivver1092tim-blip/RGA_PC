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

// ScriptStruct LiveLinkMovieScene.LiveLinkPropertyData
// 0x0058
struct FLiveLinkMovieScene_LiveLinkPropertyData
{
	struct FName                                       PropertyName;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FMovieScene_MovieSceneFloatChannel>  FloatChannel;                                             // 0x0008(0x0010) (ZeroConstructor)
	TArray<struct FMovieSceneTracks_MovieSceneStringChannel> StringChannel;                                            // 0x0018(0x0010) (ZeroConstructor)
	TArray<struct FMovieScene_MovieSceneIntegerChannel> IntegerChannel;                                           // 0x0028(0x0010) (ZeroConstructor)
	TArray<struct FMovieScene_MovieSceneBoolChannel>   BoolChannel;                                              // 0x0038(0x0010) (ZeroConstructor)
	TArray<struct FMovieScene_MovieSceneByteChannel>   ByteChannel;                                              // 0x0048(0x0010) (ZeroConstructor)
};

// ScriptStruct LiveLinkMovieScene.LiveLinkSubSectionData
// 0x0010
struct FLiveLinkMovieScene_LiveLinkSubSectionData
{
	TArray<struct FLiveLinkMovieScene_LiveLinkPropertyData> Properties;                                               // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct LiveLinkMovieScene.MovieSceneLiveLinkSectionTemplate
// 0x0080 (0x00C8 - 0x0048)
struct FLiveLinkMovieScene_MovieSceneLiveLinkSectionTemplate : public FMovieScene_MovieScenePropertySectionTemplate
{
	struct FLiveLinkInterface_LiveLinkSubjectPreset    SubjectPreset;                                            // 0x0048(0x0038)
	TArray<bool>                                       ChannelMask;                                              // 0x0080(0x0010) (ZeroConstructor)
	TArray<struct FLiveLinkMovieScene_LiveLinkSubSectionData> SubSectionsData;                                          // 0x0090(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x28];                                      // 0x00A0(0x0028) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
