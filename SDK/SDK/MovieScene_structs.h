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

// Enum MovieScene.EMovieSceneObjectBindingSpace
enum class FMovieScene_MovieScene_EMovieSceneObjectBindingSpace : uint8_t
{
	EMovieSceneObjectBindingSpace__Local = 0,
	EMovieSceneObjectBindingSpace__Root = 1,
	EMovieSceneObjectBindingSpace__EMovieSceneObjectBindingSpace_MAX = 2
};


// Enum MovieScene.EMovieSceneKeyInterpolation
enum class FMovieScene_MovieScene_EMovieSceneKeyInterpolation : uint8_t
{
	EMovieSceneKeyInterpolation__Auto = 0,
	EMovieSceneKeyInterpolation__User = 1,
	EMovieSceneKeyInterpolation__Break = 2,
	EMovieSceneKeyInterpolation__Linear = 3,
	EMovieSceneKeyInterpolation__Constant = 4,
	EMovieSceneKeyInterpolation__EMovieSceneKeyInterpolation_MAX = 5
};


// Enum MovieScene.EMovieSceneBlendType
enum class FMovieScene_MovieScene_EMovieSceneBlendType : uint8_t
{
	EMovieSceneBlendType__Invalid  = 0,
	EMovieSceneBlendType__Absolute = 1,
	EMovieSceneBlendType__Additive = 2,
	EMovieSceneBlendType__Relative = 3,
	EMovieSceneBlendType__EMovieSceneBlendType_MAX = 4
};


// Enum MovieScene.EMovieSceneBuiltInEasing
enum class FMovieScene_MovieScene_EMovieSceneBuiltInEasing : uint8_t
{
	EMovieSceneBuiltInEasing__Linear = 0,
	EMovieSceneBuiltInEasing__SinIn = 1,
	EMovieSceneBuiltInEasing__SinOut = 2,
	EMovieSceneBuiltInEasing__SinInOut = 3,
	EMovieSceneBuiltInEasing__QuadIn = 4,
	EMovieSceneBuiltInEasing__QuadOut = 5,
	EMovieSceneBuiltInEasing__QuadInOut = 6,
	EMovieSceneBuiltInEasing__CubicIn = 7,
	EMovieSceneBuiltInEasing__CubicOut = 8,
	EMovieSceneBuiltInEasing__CubicInOut = 9,
	EMovieSceneBuiltInEasing__QuartIn = 10,
	EMovieSceneBuiltInEasing__QuartOut = 11,
	EMovieSceneBuiltInEasing__QuartInOut = 12,
	EMovieSceneBuiltInEasing__QuintIn = 13,
	EMovieSceneBuiltInEasing__QuintOut = 14,
	EMovieSceneBuiltInEasing__QuintInOut = 15,
	EMovieSceneBuiltInEasing__ExpoIn = 16,
	EMovieSceneBuiltInEasing__ExpoOut = 17,
	EMovieSceneBuiltInEasing__ExpoInOut = 18,
	EMovieSceneBuiltInEasing__CircIn = 19,
	EMovieSceneBuiltInEasing__CircOut = 20,
	EMovieSceneBuiltInEasing__CircInOut = 21,
	EMovieSceneBuiltInEasing__EMovieSceneBuiltInEasing_MAX = 22
};


// Enum MovieScene.EEvaluationMethod
enum class FMovieScene_MovieScene_EEvaluationMethod : uint8_t
{
	EEvaluationMethod__Static      = 0,
	EEvaluationMethod__Swept       = 1,
	EEvaluationMethod__EEvaluationMethod_MAX = 2
};


// Enum MovieScene.EUpdateClockSource
enum class FMovieScene_MovieScene_EUpdateClockSource : uint8_t
{
	EUpdateClockSource__Tick       = 0,
	EUpdateClockSource__Platform   = 1,
	EUpdateClockSource__Audio      = 2,
	EUpdateClockSource__Timecode   = 3,
	EUpdateClockSource__EUpdateClockSource_MAX = 4
};


// Enum MovieScene.EMovieSceneEvaluationType
enum class FMovieScene_MovieScene_EMovieSceneEvaluationType : uint8_t
{
	EMovieSceneEvaluationType__FrameLocked = 0,
	EMovieSceneEvaluationType__WithSubFrames = 1,
	EMovieSceneEvaluationType__EMovieSceneEvaluationType_MAX = 2
};


