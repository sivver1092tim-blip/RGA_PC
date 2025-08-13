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

// Enum AnimGraphRuntime.AnimPhysLinearConstraintType
enum class FAnimGraphRuntime_AnimGraphRuntime_EAnimPhysLinearConstraintType : uint8_t
{
	AnimPhysLinearConstraintType__Free = 0,
	AnimPhysLinearConstraintType__Limited = 1,
	AnimPhysLinearConstraintType__AnimPhysLinearConstraintType_MAX = 2
};


// Enum AnimGraphRuntime.AnimPhysAngularConstraintType
enum class FAnimGraphRuntime_AnimGraphRuntime_EAnimPhysAngularConstraintType : uint8_t
{
	AnimPhysAngularConstraintType__Angular = 0,
	AnimPhysAngularConstraintType__Cone = 1,
	AnimPhysAngularConstraintType__AnimPhysAngularConstraintType_MAX = 2
};


// Enum AnimGraphRuntime.EBlendListTransitionType
enum class FAnimGraphRuntime_AnimGraphRuntime_EBlendListTransitionType : uint8_t
{
	EBlendListTransitionType__StandardBlend = 0,
	EBlendListTransitionType__Inertialization = 1,
	EBlendListTransitionType__EBlendListTransitionType_MAX = 2
};


// Enum AnimGraphRuntime.EDrivenDestinationMode
enum class FAnimGraphRuntime_AnimGraphRuntime_EDrivenDestinationMode : uint8_t
{
	EDrivenDestinationMode__Bone   = 0,
	EDrivenDestinationMode__MorphTarget = 1,
	EDrivenDestinationMode__MaterialParameter = 2,
	EDrivenDestinationMode__EDrivenDestinationMode_MAX = 3
};


// Enum AnimGraphRuntime.EDrivenBoneModificationMode
enum class FAnimGraphRuntime_AnimGraphRuntime_EDrivenBoneModificationMode : uint8_t
{
	EDrivenBoneModificationMode__AddToInput = 0,
	EDrivenBoneModificationMode__ReplaceComponent = 1,
	EDrivenBoneModificationMode__AddToRefPose = 2,
	EDrivenBoneModificationMode__EDrivenBoneModificationMode_MAX = 3
};


// Enum AnimGraphRuntime.EConstraintOffsetOption
enum class FAnimGraphRuntime_AnimGraphRuntime_EConstraintOffsetOption : uint8_t
{
	EConstraintOffsetOption__None  = 0,
	EConstraintOffsetOption__Offset_RefPose = 1,
	EConstraintOffsetOption__EConstraintOffsetOption_MAX = 2
};


// Enum AnimGraphRuntime.CopyBoneDeltaMode
enum class FAnimGraphRuntime_AnimGraphRuntime_ECopyBoneDeltaMode : uint8_t
{
	CopyBoneDeltaMode__Accumulate  = 0,
	CopyBoneDeltaMode__Copy        = 1,
	CopyBoneDeltaMode__CopyBoneDeltaMode_MAX = 2
};


// Enum AnimGraphRuntime.EInterpolationBlend
enum class FAnimGraphRuntime_AnimGraphRuntime_EInterpolationBlend : uint8_t
{
	EInterpolationBlend__Linear    = 0,
	EInterpolationBlend__Cubic     = 1,
	EInterpolationBlend__Sinusoidal = 2,
	EInterpolationBlend__EaseInOutExponent2 = 3,
	EInterpolationBlend__EaseInOutExponent3 = 4,
	EInterpolationBlend__EaseInOutExponent4 = 5,
	EInterpolationBlend__EaseInOutExponent5 = 6,
	EInterpolationBlend__MAX       = 7
};


// Enum AnimGraphRuntime.EBoneModificationMode
enum class FAnimGraphRuntime_AnimGraphRuntime_EBoneModificationMode : uint8_t
{
	BMM_Ignore                     = 0,
	BMM_Replace                    = 1,
	BMM_Additive                   = 2,
	BMM_MAX                        = 3
};


// Enum AnimGraphRuntime.EModifyCurveApplyMode
enum class FAnimGraphRuntime_AnimGraphRuntime_EModifyCurveApplyMode : uint8_t
{
	EModifyCurveApplyMode__Add     = 0,
	EModifyCurveApplyMode__Scale   = 1,
	EModifyCurveApplyMode__Blend   = 2,
	EModifyCurveApplyMode__WeightedMovingAverage = 3,
	EModifyCurveApplyMode__RemapCurve = 4,
	EModifyCurveApplyMode__EModifyCurveApplyMode_MAX = 5
};


// Enum AnimGraphRuntime.EPoseDriverOutput
enum class FAnimGraphRuntime_AnimGraphRuntime_EPoseDriverOutput : uint8_t
{
	EPoseDriverOutput__DrivePoses  = 0,
	EPoseDriverOutput__DriveCurves = 1,
	EPoseDriverOutput__EPoseDriverOutput_MAX = 2
};


// Enum AnimGraphRuntime.EPoseDriverSource
enum class FAnimGraphRuntime_AnimGraphRuntime_EPoseDriverSource : uint8_t
{
	EPoseDriverSource__Rotation    = 0,
	EPoseDriverSource__Translation = 1,
	EPoseDriverSource__EPoseDriverSource_MAX = 2
};


// Enum AnimGraphRuntime.EPoseDriverType
enum class FAnimGraphRuntime_AnimGraphRuntime_EPoseDriverType : uint8_t
{
	EPoseDriverType__SwingAndTwist = 0,
	EPoseDriverType__SwingOnly     = 1,
	EPoseDriverType__Translation   = 2,
	EPoseDriverType__EPoseDriverType_MAX = 3
};


// Enum AnimGraphRuntime.ESnapshotSourceMode
enum class FAnimGraphRuntime_AnimGraphRuntime_ESnapshotSourceMode : uint8_t
{
	ESnapshotSourceMode__NamedSnapshot = 0,
	ESnapshotSourceMode__SnapshotPin = 1,
	ESnapshotSourceMode__ESnapshotSourceMode_MAX = 2
};


// Enum AnimGraphRuntime.ERefPoseType
enum class FAnimGraphRuntime_AnimGraphRuntime_ERefPoseType : uint8_t
{
	EIT_LocalSpace                 = 0,
	EIT_Additive                   = 1,
	EIT_MAX                        = 2
};


// Enum AnimGraphRuntime.AnimPhysSimSpaceType
enum class FAnimGraphRuntime_AnimGraphRuntime_EAnimPhysSimSpaceType : uint8_t
{
	AnimPhysSimSpaceType__Component = 0,
	AnimPhysSimSpaceType__Actor    = 1,
	AnimPhysSimSpaceType__World    = 2,
	AnimPhysSimSpaceType__RootRelative = 3,
	AnimPhysSimSpaceType__BoneRelative = 4,
	AnimPhysSimSpaceType__AnimPhysSimSpaceType_MAX = 5
};


// Enum AnimGraphRuntime.EScaleChainInitialLength
enum class FAnimGraphRuntime_AnimGraphRuntime_EScaleChainInitialLength : uint8_t
{
	EScaleChainInitialLength__FixedDefaultLengthValue = 0,
	EScaleChainInitialLength__Distance = 1,
	EScaleChainInitialLength__ChainLength = 2,
	EScaleChainInitialLength__EScaleChainInitialLength_MAX = 3
};


// Enum AnimGraphRuntime.ESequenceEvalReinit
enum class FAnimGraphRuntime_AnimGraphRuntime_ESequenceEvalReinit : uint8_t
{
	ESequenceEvalReinit__NoReset   = 0,
	ESequenceEvalReinit__StartPosition = 1,
	ESequenceEvalReinit__ExplicitTime = 2,
	ESequenceEvalReinit__ESequenceEvalReinit_MAX = 3
};


// Enum AnimGraphRuntime.ESplineBoneAxis
enum class FAnimGraphRuntime_AnimGraphRuntime_ESplineBoneAxis : uint8_t
{
	ESplineBoneAxis__None          = 0,
	ESplineBoneAxis__X             = 1,
	ESplineBoneAxis__Y             = 2,
	ESplineBoneAxis__Z             = 3,
	ESplineBoneAxis__ESplineBoneAxis_MAX = 4
};


// Enum AnimGraphRuntime.ESimulationSpace
enum class FAnimGraphRuntime_AnimGraphRuntime_ESimulationSpace : uint8_t
{
	ESimulationSpace__ComponentSpace = 0,
	ESimulationSpace__WorldSpace   = 1,
	ESimulationSpace__BaseBoneSpace = 2,
	ESimulationSpace__ESimulationSpace_MAX = 3
};


