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

// Class MovieScene.MovieSceneSignedObject
// 0x0028 (0x0050 - 0x0028)
class UMovieScene_MovieSceneSignedObject : public UObject
{
public:
	struct FGuid                                       Signature;                                                // 0x0028(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneSignedObject");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieScene.MovieSceneSignedObject");
		return ptr;
	}

};


// Class MovieScene.MovieSceneSection
// 0x0090 (0x00E0 - 0x0050)
class UMovieScene_MovieSceneSection : public UMovieScene_MovieSceneSignedObject
{
public:
	struct FMovieScene_MovieSceneSectionEvalOptions    EvalOptions;                                              // 0x0050(0x0002) (Edit)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0052(0x0006) MISSED OFFSET
	struct FMovieScene_MovieSceneEasingSettings        Easing;                                                   // 0x0058(0x0038) (Edit)
	struct FMovieScene_MovieSceneFrameRange            SectionRange;                                             // 0x0090(0x0010) (Edit)
	struct FFrameNumber                                PreRollFrames;                                            // 0x00A0(0x0004) (Edit)
	struct FFrameNumber                                PostRollFrames;                                           // 0x00A4(0x0004) (Edit)
	int                                                RowIndex;                                                 // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                OverlapPriority;                                          // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsActive : 1;                                            // 0x00B0(0x0001) (Edit)
	unsigned char                                      bIsLocked : 1;                                            // 0x00B0(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00B1(0x0003) MISSED OFFSET
	float                                              StartTime;                                                // 0x00B4(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              EndTime;                                                  // 0x00B8(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              PrerollTime;                                              // 0x00BC(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              PostrollTime;                                             // 0x00C0(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      bIsInfinite : 1;                                          // 0x00C4(0x0001) (Deprecated)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00C5(0x0003) MISSED OFFSET
	bool                                               bSupportsInfiniteRange;                                   // 0x00C8(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FMovieScene_OptionalMovieSceneBlendType     BlendType;                                                // 0x00C9(0x0002)
	unsigned char                                      UnknownData03[0x15];                                      // 0x00CB(0x0015) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneSection");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieScene.MovieSceneSection");
		return ptr;
	}


	void SetRowIndex(int NewRowIndex);
	void SetPreRollFrames(int InPreRollFrames);
	void SetPostRollFrames(int InPostRollFrames);
	void SetOverlapPriority(int NewPriority);
	void SetIsLocked(bool bInIsLocked);
	void SetIsActive(bool bInIsActive);
	void SetCompletionMode(FMovieScene_MovieScene_EMovieSceneCompletionMode InCompletionMode);
	void SetBlendType(FMovieScene_MovieScene_EMovieSceneBlendType InBlendType);
	bool IsLocked();
	bool IsActive();
	int GetRowIndex();
	int GetPreRollFrames();
	int GetPostRollFrames();
	int GetOverlapPriority();
	FMovieScene_MovieScene_EMovieSceneCompletionMode GetCompletionMode();
	struct FMovieScene_OptionalMovieSceneBlendType GetBlendType();
};


// Class MovieScene.MovieSceneTrack
// 0x0008 (0x0058 - 0x0050)
class UMovieScene_MovieSceneTrack : public UMovieScene_MovieSceneSignedObject
{
public:
	struct FMovieScene_MovieSceneTrackEvalOptions      EvalOptions;                                              // 0x0050(0x0004) (Edit)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0054(0x0001) MISSED OFFSET
	bool                                               bIsEvalDisabled;                                          // 0x0055(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0056(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneTrack");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieScene.MovieSceneTrack");
		return ptr;
	}

};


// Class MovieScene.MovieSceneNameableTrack
// 0x0000 (0x0058 - 0x0058)
class UMovieScene_MovieSceneNameableTrack : public UMovieScene_MovieSceneTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneNameableTrack");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieScene.MovieSceneNameableTrack");
		return ptr;
	}

};