// Enum MovieScene.EMovieScenePlayerStatus
enum class FMovieScene_MovieScene_EMovieScenePlayerStatus : uint8_t
{
	EMovieScenePlayerStatus__Stopped = 0,
	EMovieScenePlayerStatus__Playing = 1,
	EMovieScenePlayerStatus__Recording = 2,
	EMovieScenePlayerStatus__Scrubbing = 3,
	EMovieScenePlayerStatus__Jumping = 4,
	EMovieScenePlayerStatus__Stepping = 5,
	EMovieScenePlayerStatus__Paused = 6,
	EMovieScenePlayerStatus__MAX   = 7
};


// Enum MovieScene.EMovieSceneCompletionMode
enum class FMovieScene_MovieScene_EMovieSceneCompletionMode : uint8_t
{
	EMovieSceneCompletionMode__KeepState = 0,
	EMovieSceneCompletionMode__RestoreState = 1,
	EMovieSceneCompletionMode__ProjectDefault = 2,
	EMovieSceneCompletionMode__EMovieSceneCompletionMode_MAX = 3
};


// Enum MovieScene.ESectionEvaluationFlags
enum class FMovieScene_MovieScene_ESectionEvaluationFlags : uint8_t
{
	ESectionEvaluationFlags__None  = 0,
	ESectionEvaluationFlags__PreRoll = 1,
	ESectionEvaluationFlags__PostRoll = 2,
	ESectionEvaluationFlags__ESectionEvaluationFlags_MAX = 3
};


// Enum MovieScene.EUpdatePositionMethod
enum class FMovieScene_MovieScene_EUpdatePositionMethod : uint8_t
{
	EUpdatePositionMethod__Play    = 0,
	EUpdatePositionMethod__Jump    = 1,
	EUpdatePositionMethod__Scrub   = 2,
	EUpdatePositionMethod__EUpdatePositionMethod_MAX = 3
};