// Enum AnimGraphRuntime.ESphericalLimitType
enum class FAnimGraphRuntime_AnimGraphRuntime_ESphericalLimitType : uint8_t
{
	ESphericalLimitType__Inner     = 0,
	ESphericalLimitType__Outer     = 1,
	ESphericalLimitType__ESphericalLimitType_MAX = 2
};


// Enum AnimGraphRuntime.EEasingFuncType
enum class FAnimGraphRuntime_AnimGraphRuntime_EEasingFuncType : uint8_t
{
	EEasingFuncType__Linear        = 0,
	EEasingFuncType__Sinusoidal    = 1,
	EEasingFuncType__Cubic         = 2,
	EEasingFuncType__QuadraticInOut = 3,
	EEasingFuncType__CubicInOut    = 4,
	EEasingFuncType__HermiteCubic  = 5,
	EEasingFuncType__QuarticInOut  = 6,
	EEasingFuncType__QuinticInOut  = 7,
	EEasingFuncType__CircularIn    = 8,
	EEasingFuncType__CircularOut   = 9,
	EEasingFuncType__CircularInOut = 10,
	EEasingFuncType__ExpIn         = 11,
	EEasingFuncType__ExpOut        = 12,
	EEasingFuncType__ExpInOut      = 13,
	EEasingFuncType__CustomCurve   = 14,
	EEasingFuncType__EEasingFuncType_MAX = 15
};


// Enum AnimGraphRuntime.ERBFDistanceMethod
enum class FAnimGraphRuntime_AnimGraphRuntime_ERBFDistanceMethod : uint8_t
{
	ERBFDistanceMethod__Euclidean  = 0,
	ERBFDistanceMethod__Quaternion = 1,
	ERBFDistanceMethod__SwingAngle = 2,
	ERBFDistanceMethod__DefaultMethod = 3,
	ERBFDistanceMethod__ERBFDistanceMethod_MAX = 4
};


// Enum AnimGraphRuntime.ERBFNormalizeMethod
enum class FAnimGraphRuntime_AnimGraphRuntime_ERBFNormalizeMethod : uint8_t
{
	ERBFNormalizeMethod__OnlyNormalizeAboveOne = 0,
	ERBFNormalizeMethod__AlwaysNormalize = 1,
	ERBFNormalizeMethod__NormalizeWithinMedian = 2,
	ERBFNormalizeMethod__ERBFNormalizeMethod_MAX = 3
};


// Enum AnimGraphRuntime.ERBFFunctionType
enum class FAnimGraphRuntime_AnimGraphRuntime_ERBFFunctionType : uint8_t
{
	ERBFFunctionType__Gaussian     = 0,
	ERBFFunctionType__Exponential  = 1,
	ERBFFunctionType__Linear       = 2,
	ERBFFunctionType__Cubic        = 3,
	ERBFFunctionType__Quintic      = 4,
	ERBFFunctionType__DefaultFunction = 5,
	ERBFFunctionType__ERBFFunctionType_MAX = 6
};


