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

// Class MovieSceneTracks.MovieScenePropertyTrack
// 0x0030 (0x0088 - 0x0058)
class UMovieSceneTracks_MovieScenePropertyTrack : public UMovieScene_MovieSceneNameableTrack
{
public:
	class UMovieScene_MovieSceneSection*               SectionToKey;                                             // 0x0058(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       PropertyName;                                             // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     PropertyPath;                                             // 0x0068(0x0010) (ZeroConstructor)
	TArray<class UMovieScene_MovieSceneSection*>       Sections;                                                 // 0x0078(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScenePropertyTrack");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieScenePropertyTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneTransformOrigin
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneTracks_MovieSceneTransformOrigin : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneTransformOrigin");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneTransformOrigin");
		return ptr;
	}


	struct FTransform BP_GetTransformOrigin();
};


// Class MovieSceneTracks.MovieScene3DConstraintSection
// 0x0028 (0x0108 - 0x00E0)
class UMovieSceneTracks_MovieScene3DConstraintSection : public UMovieScene_MovieSceneSection
{
public:
	struct FGuid                                       ConstraintId;                                             // 0x00E0(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FMovieScene_MovieSceneObjectBindingID       ConstraintBindingID;                                      // 0x00F0(0x0018) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DConstraintSection");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DConstraintSection");
		return ptr;
	}


	void SetConstraintBindingID(const struct FMovieScene_MovieSceneObjectBindingID& InConstraintBindingID);
	struct FMovieScene_MovieSceneObjectBindingID GetConstraintBindingID();
};