// Enum MovieScene.ESpawnOwnership
enum class FMovieScene_MovieScene_ESpawnOwnership : uint8_t
{
	ESpawnOwnership__InnerSequence = 0,
	ESpawnOwnership__MasterSequence = 1,
	ESpawnOwnership__External      = 2,
	ESpawnOwnership__ESpawnOwnership_MAX = 3
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MovieScene.MovieSceneSectionEvalOptions
// 0x0002
struct FMovieScene_MovieSceneSectionEvalOptions
{
	bool                                               bCanEditCompletionMode;                                   // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	FMovieScene_MovieScene_EMovieSceneCompletionMode   CompletionMode;                                           // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneEasingSettings
// 0x0038
struct FMovieScene_MovieSceneEasingSettings
{
	int                                                AutoEaseInDuration;                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AutoEaseOutDuration;                                      // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UMovieScene_MovieSceneEasingFunction> EaseIn;                                                   // 0x0008(0x0030) (ZeroConstructor, IsPlainOldData)
	bool                                               bManualEaseIn;                                            // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	int                                                ManualEaseInDuration;                                     // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UMovieScene_MovieSceneEasingFunction> EaseOut;                                                  // 0x0020(0x0030) (ZeroConstructor, IsPlainOldData)
	bool                                               bManualEaseOut;                                           // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	int                                                ManualEaseOutDuration;                                    // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneFrameRange
// 0x0010
struct FMovieScene_MovieSceneFrameRange
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct MovieScene.OptionalMovieSceneBlendType
// 0x0002
struct FMovieScene_OptionalMovieSceneBlendType
{
	FMovieScene_MovieScene_EMovieSceneBlendType        BlendType;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsValid;                                                 // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneTrackEvalOptions
// 0x0004
struct FMovieScene_MovieSceneTrackEvalOptions
{
	unsigned char                                      bCanEvaluateNearestSection : 1;                           // 0x0000(0x0001)
	unsigned char                                      bEvalNearestSection : 1;                                  // 0x0000(0x0001) (Edit)
	unsigned char                                      bEvaluateInPreroll : 1;                                   // 0x0000(0x0001) (Edit)
	unsigned char                                      bEvaluateInPostroll : 1;                                  // 0x0000(0x0001) (Edit)
	unsigned char                                      bEvaluateNearestSection : 1;                              // 0x0000(0x0001) (Deprecated)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneTrackIdentifier
// 0x0004
struct FMovieScene_MovieSceneTrackIdentifier
{
	uint32_t                                           Value;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneSegment
// 0x0058
struct FMovieScene_MovieSceneSegment
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0000(0x0058) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneEvaluationTrackSegments
// 0x0020
struct FMovieScene_MovieSceneEvaluationTrackSegments
{
	TArray<int>                                        SegmentIdentifierToIndex;                                 // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FMovieScene_MovieSceneSegment>       SortedSegments;                                           // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct MovieScene.SectionEvaluationDataTree
// 0x0060
struct FMovieScene_SectionEvaluationDataTree
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneEvalTemplatePtr
// 0x0088
struct FMovieScene_MovieSceneEvalTemplatePtr
{
	unsigned char                                      UnknownData00[0x88];                                      // 0x0000(0x0088) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneTrackImplementationPtr
// 0x0038
struct FMovieScene_MovieSceneTrackImplementationPtr
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneEvaluationTrack
// 0x00F8
struct FMovieScene_MovieSceneEvaluationTrack
{
	struct FGuid                                       ObjectBindingId;                                          // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           EvaluationPriority;                                       // 0x0010(0x0002) (ZeroConstructor, IsPlainOldData)
	FMovieScene_MovieScene_EEvaluationMethod           EvaluationMethod;                                         // 0x0012(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0013(0x0005) MISSED OFFSET
	struct FMovieScene_MovieSceneEvaluationTrackSegments Segments;                                                 // 0x0018(0x0020)
	class UMovieScene_MovieSceneTrack*                 SourceTrack;                                              // 0x0038(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FMovieScene_SectionEvaluationDataTree       EvaluationTree;                                           // 0x0040(0x0060)
	TArray<struct FMovieScene_MovieSceneEvalTemplatePtr> ChildTemplates;                                           // 0x00A0(0x0010) (ZeroConstructor)
	struct FMovieScene_MovieSceneTrackImplementationPtr TrackTemplate;                                            // 0x00B0(0x0038)
	struct FName                                       EvaluationGroup;                                          // 0x00E8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEvaluateInPreroll : 1;                                   // 0x00F0(0x0001)
	unsigned char                                      bEvaluateInPostroll : 1;                                  // 0x00F0(0x0001)
	unsigned char                                      bTearDownPriority : 1;                                    // 0x00F0(0x0001)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00F1(0x0007) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneEvaluationGroupLUTIndex
// 0x000C
struct FMovieScene_MovieSceneEvaluationGroupLUTIndex
{
	int                                                LUTOffset;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumInitPtrs;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumEvalPtrs;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneSequenceID
// 0x0004
struct FMovieScene_MovieSceneSequenceID
{
	uint32_t                                           Value;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneEvaluationFieldTrackPtr
// 0x0008
struct FMovieScene_MovieSceneEvaluationFieldTrackPtr
{
	struct FMovieScene_MovieSceneSequenceID            SequenceID;                                               // 0x0000(0x0004)
	struct FMovieScene_MovieSceneTrackIdentifier       TrackIdentifier;                                          // 0x0004(0x0004)
};

// ScriptStruct MovieScene.MovieSceneSegmentIdentifier
// 0x0004
struct FMovieScene_MovieSceneSegmentIdentifier
{
	int                                                IdentifierIndex;                                          // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneEvaluationFieldSegmentPtr
// 0x0004 (0x000C - 0x0008)
struct FMovieScene_MovieSceneEvaluationFieldSegmentPtr : public FMovieScene_MovieSceneEvaluationFieldTrackPtr
{
	struct FMovieScene_MovieSceneSegmentIdentifier     SegmentID;                                                // 0x0008(0x0004)
};

// ScriptStruct MovieScene.MovieSceneEvaluationGroup
// 0x0020
struct FMovieScene_MovieSceneEvaluationGroup
{
	TArray<struct FMovieScene_MovieSceneEvaluationGroupLUTIndex> LUTIndices;                                               // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FMovieScene_MovieSceneEvaluationFieldSegmentPtr> SegmentPtrLUT;                                            // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct MovieScene.MovieSceneEvaluationKey
// 0x000C
struct FMovieScene_MovieSceneEvaluationKey
{
	struct FMovieScene_MovieSceneSequenceID            SequenceID;                                               // 0x0000(0x0004)
	struct FMovieScene_MovieSceneTrackIdentifier       TrackIdentifier;                                          // 0x0004(0x0004)
	uint32_t                                           SectionIndex;                                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneOrderedEvaluationKey
// 0x0010
struct FMovieScene_MovieSceneOrderedEvaluationKey
{
	struct FMovieScene_MovieSceneEvaluationKey         Key;                                                      // 0x0000(0x000C)
	uint16_t                                           SetupIndex;                                               // 0x000C(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           TearDownIndex;                                            // 0x000E(0x0002) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneEvaluationMetaData
// 0x0070
struct FMovieScene_MovieSceneEvaluationMetaData
{
	TArray<struct FMovieScene_MovieSceneSequenceID>    ActiveSequences;                                          // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FMovieScene_MovieSceneOrderedEvaluationKey> ActiveEntities;                                           // 0x0010(0x0010) (ZeroConstructor)
	TMap<struct FMovieScene_MovieSceneSequenceID, uint32_t> SubTemplateSerialNumbers;                                 // 0x0020(0x0050) (ZeroConstructor)
};

// ScriptStruct MovieScene.MovieSceneEvaluationField
// 0x0030
struct FMovieScene_MovieSceneEvaluationField
{
	TArray<struct FMovieScene_MovieSceneFrameRange>    Ranges;                                                   // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FMovieScene_MovieSceneEvaluationGroup> Groups;                                                   // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FMovieScene_MovieSceneEvaluationMetaData> MetaData;                                                 // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct MovieScene.MovieSceneSequenceTransform
// 0x000C
struct FMovieScene_MovieSceneSequenceTransform
{
	float                                              TimeScale;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FFrameTime                                  Offset;                                                   // 0x0004(0x0008)
};

// ScriptStruct MovieScene.MovieSceneSequenceInstanceDataPtr
// 0x0018
struct FMovieScene_MovieSceneSequenceInstanceDataPtr
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneSubSequenceData
// 0x00A8
struct FMovieScene_MovieSceneSubSequenceData
{
	struct FSoftObjectPath                             Sequence;                                                 // 0x0000(0x0018) (ZeroConstructor)
	struct FMovieScene_MovieSceneSequenceTransform     RootToSequenceTransform;                                  // 0x0018(0x000C)
	struct FFrameRate                                  TickResolution;                                           // 0x0024(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FMovieScene_MovieSceneSequenceID            DeterministicSequenceID;                                  // 0x002C(0x0004)
	struct FMovieScene_MovieSceneFrameRange            PlayRange;                                                // 0x0030(0x0010)
	struct FMovieScene_MovieSceneFrameRange            PreRollRange;                                             // 0x0040(0x0010)
	struct FMovieScene_MovieSceneFrameRange            PostRollRange;                                            // 0x0050(0x0010)
	int                                                HierarchicalBias;                                         // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	struct FMovieScene_MovieSceneSequenceInstanceDataPtr InstanceData;                                             // 0x0068(0x0018)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0080(0x0008) MISSED OFFSET
	struct FGuid                                       SubSectionSignature;                                      // 0x0088(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FMovieScene_MovieSceneSequenceTransform     OuterToInnerTransform;                                    // 0x0098(0x000C)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneSequenceHierarchyNode
// 0x0018
struct FMovieScene_MovieSceneSequenceHierarchyNode
{
	struct FMovieScene_MovieSceneSequenceID            ParentID;                                                 // 0x0000(0x0004)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FMovieScene_MovieSceneSequenceID>    Children;                                                 // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct MovieScene.MovieSceneSequenceHierarchy
// 0x00A0
struct FMovieScene_MovieSceneSequenceHierarchy
{
	TMap<struct FMovieScene_MovieSceneSequenceID, struct FMovieScene_MovieSceneSubSequenceData> SubSequences;                                             // 0x0000(0x0050) (ZeroConstructor)
	TMap<struct FMovieScene_MovieSceneSequenceID, struct FMovieScene_MovieSceneSequenceHierarchyNode> Hierarchy;                                                // 0x0050(0x0050) (ZeroConstructor)
};

// ScriptStruct MovieScene.MovieSceneEvaluationTemplateSerialNumber
// 0x0004
struct FMovieScene_MovieSceneEvaluationTemplateSerialNumber
{
	uint32_t                                           Value;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneTemplateGenerationLedger
// 0x00A8
struct FMovieScene_MovieSceneTemplateGenerationLedger
{
	struct FMovieScene_MovieSceneTrackIdentifier       LastTrackIdentifier;                                      // 0x0000(0x0004)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TMap<struct FGuid, struct FMovieScene_MovieSceneTrackIdentifier> TrackSignatureToTrackIdentifier;                          // 0x0008(0x0050) (ZeroConstructor)
	TMap<struct FGuid, struct FMovieScene_MovieSceneFrameRange> SubSectionRanges;                                         // 0x0058(0x0050) (ZeroConstructor)
};

// ScriptStruct MovieScene.MovieSceneTrackFieldData
// 0x0060
struct FMovieScene_MovieSceneTrackFieldData
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneSubSectionFieldData
// 0x0060
struct FMovieScene_MovieSceneSubSectionFieldData
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneEvaluationTemplate
// 0x02F0
struct FMovieScene_MovieSceneEvaluationTemplate
{
	TMap<struct FMovieScene_MovieSceneTrackIdentifier, struct FMovieScene_MovieSceneEvaluationTrack> Tracks;                                                   // 0x0000(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0050(0x0050) MISSED OFFSET
	struct FMovieScene_MovieSceneEvaluationField       EvaluationField;                                          // 0x00A0(0x0030)
	struct FMovieScene_MovieSceneSequenceHierarchy     Hierarchy;                                                // 0x00D0(0x00A0)
	struct FGuid                                       SequenceSignature;                                        // 0x0170(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FMovieScene_MovieSceneEvaluationTemplateSerialNumber TemplateSerialNumber;                                     // 0x0180(0x0004)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0184(0x0004) MISSED OFFSET
	struct FMovieScene_MovieSceneTemplateGenerationLedger TemplateLedger;                                           // 0x0188(0x00A8)
	struct FMovieScene_MovieSceneTrackFieldData        TrackFieldData;                                           // 0x0230(0x0060)
	struct FMovieScene_MovieSceneSubSectionFieldData   SubSectionFieldData;                                      // 0x0290(0x0060)
};

// ScriptStruct MovieScene.MovieSceneObjectBindingID
// 0x0018
struct FMovieScene_MovieSceneObjectBindingID
{
	int                                                SequenceID;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	FMovieScene_MovieScene_EMovieSceneObjectBindingSpace Space;                                                    // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FGuid                                       Guid;                                                     // 0x0008(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneSequenceLoopCount
// 0x0004
struct FMovieScene_MovieSceneSequenceLoopCount
{
	int                                                Value;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneSequencePlaybackSettings
// 0x0014
struct FMovieScene_MovieSceneSequencePlaybackSettings
{
	unsigned char                                      bAutoPlay : 1;                                            // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FMovieScene_MovieSceneSequenceLoopCount     LoopCount;                                                // 0x0004(0x0004) (Edit, BlueprintVisible)
	float                                              PlayRate;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bRandomStartTime : 1;                                     // 0x0010(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bRestoreState : 1;                                        // 0x0010(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bDisableMovementInput : 1;                                // 0x0010(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bDisableLookAtInput : 1;                                  // 0x0010(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bHidePlayer : 1;                                          // 0x0010(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bHideHud : 1;                                             // 0x0010(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bDisableCameraCuts : 1;                                   // 0x0010(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bPauseAtEnd : 1;                                          // 0x0010(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneRootEvaluationTemplateInstance
// 0x0308
struct FMovieScene_MovieSceneRootEvaluationTemplateInstance
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
	TMap<struct FMovieScene_MovieSceneSequenceID, class UObject*> DirectorInstances;                                        // 0x0018(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x2A0];                                     // 0x0068(0x02A0) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneSequenceReplProperties
// 0x0010
struct FMovieScene_MovieSceneSequenceReplProperties
{
	struct FFrameTime                                  LastKnownPosition;                                        // 0x0000(0x0008)
	TEnumAsByte<FMovieScene_MovieScene_EMovieScenePlayerStatus> LastKnownStatus;                                          // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                LastKnownNumLoops;                                        // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneSpawnable
// 0x0090
struct FMovieScene_MovieSceneSpawnable
{
	struct FTransform                                  SpawnTransform;                                           // 0x0000(0x0030) (Edit, IsPlainOldData)
	TArray<struct FName>                               Tags;                                                     // 0x0030(0x0010) (Edit, ZeroConstructor)
	bool                                               bContinuouslyRespawn;                                     // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	struct FGuid                                       Guid;                                                     // 0x0044(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x0058(0x0010) (ZeroConstructor)
	class UObject*                                     ObjectTemplate;                                           // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FGuid>                               ChildPossessables;                                        // 0x0070(0x0010) (ZeroConstructor)
	FMovieScene_MovieScene_ESpawnOwnership             Ownership;                                                // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	struct FName                                       LevelName;                                                // 0x0084(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieScenePossessable
// 0x0048
struct FMovieScene_MovieScenePossessable
{
	TArray<struct FName>                               Tags;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FGuid                                       Guid;                                                     // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // 0x0020(0x0010) (ZeroConstructor)
	class UClass*                                      PossessedObjectClass;                                     // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ParentGuid;                                               // 0x0038(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneBinding
// 0x0030
struct FMovieScene_MovieSceneBinding
{
	struct FGuid                                       ObjectGuid;                                               // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FString                                     BindingName;                                              // 0x0010(0x0010) (ZeroConstructor)
	TArray<class UMovieScene_MovieSceneTrack*>         Tracks;                                                   // 0x0020(0x0010) (ExportObject, ZeroConstructor)
};

// ScriptStruct MovieScene.MovieSceneObjectBindingIDs
// 0x0010
struct FMovieScene_MovieSceneObjectBindingIDs
{
	TArray<struct FMovieScene_MovieSceneObjectBindingID> IDs;                                                      // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct MovieScene.MovieSceneMarkedFrame
// 0x0018
struct FMovieScene_MovieSceneMarkedFrame
{
	struct FFrameNumber                                FrameNumber;                                              // 0x0000(0x0004) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     Label;                                                    // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct MovieScene.MovieSceneSectionParameters
// 0x0018
struct FMovieScene_MovieSceneSectionParameters
{
	struct FFrameNumber                                StartFrameOffset;                                         // 0x0000(0x0004) (Edit, BlueprintVisible)
	float                                              TimeScale;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                HierarchicalBias;                                         // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StartOffset;                                              // 0x000C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              PrerollTime;                                              // 0x0010(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              PostrollTime;                                             // 0x0014(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneBindingOverrideData
// 0x0024
struct FMovieScene_MovieSceneBindingOverrideData
{
	struct FMovieScene_MovieSceneObjectBindingID       ObjectBindingId;                                          // 0x0000(0x0018) (Edit)
	TWeakObjectPtr<class UObject>                      Object;                                                   // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverridesDefault;                                        // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneEvalTemplateBase
// 0x0010
struct FMovieScene_MovieSceneEvalTemplateBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneEvalTemplate
// 0x0010 (0x0020 - 0x0010)
struct FMovieScene_MovieSceneEvalTemplate : public FMovieScene_MovieSceneEvalTemplateBase
{
	FMovieScene_MovieScene_EMovieSceneCompletionMode   CompletionMode;                                           // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	TWeakObjectPtr<class UMovieScene_MovieSceneSection> SourceSectionPtr;                                         // 0x0014(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneChannel
// 0x0008
struct FMovieScene_MovieSceneChannel
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneByteChannel
// 0x0090 (0x0098 - 0x0008)
struct FMovieScene_MovieSceneByteChannel : public FMovieScene_MovieSceneChannel
{
	TArray<struct FFrameNumber>                        Times;                                                    // 0x0008(0x0010) (ZeroConstructor)
	unsigned char                                      DefaultValue;                                             // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasDefaultValue;                                         // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x001A(0x0006) MISSED OFFSET
	TArray<unsigned char>                              Values;                                                   // 0x0020(0x0010) (ZeroConstructor)
	class UEnum*                                       Enum;                                                     // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x60];                                      // 0x0038(0x0060) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneBoolChannel
// 0x0088 (0x0090 - 0x0008)
struct FMovieScene_MovieSceneBoolChannel : public FMovieScene_MovieSceneChannel
{
	TArray<struct FFrameNumber>                        Times;                                                    // 0x0008(0x0010) (ZeroConstructor)
	bool                                               DefaultValue;                                             // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasDefaultValue;                                         // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x001A(0x0006) MISSED OFFSET
	TArray<bool>                                       Values;                                                   // 0x0020(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x60];                                      // 0x0030(0x0060) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneIntegerChannel
// 0x0088 (0x0090 - 0x0008)
struct FMovieScene_MovieSceneIntegerChannel : public FMovieScene_MovieSceneChannel
{
	TArray<struct FFrameNumber>                        Times;                                                    // 0x0008(0x0010) (ZeroConstructor)
	int                                                DefaultValue;                                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasDefaultValue;                                         // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	TArray<int>                                        Values;                                                   // 0x0020(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x60];                                      // 0x0030(0x0060) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieScenePropertySectionData
// 0x0028
struct FMovieScene_MovieScenePropertySectionData
{
	struct FName                                       PropertyName;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     PropertyPath;                                             // 0x0008(0x0010) (ZeroConstructor)
	struct FName                                       FunctionName;                                             // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       NotifyFunctionName;                                       // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieScenePropertySectionTemplate
// 0x0028 (0x0048 - 0x0020)
struct FMovieScene_MovieScenePropertySectionTemplate : public FMovieScene_MovieSceneEvalTemplate
{
	struct FMovieScene_MovieScenePropertySectionData   PropertyData;                                             // 0x0020(0x0028)
};

// ScriptStruct MovieScene.MovieSceneTangentData
// 0x0014
struct FMovieScene_MovieSceneTangentData
{
	float                                              ArriveTangent;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LeaveTangent;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ERichCurveTangentWeightMode> TangentWeightMode;                                        // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              ArriveTangentWeight;                                      // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LeaveTangentWeight;                                       // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneFloatValue
// 0x001C
struct FMovieScene_MovieSceneFloatValue
{
	float                                              Value;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ERichCurveInterpMode>   InterpMode;                                               // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ERichCurveTangentMode>  TangentMode;                                              // 0x0005(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	struct FMovieScene_MovieSceneTangentData           Tangent;                                                  // 0x0008(0x0014) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneKeyHandleMap
// 0x0000 (0x0060 - 0x0060)
struct FMovieScene_MovieSceneKeyHandleMap : public FEngine_KeyHandleLookupTable
{

};

// ScriptStruct MovieScene.MovieSceneFloatChannel
// 0x0098 (0x00A0 - 0x0008)
struct FMovieScene_MovieSceneFloatChannel : public FMovieScene_MovieSceneChannel
{
	TEnumAsByte<FEngine_Engine_ERichCurveExtrapolation> PreInfinityExtrap;                                        // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ERichCurveExtrapolation> PostInfinityExtrap;                                       // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	TArray<struct FFrameNumber>                        Times;                                                    // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FMovieScene_MovieSceneFloatValue>    Values;                                                   // 0x0020(0x0010) (ZeroConstructor)
	float                                              DefaultValue;                                             // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasDefaultValue;                                         // 0x0034(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	struct FMovieScene_MovieSceneKeyHandleMap          KeyHandles;                                               // 0x0038(0x0060) (Transient)
	struct FFrameRate                                  TickResolution;                                           // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneTrackImplementation
// 0x0000 (0x0010 - 0x0010)
struct FMovieScene_MovieSceneTrackImplementation : public FMovieScene_MovieSceneEvalTemplateBase
{

};

// ScriptStruct MovieScene.MovieSceneTrackLabels
// 0x0010
struct FMovieScene_MovieSceneTrackLabels
{
	TArray<struct FString>                             Strings;                                                  // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct MovieScene.MovieSceneExpansionState
// 0x0001
struct FMovieScene_MovieSceneExpansionState
{
	bool                                               bExpanded;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneEditorData
// 0x00F0
struct FMovieScene_MovieSceneEditorData
{
	TMap<struct FString, struct FMovieScene_MovieSceneExpansionState> ExpansionStates;                                          // 0x0000(0x0050) (ZeroConstructor)
	TArray<struct FString>                             PinnedNodes;                                              // 0x0050(0x0010) (ZeroConstructor)
	double                                             ViewStart;                                                // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	double                                             ViewEnd;                                                  // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	double                                             WorkStart;                                                // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData)
	double                                             WorkEnd;                                                  // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0080(0x0050) UNKNOWN PROPERTY: SetProperty MovieScene.MovieSceneEditorData.MarkedFrames
	struct FFloatRange                                 WorkingRange;                                             // 0x00D0(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FFloatRange                                 ViewRange;                                                // 0x00E0(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneSectionGroup
// 0x0010
struct FMovieScene_MovieSceneSectionGroup
{
	TArray<TWeakObjectPtr<class UMovieScene_MovieSceneSection>> Sections;                                                 // 0x0000(0x0010) (ExportObject, ZeroConstructor)
};

// ScriptStruct MovieScene.MovieSceneTimecodeSource
// 0x0018
struct FMovieScene_MovieSceneTimecodeSource
{
	struct FTimecode                                   Timecode;                                                 // 0x0000(0x0014) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFrameNumber                                DeltaFrame;                                               // 0x0014(0x0004) (Edit, EditConst)
};

// ScriptStruct MovieScene.MovieSceneEmptyStruct
// 0x0001
struct FMovieScene_MovieSceneEmptyStruct
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneEvaluationOperand
// 0x0014
struct FMovieScene_MovieSceneEvaluationOperand
{
	struct FGuid                                       ObjectBindingId;                                          // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FMovieScene_MovieSceneSequenceID            SequenceID;                                               // 0x0010(0x0004)
};

// ScriptStruct MovieScene.MovieSceneSubSectionData
// 0x001C
struct FMovieScene_MovieSceneSubSectionData
{
	TWeakObjectPtr<class UMovieScene_MovieSceneSubSection> Section;                                                  // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGuid                                       ObjectBindingId;                                          // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
	FMovieScene_MovieScene_ESectionEvaluationFlags     Flags;                                                    // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneKeyStruct
// 0x0008
struct FMovieScene_MovieSceneKeyStruct
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneKeyTimeStruct
// 0x0020 (0x0028 - 0x0008)
struct FMovieScene_MovieSceneKeyTimeStruct : public FMovieScene_MovieSceneKeyStruct
{
	struct FFrameNumber                                Time;                                                     // 0x0008(0x0004) (Edit)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x000C(0x001C) MISSED OFFSET
};

// ScriptStruct MovieScene.GeneratedMovieSceneKeyStruct
// 0x0050
struct FMovieScene_GeneratedMovieSceneKeyStruct
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneObjectPathChannelKeyValue
// 0x0030
struct FMovieScene_MovieSceneObjectPathChannelKeyValue
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty MovieScene.MovieSceneObjectPathChannelKeyValue.SoftPtr
	class UObject*                                     HardPtr;                                                  // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneObjectPathChannel
// 0x00B8 (0x00C0 - 0x0008)
struct FMovieScene_MovieSceneObjectPathChannel : public FMovieScene_MovieSceneChannel
{
	class UClass*                                      PropertyClass;                                            // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FFrameNumber>                        Times;                                                    // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FMovieScene_MovieSceneObjectPathChannelKeyValue> Values;                                                   // 0x0020(0x0010) (ZeroConstructor)
	struct FMovieScene_MovieSceneObjectPathChannelKeyValue DefaultValue;                                             // 0x0030(0x0030)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0060(0x0060) MISSED OFFSET
};

// ScriptStruct MovieScene.SectionEvaluationData
// 0x000C
struct FMovieScene_SectionEvaluationData
{
	int                                                ImplIndex;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FFrameNumber                                ForcedTime;                                               // 0x0004(0x0004)
	FMovieScene_MovieScene_ESectionEvaluationFlags     Flags;                                                    // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneSequenceInstanceData
// 0x0008
struct FMovieScene_MovieSceneSequenceInstanceData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct MovieScene.TestMovieSceneEvalTemplate
// 0x0000 (0x0020 - 0x0020)
struct FMovieScene_TestMovieSceneEvalTemplate : public FMovieScene_MovieSceneEvalTemplate
{

};

// ScriptStruct MovieScene.MovieSceneTrackDisplayOptions
// 0x0004
struct FMovieScene_MovieSceneTrackDisplayOptions
{
	unsigned char                                      bShowVerticalFrames : 1;                                  // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
