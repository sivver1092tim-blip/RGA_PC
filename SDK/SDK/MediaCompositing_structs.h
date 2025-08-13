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

// ScriptStruct MediaCompositing.MovieSceneMediaSectionParams
// 0x0030
struct FMediaCompositing_MovieSceneMediaSectionParams
{
	class UMediaAssets_MediaSoundComponent*            MediaSoundComponent;                                      // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMediaAssets_MediaSource*                    MediaSource;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMediaAssets_MediaTexture*                   MediaTexture;                                             // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMediaAssets_MediaPlayer*                    MediaPlayer;                                              // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FFrameNumber                                SectionStartFrame;                                        // 0x0020(0x0004)
	struct FFrameNumber                                SectionEndFrame;                                          // 0x0024(0x0004)
	bool                                               bLooping;                                                 // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	struct FFrameNumber                                StartFrameOffset;                                         // 0x002C(0x0004)
};

// ScriptStruct MediaCompositing.MovieSceneMediaSectionTemplate
// 0x0030 (0x0050 - 0x0020)
struct FMediaCompositing_MovieSceneMediaSectionTemplate : public FMovieScene_MovieSceneEvalTemplate
{
	struct FMediaCompositing_MovieSceneMediaSectionParams Params;                                                   // 0x0020(0x0030)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
