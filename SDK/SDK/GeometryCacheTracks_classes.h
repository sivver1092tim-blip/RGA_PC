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

// Class GeometryCacheTracks.MovieSceneGeometryCacheSection
// 0x0040 (0x0120 - 0x00E0)
class UGeometryCacheTracks_MovieSceneGeometryCacheSection : public UMovieScene_MovieSceneSection
{
public:
	struct FGeometryCacheTracks_MovieSceneGeometryCacheParams Params;                                                   // 0x00E0(0x0040) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCacheTracks.MovieSceneGeometryCacheSection");
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryCacheTracks.MovieSceneGeometryCacheSection");
		return ptr;
	}

};


// Class GeometryCacheTracks.MovieSceneGeometryCacheTrack
// 0x0010 (0x0068 - 0x0058)
class UGeometryCacheTracks_MovieSceneGeometryCacheTrack : public UMovieScene_MovieSceneNameableTrack
{
public:
	TArray<class UMovieScene_MovieSceneSection*>       AnimationSections;                                        // 0x0058(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCacheTracks.MovieSceneGeometryCacheTrack");
		if (!ptr)
			ptr = UObject::FindClass("Class GeometryCacheTracks.MovieSceneGeometryCacheTrack");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