// Class MovieScene.MovieSceneSequence
// 0x02F8 (0x0348 - 0x0050)
class UMovieScene_MovieSceneSequence : public UMovieScene_MovieSceneSignedObject
{
public:
	struct FMovieScene_MovieSceneEvaluationTemplate    PrecompiledEvaluationTemplate;                            // 0x0050(0x02F0)
	FMovieScene_MovieScene_EMovieSceneCompletionMode   DefaultCompletionMode;                                    // 0x0340(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bParentContextsAreSignificant;                            // 0x0341(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bPlayableDirectly;                                        // 0x0342(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0343(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneSequence");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieScene.MovieSceneSequence");
		return ptr;
	}


	TArray<struct FMovieScene_MovieSceneObjectBindingID> FindBindingsByTag(const struct FName& InBindingName);
	struct FMovieScene_MovieSceneObjectBindingID FindBindingByTag(const struct FName& InBindingName);
};


// Class MovieScene.MovieSceneSequencePlayer
// 0x0848 (0x0870 - 0x0028)
class UMovieScene_MovieSceneSequencePlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x3E0];                                     // 0x0028(0x03E0) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPlay;                                                   // 0x0408(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPlayReverse;                                            // 0x0418(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStop;                                                   // 0x0428(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPause;                                                  // 0x0438(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFinished;                                               // 0x0448(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TEnumAsByte<FMovieScene_MovieScene_EMovieScenePlayerStatus> Status;                                                   // 0x0458(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0459(0x0003) MISSED OFFSET
	unsigned char                                      bReversePlayback : 1;                                     // 0x045C(0x0001) (Net)
	unsigned char                                      UnknownData02[0x3];                                       // 0x045D(0x0003) MISSED OFFSET
	class UMovieScene_MovieSceneSequence*              Sequence;                                                 // 0x0460(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FFrameNumber                                StartTime;                                                // 0x0468(0x0004) (Net)
	int                                                DurationFrames;                                           // 0x046C(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	int                                                CurrentNumLoops;                                          // 0x0470(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x14];                                      // 0x0474(0x0014) MISSED OFFSET
	struct FMovieScene_MovieSceneSequencePlaybackSettings PlaybackSettings;                                         // 0x0488(0x0014) (Net)
	unsigned char                                      UnknownData04[0x4];                                       // 0x049C(0x0004) MISSED OFFSET
	struct FMovieScene_MovieSceneRootEvaluationTemplateInstance RootTemplateInstance;                                     // 0x04A0(0x0308) (Transient)
	unsigned char                                      UnknownData05[0x68];                                      // 0x07A8(0x0068) MISSED OFFSET
	struct FMovieScene_MovieSceneSequenceReplProperties NetSyncProps;                                             // 0x0810(0x0010) (Net)
	TScriptInterface<class UMovieScene_MovieScenePlaybackClient> PlaybackClient;                                           // 0x0820(0x0030) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x40];                                      // 0x0830(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneSequencePlayer");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieScene.MovieSceneSequencePlayer");
		return ptr;
	}


	void StopAtCurrentTime();
	void Stop();
	void SetTimeRange(float StartTime, float Duration);
	void SetPlayRate(float PlayRate);
	void SetPlaybackRange(float NewStartTime, float NewEndTime);
	void SetPlaybackPosition(float NewPlaybackPosition);
	void SetFrameRate(const struct FFrameRate& FrameRate);
	void SetFrameRange(int StartFrame, int Duration);
	void SetDisableCameraCuts(bool bInDisableCameraCuts);
	void ScrubToSeconds(float TimeInSeconds);
	bool ScrubToMarkedFrame(const struct FString& InLabel);
	void ScrubToFrame(const struct FFrameTime& NewPosition);
	void Scrub();
	void RPC_OnStopEvent(const struct FFrameTime& StoppedTime);
	void RPC_ExplicitServerUpdateEvent(FMovieScene_MovieScene_EUpdatePositionMethod Method, const struct FFrameTime& RelevantTime);
	void PlayToSeconds(float TimeInSeconds);
	bool PlayToMarkedFrame(const struct FString& InLabel);
	void PlayToFrame(const struct FFrameTime& NewPosition);
	void PlayReverse();
	void PlayLooping(int NumLoops);
	void Play();
	void Pause();
	void JumpToSeconds(float TimeInSeconds);
	void JumpToPosition(float NewPlaybackPosition);
	bool JumpToMarkedFrame(const struct FString& InLabel);
	void JumpToFrame(const struct FFrameTime& NewPosition);
	bool IsReversed();
	bool IsPlaying();
	bool IsPaused();
	void GoToEndAndStop();
	struct FQualifiedFrameTime GetStartTime();
	float GetPlayRate();
	float GetPlaybackStart();
	float GetPlaybackPosition();
	float GetPlaybackEnd();
	TArray<struct FMovieScene_MovieSceneObjectBindingID> GetObjectBindings(class UObject* InObject);
	float GetLength();
	struct FFrameRate GetFrameRate();
	int GetFrameDuration();
	struct FQualifiedFrameTime GetEndTime();
	struct FQualifiedFrameTime GetDuration();
	bool GetDisableCameraCuts();
	struct FQualifiedFrameTime GetCurrentTime();
	TArray<class UObject*> GetBoundObjects(const struct FMovieScene_MovieSceneObjectBindingID& ObjectBinding);
	void ChangePlaybackDirection();
};