// Class MovieSceneTracks.MovieScene3DAttachSection
// 0x0018 (0x0120 - 0x0108)
class UMovieSceneTracks_MovieScene3DAttachSection : public UMovieSceneTracks_MovieScene3DConstraintSection
{
public:
	struct FName                                       AttachSocketName;                                         // 0x0108(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttachComponentName;                                      // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FEngine_Engine_EAttachmentRule                     AttachmentLocationRule;                                   // 0x0118(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FEngine_Engine_EAttachmentRule                     AttachmentRotationRule;                                   // 0x0119(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FEngine_Engine_EAttachmentRule                     AttachmentScaleRule;                                      // 0x011A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FEngine_Engine_EDetachmentRule                     DetachmentLocationRule;                                   // 0x011B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FEngine_Engine_EDetachmentRule                     DetachmentRotationRule;                                   // 0x011C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FEngine_Engine_EDetachmentRule                     DetachmentScaleRule;                                      // 0x011D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x011E(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DAttachSection");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DAttachSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieScene3DConstraintTrack
// 0x0010 (0x0068 - 0x0058)
class UMovieSceneTracks_MovieScene3DConstraintTrack : public UMovieScene_MovieSceneTrack
{
public:
	TArray<class UMovieScene_MovieSceneSection*>       ConstraintSections;                                       // 0x0058(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DConstraintTrack");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DConstraintTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieScene3DAttachTrack
// 0x0000 (0x0068 - 0x0068)
class UMovieSceneTracks_MovieScene3DAttachTrack : public UMovieSceneTracks_MovieScene3DConstraintTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DAttachTrack");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DAttachTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieScene3DPathSection
// 0x00A8 (0x01B0 - 0x0108)
class UMovieSceneTracks_MovieScene3DPathSection : public UMovieSceneTracks_MovieScene3DConstraintSection
{
public:
	struct FMovieScene_MovieSceneFloatChannel          TimingCurve;                                              // 0x0108(0x00A0)
	FMovieSceneTracks_MovieSceneTracks_EMovieScene3DPathSection_Axis FrontAxisEnum;                                            // 0x01A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FMovieSceneTracks_MovieSceneTracks_EMovieScene3DPathSection_Axis UpAxisEnum;                                               // 0x01A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x01AA(0x0002) MISSED OFFSET
	unsigned char                                      bFollow : 1;                                              // 0x01AC(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bReverse : 1;                                             // 0x01AC(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bForceUpright : 1;                                        // 0x01AC(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x3];                                       // 0x01AD(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DPathSection");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DPathSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieScene3DPathTrack
// 0x0000 (0x0068 - 0x0068)
class UMovieSceneTracks_MovieScene3DPathTrack : public UMovieSceneTracks_MovieScene3DConstraintTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DPathTrack");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DPathTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieScene3DTransformSection
// 0x0650 (0x0730 - 0x00E0)
class UMovieSceneTracks_MovieScene3DTransformSection : public UMovieScene_MovieSceneSection
{
public:
	struct FMovieSceneTracks_MovieSceneTransformMask   TransformMask;                                            // 0x00E0(0x0004)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET
	struct FMovieScene_MovieSceneFloatChannel          Translation[0x3];                                         // 0x00E8(0x00A0)
	struct FMovieScene_MovieSceneFloatChannel          Rotation[0x3];                                            // 0x02C8(0x00A0)
	struct FMovieScene_MovieSceneFloatChannel          Scale[0x3];                                               // 0x04A8(0x00A0)
	struct FMovieScene_MovieSceneFloatChannel          ManualWeight;                                             // 0x0688(0x00A0)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0728(0x0004) MISSED OFFSET
	bool                                               bUseQuaternionInterpolation;                              // 0x072C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x072D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DTransformSection");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DTransformSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieScene3DTransformTrack
// 0x0000 (0x0088 - 0x0088)
class UMovieSceneTracks_MovieScene3DTransformTrack : public UMovieSceneTracks_MovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DTransformTrack");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DTransformTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneActorReferenceSection
// 0x0130 (0x0210 - 0x00E0)
class UMovieSceneTracks_MovieSceneActorReferenceSection : public UMovieScene_MovieSceneSection
{
public:
	struct FMovieSceneTracks_MovieSceneActorReferenceData ActorReferenceData;                                       // 0x00E0(0x00A0)
	struct FEngine_IntegralCurve                       ActorGuidIndexCurve;                                      // 0x0180(0x0080) (Deprecated)
	TArray<struct FString>                             ActorGuidStrings;                                         // 0x0200(0x0010) (ZeroConstructor, Deprecated)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneActorReferenceSection");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneActorReferenceSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneActorReferenceTrack
// 0x0000 (0x0088 - 0x0088)
class UMovieSceneTracks_MovieSceneActorReferenceTrack : public UMovieSceneTracks_MovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneActorReferenceTrack");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneActorReferenceTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneAudioSection
// 0x01A0 (0x0280 - 0x00E0)
class UMovieSceneTracks_MovieSceneAudioSection : public UMovieScene_MovieSceneSection
{
public:
	class UEngine_SoundBase*                           Sound;                                                    // 0x00E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFrameNumber                                StartFrameOffset;                                         // 0x00E8(0x0004) (Edit)
	float                                              StartOffset;                                              // 0x00EC(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              AudioStartTime;                                           // 0x00F0(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              AudioDilationFactor;                                      // 0x00F4(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              AudioVolume;                                              // 0x00F8(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET
	struct FMovieScene_MovieSceneFloatChannel          SoundVolume;                                              // 0x0100(0x00A0)
	struct FMovieScene_MovieSceneFloatChannel          PitchMultiplier;                                          // 0x01A0(0x00A0)
	bool                                               bSuppressSubtitles;                                       // 0x0240(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideAttenuation;                                     // 0x0241(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0242(0x0006) MISSED OFFSET
	class UEngine_SoundAttenuation*                    AttenuationSettings;                                      // 0x0248(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             OnQueueSubtitles;                                         // 0x0250(0x0014) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnAudioFinished;                                          // 0x0260(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnAudioPlaybackPercent;                                   // 0x0270(0x0010) (ZeroConstructor, InstancedReference)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneAudioSection");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneAudioSection");
		return ptr;
	}


