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

// Class ActorSequence.ActorSequence
// 0x0028 (0x0370 - 0x0348)
class UActorSequence_ActorSequence : public UMovieScene_MovieSceneSequence
{
public:
	class UMovieScene_MovieScene*                      MovieScene;                                               // 0x0348(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FActorSequence_ActorSequenceObjectReferenceMap ObjectReferences;                                         // 0x0350(0x0020)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ActorSequence.ActorSequence");
		if (!ptr)
			ptr = UObject::FindClass("Class ActorSequence.ActorSequence");
		return ptr;
	}

};


// Class ActorSequence.ActorSequenceComponent
// 0x0028 (0x00D8 - 0x00B0)
class UActorSequence_ActorSequenceComponent : public UEngine_ActorComponent
{
public:
	struct FMovieScene_MovieSceneSequencePlaybackSettings PlaybackSettings;                                         // 0x00B0(0x0014) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00C4(0x0004) MISSED OFFSET
	class UActorSequence_ActorSequence*                Sequence;                                                 // 0x00C8(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UActorSequence_ActorSequencePlayer*          SequencePlayer;                                           // 0x00D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ActorSequence.ActorSequenceComponent");
		if (!ptr)
			ptr = UObject::FindClass("Class ActorSequence.ActorSequenceComponent");
		return ptr;
	}

};


// Class ActorSequence.ActorSequencePlayer
// 0x0000 (0x0870 - 0x0870)
class UActorSequence_ActorSequencePlayer : public UMovieScene_MovieSceneSequencePlayer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ActorSequence.ActorSequencePlayer");
		if (!ptr)
			ptr = UObject::FindClass("Class ActorSequence.ActorSequencePlayer");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