// Class MovieScene.MovieScenePlaybackClient
// 0x0000 (0x0028 - 0x0028)
class UMovieScene_MovieScenePlaybackClient : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieScenePlaybackClient");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieScene.MovieScenePlaybackClient");
		return ptr;
	}

};


// Class MovieScene.MovieScene
// 0x00E0 (0x0130 - 0x0050)
class UMovieScene_MovieScene : public UMovieScene_MovieSceneSignedObject
{
public:
	TArray<struct FMovieScene_MovieSceneSpawnable>     Spawnables;                                               // 0x0050(0x0010) (ZeroConstructor)
	TArray<struct FMovieScene_MovieScenePossessable>   Possessables;                                             // 0x0060(0x0010) (ZeroConstructor)
	TArray<struct FMovieScene_MovieSceneBinding>       ObjectBindings;                                           // 0x0070(0x0010) (ZeroConstructor)
	TMap<struct FName, struct FMovieScene_MovieSceneObjectBindingIDs> BindingGroups;                                            // 0x0080(0x0050) (ZeroConstructor)
	TArray<class UMovieScene_MovieSceneTrack*>         MasterTracks;                                             // 0x00D0(0x0010) (ExportObject, ZeroConstructor)
	class UMovieScene_MovieSceneTrack*                 CameraCutTrack;                                           // 0x00E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FMovieScene_MovieSceneFrameRange            SelectionRange;                                           // 0x00E8(0x0010)
	struct FMovieScene_MovieSceneFrameRange            PlaybackRange;                                            // 0x00F8(0x0010)
	struct FFrameRate                                  TickResolution;                                           // 0x0108(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FFrameRate                                  DisplayRate;                                              // 0x0110(0x0008) (ZeroConstructor, IsPlainOldData)
	FMovieScene_MovieScene_EMovieSceneEvaluationType   EvaluationType;                                           // 0x0118(0x0001) (ZeroConstructor, IsPlainOldData)
	FMovieScene_MovieScene_EUpdateClockSource          ClockSource;                                              // 0x0119(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x011A(0x0006) MISSED OFFSET
	TArray<struct FMovieScene_MovieSceneMarkedFrame>   MarkedFrames;                                             // 0x0120(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieScene");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieScene.MovieScene");
		return ptr;
	}

};


// Class MovieScene.MovieSceneBindingOwnerInterface
// 0x0000 (0x0028 - 0x0028)
class UMovieScene_MovieSceneBindingOwnerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneBindingOwnerInterface");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieScene.MovieSceneBindingOwnerInterface");
		return ptr;
	}

};


// Class MovieScene.MovieSceneBuiltInEasingFunction
// 0x0010 (0x0038 - 0x0028)
class UMovieScene_MovieSceneBuiltInEasingFunction : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	FMovieScene_MovieScene_EMovieSceneBuiltInEasing    Type;                                                     // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneBuiltInEasingFunction");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieScene.MovieSceneBuiltInEasingFunction");
		return ptr;
	}

};


// Class MovieScene.MovieSceneEasingExternalCurve
// 0x0010 (0x0038 - 0x0028)
class UMovieScene_MovieSceneEasingExternalCurve : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UEngine_CurveFloat*                          Curve;                                                    // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneEasingExternalCurve");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieScene.MovieSceneEasingExternalCurve");
		return ptr;
	}

};


// Class MovieScene.MovieSceneEasingFunction
// 0x0000 (0x0028 - 0x0028)
class UMovieScene_MovieSceneEasingFunction : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneEasingFunction");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieScene.MovieSceneEasingFunction");
		return ptr;
	}


	float OnEvaluate(float Interp);
};