	void SetStartOffset(const struct FFrameNumber& InStartOffset);
	void SetSound(class UEngine_SoundBase* InSound);
	struct FFrameNumber GetStartOffset();
	class UEngine_SoundBase* GetSound();
};


// Class MovieSceneTracks.MovieSceneAudioTrack
// 0x0010 (0x0068 - 0x0058)
class UMovieSceneTracks_MovieSceneAudioTrack : public UMovieScene_MovieSceneNameableTrack
{
public:
	TArray<class UMovieScene_MovieSceneSection*>       AudioSections;                                            // 0x0058(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneAudioTrack");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneAudioTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneBoolSection
// 0x0098 (0x0178 - 0x00E0)
class UMovieSceneTracks_MovieSceneBoolSection : public UMovieScene_MovieSceneSection
{
public:
	bool                                               DefaultValue;                                             // 0x00E0(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00E1(0x0007) MISSED OFFSET
	struct FMovieScene_MovieSceneBoolChannel           BoolCurve;                                                // 0x00E8(0x0090)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneBoolSection");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneBoolSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneBoolTrack
// 0x0000 (0x0088 - 0x0088)
class UMovieSceneTracks_MovieSceneBoolTrack : public UMovieSceneTracks_MovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneBoolTrack");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneBoolTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneByteTrack
// 0x0008 (0x0090 - 0x0088)
class UMovieSceneTracks_MovieSceneByteTrack : public UMovieSceneTracks_MovieScenePropertyTrack
{
public:
	class UEnum*                                       Enum;                                                     // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneByteTrack");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneByteTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneCameraAnimSection
// 0x0040 (0x0120 - 0x00E0)
class UMovieSceneTracks_MovieSceneCameraAnimSection : public UMovieScene_MovieSceneSection
{
public:
	struct FMovieSceneTracks_MovieSceneCameraAnimSectionData AnimData;                                                 // 0x00E0(0x0020) (Edit)
	class UEngine_CameraAnim*                          CameraAnim;                                               // 0x0100(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x0108(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              PlayScale;                                                // 0x010C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              BlendInTime;                                              // 0x0110(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              BlendOutTime;                                             // 0x0114(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bLooping;                                                 // 0x0118(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0119(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraAnimSection");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraAnimSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneByteSection
// 0x0098 (0x0178 - 0x00E0)
class UMovieSceneTracks_MovieSceneByteSection : public UMovieScene_MovieSceneSection
{
public:
	struct FMovieScene_MovieSceneByteChannel           ByteCurve;                                                // 0x00E0(0x0098)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneByteSection");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneByteSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneCameraCutSection
// 0x0028 (0x0108 - 0x00E0)
class UMovieSceneTracks_MovieSceneCameraCutSection : public UMovieScene_MovieSceneSection
{
public:
	struct FGuid                                       CameraGuid;                                               // 0x00E0(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FMovieScene_MovieSceneObjectBindingID       CameraBindingID;                                          // 0x00F0(0x0018) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraCutSection");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraCutSection");
		return ptr;
	}


	void SetCameraBindingID(const struct FMovieScene_MovieSceneObjectBindingID& InCameraBindingID);
	struct FMovieScene_MovieSceneObjectBindingID GetCameraBindingID();
};


// Class MovieSceneTracks.MovieSceneCameraCutTrack
// 0x0010 (0x0068 - 0x0058)
class UMovieSceneTracks_MovieSceneCameraCutTrack : public UMovieScene_MovieSceneNameableTrack
{
public:
	TArray<class UMovieScene_MovieSceneSection*>       Sections;                                                 // 0x0058(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraCutTrack");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraCutTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneCameraShakeSection
// 0x0040 (0x0120 - 0x00E0)
class UMovieSceneTracks_MovieSceneCameraShakeSection : public UMovieScene_MovieSceneSection
{
public:
	struct FMovieSceneTracks_MovieSceneCameraShakeSectionData ShakeData;                                                // 0x00E0(0x0020) (Edit)
	class UClass*                                      ShakeClass;                                               // 0x0100(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              PlayScale;                                                // 0x0108(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ECameraAnimPlaySpace>   PlaySpace;                                                // 0x010C(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x010D(0x0003) MISSED OFFSET
	struct FRotator                                    UserDefinedPlaySpace;                                     // 0x0110(0x000C) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x011C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraShakeSection");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraShakeSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneCameraShakeTrack
// 0x0010 (0x0068 - 0x0058)
class UMovieSceneTracks_MovieSceneCameraShakeTrack : public UMovieScene_MovieSceneNameableTrack
{
public:
	TArray<class UMovieScene_MovieSceneSection*>       CameraShakeSections;                                      // 0x0058(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraShakeTrack");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraShakeTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneCinematicShotSection
// 0x0028 (0x0178 - 0x0150)
class UMovieSceneTracks_MovieSceneCinematicShotSection : public UMovieScene_MovieSceneSubSection
{
public:
	struct FString                                     ShotDisplayName;                                          // 0x0150(0x0010) (ZeroConstructor)
	struct FText                                       DisplayName;                                              // 0x0160(0x0018) (Deprecated)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCinematicShotSection");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCinematicShotSection");
		return ptr;
	}


