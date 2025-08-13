#pragma once

// Name: , Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x1)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum MovieSceneTracks.ELevelVisibility
enum class FMovieSceneTracks_MovieSceneTracks_ELevelVisibility : uint8_t
{
	ELevelVisibility__Visible      = 0,
	ELevelVisibility__Hidden       = 1,
	ELevelVisibility__ELevelVisibility_MAX = 2
};


// Enum MovieSceneTracks.EParticleKey
enum class FMovieSceneTracks_MovieSceneTracks_EParticleKey : uint8_t
{
	EParticleKey__Activate         = 0,
	EParticleKey__Deactivate       = 1,
	EParticleKey__Trigger          = 2,
	EParticleKey__EParticleKey_MAX = 3
};


// Enum MovieSceneTracks.EFireEventsAtPosition
enum class FMovieSceneTracks_MovieSceneTracks_EFireEventsAtPosition : uint8_t
{
	EFireEventsAtPosition__AtStartOfEvaluation = 0,
	EFireEventsAtPosition__AtEndOfEvaluation = 1,
	EFireEventsAtPosition__AfterSpawn = 2,
	EFireEventsAtPosition__EFireEventsAtPosition_MAX = 3
};


// Enum MovieSceneTracks.MovieScene3DPathSection_Axis
enum class FMovieSceneTracks_MovieSceneTracks_EMovieScene3DPathSection_Axis : uint8_t
{
	MovieScene3DPathSection_Axis__X = 0,
	MovieScene3DPathSection_Axis__Y = 1,
	MovieScene3DPathSection_Axis__Z = 2,
	MovieScene3DPathSection_Axis__NEG_X = 3,
	MovieScene3DPathSection_Axis__NEG_Y = 4,
	MovieScene3DPathSection_Axis__NEG_Z = 5,
	MovieScene3DPathSection_Axis__MovieScene3DPathSection_MAX = 6
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MovieSceneTracks.MovieSceneTransformMask
// 0x0004
struct FMovieSceneTracks_MovieSceneTransformMask
{
	uint32_t                                           Mask;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceKey
// 0x0018
struct FMovieSceneTracks_MovieSceneActorReferenceKey
{
	struct FMovieScene_MovieSceneObjectBindingID       Object;                                                   // 0x0000(0x0018) (Edit)
};

// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceData
// 0x0098 (0x00A0 - 0x0008)
struct FMovieSceneTracks_MovieSceneActorReferenceData : public FMovieScene_MovieSceneChannel
{
	TArray<struct FFrameNumber>                        KeyTimes;                                                 // 0x0008(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0018(0x0018) MISSED OFFSET
	TArray<struct FMovieSceneTracks_MovieSceneActorReferenceKey> KeyValues;                                                // 0x0030(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x60];                                      // 0x0040(0x0060) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraAnimSectionData
// 0x0020
struct FMovieSceneTracks_MovieSceneCameraAnimSectionData
{
	class UEngine_CameraAnim*                          CameraAnim;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PlayScale;                                                // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlendInTime;                                              // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlendOutTime;                                             // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bLooping;                                                 // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionData
// 0x0020
struct FMovieSceneTracks_MovieSceneCameraShakeSectionData
{
	class UClass*                                      ShakeClass;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PlayScale;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ECameraAnimPlaySpace>   PlaySpace;                                                // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FRotator                                    UserDefinedPlaySpace;                                     // 0x0010(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneEventPtrs
// 0x0010
struct FMovieSceneTracks_MovieSceneEventPtrs
{
	class UFunction*                                   Function;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UProperty*                                   BoundObjectProperty;                                      // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieSceneTracks.MovieSceneEvent
// 0x0010
struct FMovieSceneTracks_MovieSceneEvent
{
	struct FMovieSceneTracks_MovieSceneEventPtrs       Ptrs;                                                     // 0x0000(0x0010)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventParameters
// 0x0028
struct FMovieSceneTracks_MovieSceneEventParameters
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.EventPayload
// 0x0030
struct FMovieSceneTracks_EventPayload
{
	struct FName                                       EventName;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FMovieSceneTracks_MovieSceneEventParameters Parameters;                                               // 0x0008(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventSectionData
// 0x0080 (0x0088 - 0x0008)
struct FMovieSceneTracks_MovieSceneEventSectionData : public FMovieScene_MovieSceneChannel
{
	TArray<struct FFrameNumber>                        Times;                                                    // 0x0008(0x0010) (ZeroConstructor)
	TArray<struct FMovieSceneTracks_EventPayload>      KeyValues;                                                // 0x0018(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0028(0x0060) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneEventChannel
// 0x0080 (0x0088 - 0x0008)
struct FMovieSceneTracks_MovieSceneEventChannel : public FMovieScene_MovieSceneChannel
{
	TArray<struct FFrameNumber>                        KeyTimes;                                                 // 0x0008(0x0010) (ZeroConstructor)
	TArray<struct FMovieSceneTracks_MovieSceneEvent>   KeyValues;                                                // 0x0018(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0028(0x0060) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.ScalarParameterNameAndCurve
// 0x00A8
struct FMovieSceneTracks_ScalarParameterNameAndCurve
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FMovieScene_MovieSceneFloatChannel          ParameterCurve;                                           // 0x0008(0x00A0)
};

// ScriptStruct MovieSceneTracks.VectorParameterNameAndCurves
// 0x01E8
struct FMovieSceneTracks_VectorParameterNameAndCurves
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FMovieScene_MovieSceneFloatChannel          XCurve;                                                   // 0x0008(0x00A0)
	struct FMovieScene_MovieSceneFloatChannel          YCurve;                                                   // 0x00A8(0x00A0)
	struct FMovieScene_MovieSceneFloatChannel          ZCurve;                                                   // 0x0148(0x00A0)
};

// ScriptStruct MovieSceneTracks.ColorParameterNameAndCurves
// 0x0288
struct FMovieSceneTracks_ColorParameterNameAndCurves
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FMovieScene_MovieSceneFloatChannel          RedCurve;                                                 // 0x0008(0x00A0)
	struct FMovieScene_MovieSceneFloatChannel          GreenCurve;                                               // 0x00A8(0x00A0)
	struct FMovieScene_MovieSceneFloatChannel          BlueCurve;                                                // 0x0148(0x00A0)
	struct FMovieScene_MovieSceneFloatChannel          AlphaCurve;                                               // 0x01E8(0x00A0)
};

// ScriptStruct MovieSceneTracks.TransformParameterNameAndCurves
// 0x05A8
struct FMovieSceneTracks_TransformParameterNameAndCurves
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FMovieScene_MovieSceneFloatChannel          Translation[0x3];                                         // 0x0008(0x00A0)
	struct FMovieScene_MovieSceneFloatChannel          Rotation[0x3];                                            // 0x01E8(0x00A0)
	struct FMovieScene_MovieSceneFloatChannel          Scale[0x3];                                               // 0x03C8(0x00A0)
};

// ScriptStruct MovieSceneTracks.MovieSceneParticleChannel
// 0x0000 (0x0098 - 0x0098)
struct FMovieSceneTracks_MovieSceneParticleChannel : public FMovieScene_MovieSceneByteChannel
{

};

// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationParams
// 0x00D8
struct FMovieSceneTracks_MovieSceneSkeletalAnimationParams
{
	class UEngine_AnimSequenceBase*                    Animation;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FFrameNumber                                FirstLoopStartFrameOffset;                                // 0x0008(0x0004) (Edit, BlueprintVisible)
	struct FFrameNumber                                StartFrameOffset;                                         // 0x000C(0x0004) (Edit, BlueprintVisible)
	struct FFrameNumber                                EndFrameOffset;                                           // 0x0010(0x0004) (Edit, BlueprintVisible)
	float                                              PlayRate;                                                 // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bReverse : 1;                                             // 0x0018(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	struct FName                                       SlotName;                                                 // 0x001C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FMovieScene_MovieSceneFloatChannel          Weight;                                                   // 0x0028(0x00A0)
	bool                                               bSkipAnimNotifiers;                                       // 0x00C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForceCustomMode;                                         // 0x00C9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x00CA(0x0002) MISSED OFFSET
	float                                              StartOffset;                                              // 0x00CC(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              EndOffset;                                                // 0x00D0(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneStringChannel
// 0x0098 (0x00A0 - 0x0008)
struct FMovieSceneTracks_MovieSceneStringChannel : public FMovieScene_MovieSceneChannel
{
	TArray<struct FFrameNumber>                        Times;                                                    // 0x0008(0x0010) (ZeroConstructor)
	TArray<struct FString>                             Values;                                                   // 0x0018(0x0010) (ZeroConstructor)
	struct FString                                     DefaultValue;                                             // 0x0028(0x0010) (ZeroConstructor)
	bool                                               bHasDefaultValue;                                         // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x67];                                      // 0x0039(0x0067) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieScene3DAttachSectionTemplate
// 0x0030 (0x0050 - 0x0020)
struct FMovieSceneTracks_MovieScene3DAttachSectionTemplate : public FMovieScene_MovieSceneEvalTemplate
{
	struct FMovieScene_MovieSceneObjectBindingID       AttachBindingID;                                          // 0x0020(0x0018)
	struct FName                                       AttachSocketName;                                         // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       AttachComponentName;                                      // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	FEngine_Engine_EAttachmentRule                     AttachmentLocationRule;                                   // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData)
	FEngine_Engine_EAttachmentRule                     AttachmentRotationRule;                                   // 0x0049(0x0001) (ZeroConstructor, IsPlainOldData)
	FEngine_Engine_EAttachmentRule                     AttachmentScaleRule;                                      // 0x004A(0x0001) (ZeroConstructor, IsPlainOldData)
	FEngine_Engine_EDetachmentRule                     DetachmentLocationRule;                                   // 0x004B(0x0001) (ZeroConstructor, IsPlainOldData)
	FEngine_Engine_EDetachmentRule                     DetachmentRotationRule;                                   // 0x004C(0x0001) (ZeroConstructor, IsPlainOldData)
	FEngine_Engine_EDetachmentRule                     DetachmentScaleRule;                                      // 0x004D(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x004E(0x0002) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieScene3DPathSectionTemplate
// 0x00C0 (0x00E0 - 0x0020)
struct FMovieSceneTracks_MovieScene3DPathSectionTemplate : public FMovieScene_MovieSceneEvalTemplate
{
	struct FMovieScene_MovieSceneObjectBindingID       PathBindingID;                                            // 0x0020(0x0018)
	struct FMovieScene_MovieSceneFloatChannel          TimingCurve;                                              // 0x0038(0x00A0)
	FMovieSceneTracks_MovieSceneTracks_EMovieScene3DPathSection_Axis FrontAxisEnum;                                            // 0x00D8(0x0001) (ZeroConstructor, IsPlainOldData)
	FMovieSceneTracks_MovieSceneTracks_EMovieScene3DPathSection_Axis UpAxisEnum;                                               // 0x00D9(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00DA(0x0002) MISSED OFFSET
	unsigned char                                      bFollow : 1;                                              // 0x00DC(0x0001)
	unsigned char                                      bReverse : 1;                                             // 0x00DC(0x0001)
	unsigned char                                      bForceUpright : 1;                                        // 0x00DC(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00DD(0x0003) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieScene3DTransformKeyStruct
// 0x0040 (0x0048 - 0x0008)
struct FMovieSceneTracks_MovieScene3DTransformKeyStruct : public FMovieScene_MovieSceneKeyStruct
{
	struct FVector                                     Location;                                                 // 0x0008(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0014(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Scale;                                                    // 0x0020(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFrameNumber                                Time;                                                     // 0x002C(0x0004) (Edit)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieScene3DScaleKeyStruct
// 0x0028 (0x0030 - 0x0008)
struct FMovieSceneTracks_MovieScene3DScaleKeyStruct : public FMovieScene_MovieSceneKeyStruct
{
	struct FVector                                     Scale;                                                    // 0x0008(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFrameNumber                                Time;                                                     // 0x0014(0x0004) (Edit)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0018(0x0018) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieScene3DRotationKeyStruct
// 0x0028 (0x0030 - 0x0008)
struct FMovieSceneTracks_MovieScene3DRotationKeyStruct : public FMovieScene_MovieSceneKeyStruct
{
	struct FRotator                                    Rotation;                                                 // 0x0008(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFrameNumber                                Time;                                                     // 0x0014(0x0004) (Edit)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0018(0x0018) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieScene3DLocationKeyStruct
// 0x0028 (0x0030 - 0x0008)
struct FMovieSceneTracks_MovieScene3DLocationKeyStruct : public FMovieScene_MovieSceneKeyStruct
{
	struct FVector                                     Location;                                                 // 0x0008(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFrameNumber                                Time;                                                     // 0x0014(0x0004) (Edit)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0018(0x0018) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieScene3DTransformTemplateData
// 0x0650
struct FMovieSceneTracks_MovieScene3DTransformTemplateData
{
	struct FMovieScene_MovieSceneFloatChannel          TranslationCurve[0x3];                                    // 0x0000(0x00A0)
	struct FMovieScene_MovieSceneFloatChannel          RotationCurve[0x3];                                       // 0x01E0(0x00A0)
	struct FMovieScene_MovieSceneFloatChannel          ScaleCurve[0x3];                                          // 0x03C0(0x00A0)
	struct FMovieScene_MovieSceneFloatChannel          ManualWeight;                                             // 0x05A0(0x00A0)
	FMovieScene_MovieScene_EMovieSceneBlendType        BlendType;                                                // 0x0640(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0641(0x0003) MISSED OFFSET
	struct FMovieSceneTracks_MovieSceneTransformMask   Mask;                                                     // 0x0644(0x0004)
	bool                                               bUseQuaternionInterpolation;                              // 0x0648(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0649(0x0007) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneComponentTransformSectionTemplate
// 0x0650 (0x0670 - 0x0020)
struct FMovieSceneTracks_MovieSceneComponentTransformSectionTemplate : public FMovieScene_MovieSceneEvalTemplate
{
	struct FMovieSceneTracks_MovieScene3DTransformTemplateData TemplateData;                                             // 0x0020(0x0650)
};

// ScriptStruct MovieSceneTracks.MovieSceneAudioSectionTemplate
// 0x0008 (0x0028 - 0x0020)
struct FMovieSceneTracks_MovieSceneAudioSectionTemplate : public FMovieScene_MovieSceneEvalTemplate
{
	class UMovieSceneTracks_MovieSceneAudioSection*    AudioSection;                                             // 0x0020(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct MovieSceneTracks.MovieSceneAdditiveCameraAnimationTemplate
// 0x0000 (0x0020 - 0x0020)
struct FMovieSceneTracks_MovieSceneAdditiveCameraAnimationTemplate : public FMovieScene_MovieSceneEvalTemplate
{

};

// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionTemplate
// 0x0028 (0x0048 - 0x0020)
struct FMovieSceneTracks_MovieSceneCameraShakeSectionTemplate : public FMovieSceneTracks_MovieSceneAdditiveCameraAnimationTemplate
{
	struct FMovieSceneTracks_MovieSceneCameraShakeSectionData SourceData;                                               // 0x0020(0x0020)
	struct FFrameNumber                                SectionStartTime;                                         // 0x0040(0x0004)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraAnimSectionTemplate
// 0x0028 (0x0048 - 0x0020)
struct FMovieSceneTracks_MovieSceneCameraAnimSectionTemplate : public FMovieSceneTracks_MovieSceneAdditiveCameraAnimationTemplate
{
	struct FMovieSceneTracks_MovieSceneCameraAnimSectionData SourceData;                                               // 0x0020(0x0020)
	struct FFrameNumber                                SectionStartTime;                                         // 0x0040(0x0004)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraCutSectionTemplate
// 0x0060 (0x0080 - 0x0020)
struct FMovieSceneTracks_MovieSceneCameraCutSectionTemplate : public FMovieScene_MovieSceneEvalTemplate
{
	struct FMovieScene_MovieSceneObjectBindingID       CameraBindingID;                                          // 0x0020(0x0018)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FTransform                                  CutTransform;                                             // 0x0040(0x0030) (IsPlainOldData)
	bool                                               bHasCutTransform;                                         // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0071(0x000F) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceSectionTemplate
// 0x00C8 (0x00E8 - 0x0020)
struct FMovieSceneTracks_MovieSceneActorReferenceSectionTemplate : public FMovieScene_MovieSceneEvalTemplate
{
	struct FMovieScene_MovieScenePropertySectionData   PropertyData;                                             // 0x0020(0x0028)
	struct FMovieSceneTracks_MovieSceneActorReferenceData ActorReferenceData;                                       // 0x0048(0x00A0)
};

// ScriptStruct MovieSceneTracks.MovieSceneColorKeyStruct
// 0x0030 (0x0038 - 0x0008)
struct FMovieSceneTracks_MovieSceneColorKeyStruct : public FMovieScene_MovieSceneKeyStruct
{
	struct FLinearColor                                Color;                                                    // 0x0008(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFrameNumber                                Time;                                                     // 0x0018(0x0004) (Edit)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x001C(0x001C) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneColorSectionTemplate
// 0x0288 (0x02D0 - 0x0048)
struct FMovieSceneTracks_MovieSceneColorSectionTemplate : public FMovieScene_MovieScenePropertySectionTemplate
{
	struct FMovieScene_MovieSceneFloatChannel          Curves[0x4];                                              // 0x0048(0x00A0)
	FMovieScene_MovieScene_EMovieSceneBlendType        BlendType;                                                // 0x02C8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02C9(0x0007) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneEventPayloadVariable
// 0x0010
struct FMovieSceneTracks_MovieSceneEventPayloadVariable
{
	struct FString                                     Value;                                                    // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventTemplateBase
// 0x0018 (0x0038 - 0x0020)
struct FMovieSceneTracks_MovieSceneEventTemplateBase : public FMovieScene_MovieSceneEvalTemplate
{
	TArray<struct FMovieScene_MovieSceneObjectBindingID> EventReceivers;                                           // 0x0020(0x0010) (ZeroConstructor)
	unsigned char                                      bFireEventsWhenForwards : 1;                              // 0x0030(0x0001)
	unsigned char                                      bFireEventsWhenBackwards : 1;                             // 0x0030(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneEventRepeaterTemplate
// 0x0010 (0x0048 - 0x0038)
struct FMovieSceneTracks_MovieSceneEventRepeaterTemplate : public FMovieSceneTracks_MovieSceneEventTemplateBase
{
	struct FMovieSceneTracks_MovieSceneEventPtrs       EventToTrigger;                                           // 0x0038(0x0010)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventTriggerTemplate
// 0x0020 (0x0058 - 0x0038)
struct FMovieSceneTracks_MovieSceneEventTriggerTemplate : public FMovieSceneTracks_MovieSceneEventTemplateBase
{
	TArray<struct FFrameNumber>                        EventTimes;                                               // 0x0038(0x0010) (ZeroConstructor)
	TArray<struct FMovieSceneTracks_MovieSceneEventPtrs> Events;                                                   // 0x0048(0x0010) (ZeroConstructor)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventSectionTemplate
// 0x0088 (0x00C0 - 0x0038)
struct FMovieSceneTracks_MovieSceneEventSectionTemplate : public FMovieSceneTracks_MovieSceneEventTemplateBase
{
	struct FMovieSceneTracks_MovieSceneEventSectionData EventData;                                                // 0x0038(0x0088)
};

// ScriptStruct MovieSceneTracks.MovieSceneFadeSectionTemplate
// 0x00B8 (0x00D8 - 0x0020)
struct FMovieSceneTracks_MovieSceneFadeSectionTemplate : public FMovieScene_MovieSceneEvalTemplate
{
	struct FMovieScene_MovieSceneFloatChannel          FadeCurve;                                                // 0x0020(0x00A0)
	struct FLinearColor                                FadeColor;                                                // 0x00C0(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bFadeAudio : 1;                                           // 0x00D0(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00D1(0x0007) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneLevelVisibilitySectionTemplate
// 0x0018 (0x0038 - 0x0020)
struct FMovieSceneTracks_MovieSceneLevelVisibilitySectionTemplate : public FMovieScene_MovieSceneEvalTemplate
{
	FMovieSceneTracks_MovieSceneTracks_ELevelVisibility Visibility;                                               // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	TArray<struct FName>                               LevelNames;                                               // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct MovieSceneTracks.MovieSceneParameterSectionTemplate
// 0x0040 (0x0060 - 0x0020)
struct FMovieSceneTracks_MovieSceneParameterSectionTemplate : public FMovieScene_MovieSceneEvalTemplate
{
	TArray<struct FMovieSceneTracks_ScalarParameterNameAndCurve> Scalars;                                                  // 0x0020(0x0010) (ZeroConstructor)
	TArray<struct FMovieSceneTracks_VectorParameterNameAndCurves> Vectors;                                                  // 0x0030(0x0010) (ZeroConstructor)
	TArray<struct FMovieSceneTracks_ColorParameterNameAndCurves> Colors;                                                   // 0x0040(0x0010) (ZeroConstructor)
	TArray<struct FMovieSceneTracks_TransformParameterNameAndCurves> Transforms;                                               // 0x0050(0x0010) (ZeroConstructor)
};

// ScriptStruct MovieSceneTracks.MovieSceneMaterialParameterCollectionTemplate
// 0x0008 (0x0068 - 0x0060)
struct FMovieSceneTracks_MovieSceneMaterialParameterCollectionTemplate : public FMovieSceneTracks_MovieSceneParameterSectionTemplate
{
	class UEngine_MaterialParameterCollection*         MPC;                                                      // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieSceneTracks.MovieSceneObjectPropertyTemplate
// 0x00C0 (0x0108 - 0x0048)
struct FMovieSceneTracks_MovieSceneObjectPropertyTemplate : public FMovieScene_MovieScenePropertySectionTemplate
{
	struct FMovieScene_MovieSceneObjectPathChannel     ObjectChannel;                                            // 0x0048(0x00C0)
};

// ScriptStruct MovieSceneTracks.MovieSceneComponentMaterialSectionTemplate
// 0x0008 (0x0068 - 0x0060)
struct FMovieSceneTracks_MovieSceneComponentMaterialSectionTemplate : public FMovieSceneTracks_MovieSceneParameterSectionTemplate
{
	int                                                MaterialIndex;                                            // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneParticleParameterSectionTemplate
// 0x0000 (0x0060 - 0x0060)
struct FMovieSceneTracks_MovieSceneParticleParameterSectionTemplate : public FMovieSceneTracks_MovieSceneParameterSectionTemplate
{

};

// ScriptStruct MovieSceneTracks.MovieSceneParticleSectionTemplate
// 0x0098 (0x00B8 - 0x0020)
struct FMovieSceneTracks_MovieSceneParticleSectionTemplate : public FMovieScene_MovieSceneEvalTemplate
{
	struct FMovieSceneTracks_MovieSceneParticleChannel ParticleKeys;                                             // 0x0020(0x0098)
};

// ScriptStruct MovieSceneTracks.MovieScenePrimitiveMaterialTemplate
// 0x00C8 (0x00E8 - 0x0020)
struct FMovieSceneTracks_MovieScenePrimitiveMaterialTemplate : public FMovieScene_MovieSceneEvalTemplate
{
	int                                                MaterialIndex;                                            // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FMovieScene_MovieSceneObjectPathChannel     MaterialChannel;                                          // 0x0028(0x00C0)
};

// ScriptStruct MovieSceneTracks.MovieSceneEulerTransformPropertySectionTemplate
// 0x0650 (0x0698 - 0x0048)
struct FMovieSceneTracks_MovieSceneEulerTransformPropertySectionTemplate : public FMovieScene_MovieScenePropertySectionTemplate
{
	struct FMovieSceneTracks_MovieScene3DTransformTemplateData TemplateData;                                             // 0x0048(0x0650)
};

// ScriptStruct MovieSceneTracks.MovieSceneTransformPropertySectionTemplate
// 0x0650 (0x0698 - 0x0048)
struct FMovieSceneTracks_MovieSceneTransformPropertySectionTemplate : public FMovieScene_MovieScenePropertySectionTemplate
{
	struct FMovieSceneTracks_MovieScene3DTransformTemplateData TemplateData;                                             // 0x0048(0x0650)
};

// ScriptStruct MovieSceneTracks.MovieSceneVectorPropertySectionTemplate
// 0x0288 (0x02D0 - 0x0048)
struct FMovieSceneTracks_MovieSceneVectorPropertySectionTemplate : public FMovieScene_MovieScenePropertySectionTemplate
{
	struct FMovieScene_MovieSceneFloatChannel          ComponentCurves[0x4];                                     // 0x0048(0x00A0)
	int                                                NumChannelsUsed;                                          // 0x02C8(0x0004) (ZeroConstructor, IsPlainOldData)
	FMovieScene_MovieScene_EMovieSceneBlendType        BlendType;                                                // 0x02CC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02CD(0x0003) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneIntegerPropertySectionTemplate
// 0x0098 (0x00E0 - 0x0048)
struct FMovieSceneTracks_MovieSceneIntegerPropertySectionTemplate : public FMovieScene_MovieScenePropertySectionTemplate
{
	struct FMovieScene_MovieSceneIntegerChannel        IntegerCurve;                                             // 0x0048(0x0090)
	FMovieScene_MovieScene_EMovieSceneBlendType        BlendType;                                                // 0x00D8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00D9(0x0007) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneStringPropertySectionTemplate
// 0x00A0 (0x00E8 - 0x0048)
struct FMovieSceneTracks_MovieSceneStringPropertySectionTemplate : public FMovieScene_MovieScenePropertySectionTemplate
{
	struct FMovieSceneTracks_MovieSceneStringChannel   StringCurve;                                              // 0x0048(0x00A0)
};

// ScriptStruct MovieSceneTracks.MovieSceneEnumPropertySectionTemplate
// 0x0098 (0x00E0 - 0x0048)
struct FMovieSceneTracks_MovieSceneEnumPropertySectionTemplate : public FMovieScene_MovieScenePropertySectionTemplate
{
	struct FMovieScene_MovieSceneByteChannel           EnumCurve;                                                // 0x0048(0x0098)
};

// ScriptStruct MovieSceneTracks.MovieSceneBytePropertySectionTemplate
// 0x0098 (0x00E0 - 0x0048)
struct FMovieSceneTracks_MovieSceneBytePropertySectionTemplate : public FMovieScene_MovieScenePropertySectionTemplate
{
	struct FMovieScene_MovieSceneByteChannel           ByteCurve;                                                // 0x0048(0x0098)
};

// ScriptStruct MovieSceneTracks.MovieSceneFloatPropertySectionTemplate
// 0x00A8 (0x00F0 - 0x0048)
struct FMovieSceneTracks_MovieSceneFloatPropertySectionTemplate : public FMovieScene_MovieScenePropertySectionTemplate
{
	struct FMovieScene_MovieSceneFloatChannel          FloatFunction;                                            // 0x0048(0x00A0)
	FMovieScene_MovieScene_EMovieSceneBlendType        BlendType;                                                // 0x00E8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00E9(0x0007) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneBoolPropertySectionTemplate
// 0x0090 (0x00D8 - 0x0048)
struct FMovieSceneTracks_MovieSceneBoolPropertySectionTemplate : public FMovieScene_MovieScenePropertySectionTemplate
{
	struct FMovieScene_MovieSceneBoolChannel           BoolCurve;                                                // 0x0048(0x0090)
};

// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplateParameters
// 0x0008 (0x00E0 - 0x00D8)
struct FMovieSceneTracks_MovieSceneSkeletalAnimationSectionTemplateParameters : public FMovieSceneTracks_MovieSceneSkeletalAnimationParams
{
	struct FFrameNumber                                SectionStartTime;                                         // 0x00D8(0x0004)
	struct FFrameNumber                                SectionEndTime;                                           // 0x00DC(0x0004)
};

// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplate
// 0x00E0 (0x0100 - 0x0020)
struct FMovieSceneTracks_MovieSceneSkeletalAnimationSectionTemplate : public FMovieScene_MovieSceneEvalTemplate
{
	struct FMovieSceneTracks_MovieSceneSkeletalAnimationSectionTemplateParameters Params;                                                   // 0x0020(0x00E0)
};

// ScriptStruct MovieSceneTracks.MovieSceneSlomoSectionTemplate
// 0x00A0 (0x00C0 - 0x0020)
struct FMovieSceneTracks_MovieSceneSlomoSectionTemplate : public FMovieScene_MovieSceneEvalTemplate
{
	struct FMovieScene_MovieSceneFloatChannel          SlomoCurve;                                               // 0x0020(0x00A0)
};

// ScriptStruct MovieSceneTracks.MovieSceneSpawnSectionTemplate
// 0x0090 (0x00B0 - 0x0020)
struct FMovieSceneTracks_MovieSceneSpawnSectionTemplate : public FMovieScene_MovieSceneEvalTemplate
{
	struct FMovieScene_MovieSceneBoolChannel           Curve;                                                    // 0x0020(0x0090)
};

// ScriptStruct MovieSceneTracks.MovieSceneVectorKeyStructBase
// 0x0020 (0x0028 - 0x0008)
struct FMovieSceneTracks_MovieSceneVectorKeyStructBase : public FMovieScene_MovieSceneKeyStruct
{
	struct FFrameNumber                                Time;                                                     // 0x0008(0x0004) (Edit)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x000C(0x001C) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneVector4KeyStruct
// 0x0018 (0x0040 - 0x0028)
struct FMovieSceneTracks_MovieSceneVector4KeyStruct : public FMovieSceneTracks_MovieSceneVectorKeyStructBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FVector4                                    Vector;                                                   // 0x0030(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieSceneTracks.MovieSceneVectorKeyStruct
// 0x0010 (0x0038 - 0x0028)
struct FMovieSceneTracks_MovieSceneVectorKeyStruct : public FMovieSceneTracks_MovieSceneVectorKeyStructBase
{
	struct FVector                                     Vector;                                                   // 0x0028(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneVector2DKeyStruct
// 0x0008 (0x0030 - 0x0028)
struct FMovieSceneTracks_MovieSceneVector2DKeyStruct : public FMovieSceneTracks_MovieSceneVectorKeyStructBase
{
	struct FVector2D                                   Vector;                                                   // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieSceneTracks.MovieSceneVisibilitySectionTemplate
// 0x0000 (0x00D8 - 0x00D8)
struct FMovieSceneTracks_MovieSceneVisibilitySectionTemplate : public FMovieSceneTracks_MovieSceneBoolPropertySectionTemplate
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