// Class MovieScene.MovieSceneFolder
// 0x0048 (0x0070 - 0x0028)
class UMovieScene_MovieSceneFolder : public UObject
{
public:
	struct FName                                       FolderName;                                               // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UMovieScene_MovieSceneFolder*>        ChildFolders;                                             // 0x0030(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UMovieScene_MovieSceneTrack*>         ChildMasterTracks;                                        // 0x0040(0x0010) (ExportObject, ZeroConstructor)
	TArray<struct FString>                             ChildObjectBindingStrings;                                // 0x0050(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0060(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneFolder");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieScene.MovieSceneFolder");
		return ptr;
	}

};


// Class MovieScene.MovieSceneKeyProxy
// 0x0000 (0x0028 - 0x0028)
class UMovieScene_MovieSceneKeyProxy : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneKeyProxy");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieScene.MovieSceneKeyProxy");
		return ptr;
	}

};


// Class MovieScene.MovieSceneSubTrack
// 0x0010 (0x0068 - 0x0058)
class UMovieScene_MovieSceneSubTrack : public UMovieScene_MovieSceneNameableTrack
{
public:
	TArray<class UMovieScene_MovieSceneSection*>       Sections;                                                 // 0x0058(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneSubTrack");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieScene.MovieSceneSubTrack");
		return ptr;
	}

};


// Class MovieScene.TestMovieSceneTrack
// 0x0018 (0x0070 - 0x0058)
class UMovieScene_TestMovieSceneTrack : public UMovieScene_MovieSceneTrack
{
public:
	bool                                               bHighPassFilter;                                          // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
	TArray<class UMovieScene_MovieSceneSection*>       SectionArray;                                             // 0x0060(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.TestMovieSceneTrack");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieScene.TestMovieSceneTrack");
		return ptr;
	}

};


// Class MovieScene.MovieSceneSubSection
// 0x0070 (0x0150 - 0x00E0)
class UMovieScene_MovieSceneSubSection : public UMovieScene_MovieSceneSection
{
public:
	struct FMovieScene_MovieSceneSectionParameters     Parameters;                                               // 0x00E0(0x0018) (Edit, BlueprintVisible)
	float                                              StartOffset;                                              // 0x00F8(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              TimeScale;                                                // 0x00FC(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              PrerollTime;                                              // 0x0100(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0104(0x0004) MISSED OFFSET
	class UMovieScene_MovieSceneSequence*              SubSequence;                                              // 0x0108(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TLazyObjectPtr<class AEngine_Actor>                ActorToRecord;                                            // 0x0110(0x001C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x012C(0x0004) MISSED OFFSET
	struct FString                                     TargetSequenceName;                                       // 0x0130(0x0010) (Edit, ZeroConstructor)
	struct FEngine_DirectoryPath                       TargetPathToRecordTo;                                     // 0x0140(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneSubSection");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieScene.MovieSceneSubSection");
		return ptr;
	}


	void SetSequence(class UMovieScene_MovieSceneSequence* Sequence);
	class UMovieScene_MovieSceneSequence* GetSequence();
};


// Class MovieScene.TestMovieSceneSequence
// 0x0008 (0x0350 - 0x0348)
class UMovieScene_TestMovieSceneSequence : public UMovieScene_MovieSceneSequence
{
public:
	class UMovieScene_MovieScene*                      MovieScene;                                               // 0x0348(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.TestMovieSceneSequence");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieScene.TestMovieSceneSequence");
		return ptr;
	}

};


// Class MovieScene.TestMovieSceneSection
// 0x0000 (0x00E0 - 0x00E0)
class UMovieScene_TestMovieSceneSection : public UMovieScene_MovieSceneSection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.TestMovieSceneSection");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieScene.TestMovieSceneSection");
		return ptr;
	}

};


// Class MovieScene.MovieSceneBindingOverrides
// 0x0068 (0x0090 - 0x0028)
class UMovieScene_MovieSceneBindingOverrides : public UObject
{
public:
	TArray<struct FMovieScene_MovieSceneBindingOverrideData> BindingData;                                              // 0x0028(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0038(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneBindingOverrides");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieScene.MovieSceneBindingOverrides");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