	void SetShotDisplayName(const struct FString& InShotDisplayName);
	struct FString GetShotDisplayName();
};


// Class MovieSceneTracks.MovieSceneCinematicShotTrack
// 0x0000 (0x0068 - 0x0068)
class UMovieSceneTracks_MovieSceneCinematicShotTrack : public UMovieScene_MovieSceneSubTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCinematicShotTrack");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCinematicShotTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneColorSection
// 0x0280 (0x0360 - 0x00E0)
class UMovieSceneTracks_MovieSceneColorSection : public UMovieScene_MovieSceneSection
{
public:
	struct FMovieScene_MovieSceneFloatChannel          RedCurve;                                                 // 0x00E0(0x00A0)
	struct FMovieScene_MovieSceneFloatChannel          GreenCurve;                                               // 0x0180(0x00A0)
	struct FMovieScene_MovieSceneFloatChannel          BlueCurve;                                                // 0x0220(0x00A0)
	struct FMovieScene_MovieSceneFloatChannel          AlphaCurve;                                               // 0x02C0(0x00A0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneColorSection");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneColorSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneColorTrack
// 0x0008 (0x0090 - 0x0088)
class UMovieSceneTracks_MovieSceneColorTrack : public UMovieSceneTracks_MovieScenePropertyTrack
{
public:
	bool                                               bIsSlateColor;                                            // 0x0088(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0089(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneColorTrack");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneColorTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneEnumSection
// 0x0098 (0x0178 - 0x00E0)
class UMovieSceneTracks_MovieSceneEnumSection : public UMovieScene_MovieSceneSection
{
public:
	struct FMovieScene_MovieSceneByteChannel           EnumCurve;                                                // 0x00E0(0x0098)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneEnumSection");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneEnumSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneEnumTrack
// 0x0008 (0x0090 - 0x0088)
class UMovieSceneTracks_MovieSceneEnumTrack : public UMovieSceneTracks_MovieScenePropertyTrack
{
public:
	class UEnum*                                       Enum;                                                     // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneEnumTrack");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneEnumTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneEulerTransformTrack
// 0x0000 (0x0088 - 0x0088)
class UMovieSceneTracks_MovieSceneEulerTransformTrack : public UMovieSceneTracks_MovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneEulerTransformTrack");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneEulerTransformTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneEventSectionBase
// 0x0000 (0x00E0 - 0x00E0)
class UMovieSceneTracks_MovieSceneEventSectionBase : public UMovieScene_MovieSceneSection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneEventSectionBase");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneEventSectionBase");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneEventRepeaterSection
// 0x0010 (0x00F0 - 0x00E0)
class UMovieSceneTracks_MovieSceneEventRepeaterSection : public UMovieSceneTracks_MovieSceneEventSectionBase
{
public:
	struct FMovieSceneTracks_MovieSceneEvent           Event;                                                    // 0x00E0(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneEventRepeaterSection");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneEventRepeaterSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneEventSection
// 0x0100 (0x01E0 - 0x00E0)
class UMovieSceneTracks_MovieSceneEventSection : public UMovieScene_MovieSceneSection
{
public:
	struct FEngine_NameCurve                           Events;                                                   // 0x00E0(0x0078) (Deprecated)
	struct FMovieSceneTracks_MovieSceneEventSectionData EventData;                                                // 0x0158(0x0088)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneEventSection");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneEventSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneEventTrack
// 0x0028 (0x0080 - 0x0058)
class UMovieSceneTracks_MovieSceneEventTrack : public UMovieScene_MovieSceneNameableTrack
{
public:
	unsigned char                                      bFireEventsWhenForwards : 1;                              // 0x0058(0x0001) (Edit)
	unsigned char                                      bFireEventsWhenBackwards : 1;                             // 0x0058(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	FMovieSceneTracks_MovieSceneTracks_EFireEventsAtPosition EventPosition;                                            // 0x005C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x005D(0x0003) MISSED OFFSET
	TArray<struct FMovieScene_MovieSceneObjectBindingID> EventReceivers;                                           // 0x0060(0x0010) (Edit, ZeroConstructor)
	TArray<class UMovieScene_MovieSceneSection*>       Sections;                                                 // 0x0070(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneEventTrack");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneEventTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneEventTriggerSection
// 0x0088 (0x0168 - 0x00E0)
class UMovieSceneTracks_MovieSceneEventTriggerSection : public UMovieSceneTracks_MovieSceneEventSectionBase
{
public:
	struct FMovieSceneTracks_MovieSceneEventChannel    EventChannel;                                             // 0x00E0(0x0088)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneEventTriggerSection");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneEventTriggerSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneFloatSection
// 0x00A0 (0x0180 - 0x00E0)
class UMovieSceneTracks_MovieSceneFloatSection : public UMovieScene_MovieSceneSection
{
public:
	struct FMovieScene_MovieSceneFloatChannel          FloatCurve;                                               // 0x00E0(0x00A0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneFloatSection");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneFloatSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneFadeSection
// 0x0018 (0x0198 - 0x0180)
class UMovieSceneTracks_MovieSceneFadeSection : public UMovieSceneTracks_MovieSceneFloatSection
{
public:
	struct FLinearColor                                FadeColor;                                                // 0x0180(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bFadeAudio : 1;                                           // 0x0190(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0191(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneFadeSection");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneFadeSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneFloatTrack
// 0x0000 (0x0088 - 0x0088)
class UMovieSceneTracks_MovieSceneFloatTrack : public UMovieSceneTracks_MovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneFloatTrack");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneFloatTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneFadeTrack
// 0x0000 (0x0088 - 0x0088)
class UMovieSceneTracks_MovieSceneFadeTrack : public UMovieSceneTracks_MovieSceneFloatTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneFadeTrack");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneFadeTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneIntegerSection
// 0x0090 (0x0170 - 0x00E0)
class UMovieSceneTracks_MovieSceneIntegerSection : public UMovieScene_MovieSceneSection
{
public:
	struct FMovieScene_MovieSceneIntegerChannel        IntegerCurve;                                             // 0x00E0(0x0090)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneIntegerSection");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneIntegerSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneIntegerTrack
// 0x0000 (0x0088 - 0x0088)
class UMovieSceneTracks_MovieSceneIntegerTrack : public UMovieSceneTracks_MovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneIntegerTrack");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneIntegerTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneLevelVisibilitySection
// 0x0018 (0x00F8 - 0x00E0)
class UMovieSceneTracks_MovieSceneLevelVisibilitySection : public UMovieScene_MovieSceneSection
{
public:
	FMovieSceneTracks_MovieSceneTracks_ELevelVisibility Visibility;                                               // 0x00E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00E1(0x0007) MISSED OFFSET
	TArray<struct FName>                               LevelNames;                                               // 0x00E8(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneLevelVisibilitySection");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneLevelVisibilitySection");
		return ptr;
	}


