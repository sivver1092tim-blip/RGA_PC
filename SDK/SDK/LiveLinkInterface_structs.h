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

// Enum LiveLinkInterface.ELiveLinkCameraProjectionMode
enum class FLiveLinkInterface_LiveLinkInterface_ELiveLinkCameraProjectionMode : uint8_t
{
	ELiveLinkCameraProjectionMode__Perspective = 0,
	ELiveLinkCameraProjectionMode__Orthographic = 1,
	ELiveLinkCameraProjectionMode__ELiveLinkCameraProjectionMode_MAX = 2
};


// Enum LiveLinkInterface.ELiveLinkSourceMode
enum class FLiveLinkInterface_LiveLinkInterface_ELiveLinkSourceMode : uint8_t
{
	ELiveLinkSourceMode__Latest    = 0,
	ELiveLinkSourceMode__EngineTime = 1,
	ELiveLinkSourceMode__Timecode  = 2,
	ELiveLinkSourceMode__ELiveLinkSourceMode_MAX = 3
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct LiveLinkInterface.LiveLinkSubjectName
// 0x0008
struct FLiveLinkInterface_LiveLinkSubjectName
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct LiveLinkInterface.LiveLinkSourceBufferManagementSettings
// 0x0030
struct FLiveLinkInterface_LiveLinkSourceBufferManagementSettings
{
	float                                              ValidEngineTime;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EngineTimeOffset;                                         // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFrameRate                                  TimecodeFrameRate;                                        // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bGenerateSubFrame;                                        // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	struct FFrameRate                                  SourceTimecodeFrameRate;                                  // 0x0014(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ValidTimecodeFrame;                                       // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                TimecodeFrameOffset;                                      // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                LatestOffset;                                             // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxNumberOfFrameToBuffered;                               // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bKeepAtLeastOneFrame;                                     // 0x002C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
};

// ScriptStruct LiveLinkInterface.LiveLinkCurveConversionSettings
// 0x0050
struct FLiveLinkInterface_LiveLinkCurveConversionSettings
{
	TMap<struct FString, struct FSoftObjectPath>       CurveConversionAssetMap;                                  // 0x0000(0x0050) (Edit, ZeroConstructor)
};

// ScriptStruct LiveLinkInterface.LiveLinkSubjectKey
// 0x0018
struct FLiveLinkInterface_LiveLinkSubjectKey
{
	struct FGuid                                       Source;                                                   // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLiveLinkInterface_LiveLinkSubjectName      SubjectName;                                              // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct LiveLinkInterface.LiveLinkSubjectPreset
// 0x0038
struct FLiveLinkInterface_LiveLinkSubjectPreset
{
	struct FLiveLinkInterface_LiveLinkSubjectKey       Key;                                                      // 0x0000(0x0018)
	class UClass*                                      Role;                                                     // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	class ULiveLinkInterface_LiveLinkSubjectSettings*  Settings;                                                 // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	class ULiveLinkInterface_LiveLinkVirtualSubject*   VirtualSubject;                                           // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct LiveLinkInterface.LiveLinkSourceHandle
// 0x0018
struct FLiveLinkInterface_LiveLinkSourceHandle
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct LiveLinkInterface.LiveLinkBaseBlueprintData
// 0x0008
struct FLiveLinkInterface_LiveLinkBaseBlueprintData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct LiveLinkInterface.SubjectFrameHandle
// 0x0010 (0x0018 - 0x0008)
struct FLiveLinkInterface_SubjectFrameHandle : public FLiveLinkInterface_LiveLinkBaseBlueprintData
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct LiveLinkInterface.CachedSubjectFrame
// 0x0140
struct FLiveLinkInterface_CachedSubjectFrame
{
	unsigned char                                      UnknownData00[0x140];                                     // 0x0000(0x0140) MISSED OFFSET
};

// ScriptStruct LiveLinkInterface.LiveLinkTransform
// 0x0020
struct FLiveLinkInterface_LiveLinkTransform
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct LiveLinkInterface.SubjectMetadata
// 0x0070
struct FLiveLinkInterface_SubjectMetadata
{
	TMap<struct FName, struct FString>                 StringMetadata;                                           // 0x0000(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	struct FTimecode                                   SceneTimecode;                                            // 0x0050(0x0014) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FFrameRate                                  SceneFramerate;                                           // 0x0064(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
};

// ScriptStruct LiveLinkInterface.LiveLinkWorldTime
// 0x0010
struct FLiveLinkInterface_LiveLinkWorldTime
{
	double                                             Time;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	double                                             Offset;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct LiveLinkInterface.LiveLinkMetaData
// 0x0060
struct FLiveLinkInterface_LiveLinkMetaData
{
	TMap<struct FName, struct FString>                 StringMetadata;                                           // 0x0000(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	struct FQualifiedFrameTime                         SceneTime;                                                // 0x0050(0x0010) (Edit, BlueprintVisible)
};

// ScriptStruct LiveLinkInterface.LiveLinkBaseFrameData
// 0x0080
struct FLiveLinkInterface_LiveLinkBaseFrameData
{
	struct FLiveLinkInterface_LiveLinkWorldTime        WorldTime;                                                // 0x0000(0x0010) (Edit, EditConst)
	struct FLiveLinkInterface_LiveLinkMetaData         MetaData;                                                 // 0x0010(0x0060) (Edit, BlueprintVisible)
	TArray<float>                                      PropertyValues;                                           // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct LiveLinkInterface.LiveLinkAnimationFrameData
// 0x0010 (0x0090 - 0x0080)
struct FLiveLinkInterface_LiveLinkAnimationFrameData : public FLiveLinkInterface_LiveLinkBaseFrameData
{
	TArray<struct FTransform>                          Transforms;                                               // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct LiveLinkInterface.LiveLinkBaseStaticData
// 0x0010
struct FLiveLinkInterface_LiveLinkBaseStaticData
{
	TArray<struct FName>                               PropertyNames;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct LiveLinkInterface.LiveLinkSkeletonStaticData
// 0x0020 (0x0030 - 0x0010)
struct FLiveLinkInterface_LiveLinkSkeletonStaticData : public FLiveLinkInterface_LiveLinkBaseStaticData
{
	TArray<struct FName>                               BoneNames;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        BoneParents;                                              // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct LiveLinkInterface.LiveLinkBasicBlueprintData
// 0x0090 (0x0098 - 0x0008)
struct FLiveLinkInterface_LiveLinkBasicBlueprintData : public FLiveLinkInterface_LiveLinkBaseBlueprintData
{
	struct FLiveLinkInterface_LiveLinkBaseStaticData   StaticData;                                               // 0x0008(0x0010) (Edit, BlueprintVisible)
	struct FLiveLinkInterface_LiveLinkBaseFrameData    FrameData;                                                // 0x0018(0x0080) (Edit, BlueprintVisible)
};

// ScriptStruct LiveLinkInterface.LiveLinkTransformFrameData
// 0x0030 (0x00B0 - 0x0080)
struct FLiveLinkInterface_LiveLinkTransformFrameData : public FLiveLinkInterface_LiveLinkBaseFrameData
{
	struct FTransform                                  Transform;                                                // 0x0080(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct LiveLinkInterface.LiveLinkCameraFrameData
// 0x0020 (0x00D0 - 0x00B0)
struct FLiveLinkInterface_LiveLinkCameraFrameData : public FLiveLinkInterface_LiveLinkTransformFrameData
{
	float                                              FieldOfView;                                              // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AspectRatio;                                              // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FocalLength;                                              // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Aperture;                                                 // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FocusDistance;                                            // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FLiveLinkInterface_LiveLinkInterface_ELiveLinkCameraProjectionMode ProjectionMode;                                           // 0x00C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x00C5(0x000B) MISSED OFFSET
};

// ScriptStruct LiveLinkInterface.LiveLinkTransformStaticData
// 0x0000 (0x0010 - 0x0010)
struct FLiveLinkInterface_LiveLinkTransformStaticData : public FLiveLinkInterface_LiveLinkBaseStaticData
{

};

// ScriptStruct LiveLinkInterface.LiveLinkCameraStaticData
// 0x0010 (0x0020 - 0x0010)
struct FLiveLinkInterface_LiveLinkCameraStaticData : public FLiveLinkInterface_LiveLinkTransformStaticData
{
	bool                                               bIsFieldOfViewSupported;                                  // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsAspectRatioSupported;                                  // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsFocalLengthSupported;                                  // 0x0012(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsProjectionModeSupported;                               // 0x0013(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmBackWidth;                                            // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmBackHeight;                                           // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsApertureSupported;                                     // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsFocusDistanceSupported;                                // 0x001D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x001E(0x0002) MISSED OFFSET
};

// ScriptStruct LiveLinkInterface.LiveLinkCameraBlueprintData
// 0x00F8 (0x0100 - 0x0008)
struct FLiveLinkInterface_LiveLinkCameraBlueprintData : public FLiveLinkInterface_LiveLinkBaseBlueprintData
{
	struct FLiveLinkInterface_LiveLinkCameraStaticData StaticData;                                               // 0x0008(0x0020) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FLiveLinkInterface_LiveLinkCameraFrameData  FrameData;                                                // 0x0030(0x00D0) (Edit, BlueprintVisible)
};

// ScriptStruct LiveLinkInterface.LiveLinkLightFrameData
// 0x0030 (0x00E0 - 0x00B0)
struct FLiveLinkInterface_LiveLinkLightFrameData : public FLiveLinkInterface_LiveLinkTransformFrameData
{
	float                                              Temperature;                                              // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Intensity;                                                // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FColor                                      LightColor;                                               // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InnerConeAngle;                                           // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OuterConeAngle;                                           // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AttenuationRadius;                                        // 0x00C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SourceRadius;                                             // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SoftSourceRadius;                                         // 0x00CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SourceLength;                                             // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x00D4(0x000C) MISSED OFFSET
};

// ScriptStruct LiveLinkInterface.LiveLinkLightStaticData
// 0x0010 (0x0020 - 0x0010)
struct FLiveLinkInterface_LiveLinkLightStaticData : public FLiveLinkInterface_LiveLinkTransformStaticData
{
	bool                                               bIsTemperatureSupported;                                  // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsIntensitySupported;                                    // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsLightColorSupported;                                   // 0x0012(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsInnerConeAngleSupported;                               // 0x0013(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsOuterConeAngleSupported;                               // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsAttenuationRadiusSupported;                            // 0x0015(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSourceLenghtSupported;                                 // 0x0016(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSourceRadiusSupported;                                 // 0x0017(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSoftSourceRadiusSupported;                             // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct LiveLinkInterface.LiveLinkLightBlueprintData
// 0x0108 (0x0110 - 0x0008)
struct FLiveLinkInterface_LiveLinkLightBlueprintData : public FLiveLinkInterface_LiveLinkBaseBlueprintData
{
	struct FLiveLinkInterface_LiveLinkLightStaticData  StaticData;                                               // 0x0008(0x0020) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FLiveLinkInterface_LiveLinkLightFrameData   FrameData;                                                // 0x0030(0x00E0) (Edit, BlueprintVisible)
};

// ScriptStruct LiveLinkInterface.LiveLinkSourcePreset
// 0x0018
struct FLiveLinkInterface_LiveLinkSourcePreset
{
	struct FGuid                                       Guid;                                                     // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	class ULiveLinkInterface_LiveLinkSourceSettings*   Settings;                                                 // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct LiveLinkInterface.LiveLinkRefSkeleton
// 0x0020
struct FLiveLinkInterface_LiveLinkRefSkeleton
{
	TArray<struct FName>                               BoneNames;                                                // 0x0000(0x0010) (ZeroConstructor)
	TArray<int>                                        BoneParents;                                              // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct LiveLinkInterface.LiveLinkSubjectRepresentation
// 0x0010
struct FLiveLinkInterface_LiveLinkSubjectRepresentation
{
	struct FLiveLinkInterface_LiveLinkSubjectName      Subject;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible)
	class UClass*                                      Role;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct LiveLinkInterface.LiveLinkInterpolationSettings
// 0x0008
struct FLiveLinkInterface_LiveLinkInterpolationSettings
{
	bool                                               bUseInterpolation;                                        // 0x0000(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              InterpolationOffset;                                      // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct LiveLinkInterface.LiveLinkTimeSynchronizationSettings
// 0x000C
struct FLiveLinkInterface_LiveLinkTimeSynchronizationSettings
{
	struct FFrameRate                                  FrameRate;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFrameNumber                                FrameOffset;                                              // 0x0008(0x0004) (Edit)
};

// ScriptStruct LiveLinkInterface.LiveLinkSourceDebugInfo
// 0x0010
struct FLiveLinkInterface_LiveLinkSourceDebugInfo
{
	struct FLiveLinkInterface_LiveLinkSubjectName      SubjectName;                                              // 0x0000(0x0008) (Edit, EditConst)
	int                                                SnapshotIndex;                                            // 0x0008(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                NumberOfBufferAtSnapshot;                                 // 0x000C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct LiveLinkInterface.LiveLinkTransformBlueprintData
// 0x00C8 (0x00D0 - 0x0008)
struct FLiveLinkInterface_LiveLinkTransformBlueprintData : public FLiveLinkInterface_LiveLinkBaseBlueprintData
{
	struct FLiveLinkInterface_LiveLinkTransformStaticData StaticData;                                               // 0x0008(0x0010) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	struct FLiveLinkInterface_LiveLinkTransformFrameData FrameData;                                                // 0x0020(0x00B0) (Edit, BlueprintVisible)
};

// ScriptStruct LiveLinkInterface.LiveLinkCurveElement
// 0x000C
struct FLiveLinkInterface_LiveLinkCurveElement
{
	struct FName                                       CurveName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              CurveValue;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct LiveLinkInterface.LiveLinkFrameData
// 0x0090
struct FLiveLinkInterface_LiveLinkFrameData
{
	TArray<struct FTransform>                          Transforms;                                               // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FLiveLinkInterface_LiveLinkCurveElement> CurveElements;                                            // 0x0010(0x0010) (ZeroConstructor)
	struct FLiveLinkInterface_LiveLinkWorldTime        WorldTime;                                                // 0x0020(0x0010)
	struct FLiveLinkInterface_LiveLinkMetaData         MetaData;                                                 // 0x0030(0x0060)
};

// ScriptStruct LiveLinkInterface.LiveLinkFrameRate
// 0x0000 (0x0008 - 0x0008)
struct FLiveLinkInterface_LiveLinkFrameRate : public FFrameRate
{

};

// ScriptStruct LiveLinkInterface.LiveLinkTimeCode_Base_DEPRECATED
// 0x0010
struct FLiveLinkInterface_LiveLinkTimeCode_Base_DEPRECATED
{
	int                                                Seconds;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Frames;                                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FLiveLinkInterface_LiveLinkFrameRate        FrameRate;                                                // 0x0008(0x0008)
};

// ScriptStruct LiveLinkInterface.LiveLinkTime
// 0x0018
struct FLiveLinkInterface_LiveLinkTime
{
	double                                             WorldTime;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FQualifiedFrameTime                         SceneTime;                                                // 0x0008(0x0010) (Edit)
};

// ScriptStruct LiveLinkInterface.LiveLinkTimeCode
// 0x0000 (0x0010 - 0x0010)
struct FLiveLinkInterface_LiveLinkTimeCode : public FLiveLinkInterface_LiveLinkTimeCode_Base_DEPRECATED
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