// Enum AnimGraphRuntime.ERotationComponent
enum class FAnimGraphRuntime_AnimGraphRuntime_ERotationComponent : uint8_t
{
	ERotationComponent__EulerX     = 0,
	ERotationComponent__EulerY     = 1,
	ERotationComponent__EulerZ     = 2,
	ERotationComponent__QuaternionAngle = 3,
	ERotationComponent__SwingAngle = 4,
	ERotationComponent__TwistAngle = 5,
	ERotationComponent__ERotationComponent_MAX = 6
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AnimGraphRuntime.PositionHistory
// 0x0030
struct FAnimGraphRuntime_PositionHistory
{
	TArray<struct FVector>                             Positions;                                                // 0x0000(0x0010) (Edit, ZeroConstructor)
	float                                              Range;                                                    // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0014(0x001C) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
// 0x00B8 (0x00C8 - 0x0010)
struct FAnimGraphRuntime_AnimNode_SkeletalControlBase : public FEngine_AnimNode_Base
{
	struct FEngine_ComponentSpacePoseLink              ComponentPose;                                            // 0x0010(0x0010) (Edit, BlueprintVisible)
	int                                                LODThreshold;                                             // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ActualAlpha;                                              // 0x0024(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	FEngine_Engine_EAnimAlphaInputType                 AlphaInputType;                                           // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAlphaBoolEnabled;                                        // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x002A(0x0002) MISSED OFFSET
	float                                              ALPHA;                                                    // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FEngine_InputScaleBias                      AlphaScaleBias;                                           // 0x0030(0x0008) (Edit, BlueprintVisible)
	struct FEngine_InputAlphaBoolBlend                 AlphaBoolBlend;                                           // 0x0038(0x0048) (Edit, BlueprintVisible)
	struct FName                                       AlphaCurveName;                                           // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FEngine_InputScaleBiasClamp                 AlphaScaleBiasClamp;                                      // 0x0088(0x0030) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x10];                                      // 0x00B8(0x0010) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpacePlayer
// 0x00B0 (0x00E0 - 0x0030)
struct FAnimGraphRuntime_AnimNode_BlendSpacePlayer : public FEngine_AnimNode_AssetPlayerBase
{
	float                                              X;                                                        // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLoop;                                                    // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bResetPlayTimeWhenBlendSpaceChanges;                      // 0x0041(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0042(0x0002) MISSED OFFSET
	float                                              StartPosition;                                            // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UEngine_BlendSpaceBase*                      BlendSpace;                                               // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x88];                                      // 0x0050(0x0088) MISSED OFFSET
	class UEngine_BlendSpaceBase*                      PreviousBlendSpace;                                       // 0x00D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_AimOffsetLookAt
// 0x00D0 (0x01B0 - 0x00E0)
struct FAnimGraphRuntime_AnimNode_AimOffsetLookAt : public FAnimGraphRuntime_AnimNode_BlendSpacePlayer
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x00E0(0x0060) MISSED OFFSET
	struct FEngine_PoseLink                            BasePose;                                                 // 0x0140(0x0010) (Edit, BlueprintVisible)
	int                                                LODThreshold;                                             // 0x0150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       SourceSocketName;                                         // 0x0154(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       PivotSocketName;                                          // 0x015C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LookAtLocation;                                           // 0x0164(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SocketAxis;                                               // 0x0170(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ALPHA;                                                    // 0x017C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0180(0x0030) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimPhysConstraintSetup
// 0x0048
struct FAnimGraphRuntime_AnimPhysConstraintSetup
{
	FAnimGraphRuntime_AnimGraphRuntime_EAnimPhysLinearConstraintType LinearXLimitType;                                         // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	FAnimGraphRuntime_AnimGraphRuntime_EAnimPhysLinearConstraintType LinearYLimitType;                                         // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	FAnimGraphRuntime_AnimGraphRuntime_EAnimPhysLinearConstraintType LinearZLimitType;                                         // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	struct FVector                                     LinearAxesMin;                                            // 0x0004(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LinearAxesMax;                                            // 0x0010(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	FAnimGraphRuntime_AnimGraphRuntime_EAnimPhysAngularConstraintType AngularConstraintType;                                    // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	FEngine_Engine_EAnimPhysTwistAxis                  TwistAxis;                                                // 0x001D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	FEngine_Engine_EAnimPhysTwistAxis                  AngularTargetAxis;                                        // 0x001E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x001F(0x0001) MISSED OFFSET
	float                                              ConeAngle;                                                // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AngularLimitsMin;                                         // 0x0024(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AngularLimitsMax;                                         // 0x0030(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AngularTarget;                                            // 0x003C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimPhysSphericalLimit
// 0x0024
struct FAnimGraphRuntime_AnimPhysSphericalLimit
{
	struct FEngine_BoneReference                       DrivingBone;                                              // 0x0000(0x0010) (Edit)
	struct FVector                                     SphereLocalOffset;                                        // 0x0010(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LimitRadius;                                              // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	FAnimGraphRuntime_AnimGraphRuntime_ESphericalLimitType LimitType;                                                // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimPhysPlanarLimit
// 0x0040
struct FAnimGraphRuntime_AnimPhysPlanarLimit
{
	struct FEngine_BoneReference                       DrivingBone;                                              // 0x0000(0x0010) (Edit)
	struct FTransform                                  PlaneTransform;                                           // 0x0010(0x0030) (Edit, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.RotationRetargetingInfo
// 0x0130
struct FAnimGraphRuntime_RotationRetargetingInfo
{
	bool                                               bEnabled;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0001(0x000F) MISSED OFFSET
	struct FTransform                                  Source;                                                   // 0x0010(0x0030) (Edit, IsPlainOldData)
	struct FTransform                                  Target;                                                   // 0x0040(0x0030) (Edit, IsPlainOldData)
	FAnimGraphRuntime_AnimGraphRuntime_ERotationComponent RotationComponent;                                        // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
	struct FVector                                     TwistAxis;                                                // 0x0074(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseAbsoluteAngle;                                        // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	float                                              SourceMinimum;                                            // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SourceMaximum;                                            // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TargetMinimum;                                            // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TargetMaximum;                                            // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	FAnimGraphRuntime_AnimGraphRuntime_EEasingFuncType EasingType;                                               // 0x0094(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0095(0x0003) MISSED OFFSET
	struct FEngine_RuntimeFloatCurve                   CustomCurve;                                              // 0x0098(0x0088) (Edit)
	bool                                               bFlipEasing;                                              // 0x0120(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0121(0x0003) MISSED OFFSET
	float                                              EasingWeight;                                             // 0x0124(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bClamp;                                                   // 0x0128(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0129(0x0007) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_AnimDynamics
// 0x0378 (0x0440 - 0x00C8)
struct FAnimGraphRuntime_AnimNode_AnimDynamics : public FAnimGraphRuntime_AnimNode_SkeletalControlBase
{
	float                                              LinearDampingOverride;                                    // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AngularDampingOverride;                                   // 0x00CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x60];                                      // 0x00D0(0x0060) MISSED OFFSET
	struct FEngine_BoneReference                       RelativeSpaceBone;                                        // 0x0130(0x0010) (Edit)
	struct FEngine_BoneReference                       BoundBone;                                                // 0x0140(0x0010) (Edit)
	struct FEngine_BoneReference                       ChainEnd;                                                 // 0x0150(0x0010) (Edit)
	struct FVector                                     BoxExtents;                                               // 0x0160(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocalJointOffset;                                         // 0x016C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GravityScale;                                             // 0x0178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     GravityOverride;                                          // 0x017C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LinearSpringConstant;                                     // 0x0188(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AngularSpringConstant;                                    // 0x018C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WindScale;                                                // 0x0190(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ComponentLinearAccScale;                                  // 0x0194(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ComponentLinearVelScale;                                  // 0x01A0(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ComponentAppliedLinearAccClamp;                           // 0x01AC(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AngularBiasOverride;                                      // 0x01B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NumSolverIterationsPreUpdate;                             // 0x01BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumSolverIterationsPostUpdate;                            // 0x01C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAnimGraphRuntime_AnimPhysConstraintSetup   ConstraintSetup;                                          // 0x01C4(0x0048) (Edit)
	unsigned char                                      UnknownData01[0x4];                                       // 0x020C(0x0004) MISSED OFFSET
	TArray<struct FAnimGraphRuntime_AnimPhysSphericalLimit> SphericalLimits;                                          // 0x0210(0x0010) (Edit, ZeroConstructor)
	float                                              SphereCollisionRadius;                                    // 0x0220(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ExternalForce;                                            // 0x0224(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FAnimGraphRuntime_AnimPhysPlanarLimit> PlanarLimits;                                             // 0x0230(0x0010) (Edit, ZeroConstructor)
	FEngine_Engine_EAnimPhysCollisionType              CollisionType;                                            // 0x0240(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	FAnimGraphRuntime_AnimGraphRuntime_EAnimPhysSimSpaceType SimulationSpace;                                          // 0x0241(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0242(0x0002) MISSED OFFSET
	unsigned char                                      bUseSphericalLimits : 1;                                  // 0x0244(0x0001) (Edit)
	unsigned char                                      bUsePlanarLimit : 1;                                      // 0x0244(0x0001) (Edit)
	unsigned char                                      bDoUpdate : 1;                                            // 0x0244(0x0001) (Edit)
	unsigned char                                      bDoEval : 1;                                              // 0x0244(0x0001) (Edit)
	unsigned char                                      bOverrideLinearDamping : 1;                               // 0x0244(0x0001) (Edit)
	unsigned char                                      bOverrideAngularBias : 1;                                 // 0x0244(0x0001) (Edit)
	unsigned char                                      bOverrideAngularDamping : 1;                              // 0x0244(0x0001) (Edit)
	unsigned char                                      bEnableWind : 1;                                          // 0x0244(0x0001) (Edit)
	unsigned char                                      UnknownData03 : 1;                                        // 0x0245(0x0001)
	unsigned char                                      bUseGravityOverride : 1;                                  // 0x0245(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bLinearSpring : 1;                                        // 0x0245(0x0001) (Edit)
	unsigned char                                      bAngularSpring : 1;                                       // 0x0245(0x0001) (Edit)
	unsigned char                                      bChain : 1;                                               // 0x0245(0x0001) (Edit)
	unsigned char                                      UnknownData04[0xA];                                       // 0x0246(0x000A) MISSED OFFSET
	struct FAnimGraphRuntime_RotationRetargetingInfo   RetargetingSettings;                                      // 0x0250(0x0130) (Edit)
	unsigned char                                      UnknownData05[0xC0];                                      // 0x0380(0x00C0) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_ApplyAdditive
// 0x00B8 (0x00C8 - 0x0010)
struct FAnimGraphRuntime_AnimNode_ApplyAdditive : public FEngine_AnimNode_Base
{
	struct FEngine_PoseLink                            Base;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible)
	struct FEngine_PoseLink                            Additive;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible)
	float                                              ALPHA;                                                    // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FEngine_InputScaleBias                      AlphaScaleBias;                                           // 0x0034(0x0008) (Edit, BlueprintVisible)
	int                                                LODThreshold;                                             // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FEngine_InputAlphaBoolBlend                 AlphaBoolBlend;                                           // 0x0040(0x0048) (Edit, BlueprintVisible)
	struct FName                                       AlphaCurveName;                                           // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FEngine_InputScaleBiasClamp                 AlphaScaleBiasClamp;                                      // 0x0090(0x0030) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00C0(0x0004) MISSED OFFSET
	FEngine_Engine_EAnimAlphaInputType                 AlphaInputType;                                           // 0x00C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAlphaBoolEnabled;                                        // 0x00C5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x00C6(0x0002) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AngularRangeLimit
// 0x0028
struct FAnimGraphRuntime_AngularRangeLimit
{
	struct FVector                                     LimitMin;                                                 // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LimitMax;                                                 // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FEngine_BoneReference                       Bone;                                                     // 0x0018(0x0010) (Edit)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ApplyLimits
// 0x0020 (0x00E8 - 0x00C8)
struct FAnimGraphRuntime_AnimNode_ApplyLimits : public FAnimGraphRuntime_AnimNode_SkeletalControlBase
{
	TArray<struct FAnimGraphRuntime_AngularRangeLimit> AngularRangeLimits;                                       // 0x00C8(0x0010) (Edit, ZeroConstructor)
	TArray<struct FVector>                             AngularOffsets;                                           // 0x00D8(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
};

// ScriptStruct AnimGraphRuntime.BlendBoneByChannelEntry
// 0x0024
struct FAnimGraphRuntime_BlendBoneByChannelEntry
{
	struct FEngine_BoneReference                       SourceBone;                                               // 0x0000(0x0010) (Edit)
	struct FEngine_BoneReference                       TargetBone;                                               // 0x0010(0x0010) (Edit)
	bool                                               bBlendTranslation;                                        // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bBlendRotation;                                           // 0x0021(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bBlendScale;                                              // 0x0022(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0023(0x0001) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendBoneByChannel
// 0x0058 (0x0068 - 0x0010)
struct FAnimGraphRuntime_AnimNode_BlendBoneByChannel : public FEngine_AnimNode_Base
{
	struct FEngine_PoseLink                            A;                                                        // 0x0010(0x0010) (Edit, BlueprintVisible)
	struct FEngine_PoseLink                            B;                                                        // 0x0020(0x0010) (Edit, BlueprintVisible)
	TArray<struct FAnimGraphRuntime_BlendBoneByChannelEntry> BoneDefinitions;                                          // 0x0030(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET
	float                                              ALPHA;                                                    // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FEngine_InputScaleBias                      AlphaScaleBias;                                           // 0x0058(0x0008) (Edit, BlueprintVisible)
	TEnumAsByte<FEngine_Engine_EBoneControlSpace>      TransformsSpace;                                          // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListBase
// 0x0088 (0x0098 - 0x0010)
struct FAnimGraphRuntime_AnimNode_BlendListBase : public FEngine_AnimNode_Base
{
	TArray<struct FEngine_PoseLink>                    BlendPose;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
	TArray<float>                                      BlendTime;                                                // 0x0020(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
	FAnimGraphRuntime_AnimGraphRuntime_EBlendListTransitionType TransitionType;                                           // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FEngine_Engine_EAlphaBlendOption                   BlendType;                                                // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bResetChildOnActivation;                                  // 0x0032(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0033(0x0005) MISSED OFFSET
	class UEngine_CurveFloat*                          CustomBlendCurve;                                         // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UEngine_BlendProfile*                        BlendProfile;                                             // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0048(0x0050) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByBool
// 0x0008 (0x00A0 - 0x0098)
struct FAnimGraphRuntime_AnimNode_BlendListByBool : public FAnimGraphRuntime_AnimNode_BlendListBase
{
	bool                                               bActiveValue;                                             // 0x0098(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByEnum
// 0x0018 (0x00B0 - 0x0098)
struct FAnimGraphRuntime_AnimNode_BlendListByEnum : public FAnimGraphRuntime_AnimNode_BlendListBase
{
	TArray<int>                                        EnumToPoseIndex;                                          // 0x0098(0x0010) (ZeroConstructor)
	unsigned char                                      ActiveEnumValue;                                          // 0x00A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByInt
// 0x0008 (0x00A0 - 0x0098)
struct FAnimGraphRuntime_AnimNode_BlendListByInt : public FAnimGraphRuntime_AnimNode_BlendListBase
{
	int                                                ActiveChildIndex;                                         // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpaceEvaluator
// 0x0008 (0x00E8 - 0x00E0)
struct FAnimGraphRuntime_AnimNode_BlendSpaceEvaluator : public FAnimGraphRuntime_AnimNode_BlendSpacePlayer
{
	float                                              NormalizedTime;                                           // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_BoneDrivenController
// 0x0050 (0x0118 - 0x00C8)
struct FAnimGraphRuntime_AnimNode_BoneDrivenController : public FAnimGraphRuntime_AnimNode_SkeletalControlBase
{
	struct FEngine_BoneReference                       SourceBone;                                               // 0x00C8(0x0010) (Edit)
	class UEngine_CurveFloat*                          DrivingCurve;                                             // 0x00D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Multiplier;                                               // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RangeMin;                                                 // 0x00E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RangeMax;                                                 // 0x00E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RemappedMin;                                              // 0x00EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RemappedMax;                                              // 0x00F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParameterName;                                            // 0x00F4(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FEngine_BoneReference                       TargetBone;                                               // 0x00FC(0x0010) (Edit)
	FAnimGraphRuntime_AnimGraphRuntime_EDrivenDestinationMode DestinationMode;                                          // 0x010C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	FAnimGraphRuntime_AnimGraphRuntime_EDrivenBoneModificationMode ModificationMode;                                         // 0x010D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_EComponentType>         SourceComponent;                                          // 0x010E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseRange : 1;                                            // 0x010F(0x0001) (Edit)
	unsigned char                                      bAffectTargetTranslationX : 1;                            // 0x010F(0x0001) (Edit)
	unsigned char                                      bAffectTargetTranslationY : 1;                            // 0x010F(0x0001) (Edit)
	unsigned char                                      bAffectTargetTranslationZ : 1;                            // 0x010F(0x0001) (Edit)
	unsigned char                                      bAffectTargetRotationX : 1;                               // 0x010F(0x0001) (Edit)
	unsigned char                                      bAffectTargetRotationY : 1;                               // 0x010F(0x0001) (Edit)
	unsigned char                                      bAffectTargetRotationZ : 1;                               // 0x010F(0x0001) (Edit)
	unsigned char                                      bAffectTargetScaleX : 1;                                  // 0x010F(0x0001) (Edit)
	unsigned char                                      bAffectTargetScaleY : 1;                                  // 0x0110(0x0001) (Edit)
	unsigned char                                      bAffectTargetScaleZ : 1;                                  // 0x0110(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0111(0x0007) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.SocketReference
// 0x0040
struct FAnimGraphRuntime_SocketReference
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
	struct FName                                       SocketName;                                               // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.BoneSocketTarget
// 0x0060
struct FAnimGraphRuntime_BoneSocketTarget
{
	bool                                               bUseSocket;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FEngine_BoneReference                       BoneReference;                                            // 0x0004(0x0010) (Edit)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0014(0x000C) MISSED OFFSET
	struct FAnimGraphRuntime_SocketReference           SocketReference;                                          // 0x0020(0x0040) (Edit)
};

// ScriptStruct AnimGraphRuntime.AnimNode_CCDIK
// 0x00B8 (0x0180 - 0x00C8)
struct FAnimGraphRuntime_AnimNode_CCDIK : public FAnimGraphRuntime_AnimNode_SkeletalControlBase
{
	struct FVector                                     EffectorLocation;                                         // 0x00C8(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_EBoneControlSpace>      EffectorLocationSpace;                                    // 0x00D4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x00D5(0x000B) MISSED OFFSET
	struct FAnimGraphRuntime_BoneSocketTarget          EffectorTarget;                                           // 0x00E0(0x0060) (Edit)
	struct FEngine_BoneReference                       TipBone;                                                  // 0x0140(0x0010) (Edit)
	struct FEngine_BoneReference                       RootBone;                                                 // 0x0150(0x0010) (Edit)
	float                                              Precision;                                                // 0x0160(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxIterations;                                            // 0x0164(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bStartFromTail;                                           // 0x0168(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableRotationLimit;                                     // 0x0169(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x016A(0x0006) MISSED OFFSET
	TArray<float>                                      RotationLimitPerJoints;                                   // 0x0170(0x0010) (Edit, EditFixedSize, ZeroConstructor)
};

// ScriptStruct AnimGraphRuntime.Constraint
// 0x001C
struct FAnimGraphRuntime_Constraint
{
	struct FEngine_BoneReference                       TargetBone;                                               // 0x0000(0x0010) (Edit)
	FAnimGraphRuntime_AnimGraphRuntime_EConstraintOffsetOption OffsetOption;                                             // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	FAnimationCore_AnimationCore_ETransformConstraintType TransformType;                                            // 0x0011(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAnimationCore_FilterOptionPerAxis          PerAxis;                                                  // 0x0012(0x0003) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0015(0x0007) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_Constraint
// 0x0040 (0x0108 - 0x00C8)
struct FAnimGraphRuntime_AnimNode_Constraint : public FAnimGraphRuntime_AnimNode_SkeletalControlBase
{
	struct FEngine_BoneReference                       BoneToModify;                                             // 0x00C8(0x0010) (Edit)
	TArray<struct FAnimGraphRuntime_Constraint>        ConstraintSetup;                                          // 0x00D8(0x0010) (Edit, ZeroConstructor)
	TArray<float>                                      ConstraintWeights;                                        // 0x00E8(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x00F8(0x0010) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyBone
// 0x0028 (0x00F0 - 0x00C8)
struct FAnimGraphRuntime_AnimNode_CopyBone : public FAnimGraphRuntime_AnimNode_SkeletalControlBase
{
	struct FEngine_BoneReference                       SourceBone;                                               // 0x00C8(0x0010) (Edit)
	struct FEngine_BoneReference                       TargetBone;                                               // 0x00D8(0x0010) (Edit)
	bool                                               bCopyTranslation;                                         // 0x00E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCopyRotation;                                            // 0x00E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCopyScale;                                               // 0x00EA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_EBoneControlSpace>      ControlSpace;                                             // 0x00EB(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyBoneDelta
// 0x0030 (0x00F8 - 0x00C8)
struct FAnimGraphRuntime_AnimNode_CopyBoneDelta : public FAnimGraphRuntime_AnimNode_SkeletalControlBase
{
	struct FEngine_BoneReference                       SourceBone;                                               // 0x00C8(0x0010) (Edit)
	struct FEngine_BoneReference                       TargetBone;                                               // 0x00D8(0x0010) (Edit)
	bool                                               bCopyTranslation;                                         // 0x00E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCopyRotation;                                            // 0x00E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCopyScale;                                               // 0x00EA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FAnimGraphRuntime_AnimGraphRuntime_ECopyBoneDeltaMode CopyMode;                                                 // 0x00EB(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TranslationMultiplier;                                    // 0x00EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RotationMultiplier;                                       // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScaleMultiplier;                                          // 0x00F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyPoseFromMesh
// 0x0130 (0x0140 - 0x0010)
struct FAnimGraphRuntime_AnimNode_CopyPoseFromMesh : public FEngine_AnimNode_Base
{
	TWeakObjectPtr<class UEngine_SkeletalMeshComponent> SourceMeshComponent;                                      // 0x0010(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	bool                                               bUseAttachedParent;                                       // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCopyCurves;                                              // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x126];                                     // 0x001A(0x0126) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_CurveSource
// 0x0030 (0x0040 - 0x0010)
struct FAnimGraphRuntime_AnimNode_CurveSource : public FEngine_AnimNode_Base
{
	struct FEngine_PoseLink                            SourcePose;                                               // 0x0010(0x0010) (Edit, BlueprintVisible)
	struct FName                                       SourceBinding;                                            // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ALPHA;                                                    // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TScriptInterface<class UEngine_CurveSourceInterface> CurveSource;                                              // 0x0030(0x0030) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_HandIKRetargeting
// 0x0058 (0x0120 - 0x00C8)
struct FAnimGraphRuntime_AnimNode_HandIKRetargeting : public FAnimGraphRuntime_AnimNode_SkeletalControlBase
{
	struct FEngine_BoneReference                       RightHandFK;                                              // 0x00C8(0x0010) (Edit)
	struct FEngine_BoneReference                       LeftHandFK;                                               // 0x00D8(0x0010) (Edit)
	struct FEngine_BoneReference                       RightHandIK;                                              // 0x00E8(0x0010) (Edit)
	struct FEngine_BoneReference                       LeftHandIK;                                               // 0x00F8(0x0010) (Edit)
	TArray<struct FEngine_BoneReference>               IKBonesToMove;                                            // 0x0108(0x0010) (Edit, ZeroConstructor)
	float                                              HandFKWeight;                                             // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x011C(0x0004) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_Fabrik
// 0x00C8 (0x0190 - 0x00C8)
struct FAnimGraphRuntime_AnimNode_Fabrik : public FAnimGraphRuntime_AnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	struct FTransform                                  EffectorTransform;                                        // 0x00D0(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FAnimGraphRuntime_BoneSocketTarget          EffectorTarget;                                           // 0x0100(0x0060) (Edit)
	struct FEngine_BoneReference                       TipBone;                                                  // 0x0160(0x0010) (Edit)
	struct FEngine_BoneReference                       RootBone;                                                 // 0x0170(0x0010) (Edit)
	float                                              Precision;                                                // 0x0180(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxIterations;                                            // 0x0184(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_EBoneControlSpace>      EffectorTransformSpace;                                   // 0x0188(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_EBoneRotationSource>    EffectorRotationSource;                                   // 0x0189(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x018A(0x0006) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_LayeredBoneBlend
// 0x00B0 (0x00C0 - 0x0010)
struct FAnimGraphRuntime_AnimNode_LayeredBoneBlend : public FEngine_AnimNode_Base
{
	struct FEngine_PoseLink                            BasePose;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible)
	TArray<struct FEngine_PoseLink>                    BlendPoses;                                               // 0x0020(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
	TArray<struct FEngine_InputBlendPose>              LayerSetup;                                               // 0x0030(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	TArray<float>                                      BlendWeights;                                             // 0x0040(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
	bool                                               bMeshSpaceRotationBlend;                                  // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bMeshSpaceScaleBlend;                                     // 0x0051(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ECurveBlendOption>      CurveBlendOption;                                         // 0x0052(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bBlendRootMotionBasedOnRootBone;                          // 0x0053(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	int                                                LODThreshold;                                             // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	TArray<struct FEngine_PerBoneBlendWeight>          PerBoneBlendWeights;                                      // 0x0060(0x0010) (ZeroConstructor)
	struct FGuid                                       SkeletonGuid;                                             // 0x0070(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       VirtualBoneGuid;                                          // 0x0080(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x30];                                      // 0x0090(0x0030) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimLegIKDefinition
// 0x002C
struct FAnimGraphRuntime_AnimLegIKDefinition
{
	struct FEngine_BoneReference                       IKFootBone;                                               // 0x0000(0x0010) (Edit)
	struct FEngine_BoneReference                       FKFootBone;                                               // 0x0010(0x0010) (Edit)
	int                                                NumBonesInLimb;                                           // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinRotationAngle;                                         // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FCoreUObject_EAxis>                    FootBoneForwardAxis;                                      // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FCoreUObject_EAxis>                    HingeRotationAxis;                                        // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableRotationLimit;                                     // 0x002A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableKneeTwistCorrection;                               // 0x002B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_LegIK
// 0x0030 (0x00F8 - 0x00C8)
struct FAnimGraphRuntime_AnimNode_LegIK : public FAnimGraphRuntime_AnimNode_SkeletalControlBase
{
	float                                              ReachPrecision;                                           // 0x00C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxIterations;                                            // 0x00CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FAnimGraphRuntime_AnimLegIKDefinition> LegsDefinition;                                           // 0x00D0(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x18];                                      // 0x00E0(0x0018) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimLegIKData
// 0x00A0
struct FAnimGraphRuntime_AnimLegIKData
{
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0000(0x00A0) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.IKChain
// 0x0038
struct FAnimGraphRuntime_IKChain
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.IKChainLink
// 0x003C
struct FAnimGraphRuntime_IKChainLink
{
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0000(0x003C) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_LookAt
// 0x00E8 (0x01B0 - 0x00C8)
struct FAnimGraphRuntime_AnimNode_LookAt : public FAnimGraphRuntime_AnimNode_SkeletalControlBase
{
	struct FEngine_BoneReference                       BoneToModify;                                             // 0x00C8(0x0010) (Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET
	struct FAnimGraphRuntime_BoneSocketTarget          LookAtTarget;                                             // 0x00E0(0x0060) (Edit)
	struct FVector                                     LookAtLocation;                                           // 0x0140(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FAnimationCore_Axis                         LookAt_Axis;                                              // 0x014C(0x0010) (Edit)
	bool                                               bUseLookUpAxis;                                           // 0x015C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FAnimGraphRuntime_AnimGraphRuntime_EInterpolationBlend> InterpolationType;                                        // 0x015D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x015E(0x0002) MISSED OFFSET
	struct FAnimationCore_Axis                         LookUp_Axis;                                              // 0x0160(0x0010) (Edit)
	float                                              LookAtClamp;                                              // 0x0170(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InterpolationTime;                                        // 0x0174(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InterpolationTriggerThreashold;                           // 0x0178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x34];                                      // 0x017C(0x0034) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_MakeDynamicAdditive
// 0x0028 (0x0038 - 0x0010)
struct FAnimGraphRuntime_AnimNode_MakeDynamicAdditive : public FEngine_AnimNode_Base
{
	struct FEngine_PoseLink                            Base;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible)
	struct FEngine_PoseLink                            Additive;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible)
	bool                                               bMeshSpaceAdditive;                                       // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_ModifyBone
// 0x0040 (0x0108 - 0x00C8)
struct FAnimGraphRuntime_AnimNode_ModifyBone : public FAnimGraphRuntime_AnimNode_SkeletalControlBase
{
	struct FEngine_BoneReference                       BoneToModify;                                             // 0x00C8(0x0010) (Edit)
	struct FVector                                     Translation;                                              // 0x00D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x00E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Scale;                                                    // 0x00F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FAnimGraphRuntime_AnimGraphRuntime_EBoneModificationMode> TranslationMode;                                          // 0x00FC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FAnimGraphRuntime_AnimGraphRuntime_EBoneModificationMode> RotationMode;                                             // 0x00FD(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FAnimGraphRuntime_AnimGraphRuntime_EBoneModificationMode> ScaleMode;                                                // 0x00FE(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_EBoneControlSpace>      TranslationSpace;                                         // 0x00FF(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_EBoneControlSpace>      RotationSpace;                                            // 0x0100(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_EBoneControlSpace>      ScaleSpace;                                               // 0x0101(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0102(0x0006) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_ModifyCurve
// 0x0048 (0x0058 - 0x0010)
struct FAnimGraphRuntime_AnimNode_ModifyCurve : public FEngine_AnimNode_Base
{
	struct FEngine_PoseLink                            SourcePose;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, EditFixedSize)
	TArray<float>                                      CurveValues;                                              // 0x0020(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
	TArray<struct FName>                               CurveNames;                                               // 0x0030(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET
	float                                              ALPHA;                                                    // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FAnimGraphRuntime_AnimGraphRuntime_EModifyCurveApplyMode ApplyMode;                                                // 0x0054(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_MultiWayBlend
// 0x0040 (0x0050 - 0x0010)
struct FAnimGraphRuntime_AnimNode_MultiWayBlend : public FEngine_AnimNode_Base
{
	TArray<struct FEngine_PoseLink>                    Poses;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      DesiredAlphas;                                            // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
	struct FEngine_InputScaleBias                      AlphaScaleBias;                                           // 0x0040(0x0008) (Edit, BlueprintVisible)
	bool                                               bAdditiveNode;                                            // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bNormalizeAlpha;                                          // 0x0049(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x004A(0x0006) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_ObserveBone
// 0x0038 (0x0100 - 0x00C8)
struct FAnimGraphRuntime_AnimNode_ObserveBone : public FAnimGraphRuntime_AnimNode_SkeletalControlBase
{
	struct FEngine_BoneReference                       BoneToObserve;                                            // 0x00C8(0x0010) (Edit)
	TEnumAsByte<FEngine_Engine_EBoneControlSpace>      DisplaySpace;                                             // 0x00D8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRelativeToRefPose;                                       // 0x00D9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00DA(0x0002) MISSED OFFSET
	struct FVector                                     Translation;                                              // 0x00DC(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x00E8(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Scale;                                                    // 0x00F4(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseHandler
// 0x0048 (0x0078 - 0x0030)
struct FAnimGraphRuntime_AnimNode_PoseHandler : public FEngine_AnimNode_AssetPlayerBase
{
	class UEngine_PoseAsset*                           PoseAsset;                                                // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0038(0x0040) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseBlendNode
// 0x0020 (0x0098 - 0x0078)
struct FAnimGraphRuntime_AnimNode_PoseBlendNode : public FAnimGraphRuntime_AnimNode_PoseHandler
{
	struct FEngine_PoseLink                            SourcePose;                                               // 0x0078(0x0010) (Edit, BlueprintVisible, EditFixedSize)
	FEngine_Engine_EAlphaBlendOption                   BlendOption;                                              // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0089(0x0007) MISSED OFFSET
	class UEngine_CurveFloat*                          CustomCurve;                                              // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseByName
// 0x0018 (0x0090 - 0x0078)
struct FAnimGraphRuntime_AnimNode_PoseByName : public FAnimGraphRuntime_AnimNode_PoseHandler
{
	struct FName                                       PoseName;                                                 // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PoseWeight;                                               // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0084(0x000C) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.PoseDriverTransform
// 0x0018
struct FAnimGraphRuntime_PoseDriverTransform
{
	struct FVector                                     TargetTranslation;                                        // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    TargetRotation;                                           // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.PoseDriverTarget
// 0x00C0
struct FAnimGraphRuntime_PoseDriverTarget
{
	TArray<struct FAnimGraphRuntime_PoseDriverTransform> BoneTransforms;                                           // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FRotator                                    TargetRotation;                                           // 0x0010(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TargetScale;                                              // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	FAnimGraphRuntime_AnimGraphRuntime_ERBFDistanceMethod DistanceMethod;                                           // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	FAnimGraphRuntime_AnimGraphRuntime_ERBFFunctionType FunctionType;                                             // 0x0021(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bApplyCustomCurve;                                        // 0x0022(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0023(0x0005) MISSED OFFSET
	struct FEngine_RichCurve                           CustomCurve;                                              // 0x0028(0x0080) (Edit)
	struct FName                                       DrivenName;                                               // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00B0(0x0008) MISSED OFFSET
	bool                                               bIsHidden;                                                // 0x00B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00B9(0x0007) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.RBFParams
// 0x0028
struct FAnimGraphRuntime_RBFParams
{
	int                                                TargetDimensions;                                         // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	FAnimGraphRuntime_AnimGraphRuntime_ERBFFunctionType Function;                                                 // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	FAnimGraphRuntime_AnimGraphRuntime_ERBFDistanceMethod DistanceMethod;                                           // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_EBoneAxis>              TwistAxis;                                                // 0x000A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x000B(0x0001) MISSED OFFSET
	float                                              WeightThreshold;                                          // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	FAnimGraphRuntime_AnimGraphRuntime_ERBFNormalizeMethod NormalizeMethod;                                          // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	struct FVector                                     MedianReference;                                          // 0x0014(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MedianMin;                                                // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MedianMax;                                                // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseDriver
// 0x00B0 (0x0128 - 0x0078)
struct FAnimGraphRuntime_AnimNode_PoseDriver : public FAnimGraphRuntime_AnimNode_PoseHandler
{
	struct FEngine_PoseLink                            SourcePose;                                               // 0x0078(0x0010) (Edit, BlueprintVisible, EditFixedSize)
	TArray<struct FEngine_BoneReference>               SourceBones;                                              // 0x0088(0x0010) (Edit, ZeroConstructor)
	TArray<struct FEngine_BoneReference>               OnlyDriveBones;                                           // 0x0098(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAnimGraphRuntime_PoseDriverTarget>  PoseTargets;                                              // 0x00A8(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x30];                                      // 0x00B8(0x0030) MISSED OFFSET
	struct FEngine_BoneReference                       EvalSpaceBone;                                            // 0x00E8(0x0010) (Edit)
	struct FAnimGraphRuntime_RBFParams                 RBFParams;                                                // 0x00F8(0x0028) (Edit)
	FAnimGraphRuntime_AnimGraphRuntime_EPoseDriverSource DriveSource;                                              // 0x0120(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	FAnimGraphRuntime_AnimGraphRuntime_EPoseDriverOutput DriveOutput;                                              // 0x0121(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bOnlyDriveSelectedBones : 1;                              // 0x0122(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0123(0x0005) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseSnapshot
// 0x0080 (0x0090 - 0x0010)
struct FAnimGraphRuntime_AnimNode_PoseSnapshot : public FEngine_AnimNode_Base
{
	struct FName                                       SnapshotName;                                             // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FEngine_PoseSnapshot                        Snapshot;                                                 // 0x0018(0x0038) (Edit, BlueprintVisible)
	FAnimGraphRuntime_AnimGraphRuntime_ESnapshotSourceMode Mode;                                                     // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3F];                                      // 0x0051(0x003F) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.RandomPlayerSequenceEntry
// 0x0050
struct FAnimGraphRuntime_RandomPlayerSequenceEntry
{
	class UEngine_AnimSequence*                        Sequence;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ChanceToPlay;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MinLoopCount;                                             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxLoopCount;                                             // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinPlayRate;                                              // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxPlayRate;                                              // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FEngine_AlphaBlend                          BlendIn;                                                  // 0x0020(0x0030) (Edit)
};

// ScriptStruct AnimGraphRuntime.AnimNode_RandomPlayer
// 0x0058 (0x0068 - 0x0010)
struct FAnimGraphRuntime_AnimNode_RandomPlayer : public FEngine_AnimNode_Base
{
	TArray<struct FAnimGraphRuntime_RandomPlayerSequenceEntry> Entries;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x44];                                      // 0x0020(0x0044) MISSED OFFSET
	bool                                               bShuffleMode;                                             // 0x0064(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0065(0x0003) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_RefPose
// 0x0008 (0x0018 - 0x0010)
struct FAnimGraphRuntime_AnimNode_RefPose : public FEngine_AnimNode_Base
{
	TEnumAsByte<FAnimGraphRuntime_AnimGraphRuntime_ERefPoseType> RefPoseType;                                              // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_ResetRoot
// 0x0010 (0x00D8 - 0x00C8)
struct FAnimGraphRuntime_AnimNode_ResetRoot : public FAnimGraphRuntime_AnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C8(0x0010) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_RigidBody
// 0x0498 (0x0560 - 0x00C8)
struct FAnimGraphRuntime_AnimNode_RigidBody : public FAnimGraphRuntime_AnimNode_SkeletalControlBase
{
	class UEngine_PhysicsAsset*                        OverridePhysicsAsset;                                     // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x98];                                      // 0x00D0(0x0098) MISSED OFFSET
	struct FVector                                     OverrideWorldGravity;                                     // 0x0168(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ExternalForce;                                            // 0x0174(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ComponentLinearAccScale;                                  // 0x0180(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ComponentLinearVelScale;                                  // 0x018C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ComponentAppliedLinearAccClamp;                           // 0x0198(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CachedBoundsScale;                                        // 0x01A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FEngine_BoneReference                       BaseBoneRef;                                              // 0x01A8(0x0010) (Edit)
	TEnumAsByte<FEngine_Engine_ECollisionChannel>      OverlapChannel;                                           // 0x01B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	FAnimGraphRuntime_AnimGraphRuntime_ESimulationSpace SimulationSpace;                                          // 0x01B9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bForceDisableCollisionBetweenConstraintBodies;            // 0x01BA(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x01BB(0x0001) MISSED OFFSET
	unsigned char                                      bEnableWorldGeometry : 1;                                 // 0x01BC(0x0001) (Edit)
	unsigned char                                      bOverrideWorldGravity : 1;                                // 0x01BC(0x0001) (Edit)
	unsigned char                                      bTransferBoneVelocities : 1;                              // 0x01BC(0x0001) (Edit)
	unsigned char                                      bFreezeIncomingPoseOnStart : 1;                           // 0x01BC(0x0001) (Edit)
	unsigned char                                      bClampLinearTranslationLimitToRefPose : 1;                // 0x01BC(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x3A3];                                     // 0x01BD(0x03A3) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_RigidBody_Chaos
// 0x0498 (0x0560 - 0x00C8)
struct FAnimGraphRuntime_AnimNode_RigidBody_Chaos : public FAnimGraphRuntime_AnimNode_SkeletalControlBase
{
	class UEngine_PhysicsAsset*                        OverridePhysicsAsset;                                     // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OverrideWorldGravity;                                     // 0x00D0(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ExternalForce;                                            // 0x00DC(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ComponentLinearAccScale;                                  // 0x00E8(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ComponentLinearVelScale;                                  // 0x00F4(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ComponentAppliedLinearAccClamp;                           // 0x0100(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CachedBoundsScale;                                        // 0x010C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FEngine_BoneReference                       BaseBoneRef;                                              // 0x0110(0x0010) (Edit)
	TEnumAsByte<FEngine_Engine_ECollisionChannel>      OverlapChannel;                                           // 0x0120(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	FAnimGraphRuntime_AnimGraphRuntime_ESimulationSpace SimulationSpace;                                          // 0x0121(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bForceDisableCollisionBetweenConstraintBodies;            // 0x0122(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnableWorldGeometry : 1;                                 // 0x0123(0x0001) (Edit)
	unsigned char                                      bOverrideWorldGravity : 1;                                // 0x0123(0x0001) (Edit)
	unsigned char                                      bTransferBoneVelocities : 1;                              // 0x0123(0x0001) (Edit)
	unsigned char                                      bFreezeIncomingPoseOnStart : 1;                           // 0x0123(0x0001) (Edit)
	unsigned char                                      bClampLinearTranslationLimitToRefPose : 1;                // 0x0123(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x43C];                                     // 0x0124(0x043C) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_MeshSpaceRefPose
// 0x0000 (0x0010 - 0x0010)
struct FAnimGraphRuntime_AnimNode_MeshSpaceRefPose : public FEngine_AnimNode_Base
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_RotateRootBone
// 0x0090 (0x00A0 - 0x0010)
struct FAnimGraphRuntime_AnimNode_RotateRootBone : public FEngine_AnimNode_Base
{
	struct FEngine_PoseLink                            BasePose;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible)
	float                                              Pitch;                                                    // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FEngine_InputScaleBiasClamp                 PitchScaleBiasClamp;                                      // 0x0028(0x0030) (Edit, BlueprintVisible)
	struct FEngine_InputScaleBiasClamp                 YawScaleBiasClamp;                                        // 0x0058(0x0030) (Edit, BlueprintVisible)
	struct FRotator                                    MeshToComponent;                                          // 0x0088(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0094(0x000C) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_RotationMultiplier
// 0x0028 (0x00F0 - 0x00C8)
struct FAnimGraphRuntime_AnimNode_RotationMultiplier : public FAnimGraphRuntime_AnimNode_SkeletalControlBase
{
	struct FEngine_BoneReference                       TargetBone;                                               // 0x00C8(0x0010) (Edit)
	struct FEngine_BoneReference                       SourceBone;                                               // 0x00D8(0x0010) (Edit)
	float                                              Multiplier;                                               // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_EBoneAxis>              RotationAxisToRefer;                                      // 0x00EC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsAdditive;                                              // 0x00ED(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00EE(0x0002) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_RotationOffsetBlendSpace
// 0x00A8 (0x0188 - 0x00E0)
struct FAnimGraphRuntime_AnimNode_RotationOffsetBlendSpace : public FAnimGraphRuntime_AnimNode_BlendSpacePlayer
{
	struct FEngine_PoseLink                            BasePose;                                                 // 0x00E0(0x0010) (Edit, BlueprintVisible)
	int                                                LODThreshold;                                             // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ALPHA;                                                    // 0x00F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FEngine_InputScaleBias                      AlphaScaleBias;                                           // 0x00F8(0x0008) (Edit, BlueprintVisible)
	struct FEngine_InputAlphaBoolBlend                 AlphaBoolBlend;                                           // 0x0100(0x0048) (Edit, BlueprintVisible)
	struct FName                                       AlphaCurveName;                                           // 0x0148(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FEngine_InputScaleBiasClamp                 AlphaScaleBiasClamp;                                      // 0x0150(0x0030) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0180(0x0004) MISSED OFFSET
	FEngine_Engine_EAnimAlphaInputType                 AlphaInputType;                                           // 0x0184(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAlphaBoolEnabled;                                        // 0x0185(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0186(0x0002) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_ScaleChainLength
// 0x0068 (0x0078 - 0x0010)
struct FAnimGraphRuntime_AnimNode_ScaleChainLength : public FEngine_AnimNode_Base
{
	struct FEngine_PoseLink                            InputPose;                                                // 0x0010(0x0010) (Edit)
	float                                              DefaultChainLength;                                       // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FEngine_BoneReference                       ChainStartBone;                                           // 0x0024(0x0010) (Edit)
	struct FEngine_BoneReference                       ChainEndBone;                                             // 0x0034(0x0010) (Edit)
	struct FVector                                     TargetLocation;                                           // 0x0044(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ALPHA;                                                    // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FEngine_InputScaleBias                      AlphaScaleBias;                                           // 0x0058(0x0008) (Edit)
	FAnimGraphRuntime_AnimGraphRuntime_EScaleChainInitialLength ChainInitialLength;                                       // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x17];                                      // 0x0061(0x0017) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_SequenceEvaluator
// 0x0018 (0x0048 - 0x0030)
struct FAnimGraphRuntime_AnimNode_SequenceEvaluator : public FEngine_AnimNode_AssetPlayerBase
{
	class UEngine_AnimSequenceBase*                    Sequence;                                                 // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExplicitTime;                                             // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldLoop;                                              // 0x003C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTeleportToExplicitTime;                                  // 0x003D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FAnimGraphRuntime_AnimGraphRuntime_ESequenceEvalReinit> ReinitializationBehavior;                                 // 0x003E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x003F(0x0001) MISSED OFFSET
	float                                              StartPosition;                                            // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_Slot
// 0x0038 (0x0048 - 0x0010)
struct FAnimGraphRuntime_AnimNode_Slot : public FEngine_AnimNode_Base
{
	struct FEngine_PoseLink                            Source;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible)
	struct FName                                       SlotName;                                                 // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAlwaysUpdateSourcePose;                                  // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0029(0x001F) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_SplineIK
// 0x0198 (0x0260 - 0x00C8)
struct FAnimGraphRuntime_AnimNode_SplineIK : public FAnimGraphRuntime_AnimNode_SkeletalControlBase
{
	struct FEngine_BoneReference                       StartBone;                                                // 0x00C8(0x0010) (Edit)
	struct FEngine_BoneReference                       EndBone;                                                  // 0x00D8(0x0010) (Edit)
	FAnimGraphRuntime_AnimGraphRuntime_ESplineBoneAxis BoneAxis;                                                 // 0x00E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoCalculateSpline;                                     // 0x00E9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00EA(0x0002) MISSED OFFSET
	int                                                PointCount;                                               // 0x00EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FTransform>                          ControlPoints;                                            // 0x00F0(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
	float                                              Roll;                                                     // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TwistStart;                                               // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TwistEnd;                                                 // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x010C(0x0004) MISSED OFFSET
	struct FEngine_AlphaBlend                          TwistBlend;                                               // 0x0110(0x0030) (Edit)
	float                                              Stretch;                                                  // 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Offset;                                                   // 0x0144(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x118];                                     // 0x0148(0x0118) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_SpringBone
// 0x0060 (0x0128 - 0x00C8)
struct FAnimGraphRuntime_AnimNode_SpringBone : public FAnimGraphRuntime_AnimNode_SkeletalControlBase
{
	struct FEngine_BoneReference                       SpringBone;                                               // 0x00C8(0x0010) (Edit)
	float                                              MaxDisplacement;                                          // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpringStiffness;                                          // 0x00DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpringDamping;                                            // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ErrorResetThresh;                                         // 0x00E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3C];                                      // 0x00E8(0x003C) MISSED OFFSET
	unsigned char                                      bLimitDisplacement : 1;                                   // 0x0124(0x0001) (Edit)
	unsigned char                                      bTranslateX : 1;                                          // 0x0124(0x0001) (Edit)
	unsigned char                                      bTranslateY : 1;                                          // 0x0124(0x0001) (Edit)
	unsigned char                                      bTranslateZ : 1;                                          // 0x0124(0x0001) (Edit)
	unsigned char                                      bRotateX : 1;                                             // 0x0124(0x0001) (Edit)
	unsigned char                                      bRotateY : 1;                                             // 0x0124(0x0001) (Edit)
	unsigned char                                      bRotateZ : 1;                                             // 0x0124(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0125(0x0003) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.SplineIKCachedBoneData
// 0x0014
struct FAnimGraphRuntime_SplineIKCachedBoneData
{
	struct FEngine_BoneReference                       Bone;                                                     // 0x0000(0x0010)
	int                                                RefSkeletonIndex;                                         // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_StateResult
// 0x0000 (0x0030 - 0x0030)
struct FAnimGraphRuntime_AnimNode_StateResult : public FEngine_AnimNode_Root
{

};

// ScriptStruct AnimGraphRuntime.RotationLimit
// 0x0018
struct FAnimGraphRuntime_RotationLimit
{
	struct FVector                                     LimitMin;                                                 // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LimitMax;                                                 // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_Trail
// 0x0198 (0x0260 - 0x00C8)
struct FAnimGraphRuntime_AnimNode_Trail : public FAnimGraphRuntime_AnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x00C8(0x0038) MISSED OFFSET
	struct FEngine_BoneReference                       TrailBone;                                                // 0x0100(0x0010) (Edit)
	int                                                ChainLength;                                              // 0x0110(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FCoreUObject_EAxis>                    ChainBoneAxis;                                            // 0x0114(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bInvertChainBoneAxis : 1;                                 // 0x0115(0x0001) (Edit)
	unsigned char                                      bLimitStretch : 1;                                        // 0x0115(0x0001) (Edit)
	unsigned char                                      bLimitRotation : 1;                                       // 0x0115(0x0001) (Edit)
	unsigned char                                      bUsePlanarLimit : 1;                                      // 0x0115(0x0001) (Edit)
	unsigned char                                      bActorSpaceFakeVel : 1;                                   // 0x0115(0x0001) (Edit)
	unsigned char                                      bReorientParentToChild : 1;                               // 0x0115(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0116(0x0002) MISSED OFFSET
	float                                              MaxDeltaTime;                                             // 0x0118(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RelaxationSpeedScale;                                     // 0x011C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FEngine_RuntimeFloatCurve                   TrailRelaxationSpeed;                                     // 0x0120(0x0088) (Edit)
	struct FEngine_InputScaleBiasClamp                 RelaxationSpeedScaleInputProcessor;                       // 0x01A8(0x0030) (Edit, BlueprintVisible)
	TArray<struct FAnimGraphRuntime_RotationLimit>     RotationLimits;                                           // 0x01D8(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	TArray<struct FVector>                             RotationOffsets;                                          // 0x01E8(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
	TArray<struct FAnimGraphRuntime_AnimPhysPlanarLimit> PlanarLimits;                                             // 0x01F8(0x0010) (Edit, ZeroConstructor)
	float                                              StretchLimit;                                             // 0x0208(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     FakeVelocity;                                             // 0x020C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FEngine_BoneReference                       BaseJoint;                                                // 0x0218(0x0010) (Edit)
	float                                              LastBoneRotationAnimAlphaBlend;                           // 0x0228(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x34];                                      // 0x022C(0x0034) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.ReferenceBoneFrame
// 0x0020
struct FAnimGraphRuntime_ReferenceBoneFrame
{
	struct FEngine_BoneReference                       Bone;                                                     // 0x0000(0x0010) (Edit)
	struct FAnimationCore_Axis                         Axis;                                                     // 0x0010(0x0010) (Edit)
};

// ScriptStruct AnimGraphRuntime.AnimNode_TwistCorrectiveNode
// 0x0070 (0x0138 - 0x00C8)
struct FAnimGraphRuntime_AnimNode_TwistCorrectiveNode : public FAnimGraphRuntime_AnimNode_SkeletalControlBase
{
	struct FAnimGraphRuntime_ReferenceBoneFrame        BaseFrame;                                                // 0x00C8(0x0020) (Edit)
	struct FAnimGraphRuntime_ReferenceBoneFrame        TwistFrame;                                               // 0x00E8(0x0020) (Edit)
	struct FAnimationCore_Axis                         TwistPlaneNormalAxis;                                     // 0x0108(0x0010) (Edit)
	float                                              RangeMax;                                                 // 0x0118(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RemappedMin;                                              // 0x011C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RemappedMax;                                              // 0x0120(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FEngine_AnimCurveParam                      Curve;                                                    // 0x0124(0x000C) (Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0130(0x0008) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_TwoBoneIK
// 0x0118 (0x01E0 - 0x00C8)
struct FAnimGraphRuntime_AnimNode_TwoBoneIK : public FAnimGraphRuntime_AnimNode_SkeletalControlBase
{
	struct FEngine_BoneReference                       IKBone;                                                   // 0x00C8(0x0010) (Edit)
	float                                              StartStretchRatio;                                        // 0x00D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxStretchScale;                                          // 0x00DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EffectorLocation;                                         // 0x00E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET
	struct FAnimGraphRuntime_BoneSocketTarget          EffectorTarget;                                           // 0x00F0(0x0060) (Edit)
	struct FVector                                     JointTargetLocation;                                      // 0x0150(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x015C(0x0004) MISSED OFFSET
	struct FAnimGraphRuntime_BoneSocketTarget          JointTarget;                                              // 0x0160(0x0060) (Edit)
	struct FAnimationCore_Axis                         TwistAxis;                                                // 0x01C0(0x0010) (Edit)
	TEnumAsByte<FEngine_Engine_EBoneControlSpace>      EffectorLocationSpace;                                    // 0x01D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_EBoneControlSpace>      JointTargetLocationSpace;                                 // 0x01D1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAllowStretching : 1;                                     // 0x01D2(0x0001) (Edit)
	unsigned char                                      bTakeRotationFromEffectorSpace : 1;                       // 0x01D2(0x0001) (Edit)
	unsigned char                                      bMaintainEffectorRelRot : 1;                              // 0x01D2(0x0001) (Edit)
	unsigned char                                      bAllowTwist : 1;                                          // 0x01D2(0x0001) (Edit)
	unsigned char                                      UnknownData02[0xD];                                       // 0x01D3(0x000D) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_TwoWayBlend
// 0x00B8 (0x00C8 - 0x0010)
struct FAnimGraphRuntime_AnimNode_TwoWayBlend : public FEngine_AnimNode_Base
{
	struct FEngine_PoseLink                            A;                                                        // 0x0010(0x0010) (Edit, BlueprintVisible)
	struct FEngine_PoseLink                            B;                                                        // 0x0020(0x0010) (Edit, BlueprintVisible)
	FEngine_Engine_EAnimAlphaInputType                 AlphaInputType;                                           // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAlphaBoolEnabled : 1;                                    // 0x0031(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00 : 2;                                        // 0x0031(0x0001)
	unsigned char                                      bResetChildOnActivation : 1;                              // 0x0031(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0032(0x0002) MISSED OFFSET
	float                                              ALPHA;                                                    // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FEngine_InputScaleBias                      AlphaScaleBias;                                           // 0x0038(0x0008) (Edit, BlueprintVisible)
	struct FEngine_InputAlphaBoolBlend                 AlphaBoolBlend;                                           // 0x0040(0x0048) (Edit, BlueprintVisible)
	struct FName                                       AlphaCurveName;                                           // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FEngine_InputScaleBiasClamp                 AlphaScaleBiasClamp;                                      // 0x0090(0x0030) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData02[0x8];                                       // 0x00C0(0x0008) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimSequencerInstanceProxy
// 0x0250 (0x0930 - 0x06E0)
struct FAnimGraphRuntime_AnimSequencerInstanceProxy : public FEngine_AnimInstanceProxy
{
	unsigned char                                      UnknownData00[0x250];                                     // 0x06E0(0x0250) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.RBFEntry
// 0x0010
struct FAnimGraphRuntime_RBFEntry
{
	TArray<float>                                      Values;                                                   // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AnimGraphRuntime.RBFTarget
// 0x0090 (0x00A0 - 0x0010)
struct FAnimGraphRuntime_RBFTarget : public FAnimGraphRuntime_RBFEntry
{
	float                                              ScaleFactor;                                              // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bApplyCustomCurve;                                        // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	struct FEngine_RichCurve                           CustomCurve;                                              // 0x0018(0x0080) (Edit)
	FAnimGraphRuntime_AnimGraphRuntime_ERBFDistanceMethod DistanceMethod;                                           // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	FAnimGraphRuntime_AnimGraphRuntime_ERBFFunctionType FunctionType;                                             // 0x0099(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x009A(0x0006) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