	void SetVisibility(FMovieSceneTracks_MovieSceneTracks_ELevelVisibility InVisibility);
	void SetLevelNames(TArray<struct FName> InLevelNames);
	FMovieSceneTracks_MovieSceneTracks_ELevelVisibility GetVisibility();
	TArray<struct FName> GetLevelNames();
};


// Class MovieSceneTracks.MovieSceneLevelVisibilityTrack
// 0x0010 (0x0068 - 0x0058)
class UMovieSceneTracks_MovieSceneLevelVisibilityTrack : public UMovieScene_MovieSceneNameableTrack
{
public:
	TArray<class UMovieScene_MovieSceneSection*>       Sections;                                                 // 0x0058(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneLevelVisibilityTrack");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneLevelVisibilityTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneMaterialTrack
// 0x0010 (0x0068 - 0x0058)
class UMovieSceneTracks_MovieSceneMaterialTrack : public UMovieScene_MovieSceneNameableTrack
{
public:
	TArray<class UMovieScene_MovieSceneSection*>       Sections;                                                 // 0x0058(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneMaterialTrack");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneMaterialTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneCameraAnimTrack
// 0x0010 (0x0068 - 0x0058)
class UMovieSceneTracks_MovieSceneCameraAnimTrack : public UMovieScene_MovieSceneNameableTrack
{
public:
	TArray<class UMovieScene_MovieSceneSection*>       CameraAnimSections;                                       // 0x0058(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraAnimTrack");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraAnimTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack
// 0x0008 (0x0070 - 0x0068)
class UMovieSceneTracks_MovieSceneMaterialParameterCollectionTrack : public UMovieSceneTracks_MovieSceneMaterialTrack
{
public:
	class UEngine_MaterialParameterCollection*         MPC;                                                      // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneComponentMaterialTrack
// 0x0008 (0x0070 - 0x0068)
class UMovieSceneTracks_MovieSceneComponentMaterialTrack : public UMovieSceneTracks_MovieSceneMaterialTrack
{
public:
	int                                                MaterialIndex;                                            // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneComponentMaterialTrack");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneComponentMaterialTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneObjectPropertySection
// 0x00C0 (0x01A0 - 0x00E0)
class UMovieSceneTracks_MovieSceneObjectPropertySection : public UMovieScene_MovieSceneSection
{
public:
	struct FMovieScene_MovieSceneObjectPathChannel     ObjectChannel;                                            // 0x00E0(0x00C0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneObjectPropertySection");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneObjectPropertySection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneObjectPropertyTrack
// 0x0008 (0x0090 - 0x0088)
class UMovieSceneTracks_MovieSceneObjectPropertyTrack : public UMovieSceneTracks_MovieScenePropertyTrack
{
public:
	class UClass*                                      PropertyClass;                                            // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneObjectPropertyTrack");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneObjectPropertyTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneParameterSection
// 0x0040 (0x0120 - 0x00E0)
class UMovieSceneTracks_MovieSceneParameterSection : public UMovieScene_MovieSceneSection
{
public:
	TArray<struct FMovieSceneTracks_ScalarParameterNameAndCurve> ScalarParameterNamesAndCurves;                            // 0x00E0(0x0010) (ZeroConstructor)
	TArray<struct FMovieSceneTracks_VectorParameterNameAndCurves> VectorParameterNamesAndCurves;                            // 0x00F0(0x0010) (ZeroConstructor)
	TArray<struct FMovieSceneTracks_ColorParameterNameAndCurves> ColorParameterNamesAndCurves;                             // 0x0100(0x0010) (ZeroConstructor)
	TArray<struct FMovieSceneTracks_TransformParameterNameAndCurves> TransformParameterNamesAndCurves;                         // 0x0110(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneParameterSection");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneParameterSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneParticleParameterTrack
// 0x0010 (0x0068 - 0x0058)
class UMovieSceneTracks_MovieSceneParticleParameterTrack : public UMovieScene_MovieSceneNameableTrack
{
public:
	TArray<class UMovieScene_MovieSceneSection*>       Sections;                                                 // 0x0058(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneParticleParameterTrack");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneParticleParameterTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneParticleSection
// 0x0098 (0x0178 - 0x00E0)
class UMovieSceneTracks_MovieSceneParticleSection : public UMovieScene_MovieSceneSection
{
public:
	struct FMovieSceneTracks_MovieSceneParticleChannel ParticleKeys;                                             // 0x00E0(0x0098)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneParticleSection");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneParticleSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneParticleTrack
// 0x0010 (0x0068 - 0x0058)
class UMovieSceneTracks_MovieSceneParticleTrack : public UMovieScene_MovieSceneNameableTrack
{
public:
	TArray<class UMovieScene_MovieSceneSection*>       ParticleSections;                                         // 0x0058(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneParticleTrack");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneParticleTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieScenePrimitiveMaterialTrack
// 0x0008 (0x0090 - 0x0088)
class UMovieSceneTracks_MovieScenePrimitiveMaterialTrack : public UMovieSceneTracks_MovieScenePropertyTrack
{
public:
	int                                                MaterialIndex;                                            // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x008C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScenePrimitiveMaterialTrack");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieScenePrimitiveMaterialTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneSkeletalAnimationSection
// 0x0100 (0x01E0 - 0x00E0)
class UMovieSceneTracks_MovieSceneSkeletalAnimationSection : public UMovieScene_MovieSceneSection
{
public:
	struct FMovieSceneTracks_MovieSceneSkeletalAnimationParams Params;                                                   // 0x00E0(0x00D8) (Edit, BlueprintVisible)
	class UEngine_AnimSequence*                        AnimSequence;                                             // 0x01B8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class UEngine_AnimSequenceBase*                    Animation;                                                // 0x01C0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              StartOffset;                                              // 0x01C8(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              EndOffset;                                                // 0x01CC(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x01D0(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      bReverse : 1;                                             // 0x01D4(0x0001) (Deprecated)
	unsigned char                                      UnknownData00[0x3];                                       // 0x01D5(0x0003) MISSED OFFSET
	struct FName                                       SlotName;                                                 // 0x01D8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneSkeletalAnimationSection");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneSkeletalAnimationSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack
// 0x0018 (0x0070 - 0x0058)
class UMovieSceneTracks_MovieSceneSkeletalAnimationTrack : public UMovieScene_MovieSceneNameableTrack
{
public:
	TArray<class UMovieScene_MovieSceneSection*>       AnimationSections;                                        // 0x0058(0x0010) (ExportObject, ZeroConstructor)
	bool                                               bUseLegacySectionIndexBlend;                              // 0x0068(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0069(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneSlomoSection
// 0x0000 (0x0180 - 0x0180)
class UMovieSceneTracks_MovieSceneSlomoSection : public UMovieSceneTracks_MovieSceneFloatSection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneSlomoSection");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneSlomoSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneSlomoTrack
// 0x0000 (0x0088 - 0x0088)
class UMovieSceneTracks_MovieSceneSlomoTrack : public UMovieSceneTracks_MovieSceneFloatTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneSlomoTrack");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneSlomoTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneSpawnSection
// 0x0000 (0x0178 - 0x0178)
class UMovieSceneTracks_MovieSceneSpawnSection : public UMovieSceneTracks_MovieSceneBoolSection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneSpawnSection");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneSpawnSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneSpawnTrack
// 0x0020 (0x0078 - 0x0058)
class UMovieSceneTracks_MovieSceneSpawnTrack : public UMovieScene_MovieSceneTrack
{
public:
	TArray<class UMovieScene_MovieSceneSection*>       Sections;                                                 // 0x0058(0x0010) (ExportObject, ZeroConstructor)
	struct FGuid                                       ObjectGuid;                                               // 0x0068(0x0010) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneSpawnTrack");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneSpawnTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneStringSection
// 0x00A0 (0x0180 - 0x00E0)
class UMovieSceneTracks_MovieSceneStringSection : public UMovieScene_MovieSceneSection
{
public:
	struct FMovieSceneTracks_MovieSceneStringChannel   StringCurve;                                              // 0x00E0(0x00A0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneStringSection");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneStringSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneStringTrack
// 0x0000 (0x0088 - 0x0088)
class UMovieSceneTracks_MovieSceneStringTrack : public UMovieSceneTracks_MovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneStringTrack");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneStringTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneTransformTrack
// 0x0000 (0x0088 - 0x0088)
class UMovieSceneTracks_MovieSceneTransformTrack : public UMovieSceneTracks_MovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneTransformTrack");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneTransformTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneVectorSection
// 0x0288 (0x0368 - 0x00E0)
class UMovieSceneTracks_MovieSceneVectorSection : public UMovieScene_MovieSceneSection
{
public:
	struct FMovieScene_MovieSceneFloatChannel          Curves[0x4];                                              // 0x00E0(0x00A0)
	int                                                ChannelsUsed;                                             // 0x0360(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0364(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneVectorSection");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneVectorSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneVectorTrack
// 0x0008 (0x0090 - 0x0088)
class UMovieSceneTracks_MovieSceneVectorTrack : public UMovieSceneTracks_MovieScenePropertyTrack
{
public:
	int                                                NumChannelsUsed;                                          // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x008C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneVectorTrack");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneVectorTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneVisibilityTrack
// 0x0000 (0x0088 - 0x0088)
class UMovieSceneTracks_MovieSceneVisibilityTrack : public UMovieSceneTracks_MovieSceneBoolTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneVisibilityTrack");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneVisibilityTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieScenePrimitiveMaterialSection
// 0x00C0 (0x01A0 - 0x00E0)
class UMovieSceneTracks_MovieScenePrimitiveMaterialSection : public UMovieScene_MovieSceneSection
{
public:
	struct FMovieScene_MovieSceneObjectPathChannel     MaterialChannel;                                          // 0x00E0(0x00C0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScenePrimitiveMaterialSection");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieScenePrimitiveMaterialSection");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
