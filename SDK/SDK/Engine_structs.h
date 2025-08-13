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

// Enum Engine.ETextGender
enum class FEngine_Engine_ETextGender : uint8_t
{
	ETextGender__Masculine         = 0,
	ETextGender__Feminine          = 1,
	ETextGender__Neuter            = 2,
	ETextGender__ETextGender_MAX   = 3
};


// Enum Engine.EFormatArgumentType
enum class FEngine_Engine_EFormatArgumentType : uint8_t
{
	EFormatArgumentType__Int       = 0,
	EFormatArgumentType__UInt      = 1,
	EFormatArgumentType__Float     = 2,
	EFormatArgumentType__Double    = 3,
	EFormatArgumentType__Text      = 4,
	EFormatArgumentType__Gender    = 5,
	EFormatArgumentType__EFormatArgumentType_MAX = 6
};


// Enum Engine.EEndPlayReason
enum class FEngine_Engine_EEndPlayReason : uint8_t
{
	EEndPlayReason__Destroyed      = 0,
	EEndPlayReason__LevelTransition = 1,
	EEndPlayReason__EndPlayInEditor = 2,
	EEndPlayReason__RemovedFromWorld = 3,
	EEndPlayReason__Quit           = 4,
	EEndPlayReason__EEndPlayReason_MAX = 5
};


// Enum Engine.ETickingGroup
enum class FEngine_Engine_ETickingGroup : uint8_t
{
	TG_PrePhysics                  = 0,
	TG_StartPhysics                = 1,
	TG_DuringPhysics               = 2,
	TG_EndPhysics                  = 3,
	TG_PostPhysics                 = 4,
	TG_PostUpdateWork              = 5,
	TG_LastDemotable               = 6,
	TG_NewlySpawned                = 7,
	TG_MAX                         = 8
};


// Enum Engine.EComponentCreationMethod
enum class FEngine_Engine_EComponentCreationMethod : uint8_t
{
	EComponentCreationMethod__Native = 0,
	EComponentCreationMethod__SimpleConstructionScript = 1,
	EComponentCreationMethod__UserConstructionScript = 2,
	EComponentCreationMethod__Instance = 3,
	EComponentCreationMethod__EComponentCreationMethod_MAX = 4
};


// Enum Engine.ETemperatureSeverityType
enum class FEngine_Engine_ETemperatureSeverityType : uint8_t
{
	ETemperatureSeverityType__Unknown = 0,
	ETemperatureSeverityType__Good = 1,
	ETemperatureSeverityType__Bad  = 2,
	ETemperatureSeverityType__Serious = 3,
	ETemperatureSeverityType__Critical = 4,
	ETemperatureSeverityType__NumSeverities = 5,
	ETemperatureSeverityType__ETemperatureSeverityType_MAX = 6
};


// Enum Engine.EPlaneConstraintAxisSetting
enum class FEngine_Engine_EPlaneConstraintAxisSetting : uint8_t
{
	EPlaneConstraintAxisSetting__Custom = 0,
	EPlaneConstraintAxisSetting__X = 1,
	EPlaneConstraintAxisSetting__Y = 2,
	EPlaneConstraintAxisSetting__Z = 3,
	EPlaneConstraintAxisSetting__UseGlobalPhysicsSetting = 4,
	EPlaneConstraintAxisSetting__EPlaneConstraintAxisSetting_MAX = 5
};


// Enum Engine.EInterpToBehaviourType
enum class FEngine_Engine_EInterpToBehaviourType : uint8_t
{
	EInterpToBehaviourType__OneShot = 0,
	EInterpToBehaviourType__OneShot_Reverse = 1,
	EInterpToBehaviourType__Loop_Reset = 2,
	EInterpToBehaviourType__PingPong = 3,
	EInterpToBehaviourType__EInterpToBehaviourType_MAX = 4
};


// Enum Engine.ETeleportType
enum class FEngine_Engine_ETeleportType : uint8_t
{
	ETeleportType__None            = 0,
	ETeleportType__TeleportPhysics = 1,
	ETeleportType__ResetPhysics    = 2,
	ETeleportType__ETeleportType_MAX = 3
};


// Enum Engine.EPlatformInterfaceDataType
enum class FEngine_Engine_EPlatformInterfaceDataType : uint8_t
{
	PIDT_None                      = 0,
	PIDT_Int                       = 1,
	PIDT_Float                     = 2,
	PIDT_String                    = 3,
	PIDT_Object                    = 4,
	PIDT_Custom                    = 5,
	PIDT_MAX                       = 6
};


// Enum Engine.EMovementMode
enum class FEngine_Engine_EMovementMode : uint8_t
{
	MOVE_None                      = 0,
	MOVE_Walking                   = 1,
	MOVE_NavWalking                = 2,
	MOVE_Falling                   = 3,
	MOVE_Swimming                  = 4,
	MOVE_Flying                    = 5,
	MOVE_Custom                    = 6,
	MOVE_MAX                       = 7
};


// Enum Engine.ENetworkFailure
enum class FEngine_Engine_ENetworkFailure : uint8_t
{
	ENetworkFailure__NetDriverAlreadyExists = 0,
	ENetworkFailure__NetDriverCreateFailure = 1,
	ENetworkFailure__NetDriverListenFailure = 2,
	ENetworkFailure__ConnectionLost = 3,
	ENetworkFailure__ConnectionTimeout = 4,
	ENetworkFailure__FailureReceived = 5,
	ENetworkFailure__OutdatedClient = 6,
	ENetworkFailure__OutdatedServer = 7,
	ENetworkFailure__PendingConnectionFailure = 8,
	ENetworkFailure__NetGuidMismatch = 9,
	ENetworkFailure__NetChecksumMismatch = 10,
	ENetworkFailure__ENetworkFailure_MAX = 11
};


// Enum Engine.ETravelFailure
enum class FEngine_Engine_ETravelFailure : uint8_t
{
	ETravelFailure__NoLevel        = 0,
	ETravelFailure__LoadMapFailure = 1,
	ETravelFailure__InvalidURL     = 2,
	ETravelFailure__PackageMissing = 3,
	ETravelFailure__PackageVersion = 4,
	ETravelFailure__NoDownload     = 5,
	ETravelFailure__TravelFailure  = 6,
	ETravelFailure__CheatCommands  = 7,
	ETravelFailure__PendingNetGameCreateFailure = 8,
	ETravelFailure__CloudSaveFailure = 9,
	ETravelFailure__ServerTravelFailure = 10,
	ETravelFailure__ClientTravelFailure = 11,
	ETravelFailure__ETravelFailure_MAX = 12
};


// Enum Engine.EScreenOrientation
enum class FEngine_Engine_EScreenOrientation : uint8_t
{
	EScreenOrientation__Unknown    = 0,
	EScreenOrientation__Portrait   = 1,
	EScreenOrientation__PortraitUpsideDown = 2,
	EScreenOrientation__LandscapeLeft = 3,
	EScreenOrientation__LandscapeRight = 4,
	EScreenOrientation__FaceUp     = 5,
	EScreenOrientation__FaceDown   = 6,
	EScreenOrientation__EScreenOrientation_MAX = 7
};


// Enum Engine.EApplicationState
enum class FEngine_Engine_EApplicationState : uint8_t
{
	EApplicationState__Unknown     = 0,
	EApplicationState__Inactive    = 1,
	EApplicationState__Background  = 2,
	EApplicationState__Active      = 3,
	EApplicationState__EApplicationState_MAX = 4
};


// Enum Engine.EObjectTypeQuery
enum class FEngine_Engine_EObjectTypeQuery : uint8_t
{
	ObjectTypeQuery1               = 0,
	ObjectTypeQuery2               = 1,
	ObjectTypeQuery3               = 2,
	ObjectTypeQuery4               = 3,
	ObjectTypeQuery5               = 4,
	ObjectTypeQuery6               = 5,
	ObjectTypeQuery7               = 6,
	ObjectTypeQuery8               = 7,
	ObjectTypeQuery9               = 8,
	ObjectTypeQuery10              = 9,
	ObjectTypeQuery11              = 10,
	ObjectTypeQuery12              = 11,
	ObjectTypeQuery13              = 12,
	ObjectTypeQuery14              = 13,
	ObjectTypeQuery15              = 14,
	ObjectTypeQuery16              = 15,
	ObjectTypeQuery17              = 16,
	ObjectTypeQuery18              = 17,
	ObjectTypeQuery19              = 18,
	ObjectTypeQuery20              = 19,
	ObjectTypeQuery21              = 20,
	ObjectTypeQuery22              = 21,
	ObjectTypeQuery23              = 22,
	ObjectTypeQuery24              = 23,
	ObjectTypeQuery25              = 24,
	ObjectTypeQuery26              = 25,
	ObjectTypeQuery27              = 26,
	ObjectTypeQuery28              = 27,
	ObjectTypeQuery29              = 28,
	ObjectTypeQuery30              = 29,
	ObjectTypeQuery31              = 30,
	ObjectTypeQuery32              = 31,
	ObjectTypeQuery_MAX            = 32,
	EObjectTypeQuery_MAX           = 33
};


// Enum Engine.EDrawDebugTrace
enum class FEngine_Engine_EDrawDebugTrace : uint8_t
{
	EDrawDebugTrace__None          = 0,
	EDrawDebugTrace__ForOneFrame   = 1,
	EDrawDebugTrace__ForDuration   = 2,
	EDrawDebugTrace__Persistent    = 3,
	EDrawDebugTrace__EDrawDebugTrace_MAX = 4
};


// Enum Engine.ETraceTypeQuery
enum class FEngine_Engine_ETraceTypeQuery : uint8_t
{
	TraceTypeQuery1                = 0,
	TraceTypeQuery2                = 1,
	TraceTypeQuery3                = 2,
	TraceTypeQuery4                = 3,
	TraceTypeQuery5                = 4,
	TraceTypeQuery6                = 5,
	TraceTypeQuery7                = 6,
	TraceTypeQuery8                = 7,
	TraceTypeQuery9                = 8,
	TraceTypeQuery10               = 9,
	TraceTypeQuery11               = 10,
	TraceTypeQuery12               = 11,
	TraceTypeQuery13               = 12,
	TraceTypeQuery14               = 13,
	TraceTypeQuery15               = 14,
	TraceTypeQuery16               = 15,
	TraceTypeQuery17               = 16,
	TraceTypeQuery18               = 17,
	TraceTypeQuery19               = 18,
	TraceTypeQuery20               = 19,
	TraceTypeQuery21               = 20,
	TraceTypeQuery22               = 21,
	TraceTypeQuery23               = 22,
	TraceTypeQuery24               = 23,
	TraceTypeQuery25               = 24,
	TraceTypeQuery26               = 25,
	TraceTypeQuery27               = 26,
	TraceTypeQuery28               = 27,
	TraceTypeQuery29               = 28,
	TraceTypeQuery30               = 29,
	TraceTypeQuery31               = 30,
	TraceTypeQuery32               = 31,
	TraceTypeQuery_MAX             = 32,
	ETraceTypeQuery_MAX            = 33
};


// Enum Engine.EMoveComponentAction
enum class FEngine_Engine_EMoveComponentAction : uint8_t
{
	EMoveComponentAction__Move     = 0,
	EMoveComponentAction__Stop     = 1,
	EMoveComponentAction__Return   = 2,
	EMoveComponentAction__EMoveComponentAction_MAX = 3
};


// Enum Engine.EQuitPreference
enum class FEngine_Engine_EQuitPreference : uint8_t
{
	EQuitPreference__Quit          = 0,
	EQuitPreference__Background    = 1,
	EQuitPreference__EQuitPreference_MAX = 2
};


// Enum Engine.ERelativeTransformSpace
enum class FEngine_Engine_ERelativeTransformSpace : uint8_t
{
	RTS_World                      = 0,
	RTS_Actor                      = 1,
	RTS_Component                  = 2,
	RTS_ParentBoneSpace            = 3,
	RTS_MAX                        = 4
};


// Enum Engine.EAttachLocation
enum class FEngine_Engine_EAttachLocation : uint8_t
{
	EAttachLocation__KeepRelativeOffset = 0,
	EAttachLocation__KeepWorldPosition = 1,
	EAttachLocation__SnapToTarget  = 2,
	EAttachLocation__SnapToTargetIncludingScale = 3,
	EAttachLocation__EAttachLocation_MAX = 4
};


// Enum Engine.EAttachmentRule
enum class FEngine_Engine_EAttachmentRule : uint8_t
{
	EAttachmentRule__KeepRelative  = 0,
	EAttachmentRule__KeepWorld     = 1,
	EAttachmentRule__SnapToTarget  = 2,
	EAttachmentRule__EAttachmentRule_MAX = 3
};


// Enum Engine.EDetachmentRule
enum class FEngine_Engine_EDetachmentRule : uint8_t
{
	EDetachmentRule__KeepRelative  = 0,
	EDetachmentRule__KeepWorld     = 1,
	EDetachmentRule__EDetachmentRule_MAX = 2
};


// Enum Engine.EComponentMobility
enum class FEngine_Engine_EComponentMobility : uint8_t
{
	EComponentMobility__Static     = 0,
	EComponentMobility__Stationary = 1,
	EComponentMobility__Movable    = 2,
	EComponentMobility__EComponentMobility_MAX = 3
};


// Enum Engine.EDetailMode
enum class FEngine_Engine_EDetailMode : uint8_t
{
	DM_Low                         = 0,
	DM_Medium                      = 1,
	DM_High                        = 2,
	DM_MAX                         = 3
};


// Enum Engine.EMouseLockMode
enum class FEngine_Engine_EMouseLockMode : uint8_t
{
	EMouseLockMode__DoNotLock      = 0,
	EMouseLockMode__LockOnCapture  = 1,
	EMouseLockMode__LockAlways     = 2,
	EMouseLockMode__LockInFullscreen = 3,
	EMouseLockMode__EMouseLockMode_MAX = 4
};


// Enum Engine.EWindowTitleBarMode
enum class FEngine_Engine_EWindowTitleBarMode : uint8_t
{
	EWindowTitleBarMode__Overlay   = 0,
	EWindowTitleBarMode__VerticalBox = 1,
	EWindowTitleBarMode__EWindowTitleBarMode_MAX = 2
};


// Enum Engine.ENetRole
enum class FEngine_Engine_ENetRole : uint8_t
{
	ROLE_None                      = 0,
	ROLE_SimulatedProxy            = 1,
	ROLE_AutonomousProxy           = 2,
	ROLE_Authority                 = 3,
	ROLE_MAX                       = 4
};


// Enum Engine.ENetDormancy
enum class FEngine_Engine_ENetDormancy : uint8_t
{
	DORM_Never                     = 0,
	DORM_Awake                     = 1,
	DORM_DormantAll                = 2,
	DORM_DormantPartial            = 3,
	DORM_Initial                   = 4,
	DORM_MAX                       = 5
};


// Enum Engine.EAutoReceiveInput
enum class FEngine_Engine_EAutoReceiveInput : uint8_t
{
	EAutoReceiveInput__Disabled    = 0,
	EAutoReceiveInput__Player0     = 1,
	EAutoReceiveInput__Player1     = 2,
	EAutoReceiveInput__Player2     = 3,
	EAutoReceiveInput__Player3     = 4,
	EAutoReceiveInput__Player4     = 5,
	EAutoReceiveInput__Player5     = 6,
	EAutoReceiveInput__Player6     = 7,
	EAutoReceiveInput__Player7     = 8,
	EAutoReceiveInput__EAutoReceiveInput_MAX = 9
};


// Enum Engine.ESpawnActorCollisionHandlingMethod
enum class FEngine_Engine_ESpawnActorCollisionHandlingMethod : uint8_t
{
	ESpawnActorCollisionHandlingMethod__Undefined = 0,
	ESpawnActorCollisionHandlingMethod__AlwaysSpawn = 1,
	ESpawnActorCollisionHandlingMethod__AdjustIfPossibleButAlwaysSpawn = 2,
	ESpawnActorCollisionHandlingMethod__AdjustIfPossibleButDontSpawnIfColliding = 3,
	ESpawnActorCollisionHandlingMethod__DontSpawnIfColliding = 4,
	ESpawnActorCollisionHandlingMethod__ESpawnActorCollisionHandlingMethod_MAX = 5
};


// Enum Engine.ERotatorQuantization
enum class FEngine_Engine_ERotatorQuantization : uint8_t
{
	ERotatorQuantization__ByteComponents = 0,
	ERotatorQuantization__ShortComponents = 1,
	ERotatorQuantization__ERotatorQuantization_MAX = 2
};


// Enum Engine.EVectorQuantization
enum class FEngine_Engine_EVectorQuantization : uint8_t
{
	EVectorQuantization__RoundWholeNumber = 0,
	EVectorQuantization__RoundOneDecimal = 1,
	EVectorQuantization__RoundTwoDecimals = 2,
	EVectorQuantization__EVectorQuantization_MAX = 3
};


// Enum Engine.EActorUpdateOverlapsMethod
enum class FEngine_Engine_EActorUpdateOverlapsMethod : uint8_t
{
	EActorUpdateOverlapsMethod__UseConfigDefault = 0,
	EActorUpdateOverlapsMethod__AlwaysUpdate = 1,
	EActorUpdateOverlapsMethod__OnlyUpdateMovable = 2,
	EActorUpdateOverlapsMethod__NeverUpdate = 3,
	EActorUpdateOverlapsMethod__EActorUpdateOverlapsMethod_MAX = 4
};


// Enum Engine.ECameraAnimPlaySpace
enum class FEngine_Engine_ECameraAnimPlaySpace : uint8_t
{
	ECameraAnimPlaySpace__CameraLocal = 0,
	ECameraAnimPlaySpace__World    = 1,
	ECameraAnimPlaySpace__UserDefined = 2,
	ECameraAnimPlaySpace__ECameraAnimPlaySpace_MAX = 3
};


// Enum Engine.EViewTargetBlendFunction
enum class FEngine_Engine_EViewTargetBlendFunction : uint8_t
{
	VTBlend_Linear                 = 0,
	VTBlend_Cubic                  = 1,
	VTBlend_EaseIn                 = 2,
	VTBlend_EaseOut                = 3,
	VTBlend_EaseInOut              = 4,
	VTBlend_MAX                    = 5
};


// Enum Engine.ETravelType
enum class FEngine_Engine_ETravelType : uint8_t
{
	TRAVEL_Absolute                = 0,
	TRAVEL_Partial                 = 1,
	TRAVEL_Relative                = 2,
	TRAVEL_MAX                     = 3
};


// Enum Engine.ECollisionChannel
enum class FEngine_Engine_ECollisionChannel : uint8_t
{
	ECC_WorldStatic                = 0,
	ECC_WorldDynamic               = 1,
	ECC_Pawn                       = 2,
	ECC_Visibility                 = 3,
	ECC_Camera                     = 4,
	ECC_PhysicsBody                = 5,
	ECC_Vehicle                    = 6,
	ECC_Destructible               = 7,
	ECC_EngineTraceChannel1        = 8,
	ECC_EngineTraceChannel2        = 9,
	ECC_EngineTraceChannel3        = 10,
	ECC_EngineTraceChannel4        = 11,
	ECC_EngineTraceChannel5        = 12,
	ECC_EngineTraceChannel6        = 13,
	ECC_GameTraceChannel1          = 14,
	ECC_GameTraceChannel2          = 15,
	ECC_GameTraceChannel3          = 16,
	ECC_GameTraceChannel4          = 17,
	ECC_GameTraceChannel5          = 18,
	ECC_GameTraceChannel6          = 19,
	ECC_GameTraceChannel7          = 20,
	ECC_GameTraceChannel8          = 21,
	ECC_GameTraceChannel9          = 22,
	ECC_GameTraceChannel10         = 23,
	ECC_GameTraceChannel11         = 24,
	ECC_GameTraceChannel12         = 25,
	ECC_GameTraceChannel13         = 26,
	ECC_GameTraceChannel14         = 27,
	ECC_GameTraceChannel15         = 28,
	ECC_GameTraceChannel16         = 29,
	ECC_GameTraceChannel17         = 30,
	ECC_GameTraceChannel18         = 31,
	ECC_OverlapAll_Deprecated      = 32,
	ECC_MAX                        = 33
};


// Enum Engine.EControllerAnalogStick
enum class FEngine_Engine_EControllerAnalogStick : uint8_t
{
	EControllerAnalogStick__CAS_LeftStick = 0,
	EControllerAnalogStick__CAS_RightStick = 1,
	EControllerAnalogStick__CAS_MAX = 2
};


// Enum Engine.EDynamicForceFeedbackAction
enum class FEngine_Engine_EDynamicForceFeedbackAction : uint8_t
{
	EDynamicForceFeedbackAction__Start = 0,
	EDynamicForceFeedbackAction__Update = 1,
	EDynamicForceFeedbackAction__Stop = 2,
	EDynamicForceFeedbackAction__EDynamicForceFeedbackAction_MAX = 3
};


// Enum Engine.EAspectRatioAxisConstraint
enum class FEngine_Engine_EAspectRatioAxisConstraint : uint8_t
{
	AspectRatio_MaintainYFOV       = 0,
	AspectRatio_MaintainXFOV       = 1,
	AspectRatio_MajorAxisFOV       = 2,
	AspectRatio_MAX                = 3
};


// Enum Engine.EInputEvent
enum class FEngine_Engine_EInputEvent : uint8_t
{
	IE_Pressed                     = 0,
	IE_Released                    = 1,
	IE_Repeat                      = 2,
	IE_DoubleClick                 = 3,
	IE_Axis                        = 4,
	IE_MAX                         = 5
};


// Enum Engine.EAlphaBlendOption
enum class FEngine_Engine_EAlphaBlendOption : uint8_t
{
	EAlphaBlendOption__Linear      = 0,
	EAlphaBlendOption__Cubic       = 1,
	EAlphaBlendOption__HermiteCubic = 2,
	EAlphaBlendOption__Sinusoidal  = 3,
	EAlphaBlendOption__QuadraticInOut = 4,
	EAlphaBlendOption__CubicInOut  = 5,
	EAlphaBlendOption__QuarticInOut = 6,
	EAlphaBlendOption__QuinticInOut = 7,
	EAlphaBlendOption__CircularIn  = 8,
	EAlphaBlendOption__CircularOut = 9,
	EAlphaBlendOption__CircularInOut = 10,
	EAlphaBlendOption__ExpIn       = 11,
	EAlphaBlendOption__ExpOut      = 12,
	EAlphaBlendOption__ExpInOut    = 13,
	EAlphaBlendOption__Custom      = 14,
	EAlphaBlendOption__EAlphaBlendOption_MAX = 15
};


// Enum Engine.EAnimGroupRole
enum class FEngine_Engine_EAnimGroupRole : uint8_t
{
	EAnimGroupRole__CanBeLeader    = 0,
	EAnimGroupRole__AlwaysFollower = 1,
	EAnimGroupRole__AlwaysLeader   = 2,
	EAnimGroupRole__TransitionLeader = 3,
	EAnimGroupRole__TransitionFollower = 4,
	EAnimGroupRole__EAnimGroupRole_MAX = 5
};


// Enum Engine.EPreviewAnimationBlueprintApplicationMethod
enum class FEngine_Engine_EPreviewAnimationBlueprintApplicationMethod : uint8_t
{
	EPreviewAnimationBlueprintApplicationMethod__LinkedLayers = 0,
	EPreviewAnimationBlueprintApplicationMethod__LinkedAnimGraph = 1,
	EPreviewAnimationBlueprintApplicationMethod__EPreviewAnimationBlueprintApplicationMethod_MAX = 2
};


// Enum Engine.AnimationKeyFormat
enum class FEngine_Engine_EAnimationKeyFormat : uint8_t
{
	AKF_ConstantKeyLerp            = 0,
	AKF_VariableKeyLerp            = 1,
	AKF_PerTrackCompression        = 2,
	AKF_MAX                        = 3
};


// Enum Engine.EAnimAssetCurveFlags
enum class FEngine_Engine_EAnimAssetCurveFlags : uint8_t
{
	AACF_NONE                      = 0,
	AACF_DriveMorphTarget_DEPRECATED = 1,
	AACF_DriveAttribute_DEPRECATED = 2,
	AACF_Editable                  = 3,
	AACF_DriveMaterial_DEPRECATED  = 4,
	AACF_Metadata                  = 5,
	AACF_DriveTrack                = 6,
	AACF_Disabled                  = 7,
	AACF_MAX                       = 8
};


// Enum Engine.AnimationCompressionFormat
enum class FEngine_Engine_EAnimationCompressionFormat : uint8_t
{
	ACF_None                       = 0,
	ACF_Float96NoW                 = 1,
	ACF_Fixed48NoW                 = 2,
	ACF_IntervalFixed32NoW         = 3,
	ACF_Fixed32NoW                 = 4,
	ACF_Float32NoW                 = 5,
	ACF_Identity                   = 6,
	ACF_MAX                        = 7
};


// Enum Engine.EAdditiveBasePoseType
enum class FEngine_Engine_EAdditiveBasePoseType : uint8_t
{
	ABPT_None                      = 0,
	ABPT_RefPose                   = 1,
	ABPT_AnimScaled                = 2,
	ABPT_AnimFrame                 = 3,
	ABPT_MAX                       = 4
};


// Enum Engine.ERootMotionMode
enum class FEngine_Engine_ERootMotionMode : uint8_t
{
	ERootMotionMode__NoRootMotionExtraction = 0,
	ERootMotionMode__IgnoreRootMotion = 1,
	ERootMotionMode__RootMotionFromEverything = 2,
	ERootMotionMode__RootMotionFromMontagesOnly = 3,
	ERootMotionMode__ERootMotionMode_MAX = 4
};


// Enum Engine.ERootMotionRootLock
enum class FEngine_Engine_ERootMotionRootLock : uint8_t
{
	ERootMotionRootLock__RefPose   = 0,
	ERootMotionRootLock__AnimFirstFrame = 1,
	ERootMotionRootLock__Zero      = 2,
	ERootMotionRootLock__ERootMotionRootLock_MAX = 3
};


// Enum Engine.EMontagePlayReturnType
enum class FEngine_Engine_EMontagePlayReturnType : uint8_t
{
	EMontagePlayReturnType__MontageLength = 0,
	EMontagePlayReturnType__Duration = 1,
	EMontagePlayReturnType__EMontagePlayReturnType_MAX = 2
};


// Enum Engine.EDrawDebugItemType
enum class FEngine_Engine_EDrawDebugItemType : uint8_t
{
	EDrawDebugItemType__DirectionalArrow = 0,
	EDrawDebugItemType__Sphere     = 1,
	EDrawDebugItemType__Line       = 2,
	EDrawDebugItemType__OnScreenMessage = 3,
	EDrawDebugItemType__CoordinateSystem = 4,
	EDrawDebugItemType__EDrawDebugItemType_MAX = 5
};


// Enum Engine.EAnimLinkMethod
enum class FEngine_Engine_EAnimLinkMethod : uint8_t
{
	EAnimLinkMethod__Absolute      = 0,
	EAnimLinkMethod__Relative      = 1,
	EAnimLinkMethod__Proportional  = 2,
	EAnimLinkMethod__EAnimLinkMethod_MAX = 3
};


// Enum Engine.EMontageSubStepResult
enum class FEngine_Engine_EMontageSubStepResult : uint8_t
{
	EMontageSubStepResult__Moved   = 0,
	EMontageSubStepResult__NotMoved = 1,
	EMontageSubStepResult__InvalidSection = 2,
	EMontageSubStepResult__InvalidMontage = 3,
	EMontageSubStepResult__EMontageSubStepResult_MAX = 4
};


// Enum Engine.EAnimNotifyEventType
enum class FEngine_Engine_EAnimNotifyEventType : uint8_t
{
	EAnimNotifyEventType__Begin    = 0,
	EAnimNotifyEventType__End      = 1,
	EAnimNotifyEventType__EAnimNotifyEventType_MAX = 2
};


// Enum Engine.EInertializationBoneState
enum class FEngine_Engine_EInertializationBoneState : uint8_t
{
	EInertializationBoneState__Invalid = 0,
	EInertializationBoneState__Valid = 1,
	EInertializationBoneState__Excluded = 2,
	EInertializationBoneState__EInertializationBoneState_MAX = 3
};


// Enum Engine.EInertializationState
enum class FEngine_Engine_EInertializationState : uint8_t
{
	EInertializationState__Inactive = 0,
	EInertializationState__Pending = 1,
	EInertializationState__Active  = 2,
	EInertializationState__EInertializationState_MAX = 3
};


// Enum Engine.EEvaluatorMode
enum class FEngine_Engine_EEvaluatorMode : uint8_t
{
	EEvaluatorMode__EM_Standard    = 0,
	EEvaluatorMode__EM_Freeze      = 1,
	EEvaluatorMode__EM_DelayedFreeze = 2,
	EEvaluatorMode__EM_MAX         = 3
};


// Enum Engine.EEvaluatorDataSource
enum class FEngine_Engine_EEvaluatorDataSource : uint8_t
{
	EEvaluatorDataSource__EDS_SourcePose = 0,
	EEvaluatorDataSource__EDS_DestinationPose = 1,
	EEvaluatorDataSource__EDS_MAX  = 2
};


// Enum Engine.ECopyType
enum class FEngine_Engine_ECopyType : uint8_t
{
	ECopyType__MemCopy             = 0,
	ECopyType__BoolProperty        = 1,
	ECopyType__StructProperty      = 2,
	ECopyType__ObjectProperty      = 3,
	ECopyType__ECopyType_MAX       = 4
};


// Enum Engine.EPostCopyOperation
enum class FEngine_Engine_EPostCopyOperation : uint8_t
{
	EPostCopyOperation__None       = 0,
	EPostCopyOperation__LogicalNegateBool = 1,
	EPostCopyOperation__EPostCopyOperation_MAX = 2
};


// Enum Engine.EPinHidingMode
enum class FEngine_Engine_EPinHidingMode : uint8_t
{
	EPinHidingMode__NeverAsPin     = 0,
	EPinHidingMode__PinHiddenByDefault = 1,
	EPinHidingMode__PinShownByDefault = 2,
	EPinHidingMode__AlwaysAsPin    = 3,
	EPinHidingMode__EPinHidingMode_MAX = 4
};


// Enum Engine.AnimPhysCollisionType
enum class FEngine_Engine_EAnimPhysCollisionType : uint8_t
{
	AnimPhysCollisionType__CoM     = 0,
	AnimPhysCollisionType__CustomSphere = 1,
	AnimPhysCollisionType__InnerSphere = 2,
	AnimPhysCollisionType__OuterSphere = 3,
	AnimPhysCollisionType__AnimPhysCollisionType_MAX = 4
};


// Enum Engine.AnimPhysTwistAxis
enum class FEngine_Engine_EAnimPhysTwistAxis : uint8_t
{
	AnimPhysTwistAxis__AxisX       = 0,
	AnimPhysTwistAxis__AxisY       = 1,
	AnimPhysTwistAxis__AxisZ       = 2,
	AnimPhysTwistAxis__AnimPhysTwistAxis_MAX = 3
};


// Enum Engine.ETypeAdvanceAnim
enum class FEngine_Engine_ETypeAdvanceAnim : uint8_t
{
	ETAA_Default                   = 0,
	ETAA_Finished                  = 1,
	ETAA_Looped                    = 2,
	ETAA_MAX                       = 3
};


// Enum Engine.ETransitionLogicType
enum class FEngine_Engine_ETransitionLogicType : uint8_t
{
	ETransitionLogicType__TLT_StandardBlend = 0,
	ETransitionLogicType__TLT_Inertialization = 1,
	ETransitionLogicType__TLT_Custom = 2,
	ETransitionLogicType__TLT_MAX  = 3
};


// Enum Engine.ETransitionBlendMode
enum class FEngine_Engine_ETransitionBlendMode : uint8_t
{
	ETransitionBlendMode__TBM_Linear = 0,
	ETransitionBlendMode__TBM_Cubic = 1,
	ETransitionBlendMode__TBM_MAX  = 2
};


// Enum Engine.EComponentType
enum class FEngine_Engine_EComponentType : uint8_t
{
	EComponentType__None           = 0,
	EComponentType__TranslationX   = 1,
	EComponentType__TranslationY   = 2,
	EComponentType__TranslationZ   = 3,
	EComponentType__RotationX      = 4,
	EComponentType__RotationY      = 5,
	EComponentType__RotationZ      = 6,
	EComponentType__Scale          = 7,
	EComponentType__ScaleX         = 8,
	EComponentType__ScaleY         = 9,
	EComponentType__ScaleZ         = 10,
	EComponentType__EComponentType_MAX = 11
};


// Enum Engine.EAxisOption
enum class FEngine_Engine_EAxisOption : uint8_t
{
	EAxisOption__X                 = 0,
	EAxisOption__Y                 = 1,
	EAxisOption__Z                 = 2,
	EAxisOption__X_Neg             = 3,
	EAxisOption__Y_Neg             = 4,
	EAxisOption__Z_Neg             = 5,
	EAxisOption__Custom            = 6,
	EAxisOption__EAxisOption_MAX   = 7
};


// Enum Engine.EAnimInterpolationType
enum class FEngine_Engine_EAnimInterpolationType : uint8_t
{
	EAnimInterpolationType__Linear = 0,
	EAnimInterpolationType__Step   = 1,
	EAnimInterpolationType__EAnimInterpolationType_MAX = 2
};


// Enum Engine.ECurveBlendOption
enum class FEngine_Engine_ECurveBlendOption : uint8_t
{
	ECurveBlendOption__MaxWeight   = 0,
	ECurveBlendOption__NormalizeByWeight = 1,
	ECurveBlendOption__BlendByWeight = 2,
	ECurveBlendOption__ECurveBlendOption_MAX = 3
};


// Enum Engine.EAdditiveAnimationType
enum class FEngine_Engine_EAdditiveAnimationType : uint8_t
{
	AAT_None                       = 0,
	AAT_LocalSpaceBase             = 1,
	AAT_RotationOffsetMeshSpace    = 2,
	AAT_MAX                        = 3
};


// Enum Engine.ENotifyFilterType
enum class FEngine_Engine_ENotifyFilterType : uint8_t
{
	ENotifyFilterType__NoFiltering = 0,
	ENotifyFilterType__LOD         = 1,
	ENotifyFilterType__ENotifyFilterType_MAX = 2
};


// Enum Engine.EMontageNotifyTickType
enum class FEngine_Engine_EMontageNotifyTickType : uint8_t
{
	EMontageNotifyTickType__Queued = 0,
	EMontageNotifyTickType__BranchingPoint = 1,
	EMontageNotifyTickType__EMontageNotifyTickType_MAX = 2
};


// Enum Engine.ERawCurveTrackTypes
enum class FEngine_Engine_ERawCurveTrackTypes : uint8_t
{
	ERawCurveTrackTypes__RCT_Float = 0,
	ERawCurveTrackTypes__RCT_Vector = 1,
	ERawCurveTrackTypes__RCT_Transform = 2,
	ERawCurveTrackTypes__RCT_MAX   = 3
};


// Enum Engine.EBoneControlSpace
enum class FEngine_Engine_EBoneControlSpace : uint8_t
{
	BCS_WorldSpace                 = 0,
	BCS_ComponentSpace             = 1,
	BCS_ParentBoneSpace            = 2,
	BCS_BoneSpace                  = 3,
	BCS_MAX                        = 4
};


// Enum Engine.EPrimaryAssetCookRule
enum class FEngine_Engine_EPrimaryAssetCookRule : uint8_t
{
	EPrimaryAssetCookRule__Unknown = 0,
	EPrimaryAssetCookRule__NeverCook = 1,
	EPrimaryAssetCookRule__DevelopmentCook = 2,
	EPrimaryAssetCookRule__DevelopmentAlwaysCook = 3,
	EPrimaryAssetCookRule__AlwaysCook = 4,
	EPrimaryAssetCookRule__EPrimaryAssetCookRule_MAX = 5
};


// Enum Engine.EAttenuationShape
enum class FEngine_Engine_EAttenuationShape : uint8_t
{
	EAttenuationShape__Sphere      = 0,
	EAttenuationShape__Capsule     = 1,
	EAttenuationShape__Box         = 2,
	EAttenuationShape__Cone        = 3,
	EAttenuationShape__EAttenuationShape_MAX = 4
};


// Enum Engine.EAttenuationDistanceModel
enum class FEngine_Engine_EAttenuationDistanceModel : uint8_t
{
	EAttenuationDistanceModel__Linear = 0,
	EAttenuationDistanceModel__Logarithmic = 1,
	EAttenuationDistanceModel__Inverse = 2,
	EAttenuationDistanceModel__LogReverse = 3,
	EAttenuationDistanceModel__NaturalSound = 4,
	EAttenuationDistanceModel__Custom = 5,
	EAttenuationDistanceModel__EAttenuationDistanceModel_MAX = 6
};


// Enum Engine.EAudioFaderCurve
enum class FEngine_Engine_EAudioFaderCurve : uint8_t
{
	EAudioFaderCurve__Linear       = 0,
	EAudioFaderCurve__Logarithmic  = 1,
	EAudioFaderCurve__SCurve       = 2,
	EAudioFaderCurve__Sin          = 3,
	EAudioFaderCurve__Count        = 4,
	EAudioFaderCurve__EAudioFaderCurve_MAX = 5
};


// Enum Engine.EAudioComponentPlayState
enum class FEngine_Engine_EAudioComponentPlayState : uint8_t
{
	EAudioComponentPlayState__Playing = 0,
	EAudioComponentPlayState__Stopped = 1,
	EAudioComponentPlayState__Paused = 2,
	EAudioComponentPlayState__FadingIn = 3,
	EAudioComponentPlayState__FadingOut = 4,
	EAudioComponentPlayState__Count = 5,
	EAudioComponentPlayState__EAudioComponentPlayState_MAX = 6
};


// Enum Engine.EMonoChannelUpmixMethod
enum class FEngine_Engine_EMonoChannelUpmixMethod : uint8_t
{
	EMonoChannelUpmixMethod__Linear = 0,
	EMonoChannelUpmixMethod__EqualPower = 1,
	EMonoChannelUpmixMethod__FullVolume = 2,
	EMonoChannelUpmixMethod__EMonoChannelUpmixMethod_MAX = 3
};


// Enum Engine.EPanningMethod
enum class FEngine_Engine_EPanningMethod : uint8_t
{
	EPanningMethod__Linear         = 0,
	EPanningMethod__EqualPower     = 1,
	EPanningMethod__EPanningMethod_MAX = 2
};


// Enum Engine.EVoiceSampleRate
enum class FEngine_Engine_EVoiceSampleRate : uint8_t
{
	EVoiceSampleRate__Low16000Hz   = 0,
	EVoiceSampleRate__Normal24000Hz = 1,
	EVoiceSampleRate__EVoiceSampleRate_MAX = 2
};


// Enum Engine.ReverbPreset
enum class FEngine_Engine_EReverbPreset : uint8_t
{
	REVERB_Default                 = 0,
	REVERB_Bathroom                = 1,
	REVERB_StoneRoom               = 2,
	REVERB_Auditorium              = 3,
	REVERB_ConcertHall             = 4,
	REVERB_Cave                    = 5,
	REVERB_Hallway                 = 6,
	REVERB_StoneCorridor           = 7,
	REVERB_Alley                   = 8,
	REVERB_Forest                  = 9,
	REVERB_City                    = 10,
	REVERB_Mountains               = 11,
	REVERB_Quarry                  = 12,
	REVERB_Plain                   = 13,
	REVERB_ParkingLot              = 14,
	REVERB_SewerPipe               = 15,
	REVERB_Underwater              = 16,
	REVERB_SmallRoom               = 17,
	REVERB_MediumRoom              = 18,
	REVERB_LargeRoom               = 19,
	REVERB_MediumHall              = 20,
	REVERB_LargeHall               = 21,
	REVERB_Plate                   = 22,
	REVERB_MAX                     = 23
};


// Enum Engine.EBlendableLocation
enum class FEngine_Engine_EBlendableLocation : uint8_t
{
	BL_AfterTonemapping            = 0,
	BL_BeforeTonemapping           = 1,
	BL_BeforeTranslucency          = 2,
	BL_ReplacingTonemapper         = 3,
	BL_SSRInput                    = 4,
	BL_MAX                         = 5
};


// Enum Engine.ENotifyTriggerMode
enum class FEngine_Engine_ENotifyTriggerMode : uint8_t
{
	ENotifyTriggerMode__AllAnimations = 0,
	ENotifyTriggerMode__HighestWeightedAnimation = 1,
	ENotifyTriggerMode__None       = 2,
	ENotifyTriggerMode__ENotifyTriggerMode_MAX = 3
};


// Enum Engine.EBlendSpaceAxis
enum class FEngine_Engine_EBlendSpaceAxis : uint8_t
{
	BSA_None                       = 0,
	BSA_X                          = 1,
	BSA_Y                          = 2,
	BSA_Max                        = 3
};


// Enum Engine.EBlueprintNativizationFlag
enum class FEngine_Engine_EBlueprintNativizationFlag : uint8_t
{
	EBlueprintNativizationFlag__Disabled = 0,
	EBlueprintNativizationFlag__Dependency = 1,
	EBlueprintNativizationFlag__ExplicitlyEnabled = 2,
	EBlueprintNativizationFlag__EBlueprintNativizationFlag_MAX = 3
};


// Enum Engine.EBlueprintCompileMode
enum class FEngine_Engine_EBlueprintCompileMode : uint8_t
{
	EBlueprintCompileMode__Default = 0,
	EBlueprintCompileMode__Development = 1,
	EBlueprintCompileMode__FinalRelease = 2,
	EBlueprintCompileMode__EBlueprintCompileMode_MAX = 3
};


// Enum Engine.EBlueprintType
enum class FEngine_Engine_EBlueprintType : uint8_t
{
	BPTYPE_Normal                  = 0,
	BPTYPE_Const                   = 1,
	BPTYPE_MacroLibrary            = 2,
	BPTYPE_Interface               = 3,
	BPTYPE_LevelScript             = 4,
	BPTYPE_FunctionLibrary         = 5,
	BPTYPE_MAX                     = 6
};


// Enum Engine.EBlueprintStatus
enum class FEngine_Engine_EBlueprintStatus : uint8_t
{
	BS_Unknown                     = 0,
	BS_Dirty                       = 1,
	BS_Error                       = 2,
	BS_UpToDate                    = 3,
	BS_BeingCreated                = 4,
	BS_UpToDateWithWarnings        = 5,
	BS_MAX                         = 6
};


// Enum Engine.EBoneRotationSource
enum class FEngine_Engine_EBoneRotationSource : uint8_t
{
	BRS_KeepComponentSpaceRotation = 0,
	BRS_KeepLocalSpaceRotation     = 1,
	BRS_CopyFromTarget             = 2,
	BRS_MAX                        = 3
};


// Enum Engine.EBoneAxis
enum class FEngine_Engine_EBoneAxis : uint8_t
{
	BA_X                           = 0,
	BA_Y                           = 1,
	BA_Z                           = 2,
	BA_MAX                         = 3
};


// Enum Engine.EPhysicsType
enum class FEngine_Engine_EPhysicsType : uint8_t
{
	PhysType_Default               = 0,
	PhysType_Kinematic             = 1,
	PhysType_Simulated             = 2,
	PhysType_MAX                   = 3
};


// Enum Engine.EBodyCollisionResponse
enum class FEngine_Engine_EBodyCollisionResponse : uint8_t
{
	EBodyCollisionResponse__BodyCollision_Enabled = 0,
	EBodyCollisionResponse__BodyCollision_Disabled = 1,
	EBodyCollisionResponse__BodyCollision_MAX = 2
};


// Enum Engine.EBrushType
enum class FEngine_Engine_EBrushType : uint8_t
{
	Brush_Default                  = 0,
	Brush_Add                      = 1,
	Brush_Subtract                 = 2,
	Brush_MAX                      = 3
};


// Enum Engine.ECsgOper
enum class FEngine_Engine_ECsgOper : uint8_t
{
	CSG_Active                     = 0,
	CSG_Add                        = 1,
	CSG_Subtract                   = 2,
	CSG_Intersect                  = 3,
	CSG_Deintersect                = 4,
	CSG_None                       = 5,
	CSG_MAX                        = 6
};


// Enum Engine.EInitialOscillatorOffset
enum class FEngine_Engine_EInitialOscillatorOffset : uint8_t
{
	EOO_OffsetRandom               = 0,
	EOO_OffsetZero                 = 1,
	EOO_MAX                        = 2
};


// Enum Engine.EOscillatorWaveform
enum class FEngine_Engine_EOscillatorWaveform : uint8_t
{
	EOscillatorWaveform__SineWave  = 0,
	EOscillatorWaveform__PerlinNoise = 1,
	EOscillatorWaveform__EOscillatorWaveform_MAX = 2
};


// Enum Engine.ECameraAlphaBlendMode
enum class FEngine_Engine_ECameraAlphaBlendMode : uint8_t
{
	ECameraAlphaBlendMode__CABM_Linear = 0,
	ECameraAlphaBlendMode__CABM_Cubic = 1,
	ECameraAlphaBlendMode__CABM_MAX = 2
};


// Enum Engine.ECameraProjectionMode
enum class FEngine_Engine_ECameraProjectionMode : uint8_t
{
	ECameraProjectionMode__Perspective = 0,
	ECameraProjectionMode__Orthographic = 1,
	ECameraProjectionMode__ECameraProjectionMode_MAX = 2
};


// Enum Engine.ECloudStorageDelegate
enum class FEngine_Engine_ECloudStorageDelegate : uint8_t
{
	CSD_KeyValueReadComplete       = 0,
	CSD_KeyValueWriteComplete      = 1,
	CSD_ValueChanged               = 2,
	CSD_DocumentQueryComplete      = 3,
	CSD_DocumentReadComplete       = 4,
	CSD_DocumentWriteComplete      = 5,
	CSD_DocumentConflictDetected   = 6,
	CSD_MAX                        = 7
};


// Enum Engine.EDOFMode
enum class FEngine_Engine_EDOFMode : uint8_t
{
	EDOFMode__Default              = 0,
	EDOFMode__SixDOF               = 1,
	EDOFMode__YZPlane              = 2,
	EDOFMode__XZPlane              = 3,
	EDOFMode__XYPlane              = 4,
	EDOFMode__CustomPlane          = 5,
	EDOFMode__None                 = 6,
	EDOFMode__EDOFMode_MAX         = 7
};


// Enum Engine.EAngularDriveMode
enum class FEngine_Engine_EAngularDriveMode : uint8_t
{
	EAngularDriveMode__SLERP       = 0,
	EAngularDriveMode__TwistAndSwing = 1,
	EAngularDriveMode__EAngularDriveMode_MAX = 2
};


// Enum Engine.ELinearConstraintMotion
enum class FEngine_Engine_ELinearConstraintMotion : uint8_t
{
	LCM_Free                       = 0,
	LCM_Limited                    = 1,
	LCM_Locked                     = 2,
	LCM_MAX                        = 3
};


// Enum Engine.ECurveTableMode
enum class FEngine_Engine_ECurveTableMode : uint8_t
{
	ECurveTableMode__Empty         = 0,
	ECurveTableMode__SimpleCurves  = 1,
	ECurveTableMode__RichCurves    = 2,
	ECurveTableMode__ECurveTableMode_MAX = 3
};


// Enum Engine.EEvaluateCurveTableResult
enum class FEngine_Engine_EEvaluateCurveTableResult : uint8_t
{
	EEvaluateCurveTableResult__RowFound = 0,
	EEvaluateCurveTableResult__RowNotFound = 1,
	EEvaluateCurveTableResult__EEvaluateCurveTableResult_MAX = 2
};


// Enum Engine.EGrammaticalNumber
enum class FEngine_Engine_EGrammaticalNumber : uint8_t
{
	EGrammaticalNumber__Singular   = 0,
	EGrammaticalNumber__Plural     = 1,
	EGrammaticalNumber__EGrammaticalNumber_MAX = 2
};


// Enum Engine.DistributionParamMode
enum class FEngine_Engine_EDistributionParamMode : uint8_t
{
	DPM_Normal                     = 0,
	DPM_Abs                        = 1,
	DPM_Direct                     = 2,
	DPM_MAX                        = 3
};


// Enum Engine.EDistributionVectorMirrorFlags
enum class FEngine_Engine_EDistributionVectorMirrorFlags : uint8_t
{
	EDVMF_Same                     = 0,
	EDVMF_Different                = 1,
	EDVMF_Mirror                   = 2,
	EDVMF_MAX                      = 3
};


// Enum Engine.EDistributionVectorLockFlags
enum class FEngine_Engine_EDistributionVectorLockFlags : uint8_t
{
	EDVLF_None                     = 0,
	EDVLF_XY                       = 1,
	EDVLF_XZ                       = 2,
	EDVLF_YZ                       = 3,
	EDVLF_XYZ                      = 4,
	EDVLF_MAX                      = 5
};


// Enum Engine.EGrammaticalGender
enum class FEngine_Engine_EGrammaticalGender : uint8_t
{
	EGrammaticalGender__Neuter     = 0,
	EGrammaticalGender__Masculine  = 1,
	EGrammaticalGender__Feminine   = 2,
	EGrammaticalGender__Mixed      = 3,
	EGrammaticalGender__EGrammaticalGender_MAX = 4
};


// Enum Engine.ENodeAdvancedPins
enum class FEngine_Engine_ENodeAdvancedPins : uint8_t
{
	ENodeAdvancedPins__NoPins      = 0,
	ENodeAdvancedPins__Shown       = 1,
	ENodeAdvancedPins__Hidden      = 2,
	ENodeAdvancedPins__ENodeAdvancedPins_MAX = 3
};


// Enum Engine.ENodeTitleType
enum class FEngine_Engine_ENodeTitleType : uint8_t
{
	ENodeTitleType__FullTitle      = 0,
	ENodeTitleType__ListView       = 1,
	ENodeTitleType__EditableTitle  = 2,
	ENodeTitleType__MenuTitle      = 3,
	ENodeTitleType__MAX_TitleTypes = 4,
	ENodeTitleType__ENodeTitleType_MAX = 5
};


// Enum Engine.ENodeEnabledState
enum class FEngine_Engine_ENodeEnabledState : uint8_t
{
	ENodeEnabledState__Enabled     = 0,
	ENodeEnabledState__Disabled    = 1,
	ENodeEnabledState__DevelopmentOnly = 2,
	ENodeEnabledState__ENodeEnabledState_MAX = 3
};


// Enum Engine.EPinContainerType
enum class FEngine_Engine_EPinContainerType : uint8_t
{
	EPinContainerType__None        = 0,
	EPinContainerType__Array       = 1,
	EPinContainerType__Set         = 2,
	EPinContainerType__Map         = 3,
	EPinContainerType__EPinContainerType_MAX = 4
};


// Enum Engine.EEdGraphPinDirection
enum class FEngine_Engine_EEdGraphPinDirection : uint8_t
{
	EGPD_Input                     = 0,
	EGPD_Output                    = 1,
	EGPD_MAX                       = 2
};


// Enum Engine.EBlueprintPinStyleType
enum class FEngine_Engine_EBlueprintPinStyleType : uint8_t
{
	BPST_Original                  = 0,
	BPST_VariantA                  = 1,
	BPST_MAX                       = 2
};


// Enum Engine.ECanCreateConnectionResponse
enum class FEngine_Engine_ECanCreateConnectionResponse : uint8_t
{
	CONNECT_RESPONSE_MAKE          = 0,
	CONNECT_RESPONSE_DISALLOW      = 1,
	CONNECT_RESPONSE_BREAK_OTHERS_A = 2,
	CONNECT_RESPONSE_BREAK_OTHERS_B = 3,
	CONNECT_RESPONSE_BREAK_OTHERS_AB = 4,
	CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE = 5,
	CONNECT_RESPONSE_MAX           = 6
};


// Enum Engine.EGraphType
enum class FEngine_Engine_EGraphType : uint8_t
{
	GT_Function                    = 0,
	GT_Ubergraph                   = 1,
	GT_Macro                       = 2,
	GT_Animation                   = 3,
	GT_StateMachine                = 4,
	GT_MAX                         = 5
};


// Enum Engine.ECollisionTraceFlag
enum class FEngine_Engine_ECollisionTraceFlag : uint8_t
{
	CTF_UseDefault                 = 0,
	CTF_UseSimpleAndComplex        = 1,
	CTF_UseSimpleAsComplex         = 2,
	CTF_UseComplexAsSimple         = 3,
	CTF_MAX                        = 4
};


// Enum Engine.EViewModeIndex
enum class FEngine_Engine_EViewModeIndex : uint8_t
{
	VMI_BrushWireframe             = 0,
	VMI_Wireframe                  = 1,
	VMI_Unlit                      = 2,
	VMI_Lit                        = 3,
	VMI_Lit_DetailLighting         = 4,
	VMI_LightingOnly               = 5,
	VMI_LightComplexity            = 6,
	VMI_ShaderComplexity           = 7,
	VMI_LightmapDensity            = 8,
	VMI_LitLightmapDensity         = 9,
	VMI_ReflectionOverride         = 10,
	VMI_VisualizeBuffer            = 11,
	VMI_StationaryLightOverlap     = 12,
	VMI_CollisionPawn              = 13,
	VMI_CollisionVisibility        = 14,
	VMI_LODColoration              = 15,
	VMI_QuadOverdraw               = 16,
	VMI_PrimitiveDistanceAccuracy  = 17,
	VMI_MeshUVDensityAccuracy      = 18,
	VMI_ShaderComplexityWithQuadOverdraw = 19,
	VMI_HLODColoration             = 20,
	VMI_GroupLODColoration         = 21,
	VMI_MaterialTextureScaleAccuracy = 22,
	VMI_RequiredTextureResolution  = 23,
	VMI_PathTracing                = 24,
	VMI_RayTracingDebug            = 25,
	VMI_Max                        = 26,
	VMI_Unknown                    = 27
};


// Enum Engine.EDemoPlayFailure
enum class FEngine_Engine_EDemoPlayFailure : uint8_t
{
	EDemoPlayFailure__Generic      = 0,
	EDemoPlayFailure__DemoNotFound = 1,
	EDemoPlayFailure__Corrupt      = 2,
	EDemoPlayFailure__InvalidVersion = 3,
	EDemoPlayFailure__InitBase     = 4,
	EDemoPlayFailure__GameSpecificHeader = 5,
	EDemoPlayFailure__ReplayStreamerInternal = 6,
	EDemoPlayFailure__LoadMap      = 7,
	EDemoPlayFailure__Serialization = 8,
	EDemoPlayFailure__EDemoPlayFailure_MAX = 9
};


// Enum Engine.ETransitionType
enum class FEngine_Engine_ETransitionType : uint8_t
{
	ETransitionType__None          = 0,
	ETransitionType__Paused        = 1,
	ETransitionType__Loading       = 2,
	ETransitionType__Saving        = 3,
	ETransitionType__Connecting    = 4,
	ETransitionType__Precaching    = 5,
	ETransitionType__WaitingToConnect = 6,
	ETransitionType__MAX           = 7
};


// Enum Engine.ENetworkLagState
enum class FEngine_Engine_ENetworkLagState : uint8_t
{
	ENetworkLagState__NotLagging   = 0,
	ENetworkLagState__Lagging      = 1,
	ENetworkLagState__ENetworkLagState_MAX = 2
};


// Enum Engine.ECustomTimeStepSynchronizationState
enum class FEngine_Engine_ECustomTimeStepSynchronizationState : uint8_t
{
	ECustomTimeStepSynchronizationState__Closed = 0,
	ECustomTimeStepSynchronizationState__Error = 1,
	ECustomTimeStepSynchronizationState__Synchronized = 2,
	ECustomTimeStepSynchronizationState__Synchronizing = 3,
	ECustomTimeStepSynchronizationState__ECustomTimeStepSynchronizationState_MAX = 4
};


// Enum Engine.EMeshBufferAccess
enum class FEngine_Engine_EMeshBufferAccess : uint8_t
{
	EMeshBufferAccess__Default     = 0,
	EMeshBufferAccess__ForceCPUAndGPU = 1,
	EMeshBufferAccess__EMeshBufferAccess_MAX = 2
};


// Enum Engine.EConstraintFrame
enum class FEngine_Engine_EConstraintFrame : uint8_t
{
	EConstraintFrame__Frame1       = 0,
	EConstraintFrame__Frame2       = 1,
	EConstraintFrame__EConstraintFrame_MAX = 2
};


// Enum Engine.EAngularConstraintMotion
enum class FEngine_Engine_EAngularConstraintMotion : uint8_t
{
	ACM_Free                       = 0,
	ACM_Limited                    = 1,
	ACM_Locked                     = 2,
	ACM_MAX                        = 3
};


// Enum Engine.EComponentSocketType
enum class FEngine_Engine_EComponentSocketType : uint8_t
{
	EComponentSocketType__Invalid  = 0,
	EComponentSocketType__Bone     = 1,
	EComponentSocketType__Socket   = 2,
	EComponentSocketType__EComponentSocketType_MAX = 3
};


// Enum Engine.EPhysicalSurface
enum class FEngine_Engine_EPhysicalSurface : uint8_t
{
	SurfaceType_Default            = 0,
	SurfaceType1                   = 1,
	SurfaceType2                   = 2,
	SurfaceType3                   = 3,
	SurfaceType4                   = 4,
	SurfaceType5                   = 5,
	SurfaceType6                   = 6,
	SurfaceType7                   = 7,
	SurfaceType8                   = 8,
	SurfaceType9                   = 9,
	SurfaceType10                  = 10,
	SurfaceType11                  = 11,
	SurfaceType12                  = 12,
	SurfaceType13                  = 13,
	SurfaceType14                  = 14,
	SurfaceType15                  = 15,
	SurfaceType16                  = 16,
	SurfaceType17                  = 17,
	SurfaceType18                  = 18,
	SurfaceType19                  = 19,
	SurfaceType20                  = 20,
	SurfaceType21                  = 21,
	SurfaceType22                  = 22,
	SurfaceType23                  = 23,
	SurfaceType24                  = 24,
	SurfaceType25                  = 25,
	SurfaceType26                  = 26,
	SurfaceType27                  = 27,
	SurfaceType28                  = 28,
	SurfaceType29                  = 29,
	SurfaceType30                  = 30,
	SurfaceType31                  = 31,
	SurfaceType32                  = 32,
	SurfaceType33                  = 33,
	SurfaceType34                  = 34,
	SurfaceType35                  = 35,
	SurfaceType36                  = 36,
	SurfaceType37                  = 37,
	SurfaceType38                  = 38,
	SurfaceType39                  = 39,
	SurfaceType40                  = 40,
	SurfaceType41                  = 41,
	SurfaceType42                  = 42,
	SurfaceType43                  = 43,
	SurfaceType44                  = 44,
	SurfaceType45                  = 45,
	SurfaceType46                  = 46,
	SurfaceType47                  = 47,
	SurfaceType48                  = 48,
	SurfaceType49                  = 49,
	SurfaceType50                  = 50,
	SurfaceType51                  = 51,
	SurfaceType52                  = 52,
	SurfaceType53                  = 53,
	SurfaceType54                  = 54,
	SurfaceType55                  = 55,
	SurfaceType56                  = 56,
	SurfaceType57                  = 57,
	SurfaceType58                  = 58,
	SurfaceType59                  = 59,
	SurfaceType60                  = 60,
	SurfaceType61                  = 61,
	SurfaceType62                  = 62,
	SurfaceType_Max                = 63,
	EPhysicalSurface_MAX           = 64
};


// Enum Engine.EMouseCaptureMode
enum class FEngine_Engine_EMouseCaptureMode : uint8_t
{
	EMouseCaptureMode__NoCapture   = 0,
	EMouseCaptureMode__CapturePermanently = 1,
	EMouseCaptureMode__CapturePermanently_IncludingInitialMouseDown = 2,
	EMouseCaptureMode__CaptureDuringMouseDown = 3,
	EMouseCaptureMode__CaptureDuringRightMouseDown = 4,
	EMouseCaptureMode__EMouseCaptureMode_MAX = 5
};


// Enum Engine.EAutoPossessAI
enum class FEngine_Engine_EAutoPossessAI : uint8_t
{
	EAutoPossessAI__Disabled       = 0,
	EAutoPossessAI__PlacedInWorld  = 1,
	EAutoPossessAI__Spawned        = 2,
	EAutoPossessAI__PlacedInWorldOrSpawned = 3,
	EAutoPossessAI__EAutoPossessAI_MAX = 4
};


// Enum Engine.EWalkableSlopeBehavior
enum class FEngine_Engine_EWalkableSlopeBehavior : uint8_t
{
	WalkableSlope_Default          = 0,
	WalkableSlope_Increase         = 1,
	WalkableSlope_Decrease         = 2,
	WalkableSlope_Unwalkable       = 3,
	WalkableSlope_Max              = 4
};


// Enum Engine.EUpdateRateShiftBucket
enum class FEngine_Engine_EUpdateRateShiftBucket : uint8_t
{
	EUpdateRateShiftBucket__ShiftBucket0 = 0,
	EUpdateRateShiftBucket__ShiftBucket1 = 1,
	EUpdateRateShiftBucket__ShiftBucket2 = 2,
	EUpdateRateShiftBucket__ShiftBucket3 = 3,
	EUpdateRateShiftBucket__ShiftBucket4 = 4,
	EUpdateRateShiftBucket__ShiftBucket5 = 5,
	EUpdateRateShiftBucket__ShiftBucketMax = 6,
	EUpdateRateShiftBucket__EUpdateRateShiftBucket_MAX = 7
};


// Enum Engine.EShadowMapFlags
enum class FEngine_Engine_EShadowMapFlags : uint8_t
{
	SMF_None                       = 0,
	SMF_Streamed                   = 1,
	SMF_MAX                        = 2
};


// Enum Engine.ELightMapPaddingType
enum class FEngine_Engine_ELightMapPaddingType : uint8_t
{
	LMPT_NormalPadding             = 0,
	LMPT_PrePadding                = 1,
	LMPT_NoPadding                 = 2,
	LMPT_MAX                       = 3
};


// Enum Engine.ECollisionEnabled
enum class FEngine_Engine_ECollisionEnabled : uint8_t
{
	ECollisionEnabled__NoCollision = 0,
	ECollisionEnabled__QueryOnly   = 1,
	ECollisionEnabled__PhysicsOnly = 2,
	ECollisionEnabled__QueryAndPhysics = 3,
	ECollisionEnabled__ECollisionEnabled_MAX = 4
};


// Enum Engine.ETimelineSigType
enum class FEngine_Engine_ETimelineSigType : uint8_t
{
	ETS_EventSignature             = 0,
	ETS_FloatSignature             = 1,
	ETS_VectorSignature            = 2,
	ETS_LinearColorSignature       = 3,
	ETS_InvalidSignature           = 4,
	ETS_MAX                        = 5
};


// Enum Engine.ESleepFamily
enum class FEngine_Engine_ESleepFamily : uint8_t
{
	ESleepFamily__Normal           = 0,
	ESleepFamily__Sensitive        = 1,
	ESleepFamily__Custom           = 2,
	ESleepFamily__ESleepFamily_MAX = 3
};


// Enum Engine.ERadialImpulseFalloff
enum class FEngine_Engine_ERadialImpulseFalloff : uint8_t
{
	RIF_Constant                   = 0,
	RIF_Linear                     = 1,
	RIF_MAX                        = 2
};


// Enum Engine.EFullyLoadPackageType
enum class FEngine_Engine_EFullyLoadPackageType : uint8_t
{
	FULLYLOAD_Map                  = 0,
	FULLYLOAD_Game_PreLoadClass    = 1,
	FULLYLOAD_Game_PostLoadClass   = 2,
	FULLYLOAD_Always               = 3,
	FULLYLOAD_Mutator              = 4,
	FULLYLOAD_MAX                  = 5
};


// Enum Engine.ECollisionResponse
enum class FEngine_Engine_ECollisionResponse : uint8_t
{
	ECR_Ignore                     = 0,
	ECR_Overlap                    = 1,
	ECR_Block                      = 2,
	ECR_MAX                        = 3
};


// Enum Engine.EOverlapFilterOption
enum class FEngine_Engine_EOverlapFilterOption : uint8_t
{
	OverlapFilter_All              = 0,
	OverlapFilter_DynamicOnly      = 1,
	OverlapFilter_StaticOnly       = 2,
	OverlapFilter_MAX              = 3
};


// Enum Engine.ENetworkSmoothingMode
enum class FEngine_Engine_ENetworkSmoothingMode : uint8_t
{
	ENetworkSmoothingMode__Disabled = 0,
	ENetworkSmoothingMode__Linear  = 1,
	ENetworkSmoothingMode__Exponential = 2,
	ENetworkSmoothingMode__Replay  = 3,
	ENetworkSmoothingMode__ENetworkSmoothingMode_MAX = 4
};


// Enum Engine.ELightingBuildQuality
enum class FEngine_Engine_ELightingBuildQuality : uint8_t
{
	Quality_Preview                = 0,
	Quality_Medium                 = 1,
	Quality_High                   = 2,
	Quality_Production             = 3,
	Quality_MAX                    = 4
};


// Enum Engine.EMaterialStencilCompare
enum class FEngine_Engine_EMaterialStencilCompare : uint8_t
{
	MSC_Less                       = 0,
	MSC_LessEqual                  = 1,
	MSC_Greater                    = 2,
	MSC_GreaterEqual               = 3,
	MSC_Equal                      = 4,
	MSC_NotEqual                   = 5,
	MSC_Never                      = 6,
	MSC_Always                     = 7,
	MSC_Count                      = 8,
	MSC_MAX                        = 9
};


// Enum Engine.EMaterialSamplerType
enum class FEngine_Engine_EMaterialSamplerType : uint8_t
{
	SAMPLERTYPE_Color              = 0,
	SAMPLERTYPE_Grayscale          = 1,
	SAMPLERTYPE_Alpha              = 2,
	SAMPLERTYPE_Normal             = 3,
	SAMPLERTYPE_Masks              = 4,
	SAMPLERTYPE_DistanceFieldFont  = 5,
	SAMPLERTYPE_LinearColor        = 6,
	SAMPLERTYPE_LinearGrayscale    = 7,
	SAMPLERTYPE_Data               = 8,
	SAMPLERTYPE_External           = 9,
	SAMPLERTYPE_VirtualColor       = 10,
	SAMPLERTYPE_VirtualGrayscale   = 11,
	SAMPLERTYPE_VirtualAlpha       = 12,
	SAMPLERTYPE_VirtualNormal      = 13,
	SAMPLERTYPE_VirtualMasks       = 14,
	SAMPLERTYPE_VirtualLinearColor = 15,
	SAMPLERTYPE_VirtualLinearGrayscale = 16,
	SAMPLERTYPE_MAX                = 17
};


// Enum Engine.EFilterInterpolationType
enum class FEngine_Engine_EFilterInterpolationType : uint8_t
{
	BSIT_Average                   = 0,
	BSIT_Linear                    = 1,
	BSIT_Cubic                     = 2,
	BSIT_MAX                       = 3
};


// Enum Engine.EMaterialTessellationMode
enum class FEngine_Engine_EMaterialTessellationMode : uint8_t
{
	MTM_NoTessellation             = 0,
	MTM_FlatTessellation           = 1,
	MTM_PNTriangles                = 2,
	MTM_MAX                        = 3
};


// Enum Engine.EMaterialShadingModel
enum class FEngine_Engine_EMaterialShadingModel : uint8_t
{
	MSM_Unlit                      = 0,
	MSM_DefaultLit                 = 1,
	MSM_Subsurface                 = 2,
	MSM_PreintegratedSkin          = 3,
	MSM_ClearCoat                  = 4,
	MSM_SubsurfaceProfile          = 5,
	MSM_TwoSidedFoliage            = 6,
	MSM_Hair                       = 7,
	MSM_Cloth                      = 8,
	MSM_Eye                        = 9,
	MSM_SingleLayerWater           = 10,
	MSM_NUM                        = 11,
	MSM_FromMaterialExpression     = 12,
	MSM_MAX                        = 13
};


// Enum Engine.EParticleCollisionMode
enum class FEngine_Engine_EParticleCollisionMode : uint8_t
{
	EParticleCollisionMode__SceneDepth = 0,
	EParticleCollisionMode__DistanceField = 1,
	EParticleCollisionMode__EParticleCollisionMode_MAX = 2
};


// Enum Engine.EInertializationSpace
enum class FEngine_Engine_EInertializationSpace : uint8_t
{
	EInertializationSpace__Default = 0,
	EInertializationSpace__WorldSpace = 1,
	EInertializationSpace__WorldRotation = 2,
	EInertializationSpace__EInertializationSpace_MAX = 3
};


// Enum Engine.ESceneCaptureCompositeMode
enum class FEngine_Engine_ESceneCaptureCompositeMode : uint8_t
{
	SCCM_Overwrite                 = 0,
	SCCM_Additive                  = 1,
	SCCM_Composite                 = 2,
	SCCM_MAX                       = 3
};


// Enum Engine.ESceneCaptureSource
enum class FEngine_Engine_ESceneCaptureSource : uint8_t
{
	SCS_SceneColorHDR              = 0,
	SCS_SceneColorHDRNoAlpha       = 1,
	SCS_FinalColorLDR              = 2,
	SCS_SceneColorSceneDepth       = 3,
	SCS_SceneDepth                 = 4,
	SCS_DeviceDepth                = 5,
	SCS_Normal                     = 6,
	SCS_BaseColor                  = 7,
	SCS_FinalColorHDR              = 8,
	SCS_MAX                        = 9
};


// Enum Engine.ETranslucentSortPolicy
enum class FEngine_Engine_ETranslucentSortPolicy : uint8_t
{
	ETranslucentSortPolicy__SortByDistance = 0,
	ETranslucentSortPolicy__SortByProjectedZ = 1,
	ETranslucentSortPolicy__SortAlongAxis = 2,
	ETranslucentSortPolicy__ETranslucentSortPolicy_MAX = 3
};


// Enum Engine.ERefractionMode
enum class FEngine_Engine_ERefractionMode : uint8_t
{
	RM_IndexOfRefraction           = 0,
	RM_PixelNormalOffset           = 1,
	RM_MAX                         = 2
};


// Enum Engine.ETranslucencyLightingMode
enum class FEngine_Engine_ETranslucencyLightingMode : uint8_t
{
	TLM_VolumetricNonDirectional   = 0,
	TLM_VolumetricDirectional      = 1,
	TLM_VolumetricPerVertexNonDirectional = 2,
	TLM_VolumetricPerVertexDirectional = 3,
	TLM_Surface                    = 4,
	TLM_SurfacePerPixelLighting    = 5,
	TLM_MAX                        = 6
};


// Enum Engine.ESamplerSourceMode
enum class FEngine_Engine_ESamplerSourceMode : uint8_t
{
	SSM_FromTextureAsset           = 0,
	SSM_Wrap_WorldGroupSettings    = 1,
	SSM_Clamp_WorldGroupSettings   = 2,
	SSM_MAX                        = 3
};


// Enum Engine.EBlendMode
enum class FEngine_Engine_EBlendMode : uint8_t
{
	BLEND_Opaque                   = 0,
	BLEND_Masked                   = 1,
	BLEND_Translucent              = 2,
	BLEND_Additive                 = 3,
	BLEND_Modulate                 = 4,
	BLEND_AlphaComposite           = 5,
	BLEND_AlphaHoldout             = 6,
	BLEND_MAX                      = 7
};


// Enum Engine.ETrailWidthMode
enum class FEngine_Engine_ETrailWidthMode : uint8_t
{
	ETrailWidthMode_FromCentre     = 0,
	ETrailWidthMode_FromFirst      = 1,
	ETrailWidthMode_FromSecond     = 2,
	ETrailWidthMode_MAX            = 3
};


// Enum Engine.ELightmapType
enum class FEngine_Engine_ELightmapType : uint8_t
{
	ELightmapType__Default         = 0,
	ELightmapType__ForceSurface    = 1,
	ELightmapType__ForceVolumetric = 2,
	ELightmapType__ELightmapType_MAX = 3
};


// Enum Engine.EIndirectLightingCacheQuality
enum class FEngine_Engine_EIndirectLightingCacheQuality : uint8_t
{
	ILCQ_Off                       = 0,
	ILCQ_Point                     = 1,
	ILCQ_Volume                    = 2,
	ILCQ_MAX                       = 3
};


// Enum Engine.ESceneDepthPriorityGroup
enum class FEngine_Engine_ESceneDepthPriorityGroup : uint8_t
{
	SDPG_World                     = 0,
	SDPG_Foreground                = 1,
	SDPG_MAX                       = 2
};


// Enum Engine.EFontCacheType
enum class FEngine_Engine_EFontCacheType : uint8_t
{
	EFontCacheType__Offline        = 0,
	EFontCacheType__Runtime        = 1,
	EFontCacheType__EFontCacheType_MAX = 2
};


// Enum Engine.EOcclusionCombineMode
enum class FEngine_Engine_EOcclusionCombineMode : uint8_t
{
	OCM_Minimum                    = 0,
	OCM_Multiply                   = 1,
	OCM_MAX                        = 2
};


// Enum Engine.EStandbyType
enum class FEngine_Engine_EStandbyType : uint8_t
{
	STDBY_Rx                       = 0,
	STDBY_Tx                       = 1,
	STDBY_BadPing                  = 2,
	STDBY_MAX                      = 3
};


// Enum Engine.ESuggestProjVelocityTraceOption
enum class FEngine_Engine_ESuggestProjVelocityTraceOption : uint8_t
{
	ESuggestProjVelocityTraceOption__DoNotTrace = 0,
	ESuggestProjVelocityTraceOption__TraceFullPath = 1,
	ESuggestProjVelocityTraceOption__OnlyTraceWhileAscending = 2,
	ESuggestProjVelocityTraceOption__ESuggestProjVelocityTraceOption_MAX = 3
};


// Enum Engine.EFontImportCharacterSet
enum class FEngine_Engine_EFontImportCharacterSet : uint8_t
{
	FontICS_Default                = 0,
	FontICS_Ansi                   = 1,
	FontICS_Symbol                 = 2,
	FontICS_MAX                    = 3
};


// Enum Engine.EImportanceWeight
enum class FEngine_Engine_EImportanceWeight : uint8_t
{
	EImportanceWeight__Luminance   = 0,
	EImportanceWeight__Red         = 1,
	EImportanceWeight__Green       = 2,
	EImportanceWeight__Blue        = 3,
	EImportanceWeight__Alpha       = 4,
	EImportanceWeight__EImportanceWeight_MAX = 5
};


// Enum Engine.EAdManagerDelegate
enum class FEngine_Engine_EAdManagerDelegate : uint8_t
{
	AMD_ClickedBanner              = 0,
	AMD_UserClosedAd               = 1,
	AMD_MAX                        = 2
};


// Enum Engine.EAnimAlphaInputType
enum class FEngine_Engine_EAnimAlphaInputType : uint8_t
{
	EAnimAlphaInputType__Float     = 0,
	EAnimAlphaInputType__Bool      = 1,
	EAnimAlphaInputType__Curve     = 2,
	EAnimAlphaInputType__EAnimAlphaInputType_MAX = 3
};


// Enum Engine.EWindowMode
enum class FEngine_Engine_EWindowMode : uint8_t
{
	EWindowMode__Fullscreen        = 0,
	EWindowMode__WindowedFullscreen = 1,
	EWindowMode__Windowed          = 2,
	EWindowMode__EWindowMode_MAX   = 3
};


// Enum Engine.ETrackActiveCondition
enum class FEngine_Engine_ETrackActiveCondition : uint8_t
{
	ETAC_Always                    = 0,
	ETAC_GoreEnabled               = 1,
	ETAC_GoreDisabled              = 2,
	ETAC_MAX                       = 3
};


// Enum Engine.EInterpTrackMoveRotMode
enum class FEngine_Engine_EInterpTrackMoveRotMode : uint8_t
{
	IMR_Keyframed                  = 0,
	IMR_LookAtGroup                = 1,
	IMR_Ignore                     = 2,
	IMR_MAX                        = 3
};


// Enum Engine.EInterpMoveAxis
enum class FEngine_Engine_EInterpMoveAxis : uint8_t
{
	AXIS_TranslationX              = 0,
	AXIS_TranslationY              = 1,
	AXIS_TranslationZ              = 2,
	AXIS_RotationX                 = 3,
	AXIS_RotationY                 = 4,
	AXIS_RotationZ                 = 5,
	AXIS_MAX                       = 6
};


// Enum Engine.ETrackToggleAction
enum class FEngine_Engine_ETrackToggleAction : uint8_t
{
	ETTA_Off                       = 0,
	ETTA_On                        = 1,
	ETTA_Toggle                    = 2,
	ETTA_Trigger                   = 3,
	ETTA_MAX                       = 4
};


// Enum Engine.EVisibilityTrackCondition
enum class FEngine_Engine_EVisibilityTrackCondition : uint8_t
{
	EVTC_Always                    = 0,
	EVTC_GoreEnabled               = 1,
	EVTC_GoreDisabled              = 2,
	EVTC_MAX                       = 3
};


// Enum Engine.EVisibilityTrackAction
enum class FEngine_Engine_EVisibilityTrackAction : uint8_t
{
	EVTA_Hide                      = 0,
	EVTA_Show                      = 1,
	EVTA_Toggle                    = 2,
	EVTA_MAX                       = 3
};


// Enum Engine.ESlateGesture
enum class FEngine_Engine_ESlateGesture : uint8_t
{
	ESlateGesture__None            = 0,
	ESlateGesture__Scroll          = 1,
	ESlateGesture__Magnify         = 2,
	ESlateGesture__Swipe           = 3,
	ESlateGesture__Rotate          = 4,
	ESlateGesture__LongPress       = 5,
	ESlateGesture__ESlateGesture_MAX = 6
};


// Enum Engine.ELerpInterpolationMode
enum class FEngine_Engine_ELerpInterpolationMode : uint8_t
{
	ELerpInterpolationMode__QuatInterp = 0,
	ELerpInterpolationMode__EulerInterp = 1,
	ELerpInterpolationMode__DualQuatInterp = 2,
	ELerpInterpolationMode__ELerpInterpolationMode_MAX = 3
};


// Enum Engine.EEasingFunc
enum class FEngine_Engine_EEasingFunc : uint8_t
{
	EEasingFunc__Linear            = 0,
	EEasingFunc__Step              = 1,
	EEasingFunc__SinusoidalIn      = 2,
	EEasingFunc__SinusoidalOut     = 3,
	EEasingFunc__SinusoidalInOut   = 4,
	EEasingFunc__EaseIn            = 5,
	EEasingFunc__EaseOut           = 6,
	EEasingFunc__EaseInOut         = 7,
	EEasingFunc__ExpoIn            = 8,
	EEasingFunc__ExpoOut           = 9,
	EEasingFunc__ExpoInOut         = 10,
	EEasingFunc__CircularIn        = 11,
	EEasingFunc__CircularOut       = 12,
	EEasingFunc__CircularInOut     = 13,
	EEasingFunc__EEasingFunc_MAX   = 14
};


// Enum Engine.EMatrixColumns
enum class FEngine_Engine_EMatrixColumns : uint8_t
{
	EMatrixColumns__First          = 0,
	EMatrixColumns__Second         = 1,
	EMatrixColumns__Third          = 2,
	EMatrixColumns__Fourth         = 3,
	EMatrixColumns__EMatrixColumns_MAX = 4
};


// Enum Engine.EStreamingVolumeUsage
enum class FEngine_Engine_EStreamingVolumeUsage : uint8_t
{
	SVB_Loading                    = 0,
	SVB_LoadingAndVisibility       = 1,
	SVB_VisibilityBlockingOnLoad   = 2,
	SVB_BlockingOnLoad             = 3,
	SVB_LoadingNotVisible          = 4,
	SVB_MAX                        = 5
};


// Enum Engine.EMaterialDecalResponse
enum class FEngine_Engine_EMaterialDecalResponse : uint8_t
{
	MDR_None                       = 0,
	MDR_ColorNormalRoughness       = 1,
	MDR_Color                      = 2,
	MDR_ColorNormal                = 3,
	MDR_ColorRoughness             = 4,
	MDR_Normal                     = 5,
	MDR_NormalRoughness            = 6,
	MDR_Roughness                  = 7,
	MDR_MAX                        = 8
};


// Enum Engine.EDecalBlendMode
enum class FEngine_Engine_EDecalBlendMode : uint8_t
{
	DBM_Translucent                = 0,
	DBM_Stain                      = 1,
	DBM_Normal                     = 2,
	DBM_Emissive                   = 3,
	DBM_DBuffer_ColorNormalRoughness = 4,
	DBM_DBuffer_Color              = 5,
	DBM_DBuffer_ColorNormal        = 6,
	DBM_DBuffer_ColorRoughness     = 7,
	DBM_DBuffer_Normal             = 8,
	DBM_DBuffer_NormalRoughness    = 9,
	DBM_DBuffer_Roughness          = 10,
	DBM_DBuffer_Emissive           = 11,
	DBM_DBuffer_AlphaComposite     = 12,
	DBM_DBuffer_EmissiveAlphaComposite = 13,
	DBM_Volumetric_DistanceFunction = 14,
	DBM_AlphaComposite             = 15,
	DBM_AmbientOcclusion           = 16,
	DBM_MAX                        = 17
};


// Enum Engine.ETextureColorChannel
enum class FEngine_Engine_ETextureColorChannel : uint8_t
{
	TCC_Red                        = 0,
	TCC_Green                      = 1,
	TCC_Blue                       = 2,
	TCC_Alpha                      = 3,
	TCC_MAX                        = 4
};


// Enum Engine.EMaterialAttributeBlend
enum class FEngine_Engine_EMaterialAttributeBlend : uint8_t
{
	EMaterialAttributeBlend__Blend = 0,
	EMaterialAttributeBlend__UseA  = 1,
	EMaterialAttributeBlend__UseB  = 2,
	EMaterialAttributeBlend__EMaterialAttributeBlend_MAX = 3
};


// Enum Engine.EChannelMaskParameterColor
enum class FEngine_Engine_EChannelMaskParameterColor : uint8_t
{
	EChannelMaskParameterColor__Red = 0,
	EChannelMaskParameterColor__Green = 1,
	EChannelMaskParameterColor__Blue = 2,
	EChannelMaskParameterColor__Alpha = 3,
	EChannelMaskParameterColor__EChannelMaskParameterColor_MAX = 4
};


// Enum Engine.EClampMode
enum class FEngine_Engine_EClampMode : uint8_t
{
	CMODE_Clamp                    = 0,
	CMODE_ClampMin                 = 1,
	CMODE_ClampMax                 = 2,
	CMODE_MAX                      = 3
};


// Enum Engine.ECustomMaterialOutputType
enum class FEngine_Engine_ECustomMaterialOutputType : uint8_t
{
	CMOT_Float1                    = 0,
	CMOT_Float2                    = 1,
	CMOT_Float3                    = 2,
	CMOT_Float4                    = 3,
	CMOT_MAX                       = 4
};


// Enum Engine.EDepthOfFieldFunctionValue
enum class FEngine_Engine_EDepthOfFieldFunctionValue : uint8_t
{
	TDOF_NearAndFarMask            = 0,
	TDOF_NearMask                  = 1,
	TDOF_FarMask                   = 2,
	TDOF_CircleOfConfusionRadius   = 3,
	TDOF_MAX                       = 4
};


// Enum Engine.EFunctionInputType
enum class FEngine_Engine_EFunctionInputType : uint8_t
{
	FunctionInput_Scalar           = 0,
	FunctionInput_Vector2          = 1,
	FunctionInput_Vector3          = 2,
	FunctionInput_Vector4          = 3,
	FunctionInput_Texture2D        = 4,
	FunctionInput_TextureCube      = 5,
	FunctionInput_Texture2DArray   = 6,
	FunctionInput_VolumeTexture    = 7,
	FunctionInput_StaticBool       = 8,
	FunctionInput_MaterialAttributes = 9,
	FunctionInput_TextureExternal  = 10,
	FunctionInput_MAX              = 11
};


// Enum Engine.ENoiseFunction
enum class FEngine_Engine_ENoiseFunction : uint8_t
{
	NOISEFUNCTION_SimplexTex       = 0,
	NOISEFUNCTION_GradientTex      = 1,
	NOISEFUNCTION_GradientTex3D    = 2,
	NOISEFUNCTION_GradientALU      = 3,
	NOISEFUNCTION_ValueALU         = 4,
	NOISEFUNCTION_VoronoiALU       = 5,
	NOISEFUNCTION_MAX              = 6
};


// Enum Engine.ERuntimeVirtualTextureMipValueMode
enum class FEngine_Engine_ERuntimeVirtualTextureMipValueMode : uint8_t
{
	RVTMVM_None                    = 0,
	RVTMVM_MipLevel                = 1,
	RVTMVM_MipBias                 = 2,
	RVTMVM_MAX                     = 3
};


// Enum Engine.EMaterialSceneAttributeInputMode
enum class FEngine_Engine_EMaterialSceneAttributeInputMode : uint8_t
{
	EMaterialSceneAttributeInputMode__Coordinates = 0,
	EMaterialSceneAttributeInputMode__OffsetFraction = 1,
	EMaterialSceneAttributeInputMode__EMaterialSceneAttributeInputMode_MAX = 2
};


// Enum Engine.ESpeedTreeLODType
enum class FEngine_Engine_ESpeedTreeLODType : uint8_t
{
	STLOD_Pop                      = 0,
	STLOD_Smooth                   = 1,
	STLOD_MAX                      = 2
};


// Enum Engine.ESpeedTreeWindType
enum class FEngine_Engine_ESpeedTreeWindType : uint8_t
{
	STW_None                       = 0,
	STW_Fastest                    = 1,
	STW_Fast                       = 2,
	STW_Better                     = 3,
	STW_Best                       = 4,
	STW_Palm                       = 5,
	STW_BestPlus                   = 6,
	STW_MAX                        = 7
};


// Enum Engine.ESpeedTreeGeometryType
enum class FEngine_Engine_ESpeedTreeGeometryType : uint8_t
{
	STG_Branch                     = 0,
	STG_Frond                      = 1,
	STG_Leaf                       = 2,
	STG_FacingLeaf                 = 3,
	STG_Billboard                  = 4,
	STG_MAX                        = 5
};


// Enum Engine.ERoundingMode
enum class FEngine_Engine_ERoundingMode : uint8_t
{
	HalfToEven                     = 0,
	HalfFromZero                   = 1,
	HalfToZero                     = 2,
	FromZero                       = 3,
	ToZero                         = 4,
	ToNegativeInfinity             = 5,
	ToPositiveInfinity             = 6,
	ERoundingMode_MAX              = 7
};


// Enum Engine.EMaterialExposedTextureProperty
enum class FEngine_Engine_EMaterialExposedTextureProperty : uint8_t
{
	TMTM_TextureSize               = 0,
	TMTM_TexelSize                 = 1,
	TMTM_MAX                       = 2
};


// Enum Engine.ETextureMipValueMode
enum class FEngine_Engine_ETextureMipValueMode : uint8_t
{
	TMVM_None                      = 0,
	TMVM_MipLevel                  = 1,
	TMVM_MipBias                   = 2,
	TMVM_Derivative                = 3,
	TMVM_MAX                       = 4
};


// Enum Engine.EMaterialVectorCoordTransform
enum class FEngine_Engine_EMaterialVectorCoordTransform : uint8_t
{
	TRANSFORM_Tangent              = 0,
	TRANSFORM_Local                = 1,
	TRANSFORM_World                = 2,
	TRANSFORM_View                 = 3,
	TRANSFORM_Camera               = 4,
	TRANSFORM_ParticleWorld        = 5,
	TRANSFORM_MAX                  = 6
};


// Enum Engine.EMaterialVectorCoordTransformSource
enum class FEngine_Engine_EMaterialVectorCoordTransformSource : uint8_t
{
	TRANSFORMSOURCE_Tangent        = 0,
	TRANSFORMSOURCE_Local          = 1,
	TRANSFORMSOURCE_World          = 2,
	TRANSFORMSOURCE_View           = 3,
	TRANSFORMSOURCE_Camera         = 4,
	TRANSFORMSOURCE_ParticleWorld  = 5,
	TRANSFORMSOURCE_MAX            = 6
};


// Enum Engine.EMaterialPositionTransformSource
enum class FEngine_Engine_EMaterialPositionTransformSource : uint8_t
{
	TRANSFORMPOSSOURCE_Local       = 0,
	TRANSFORMPOSSOURCE_World       = 1,
	TRANSFORMPOSSOURCE_TranslatedWorld = 2,
	TRANSFORMPOSSOURCE_View        = 3,
	TRANSFORMPOSSOURCE_Camera      = 4,
	TRANSFORMPOSSOURCE_Particle    = 5,
	TRANSFORMPOSSOURCE_MAX         = 6
};


// Enum Engine.EVectorNoiseFunction
enum class FEngine_Engine_EVectorNoiseFunction : uint8_t
{
	VNF_CellnoiseALU               = 0,
	VNF_VectorALU                  = 1,
	VNF_GradientALU                = 2,
	VNF_CurlALU                    = 3,
	VNF_VoronoiALU                 = 4,
	VNF_MAX                        = 5
};


// Enum Engine.EMaterialExposedViewProperty
enum class FEngine_Engine_EMaterialExposedViewProperty : uint8_t
{
	MEVP_BufferSize                = 0,
	MEVP_FieldOfView               = 1,
	MEVP_TanHalfFieldOfView        = 2,
	MEVP_ViewSize                  = 3,
	MEVP_WorldSpaceViewPosition    = 4,
	MEVP_WorldSpaceCameraPosition  = 5,
	MEVP_ViewportOffset            = 6,
	MEVP_TemporalSampleCount       = 7,
	MEVP_TemporalSampleIndex       = 8,
	MEVP_TemporalSampleOffset      = 9,
	MEVP_RuntimeVirtualTextureOutputLevel = 10,
	MEVP_RuntimeVirtualTextureOutputDerivative = 11,
	MEVP_PreExposure               = 12,
	MEVP_MAX                       = 13
};


// Enum Engine.EWorldPositionIncludedOffsets
enum class FEngine_Engine_EWorldPositionIncludedOffsets : uint8_t
{
	WPT_Default                    = 0,
	WPT_ExcludeAllShaderOffsets    = 1,
	WPT_CameraRelative             = 2,
	WPT_CameraRelativeNoOffsets    = 3,
	WPT_MAX                        = 4
};


// Enum Engine.EMaterialFunctionUsage
enum class FEngine_Engine_EMaterialFunctionUsage : uint8_t
{
	EMaterialFunctionUsage__Default = 0,
	EMaterialFunctionUsage__MaterialLayer = 1,
	EMaterialFunctionUsage__MaterialLayerBlend = 2,
	EMaterialFunctionUsage__EMaterialFunctionUsage_MAX = 3
};


// Enum Engine.EMaterialUsage
enum class FEngine_Engine_EMaterialUsage : uint8_t
{
	MATUSAGE_SkeletalMesh          = 0,
	MATUSAGE_ParticleSprites       = 1,
	MATUSAGE_BeamTrails            = 2,
	MATUSAGE_MeshParticles         = 3,
	MATUSAGE_StaticLighting        = 4,
	MATUSAGE_MorphTargets          = 5,
	MATUSAGE_SplineMesh            = 6,
	MATUSAGE_InstancedStaticMeshes = 7,
	MATUSAGE_GeometryCollections   = 8,
	MATUSAGE_Clothing              = 9,
	MATUSAGE_NiagaraSprites        = 10,
	MATUSAGE_NiagaraRibbons        = 11,
	MATUSAGE_NiagaraMeshParticles  = 12,
	MATUSAGE_GeometryCache         = 13,
	MATUSAGE_Water                 = 14,
	MATUSAGE_HairStrands           = 15,
	MATUSAGE_MAX                   = 16
};


// Enum Engine.EMaterialParameterAssociation
enum class FEngine_Engine_EMaterialParameterAssociation : uint8_t
{
	LayerParameter                 = 0,
	BlendParameter                 = 1,
	GlobalParameter                = 2,
	EMaterialParameterAssociation_MAX = 3
};


// Enum Engine.EMaterialMergeType
enum class FEngine_Engine_EMaterialMergeType : uint8_t
{
	MaterialMergeType_Default      = 0,
	MaterialMergeType_Simplygon    = 1,
	MaterialMergeType_MAX          = 2
};


// Enum Engine.ETextureSizingType
enum class FEngine_Engine_ETextureSizingType : uint8_t
{
	TextureSizingType_UseSingleTextureSize = 0,
	TextureSizingType_UseAutomaticBiasedSizes = 1,
	TextureSizingType_UseManualOverrideTextureSize = 2,
	TextureSizingType_UseSimplygonAutomaticSizing = 3,
	TextureSizingType_MAX          = 4
};


// Enum Engine.EMaterialDomain
enum class FEngine_Engine_EMaterialDomain : uint8_t
{
	MD_Surface                     = 0,
	MD_DeferredDecal               = 1,
	MD_LightFunction               = 2,
	MD_Volume                      = 3,
	MD_PostProcess                 = 4,
	MD_UI                          = 5,
	MD_RuntimeVirtualTexture       = 6,
	MD_MAX                         = 7
};


// Enum Engine.EMeshInstancingReplacementMethod
enum class FEngine_Engine_EMeshInstancingReplacementMethod : uint8_t
{
	EMeshInstancingReplacementMethod__RemoveOriginalActors = 0,
	EMeshInstancingReplacementMethod__KeepOriginalActorsAsEditorOnly = 1,
	EMeshInstancingReplacementMethod__EMeshInstancingReplacementMethod_MAX = 2
};


// Enum Engine.EUVOutput
enum class FEngine_Engine_EUVOutput : uint8_t
{
	EUVOutput__DoNotOutputChannel  = 0,
	EUVOutput__OutputChannel       = 1,
	EUVOutput__EUVOutput_MAX       = 2
};


// Enum Engine.EMeshMergeType
enum class FEngine_Engine_EMeshMergeType : uint8_t
{
	EMeshMergeType__MeshMergeType_Default = 0,
	EMeshMergeType__MeshMergeType_MergeActor = 1,
	EMeshMergeType__MeshMergeType_MAX = 2
};


// Enum Engine.EMeshLODSelectionType
enum class FEngine_Engine_EMeshLODSelectionType : uint8_t
{
	EMeshLODSelectionType__AllLODs = 0,
	EMeshLODSelectionType__SpecificLOD = 1,
	EMeshLODSelectionType__CalculateLOD = 2,
	EMeshLODSelectionType__LowestDetailLOD = 3,
	EMeshLODSelectionType__EMeshLODSelectionType_MAX = 4
};


// Enum Engine.EProxyNormalComputationMethod
enum class FEngine_Engine_EProxyNormalComputationMethod : uint8_t
{
	EProxyNormalComputationMethod__AngleWeighted = 0,
	EProxyNormalComputationMethod__AreaWeighted = 1,
	EProxyNormalComputationMethod__EqualWeighted = 2,
	EProxyNormalComputationMethod__EProxyNormalComputationMethod_MAX = 3
};


// Enum Engine.ELandscapeCullingPrecision
enum class FEngine_Engine_ELandscapeCullingPrecision : uint8_t
{
	ELandscapeCullingPrecision__High = 0,
	ELandscapeCullingPrecision__Medium = 1,
	ELandscapeCullingPrecision__Low = 2,
	ELandscapeCullingPrecision__ELandscapeCullingPrecision_MAX = 3
};


// Enum Engine.EStaticMeshReductionTerimationCriterion
enum class FEngine_Engine_EStaticMeshReductionTerimationCriterion : uint8_t
{
	EStaticMeshReductionTerimationCriterion__Triangles = 0,
	EStaticMeshReductionTerimationCriterion__Vertices = 1,
	EStaticMeshReductionTerimationCriterion__Any = 2,
	EStaticMeshReductionTerimationCriterion__EStaticMeshReductionTerimationCriterion_MAX = 3
};


// Enum Engine.EGBufferFormat
enum class FEngine_Engine_EGBufferFormat : uint8_t
{
	EGBufferFormat__Force8BitsPerChannel = 0,
	EGBufferFormat__Default        = 1,
	EGBufferFormat__HighPrecisionNormals = 2,
	EGBufferFormat__Force16BitsPerChannel = 3,
	EGBufferFormat__EGBufferFormat_MAX = 4
};


// Enum Engine.ESceneTextureId
enum class FEngine_Engine_ESceneTextureId : uint8_t
{
	PPI_SceneColor                 = 0,
	PPI_SceneDepth                 = 1,
	PPI_DiffuseColor               = 2,
	PPI_SpecularColor              = 3,
	PPI_SubsurfaceColor            = 4,
	PPI_BaseColor                  = 5,
	PPI_Specular                   = 6,
	PPI_Metallic                   = 7,
	PPI_WorldNormal                = 8,
	PPI_SeparateTranslucency       = 9,
	PPI_Opacity                    = 10,
	PPI_Roughness                  = 11,
	PPI_MaterialAO                 = 12,
	PPI_CustomDepth                = 13,
	PPI_PostProcessInput0          = 14,
	PPI_PostProcessInput1          = 15,
	PPI_PostProcessInput2          = 16,
	PPI_PostProcessInput3          = 17,
	PPI_PostProcessInput4          = 18,
	PPI_PostProcessInput5          = 19,
	PPI_PostProcessInput6          = 20,
	PPI_DecalMask                  = 21,
	PPI_ShadingModelColor          = 22,
	PPI_ShadingModelID             = 23,
	PPI_AmbientOcclusion           = 24,
	PPI_CustomStencil              = 25,
	PPI_StoredBaseColor            = 26,
	PPI_StoredSpecular             = 27,
	PPI_Velocity                   = 28,
	PPI_MAX                        = 29
};


// Enum Engine.EVertexPaintAxis
enum class FEngine_Engine_EVertexPaintAxis : uint8_t
{
	EVertexPaintAxis__X            = 0,
	EVertexPaintAxis__Y            = 1,
	EVertexPaintAxis__Z            = 2,
	EVertexPaintAxis__EVertexPaintAxis_MAX = 3
};


// Enum Engine.EMicroTransactionResult
enum class FEngine_Engine_EMicroTransactionResult : uint8_t
{
	MTR_Succeeded                  = 0,
	MTR_Failed                     = 1,
	MTR_Canceled                   = 2,
	MTR_RestoredFromServer         = 3,
	MTR_MAX                        = 4
};


// Enum Engine.FNavigationSystemRunMode
enum class FEngine_Engine_EFNavigationSystemRunMode : uint8_t
{
	FNavigationSystemRunMode__InvalidMode = 0,
	FNavigationSystemRunMode__GameMode = 1,
	FNavigationSystemRunMode__EditorMode = 2,
	FNavigationSystemRunMode__SimulationMode = 3,
	FNavigationSystemRunMode__PIEMode = 4,
	FNavigationSystemRunMode__FNavigationSystemRunMode_MAX = 5
};


// Enum Engine.ENavigationQueryResult
enum class FEngine_Engine_ENavigationQueryResult : uint8_t
{
	ENavigationQueryResult__Invalid = 0,
	ENavigationQueryResult__Error  = 1,
	ENavigationQueryResult__Fail   = 2,
	ENavigationQueryResult__Success = 3,
	ENavigationQueryResult__ENavigationQueryResult_MAX = 4
};


// Enum Engine.EMicroTransactionDelegate
enum class FEngine_Engine_EMicroTransactionDelegate : uint8_t
{
	MTD_PurchaseQueryComplete      = 0,
	MTD_PurchaseComplete           = 1,
	MTD_MAX                        = 2
};


// Enum Engine.ENavPathEvent
enum class FEngine_Engine_ENavPathEvent : uint8_t
{
	ENavPathEvent__Cleared         = 0,
	ENavPathEvent__NewPath         = 1,
	ENavPathEvent__UpdatedDueToGoalMoved = 2,
	ENavPathEvent__UpdatedDueToNavigationChanged = 3,
	ENavPathEvent__Invalidated     = 4,
	ENavPathEvent__RePathFailed    = 5,
	ENavPathEvent__MetaPathUpdate  = 6,
	ENavPathEvent__Custom          = 7,
	ENavPathEvent__ENavPathEvent_MAX = 8
};


// Enum Engine.ENavDataGatheringModeConfig
enum class FEngine_Engine_ENavDataGatheringModeConfig : uint8_t
{
	ENavDataGatheringModeConfig__Invalid = 0,
	ENavDataGatheringModeConfig__Instant = 1,
	ENavDataGatheringModeConfig__Lazy = 2,
	ENavDataGatheringModeConfig__ENavDataGatheringModeConfig_MAX = 3
};


// Enum Engine.ENavDataGatheringMode
enum class FEngine_Engine_ENavDataGatheringMode : uint8_t
{
	ENavDataGatheringMode__Default = 0,
	ENavDataGatheringMode__Instant = 1,
	ENavDataGatheringMode__Lazy    = 2,
	ENavDataGatheringMode__ENavDataGatheringMode_MAX = 3
};


// Enum Engine.ENavLinkDirection
enum class FEngine_Engine_ENavLinkDirection : uint8_t
{
	ENavLinkDirection__BothWays    = 0,
	ENavLinkDirection__LeftToRight = 1,
	ENavLinkDirection__RightToLeft = 2,
	ENavLinkDirection__ENavLinkDirection_MAX = 3
};


// Enum Engine.EFastArraySerializerDeltaFlags
enum class FEngine_Engine_EFastArraySerializerDeltaFlags : uint8_t
{
	EFastArraySerializerDeltaFlags__None = 0,
	EFastArraySerializerDeltaFlags__HasBeenSerialized = 1,
	EFastArraySerializerDeltaFlags__HasDeltaBeenRequested = 2,
	EFastArraySerializerDeltaFlags__IsUsingDeltaSerialization = 3,
	EFastArraySerializerDeltaFlags__EFastArraySerializerDeltaFlags_MAX = 4
};


// Enum Engine.EEmitterRenderMode
enum class FEngine_Engine_EEmitterRenderMode : uint8_t
{
	ERM_Normal                     = 0,
	ERM_Point                      = 1,
	ERM_Cross                      = 2,
	ERM_LightsOnly                 = 3,
	ERM_None                       = 4,
	ERM_MAX                        = 5
};


// Enum Engine.ENavigationOptionFlag
enum class FEngine_Engine_ENavigationOptionFlag : uint8_t
{
	ENavigationOptionFlag__Default = 0,
	ENavigationOptionFlag__Enable  = 1,
	ENavigationOptionFlag__Disable = 2,
	ENavigationOptionFlag__MAX     = 3
};


// Enum Engine.EParticleBurstMethod
enum class FEngine_Engine_EParticleBurstMethod : uint8_t
{
	EPBM_Instant                   = 0,
	EPBM_Interpolated              = 1,
	EPBM_MAX                       = 2
};


// Enum Engine.EParticleSystemInsignificanceReaction
enum class FEngine_Engine_EParticleSystemInsignificanceReaction : uint8_t
{
	EParticleSystemInsignificanceReaction__Auto = 0,
	EParticleSystemInsignificanceReaction__Complete = 1,
	EParticleSystemInsignificanceReaction__DisableTick = 2,
	EParticleSystemInsignificanceReaction__DisableTickAndKill = 3,
	EParticleSystemInsignificanceReaction__Num = 4,
	EParticleSystemInsignificanceReaction__EParticleSystemInsignificanceReaction_MAX = 5
};


// Enum Engine.EParticleSignificanceLevel
enum class FEngine_Engine_EParticleSignificanceLevel : uint8_t
{
	EParticleSignificanceLevel__Low = 0,
	EParticleSignificanceLevel__Medium = 1,
	EParticleSignificanceLevel__High = 2,
	EParticleSignificanceLevel__Critical = 3,
	EParticleSignificanceLevel__Num = 4,
	EParticleSignificanceLevel__EParticleSignificanceLevel_MAX = 5
};


// Enum Engine.EMeshFeatureImportance
enum class FEngine_Engine_EMeshFeatureImportance : uint8_t
{
	EMeshFeatureImportance__Off    = 0,
	EMeshFeatureImportance__Lowest = 1,
	EMeshFeatureImportance__Low    = 2,
	EMeshFeatureImportance__Normal = 3,
	EMeshFeatureImportance__High   = 4,
	EMeshFeatureImportance__Highest = 5,
	EMeshFeatureImportance__EMeshFeatureImportance_MAX = 6
};


// Enum Engine.EParticleSourceSelectionMethod
enum class FEngine_Engine_EParticleSourceSelectionMethod : uint8_t
{
	EPSSM_Random                   = 0,
	EPSSM_Sequential               = 1,
	EPSSM_MAX                      = 2
};


// Enum Engine.EAttractorParticleSelectionMethod
enum class FEngine_Engine_EAttractorParticleSelectionMethod : uint8_t
{
	EAPSM_Random                   = 0,
	EAPSM_Sequential               = 1,
	EAPSM_MAX                      = 2
};


// Enum Engine.EModuleType
enum class FEngine_Engine_EModuleType : uint8_t
{
	EPMT_General                   = 0,
	EPMT_TypeData                  = 1,
	EPMT_Beam                      = 2,
	EPMT_Trail                     = 3,
	EPMT_Spawn                     = 4,
	EPMT_Required                  = 5,
	EPMT_Event                     = 6,
	EPMT_Light                     = 7,
	EPMT_SubUV                     = 8,
	EPMT_MAX                       = 9
};


// Enum Engine.Beam2SourceTargetMethod
enum class FEngine_Engine_EBeam2SourceTargetMethod : uint8_t
{
	PEB2STM_Default                = 0,
	PEB2STM_UserSet                = 1,
	PEB2STM_Emitter                = 2,
	PEB2STM_Particle               = 3,
	PEB2STM_Actor                  = 4,
	PEB2STM_MAX                    = 5
};


// Enum Engine.Beam2SourceTargetTangentMethod
enum class FEngine_Engine_EBeam2SourceTargetTangentMethod : uint8_t
{
	PEB2STTM_Direct                = 0,
	PEB2STTM_UserSet               = 1,
	PEB2STTM_Distribution          = 2,
	PEB2STTM_Emitter               = 3,
	PEB2STTM_MAX                   = 4
};


// Enum Engine.BeamModifierType
enum class FEngine_Engine_EBeamModifierType : uint8_t
{
	PEB2MT_Source                  = 0,
	PEB2MT_Target                  = 1,
	PEB2MT_MAX                     = 2
};


// Enum Engine.EParticleCameraOffsetUpdateMethod
enum class FEngine_Engine_EParticleCameraOffsetUpdateMethod : uint8_t
{
	EPCOUM_DirectSet               = 0,
	EPCOUM_Additive                = 1,
	EPCOUM_Scalar                  = 2,
	EPCOUM_MAX                     = 3
};


// Enum Engine.EParticleCollisionComplete
enum class FEngine_Engine_EParticleCollisionComplete : uint8_t
{
	EPCC_Kill                      = 0,
	EPCC_Freeze                    = 1,
	EPCC_HaltCollisions            = 2,
	EPCC_FreezeTranslation         = 3,
	EPCC_FreezeRotation            = 4,
	EPCC_FreezeMovement            = 5,
	EPCC_MAX                       = 6
};


// Enum Engine.ELocationBoneSocketSelectionMethod
enum class FEngine_Engine_ELocationBoneSocketSelectionMethod : uint8_t
{
	BONESOCKETSEL_Sequential       = 0,
	BONESOCKETSEL_Random           = 1,
	BONESOCKETSEL_MAX              = 2
};


// Enum Engine.ELocationBoneSocketSource
enum class FEngine_Engine_ELocationBoneSocketSource : uint8_t
{
	BONESOCKETSOURCE_Bones         = 0,
	BONESOCKETSOURCE_Sockets       = 1,
	BONESOCKETSOURCE_MAX           = 2
};


// Enum Engine.ELocationEmitterSelectionMethod
enum class FEngine_Engine_ELocationEmitterSelectionMethod : uint8_t
{
	ELESM_Random                   = 0,
	ELESM_Sequential               = 1,
	ELESM_MAX                      = 2
};


// Enum Engine.EParticleDetailMode
enum class FEngine_Engine_EParticleDetailMode : uint8_t
{
	PDM_Low                        = 0,
	PDM_Medium                     = 1,
	PDM_High                       = 2,
	PDM_MAX                        = 3
};


// Enum Engine.CylinderHeightAxis
enum class FEngine_Engine_ECylinderHeightAxis : uint8_t
{
	PMLPC_HEIGHTAXIS_X             = 0,
	PMLPC_HEIGHTAXIS_Y             = 1,
	PMLPC_HEIGHTAXIS_Z             = 2,
	PMLPC_HEIGHTAXIS_MAX           = 3
};


// Enum Engine.ELocationSkelVertSurfaceSource
enum class FEngine_Engine_ELocationSkelVertSurfaceSource : uint8_t
{
	VERTSURFACESOURCE_Vert         = 0,
	VERTSURFACESOURCE_Surface      = 1,
	VERTSURFACESOURCE_MAX          = 2
};


// Enum Engine.EOrbitChainMode
enum class FEngine_Engine_EOrbitChainMode : uint8_t
{
	EOChainMode_Add                = 0,
	EOChainMode_Scale              = 1,
	EOChainMode_Link               = 2,
	EOChainMode_MAX                = 3
};


// Enum Engine.EParticleAxisLock
enum class FEngine_Engine_EParticleAxisLock : uint8_t
{
	EPAL_NONE                      = 0,
	EPAL_X                         = 1,
	EPAL_Y                         = 2,
	EPAL_Z                         = 3,
	EPAL_NEGATIVE_X                = 4,
	EPAL_NEGATIVE_Y                = 5,
	EPAL_NEGATIVE_Z                = 6,
	EPAL_ROTATE_X                  = 7,
	EPAL_ROTATE_Y                  = 8,
	EPAL_ROTATE_Z                  = 9,
	EPAL_MAX                       = 10
};


// Enum Engine.EEmitterDynamicParameterValue
enum class FEngine_Engine_EEmitterDynamicParameterValue : uint8_t
{
	EDPV_UserSet                   = 0,
	EDPV_AutoSet                   = 1,
	EDPV_VelocityX                 = 2,
	EDPV_VelocityY                 = 3,
	EDPV_VelocityZ                 = 4,
	EDPV_VelocityMag               = 5,
	EDPV_MAX                       = 6
};


// Enum Engine.EEmitterNormalsMode
enum class FEngine_Engine_EEmitterNormalsMode : uint8_t
{
	ENM_CameraFacing               = 0,
	ENM_Spherical                  = 1,
	ENM_Cylindrical                = 2,
	ENM_MAX                        = 3
};


// Enum Engine.EParticleSortMode
enum class FEngine_Engine_EParticleSortMode : uint8_t
{
	PSORTMODE_None                 = 0,
	PSORTMODE_ViewProjDepth        = 1,
	PSORTMODE_DistanceToView       = 2,
	PSORTMODE_Age_OldestFirst      = 3,
	PSORTMODE_Age_NewestFirst      = 4,
	PSORTMODE_MAX                  = 5
};


// Enum Engine.EParticleUVFlipMode
enum class FEngine_Engine_EParticleUVFlipMode : uint8_t
{
	EParticleUVFlipMode__None      = 0,
	EParticleUVFlipMode__FlipUV    = 1,
	EParticleUVFlipMode__FlipUOnly = 2,
	EParticleUVFlipMode__FlipVOnly = 3,
	EParticleUVFlipMode__RandomFlipUV = 4,
	EParticleUVFlipMode__RandomFlipUOnly = 5,
	EParticleUVFlipMode__RandomFlipVOnly = 6,
	EParticleUVFlipMode__RandomFlipUVIndependent = 7,
	EParticleUVFlipMode__EParticleUVFlipMode_MAX = 8
};


// Enum Engine.EBeamTaperMethod
enum class FEngine_Engine_EBeamTaperMethod : uint8_t
{
	PEBTM_None                     = 0,
	PEBTM_Full                     = 1,
	PEBTM_Partial                  = 2,
	PEBTM_MAX                      = 3
};


// Enum Engine.EBeam2Method
enum class FEngine_Engine_EBeam2Method : uint8_t
{
	PEB2M_Distance                 = 0,
	PEB2M_Target                   = 1,
	PEB2M_Branch                   = 2,
	PEB2M_MAX                      = 3
};


// Enum Engine.EMeshCameraFacingOptions
enum class FEngine_Engine_EMeshCameraFacingOptions : uint8_t
{
	XAxisFacing_NoUp               = 0,
	XAxisFacing_ZUp                = 1,
	XAxisFacing_NegativeZUp        = 2,
	XAxisFacing_YUp                = 3,
	XAxisFacing_NegativeYUp        = 4,
	LockedAxis_ZAxisFacing         = 5,
	LockedAxis_NegativeZAxisFacing = 6,
	LockedAxis_YAxisFacing         = 7,
	LockedAxis_NegativeYAxisFacing = 8,
	VelocityAligned_ZAxisFacing    = 9,
	VelocityAligned_NegativeZAxisFacing = 10,
	VelocityAligned_YAxisFacing    = 11,
	VelocityAligned_NegativeYAxisFacing = 12,
	EMeshCameraFacingOptions_MAX   = 13
};


// Enum Engine.EParticleCollisionResponse
enum class FEngine_Engine_EParticleCollisionResponse : uint8_t
{
	EParticleCollisionResponse__Bounce = 0,
	EParticleCollisionResponse__Stop = 1,
	EParticleCollisionResponse__Kill = 2,
	EParticleCollisionResponse__EParticleCollisionResponse_MAX = 3
};


// Enum Engine.EMeshCameraFacingUpAxis
enum class FEngine_Engine_EMeshCameraFacingUpAxis : uint8_t
{
	CameraFacing_NoneUP            = 0,
	CameraFacing_ZUp               = 1,
	CameraFacing_NegativeZUp       = 2,
	CameraFacing_YUp               = 3,
	CameraFacing_NegativeYUp       = 4,
	CameraFacing_MAX               = 5
};


// Enum Engine.EMeshScreenAlignment
enum class FEngine_Engine_EMeshScreenAlignment : uint8_t
{
	PSMA_MeshFaceCameraWithRoll    = 0,
	PSMA_MeshFaceCameraWithSpin    = 1,
	PSMA_MeshFaceCameraWithLockedAxis = 2,
	PSMA_MAX                       = 3
};


// Enum Engine.ETrailsRenderAxisOption
enum class FEngine_Engine_ETrailsRenderAxisOption : uint8_t
{
	Trails_CameraUp                = 0,
	Trails_SourceUp                = 1,
	Trails_WorldUp                 = 2,
	Trails_MAX                     = 3
};


// Enum Engine.ETrail2SourceMethod
enum class FEngine_Engine_ETrail2SourceMethod : uint8_t
{
	PET2SRCM_Default               = 0,
	PET2SRCM_Particle              = 1,
	PET2SRCM_Actor                 = 2,
	PET2SRCM_MAX                   = 3
};


// Enum Engine.EParticleSystemOcclusionBoundsMethod
enum class FEngine_Engine_EParticleSystemOcclusionBoundsMethod : uint8_t
{
	EPSOBM_None                    = 0,
	EPSOBM_ParticleBounds          = 1,
	EPSOBM_CustomBounds            = 2,
	EPSOBM_MAX                     = 3
};


// Enum Engine.EParticleScreenAlignment
enum class FEngine_Engine_EParticleScreenAlignment : uint8_t
{
	PSA_FacingCameraPosition       = 0,
	PSA_Square                     = 1,
	PSA_Rectangle                  = 2,
	PSA_Velocity                   = 3,
	PSA_AwayFromCenter             = 4,
	PSA_TypeSpecific               = 5,
	PSA_FacingCameraDistanceBlend  = 6,
	PSA_MAX                        = 7
};


// Enum Engine.ParticleSystemLODMethod
enum class FEngine_Engine_EParticleSystemLODMethod : uint8_t
{
	PARTICLESYSTEMLODMETHOD_Automatic = 0,
	PARTICLESYSTEMLODMETHOD_DirectSet = 1,
	PARTICLESYSTEMLODMETHOD_ActivateAutomatic = 2,
	PARTICLESYSTEMLODMETHOD_MAX    = 3
};


// Enum Engine.EParticleSystemUpdateMode
enum class FEngine_Engine_EParticleSystemUpdateMode : uint8_t
{
	EPSUM_RealTime                 = 0,
	EPSUM_FixedTime                = 1,
	EPSUM_MAX                      = 2
};


// Enum Engine.EParticleEventType
enum class FEngine_Engine_EParticleEventType : uint8_t
{
	EPET_Any                       = 0,
	EPET_Spawn                     = 1,
	EPET_Death                     = 2,
	EPET_Collision                 = 3,
	EPET_Burst                     = 4,
	EPET_Blueprint                 = 5,
	EPET_MAX                       = 6
};


// Enum Engine.ParticleReplayState
enum class FEngine_Engine_EParticleReplayState : uint8_t
{
	PRS_Disabled                   = 0,
	PRS_Capturing                  = 1,
	PRS_Replaying                  = 2,
	PRS_MAX                        = 3
};


// Enum Engine.EParticleSysParamType
enum class FEngine_Engine_EParticleSysParamType : uint8_t
{
	PSPT_None                      = 0,
	PSPT_Scalar                    = 1,
	PSPT_ScalarRand                = 2,
	PSPT_Vector                    = 3,
	PSPT_VectorRand                = 4,
	PSPT_Color                     = 5,
	PSPT_Actor                     = 6,
	PSPT_Material                  = 7,
	PSPT_VectorUnitRand            = 8,
	PSPT_MAX                       = 9
};


// Enum Engine.ESettingsLockedAxis
enum class FEngine_Engine_ESettingsLockedAxis : uint8_t
{
	ESettingsLockedAxis__None      = 0,
	ESettingsLockedAxis__X         = 1,
	ESettingsLockedAxis__Y         = 2,
	ESettingsLockedAxis__Z         = 3,
	ESettingsLockedAxis__Invalid   = 4,
	ESettingsLockedAxis__ESettingsLockedAxis_MAX = 5
};


// Enum Engine.EFrictionCombineMode
enum class FEngine_Engine_EFrictionCombineMode : uint8_t
{
	EFrictionCombineMode__Average  = 0,
	EFrictionCombineMode__Min      = 1,
	EFrictionCombineMode__Multiply = 2,
	EFrictionCombineMode__Max      = 3
};


// Enum Engine.ERendererStencilMask
enum class FEngine_Engine_ERendererStencilMask : uint8_t
{
	ERendererStencilMask__ERSM_Default = 0,
	ERendererStencilMask__ERSM     = 1,
	ERendererStencilMask__ERSM01   = 2,
	ERendererStencilMask__ERSM02   = 3,
	ERendererStencilMask__ERSM03   = 4,
	ERendererStencilMask__ERSM04   = 5,
	ERendererStencilMask__ERSM05   = 6,
	ERendererStencilMask__ERSM06   = 7,
	ERendererStencilMask__ERSM07   = 8,
	ERendererStencilMask__ERSM08   = 9,
	ERendererStencilMask__ERSM_MAX = 10
};


// Enum Engine.EHasCustomNavigableGeometry
enum class FEngine_Engine_EHasCustomNavigableGeometry : uint8_t
{
	EHasCustomNavigableGeometry__No = 0,
	EHasCustomNavigableGeometry__Yes = 1,
	EHasCustomNavigableGeometry__EvenIfNotCollidable = 2,
	EHasCustomNavigableGeometry__DontExport = 3,
	EHasCustomNavigableGeometry__EHasCustomNavigableGeometry_MAX = 4
};


// Enum Engine.ECanBeCharacterBase
enum class FEngine_Engine_ECanBeCharacterBase : uint8_t
{
	ECB_No                         = 0,
	ECB_Yes                        = 1,
	ECB_Owner                      = 2,
	ECB_MAX                        = 3
};


// Enum Engine.ERichCurveExtrapolation
enum class FEngine_Engine_ERichCurveExtrapolation : uint8_t
{
	RCCE_Cycle                     = 0,
	RCCE_CycleWithOffset           = 1,
	RCCE_Oscillate                 = 2,
	RCCE_Linear                    = 3,
	RCCE_Constant                  = 4,
	RCCE_None                      = 5,
	RCCE_MAX                       = 6
};


// Enum Engine.ERichCurveInterpMode
enum class FEngine_Engine_ERichCurveInterpMode : uint8_t
{
	RCIM_Linear                    = 0,
	RCIM_Constant                  = 1,
	RCIM_Cubic                     = 2,
	RCIM_None                      = 3,
	RCIM_MAX                       = 4
};


// Enum Engine.EReflectionSourceType
enum class FEngine_Engine_EReflectionSourceType : uint8_t
{
	EReflectionSourceType__CapturedScene = 0,
	EReflectionSourceType__SpecifiedCubemap = 1,
	EReflectionSourceType__EReflectionSourceType_MAX = 2
};


// Enum Engine.EDefaultBackBufferPixelFormat
enum class FEngine_Engine_EDefaultBackBufferPixelFormat : uint8_t
{
	EDefaultBackBufferPixelFormat__DBBPF_B8G8R8A8 = 0,
	EDefaultBackBufferPixelFormat__DBBPF_A16B16G16R16_DEPRECATED = 1,
	EDefaultBackBufferPixelFormat__DBBPF_FloatRGB_DEPRECATED = 2,
	EDefaultBackBufferPixelFormat__DBBPF_FloatRGBA = 3,
	EDefaultBackBufferPixelFormat__DBBPF_A2B10G10R10 = 4,
	EDefaultBackBufferPixelFormat__DBBPF_MAX = 5
};


// Enum Engine.EAutoExposureMethodUI
enum class FEngine_Engine_EAutoExposureMethodUI : uint8_t
{
	EAutoExposureMethodUI__AEM_Histogram = 0,
	EAutoExposureMethodUI__AEM_Basic = 1,
	EAutoExposureMethodUI__AEM_Manual = 2,
	EAutoExposureMethodUI__AEM_MAX = 3
};


// Enum Engine.EAlphaChannelMode
enum class FEngine_Engine_EAlphaChannelMode : uint8_t
{
	EAlphaChannelMode__Disabled    = 0,
	EAlphaChannelMode__LinearColorSpaceOnly = 1,
	EAlphaChannelMode__AllowThroughTonemapper = 2,
	EAlphaChannelMode__EAlphaChannelMode_MAX = 3
};


// Enum Engine.EEarlyZPass
enum class FEngine_Engine_EEarlyZPass : uint8_t
{
	EEarlyZPass__None              = 0,
	EEarlyZPass__OpaqueOnly        = 1,
	EEarlyZPass__OpaqueAndMasked   = 2,
	EEarlyZPass__Auto              = 3,
	EEarlyZPass__EEarlyZPass_MAX   = 4
};


// Enum Engine.ECustomDepthStencil
enum class FEngine_Engine_ECustomDepthStencil : uint8_t
{
	ECustomDepthStencil__Disabled  = 0,
	ECustomDepthStencil__Enabled   = 1,
	ECustomDepthStencil__EnabledOnDemand = 2,
	ECustomDepthStencil__EnabledWithStencil = 3,
	ECustomDepthStencil__ECustomDepthStencil_MAX = 4
};


// Enum Engine.EMobileMSAASampleCount
enum class FEngine_Engine_EMobileMSAASampleCount : uint8_t
{
	EMobileMSAASampleCount__One    = 0,
	EMobileMSAASampleCount__Two    = 1,
	EMobileMSAASampleCount__Four   = 2,
	EMobileMSAASampleCount__Eight  = 3,
	EMobileMSAASampleCount__EMobileMSAASampleCount_MAX = 4
};


// Enum Engine.ECompositingSampleCount
enum class FEngine_Engine_ECompositingSampleCount : uint8_t
{
	ECompositingSampleCount__One   = 0,
	ECompositingSampleCount__Two   = 1,
	ECompositingSampleCount__Four  = 2,
	ECompositingSampleCount__Eight = 3,
	ECompositingSampleCount__ECompositingSampleCount_MAX = 4
};


// Enum Engine.EClearSceneOptions
enum class FEngine_Engine_EClearSceneOptions : uint8_t
{
	EClearSceneOptions__NoClear    = 0,
	EClearSceneOptions__HardwareClear = 1,
	EClearSceneOptions__QuadAtMaxZ = 2,
	EClearSceneOptions__EClearSceneOptions_MAX = 3
};


// Enum Engine.EReporterLineStyle
enum class FEngine_Engine_EReporterLineStyle : uint8_t
{
	EReporterLineStyle__Line       = 0,
	EReporterLineStyle__Dash       = 1,
	EReporterLineStyle__EReporterLineStyle_MAX = 2
};


// Enum Engine.ELegendPosition
enum class FEngine_Engine_ELegendPosition : uint8_t
{
	ELegendPosition__Outside       = 0,
	ELegendPosition__Inside        = 1,
	ELegendPosition__ELegendPosition_MAX = 2
};


// Enum Engine.EGraphDataStyle
enum class FEngine_Engine_EGraphDataStyle : uint8_t
{
	EGraphDataStyle__Lines         = 0,
	EGraphDataStyle__Filled        = 1,
	EGraphDataStyle__EGraphDataStyle_MAX = 2
};


// Enum Engine.EGraphAxisStyle
enum class FEngine_Engine_EGraphAxisStyle : uint8_t
{
	EGraphAxisStyle__Lines         = 0,
	EGraphAxisStyle__Notches       = 1,
	EGraphAxisStyle__Grid          = 2,
	EGraphAxisStyle__EGraphAxisStyle_MAX = 3
};


// Enum Engine.ERichCurveKeyTimeCompressionFormat
enum class FEngine_Engine_ERichCurveKeyTimeCompressionFormat : uint8_t
{
	RCKTCF_uint16                  = 0,
	RCKTCF_float32                 = 1,
	RCKTCF_MAX                     = 2
};


// Enum Engine.ERichCurveCompressionFormat
enum class FEngine_Engine_ERichCurveCompressionFormat : uint8_t
{
	RCCF_Empty                     = 0,
	RCCF_Constant                  = 1,
	RCCF_Linear                    = 2,
	RCCF_Cubic                     = 3,
	RCCF_Mixed                     = 4,
	RCCF_MAX                       = 5
};


// Enum Engine.ERichCurveTangentWeightMode
enum class FEngine_Engine_ERichCurveTangentWeightMode : uint8_t
{
	RCTWM_WeightedNone             = 0,
	RCTWM_WeightedArrive           = 1,
	RCTWM_WeightedLeave            = 2,
	RCTWM_WeightedBoth             = 3,
	RCTWM_MAX                      = 4
};


// Enum Engine.ERichCurveTangentMode
enum class FEngine_Engine_ERichCurveTangentMode : uint8_t
{
	RCTM_Auto                      = 0,
	RCTM_User                      = 1,
	RCTM_Break                     = 2,
	RCTM_None                      = 3,
	RCTM_MAX                       = 4
};


// Enum Engine.EConstraintTransform
enum class FEngine_Engine_EConstraintTransform : uint8_t
{
	EConstraintTransform__Absolute = 0,
	EConstraintTransform__Relative = 1,
	EConstraintTransform__EConstraintTransform_MAX = 2
};


// Enum Engine.ESettingsDOF
enum class FEngine_Engine_ESettingsDOF : uint8_t
{
	ESettingsDOF__Full3D           = 0,
	ESettingsDOF__YZPlane          = 1,
	ESettingsDOF__XZPlane          = 2,
	ESettingsDOF__XYPlane          = 3,
	ESettingsDOF__ESettingsDOF_MAX = 4
};


// Enum Engine.ERootMotionFinishVelocityMode
enum class FEngine_Engine_ERootMotionFinishVelocityMode : uint8_t
{
	ERootMotionFinishVelocityMode__MaintainLastRootMotionVelocity = 0,
	ERootMotionFinishVelocityMode__SetVelocity = 1,
	ERootMotionFinishVelocityMode__ClampVelocity = 2,
	ERootMotionFinishVelocityMode__ERootMotionFinishVelocityMode_MAX = 3
};


// Enum Engine.ERootMotionSourceSettingsFlags
enum class FEngine_Engine_ERootMotionSourceSettingsFlags : uint8_t
{
	ERootMotionSourceSettingsFlags__UseSensitiveLiftoffCheck = 0,
	ERootMotionSourceSettingsFlags__DisablePartialEndTick = 1,
	ERootMotionSourceSettingsFlags__ERootMotionSourceSettingsFlags_MAX = 2
};


// Enum Engine.ERootMotionSourceStatusFlags
enum class FEngine_Engine_ERootMotionSourceStatusFlags : uint8_t
{
	ERootMotionSourceStatusFlags__Prepared = 0,
	ERootMotionSourceStatusFlags__Finished = 1,
	ERootMotionSourceStatusFlags__MarkedForRemoval = 2,
	ERootMotionSourceStatusFlags__ERootMotionSourceStatusFlags_MAX = 3
};


// Enum Engine.EControlConstraint
enum class FEngine_Engine_EControlConstraint : uint8_t
{
	EControlConstraint__Orientation = 0,
	EControlConstraint__Translation = 1,
	EControlConstraint__MAX        = 2
};


// Enum Engine.ERuntimeVirtualTextureDebugType
enum class FEngine_Engine_ERuntimeVirtualTextureDebugType : uint8_t
{
	ERuntimeVirtualTextureDebugType__None = 0,
	ERuntimeVirtualTextureDebugType__Debug = 1,
	ERuntimeVirtualTextureDebugType__ERuntimeVirtualTextureDebugType_MAX = 2
};


// Enum Engine.ERootMotionAccumulateMode
enum class FEngine_Engine_ERootMotionAccumulateMode : uint8_t
{
	ERootMotionAccumulateMode__Override = 0,
	ERootMotionAccumulateMode__Additive = 1,
	ERootMotionAccumulateMode__ERootMotionAccumulateMode_MAX = 2
};


// Enum Engine.ERuntimeVirtualTextureMaterialType
enum class FEngine_Engine_ERuntimeVirtualTextureMaterialType : uint8_t
{
	ERuntimeVirtualTextureMaterialType__BaseColor = 0,
	ERuntimeVirtualTextureMaterialType__BaseColor_Normal_DEPRECATED = 1,
	ERuntimeVirtualTextureMaterialType__BaseColor_Normal_Specular = 2,
	ERuntimeVirtualTextureMaterialType__BaseColor_Normal_Specular_YCoCg = 3,
	ERuntimeVirtualTextureMaterialType__WorldHeight = 4,
	ERuntimeVirtualTextureMaterialType__Count = 5,
	ERuntimeVirtualTextureMaterialType__ERuntimeVirtualTextureMaterialType_MAX = 6
};


// Enum Engine.ERuntimeVirtualTextureMainPassType
enum class FEngine_Engine_ERuntimeVirtualTextureMainPassType : uint8_t
{
	ERuntimeVirtualTextureMainPassType__Never = 0,
	ERuntimeVirtualTextureMainPassType__Exclusive = 1,
	ERuntimeVirtualTextureMainPassType__Always = 2,
	ERuntimeVirtualTextureMainPassType__ERuntimeVirtualTextureMainPassType_MAX = 3
};


// Enum Engine.ERayTracingGlobalIlluminationType
enum class FEngine_Engine_ERayTracingGlobalIlluminationType : uint8_t
{
	ERayTracingGlobalIlluminationType__Disabled = 0,
	ERayTracingGlobalIlluminationType__BruteForce = 1,
	ERayTracingGlobalIlluminationType__FinalGather = 2,
	ERayTracingGlobalIlluminationType__ERayTracingGlobalIlluminationType_MAX = 3
};


// Enum Engine.ETranslucencyType
enum class FEngine_Engine_ETranslucencyType : uint8_t
{
	ETranslucencyType__Raster      = 0,
	ETranslucencyType__RayTracing  = 1,
	ETranslucencyType__ETranslucencyType_MAX = 2
};


// Enum Engine.EReflectionsType
enum class FEngine_Engine_EReflectionsType : uint8_t
{
	EReflectionsType__ScreenSpace  = 0,
	EReflectionsType__RayTracing   = 1,
	EReflectionsType__EReflectionsType_MAX = 2
};


// Enum Engine.ELightUnits
enum class FEngine_Engine_ELightUnits : uint8_t
{
	ELightUnits__Unitless          = 0,
	ELightUnits__Candelas          = 1,
	ELightUnits__Lumens            = 2,
	ELightUnits__ELightUnits_MAX   = 3
};


// Enum Engine.EParticleSubUVInterpMethod
enum class FEngine_Engine_EParticleSubUVInterpMethod : uint8_t
{
	PSUVIM_None                    = 0,
	PSUVIM_Linear                  = 1,
	PSUVIM_Linear_Blend            = 2,
	PSUVIM_Random                  = 3,
	PSUVIM_Random_Blend            = 4,
	PSUVIM_MAX                     = 5
};


// Enum Engine.EAutoExposureMethod
enum class FEngine_Engine_EAutoExposureMethod : uint8_t
{
	AEM_Histogram                  = 0,
	AEM_Basic                      = 1,
	AEM_Manual                     = 2,
	AEM_MAX                        = 3
};


// Enum Engine.EAntiAliasingMethod
enum class FEngine_Engine_EAntiAliasingMethod : uint8_t
{
	AAM_None                       = 0,
	AAM_FXAA                       = 1,
	AAM_TemporalAA                 = 2,
	AAM_MSAA                       = 3,
	AAM_MAX                        = 4
};


// Enum Engine.EReflectedAndRefractedRayTracedShadows
enum class FEngine_Engine_EReflectedAndRefractedRayTracedShadows : uint8_t
{
	EReflectedAndRefractedRayTracedShadows__Disabled = 0,
	EReflectedAndRefractedRayTracedShadows__Hard_shadows = 1,
	EReflectedAndRefractedRayTracedShadows__Area_shadows = 2,
	EReflectedAndRefractedRayTracedShadows__EReflectedAndRefractedRayTracedShadows_MAX = 3
};


// Enum Engine.EDepthOfFieldMethod
enum class FEngine_Engine_EDepthOfFieldMethod : uint8_t
{
	DOFM_BokehDOF                  = 0,
	DOFM_Gaussian                  = 1,
	DOFM_CircleDOF                 = 2,
	DOFM_MAX                       = 3
};


// Enum Engine.ESceneCapturePrimitiveRenderMode
enum class FEngine_Engine_ESceneCapturePrimitiveRenderMode : uint8_t
{
	ESceneCapturePrimitiveRenderMode__PRM_LegacySceneCapture = 0,
	ESceneCapturePrimitiveRenderMode__PRM_RenderScenePrimitives = 1,
	ESceneCapturePrimitiveRenderMode__PRM_UseShowOnlyList = 2,
	ESceneCapturePrimitiveRenderMode__PRM_MAX = 3
};


// Enum Engine.EMaterialProperty
enum class FEngine_Engine_EMaterialProperty : uint8_t
{
	MP_EmissiveColor               = 0,
	MP_Opacity                     = 1,
	MP_OpacityMask                 = 2,
	MP_DiffuseColor                = 3,
	MP_SpecularColor               = 4,
	MP_BaseColor                   = 5,
	MP_Metallic                    = 6,
	MP_Specular                    = 7,
	MP_Roughness                   = 8,
	MP_Normal                      = 9,
	MP_WorldPositionOffset         = 10,
	MP_WorldDisplacement           = 11,
	MP_TessellationMultiplier      = 12,
	MP_SubsurfaceColor             = 13,
	MP_CustomData0                 = 14,
	MP_CustomData1                 = 15,
	MP_AmbientOcclusion            = 16,
	MP_Refraction                  = 17,
	MP_CustomizedUVs0              = 18,
	MP_CustomizedUVs1              = 19,
	MP_CustomizedUVs2              = 20,
	MP_CustomizedUVs3              = 21,
	MP_CustomizedUVs4              = 22,
	MP_CustomizedUVs5              = 23,
	MP_CustomizedUVs6              = 24,
	MP_CustomizedUVs7              = 25,
	MP_PixelDepthOffset            = 26,
	MP_ShadingModel                = 27,
	MP_MaterialAttributes          = 28,
	MP_CustomOutput                = 29,
	MP_MAX                         = 30
};


// Enum Engine.EPhysicsTransformUpdateMode
enum class FEngine_Engine_EPhysicsTransformUpdateMode : uint8_t
{
	EPhysicsTransformUpdateMode__SimulationUpatesComponentTransform = 0,
	EPhysicsTransformUpdateMode__ComponentTransformIsKinematic = 1,
	EPhysicsTransformUpdateMode__EPhysicsTransformUpdateMode_MAX = 2
};


// Enum Engine.EAnimationMode
enum class FEngine_Engine_EAnimationMode : uint8_t
{
	EAnimationMode__AnimationBlueprint = 0,
	EAnimationMode__AnimationSingleNode = 1,
	EAnimationMode__AnimationCustomMode = 2,
	EAnimationMode__EAnimationMode_MAX = 3
};


// Enum Engine.EKinematicBonesUpdateToPhysics
enum class FEngine_Engine_EKinematicBonesUpdateToPhysics : uint8_t
{
	EKinematicBonesUpdateToPhysics__SkipSimulatingBones = 0,
	EKinematicBonesUpdateToPhysics__SkipAllBones = 1,
	EKinematicBonesUpdateToPhysics__EKinematicBonesUpdateToPhysics_MAX = 2
};


// Enum Engine.EBloomMethod
enum class FEngine_Engine_EBloomMethod : uint8_t
{
	BM_SOG                         = 0,
	BM_FFT                         = 1,
	BM_MAX                         = 2
};


// Enum Engine.EClothMassMode
enum class FEngine_Engine_EClothMassMode : uint8_t
{
	EClothMassMode__UniformMass    = 0,
	EClothMassMode__TotalMass      = 1,
	EClothMassMode__Density        = 2,
	EClothMassMode__MaxClothMassMode = 3,
	EClothMassMode__EClothMassMode_MAX = 4
};


// Enum Engine.ESkeletalMeshGeoImportVersions
enum class FEngine_Engine_ESkeletalMeshGeoImportVersions : uint8_t
{
	ESkeletalMeshGeoImportVersions__Before_Versionning = 0,
	ESkeletalMeshGeoImportVersions__SkeletalMeshBuildRefactor = 1,
	ESkeletalMeshGeoImportVersions__VersionPlusOne = 2,
	ESkeletalMeshGeoImportVersions__LatestVersion = 3,
	ESkeletalMeshGeoImportVersions__ESkeletalMeshGeoImportVersions_MAX = 4
};


// Enum Engine.EBoneFilterActionOption
enum class FEngine_Engine_EBoneFilterActionOption : uint8_t
{
	EBoneFilterActionOption__Remove = 0,
	EBoneFilterActionOption__Keep  = 1,
	EBoneFilterActionOption__Invalid = 2,
	EBoneFilterActionOption__EBoneFilterActionOption_MAX = 3
};


// Enum Engine.SkeletalMeshOptimizationImportance
enum class FEngine_Engine_ESkeletalMeshOptimizationImportance : uint8_t
{
	SMOI_Off                       = 0,
	SMOI_Lowest                    = 1,
	SMOI_Low                       = 2,
	SMOI_Normal                    = 3,
	SMOI_High                      = 4,
	SMOI_Highest                   = 5,
	SMOI_MAX                       = 6
};


// Enum Engine.SkeletalMeshTerminationCriterion
enum class FEngine_Engine_ESkeletalMeshTerminationCriterion : uint8_t
{
	SMTC_NumOfTriangles            = 0,
	SMTC_NumOfVerts                = 1,
	SMTC_TriangleOrVert            = 2,
	SMTC_AbsNumOfTriangles         = 3,
	SMTC_AbsNumOfVerts             = 4,
	SMTC_AbsTriangleOrVert         = 5,
	SMTC_MAX                       = 6
};


// Enum Engine.EBoneTranslationRetargetingMode
enum class FEngine_Engine_EBoneTranslationRetargetingMode : uint8_t
{
	EBoneTranslationRetargetingMode__Animation = 0,
	EBoneTranslationRetargetingMode__Skeleton = 1,
	EBoneTranslationRetargetingMode__AnimationScaled = 2,
	EBoneTranslationRetargetingMode__AnimationRelative = 3,
	EBoneTranslationRetargetingMode__OrientAndScale = 4,
	EBoneTranslationRetargetingMode__EBoneTranslationRetargetingMode_MAX = 5
};


// Enum Engine.EBoneSpaces
enum class FEngine_Engine_EBoneSpaces : uint8_t
{
	EBoneSpaces__WorldSpace        = 0,
	EBoneSpaces__ComponentSpace    = 1,
	EBoneSpaces__EBoneSpaces_MAX   = 2
};


// Enum Engine.EAnimCurveType
enum class FEngine_Engine_EAnimCurveType : uint8_t
{
	EAnimCurveType__AttributeCurve = 0,
	EAnimCurveType__MaterialCurve  = 1,
	EAnimCurveType__MorphTargetCurve = 2,
	EAnimCurveType__MaxAnimCurveType = 3,
	EAnimCurveType__EAnimCurveType_MAX = 4
};


// Enum Engine.EPhysBodyOp
enum class FEngine_Engine_EPhysBodyOp : uint8_t
{
	PBO_None                       = 0,
	PBO_Term                       = 1,
	PBO_MAX                        = 2
};


// Enum Engine.EBoneVisibilityStatus
enum class FEngine_Engine_EBoneVisibilityStatus : uint8_t
{
	BVS_HiddenByParent             = 0,
	BVS_Visible                    = 1,
	BVS_ExplicitlyHidden           = 2,
	BVS_MAX                        = 3
};


// Enum Engine.SkeletalMeshOptimizationType
enum class FEngine_Engine_ESkeletalMeshOptimizationType : uint8_t
{
	SMOT_NumOfTriangles            = 0,
	SMOT_MaxDeviation              = 1,
	SMOT_TriangleOrDeviation       = 2,
	SMOT_MAX                       = 3
};


// Enum Engine.EAirAbsorptionMethod
enum class FEngine_Engine_EAirAbsorptionMethod : uint8_t
{
	EAirAbsorptionMethod__Linear   = 0,
	EAirAbsorptionMethod__CustomCurve = 1,
	EAirAbsorptionMethod__EAirAbsorptionMethod_MAX = 2
};


// Enum Engine.ESoundSpatializationAlgorithm
enum class FEngine_Engine_ESoundSpatializationAlgorithm : uint8_t
{
	SPATIALIZATION_Default         = 0,
	SPATIALIZATION_HRTF            = 1,
	SPATIALIZATION_MAX             = 2
};


// Enum Engine.ESoundDistanceCalc
enum class FEngine_Engine_ESoundDistanceCalc : uint8_t
{
	SOUNDDISTANCE_Normal           = 0,
	SOUNDDISTANCE_InfiniteXYPlane  = 1,
	SOUNDDISTANCE_InfiniteXZPlane  = 2,
	SOUNDDISTANCE_InfiniteYZPlane  = 3,
	SOUNDDISTANCE_MAX              = 4
};


// Enum Engine.ESkyLightSourceType
enum class FEngine_Engine_ESkyLightSourceType : uint8_t
{
	SLS_CapturedScene              = 0,
	SLS_SpecifiedCubemap           = 1,
	SLS_MAX                        = 2
};


// Enum Engine.ESoundWaveLoadingBehavior
enum class FEngine_Engine_ESoundWaveLoadingBehavior : uint8_t
{
	ESoundWaveLoadingBehavior__Inherited = 0,
	ESoundWaveLoadingBehavior__RetainOnLoad = 1,
	ESoundWaveLoadingBehavior__PrimeOnLoad = 2,
	ESoundWaveLoadingBehavior__LoadOnDemand = 3,
	ESoundWaveLoadingBehavior__ForceInline = 4,
	ESoundWaveLoadingBehavior__Uninitialized = 5,
	ESoundWaveLoadingBehavior__ESoundWaveLoadingBehavior_MAX = 6
};


// Enum Engine.EAudioOutputTarget
enum class FEngine_Engine_EAudioOutputTarget : uint8_t
{
	EAudioOutputTarget__Speaker    = 0,
	EAudioOutputTarget__Controller = 1,
	EAudioOutputTarget__ControllerFallbackToSpeaker = 2,
	EAudioOutputTarget__EAudioOutputTarget_MAX = 3
};


// Enum Engine.EMaxConcurrentResolutionRule
enum class FEngine_Engine_EMaxConcurrentResolutionRule : uint8_t
{
	EMaxConcurrentResolutionRule__PreventNew = 0,
	EMaxConcurrentResolutionRule__StopOldest = 1,
	EMaxConcurrentResolutionRule__StopFarthestThenPreventNew = 2,
	EMaxConcurrentResolutionRule__StopFarthestThenOldest = 3,
	EMaxConcurrentResolutionRule__StopLowestPriority = 4,
	EMaxConcurrentResolutionRule__StopQuietest = 5,
	EMaxConcurrentResolutionRule__StopLowestPriorityThenPreventNew = 6,
	EMaxConcurrentResolutionRule__EMaxConcurrentResolutionRule_MAX = 7
};


// Enum Engine.ESoundGroup
enum class FEngine_Engine_ESoundGroup : uint8_t
{
	SOUNDGROUP_Default             = 0,
	SOUNDGROUP_Effects             = 1,
	SOUNDGROUP_UI                  = 2,
	SOUNDGROUP_Music               = 3,
	SOUNDGROUP_Voice               = 4,
	SOUNDGROUP_GameSoundGroup1     = 5,
	SOUNDGROUP_GameSoundGroup2     = 6,
	SOUNDGROUP_GameSoundGroup3     = 7,
	SOUNDGROUP_GameSoundGroup4     = 8,
	SOUNDGROUP_GameSoundGroup5     = 9,
	SOUNDGROUP_GameSoundGroup6     = 10,
	SOUNDGROUP_GameSoundGroup7     = 11,
	SOUNDGROUP_GameSoundGroup8     = 12,
	SOUNDGROUP_GameSoundGroup9     = 13,
	SOUNDGROUP_GameSoundGroup10    = 14,
	SOUNDGROUP_GameSoundGroup11    = 15,
	SOUNDGROUP_GameSoundGroup12    = 16,
	SOUNDGROUP_GameSoundGroup13    = 17,
	SOUNDGROUP_GameSoundGroup14    = 18,
	SOUNDGROUP_GameSoundGroup15    = 19,
	SOUNDGROUP_GameSoundGroup16    = 20,
	SOUNDGROUP_GameSoundGroup17    = 21,
	SOUNDGROUP_GameSoundGroup18    = 22,
	SOUNDGROUP_GameSoundGroup19    = 23,
	SOUNDGROUP_GameSoundGroup20    = 24,
	SOUNDGROUP_MAX                 = 25
};


// Enum Engine.ModulationParamMode
enum class FEngine_Engine_EModulationParamMode : uint8_t
{
	MPM_Normal                     = 0,
	MPM_Abs                        = 1,
	MPM_Direct                     = 2,
	MPM_MAX                        = 3
};


// Enum Engine.ESourceBusChannels
enum class FEngine_Engine_ESourceBusChannels : uint8_t
{
	ESourceBusChannels__Mono       = 0,
	ESourceBusChannels__Stereo     = 1,
	ESourceBusChannels__ESourceBusChannels_MAX = 2
};


// Enum Engine.ESourceBusSendLevelControlMethod
enum class FEngine_Engine_ESourceBusSendLevelControlMethod : uint8_t
{
	ESourceBusSendLevelControlMethod__Linear = 0,
	ESourceBusSendLevelControlMethod__CustomCurve = 1,
	ESourceBusSendLevelControlMethod__Manual = 2,
	ESourceBusSendLevelControlMethod__ESourceBusSendLevelControlMethod_MAX = 3
};


// Enum Engine.ESubmixChannelFormat
enum class FEngine_Engine_ESubmixChannelFormat : uint8_t
{
	ESubmixChannelFormat__Device   = 0,
	ESubmixChannelFormat__Stereo   = 1,
	ESubmixChannelFormat__Quad     = 2,
	ESubmixChannelFormat__FiveDotOne = 3,
	ESubmixChannelFormat__SevenDotOne = 4,
	ESubmixChannelFormat__Ambisonics = 5,
	ESubmixChannelFormat__Count    = 6,
	ESubmixChannelFormat__ESubmixChannelFormat_MAX = 7
};


// Enum Engine.ESendLevelControlMethod
enum class FEngine_Engine_ESendLevelControlMethod : uint8_t
{
	ESendLevelControlMethod__Linear = 0,
	ESendLevelControlMethod__CustomCurve = 1,
	ESendLevelControlMethod__Manual = 2,
	ESendLevelControlMethod__ESendLevelControlMethod_MAX = 3
};


// Enum Engine.EAudioRecordingExportType
enum class FEngine_Engine_EAudioRecordingExportType : uint8_t
{
	EAudioRecordingExportType__SoundWave = 0,
	EAudioRecordingExportType__WavFile = 1,
	EAudioRecordingExportType__EAudioRecordingExportType_MAX = 2
};


// Enum Engine.ESoundWaveFFTSize
enum class FEngine_Engine_ESoundWaveFFTSize : uint8_t
{
	ESoundWaveFFTSize__VerySmall   = 0,
	ESoundWaveFFTSize__Small       = 1,
	ESoundWaveFFTSize__Medium      = 2,
	ESoundWaveFFTSize__Large       = 3,
	ESoundWaveFFTSize__VeryLarge   = 4,
	ESoundWaveFFTSize__ESoundWaveFFTSize_MAX = 5
};


// Enum Engine.EVisibilityBasedAnimTickOption
enum class FEngine_Engine_EVisibilityBasedAnimTickOption : uint8_t
{
	EVisibilityBasedAnimTickOption__AlwaysTickPoseAndRefreshBones = 0,
	EVisibilityBasedAnimTickOption__AlwaysTickPose = 1,
	EVisibilityBasedAnimTickOption__OnlyTickMontagesWhenNotRendered = 2,
	EVisibilityBasedAnimTickOption__OnlyTickPoseWhenRendered = 3,
	EVisibilityBasedAnimTickOption__EVisibilityBasedAnimTickOption_MAX = 4
};


// Enum Engine.EDecompressionType
enum class FEngine_Engine_EDecompressionType : uint8_t
{
	DTYPE_Setup                    = 0,
	DTYPE_Invalid                  = 1,
	DTYPE_Preview                  = 2,
	DTYPE_Native                   = 3,
	DTYPE_RealTime                 = 4,
	DTYPE_Procedural               = 5,
	DTYPE_Xenon                    = 6,
	DTYPE_Streaming                = 7,
	DTYPE_MAX                      = 8
};


// Enum Engine.ESplinePointType
enum class FEngine_Engine_ESplinePointType : uint8_t
{
	ESplinePointType__Linear       = 0,
	ESplinePointType__Curve        = 1,
	ESplinePointType__Constant     = 2,
	ESplinePointType__CurveClamped = 3,
	ESplinePointType__CurveCustomTangent = 4,
	ESplinePointType__ESplinePointType_MAX = 5
};


// Enum Engine.ESplineMeshAxis
enum class FEngine_Engine_ESplineMeshAxis : uint8_t
{
	ESplineMeshAxis__X             = 0,
	ESplineMeshAxis__Y             = 1,
	ESplineMeshAxis__Z             = 2,
	ESplineMeshAxis__ESplineMeshAxis_MAX = 3
};


// Enum Engine.ESplineCoordinateSpace
enum class FEngine_Engine_ESplineCoordinateSpace : uint8_t
{
	ESplineCoordinateSpace__Local  = 0,
	ESplineCoordinateSpace__World  = 1,
	ESplineCoordinateSpace__ESplineCoordinateSpace_MAX = 2
};


// Enum Engine.EImportanceLevel
enum class FEngine_Engine_EImportanceLevel : uint8_t
{
	IL_Off                         = 0,
	IL_Lowest                      = 1,
	IL_Low                         = 2,
	IL_Normal                      = 3,
	IL_High                        = 4,
	IL_Highest                     = 5,
	TEMP_BROKEN2                   = 6,
	EImportanceLevel_MAX           = 7
};


// Enum Engine.ENormalMode
enum class FEngine_Engine_ENormalMode : uint8_t
{
	NM_PreserveSmoothingGroups     = 0,
	NM_RecalculateNormals          = 1,
	NM_RecalculateNormalsSmooth    = 2,
	NM_RecalculateNormalsHard      = 3,
	TEMP_BROKEN                    = 4,
	ENormalMode_MAX                = 5
};


// Enum Engine.EStereoLayerShape
enum class FEngine_Engine_EStereoLayerShape : uint8_t
{
	SLSH_QuadLayer                 = 0,
	SLSH_CylinderLayer             = 1,
	SLSH_CubemapLayer              = 2,
	SLSH_EquirectLayer             = 3,
	SLSH_MAX                       = 4
};


// Enum Engine.EStereoLayerType
enum class FEngine_Engine_EStereoLayerType : uint8_t
{
	SLT_WorldLocked                = 0,
	SLT_TrackerLocked              = 1,
	SLT_FaceLocked                 = 2,
	SLT_MAX                        = 3
};


// Enum Engine.EOpacitySourceMode
enum class FEngine_Engine_EOpacitySourceMode : uint8_t
{
	OSM_Alpha                      = 0,
	OSM_ColorBrightness            = 1,
	OSM_RedChannel                 = 2,
	OSM_GreenChannel               = 3,
	OSM_BlueChannel                = 4,
	OSM_MAX                        = 5
};


// Enum Engine.ESubUVBoundingVertexCount
enum class FEngine_Engine_ESubUVBoundingVertexCount : uint8_t
{
	BVC_FourVertices               = 0,
	BVC_EightVertices              = 1,
	BVC_MAX                        = 2
};


// Enum Engine.EVirtualizationMode
enum class FEngine_Engine_EVirtualizationMode : uint8_t
{
	EVirtualizationMode__Disabled  = 0,
	EVirtualizationMode__PlayWhenSilent = 1,
	EVirtualizationMode__Restart   = 2,
	EVirtualizationMode__EVirtualizationMode_MAX = 3
};


// Enum Engine.EVerticalTextAligment
enum class FEngine_Engine_EVerticalTextAligment : uint8_t
{
	EVRTA_TextTop                  = 0,
	EVRTA_TextCenter               = 1,
	EVRTA_TextBottom               = 2,
	EVRTA_QuadTop                  = 3,
	EVRTA_MAX                      = 4
};


// Enum Engine.EReverbSendMethod
enum class FEngine_Engine_EReverbSendMethod : uint8_t
{
	EReverbSendMethod__Linear      = 0,
	EReverbSendMethod__CustomCurve = 1,
	EReverbSendMethod__Manual      = 2,
	EReverbSendMethod__EReverbSendMethod_MAX = 3
};


// Enum Engine.EHorizTextAligment
enum class FEngine_Engine_EHorizTextAligment : uint8_t
{
	EHTA_Left                      = 0,
	EHTA_Center                    = 1,
	EHTA_Right                     = 2,
	EHTA_MAX                       = 3
};


// Enum Engine.ETextureLossyCompressionAmount
enum class FEngine_Engine_ETextureLossyCompressionAmount : uint8_t
{
	TLCA_Default                   = 0,
	TLCA_None                      = 1,
	TLCA_Lowest                    = 2,
	TLCA_Low                       = 3,
	TLCA_Medium                    = 4,
	TLCA_High                      = 5,
	TLCA_Highest                   = 6,
	TLCA_MAX                       = 7
};


// Enum Engine.ETextureCompressionQuality
enum class FEngine_Engine_ETextureCompressionQuality : uint8_t
{
	TCQ_Default                    = 0,
	TCQ_Lowest                     = 1,
	TCQ_Low                        = 2,
	TCQ_Medium                     = 3,
	TCQ_High                       = 4,
	TCQ_Highest                    = 5,
	TCQ_MAX                        = 6
};


// Enum Engine.ETextureSourceFormat
enum class FEngine_Engine_ETextureSourceFormat : uint8_t
{
	TSF_Invalid                    = 0,
	TSF_G8                         = 1,
	TSF_BGRA8                      = 2,
	TSF_BGRE8                      = 3,
	TSF_RGBA16                     = 4,
	TSF_RGBA16F                    = 5,
	TSF_RGBA8                      = 6,
	TSF_RGBE8                      = 7,
	TSF_G16                        = 8,
	TSF_MAX                        = 9
};


// Enum Engine.ETextureSourceArtType
enum class FEngine_Engine_ETextureSourceArtType : uint8_t
{
	TSAT_Uncompressed              = 0,
	TSAT_PNGCompressed             = 1,
	TSAT_DDSFile                   = 2,
	TSAT_MAX                       = 3
};


// Enum Engine.ETextureMipCount
enum class FEngine_Engine_ETextureMipCount : uint8_t
{
	TMC_ResidentMips               = 0,
	TMC_AllMips                    = 1,
	TMC_AllMipsBiased              = 2,
	TMC_MAX                        = 3
};


// Enum Engine.ECompositeTextureMode
enum class FEngine_Engine_ECompositeTextureMode : uint8_t
{
	CTM_Disabled                   = 0,
	CTM_NormalRoughnessToRed       = 1,
	CTM_NormalRoughnessToGreen     = 2,
	CTM_NormalRoughnessToBlue      = 3,
	CTM_NormalRoughnessToAlpha     = 4,
	CTM_MAX                        = 5
};


// Enum Engine.TextureAddress
enum class FEngine_Engine_ETextureAddress : uint8_t
{
	TA_Wrap                        = 0,
	TA_Clamp                       = 1,
	TA_Mirror                      = 2,
	TA_MAX                         = 3
};


// Enum Engine.EOptimizationType
enum class FEngine_Engine_EOptimizationType : uint8_t
{
	OT_NumOfTriangles              = 0,
	OT_MaxDeviation                = 1,
	OT_MAX                         = 2
};


// Enum Engine.TextureFilter
enum class FEngine_Engine_ETextureFilter : uint8_t
{
	TF_Nearest                     = 0,
	TF_Bilinear                    = 1,
	TF_Trilinear                   = 2,
	TF_Default                     = 3,
	TF_MAX                         = 4
};


// Enum Engine.ETextureMipLoadOptions
enum class FEngine_Engine_ETextureMipLoadOptions : uint8_t
{
	ETextureMipLoadOptions__Default = 0,
	ETextureMipLoadOptions__AllMips = 1,
	ETextureMipLoadOptions__OnlyFirstMip = 2,
	ETextureMipLoadOptions__ETextureMipLoadOptions_MAX = 3
};


// Enum Engine.ETextureSamplerFilter
enum class FEngine_Engine_ETextureSamplerFilter : uint8_t
{
	ETextureSamplerFilter__Point   = 0,
	ETextureSamplerFilter__Bilinear = 1,
	ETextureSamplerFilter__Trilinear = 2,
	ETextureSamplerFilter__AnisotropicPoint = 3,
	ETextureSamplerFilter__AnisotropicLinear = 4,
	ETextureSamplerFilter__ETextureSamplerFilter_MAX = 5
};


// Enum Engine.ETexturePowerOfTwoSetting
enum class FEngine_Engine_ETexturePowerOfTwoSetting : uint8_t
{
	ETexturePowerOfTwoSetting__None = 0,
	ETexturePowerOfTwoSetting__PadToPowerOfTwo = 1,
	ETexturePowerOfTwoSetting__PadToSquarePowerOfTwo = 2,
	ETexturePowerOfTwoSetting__ETexturePowerOfTwoSetting_MAX = 3
};


// Enum Engine.TextureGroup
enum class FEngine_Engine_ETextureGroup : uint8_t
{
	TEXTUREGROUP_World             = 0,
	TEXTUREGROUP_WorldNormalMap    = 1,
	TEXTUREGROUP_WorldSpecular     = 2,
	TEXTUREGROUP_Character         = 3,
	TEXTUREGROUP_CharacterNormalMap = 4,
	TEXTUREGROUP_CharacterSpecular = 5,
	TEXTUREGROUP_Weapon            = 6,
	TEXTUREGROUP_WeaponNormalMap   = 7,
	TEXTUREGROUP_WeaponSpecular    = 8,
	TEXTUREGROUP_Vehicle           = 9,
	TEXTUREGROUP_VehicleNormalMap  = 10,
	TEXTUREGROUP_VehicleSpecular   = 11,
	TEXTUREGROUP_Cinematic         = 12,
	TEXTUREGROUP_Effects           = 13,
	TEXTUREGROUP_EffectsNotFiltered = 14,
	TEXTUREGROUP_Skybox            = 15,
	TEXTUREGROUP_UI                = 16,
	TEXTUREGROUP_Lightmap          = 17,
	TEXTUREGROUP_RenderTarget      = 18,
	TEXTUREGROUP_MobileFlattened   = 19,
	TEXTUREGROUP_ProcBuilding_Face = 20,
	TEXTUREGROUP_ProcBuilding_LightMap = 21,
	TEXTUREGROUP_Shadowmap         = 22,
	TEXTUREGROUP_ColorLookupTable  = 23,
	TEXTUREGROUP_Terrain_Heightmap = 24,
	TEXTUREGROUP_Terrain_Weightmap = 25,
	TEXTUREGROUP_Bokeh             = 26,
	TEXTUREGROUP_IESLightProfile   = 27,
	TEXTUREGROUP_Pixels2D          = 28,
	TEXTUREGROUP_HierarchicalLOD   = 29,
	TEXTUREGROUP_Impostor          = 30,
	TEXTUREGROUP_ImpostorNormalDepth = 31,
	TEXTUREGROUP_8BitData          = 32,
	TEXTUREGROUP_16BitData         = 33,
	TEXTUREGROUP_Project01         = 34,
	TEXTUREGROUP_Project02         = 35,
	TEXTUREGROUP_Project03         = 36,
	TEXTUREGROUP_Project04         = 37,
	TEXTUREGROUP_Project05         = 38,
	TEXTUREGROUP_Project06         = 39,
	TEXTUREGROUP_Project07         = 40,
	TEXTUREGROUP_Project08         = 41,
	TEXTUREGROUP_Project09         = 42,
	TEXTUREGROUP_Project10         = 43,
	TEXTUREGROUP_Character_Low_C   = 44,
	TEXTUREGROUP_Character_Low_N   = 45,
	TEXTUREGROUP_Character_Low_S   = 46,
	TEXTUREGROUP_World_Low_C       = 47,
	TEXTUREGROUP_World_Low_N       = 48,
	TEXTUREGROUP_World_Low_S       = 49,
	TEXTUREGROUP_UI_Low            = 50,
	TEXTUREGROUP_Effects_Low       = 51,
	TEXTUREGROUP_MAX               = 52
};


// Enum Engine.ETimecodeProviderSynchronizationState
enum class FEngine_Engine_ETimecodeProviderSynchronizationState : uint8_t
{
	ETimecodeProviderSynchronizationState__Closed = 0,
	ETimecodeProviderSynchronizationState__Error = 1,
	ETimecodeProviderSynchronizationState__Synchronized = 2,
	ETimecodeProviderSynchronizationState__Synchronizing = 3,
	ETimecodeProviderSynchronizationState__ETimecodeProviderSynchronizationState_MAX = 4
};


// Enum Engine.TextureMipGenSettings
enum class FEngine_Engine_ETextureMipGenSettings : uint8_t
{
	TMGS_FromTextureGroup          = 0,
	TMGS_SimpleAverage             = 1,
	TMGS_Sharpen0                  = 2,
	TMGS_Sharpen1                  = 3,
	TMGS_Sharpen2                  = 4,
	TMGS_Sharpen3                  = 5,
	TMGS_Sharpen4                  = 6,
	TMGS_Sharpen5                  = 7,
	TMGS_Sharpen6                  = 8,
	TMGS_Sharpen7                  = 9,
	TMGS_Sharpen8                  = 10,
	TMGS_Sharpen9                  = 11,
	TMGS_Sharpen10                 = 12,
	TMGS_NoMipmaps                 = 13,
	TMGS_LeaveExistingMips         = 14,
	TMGS_Blur1                     = 15,
	TMGS_Blur2                     = 16,
	TMGS_Blur3                     = 17,
	TMGS_Blur4                     = 18,
	TMGS_Blur5                     = 19,
	TMGS_Unfiltered                = 20,
	TMGS_MAX                       = 21
};


// Enum Engine.ETimelineLengthMode
enum class FEngine_Engine_ETimelineLengthMode : uint8_t
{
	TL_TimelineLength              = 0,
	TL_LastKeyFrame                = 1,
	TL_MAX                         = 2
};


// Enum Engine.ETimeStretchCurveMapping
enum class FEngine_Engine_ETimeStretchCurveMapping : uint8_t
{
	ETimeStretchCurveMapping__T_Original = 0,
	ETimeStretchCurveMapping__T_TargetMin = 1,
	ETimeStretchCurveMapping__T_TargetMax = 2,
	ETimeStretchCurveMapping__MAX  = 3
};


// Enum Engine.ETimelineDirection
enum class FEngine_Engine_ETimelineDirection : uint8_t
{
	ETimelineDirection__Forward    = 0,
	ETimelineDirection__Backward   = 1,
	ETimelineDirection__ETimelineDirection_MAX = 2
};


// Enum Engine.ETwitterIntegrationDelegate
enum class FEngine_Engine_ETwitterIntegrationDelegate : uint8_t
{
	TID_AuthorizeComplete          = 0,
	TID_TweetUIComplete            = 1,
	TID_RequestComplete            = 2,
	TID_MAX                        = 3
};


// Enum Engine.ETextureRenderTargetFormat
enum class FEngine_Engine_ETextureRenderTargetFormat : uint8_t
{
	RTF_R8                         = 0,
	RTF_RG8                        = 1,
	RTF_RGBA8                      = 2,
	RTF_RGBA8_SRGB                 = 3,
	RTF_R16f                       = 4,
	RTF_RG16f                      = 5,
	RTF_RGBA16f                    = 6,
	RTF_R32f                       = 7,
	RTF_RG32f                      = 8,
	RTF_RGBA32f                    = 9,
	RTF_RGB10A2                    = 10,
	RTF_MAX                        = 11
};


// Enum Engine.ETwitterRequestMethod
enum class FEngine_Engine_ETwitterRequestMethod : uint8_t
{
	TRM_Get                        = 0,
	TRM_Post                       = 1,
	TRM_Delete                     = 2,
	TRM_MAX                        = 3
};


// Enum Engine.EUserDefinedStructureStatus
enum class FEngine_Engine_EUserDefinedStructureStatus : uint8_t
{
	UDSS_UpToDate                  = 0,
	UDSS_Dirty                     = 1,
	UDSS_Error                     = 2,
	UDSS_Duplicate                 = 3,
	UDSS_MAX                       = 4
};


// Enum Engine.EUIScalingRule
enum class FEngine_Engine_EUIScalingRule : uint8_t
{
	EUIScalingRule__ShortestSide   = 0,
	EUIScalingRule__LongestSide    = 1,
	EUIScalingRule__Horizontal     = 2,
	EUIScalingRule__Vertical       = 3,
	EUIScalingRule__Custom         = 4,
	EUIScalingRule__EUIScalingRule_MAX = 5
};


// Enum Engine.ERenderFocusRule
enum class FEngine_Engine_ERenderFocusRule : uint8_t
{
	ERenderFocusRule__Always       = 0,
	ERenderFocusRule__NonPointer   = 1,
	ERenderFocusRule__NavigationOnly = 2,
	ERenderFocusRule__Never        = 3,
	ERenderFocusRule__ERenderFocusRule_MAX = 4
};


// Enum Engine.EWindSourceType
enum class FEngine_Engine_EWindSourceType : uint8_t
{
	EWindSourceType__Directional   = 0,
	EWindSourceType__Point         = 1,
	EWindSourceType__EWindSourceType_MAX = 2
};


// Enum Engine.EPSCPoolMethod
enum class FEngine_Engine_EPSCPoolMethod : uint8_t
{
	EPSCPoolMethod__None           = 0,
	EPSCPoolMethod__AutoRelease    = 1,
	EPSCPoolMethod__ManualRelease  = 2,
	EPSCPoolMethod__ManualRelease_OnComplete = 3,
	EPSCPoolMethod__FreeInPool     = 4,
	EPSCPoolMethod__EPSCPoolMethod_MAX = 5
};


// Enum Engine.EVolumeLightingMethod
enum class FEngine_Engine_EVolumeLightingMethod : uint8_t
{
	VLM_VolumetricLightmap         = 0,
	VLM_SparseVolumeLightingSamples = 1,
	VLM_MAX                        = 2
};


// Enum Engine.EVisibilityAggressiveness
enum class FEngine_Engine_EVisibilityAggressiveness : uint8_t
{
	VIS_LeastAggressive            = 0,
	VIS_ModeratelyAggressive       = 1,
	VIS_MostAggressive             = 2,
	VIS_Max                        = 3
};


// Enum Engine.EVectorFieldConstructionOp
enum class FEngine_Engine_EVectorFieldConstructionOp : uint8_t
{
	VFCO_Extrude                   = 0,
	VFCO_Revolve                   = 1,
	VFCO_MAX                       = 2
};


// Enum Engine.ESkeletalMeshSkinningImportVersions
enum class FEngine_Engine_ESkeletalMeshSkinningImportVersions : uint8_t
{
	ESkeletalMeshSkinningImportVersions__Before_Versionning = 0,
	ESkeletalMeshSkinningImportVersions__SkeletalMeshBuildRefactor = 1,
	ESkeletalMeshSkinningImportVersions__VersionPlusOne = 2,
	ESkeletalMeshSkinningImportVersions__LatestVersion = 3,
	ESkeletalMeshSkinningImportVersions__ESkeletalMeshSkinningImportVersions_MAX = 4
};


// Enum Engine.TextureCompressionSettings
enum class FEngine_Engine_ETextureCompressionSettings : uint8_t
{
	TC_Default                     = 0,
	TC_Normalmap                   = 1,
	TC_Masks                       = 2,
	TC_Grayscale                   = 3,
	TC_Displacementmap             = 4,
	TC_VectorDisplacementmap       = 5,
	TC_HDR                         = 6,
	TC_EditorIcon                  = 7,
	TC_Alpha                       = 8,
	TC_DistanceFieldFont           = 9,
	TC_HDR_Compressed              = 10,
	TC_BC7                         = 11,
	TC_MAX                         = 12
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Engine.TickFunction
// 0x0028
struct FEngine_TickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TEnumAsByte<FEngine_Engine_ETickingGroup>          TickGroup;                                                // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ETickingGroup>          EndTickGroup;                                             // 0x0009(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bTickEvenWhenPaused : 1;                                  // 0x000A(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bCanEverTick : 1;                                         // 0x000A(0x0001)
	unsigned char                                      bStartWithTickEnabled : 1;                                // 0x000A(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bAllowTickOnDedicatedServer : 1;                          // 0x000A(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x1];                                       // 0x000B(0x0001) MISSED OFFSET
	float                                              TickInterval;                                             // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0010(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.ActorTickFunction
// 0x0008 (0x0030 - 0x0028)
struct FEngine_ActorTickFunction : public FEngine_TickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.RepMovement
// 0x0034
struct FEngine_RepMovement
{
	struct FVector                                     LinearVelocity;                                           // 0x0000(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     AngularVelocity;                                          // 0x000C(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0018(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0024(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bSimulatedPhysicSleep : 1;                                // 0x0030(0x0001) (Transient)
	unsigned char                                      bRepPhysics : 1;                                          // 0x0030(0x0001) (Transient)
	FEngine_Engine_EVectorQuantization                 LocationQuantizationLevel;                                // 0x0031(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FEngine_Engine_EVectorQuantization                 VelocityQuantizationLevel;                                // 0x0032(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FEngine_Engine_ERotatorQuantization                RotationQuantizationLevel;                                // 0x0033(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Engine.Vector_NetQuantize100
// 0x0000 (0x000C - 0x000C)
struct FEngine_Vector_NetQuantize100 : public FVector
{

};

// ScriptStruct Engine.RepAttachment
// 0x0040
struct FEngine_RepAttachment
{
	class AEngine_Actor*                               AttachParent;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FEngine_Vector_NetQuantize100               LocationOffset;                                           // 0x0008(0x000C)
	struct FEngine_Vector_NetQuantize100               RelativeScale3D;                                          // 0x0014(0x000C)
	struct FRotator                                    RotationOffset;                                           // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FName                                       AttachSocket;                                             // 0x002C(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	class UEngine_SceneComponent*                      AttachComponent;                                          // 0x0038(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct Engine.Vector_NetQuantize
// 0x0000 (0x000C - 0x000C)
struct FEngine_Vector_NetQuantize : public FVector
{

};

// ScriptStruct Engine.Vector_NetQuantizeNormal
// 0x0000 (0x000C - 0x000C)
struct FEngine_Vector_NetQuantizeNormal : public FVector
{

};

// ScriptStruct Engine.HitResult
// 0x0088
struct FEngine_HitResult
{
	unsigned char                                      bBlockingHit : 1;                                         // 0x0000(0x0001)
	unsigned char                                      bStartPenetrating : 1;                                    // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                FaceIndex;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FEngine_Vector_NetQuantize                  Location;                                                 // 0x0010(0x000C)
	struct FEngine_Vector_NetQuantize                  ImpactPoint;                                              // 0x001C(0x000C)
	struct FEngine_Vector_NetQuantizeNormal            Normal;                                                   // 0x0028(0x000C)
	struct FEngine_Vector_NetQuantizeNormal            ImpactNormal;                                             // 0x0034(0x000C)
	struct FEngine_Vector_NetQuantize                  TraceStart;                                               // 0x0040(0x000C)
	struct FEngine_Vector_NetQuantize                  TraceEnd;                                                 // 0x004C(0x000C)
	float                                              PenetrationDepth;                                         // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Item;                                                     // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UEngine_PhysicalMaterial>     PhysMaterial;                                             // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AEngine_Actor>                Actor;                                                    // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UEngine_PrimitiveComponent>   Component;                                                // 0x0070(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       MyBoneName;                                               // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ActorComponentTickFunction
// 0x0008 (0x0030 - 0x0028)
struct FEngine_ActorComponentTickFunction : public FEngine_TickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.SimpleMemberReference
// 0x0020
struct FEngine_SimpleMemberReference
{
	class UObject*                                     MemberParent;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       MemberName;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       MemberGuid;                                               // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.LightingChannels
// 0x0001
struct FEngine_LightingChannels
{
	unsigned char                                      bChannel0 : 1;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bChannel1 : 1;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bChannel2 : 1;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct Engine.CustomPrimitiveData
// 0x0010
struct FEngine_CustomPrimitiveData
{
	TArray<float>                                      Data;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Engine.CollisionResponseContainer
// 0x0020
struct FEngine_CollisionResponseContainer
{
	TEnumAsByte<FEngine_Engine_ECollisionResponse>     WorldStatic;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ECollisionResponse>     WorldDynamic;                                             // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ECollisionResponse>     Pawn;                                                     // 0x0002(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ECollisionResponse>     Visibility;                                               // 0x0003(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ECollisionResponse>     Camera;                                                   // 0x0004(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ECollisionResponse>     PhysicsBody;                                              // 0x0005(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ECollisionResponse>     Vehicle;                                                  // 0x0006(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ECollisionResponse>     Destructible;                                             // 0x0007(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ECollisionResponse>     EngineTraceChannel1;                                      // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ECollisionResponse>     EngineTraceChannel2;                                      // 0x0009(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ECollisionResponse>     EngineTraceChannel3;                                      // 0x000A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ECollisionResponse>     EngineTraceChannel4;                                      // 0x000B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ECollisionResponse>     EngineTraceChannel5;                                      // 0x000C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ECollisionResponse>     EngineTraceChannel6;                                      // 0x000D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ECollisionResponse>     GameTraceChannel1;                                        // 0x000E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ECollisionResponse>     GameTraceChannel2;                                        // 0x000F(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ECollisionResponse>     GameTraceChannel3;                                        // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ECollisionResponse>     GameTraceChannel4;                                        // 0x0011(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ECollisionResponse>     GameTraceChannel5;                                        // 0x0012(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ECollisionResponse>     GameTraceChannel6;                                        // 0x0013(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ECollisionResponse>     GameTraceChannel7;                                        // 0x0014(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ECollisionResponse>     GameTraceChannel8;                                        // 0x0015(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ECollisionResponse>     GameTraceChannel9;                                        // 0x0016(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ECollisionResponse>     GameTraceChannel10;                                       // 0x0017(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ECollisionResponse>     GameTraceChannel11;                                       // 0x0018(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ECollisionResponse>     GameTraceChannel12;                                       // 0x0019(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ECollisionResponse>     GameTraceChannel13;                                       // 0x001A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ECollisionResponse>     GameTraceChannel14;                                       // 0x001B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ECollisionResponse>     GameTraceChannel15;                                       // 0x001C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ECollisionResponse>     GameTraceChannel16;                                       // 0x001D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ECollisionResponse>     GameTraceChannel17;                                       // 0x001E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ECollisionResponse>     GameTraceChannel18;                                       // 0x001F(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ResponseChannel
// 0x000C
struct FEngine_ResponseChannel
{
	struct FName                                       Channel;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ECollisionResponse>     Response;                                                 // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.CollisionResponse
// 0x0030
struct FEngine_CollisionResponse
{
	struct FEngine_CollisionResponseContainer          ResponseToChannels;                                       // 0x0000(0x0020) (Transient)
	TArray<struct FEngine_ResponseChannel>             ResponseArray;                                            // 0x0020(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Engine.WalkableSlopeOverride
// 0x0010
struct FEngine_WalkableSlopeOverride
{
	TEnumAsByte<FEngine_Engine_EWalkableSlopeBehavior> WalkableSlopeBehavior;                                    // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              WalkableSlopeAngle;                                       // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.BodyInstance
// 0x0110
struct FEngine_BodyInstance
{
	unsigned char                                      UnknownData00[0x6];                                       // 0x0000(0x0006) MISSED OFFSET
	TEnumAsByte<FEngine_Engine_ECollisionChannel>      ObjectType;                                               // 0x0006(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0007(0x0001) MISSED OFFSET
	TEnumAsByte<FEngine_Engine_ECollisionEnabled>      CollisionEnabled;                                         // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0009(0x0001) MISSED OFFSET
	FEngine_Engine_ESleepFamily                        SleepFamily;                                              // 0x000A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_EDOFMode>               DOFMode;                                                  // 0x000B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseCCD : 1;                                              // 0x000C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bNotifyRigidBodyCollision : 1;                            // 0x000C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData03 : 1;                                        // 0x000C(0x0001)
	unsigned char                                      bSimulatePhysics : 1;                                     // 0x000C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverrideMass : 1;                                        // 0x000C(0x0001) (Edit)
	unsigned char                                      bEnableGravity : 1;                                       // 0x000C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bAutoWeld : 1;                                            // 0x000C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bStartAwake : 1;                                          // 0x000C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGenerateWakeEvents : 1;                                  // 0x000D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bUpdateMassWhenScaleChanges : 1;                          // 0x000D(0x0001)
	unsigned char                                      bLockTranslation : 1;                                     // 0x000D(0x0001) (Edit)
	unsigned char                                      bLockRotation : 1;                                        // 0x000D(0x0001) (Edit)
	unsigned char                                      bLockXTranslation : 1;                                    // 0x000D(0x0001) (Edit)
	unsigned char                                      bLockYTranslation : 1;                                    // 0x000D(0x0001) (Edit)
	unsigned char                                      bLockZTranslation : 1;                                    // 0x000D(0x0001) (Edit)
	unsigned char                                      bLockXRotation : 1;                                       // 0x000D(0x0001) (Edit)
	unsigned char                                      bLockYRotation : 1;                                       // 0x000E(0x0001) (Edit)
	unsigned char                                      bLockZRotation : 1;                                       // 0x000E(0x0001) (Edit)
	unsigned char                                      bOverrideMaxAngularVelocity : 1;                          // 0x000E(0x0001) (Edit)
	unsigned char                                      UnknownData04 : 2;                                        // 0x000E(0x0001)
	unsigned char                                      bOverrideMaxDepenetrationVelocity : 1;                    // 0x000E(0x0001) (Edit)
	unsigned char                                      bOverrideWalkableSlopeOnInstance : 1;                     // 0x000E(0x0001) (Edit)
	unsigned char                                      bInterpolateWhenSubStepping : 1;                          // 0x000E(0x0001)
	unsigned char                                      UnknownData05[0xD];                                       // 0x000F(0x000D) MISSED OFFSET
	struct FName                                       CollisionProfileName;                                     // 0x001C(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PositionSolverIterationCount;                             // 0x0024(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      VelocitySolverIterationCount;                             // 0x0025(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x0026(0x0002) MISSED OFFSET
	struct FEngine_CollisionResponse                   CollisionResponses;                                       // 0x0028(0x0030) (Edit)
	float                                              MaxDepenetrationVelocity;                                 // 0x0058(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MassInKgOverride;                                         // 0x005C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x8];                                       // 0x0060(0x0008) MISSED OFFSET
	float                                              LinearDamping;                                            // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AngularDamping;                                           // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CustomDOFPlaneNormal;                                     // 0x0070(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     COMNudge;                                                 // 0x007C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MassScale;                                                // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InertiaTensorScale;                                       // 0x008C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x10];                                      // 0x0098(0x0010) MISSED OFFSET
	struct FEngine_WalkableSlopeOverride               WalkableSlopeOverride;                                    // 0x00A8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	class UEngine_PhysicalMaterial*                    PhysMaterialOverride;                                     // 0x00B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxAngularVelocity;                                       // 0x00C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CustomSleepThresholdMultiplier;                           // 0x00C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              StabilizationThresholdMultiplier;                         // 0x00C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PhysicsBlendWeight;                                       // 0x00CC(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x40];                                      // 0x00D0(0x0040) MISSED OFFSET
};

// ScriptStruct Engine.SkelMeshComponentLODInfo
// 0x0028
struct FEngine_SkelMeshComponentLODInfo
{
	TArray<bool>                                       HiddenMaterials;                                          // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0010(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.SkelMeshSkinWeightInfo
// 0x0028
struct FEngine_SkelMeshSkinWeightInfo
{
	int                                                Bones[0x8];                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Weights[0x8];                                             // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SingleAnimationPlayData
// 0x0018
struct FEngine_SingleAnimationPlayData
{
	class UEngine_AnimationAsset*                      AnimToPlay;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bSavedLooping : 1;                                        // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bSavedPlaying : 1;                                        // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              SavedPosition;                                            // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SavedPlayRate;                                            // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.PoseSnapshot
// 0x0038
struct FEngine_PoseSnapshot
{
	TArray<struct FTransform>                          LocalTransforms;                                          // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               BoneNames;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FName                                       SkeletalMeshName;                                         // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       SnapshotName;                                             // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsValid;                                                 // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.AnimNotifyEventReference
// 0x0010
struct FEngine_AnimNotifyEventReference
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UObject*                                     NotifySource;                                             // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Engine.AnimNotifyArray
// 0x0010
struct FEngine_AnimNotifyArray
{
	TArray<struct FEngine_AnimNotifyEventReference>    Notifies;                                                 // 0x0000(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct Engine.AnimNotifyQueue
// 0x0070
struct FEngine_AnimNotifyQueue
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	TArray<struct FEngine_AnimNotifyEventReference>    AnimNotifies;                                             // 0x0010(0x0010) (ZeroConstructor, Transient)
	TMap<struct FName, struct FEngine_AnimNotifyArray> UnfilteredMontageAnimNotifies;                            // 0x0020(0x0050) (ZeroConstructor, Transient)
};

// ScriptStruct Engine.AnimLinkableElement
// 0x0030
struct FEngine_AnimLinkableElement
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UEngine_AnimMontage*                         LinkedMontage;                                            // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                slotIndex;                                                // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SegmentIndex;                                             // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_EAnimLinkMethod>        LinkMethod;                                               // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_EAnimLinkMethod>        CachedLinkMethod;                                         // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x001A(0x0002) MISSED OFFSET
	float                                              SegmentBeginTime;                                         // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SegmentLength;                                            // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LinkValue;                                                // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	class UEngine_AnimSequenceBase*                    LinkedSequence;                                           // 0x0028(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct Engine.AnimNotifyEvent
// 0x0088 (0x00B8 - 0x0030)
struct FEngine_AnimNotifyEvent : public FEngine_AnimLinkableElement
{
	float                                              DisplayTime;                                              // 0x0030(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              TriggerTimeOffset;                                        // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EndTriggerTimeOffset;                                     // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TriggerWeightThreshold;                                   // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       NotifyName;                                               // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UEngine_AnimNotify*                          Notify;                                                   // 0x0048(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEngine_AnimNotifyState*                     NotifyStateClass;                                         // 0x0050(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Duration;                                                 // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FEngine_AnimLinkableElement                 EndLink;                                                  // 0x0060(0x0030)
	bool                                               bConvertedFromBranchingPoint;                             // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_EMontageNotifyTickType> MontageTickType;                                          // 0x0091(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0092(0x0002) MISSED OFFSET
	float                                              NotifyTriggerChance;                                      // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ENotifyFilterType>      NotifyFilterType;                                         // 0x0098(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0099(0x0003) MISSED OFFSET
	int                                                NotifyFilterLOD;                                          // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTriggerOnDedicatedServer;                                // 0x00A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTriggerOnFollower;                                       // 0x00A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x00A2(0x0002) MISSED OFFSET
	int                                                TrackIndex;                                               // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x10];                                      // 0x00A8(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.MarkerSyncAnimPosition
// 0x0014
struct FEngine_MarkerSyncAnimPosition
{
	struct FName                                       PreviousMarkerName;                                       // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       NextMarkerName;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              PositionBetweenMarkers;                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ExpressionInput
// 0x000C
struct FEngine_ExpressionInput
{
	int                                                OutputIndex;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       ExpressionName;                                           // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BasedMovementInfo
// 0x0030
struct FEngine_BasedMovementInfo
{
	class UEngine_PrimitiveComponent*                  MovementBase;                                             // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FEngine_Vector_NetQuantize100               Location;                                                 // 0x0010(0x000C)
	struct FRotator                                    Rotation;                                                 // 0x001C(0x000C) (ZeroConstructor, IsPlainOldData)
	bool                                               bServerHasBaseComponent;                                  // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bRelativeRotation;                                        // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bServerHasVelocity;                                       // 0x002A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x002B(0x0005) MISSED OFFSET
};

// ScriptStruct Engine.RootMotionSourceSettings
// 0x0001
struct FEngine_RootMotionSourceSettings
{
	unsigned char                                      Flags;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.Vector_NetQuantize10
// 0x0000 (0x000C - 0x000C)
struct FEngine_Vector_NetQuantize10 : public FVector
{

};

// ScriptStruct Engine.RootMotionSourceGroup
// 0x00F8
struct alignas(8) FEngine_RootMotionSourceGroup
{
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0000(0x00E8) MISSED OFFSET
	unsigned char                                      bHasAdditiveSources : 1;                                  // 0x00E8(0x0001)
	unsigned char                                      bHasOverrideSources : 1;                                  // 0x00E8(0x0001)
	unsigned char                                      bIsAdditiveVelocityApplied : 1;                           // 0x00E8(0x0001)
	struct FEngine_RootMotionSourceSettings            LastAccumulatedSettings;                                  // 0x00E9(0x0001)
	unsigned char                                      UnknownData01[0x2];                                       // 0x00EA(0x0002) MISSED OFFSET
	struct FEngine_Vector_NetQuantize10                LastPreAdditiveVelocity;                                  // 0x00EC(0x000C)
};

// ScriptStruct Engine.RootMotionMovementParams
// 0x0040
struct FEngine_RootMotionMovementParams
{
	bool                                               bHasRootMotion;                                           // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              BlendWeight;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  RootMotionTransform;                                      // 0x0010(0x0030) (IsPlainOldData)
};

// ScriptStruct Engine.RepRootMotionMontage
// 0x0158
struct FEngine_RepRootMotionMontage
{
	bool                                               bIsActive;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UEngine_AnimMontage*                         AnimMontage;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Position;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FEngine_Vector_NetQuantize100               Location;                                                 // 0x0014(0x000C)
	struct FRotator                                    Rotation;                                                 // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	class UEngine_PrimitiveComponent*                  MovementBase;                                             // 0x0030(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       MovementBaseBoneName;                                     // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bRelativePosition;                                        // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bRelativeRotation;                                        // 0x0041(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0042(0x0006) MISSED OFFSET
	struct FEngine_RootMotionSourceGroup               AuthoritativeRootMotion;                                  // 0x0048(0x00F8)
	struct FEngine_Vector_NetQuantize10                Acceleration;                                             // 0x0140(0x000C)
	struct FEngine_Vector_NetQuantize10                LinearVelocity;                                           // 0x014C(0x000C)
};

// ScriptStruct Engine.SimulatedRootMotionReplicatedMove
// 0x0160
struct FEngine_SimulatedRootMotionReplicatedMove
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FEngine_RepRootMotionMontage                RootMotion;                                               // 0x0008(0x0158)
};

// ScriptStruct Engine.SplineCurves
// 0x0068
struct FEngine_SplineCurves
{
	struct FInterpCurveVector                          Position;                                                 // 0x0000(0x0018) (ZeroConstructor)
	struct FInterpCurveQuat                            Rotation;                                                 // 0x0018(0x0018) (ZeroConstructor)
	struct FInterpCurveVector                          Scale;                                                    // 0x0030(0x0018) (ZeroConstructor)
	struct FInterpCurveFloat                           ReparamTable;                                             // 0x0048(0x0018) (ZeroConstructor)
	class UEngine_SplineMetadata*                      MetaData;                                                 // 0x0060(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
};

// ScriptStruct Engine.SplinePoint
// 0x0044
struct FEngine_SplinePoint
{
	float                                              InputKey;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // 0x0004(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ArriveTangent;                                            // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LeaveTangent;                                             // 0x001C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0028(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Scale;                                                    // 0x0034(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ESplinePointType>       Type;                                                     // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.AudioComponentParam
// 0x0020
struct FEngine_AudioComponentParam
{
	struct FName                                       ParamName;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FloatParam;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BoolParam;                                                // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	int                                                IntParam;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class UEngine_SoundWave*                           SoundWaveParam;                                           // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.KeyHandleMap
// 0x0060
struct FEngine_KeyHandleMap
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct Engine.IndexedCurve
// 0x0068
struct FEngine_IndexedCurve
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FEngine_KeyHandleMap                        KeyHandlesToIndices;                                      // 0x0008(0x0060) (Transient)
};

// ScriptStruct Engine.RealCurve
// 0x0008 (0x0070 - 0x0068)
struct FEngine_RealCurve : public FEngine_IndexedCurve
{
	float                                              DefaultValue;                                             // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ERichCurveExtrapolation> PreInfinityExtrap;                                        // 0x006C(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ERichCurveExtrapolation> PostInfinityExtrap;                                       // 0x006D(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x006E(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.RichCurveKey
// 0x001C
struct FEngine_RichCurveKey
{
	TEnumAsByte<FEngine_Engine_ERichCurveInterpMode>   InterpMode;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ERichCurveTangentMode>  TangentMode;                                              // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ERichCurveTangentWeightMode> TangentWeightMode;                                        // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	float                                              Time;                                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ArriveTangent;                                            // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ArriveTangentWeight;                                      // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LeaveTangent;                                             // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LeaveTangentWeight;                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.RichCurve
// 0x0010 (0x0080 - 0x0070)
struct FEngine_RichCurve : public FEngine_RealCurve
{
	TArray<struct FEngine_RichCurveKey>                Keys;                                                     // 0x0070(0x0010) (Edit, EditFixedSize, ZeroConstructor)
};

// ScriptStruct Engine.RuntimeFloatCurve
// 0x0088
struct FEngine_RuntimeFloatCurve
{
	struct FEngine_RichCurve                           EditorCurveData;                                          // 0x0000(0x0080)
	class UEngine_CurveFloat*                          ExternalCurve;                                            // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BaseAttenuationSettings
// 0x00B0
struct FEngine_BaseAttenuationSettings
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	FEngine_Engine_EAttenuationDistanceModel           DistanceAlgorithm;                                        // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_EAttenuationShape>      AttenuationShape;                                         // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
	float                                              dBAttenuationAtMax;                                       // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AttenuationShapeExtents;                                  // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ConeOffset;                                               // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FalloffDistance;                                          // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FEngine_RuntimeFloatCurve                   CustomAttenuationCurve;                                   // 0x0028(0x0088) (Edit, BlueprintVisible)
};

// ScriptStruct Engine.SoundAttenuationPluginSettings
// 0x0030
struct FEngine_SoundAttenuationPluginSettings
{
	TArray<class UEngine_SpatializationPluginSourceSettingsBase*> SpatializationPluginSettingsArray;                        // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UEngine_OcclusionPluginSourceSettingsBase*> OcclusionPluginSettingsArray;                             // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UEngine_ReverbPluginSourceSettingsBase*> ReverbPluginSettingsArray;                                // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Engine.SoundAttenuationSettings
// 0x0240 (0x02F0 - 0x00B0)
struct FEngine_SoundAttenuationSettings : public FEngine_BaseAttenuationSettings
{
	unsigned char                                      bAttenuate : 1;                                           // 0x00B0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bSpatialize : 1;                                          // 0x00B0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bAttenuateWithLPF : 1;                                    // 0x00B0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bEnableListenerFocus : 1;                                 // 0x00B0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bEnableFocusInterpolation : 1;                            // 0x00B0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bEnableOcclusion : 1;                                     // 0x00B0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bUseComplexCollisionForOcclusion : 1;                     // 0x00B0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bEnableReverbSend : 1;                                    // 0x00B0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bApplyNormalizationToStereoSounds : 1;                    // 0x00B1(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bEnableLogFrequencyScaling : 1;                           // 0x00B1(0x0001) (Edit, BlueprintVisible)
	TEnumAsByte<FEngine_Engine_ESoundSpatializationAlgorithm> SpatializationAlgorithm;                                  // 0x00B2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x00B3(0x0001) MISSED OFFSET
	float                                              BinauralRadius;                                           // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FEngine_Engine_EAirAbsorptionMethod                AbsorptionMethod;                                         // 0x00B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ECollisionChannel>      OcclusionTraceChannel;                                    // 0x00B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FEngine_Engine_EReverbSendMethod                   ReverbSendMethod;                                         // 0x00BA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x00BB(0x0001) MISSED OFFSET
	float                                              OmniRadius;                                               // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StereoSpread;                                             // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPFRadiusMin;                                             // 0x00C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPFRadiusMax;                                             // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET
	struct FEngine_RuntimeFloatCurve                   CustomLowpassAirAbsorptionCurve;                          // 0x00D0(0x0088) (Edit, BlueprintVisible)
	struct FEngine_RuntimeFloatCurve                   CustomHighpassAirAbsorptionCurve;                         // 0x0158(0x0088) (Edit, BlueprintVisible)
	float                                              LPFFrequencyAtMin;                                        // 0x01E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPFFrequencyAtMax;                                        // 0x01E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HPFFrequencyAtMin;                                        // 0x01E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HPFFrequencyAtMax;                                        // 0x01EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FocusAzimuth;                                             // 0x01F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NonFocusAzimuth;                                          // 0x01F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FocusDistanceScale;                                       // 0x01F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NonFocusDistanceScale;                                    // 0x01FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FocusPriorityScale;                                       // 0x0200(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NonFocusPriorityScale;                                    // 0x0204(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FocusVolumeAttenuation;                                   // 0x0208(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NonFocusVolumeAttenuation;                                // 0x020C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FocusAttackInterpSpeed;                                   // 0x0210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FocusReleaseInterpSpeed;                                  // 0x0214(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OcclusionLowPassFilterFrequency;                          // 0x0218(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OcclusionVolumeAttenuation;                               // 0x021C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OcclusionInterpolationTime;                               // 0x0220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReverbWetLevelMin;                                        // 0x0224(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReverbWetLevelMax;                                        // 0x0228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReverbDistanceMin;                                        // 0x022C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReverbDistanceMax;                                        // 0x0230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ManualReverbSendLevel;                                    // 0x0234(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FEngine_RuntimeFloatCurve                   CustomReverbSendCurve;                                    // 0x0238(0x0088) (Edit, BlueprintVisible)
	struct FEngine_SoundAttenuationPluginSettings      PluginSettings;                                           // 0x02C0(0x0030) (Edit, BlueprintVisible)
};

// ScriptStruct Engine.SoundModulation
// 0x0010
struct FEngine_SoundModulation
{
	TArray<class UEngine_SoundModulationPluginSourceSettingsBase*> Settings;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Engine.SoundWaveSpectralData
// 0x000C
struct FEngine_SoundWaveSpectralData
{
	float                                              FrequencyHz;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Magnitude;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NormalizedMagnitude;                                      // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SoundWaveSpectralDataPerSound
// 0x0020
struct FEngine_SoundWaveSpectralDataPerSound
{
	TArray<struct FEngine_SoundWaveSpectralData>       SpectralData;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              PlaybackTime;                                             // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class UEngine_SoundWave*                           SoundWave;                                                // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SoundWaveEnvelopeDataPerSound
// 0x0010
struct FEngine_SoundWaveEnvelopeDataPerSound
{
	float                                              Envelope;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PlaybackTime;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UEngine_SoundWave*                           SoundWave;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.UniqueNetIdRepl
// 0x0027 (0x0028 - 0x0001)
struct FEngine_UniqueNetIdRepl : public FUniqueNetIdWrapper
{
	unsigned char                                      UnknownData00[0x17];                                      // 0x0001(0x0017) MISSED OFFSET
	TArray<unsigned char>                              ReplicationBytes;                                         // 0x0018(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct Engine.ChannelDefinition
// 0x0028
struct FEngine_ChannelDefinition
{
	struct FName                                       ChannelName;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       ClassName;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      ChannelClass;                                             // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                StaticChannelIndex;                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bTickOnCreate;                                            // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bServerOpen;                                              // 0x001D(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bClientOpen;                                              // 0x001E(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bInitialServer;                                           // 0x001F(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bInitialClient;                                           // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.MovementProperties
// 0x0001
struct FEngine_MovementProperties
{
	unsigned char                                      bCanCrouch : 1;                                           // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCanJump : 1;                                             // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCanWalk : 1;                                             // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCanSwim : 1;                                             // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCanFly : 1;                                              // 0x0000(0x0001) (Edit, BlueprintVisible)
};

// ScriptStruct Engine.NavAgentProperties
// 0x002F (0x0030 - 0x0001)
struct FEngine_NavAgentProperties : public FEngine_MovementProperties
{
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              AgentRadius;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AgentHeight;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AgentStepHeight;                                          // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NavWalkingSearchHeightScale;                              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FSoftClassPath                              PreferredNavData;                                         // 0x0018(0x0018) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Engine.FindFloorResult
// 0x0094
struct FEngine_FindFloorResult
{
	unsigned char                                      bBlockingHit : 1;                                         // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst)
	unsigned char                                      bWalkableFloor : 1;                                       // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst)
	unsigned char                                      bLineTrace : 1;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              FloorDist;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	float                                              LineDist;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	struct FEngine_HitResult                           HitResult;                                                // 0x000C(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, IsPlainOldData)
};

// ScriptStruct Engine.NavAvoidanceMask
// 0x0004
struct FEngine_NavAvoidanceMask
{
	unsigned char                                      bGroup0 : 1;                                              // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup1 : 1;                                              // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup2 : 1;                                              // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup3 : 1;                                              // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup4 : 1;                                              // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup5 : 1;                                              // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup6 : 1;                                              // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup7 : 1;                                              // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup8 : 1;                                              // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup9 : 1;                                              // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup10 : 1;                                             // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup11 : 1;                                             // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup12 : 1;                                             // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup13 : 1;                                             // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup14 : 1;                                             // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup15 : 1;                                             // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup16 : 1;                                             // 0x0002(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup17 : 1;                                             // 0x0002(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup18 : 1;                                             // 0x0002(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup19 : 1;                                             // 0x0002(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup20 : 1;                                             // 0x0002(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup21 : 1;                                             // 0x0002(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup22 : 1;                                             // 0x0002(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup23 : 1;                                             // 0x0002(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup24 : 1;                                             // 0x0003(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup25 : 1;                                             // 0x0003(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup26 : 1;                                             // 0x0003(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup27 : 1;                                             // 0x0003(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup28 : 1;                                             // 0x0003(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup29 : 1;                                             // 0x0003(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup30 : 1;                                             // 0x0003(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup31 : 1;                                             // 0x0003(0x0001) (Edit, BlueprintVisible)
};

// ScriptStruct Engine.CharacterMovementComponentPostPhysicsTickFunction
// 0x0008 (0x0030 - 0x0028)
struct FEngine_CharacterMovementComponentPostPhysicsTickFunction : public FEngine_TickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.GeomSelection
// 0x000C
struct FEngine_GeomSelection
{
	int                                                Type;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SelectionIndex;                                           // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ParticleSysParam
// 0x0080
struct FEngine_ParticleSysParam
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_EParticleSysParamType>  ParamType;                                                // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              Scalar;                                                   // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Scalar_Low;                                               // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Vector;                                                   // 0x0014(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Vector_Low;                                               // 0x0020(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FColor                                      Color;                                                    // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AEngine_Actor*                               Actor;                                                    // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UEngine_MaterialInterface*                   Material;                                                 // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x40];                                      // 0x0040(0x0040) MISSED OFFSET
};

// ScriptStruct Engine.WeightedBlendable
// 0x0010
struct FEngine_WeightedBlendable
{
	float                                              Weight;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UObject*                                     Object;                                                   // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.WeightedBlendables
// 0x0010
struct FEngine_WeightedBlendables
{
	TArray<struct FEngine_WeightedBlendable>           Array;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Engine.PostProcessSettings
// 0x0530
struct FEngine_PostProcessSettings
{
	unsigned char                                      bOverride_WhiteTemp : 1;                                  // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_WhiteTint : 1;                                  // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorSaturation : 1;                            // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorContrast : 1;                              // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorGamma : 1;                                 // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorGain : 1;                                  // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorOffset : 1;                                // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorSaturationShadows : 1;                     // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorContrastShadows : 1;                       // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorGammaShadows : 1;                          // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorGainShadows : 1;                           // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorOffsetShadows : 1;                         // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorSaturationMidtones : 1;                    // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorContrastMidtones : 1;                      // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorGammaMidtones : 1;                         // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorGainMidtones : 1;                          // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorOffsetMidtones : 1;                        // 0x0002(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorSaturationHighlights : 1;                  // 0x0002(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorContrastHighlights : 1;                    // 0x0002(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorGammaHighlights : 1;                       // 0x0002(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorGainHighlights : 1;                        // 0x0002(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorOffsetHighlights : 1;                      // 0x0002(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorCorrectionShadowsMax : 1;                  // 0x0002(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorCorrectionHighlightsMin : 1;               // 0x0002(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_BlueCorrection : 1;                             // 0x0003(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ExpandGamut : 1;                                // 0x0003(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_FilmWhitePoint : 1;                             // 0x0003(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_FilmSaturation : 1;                             // 0x0003(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_FilmChannelMixerRed : 1;                        // 0x0003(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_FilmChannelMixerGreen : 1;                      // 0x0003(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_FilmChannelMixerBlue : 1;                       // 0x0003(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_FilmContrast : 1;                               // 0x0003(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_FilmDynamicRange : 1;                           // 0x0004(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_FilmHealAmount : 1;                             // 0x0004(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_FilmToeAmount : 1;                              // 0x0004(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_FilmShadowTint : 1;                             // 0x0004(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_FilmShadowTintBlend : 1;                        // 0x0004(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_FilmShadowTintAmount : 1;                       // 0x0004(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_FilmSlope : 1;                                  // 0x0004(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_FilmToe : 1;                                    // 0x0004(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_FilmShoulder : 1;                               // 0x0005(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_FilmBlackClip : 1;                              // 0x0005(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_FilmWhiteClip : 1;                              // 0x0005(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_SceneColorTint : 1;                             // 0x0005(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_SceneFringeIntensity : 1;                       // 0x0005(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ChromaticAberrationStartOffset : 1;             // 0x0005(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AmbientCubemapTint : 1;                         // 0x0005(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AmbientCubemapIntensity : 1;                    // 0x0005(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_BloomMethod : 1;                                // 0x0006(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_BloomIntensity : 1;                             // 0x0006(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_BloomThreshold : 1;                             // 0x0006(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_Bloom1Tint : 1;                                 // 0x0006(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_Bloom1Size : 1;                                 // 0x0006(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_Bloom2Size : 1;                                 // 0x0006(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_Bloom2Tint : 1;                                 // 0x0006(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_Bloom3Tint : 1;                                 // 0x0006(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_Bloom3Size : 1;                                 // 0x0007(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_Bloom4Tint : 1;                                 // 0x0007(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_Bloom4Size : 1;                                 // 0x0007(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_Bloom5Tint : 1;                                 // 0x0007(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_Bloom5Size : 1;                                 // 0x0007(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_Bloom6Tint : 1;                                 // 0x0007(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_Bloom6Size : 1;                                 // 0x0007(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_BloomSizeScale : 1;                             // 0x0007(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_BloomConvolutionTexture : 1;                    // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_BloomConvolutionSize : 1;                       // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_BloomConvolutionCenterUV : 1;                   // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_BloomConvolutionPreFilter : 1;                  // 0x0008(0x0001) (Deprecated)
	unsigned char                                      bOverride_BloomConvolutionPreFilterMin : 1;               // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_BloomConvolutionPreFilterMax : 1;               // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_BloomConvolutionPreFilterMult : 1;              // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_BloomConvolutionBufferScale : 1;                // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_BloomDirtMaskIntensity : 1;                     // 0x0009(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_BloomDirtMaskTint : 1;                          // 0x0009(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_BloomDirtMask : 1;                              // 0x0009(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_CameraShutterSpeed : 1;                         // 0x0009(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_CameraISO : 1;                                  // 0x0009(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AutoExposureMethod : 1;                         // 0x0009(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AutoExposureLowPercent : 1;                     // 0x0009(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AutoExposureHighPercent : 1;                    // 0x0009(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AutoExposureMinBrightness : 1;                  // 0x000A(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AutoExposureMaxBrightness : 1;                  // 0x000A(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AutoExposureCalibrationConstant : 1;            // 0x000A(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AutoExposureSpeedUp : 1;                        // 0x000A(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AutoExposureSpeedDown : 1;                      // 0x000A(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AutoExposureBias : 1;                           // 0x000A(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AutoExposureBiasCurve : 1;                      // 0x000A(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_HistogramLogMin : 1;                            // 0x000A(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_HistogramLogMax : 1;                            // 0x000B(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LensFlareIntensity : 1;                         // 0x000B(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LensFlareTint : 1;                              // 0x000B(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LensFlareTints : 1;                             // 0x000B(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LensFlareBokehSize : 1;                         // 0x000B(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LensFlareBokehShape : 1;                        // 0x000B(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LensFlareThreshold : 1;                         // 0x000B(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_VignetteIntensity : 1;                          // 0x000B(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_GrainIntensity : 1;                             // 0x000C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_GrainJitter : 1;                                // 0x000C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionIntensity : 1;                  // 0x000C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionStaticFraction : 1;             // 0x000C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionRadius : 1;                     // 0x000C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionFadeDistance : 1;               // 0x000C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionFadeRadius : 1;                 // 0x000C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionDistance : 1;                   // 0x000C(0x0001) (Deprecated)
	unsigned char                                      bOverride_AmbientOcclusionRadiusInWS : 1;                 // 0x000D(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionPower : 1;                      // 0x000D(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionBias : 1;                       // 0x000D(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionQuality : 1;                    // 0x000D(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionMipBlend : 1;                   // 0x000D(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionMipScale : 1;                   // 0x000D(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionMipThreshold : 1;               // 0x000D(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
	unsigned char                                      bOverride_RayTracingAO : 1;                               // 0x0010(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_RayTracingAOSamplesPerPixel : 1;                // 0x0010(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	unsigned char                                      bOverride_LPVIntensity : 1;                               // 0x0014(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LPVDirectionalOcclusionIntensity : 1;           // 0x0014(0x0001) (Edit)
	unsigned char                                      bOverride_LPVDirectionalOcclusionRadius : 1;              // 0x0014(0x0001) (Edit)
	unsigned char                                      bOverride_LPVDiffuseOcclusionExponent : 1;                // 0x0014(0x0001) (Edit)
	unsigned char                                      bOverride_LPVSpecularOcclusionExponent : 1;               // 0x0014(0x0001) (Edit)
	unsigned char                                      bOverride_LPVDiffuseOcclusionIntensity : 1;               // 0x0014(0x0001) (Edit)
	unsigned char                                      bOverride_LPVSpecularOcclusionIntensity : 1;              // 0x0014(0x0001) (Edit)
	unsigned char                                      bOverride_LPVSize : 1;                                    // 0x0014(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LPVSecondaryOcclusionIntensity : 1;             // 0x0015(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LPVSecondaryBounceIntensity : 1;                // 0x0015(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LPVGeometryVolumeBias : 1;                      // 0x0015(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LPVVplInjectionBias : 1;                        // 0x0015(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LPVEmissiveInjectionIntensity : 1;              // 0x0015(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LPVFadeRange : 1;                               // 0x0015(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LPVDirectionalOcclusionFadeRange : 1;           // 0x0015(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_IndirectLightingColor : 1;                      // 0x0015(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_IndirectLightingIntensity : 1;                  // 0x0016(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorGradingIntensity : 1;                      // 0x0016(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorGradingLUT : 1;                            // 0x0016(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldFocalDistance : 1;                  // 0x0016(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldFstop : 1;                          // 0x0016(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldMinFstop : 1;                       // 0x0016(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldBladeCount : 1;                     // 0x0016(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldSensorWidth : 1;                    // 0x0016(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldDepthBlurRadius : 1;                // 0x0017(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldDepthBlurAmount : 1;                // 0x0017(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldFocalRegion : 1;                    // 0x0017(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldNearTransitionRegion : 1;           // 0x0017(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldFarTransitionRegion : 1;            // 0x0017(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldScale : 1;                          // 0x0017(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldNearBlurSize : 1;                   // 0x0017(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldFarBlurSize : 1;                    // 0x0017(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_MobileHQGaussian : 1;                           // 0x0018(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldOcclusion : 1;                      // 0x0018(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldSkyFocusDistance : 1;               // 0x0018(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldVignetteSize : 1;                   // 0x0018(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_MotionBlurAmount : 1;                           // 0x0018(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_MotionBlurMax : 1;                              // 0x0018(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_MotionBlurTargetFPS : 1;                        // 0x0018(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_MotionBlurPerObjectSize : 1;                    // 0x0018(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ScreenPercentage : 1;                           // 0x0019(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ScreenSpaceReflectionIntensity : 1;             // 0x0019(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ScreenSpaceReflectionQuality : 1;               // 0x0019(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ScreenSpaceReflectionMaxRoughness : 1;          // 0x0019(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ScreenSpaceReflectionRoughnessScale : 1;        // 0x0019(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData02[0x2];                                       // 0x001A(0x0002) MISSED OFFSET
	unsigned char                                      bOverride_ReflectionsType : 1;                            // 0x001C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_RayTracingReflectionsMaxRoughness : 1;          // 0x001C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_RayTracingReflectionsMaxBounces : 1;            // 0x001C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_RayTracingReflectionsSamplesPerPixel : 1;       // 0x001C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_RayTracingReflectionsShadows : 1;               // 0x001C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_RayTracingReflectionsTranslucency : 1;          // 0x001C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_TranslucencyType : 1;                           // 0x001C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_RayTracingTranslucencyMaxRoughness : 1;         // 0x001C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_RayTracingTranslucencyRefractionRays : 1;       // 0x001D(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_RayTracingTranslucencySamplesPerPixel : 1;      // 0x001D(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_RayTracingTranslucencyShadows : 1;              // 0x001D(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_RayTracingTranslucencyRefraction : 1;           // 0x001D(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_RayTracingGI : 1;                               // 0x001D(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_RayTracingGIMaxBounces : 1;                     // 0x001D(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_RayTracingGISamplesPerPixel : 1;                // 0x001D(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_PathTracingMaxBounces : 1;                      // 0x001D(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_PathTracingSamplesPerPixel : 1;                 // 0x001E(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData03[0x1];                                       // 0x001F(0x0001) MISSED OFFSET
	unsigned char                                      bMobileHQGaussian : 1;                                    // 0x0020(0x0001) (Edit, BlueprintVisible)
	TEnumAsByte<FEngine_Engine_EBloomMethod>           BloomMethod;                                              // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_EAutoExposureMethod>    AutoExposureMethod;                                       // 0x0022(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x0023(0x0001) MISSED OFFSET
	float                                              WhiteTemp;                                                // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WhiteTint;                                                // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FVector4                                    ColorSaturation;                                          // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ColorContrast;                                            // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ColorGamma;                                               // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ColorGain;                                                // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ColorOffset;                                              // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ColorSaturationShadows;                                   // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ColorContrastShadows;                                     // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ColorGammaShadows;                                        // 0x00A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ColorGainShadows;                                         // 0x00B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ColorOffsetShadows;                                       // 0x00C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ColorSaturationMidtones;                                  // 0x00D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ColorContrastMidtones;                                    // 0x00E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ColorGammaMidtones;                                       // 0x00F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ColorGainMidtones;                                        // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ColorOffsetMidtones;                                      // 0x0110(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ColorSaturationHighlights;                                // 0x0120(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ColorContrastHighlights;                                  // 0x0130(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ColorGammaHighlights;                                     // 0x0140(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ColorGainHighlights;                                      // 0x0150(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ColorOffsetHighlights;                                    // 0x0160(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ColorCorrectionHighlightsMin;                             // 0x0170(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ColorCorrectionShadowsMax;                                // 0x0174(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlueCorrection;                                           // 0x0178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExpandGamut;                                              // 0x017C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmSlope;                                                // 0x0180(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmToe;                                                  // 0x0184(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmShoulder;                                             // 0x0188(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmBlackClip;                                            // 0x018C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmWhiteClip;                                            // 0x0190(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FilmWhitePoint;                                           // 0x0194(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FilmShadowTint;                                           // 0x01A4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmShadowTintBlend;                                      // 0x01B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmShadowTintAmount;                                     // 0x01B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmSaturation;                                           // 0x01BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FilmChannelMixerRed;                                      // 0x01C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FilmChannelMixerGreen;                                    // 0x01D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FilmChannelMixerBlue;                                     // 0x01E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmContrast;                                             // 0x01F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmToeAmount;                                            // 0x01F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmHealAmount;                                           // 0x01F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmDynamicRange;                                         // 0x01FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                SceneColorTint;                                           // 0x0200(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SceneFringeIntensity;                                     // 0x0210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ChromaticAberrationStartOffset;                           // 0x0214(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BloomIntensity;                                           // 0x0218(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BloomThreshold;                                           // 0x021C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BloomSizeScale;                                           // 0x0220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bloom1Size;                                               // 0x0224(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bloom2Size;                                               // 0x0228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bloom3Size;                                               // 0x022C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bloom4Size;                                               // 0x0230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bloom5Size;                                               // 0x0234(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bloom6Size;                                               // 0x0238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Bloom1Tint;                                               // 0x023C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Bloom2Tint;                                               // 0x024C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Bloom3Tint;                                               // 0x025C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Bloom4Tint;                                               // 0x026C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Bloom5Tint;                                               // 0x027C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Bloom6Tint;                                               // 0x028C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BloomConvolutionSize;                                     // 0x029C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UEngine_Texture2D*                           BloomConvolutionTexture;                                  // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   BloomConvolutionCenterUV;                                 // 0x02A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BloomConvolutionPreFilterMin;                             // 0x02B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BloomConvolutionPreFilterMax;                             // 0x02B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BloomConvolutionPreFilterMult;                            // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BloomConvolutionBufferScale;                              // 0x02BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UEngine_Texture*                             BloomDirtMask;                                            // 0x02C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BloomDirtMaskIntensity;                                   // 0x02C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                BloomDirtMaskTint;                                        // 0x02CC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                AmbientCubemapTint;                                       // 0x02DC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientCubemapIntensity;                                  // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UEngine_TextureCube*                         AmbientCubemap;                                           // 0x02F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CameraShutterSpeed;                                       // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CameraISO;                                                // 0x02FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldFstop;                                        // 0x0300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldMinFstop;                                     // 0x0304(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DepthOfFieldBladeCount;                                   // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoExposureBias;                                         // 0x030C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UEngine_CurveFloat*                          AutoExposureBiasCurve;                                    // 0x0310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoExposureLowPercent;                                   // 0x0318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoExposureHighPercent;                                  // 0x031C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoExposureMinBrightness;                                // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoExposureMaxBrightness;                                // 0x0324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoExposureSpeedUp;                                      // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoExposureSpeedDown;                                    // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HistogramLogMin;                                          // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HistogramLogMax;                                          // 0x0334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoExposureCalibrationConstant;                          // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LensFlareIntensity;                                       // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LensFlareTint;                                            // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LensFlareBokehSize;                                       // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LensFlareThreshold;                                       // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UEngine_Texture*                             LensFlareBokehShape;                                      // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LensFlareTints[0x8];                                      // 0x0360(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VignetteIntensity;                                        // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GrainJitter;                                              // 0x03E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GrainIntensity;                                           // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionIntensity;                                // 0x03EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionStaticFraction;                           // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionRadius;                                   // 0x03F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      AmbientOcclusionRadiusInWS : 1;                           // 0x03F8(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData06[0x3];                                       // 0x03F9(0x0003) MISSED OFFSET
	float                                              AmbientOcclusionFadeDistance;                             // 0x03FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionFadeRadius;                               // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionDistance;                                 // 0x0404(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              AmbientOcclusionPower;                                    // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionBias;                                     // 0x040C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionQuality;                                  // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionMipBlend;                                 // 0x0414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionMipScale;                                 // 0x0418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionMipThreshold;                             // 0x041C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      RayTracingAO : 1;                                         // 0x0420(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0421(0x0003) MISSED OFFSET
	int                                                RayTracingAOSamplesPerPixel;                              // 0x0424(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                IndirectLightingColor;                                    // 0x0428(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IndirectLightingIntensity;                                // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FEngine_Engine_ERayTracingGlobalIlluminationType   RayTracingGIType;                                         // 0x043C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x043D(0x0003) MISSED OFFSET
	int                                                RayTracingGIMaxBounces;                                   // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RayTracingGISamplesPerPixel;                              // 0x0444(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ColorGradingIntensity;                                    // 0x0448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x044C(0x0004) MISSED OFFSET
	class UEngine_Texture*                             ColorGradingLUT;                                          // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldSensorWidth;                                  // 0x0458(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldFocalDistance;                                // 0x045C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldDepthBlurAmount;                              // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldDepthBlurRadius;                              // 0x0464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldFocalRegion;                                  // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldNearTransitionRegion;                         // 0x046C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldFarTransitionRegion;                          // 0x0470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldScale;                                        // 0x0474(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldNearBlurSize;                                 // 0x0478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldFarBlurSize;                                  // 0x047C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldOcclusion;                                    // 0x0480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldSkyFocusDistance;                             // 0x0484(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldVignetteSize;                                 // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MotionBlurAmount;                                         // 0x048C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MotionBlurMax;                                            // 0x0490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MotionBlurTargetFPS;                                      // 0x0494(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MotionBlurPerObjectSize;                                  // 0x0498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVIntensity;                                             // 0x049C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVVplInjectionBias;                                      // 0x04A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVSize;                                                  // 0x04A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVSecondaryOcclusionIntensity;                           // 0x04A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVSecondaryBounceIntensity;                              // 0x04AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVGeometryVolumeBias;                                    // 0x04B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVEmissiveInjectionIntensity;                            // 0x04B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVDirectionalOcclusionIntensity;                         // 0x04B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVDirectionalOcclusionRadius;                            // 0x04BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVDiffuseOcclusionExponent;                              // 0x04C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVSpecularOcclusionExponent;                             // 0x04C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVDiffuseOcclusionIntensity;                             // 0x04C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVSpecularOcclusionIntensity;                            // 0x04CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FEngine_Engine_EReflectionsType                    ReflectionsType;                                          // 0x04D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x04D1(0x0003) MISSED OFFSET
	float                                              ScreenSpaceReflectionIntensity;                           // 0x04D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScreenSpaceReflectionQuality;                             // 0x04D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScreenSpaceReflectionMaxRoughness;                        // 0x04DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RayTracingReflectionsMaxRoughness;                        // 0x04E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RayTracingReflectionsMaxBounces;                          // 0x04E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RayTracingReflectionsSamplesPerPixel;                     // 0x04E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FEngine_Engine_EReflectedAndRefractedRayTracedShadows RayTracingReflectionsShadows;                             // 0x04EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      RayTracingReflectionsTranslucency : 1;                    // 0x04ED(0x0001) (Edit, BlueprintVisible)
	FEngine_Engine_ETranslucencyType                   TranslucencyType;                                         // 0x04EE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x1];                                       // 0x04EF(0x0001) MISSED OFFSET
	float                                              RayTracingTranslucencyMaxRoughness;                       // 0x04F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RayTracingTranslucencyRefractionRays;                     // 0x04F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RayTracingTranslucencySamplesPerPixel;                    // 0x04F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FEngine_Engine_EReflectedAndRefractedRayTracedShadows RayTracingTranslucencyShadows;                            // 0x04FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      RayTracingTranslucencyRefraction : 1;                     // 0x04FD(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData12[0x2];                                       // 0x04FE(0x0002) MISSED OFFSET
	int                                                PathTracingMaxBounces;                                    // 0x0500(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PathTracingSamplesPerPixel;                               // 0x0504(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVFadeRange;                                             // 0x0508(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVDirectionalOcclusionFadeRange;                         // 0x050C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScreenPercentage;                                         // 0x0510(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x0514(0x0004) MISSED OFFSET
	struct FEngine_WeightedBlendables                  WeightedBlendables;                                       // 0x0518(0x0010) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData14[0x8];                                       // 0x0528(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.MinimalViewInfo
// 0x05C0
struct FEngine_MinimalViewInfo
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FOV;                                                      // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DesiredFOV;                                               // 0x001C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              OrthoWidth;                                               // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OrthoNearClipPlane;                                       // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OrthoFarClipPlane;                                        // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AspectRatio;                                              // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bConstrainAspectRatio : 1;                                // 0x0030(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bUseFieldOfViewForLOD : 1;                                // 0x0030(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	TEnumAsByte<FEngine_Engine_ECameraProjectionMode>  ProjectionMode;                                           // 0x0034(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	float                                              PostProcessBlendWeight;                                   // 0x0038(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FEngine_PostProcessSettings                 PostProcessSettings;                                      // 0x0040(0x0530) (BlueprintVisible)
	struct FVector2D                                   OffCenterProjectionOffset;                                // 0x0570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData03[0x48];                                      // 0x0578(0x0048) MISSED OFFSET
};

// ScriptStruct Engine.ActiveForceFeedbackEffect
// 0x0018
struct FEngine_ActiveForceFeedbackEffect
{
	class UEngine_ForceFeedbackEffect*                 ForceFeedbackEffect;                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.ViewTargetTransitionParams
// 0x0010
struct FEngine_ViewTargetTransitionParams
{
	float                                              BlendTime;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_EViewTargetBlendFunction> BlendFunction;                                            // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	float                                              BlendExp;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bLockOutgoing : 1;                                        // 0x000C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.UpdateLevelVisibilityLevelInfo
// 0x0014
struct FEngine_UpdateLevelVisibilityLevelInfo
{
	struct FName                                       PackageName;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Filename;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsVisible : 1;                                           // 0x0010(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.LatentActionInfo
// 0x0018
struct FEngine_LatentActionInfo
{
	int                                                Linkage;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                UUID;                                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       ExecutionFunction;                                        // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UObject*                                     CallbackTarget;                                           // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.UpdateLevelStreamingLevelStatus
// 0x0010
struct FEngine_UpdateLevelStreamingLevelStatus
{
	struct FName                                       PackageName;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                LODIndex;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bNewShouldBeLoaded : 1;                                   // 0x000C(0x0001)
	unsigned char                                      bNewShouldBeVisible : 1;                                  // 0x000C(0x0001)
	unsigned char                                      bNewShouldBlockOnLoad : 1;                                // 0x000C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.ForceFeedbackParameters
// 0x000C
struct FEngine_ForceFeedbackParameters
{
	struct FName                                       Tag;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bLooping;                                                 // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreTimeDilation;                                      // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bPlayWhilePaused;                                         // 0x000A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x000B(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.DialogueContext
// 0x0018
struct FEngine_DialogueContext
{
	class UEngine_DialogueVoice*                       Speaker;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UEngine_DialogueVoice*>               Targets;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Engine.PredictProjectilePathParams
// 0x0060
struct FEngine_PredictProjectilePathParams
{
	struct FVector                                     StartLocation;                                            // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LaunchVelocity;                                           // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTraceWithCollision;                                      // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	float                                              ProjectileRadius;                                         // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSimTime;                                               // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTraceWithChannel;                                        // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ECollisionChannel>      TraceChannel;                                             // 0x0025(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0026(0x0002) MISSED OFFSET
	TArray<TEnumAsByte<FEngine_Engine_EObjectTypeQuery>> ObjectTypes;                                              // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class AEngine_Actor*>                       ActorsToIgnore;                                           // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              SimFrequency;                                             // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OverrideGravityZ;                                         // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_EDrawDebugTrace>        DrawDebugType;                                            // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	float                                              DrawDebugTime;                                            // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTraceComplex;                                            // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.PredictProjectilePathPointData
// 0x001C
struct FEngine_PredictProjectilePathPointData
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x000C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              Time;                                                     // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct Engine.PredictProjectilePathResult
// 0x00B8
struct FEngine_PredictProjectilePathResult
{
	TArray<struct FEngine_PredictProjectilePathPointData> PathData;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FEngine_PredictProjectilePathPointData      LastTraceDestination;                                     // 0x0010(0x001C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	struct FEngine_HitResult                           HitResult;                                                // 0x002C(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.StatColorMapEntry
// 0x0008
struct FEngine_StatColorMapEntry
{
	float                                              In;                                                       // 0x0000(0x0004) (ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	struct FColor                                      Out;                                                      // 0x0004(0x0004) (ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
};

// ScriptStruct Engine.StatColorMapping
// 0x0028
struct FEngine_StatColorMapping
{
	struct FString                                     StatName;                                                 // 0x0000(0x0010) (ZeroConstructor, Config, GlobalConfig)
	TArray<struct FEngine_StatColorMapEntry>           ColorMap;                                                 // 0x0010(0x0010) (ZeroConstructor, Config, GlobalConfig)
	unsigned char                                      DisableBlend : 1;                                         // 0x0020(0x0001) (Config, GlobalConfig)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.GameNameRedirect
// 0x0010
struct FEngine_GameNameRedirect
{
	struct FName                                       OldGameName;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       NewGameName;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ClassRedirect
// 0x003C
struct FEngine_ClassRedirect
{
	struct FName                                       ObjectName;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       OldClassName;                                             // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       NewClassName;                                             // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       OldSubobjName;                                            // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       NewSubobjName;                                            // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       NewClassClass;                                            // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       NewClassPackage;                                          // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               InstanceOnly;                                             // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.PluginRedirect
// 0x0020
struct FEngine_PluginRedirect
{
	struct FString                                     OldPluginName;                                            // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     NewPluginName;                                            // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.StructRedirect
// 0x0010
struct FEngine_StructRedirect
{
	struct FName                                       OldStructName;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       NewStructName;                                            // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.DirectoryPath
// 0x0010
struct FEngine_DirectoryPath
{
	struct FString                                     Path;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Engine.DropNoteInfo
// 0x0028
struct FEngine_DropNoteInfo
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Comment;                                                  // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.NetDriverDefinition
// 0x0018
struct FEngine_NetDriverDefinition
{
	struct FName                                       DefName;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       DriverClassName;                                          // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       DriverClassNameFallback;                                  // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.DebugDisplayProperty
// 0x0020
struct FEngine_DebugDisplayProperty
{
	class UObject*                                     Obj;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      WithinClass;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.DebugTextInfo
// 0x0060
struct FEngine_DebugTextInfo
{
	class AEngine_Actor*                               SrcActor;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     SrcActorOffset;                                           // 0x0008(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     SrcActorDesiredOffset;                                    // 0x0014(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FString                                     DebugText;                                                // 0x0020(0x0010) (ZeroConstructor)
	float                                              TimeRemaining;                                            // 0x0030(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Duration;                                                 // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FColor                                      TextColor;                                                // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAbsoluteLocation : 1;                                    // 0x003C(0x0001)
	unsigned char                                      bKeepAttachedToActor : 1;                                 // 0x003C(0x0001)
	unsigned char                                      bDrawShadow : 1;                                          // 0x003C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	struct FVector                                     OrigActorLocation;                                        // 0x0040(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	class UEngine_Font*                                Font;                                                     // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              FontScale;                                                // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.TireFrictionScalePair
// 0x0010
struct FEngine_TireFrictionScalePair
{
	class UEngine_TireType*                            TireType;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              FrictionScale;                                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.CameraCacheEntry
// 0x05D0
struct FEngine_CameraCacheEntry
{
	float                                              Timestamp;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
	struct FEngine_MinimalViewInfo                     POV;                                                      // 0x0010(0x05C0)
};

// ScriptStruct Engine.TViewTarget
// 0x05E0
struct FEngine_TViewTarget
{
	class AEngine_Actor*                               Target;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FEngine_MinimalViewInfo                     POV;                                                      // 0x0010(0x05C0) (Edit, BlueprintVisible)
	class AEngine_PlayerState*                         PlayerState;                                              // 0x05D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x05D8(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.TouchInputControl
// 0x0068
struct FEngine_TouchInputControl
{
	class UEngine_Texture2D*                           Image1;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UEngine_Texture2D*                           Image2;                                                   // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Center;                                                   // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   VisualSize;                                               // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ThumbSize;                                                // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   InteractionSize;                                          // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   InputScale;                                               // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FInputCore_Key                              MainInputKey;                                             // 0x0038(0x0018) (Edit)
	struct FInputCore_Key                              AltInputKey;                                              // 0x0050(0x0018) (Edit)
};

// ScriptStruct Engine.ReverbSettings
// 0x0020
struct FEngine_ReverbSettings
{
	bool                                               bApplyReverb;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UEngine_ReverbEffect*                        ReverbEffect;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UEngine_SoundEffectSubmixPreset*             ReverbPluginEffect;                                       // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeTime;                                                 // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.InteriorSettings
// 0x0024
struct FEngine_InteriorSettings
{
	bool                                               bIsWorldSettings;                                         // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              ExteriorVolume;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExteriorTime;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExteriorLPF;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExteriorLPFTime;                                          // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InteriorVolume;                                           // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InteriorTime;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InteriorLPF;                                              // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InteriorLPFTime;                                          // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BroadphaseSettings
// 0x0040
struct FEngine_BroadphaseSettings
{
	bool                                               bUseMBPOnClient;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseMBPOnServer;                                          // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseMBPOuterBounds;                                       // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	struct FBox                                        MBPBounds;                                                // 0x0004(0x001C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBox                                        MBPOuterBounds;                                           // 0x0020(0x001C) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           MBPNumSubdivs;                                            // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.NetViewer
// 0x0030
struct FEngine_NetViewer
{
	class UEngine_NetConnection*                       Connection;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class AEngine_Actor*                               InViewer;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class AEngine_Actor*                               ViewTarget;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     ViewLocation;                                             // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     ViewDir;                                                  // 0x0024(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.StaticMeshComponentLODInfo
// 0x00A8
struct FEngine_StaticMeshComponentLODInfo
{
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0000(0x00A8) MISSED OFFSET
};

// ScriptStruct Engine.StreamingTextureBuildInfo
// 0x000C
struct FEngine_StreamingTextureBuildInfo
{
	uint32_t                                           PackedRelativeBox;                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TextureLevelIndex;                                        // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TexelFactor;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.LightmassPrimitiveSettings
// 0x0018
struct FEngine_LightmassPrimitiveSettings
{
	unsigned char                                      bUseTwoSidedLighting : 1;                                 // 0x0000(0x0001) (Edit)
	unsigned char                                      bShadowIndirectOnly : 1;                                  // 0x0000(0x0001) (Edit)
	unsigned char                                      bUseEmissiveForStaticLighting : 1;                        // 0x0000(0x0001) (Edit)
	unsigned char                                      bUseVertexNormalForHemisphereGather : 1;                  // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              EmissiveLightFalloffExponent;                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EmissiveLightExplicitInfluenceRadius;                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EmissiveBoost;                                            // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DiffuseBoost;                                             // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FullyOccludedSamplesFraction;                             // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.InstancedStaticMeshInstanceData
// 0x0040
struct FEngine_InstancedStaticMeshInstanceData
{
	struct FMatrix                                     Transform;                                                // 0x0000(0x0040) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.InstancedStaticMeshMappingInfo
// 0x0008
struct FEngine_InstancedStaticMeshMappingInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.LightmassMaterialInterfaceSettings
// 0x0010
struct FEngine_LightmassMaterialInterfaceSettings
{
	float                                              EmissiveBoost;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DiffuseBoost;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ExportResolutionScale;                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCastShadowAsMasked : 1;                                  // 0x000C(0x0001) (Edit)
	unsigned char                                      bOverrideCastShadowAsMasked : 1;                          // 0x000C(0x0001)
	unsigned char                                      bOverrideEmissiveBoost : 1;                               // 0x000C(0x0001)
	unsigned char                                      bOverrideDiffuseBoost : 1;                                // 0x000C(0x0001)
	unsigned char                                      bOverrideExportResolutionScale : 1;                       // 0x000C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.MaterialTextureInfo
// 0x0010
struct FEngine_MaterialTextureInfo
{
	float                                              SamplingScale;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                UVChannelIndex;                                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       TextureName;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.MaterialParameterInfo
// 0x0010
struct FEngine_MaterialParameterInfo
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_EMaterialParameterAssociation> Association;                                              // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                Index;                                                    // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ScalarParameterValue
// 0x0024
struct FEngine_ScalarParameterValue
{
	struct FEngine_MaterialParameterInfo               ParameterInfo;                                            // 0x0000(0x0010) (Edit, BlueprintVisible)
	float                                              ParameterValue;                                           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ExpressionGUID;                                           // 0x0014(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.VectorParameterValue
// 0x0030
struct FEngine_VectorParameterValue
{
	struct FEngine_MaterialParameterInfo               ParameterInfo;                                            // 0x0000(0x0010) (Edit, BlueprintVisible)
	struct FLinearColor                                ParameterValue;                                           // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ExpressionGUID;                                           // 0x0020(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TextureParameterValue
// 0x0028
struct FEngine_TextureParameterValue
{
	struct FEngine_MaterialParameterInfo               ParameterInfo;                                            // 0x0000(0x0010) (Edit, BlueprintVisible)
	class UEngine_Texture*                             ParameterValue;                                           // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ExpressionGUID;                                           // 0x0018(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.RuntimeVirtualTextureParameterValue
// 0x0028
struct FEngine_RuntimeVirtualTextureParameterValue
{
	struct FEngine_MaterialParameterInfo               ParameterInfo;                                            // 0x0000(0x0010) (Edit, BlueprintVisible)
	class UEngine_RuntimeVirtualTexture*               ParameterValue;                                           // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ExpressionGUID;                                           // 0x0018(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.FontParameterValue
// 0x0030
struct FEngine_FontParameterValue
{
	struct FEngine_MaterialParameterInfo               ParameterInfo;                                            // 0x0000(0x0010) (Edit, BlueprintVisible)
	class UEngine_Font*                                FontValue;                                                // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FontPage;                                                 // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ExpressionGUID;                                           // 0x001C(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.MaterialInstanceBasePropertyOverrides
// 0x0008
struct FEngine_MaterialInstanceBasePropertyOverrides
{
	unsigned char                                      bOverride_OpacityMaskClipValue : 1;                       // 0x0000(0x0001) (Edit)
	unsigned char                                      bOverride_BlendMode : 1;                                  // 0x0000(0x0001) (Edit)
	unsigned char                                      bOverride_ShadingModel : 1;                               // 0x0000(0x0001) (Edit)
	unsigned char                                      bOverride_DitheredLODTransition : 1;                      // 0x0000(0x0001) (Edit)
	unsigned char                                      bOverride_CastDynamicShadowAsMasked : 1;                  // 0x0000(0x0001) (Edit)
	unsigned char                                      bOverride_TwoSided : 1;                                   // 0x0000(0x0001) (Edit)
	unsigned char                                      TwoSided : 1;                                             // 0x0000(0x0001) (Edit)
	unsigned char                                      DitheredLODTransition : 1;                                // 0x0000(0x0001) (Edit)
	unsigned char                                      bCastDynamicShadowAsMasked : 1;                           // 0x0001(0x0001) (Edit)
	TEnumAsByte<FEngine_Engine_EBlendMode>             BlendMode;                                                // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_EMaterialShadingModel>  ShadingModel;                                             // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OpacityMaskClipValue;                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.StaticParameterBase
// 0x0024
struct FEngine_StaticParameterBase
{
	struct FEngine_MaterialParameterInfo               ParameterInfo;                                            // 0x0000(0x0010)
	bool                                               bOverride;                                                // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	struct FGuid                                       ExpressionGUID;                                           // 0x0014(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.StaticSwitchParameter
// 0x0004 (0x0028 - 0x0024)
struct FEngine_StaticSwitchParameter : public FEngine_StaticParameterBase
{
	bool                                               Value;                                                    // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.StaticComponentMaskParameter
// 0x0004 (0x0028 - 0x0024)
struct FEngine_StaticComponentMaskParameter : public FEngine_StaticParameterBase
{
	bool                                               R;                                                        // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               G;                                                        // 0x0025(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               B;                                                        // 0x0026(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               A;                                                        // 0x0027(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.StaticTerrainLayerWeightParameter
// 0x0008 (0x002C - 0x0024)
struct FEngine_StaticTerrainLayerWeightParameter : public FEngine_StaticParameterBase
{
	int                                                WeightmapIndex;                                           // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bWeightBasedBlend;                                        // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.MaterialLayersFunctions
// 0x0040
struct FEngine_MaterialLayersFunctions
{
	TArray<class UEngine_MaterialFunctionInterface*>   Layers;                                                   // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<class UEngine_MaterialFunctionInterface*>   Blends;                                                   // 0x0010(0x0010) (Edit, ZeroConstructor)
	TArray<bool>                                       LayerStates;                                              // 0x0020(0x0010) (Edit, ZeroConstructor)
	struct FString                                     KeyString;                                                // 0x0030(0x0010) (ZeroConstructor, Deprecated)
};

// ScriptStruct Engine.StaticMaterialLayersParameter
// 0x0044 (0x0068 - 0x0024)
struct FEngine_StaticMaterialLayersParameter : public FEngine_StaticParameterBase
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FEngine_MaterialLayersFunctions             Value;                                                    // 0x0028(0x0040)
};

// ScriptStruct Engine.StaticParameterSet
// 0x0040
struct FEngine_StaticParameterSet
{
	TArray<struct FEngine_StaticSwitchParameter>       StaticSwitchParameters;                                   // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FEngine_StaticComponentMaskParameter> StaticComponentMaskParameters;                            // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FEngine_StaticTerrainLayerWeightParameter> TerrainLayerWeightParameters;                             // 0x0020(0x0010) (ZeroConstructor)
	TArray<struct FEngine_StaticMaterialLayersParameter> MaterialLayersParameters;                                 // 0x0030(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.BPComponentClassOverride
// 0x0010
struct FEngine_BPComponentClassOverride
{
	struct FName                                       ComponentName;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      ComponentClass;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BlueprintComponentChangedPropertyInfo
// 0x0018
struct FEngine_BlueprintComponentChangedPropertyInfo
{
	struct FName                                       PropertyName;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                ArrayIndex;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UStruct*                                     PropertyScope;                                            // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BlueprintCookedComponentInstancingData
// 0x0048
struct FEngine_BlueprintCookedComponentInstancingData
{
	TArray<struct FEngine_BlueprintComponentChangedPropertyInfo> ChangedPropertyList;                                      // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x11];                                      // 0x0010(0x0011) MISSED OFFSET
	bool                                               bHasValidCookedData;                                      // 0x0021(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x26];                                      // 0x0022(0x0026) MISSED OFFSET
};

// ScriptStruct Engine.SoundConcurrencySettings
// 0x0020
struct FEngine_SoundConcurrencySettings
{
	int                                                MaxCount;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bLimitToOwner : 1;                                        // 0x0004(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	TEnumAsByte<FEngine_Engine_EMaxConcurrentResolutionRule> ResolutionRule;                                           // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              VolumeScale;                                              // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VolumeScaleAttackTime;                                    // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bVolumeScaleCanRelease : 1;                               // 0x0014(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	float                                              VolumeScaleReleaseTime;                                   // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VoiceStealReleaseTime;                                    // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SoundSubmixSendInfo
// 0x00B0
struct FEngine_SoundSubmixSendInfo
{
	FEngine_Engine_ESendLevelControlMethod             SendLevelControlMethod;                                   // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UEngine_SoundSubmix*                         SoundSubmix;                                              // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SendLevel;                                                // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinSendLevel;                                             // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSendLevel;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinSendDistance;                                          // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSendDistance;                                          // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FEngine_RuntimeFloatCurve                   CustomSendLevelCurve;                                     // 0x0028(0x0088) (Edit, BlueprintVisible)
};

// ScriptStruct Engine.SoundSourceBusSendInfo
// 0x00B0
struct FEngine_SoundSourceBusSendInfo
{
	FEngine_Engine_ESourceBusSendLevelControlMethod    SourceBusSendLevelControlMethod;                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UEngine_SoundSourceBus*                      SoundSourceBus;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SendLevel;                                                // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinSendLevel;                                             // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSendLevel;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinSendDistance;                                          // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSendDistance;                                          // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FEngine_RuntimeFloatCurve                   CustomSendLevelCurve;                                     // 0x0028(0x0088) (Edit, BlueprintVisible)
};

// ScriptStruct Engine.SoundWaveSpectralDataEntry
// 0x0008
struct FEngine_SoundWaveSpectralDataEntry
{
	float                                              Magnitude;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              NormalizedMagnitude;                                      // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SoundWaveSpectralTimeData
// 0x0018
struct FEngine_SoundWaveSpectralTimeData
{
	TArray<struct FEngine_SoundWaveSpectralDataEntry>  Data;                                                     // 0x0000(0x0010) (ZeroConstructor)
	float                                              TimeSec;                                                  // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.SoundWaveEnvelopeTimeData
// 0x0008
struct FEngine_SoundWaveEnvelopeTimeData
{
	float                                              Amplitude;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeSec;                                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SubtitleCue
// 0x0020
struct FEngine_SubtitleCue
{
	struct FText                                       Text;                                                     // 0x0000(0x0018) (Edit)
	float                                              Time;                                                     // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.InterpolationParameter
// 0x0008
struct FEngine_InterpolationParameter
{
	float                                              InterpolationTime;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_EFilterInterpolationType> InterpolationType;                                        // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.BoneReference
// 0x0010
struct FEngine_BoneReference
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.PerBoneInterpolation
// 0x0014
struct FEngine_PerBoneInterpolation
{
	struct FEngine_BoneReference                       BoneReference;                                            // 0x0000(0x0010) (Edit)
	float                                              InterpolationSpeedPerSec;                                 // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BlendSample
// 0x0018
struct FEngine_BlendSample
{
	class UEngine_AnimSequence*                        Animation;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SampleValue;                                              // 0x0008(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RateScale;                                                // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.EditorElement
// 0x0018
struct FEngine_EditorElement
{
	int                                                Indices[0x3];                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Weights[0x3];                                             // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BlendParameter
// 0x0020
struct FEngine_BlendParameter
{
	struct FString                                     DisplayName;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)
	float                                              Min;                                                      // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                GridNum;                                                  // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.BakedStateExitTransition
// 0x0020
struct FEngine_BakedStateExitTransition
{
	int                                                CanTakeDelegateIndex;                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CustomResultNodeIndex;                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TransitionIndex;                                          // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bDesiredTransitionReturnValue;                            // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bAutomaticRemainingTimeRule;                              // 0x000D(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
	TArray<int>                                        PoseEvaluatorLinks;                                       // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.BakedAnimationState
// 0x0058
struct FEngine_BakedAnimationState
{
	struct FName                                       StateName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FEngine_BakedStateExitTransition>    Transitions;                                              // 0x0008(0x0010) (ZeroConstructor)
	int                                                StateRootNodeIndex;                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                StartNotify;                                              // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EndNotify;                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FullyBlendedNotify;                                       // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsAConduit;                                              // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                EntryRuleNodeIndex;                                       // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        PlayerNodeIndices;                                        // 0x0030(0x0010) (ZeroConstructor)
	TArray<int>                                        LayerNodeIndices;                                         // 0x0040(0x0010) (ZeroConstructor)
	bool                                               bAlwaysResetOnEntry;                                      // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.AnimationStateBase
// 0x0008
struct FEngine_AnimationStateBase
{
	struct FName                                       StateName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimationTransitionBetweenStates
// 0x0038 (0x0040 - 0x0008)
struct FEngine_AnimationTransitionBetweenStates : public FEngine_AnimationStateBase
{
	int                                                PreviousState;                                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NextState;                                                // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CrossfadeDuration;                                        // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                StartNotify;                                              // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EndNotify;                                                // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                InterruptNotify;                                          // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	FEngine_Engine_EAlphaBlendOption                   BlendMode;                                                // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	class UEngine_CurveFloat*                          CustomCurve;                                              // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEngine_BlendProfile*                        BlendProfile;                                             // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ETransitionLogicType>   LogicType;                                                // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.BakedAnimationStateMachine
// 0x0030
struct FEngine_BakedAnimationStateMachine
{
	struct FName                                       MachineName;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                InitialState;                                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<struct FEngine_BakedAnimationState>         States;                                                   // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FEngine_AnimationTransitionBetweenStates> Transitions;                                              // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.CachedPoseIndices
// 0x0010
struct FEngine_CachedPoseIndices
{
	TArray<int>                                        OrderedSavedPoseNodeIndices;                              // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.ExposedValueCopyRecord
// 0x0038
struct FEngine_ExposedValueCopyRecord
{
	struct FName                                       SourcePropertyName;                                       // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       SourceSubPropertyName;                                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                SourceArrayIndex;                                         // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bInstanceIsTarget;                                        // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	FEngine_Engine_EPostCopyOperation                  PostCopyOperation;                                        // 0x0015(0x0001) (ZeroConstructor, IsPlainOldData)
	FEngine_Engine_ECopyType                           CopyType;                                                 // 0x0016(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0017(0x0001) MISSED OFFSET
	class UProperty*                                   DestProperty;                                             // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                DestArrayIndex;                                           // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Size;                                                     // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	class UProperty*                                   CachedSourceProperty;                                     // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class UProperty*                                   CachedSourceStructSubProperty;                            // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ExposedValueHandler
// 0x0030
struct FEngine_ExposedValueHandler
{
	struct FName                                       BoundFunction;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FEngine_ExposedValueCopyRecord>      CopyRecords;                                              // 0x0008(0x0010) (ZeroConstructor)
	class UFunction*                                   Function;                                                 // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	class UStructProperty*                             ValueHandlerNodeProperty;                                 // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.GraphAssetPlayerInformation
// 0x0010
struct FEngine_GraphAssetPlayerInformation
{
	TArray<int>                                        PlayerNodeIndices;                                        // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.AnimGraphBlendOptions
// 0x0008
struct FEngine_AnimGraphBlendOptions
{
	float                                              BlendInTime;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlendOutTime;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimBlueprintFunction
// 0x0068
struct FEngine_AnimBlueprintFunction
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Group;                                                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                OutputPoseNodeIndex;                                      // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<struct FName>                               InputPoseNames;                                           // 0x0018(0x0010) (ZeroConstructor)
	TArray<int>                                        InputPoseNodeIndices;                                     // 0x0028(0x0010) (ZeroConstructor)
	class UStructProperty*                             OutputPoseNodeProperty;                                   // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UStructProperty*>                     InputPoseNodeProperties;                                  // 0x0040(0x0010) (ZeroConstructor, Transient)
	TArray<class UProperty*>                           InputProperties;                                          // 0x0050(0x0010) (ZeroConstructor, Transient)
	bool                                               bImplemented;                                             // 0x0060(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.SmartName
// 0x000C
struct FEngine_SmartName
{
	struct FName                                       DisplayName;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.AnimCurveBase
// 0x0018
struct FEngine_AnimCurveBase
{
	struct FName                                       LastObservedName;                                         // 0x0000(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FEngine_SmartName                           Name;                                                     // 0x0008(0x000C)
	int                                                CurveTypeFlags;                                           // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.FloatCurve
// 0x0080 (0x0098 - 0x0018)
struct FEngine_FloatCurve : public FEngine_AnimCurveBase
{
	struct FEngine_RichCurve                           FloatCurve;                                               // 0x0018(0x0080)
};

// ScriptStruct Engine.RawCurveTracks
// 0x0010
struct FEngine_RawCurveTracks
{
	TArray<struct FEngine_FloatCurve>                  FloatCurves;                                              // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.AnimSegment
// 0x0020
struct FEngine_AnimSegment
{
	class UEngine_AnimSequenceBase*                    AnimReference;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StartPos;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              AnimStartTime;                                            // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AnimEndTime;                                              // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AnimPlayRate;                                             // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                LoopingCount;                                             // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.AnimTrack
// 0x0010
struct FEngine_AnimTrack
{
	TArray<struct FEngine_AnimSegment>                 AnimSegments;                                             // 0x0000(0x0010) (Edit, EditFixedSize, ZeroConstructor)
};

// ScriptStruct Engine.AnimGroupInfo
// 0x0018
struct FEngine_AnimGroupInfo
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AlphaBlend
// 0x0030
struct FEngine_AlphaBlend
{
	class UEngine_CurveFloat*                          CustomCurve;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlendTime;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x000C(0x0018) MISSED OFFSET
	FEngine_Engine_EAlphaBlendOption                   BlendOption;                                              // 0x0024(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xB];                                       // 0x0025(0x000B) MISSED OFFSET
};

// ScriptStruct Engine.AnimSyncMarker
// 0x000C
struct FEngine_AnimSyncMarker
{
	struct FName                                       MarkerName;                                               // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.MarkerSyncData
// 0x0020
struct FEngine_MarkerSyncData
{
	TArray<struct FEngine_AnimSyncMarker>              AuthoredSyncMarkers;                                      // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.CompositeSection
// 0x0028 (0x0058 - 0x0030)
struct FEngine_CompositeSection : public FEngine_AnimLinkableElement
{
	struct FName                                       SectionName;                                              // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // 0x0038(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FName                                       NextSectionName;                                          // 0x003C(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	TArray<class UEngine_AnimMetaData*>                MetaData;                                                 // 0x0048(0x0010) (Edit, ExportObject, ZeroConstructor)
};

// ScriptStruct Engine.SlotAnimationTrack
// 0x0018
struct FEngine_SlotAnimationTrack
{
	struct FName                                       SlotName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FEngine_AnimTrack                           AnimTrack;                                                // 0x0008(0x0010) (Edit)
};

// ScriptStruct Engine.BranchingPoint
// 0x0010 (0x0040 - 0x0030)
struct FEngine_BranchingPoint : public FEngine_AnimLinkableElement
{
	struct FName                                       EventName;                                                // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DisplayTime;                                              // 0x0038(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              TriggerTimeOffset;                                        // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BranchingPointMarker
// 0x000C
struct FEngine_BranchingPointMarker
{
	int                                                NotifyIndex;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TriggerTime;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_EAnimNotifyEventType>   NotifyEventType;                                          // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.TimeStretchCurveMarker
// 0x0010
struct FEngine_TimeStretchCurveMarker
{
	float                                              Time[0x3];                                                // 0x0000(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              ALPHA;                                                    // 0x000C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct Engine.TimeStretchCurve
// 0x0028
struct FEngine_TimeStretchCurve
{
	float                                              SamplingRate;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CurveValueMinPrecision;                                   // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FEngine_TimeStretchCurveMarker>      Markers;                                                  // 0x0008(0x0010) (Edit, ZeroConstructor, EditConst)
	float                                              Sum_dT_i_by_C_i[0x3];                                     // 0x0018(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.TrackToSkeletonMap
// 0x0004
struct FEngine_TrackToSkeletonMap
{
	int                                                BoneTreeIndex;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimSetMeshLinkup
// 0x0010
struct FEngine_AnimSetMeshLinkup
{
	TArray<int>                                        BoneToTrackTable;                                         // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.PrimaryAssetRules
// 0x000C
struct FEngine_PrimaryAssetRules
{
	int                                                Priority;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ChunkId;                                                  // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bApplyRecursively;                                        // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	FEngine_Engine_EPrimaryAssetCookRule               CookRule;                                                 // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.PrimaryAssetTypeInfo
// 0x0088
struct FEngine_PrimaryAssetTypeInfo
{
	struct FName                                       PrimaryAssetType;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) UNKNOWN PROPERTY: SoftClassProperty Engine.PrimaryAssetTypeInfo.AssetBaseClass
	class UClass*                                      AssetBaseClassLoaded;                                     // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bHasBlueprintClasses;                                     // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsEditorOnly;                                            // 0x0039(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x003A(0x0006) MISSED OFFSET
	TArray<struct FEngine_DirectoryPath>               Directories;                                              // 0x0040(0x0010) (Edit, ZeroConstructor)
	TArray<struct FSoftObjectPath>                     SpecificAssets;                                           // 0x0050(0x0010) (Edit, ZeroConstructor)
	struct FEngine_PrimaryAssetRules                   Rules;                                                    // 0x0060(0x000C) (Edit)
	unsigned char                                      UnknownData02[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	TArray<struct FString>                             AssetScanPaths;                                           // 0x0070(0x0010) (ZeroConstructor, Transient)
	bool                                               bIsDynamicAsset;                                          // 0x0080(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	int                                                NumberOfAssets;                                           // 0x0084(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Engine.PrimaryAssetRulesOverride
// 0x001C
struct FEngine_PrimaryAssetRulesOverride
{
	struct FPrimaryAssetId                             PrimaryAssetId;                                           // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FEngine_PrimaryAssetRules                   Rules;                                                    // 0x0010(0x000C) (Edit)
};

// ScriptStruct Engine.PrimaryAssetRulesCustomOverride
// 0x0038
struct FEngine_PrimaryAssetRulesCustomOverride
{
	struct FPrimaryAssetType                           PrimaryAssetType;                                         // 0x0000(0x0008) (Edit, ZeroConstructor)
	struct FEngine_DirectoryPath                       FilterDirectory;                                          // 0x0008(0x0010) (Edit)
	struct FString                                     FilterString;                                             // 0x0018(0x0010) (Edit, ZeroConstructor)
	struct FEngine_PrimaryAssetRules                   Rules;                                                    // 0x0028(0x000C) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.AssetManagerRedirect
// 0x0020
struct FEngine_AssetManagerRedirect
{
	struct FString                                     Old;                                                      // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FString                                     New;                                                      // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Engine.AssetMapping
// 0x0010
struct FEngine_AssetMapping
{
	class UEngine_AnimationAsset*                      SourceAsset;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UEngine_AnimationAsset*                      TargetAsset;                                              // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AtmospherePrecomputeParameters
// 0x002C
struct FEngine_AtmospherePrecomputeParameters
{
	float                                              DensityHeight;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DecayHeight;                                              // 0x0004(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                MaxScatteringOrder;                                       // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TransmittanceTexWidth;                                    // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TransmittanceTexHeight;                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                IrradianceTexWidth;                                       // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                IrradianceTexHeight;                                      // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                InscatterAltitudeSampleNum;                               // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                InscatterMuNum;                                           // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                InscatterMuSNum;                                          // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                InscatterNuNum;                                           // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AudioQualitySettings
// 0x0020
struct FEngine_AudioQualitySettings
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (Edit)
	int                                                MaxChannels;                                              // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.EditorMapPerformanceTestDefinition
// 0x0020
struct FEngine_EditorMapPerformanceTestDefinition
{
	struct FSoftObjectPath                             PerformanceTestmap;                                       // 0x0000(0x0018) (Edit, ZeroConstructor, Config)
	int                                                TestTimer;                                                // 0x0018(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.FilePath
// 0x0010
struct FEngine_FilePath
{
	struct FString                                     FilePath;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Engine.ImportFactorySettingValues
// 0x0020
struct FEngine_ImportFactorySettingValues
{
	struct FString                                     SettingName;                                              // 0x0000(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     Value;                                                    // 0x0010(0x0010) (Edit, ZeroConstructor, Config)
};

// ScriptStruct Engine.EditorImportWorkflowDefinition
// 0x0020
struct FEngine_EditorImportWorkflowDefinition
{
	struct FEngine_FilePath                            ImportFilePath;                                           // 0x0000(0x0010) (Edit, Config)
	TArray<struct FEngine_ImportFactorySettingValues>  FactorySettings;                                          // 0x0010(0x0010) (Edit, ZeroConstructor, Config)
};

// ScriptStruct Engine.BuildPromotionImportWorkflowSettings
// 0x0150
struct FEngine_BuildPromotionImportWorkflowSettings
{
	struct FEngine_EditorImportWorkflowDefinition      Diffuse;                                                  // 0x0000(0x0020) (Edit, Config)
	struct FEngine_EditorImportWorkflowDefinition      Normal;                                                   // 0x0020(0x0020) (Edit, Config)
	struct FEngine_EditorImportWorkflowDefinition      StaticMesh;                                               // 0x0040(0x0020) (Edit, Config)
	struct FEngine_EditorImportWorkflowDefinition      ReimportStaticMesh;                                       // 0x0060(0x0020) (Edit, Config)
	struct FEngine_EditorImportWorkflowDefinition      BlendShapeMesh;                                           // 0x0080(0x0020) (Edit, Config)
	struct FEngine_EditorImportWorkflowDefinition      MorphMesh;                                                // 0x00A0(0x0020) (Edit, Config)
	struct FEngine_EditorImportWorkflowDefinition      SkeletalMesh;                                             // 0x00C0(0x0020) (Edit, Config)
	struct FEngine_EditorImportWorkflowDefinition      Animation;                                                // 0x00E0(0x0020) (Edit, Config)
	struct FEngine_EditorImportWorkflowDefinition      Sound;                                                    // 0x0100(0x0020) (Edit, Config)
	struct FEngine_EditorImportWorkflowDefinition      SurroundSound;                                            // 0x0120(0x0020) (Edit, Config)
	TArray<struct FEngine_EditorImportWorkflowDefinition> OtherAssetsToImport;                                      // 0x0140(0x0010) (Edit, ZeroConstructor, Config)
};

// ScriptStruct Engine.BuildPromotionOpenAssetSettings
// 0x0060
struct FEngine_BuildPromotionOpenAssetSettings
{
	struct FEngine_FilePath                            BlueprintAsset;                                           // 0x0000(0x0010) (Edit, Config)
	struct FEngine_FilePath                            MaterialAsset;                                            // 0x0010(0x0010) (Edit, Config)
	struct FEngine_FilePath                            ParticleSystemAsset;                                      // 0x0020(0x0010) (Edit, Config)
	struct FEngine_FilePath                            SkeletalMeshAsset;                                        // 0x0030(0x0010) (Edit, Config)
	struct FEngine_FilePath                            StaticMeshAsset;                                          // 0x0040(0x0010) (Edit, Config)
	struct FEngine_FilePath                            TextureAsset;                                             // 0x0050(0x0010) (Edit, Config)
};

// ScriptStruct Engine.BuildPromotionNewProjectSettings
// 0x0020
struct FEngine_BuildPromotionNewProjectSettings
{
	struct FEngine_DirectoryPath                       NewProjectFolderOverride;                                 // 0x0000(0x0010) (Edit)
	struct FString                                     NewProjectNameOverride;                                   // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Engine.BuildPromotionTestSettings
// 0x01F0
struct FEngine_BuildPromotionTestSettings
{
	struct FEngine_FilePath                            DefaultStaticMeshAsset;                                   // 0x0000(0x0010) (Edit)
	struct FEngine_BuildPromotionImportWorkflowSettings ImportWorkflow;                                           // 0x0010(0x0150) (Edit)
	struct FEngine_BuildPromotionOpenAssetSettings     OpenAssets;                                               // 0x0160(0x0060) (Edit)
	struct FEngine_BuildPromotionNewProjectSettings    NewProjectSettings;                                       // 0x01C0(0x0020) (Edit)
	struct FEngine_FilePath                            SourceControlMaterial;                                    // 0x01E0(0x0010) (Edit)
};

// ScriptStruct Engine.MaterialEditorPromotionSettings
// 0x0030
struct FEngine_MaterialEditorPromotionSettings
{
	struct FEngine_FilePath                            DefaultMaterialAsset;                                     // 0x0000(0x0010) (Edit)
	struct FEngine_FilePath                            DefaultDiffuseTexture;                                    // 0x0010(0x0010) (Edit)
	struct FEngine_FilePath                            DefaultNormalTexture;                                     // 0x0020(0x0010) (Edit)
};

// ScriptStruct Engine.ParticleEditorPromotionSettings
// 0x0010
struct FEngine_ParticleEditorPromotionSettings
{
	struct FEngine_FilePath                            DefaultParticleAsset;                                     // 0x0000(0x0010) (Edit)
};

// ScriptStruct Engine.BlueprintEditorPromotionSettings
// 0x0030
struct FEngine_BlueprintEditorPromotionSettings
{
	struct FEngine_FilePath                            FirstMeshPath;                                            // 0x0000(0x0010) (Edit)
	struct FEngine_FilePath                            SecondMeshPath;                                           // 0x0010(0x0010) (Edit)
	struct FEngine_FilePath                            DefaultParticleAsset;                                     // 0x0020(0x0010) (Edit)
};

// ScriptStruct Engine.ExternalToolDefinition
// 0x0060
struct FEngine_ExternalToolDefinition
{
	struct FString                                     ToolName;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor, Config)
	struct FEngine_FilePath                            ExecutablePath;                                           // 0x0010(0x0010) (Edit, Config)
	struct FString                                     CommandLineOptions;                                       // 0x0020(0x0010) (Edit, ZeroConstructor, Config)
	struct FEngine_DirectoryPath                       WorkingDirectory;                                         // 0x0030(0x0010) (Edit, Config)
	struct FString                                     ScriptExtension;                                          // 0x0040(0x0010) (Edit, ZeroConstructor, Config)
	struct FEngine_DirectoryPath                       ScriptDirectory;                                          // 0x0050(0x0010) (Edit, Config)
};

// ScriptStruct Engine.EditorImportExportTestDefinition
// 0x0038
struct FEngine_EditorImportExportTestDefinition
{
	struct FEngine_FilePath                            ImportFilePath;                                           // 0x0000(0x0010) (Edit, Config)
	struct FString                                     ExportFileExtension;                                      // 0x0010(0x0010) (Edit, ZeroConstructor, Config)
	bool                                               bSkipExport;                                              // 0x0020(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	TArray<struct FEngine_ImportFactorySettingValues>  FactorySettings;                                          // 0x0028(0x0010) (Edit, ZeroConstructor, Config)
};

// ScriptStruct Engine.LaunchOnTestSettings
// 0x0020
struct FEngine_LaunchOnTestSettings
{
	struct FEngine_FilePath                            LaunchOnTestmap;                                          // 0x0000(0x0010) (Edit, Config)
	struct FString                                     DeviceID;                                                 // 0x0010(0x0010) (Edit, ZeroConstructor, Config)
};

// ScriptStruct Engine.BandwidthTestItem
// 0x0010
struct FEngine_BandwidthTestItem
{
	TArray<unsigned char>                              Kilobyte;                                                 // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.BandwidthTestGenerator
// 0x0020
struct FEngine_BandwidthTestGenerator
{
	TArray<struct FEngine_BandwidthTestItem>           ReplicatedBuffers;                                        // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.BoneNode
// 0x0010
struct FEngine_BoneNode
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                ParentIndex;                                              // 0x0008(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_EBoneTranslationRetargetingMode> TranslationRetargetingMode;                               // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.VirtualBone
// 0x0018
struct FEngine_VirtualBone
{
	struct FName                                       SourceBoneName;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       TargetBoneName;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       VirtualBoneName;                                          // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SmartNameContainer
// 0x0050
struct FEngine_SmartNameContainer
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct Engine.AnimSlotGroup
// 0x0018
struct FEngine_AnimSlotGroup
{
	struct FName                                       GroupName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               SlotNames;                                                // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.BlendProfileBoneEntry
// 0x0014
struct FEngine_BlendProfileBoneEntry
{
	struct FEngine_BoneReference                       BoneReference;                                            // 0x0000(0x0010) (Edit)
	float                                              BlendScale;                                               // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.KShapeElem
// 0x0030
struct FEngine_KShapeElem
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	float                                              RestOffset;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // 0x000C(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	unsigned char                                      bContributeToMass : 1;                                    // 0x0018(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x17];                                      // 0x0019(0x0017) MISSED OFFSET
};

// ScriptStruct Engine.KSphereElem
// 0x0010 (0x0040 - 0x0030)
struct FEngine_KSphereElem : public FEngine_KShapeElem
{
	struct FVector                                     Center;                                                   // 0x0030(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.KBoxElem
// 0x0028 (0x0058 - 0x0030)
struct FEngine_KBoxElem : public FEngine_KShapeElem
{
	struct FVector                                     Center;                                                   // 0x0030(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x003C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              X;                                                        // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.KSphylElem
// 0x0020 (0x0050 - 0x0030)
struct FEngine_KSphylElem : public FEngine_KShapeElem
{
	struct FVector                                     Center;                                                   // 0x0030(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x003C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Length;                                                   // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.KConvexElem
// 0x0070 (0x00A0 - 0x0030)
struct FEngine_KConvexElem : public FEngine_KShapeElem
{
	TArray<struct FVector>                             VertexData;                                               // 0x0030(0x0010) (ZeroConstructor)
	struct FBox                                        ElemBox;                                                  // 0x0040(0x001C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0060(0x0030) (IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0090(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.KTaperedCapsuleElem
// 0x0028 (0x0058 - 0x0030)
struct FEngine_KTaperedCapsuleElem : public FEngine_KShapeElem
{
	struct FVector                                     Center;                                                   // 0x0030(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x003C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Radius0;                                                  // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Radius1;                                                  // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Length;                                                   // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.KAggregateGeom
// 0x0058
struct FEngine_KAggregateGeom
{
	TArray<struct FEngine_KSphereElem>                 SphereElems;                                              // 0x0000(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	TArray<struct FEngine_KBoxElem>                    BoxElems;                                                 // 0x0010(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	TArray<struct FEngine_KSphylElem>                  SphylElems;                                               // 0x0020(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	TArray<struct FEngine_KConvexElem>                 ConvexElems;                                              // 0x0030(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	TArray<struct FEngine_KTaperedCapsuleElem>         TaperedCapsuleElems;                                      // 0x0040(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.BranchFilter
// 0x000C
struct FEngine_BranchFilter
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                BlendDepth;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.InputBlendPose
// 0x0010
struct FEngine_InputBlendPose
{
	TArray<struct FEngine_BranchFilter>                BranchFilters;                                            // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Engine.BuilderPoly
// 0x0020
struct FEngine_BuilderPoly
{
	TArray<int>                                        VertexIndices;                                            // 0x0000(0x0010) (ZeroConstructor)
	int                                                Direction;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       ItemName;                                                 // 0x0014(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                PolyFlags;                                                // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.PooledCameraShakes
// 0x0010
struct FEngine_PooledCameraShakes
{
	TArray<class UEngine_CameraShake*>                 PooledShakes;                                             // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.FOscillator
// 0x000C
struct FEngine_FOscillator
{
	float                                              Amplitude;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Frequency;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_EInitialOscillatorOffset> InitialOffset;                                            // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	FEngine_Engine_EOscillatorWaveform                 Waveform;                                                 // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.ROscillator
// 0x0024
struct FEngine_ROscillator
{
	struct FEngine_FOscillator                         Pitch;                                                    // 0x0000(0x000C) (Edit, BlueprintVisible)
	struct FEngine_FOscillator                         Yaw;                                                      // 0x000C(0x000C) (Edit, BlueprintVisible)
	struct FEngine_FOscillator                         Roll;                                                     // 0x0018(0x000C) (Edit, BlueprintVisible)
};

// ScriptStruct Engine.VOscillator
// 0x0024
struct FEngine_VOscillator
{
	struct FEngine_FOscillator                         X;                                                        // 0x0000(0x000C) (Edit, BlueprintVisible)
	struct FEngine_FOscillator                         Y;                                                        // 0x000C(0x000C) (Edit, BlueprintVisible)
	struct FEngine_FOscillator                         Z;                                                        // 0x0018(0x000C) (Edit, BlueprintVisible)
};

// ScriptStruct Engine.CanvasUVTri
// 0x0060
struct FEngine_CanvasUVTri
{
	struct FVector2D                                   V0_Pos;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   V0_UV;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                V0_Color;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   V1_Pos;                                                   // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   V1_UV;                                                    // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                V1_Color;                                                 // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   V2_Pos;                                                   // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   V2_UV;                                                    // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                V2_Color;                                                 // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.DelegateArray
// 0x0010
struct FEngine_DelegateArray
{
	TArray<struct FScriptDelegate>                     Delegates;                                                // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.CollisionResponseTemplate
// 0x0048
struct FEngine_CollisionResponseTemplate
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ECollisionEnabled>      CollisionEnabled;                                         // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0009(0x0001) MISSED OFFSET
	bool                                               bCanModify;                                               // 0x000A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x21];                                      // 0x000B(0x0021) MISSED OFFSET
	struct FName                                       ObjectTypeName;                                           // 0x002C(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	TArray<struct FEngine_ResponseChannel>             CustomResponses;                                          // 0x0038(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.CustomChannelSetup
// 0x000C
struct FEngine_CustomChannelSetup
{
	TEnumAsByte<FEngine_Engine_ECollisionChannel>      Channel;                                                  // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ECollisionResponse>     DefaultResponse;                                          // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bTraceType;                                               // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bStaticObject;                                            // 0x0003(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CustomProfile
// 0x0018
struct FEngine_CustomProfile
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FEngine_ResponseChannel>             CustomResponses;                                          // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.Redirector
// 0x0010
struct FEngine_Redirector
{
	struct FName                                       OldName;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       NewName;                                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BlueprintComponentDelegateBinding
// 0x0018
struct FEngine_BlueprintComponentDelegateBinding
{
	struct FName                                       ComponentPropertyName;                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       DelegatePropertyName;                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       FunctionNameToBind;                                       // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CullDistanceSizePair
// 0x0008
struct FEngine_CullDistanceSizePair
{
	float                                              Size;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CullDistance;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.NamedCurveValue
// 0x000C
struct FEngine_NamedCurveValue
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TableRowBase
// 0x0008
struct FEngine_TableRowBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.DebugCameraControllerSettingsViewModeIndex
// 0x0010
struct FEngine_DebugCameraControllerSettingsViewModeIndex
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TEnumAsByte<FEngine_Engine_EViewModeIndex>         ViewModeIndex;                                            // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.TextureLODGroup
// 0x0054
struct FEngine_TextureLODGroup
{
	TEnumAsByte<FEngine_Engine_ETextureGroup>          Group;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x0001(0x000B) MISSED OFFSET
	int                                                LODBias;                                                  // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LODBias_Smaller;                                          // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LODBias_Smallest;                                         // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0018(0x0004) MISSED OFFSET
	int                                                NumStreamedMips;                                          // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ETextureMipGenSettings> MipGenSettings;                                           // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	int                                                MinLODSize;                                               // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxLODSize;                                               // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxLODSize_Smaller;                                       // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxLODSize_Smallest;                                      // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                OptionalLODBias;                                          // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                OptionalMaxLODSize;                                       // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FName                                       MinMagFilter;                                             // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       MipFilter;                                                // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	FEngine_Engine_ETextureMipLoadOptions              MipLoadOptions;                                           // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               DuplicateNonOptionalMips;                                 // 0x0051(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0052(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.DialogueContextMapping
// 0x0038
struct FEngine_DialogueContextMapping
{
	struct FEngine_DialogueContext                     Context;                                                  // 0x0000(0x0018) (Edit)
	class UEngine_SoundWave*                           SoundWave;                                                // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     LocalizationKeyFormat;                                    // 0x0020(0x0010) (Edit, ZeroConstructor)
	class UEngine_DialogueSoundWaveProxy*              Proxy;                                                    // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Engine.LightmassLightSettings
// 0x000C
struct FEngine_LightmassLightSettings
{
	float                                              IndirectLightingSaturation;                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ShadowExponent;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseAreaShadowsForStationaryLight;                        // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.LightmassDirectionalLightSettings
// 0x0004 (0x0010 - 0x000C)
struct FEngine_LightmassDirectionalLightSettings : public FEngine_LightmassLightSettings
{
	float                                              LightSourceAngle;                                         // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.RollbackNetStartupActorInfo
// 0x00A0
struct FEngine_RollbackNetStartupActorInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UObject*                                     Archetype;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0010(0x0018) MISSED OFFSET
	class UEngine_Level*                               Level;                                                    // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x60];                                      // 0x0030(0x0060) MISSED OFFSET
	TArray<class UObject*>                             ObjReferences;                                            // 0x0090(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.MulticastRecordOptions
// 0x0018
struct FEngine_MulticastRecordOptions
{
	struct FString                                     FuncPathName;                                             // 0x0000(0x0010) (ZeroConstructor)
	bool                                               bServerSkip;                                              // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bClientSkip;                                              // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
};

// ScriptStruct Engine.EdGraphTerminalType
// 0x001C
struct FEngine_EdGraphTerminalType
{
	struct FName                                       TerminalCategory;                                         // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       TerminalSubCategory;                                      // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UObject>                      TerminalSubCategoryObject;                                // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bTerminalIsConst;                                         // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bTerminalIsWeakPointer;                                   // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x001A(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.EdGraphPinType
// 0x0058
struct FEngine_EdGraphPinType
{
	struct FName                                       PinCategory;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       PinSubCategory;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UObject>                      PinSubCategoryObject;                                     // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FEngine_SimpleMemberReference               PinSubCategoryMemberReference;                            // 0x0018(0x0020)
	struct FEngine_EdGraphTerminalType                 PinValueType;                                             // 0x0038(0x001C)
	FEngine_Engine_EPinContainerType                   ContainerType;                                            // 0x0054(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsArray : 1;                                             // 0x0055(0x0001) (Deprecated)
	unsigned char                                      bIsReference : 1;                                         // 0x0055(0x0001)
	unsigned char                                      bIsConst : 1;                                             // 0x0055(0x0001)
	unsigned char                                      bIsWeakPointer : 1;                                       // 0x0055(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0056(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.ExponentialHeightFogData
// 0x000C
struct FEngine_ExponentialHeightFogData
{
	float                                              FogDensity;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FogHeightFalloff;                                         // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FogHeightOffset;                                          // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.FontCharacter
// 0x0018
struct FEngine_FontCharacter
{
	int                                                StartU;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                StartV;                                                   // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                USize;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                VSize;                                                    // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      TextureIndex;                                             // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                VerticalOffset;                                           // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.FontImportOptionsData
// 0x00B0
struct FEngine_FontImportOptionsData
{
	struct FString                                     FontName;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	float                                              Height;                                                   // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnableAntialiasing : 1;                                  // 0x0014(0x0001) (Edit)
	unsigned char                                      bEnableBold : 1;                                          // 0x0014(0x0001) (Edit)
	unsigned char                                      bEnableItalic : 1;                                        // 0x0014(0x0001) (Edit)
	unsigned char                                      bEnableUnderline : 1;                                     // 0x0014(0x0001) (Edit)
	unsigned char                                      bAlphaOnly : 1;                                           // 0x0014(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	TEnumAsByte<FEngine_Engine_EFontImportCharacterSet> CharacterSet;                                             // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	struct FString                                     Chars;                                                    // 0x0020(0x0010) (Edit, ZeroConstructor)
	struct FString                                     UnicodeRange;                                             // 0x0030(0x0010) (Edit, ZeroConstructor)
	struct FString                                     CharsFilePath;                                            // 0x0040(0x0010) (Edit, ZeroConstructor)
	struct FString                                     CharsFileWildcard;                                        // 0x0050(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      bCreatePrintableOnly : 1;                                 // 0x0060(0x0001) (Edit)
	unsigned char                                      bIncludeASCIIRange : 1;                                   // 0x0060(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	struct FLinearColor                                ForegroundColor;                                          // 0x0064(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnableDropShadow : 1;                                    // 0x0074(0x0001) (Edit)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0075(0x0003) MISSED OFFSET
	int                                                TexturePageWidth;                                         // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                TexturePageMaxHeight;                                     // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                XPadding;                                                 // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                YPadding;                                                 // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ExtendBoxTop;                                             // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ExtendBoxBottom;                                          // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ExtendBoxRight;                                           // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ExtendBoxLeft;                                            // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnableLegacyMode : 1;                                    // 0x0098(0x0001) (Edit)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0099(0x0003) MISSED OFFSET
	int                                                Kerning;                                                  // 0x009C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseDistanceFieldAlpha : 1;                               // 0x00A0(0x0001) (Edit)
	unsigned char                                      UnknownData05[0x3];                                       // 0x00A1(0x0003) MISSED OFFSET
	int                                                DistanceFieldScaleFactor;                                 // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DistanceFieldScanRadiusScale;                             // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.ForceFeedbackAttenuationSettings
// 0x0000 (0x00B0 - 0x00B0)
struct FEngine_ForceFeedbackAttenuationSettings : public FEngine_BaseAttenuationSettings
{

};

// ScriptStruct Engine.ForceFeedbackChannelDetails
// 0x0090
struct FEngine_ForceFeedbackChannelDetails
{
	unsigned char                                      bAffectsLeftLarge : 1;                                    // 0x0000(0x0001) (Edit)
	unsigned char                                      bAffectsLeftSmall : 1;                                    // 0x0000(0x0001) (Edit)
	unsigned char                                      bAffectsRightLarge : 1;                                   // 0x0000(0x0001) (Edit)
	unsigned char                                      bAffectsRightSmall : 1;                                   // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FEngine_RuntimeFloatCurve                   Curve;                                                    // 0x0008(0x0088) (Edit)
};

// ScriptStruct Engine.HapticFeedbackDetails_Curve
// 0x0110
struct FEngine_HapticFeedbackDetails_Curve
{
	struct FEngine_RuntimeFloatCurve                   Frequency;                                                // 0x0000(0x0088) (Edit)
	struct FEngine_RuntimeFloatCurve                   Amplitude;                                                // 0x0088(0x0088) (Edit)
};

// ScriptStruct Engine.HLODProxyMesh
// 0x0030
struct FEngine_HLODProxyMesh
{
	TLazyObjectPtr<class AEngine_LODActor>             LODActor;                                                 // 0x0000(0x001C) (Edit, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UEngine_StaticMesh*                          StaticMesh;                                               // 0x0020(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FName                                       Key;                                                      // 0x0028(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct Engine.ImportanceTexture
// 0x0050
struct FEngine_ImportanceTexture
{
	struct FIntPoint                                   Size;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                NumMips;                                                  // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<float>                                      MarginalCDF;                                              // 0x0010(0x0010) (ZeroConstructor)
	TArray<float>                                      ConditionalCDF;                                           // 0x0020(0x0010) (ZeroConstructor)
	TArray<struct FColor>                              TextureData;                                              // 0x0030(0x0010) (ZeroConstructor)
	TWeakObjectPtr<class UEngine_Texture2D>            Texture;                                                  // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_EImportanceWeight>      Weighting;                                                // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.ComponentKey
// 0x0020
struct FEngine_ComponentKey
{
	class UClass*                                      OwnerClass;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       SCSVariableName;                                          // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       AssociatedGuid;                                           // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ComponentOverrideRecord
// 0x0078
struct FEngine_ComponentOverrideRecord
{
	class UClass*                                      ComponentClass;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEngine_ActorComponent*                      ComponentTemplate;                                        // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FEngine_ComponentKey                        ComponentKey;                                             // 0x0010(0x0020)
	struct FEngine_BlueprintCookedComponentInstancingData CookedComponentInstancingData;                            // 0x0030(0x0048)
};

// ScriptStruct Engine.BlueprintInputDelegateBinding
// 0x0004
struct FEngine_BlueprintInputDelegateBinding
{
	unsigned char                                      bConsumeInput : 1;                                        // 0x0000(0x0001)
	unsigned char                                      bExecuteWhenPaused : 1;                                   // 0x0000(0x0001)
	unsigned char                                      bOverrideParentBinding : 1;                               // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.BlueprintInputActionDelegateBinding
// 0x0014 (0x0018 - 0x0004)
struct FEngine_BlueprintInputActionDelegateBinding : public FEngine_BlueprintInputDelegateBinding
{
	struct FName                                       InputActionName;                                          // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_EInputEvent>            InputKeyEvent;                                            // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FName                                       FunctionNameToBind;                                       // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BlueprintInputAxisDelegateBinding
// 0x0010 (0x0014 - 0x0004)
struct FEngine_BlueprintInputAxisDelegateBinding : public FEngine_BlueprintInputDelegateBinding
{
	struct FName                                       InputAxisName;                                            // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       FunctionNameToBind;                                       // 0x000C(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BlueprintInputAxisKeyDelegateBinding
// 0x0024 (0x0028 - 0x0004)
struct FEngine_BlueprintInputAxisKeyDelegateBinding : public FEngine_BlueprintInputDelegateBinding
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FInputCore_Key                              AxisKey;                                                  // 0x0008(0x0018)
	struct FName                                       FunctionNameToBind;                                       // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CachedKeyToActionInfo
// 0x0070
struct FEngine_CachedKeyToActionInfo
{
	class UEngine_PlayerInput*                         PlayerInput;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x68];                                      // 0x0008(0x0068) MISSED OFFSET
};

// ScriptStruct Engine.BlueprintInputKeyDelegateBinding
// 0x0034 (0x0038 - 0x0004)
struct FEngine_BlueprintInputKeyDelegateBinding : public FEngine_BlueprintInputDelegateBinding
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FSlate_InputChord                           InputChord;                                               // 0x0008(0x0020)
	TEnumAsByte<FEngine_Engine_EInputEvent>            InputKeyEvent;                                            // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	struct FName                                       FunctionNameToBind;                                       // 0x002C(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.InputAxisProperties
// 0x0010
struct FEngine_InputAxisProperties
{
	float                                              DeadZone;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Sensitivity;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Exponent;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bInvert : 1;                                              // 0x000C(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.InputAxisConfigEntry
// 0x0018
struct FEngine_InputAxisConfigEntry
{
	struct FName                                       AxisKeyName;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FEngine_InputAxisProperties                 AxisProperties;                                           // 0x0008(0x0010) (Edit)
};

// ScriptStruct Engine.InputActionKeyMapping
// 0x0028
struct FEngine_InputActionKeyMapping
{
	struct FName                                       ActionName;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bShift : 1;                                               // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCtrl : 1;                                                // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bAlt : 1;                                                 // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCmd : 1;                                                 // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FInputCore_Key                              Key;                                                      // 0x0010(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct Engine.InputAxisKeyMapping
// 0x0028
struct FEngine_InputAxisKeyMapping
{
	struct FName                                       AxisName;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FInputCore_Key                              Key;                                                      // 0x0010(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct Engine.InputActionSpeechMapping
// 0x0010
struct FEngine_InputActionSpeechMapping
{
	struct FName                                       ActionName;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SpeechKeyword;                                            // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BlueprintInputTouchDelegateBinding
// 0x000C (0x0010 - 0x0004)
struct FEngine_BlueprintInputTouchDelegateBinding : public FEngine_BlueprintInputDelegateBinding
{
	TEnumAsByte<FEngine_Engine_EInputEvent>            InputKeyEvent;                                            // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FName                                       FunctionNameToBind;                                       // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimControlTrackKey
// 0x0020
struct FEngine_AnimControlTrackKey
{
	float                                              StartTime;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UEngine_AnimSequence*                        AnimSeq;                                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              AnimStartOffset;                                          // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AnimEndOffset;                                            // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AnimPlayRate;                                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bLooping : 1;                                             // 0x001C(0x0001)
	unsigned char                                      bReverse : 1;                                             // 0x001C(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.BoolTrackKey
// 0x0008
struct FEngine_BoolTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Value : 1;                                                // 0x0004(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.InterpControlPoint
// 0x001C
struct FEngine_InterpControlPoint
{
	struct FVector                                     PositionControlPoint;                                     // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPositionIsRelative;                                      // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x000D(0x000F) MISSED OFFSET
};

// ScriptStruct Engine.DirectorTrackCut
// 0x0014
struct FEngine_DirectorTrackCut
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TransitionTime;                                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       TargetCamGroup;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ShotNumber;                                               // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.EventTrackKey
// 0x000C
struct FEngine_EventTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       EventName;                                                // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.PrimitiveMaterialRef
// 0x0018
struct FEngine_PrimitiveMaterialRef
{
	class UEngine_PrimitiveComponent*                  Primitive;                                                // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEngine_DecalComponent*                      Decal;                                                    // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ElementIndex;                                             // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.InterpLookupPoint
// 0x000C
struct FEngine_InterpLookupPoint
{
	struct FName                                       GroupName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.InterpLookupTrack
// 0x0010
struct FEngine_InterpLookupTrack
{
	TArray<struct FEngine_InterpLookupPoint>           Points;                                                   // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.ParticleReplayTrackKey
// 0x000C
struct FEngine_ParticleReplayTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ClipIDNumber;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ToggleTrackKey
// 0x0008
struct FEngine_ToggleTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ETrackToggleAction>     ToggleAction;                                             // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.VisibilityTrackKey
// 0x0008
struct FEngine_VisibilityTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_EVisibilityTrackAction> Action;                                                   // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_EVisibilityTrackCondition> ActiveCondition;                                          // 0x0005(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.SoundTrackKey
// 0x0018
struct FEngine_SoundTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UEngine_SoundBase*                           Sound;                                                    // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.VectorSpringState
// 0x0018
struct FEngine_VectorSpringState
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.FloatSpringState
// 0x0008
struct FEngine_FloatSpringState
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.DrawToRenderTargetContext
// 0x0010
struct FEngine_DrawToRenderTargetContext
{
	class UEngine_TextureRenderTarget2D*               RenderTarget;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.UserActivity
// 0x0018
struct FEngine_UserActivity
{
	struct FString                                     ActionName;                                               // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.GenericStruct
// 0x0004
struct FEngine_GenericStruct
{
	int                                                Data;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CollisionProfileName
// 0x0008
struct FEngine_CollisionProfileName
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TimerHandle
// 0x0008
struct FEngine_TimerHandle
{
	uint64_t                                           Handle;                                                   // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Engine.DebugFloatHistory
// 0x0020
struct FEngine_DebugFloatHistory
{
	TArray<float>                                      Samples;                                                  // 0x0000(0x0010) (ZeroConstructor, Transient)
	float                                              MaxSamples;                                               // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinValue;                                                 // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoAdjustMinMax;                                        // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.FormatArgumentData
// 0x0040
struct FEngine_FormatArgumentData
{
	struct FString                                     ArgumentName;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TEnumAsByte<FEngine_Engine_EFormatArgumentType>    ArgumentValueType;                                        // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FText                                       ArgumentValue;                                            // 0x0018(0x0018) (Edit, BlueprintVisible, DisableEditOnTemplate)
	int                                                ArgumentValueInt;                                         // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              ArgumentValueFloat;                                       // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	FEngine_Engine_ETextGender                         ArgumentValueGender;                                      // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.LayerActorStats
// 0x0010
struct FEngine_LayerActorStats
{
	class UClass*                                      Type;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                Total;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.ReplicatedStaticActorDestructionInfo
// 0x0038
struct FEngine_ReplicatedStaticActorDestructionInfo
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
	class UClass*                                      ObjClass;                                                 // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.LevelStreamingWrapper
// 0x0008
struct FEngine_LevelStreamingWrapper
{
	class UEngine_LevelStreaming*                      StreamingLevel;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.StreamingLevelsToConsider
// 0x0028
struct FEngine_StreamingLevelsToConsider
{
	TArray<struct FEngine_LevelStreamingWrapper>       StreamingLevels;                                          // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0010(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.LevelCollection
// 0x0078
struct FEngine_LevelCollection
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class AEngine_GameStateBase*                       GameState;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEngine_NetDriver*                           NetDriver;                                                // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEngine_DemoNetDriver*                       DemoNetDriver;                                            // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEngine_Level*                               PersistentLevel;                                          // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0028(0x0050) UNKNOWN PROPERTY: SetProperty Engine.LevelCollection.Levels
};

// ScriptStruct Engine.PSCPoolElem
// 0x0010
struct FEngine_PSCPoolElem
{
	class UEngine_ParticleSystemComponent*             PSC;                                                      // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.PSCPool
// 0x0038
struct FEngine_PSCPool
{
	TArray<struct FEngine_PSCPoolElem>                 FreeElements;                                             // 0x0000(0x0010) (ZeroConstructor, Transient)
	TArray<class UEngine_ParticleSystemComponent*>     InUseComponents_Auto;                                     // 0x0010(0x0010) (ExportObject, ZeroConstructor, Transient)
	TArray<class UEngine_ParticleSystemComponent*>     InUseComponents_Manual;                                   // 0x0020(0x0010) (ExportObject, ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.WorldPSCPool
// 0x0058
struct FEngine_WorldPSCPool
{
	TMap<class UEngine_ParticleSystem*, struct FEngine_PSCPool> WorldParticleSystemPools;                                 // 0x0000(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.LightmassPointLightSettings
// 0x0000 (0x000C - 0x000C)
struct FEngine_LightmassPointLightSettings : public FEngine_LightmassLightSettings
{

};

// ScriptStruct Engine.MaterialInput
// 0x000C
struct FEngine_MaterialInput
{
	int                                                OutputIndex;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       ExpressionName;                                           // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ScalarMaterialInput
// 0x0000 (0x000C - 0x000C)
struct FEngine_ScalarMaterialInput : public FEngine_MaterialInput
{

};

// ScriptStruct Engine.VectorMaterialInput
// 0x0000 (0x000C - 0x000C)
struct FEngine_VectorMaterialInput : public FEngine_MaterialInput
{

};

// ScriptStruct Engine.ColorMaterialInput
// 0x0000 (0x000C - 0x000C)
struct FEngine_ColorMaterialInput : public FEngine_MaterialInput
{

};

// ScriptStruct Engine.MaterialShadingModelField
// 0x0002
struct FEngine_MaterialShadingModelField
{
	uint16_t                                           ShadingModelField;                                        // 0x0000(0x0002) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.MaterialAttributesInput
// 0x0004 (0x0010 - 0x000C)
struct FEngine_MaterialAttributesInput : public FEngine_ExpressionInput
{
	int                                                PropertyConnectedBitmask;                                 // 0x000C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Engine.ShadingModelMaterialInput
// 0x0000 (0x000C - 0x000C)
struct FEngine_ShadingModelMaterialInput : public FEngine_MaterialInput
{

};

// ScriptStruct Engine.MaterialFunctionInfo
// 0x0018
struct FEngine_MaterialFunctionInfo
{
	struct FGuid                                       StateId;                                                  // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	class UEngine_MaterialFunctionInterface*           Function;                                                 // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.MaterialParameterCollectionInfo
// 0x0018
struct FEngine_MaterialParameterCollectionInfo
{
	struct FGuid                                       StateId;                                                  // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	class UEngine_MaterialParameterCollection*         ParameterCollection;                                      // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.MaterialSpriteElement
// 0x0028
struct FEngine_MaterialSpriteElement
{
	class UEngine_MaterialInterface*                   Material;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UEngine_CurveFloat*                          DistanceToOpacityCurve;                                   // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bSizeIsInScreenSpace : 1;                                 // 0x0010(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              BaseSizeX;                                                // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BaseSizeY;                                                // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UEngine_CurveFloat*                          DistanceToSizeCurve;                                      // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CurveEdEntry
// 0x0038
struct FEngine_CurveEdEntry
{
	class UObject*                                     CurveObject;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FColor                                      CurveColor;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     CurveName;                                                // 0x0010(0x0010) (ZeroConstructor)
	int                                                bHideCurve;                                               // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                bColorCurve;                                              // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                bFloatingPointColorCurve;                                 // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                bClamp;                                                   // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ClampLow;                                                 // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ClampHigh;                                                // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CurveEdTab
// 0x0030
struct FEngine_CurveEdTab
{
	struct FString                                     TabName;                                                  // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FEngine_CurveEdEntry>                Curves;                                                   // 0x0010(0x0010) (ZeroConstructor)
	float                                              ViewStartInput;                                           // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ViewEndInput;                                             // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ViewStartOutput;                                          // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ViewEndOutput;                                            // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CustomInput
// 0x001C
struct FEngine_CustomInput
{
	struct FName                                       InputName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FEngine_ExpressionInput                     Input;                                                    // 0x0008(0x000C)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0014(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.CollectionParameterBase
// 0x0018
struct FEngine_CollectionParameterBase
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ID;                                                       // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CollectionScalarParameter
// 0x0004 (0x001C - 0x0018)
struct FEngine_CollectionScalarParameter : public FEngine_CollectionParameterBase
{
	float                                              DefaultValue;                                             // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CollectionVectorParameter
// 0x0010 (0x0028 - 0x0018)
struct FEngine_CollectionVectorParameter : public FEngine_CollectionParameterBase
{
	struct FLinearColor                                DefaultValue;                                             // 0x0018(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.InterpGroupActorInfo
// 0x0018
struct FEngine_InterpGroupActorInfo
{
	struct FName                                       ObjectName;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class AEngine_Actor*>                       Actors;                                                   // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Engine.CameraCutInfo
// 0x0010
struct FEngine_CameraCutInfo
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Timestamp;                                                // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.PurchaseInfo
// 0x0040
struct FEngine_PurchaseInfo
{
	struct FString                                     Identifier;                                               // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     DisplayName;                                              // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     DisplayDescription;                                       // 0x0020(0x0010) (ZeroConstructor)
	struct FString                                     DisplayPrice;                                             // 0x0030(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.NavAgentSelector
// 0x0004
struct FEngine_NavAgentSelector
{
	unsigned char                                      bSupportsAgent0 : 1;                                      // 0x0000(0x0001) (Edit)
	unsigned char                                      bSupportsAgent1 : 1;                                      // 0x0000(0x0001) (Edit)
	unsigned char                                      bSupportsAgent2 : 1;                                      // 0x0000(0x0001) (Edit)
	unsigned char                                      bSupportsAgent3 : 1;                                      // 0x0000(0x0001) (Edit)
	unsigned char                                      bSupportsAgent4 : 1;                                      // 0x0000(0x0001) (Edit)
	unsigned char                                      bSupportsAgent5 : 1;                                      // 0x0000(0x0001) (Edit)
	unsigned char                                      bSupportsAgent6 : 1;                                      // 0x0000(0x0001) (Edit)
	unsigned char                                      bSupportsAgent7 : 1;                                      // 0x0000(0x0001) (Edit)
	unsigned char                                      bSupportsAgent8 : 1;                                      // 0x0001(0x0001) (Edit)
	unsigned char                                      bSupportsAgent9 : 1;                                      // 0x0001(0x0001) (Edit)
	unsigned char                                      bSupportsAgent10 : 1;                                     // 0x0001(0x0001) (Edit)
	unsigned char                                      bSupportsAgent11 : 1;                                     // 0x0001(0x0001) (Edit)
	unsigned char                                      bSupportsAgent12 : 1;                                     // 0x0001(0x0001) (Edit)
	unsigned char                                      bSupportsAgent13 : 1;                                     // 0x0001(0x0001) (Edit)
	unsigned char                                      bSupportsAgent14 : 1;                                     // 0x0001(0x0001) (Edit)
	unsigned char                                      bSupportsAgent15 : 1;                                     // 0x0001(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.NavigationLinkBase
// 0x0030
struct FEngine_NavigationLinkBase
{
	float                                              LeftProjectHeight;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxFallDownLength;                                        // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) MISSED OFFSET
	float                                              SnapRadius;                                               // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SnapHeight;                                               // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FEngine_NavAgentSelector                    SupportedAgents;                                          // 0x0014(0x0004) (Edit)
	unsigned char                                      bSupportsAgent0 : 1;                                      // 0x0018(0x0001)
	unsigned char                                      bSupportsAgent1 : 1;                                      // 0x0018(0x0001)
	unsigned char                                      bSupportsAgent2 : 1;                                      // 0x0018(0x0001)
	unsigned char                                      bSupportsAgent3 : 1;                                      // 0x0018(0x0001)
	unsigned char                                      bSupportsAgent4 : 1;                                      // 0x0018(0x0001)
	unsigned char                                      bSupportsAgent5 : 1;                                      // 0x0018(0x0001)
	unsigned char                                      bSupportsAgent6 : 1;                                      // 0x0018(0x0001)
	unsigned char                                      bSupportsAgent7 : 1;                                      // 0x0018(0x0001)
	unsigned char                                      bSupportsAgent8 : 1;                                      // 0x0019(0x0001)
	unsigned char                                      bSupportsAgent9 : 1;                                      // 0x0019(0x0001)
	unsigned char                                      bSupportsAgent10 : 1;                                     // 0x0019(0x0001)
	unsigned char                                      bSupportsAgent11 : 1;                                     // 0x0019(0x0001)
	unsigned char                                      bSupportsAgent12 : 1;                                     // 0x0019(0x0001)
	unsigned char                                      bSupportsAgent13 : 1;                                     // 0x0019(0x0001)
	unsigned char                                      bSupportsAgent14 : 1;                                     // 0x0019(0x0001)
	unsigned char                                      bSupportsAgent15 : 1;                                     // 0x0019(0x0001)
	unsigned char                                      UnknownData01[0x2];                                       // 0x001A(0x0002) MISSED OFFSET
	TEnumAsByte<FEngine_Engine_ENavLinkDirection>      Direction;                                                // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseSnapHeight : 1;                                       // 0x001D(0x0001) (Edit)
	unsigned char                                      bSnapToCheapestArea : 1;                                  // 0x001D(0x0001) (Edit)
	unsigned char                                      bCustomFlag0 : 1;                                         // 0x001D(0x0001)
	unsigned char                                      bCustomFlag1 : 1;                                         // 0x001D(0x0001)
	unsigned char                                      bCustomFlag2 : 1;                                         // 0x001D(0x0001)
	unsigned char                                      bCustomFlag3 : 1;                                         // 0x001D(0x0001)
	unsigned char                                      bCustomFlag4 : 1;                                         // 0x001D(0x0001)
	unsigned char                                      bCustomFlag5 : 1;                                         // 0x001D(0x0001)
	unsigned char                                      bCustomFlag6 : 1;                                         // 0x001E(0x0001)
	unsigned char                                      bCustomFlag7 : 1;                                         // 0x001E(0x0001)
	unsigned char                                      UnknownData02[0x1];                                       // 0x001F(0x0001) MISSED OFFSET
	class UClass*                                      AreaClass;                                                // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.NavigationLink
// 0x0018 (0x0048 - 0x0030)
struct FEngine_NavigationLink : public FEngine_NavigationLinkBase
{
	struct FVector                                     Left;                                                     // 0x0030(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Right;                                                    // 0x003C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.NavigationSegmentLink
// 0x0030 (0x0060 - 0x0030)
struct FEngine_NavigationSegmentLink : public FEngine_NavigationLinkBase
{
	struct FVector                                     LeftStart;                                                // 0x0030(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LeftEnd;                                                  // 0x003C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RightStart;                                               // 0x0048(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RightEnd;                                                 // 0x0054(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.NetworkEmulationProfileDescription
// 0x0020
struct FEngine_NetworkEmulationProfileDescription
{
	struct FString                                     ProfileName;                                              // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     ToolTip;                                                  // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.NodeItem
// 0x0040
struct FEngine_NodeItem
{
	struct FName                                       ParentName;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (IsPlainOldData)
};

// ScriptStruct Engine.DistributionLookupTable
// 0x0020
struct FEngine_DistributionLookupTable
{
	float                                              TimeScale;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeBias;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<float>                                      Values;                                                   // 0x0008(0x0010) (ZeroConstructor)
	unsigned char                                      Op;                                                       // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      EntryCount;                                               // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      EntryStride;                                              // 0x001A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      SubEntryStride;                                           // 0x001B(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      LockFlag;                                                 // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.RawDistribution
// 0x0020
struct FEngine_RawDistribution
{
	struct FEngine_DistributionLookupTable             Table;                                                    // 0x0000(0x0020) (ZeroConstructor)
};

// ScriptStruct Engine.RawDistributionFloat
// 0x0010 (0x0030 - 0x0020)
struct FEngine_RawDistributionFloat : public FEngine_RawDistribution
{
	float                                              MinValue;                                                 // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	class UEngine_DistributionFloat*                   Distribution;                                             // 0x0028(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData)
};

// ScriptStruct Engine.RawDistributionVector
// 0x0028 (0x0048 - 0x0020)
struct FEngine_RawDistributionVector : public FEngine_RawDistribution
{
	float                                              MinValue;                                                 // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     MinValueVec;                                              // 0x0028(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     MaxValueVec;                                              // 0x0034(0x000C) (ZeroConstructor, IsPlainOldData)
	class UEngine_DistributionVector*                  Distribution;                                             // 0x0040(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData)
};

// ScriptStruct Engine.BeamModifierOptions
// 0x0004
struct FEngine_BeamModifierOptions
{
	unsigned char                                      bModify : 1;                                              // 0x0000(0x0001) (Edit)
	unsigned char                                      bScale : 1;                                               // 0x0000(0x0001) (Edit)
	unsigned char                                      bLock : 1;                                                // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.ParticleRandomSeedInfo
// 0x0020
struct FEngine_ParticleRandomSeedInfo
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bGetSeedFromInstance : 1;                                 // 0x0008(0x0001) (Edit)
	unsigned char                                      bInstanceSeedIsIndex : 1;                                 // 0x0008(0x0001) (Edit)
	unsigned char                                      bResetSeedOnEmitterLooping : 1;                           // 0x0008(0x0001) (Edit)
	unsigned char                                      bRandomlySelectSeedArray : 1;                             // 0x0008(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	TArray<int>                                        RandomSeeds;                                              // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Engine.ParticleEvent_GenerateInfo
// 0x0028
struct FEngine_ParticleEvent_GenerateInfo
{
	TEnumAsByte<FEngine_Engine_EParticleEventType>     Type;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Frequency;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ParticleFrequency;                                        // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      FirstTimeOnly : 1;                                        // 0x000C(0x0001) (Edit)
	unsigned char                                      LastTimeOnly : 1;                                         // 0x000C(0x0001) (Edit)
	unsigned char                                      UseReflectedImpactVector : 1;                             // 0x000C(0x0001) (Edit)
	unsigned char                                      bUseOrbitOffset : 1;                                      // 0x000C(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FName                                       CustomName;                                               // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UEngine_ParticleModuleEventSendToGame*> ParticleModuleEventsToSendToGame;                         // 0x0018(0x0010) (Edit, ExportObject, ZeroConstructor)
};

// ScriptStruct Engine.LocationBoneSocketInfo
// 0x0014
struct FEngine_LocationBoneSocketInfo
{
	struct FName                                       BoneSocketName;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Offset;                                                   // 0x0008(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.OrbitOptions
// 0x0004
struct FEngine_OrbitOptions
{
	unsigned char                                      bProcessDuringSpawn : 1;                                  // 0x0000(0x0001) (Edit)
	unsigned char                                      bProcessDuringUpdate : 1;                                 // 0x0000(0x0001) (Edit)
	unsigned char                                      bUseEmitterTime : 1;                                      // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.EmitterDynamicParameter
// 0x0048
struct FEngine_EmitterDynamicParameter
{
	struct FName                                       ParamName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      bUseEmitterTime : 1;                                      // 0x0008(0x0001) (Edit)
	unsigned char                                      bSpawnTimeOnly : 1;                                       // 0x0008(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	TEnumAsByte<FEngine_Engine_EEmitterDynamicParameterValue> ValueMethod;                                              // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	unsigned char                                      bScaleVelocityByParamValue : 1;                           // 0x0010(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FEngine_RawDistributionFloat                ParamValue;                                               // 0x0018(0x0030) (Edit)
};

// ScriptStruct Engine.ParticleBurst
// 0x000C
struct FEngine_ParticleBurst
{
	int                                                count;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                CountLow;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.GPUSpriteLocalVectorFieldInfo
// 0x0070
struct FEngine_GPUSpriteLocalVectorFieldInfo
{
	class UEngine_VectorField*                         Field;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (IsPlainOldData)
	struct FRotator                                    MinInitialRotation;                                       // 0x0040(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    MaxInitialRotation;                                       // 0x004C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RotationRate;                                             // 0x0058(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Intensity;                                                // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Tightness;                                                // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIgnoreComponentTransform : 1;                            // 0x006C(0x0001)
	unsigned char                                      bTileX : 1;                                               // 0x006C(0x0001)
	unsigned char                                      bTileY : 1;                                               // 0x006C(0x0001)
	unsigned char                                      bTileZ : 1;                                               // 0x006C(0x0001)
	unsigned char                                      bUseFixDT : 1;                                            // 0x006C(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x006D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.FloatDistribution
// 0x0020
struct FEngine_FloatDistribution
{
	struct FEngine_DistributionLookupTable             Table;                                                    // 0x0000(0x0020) (ZeroConstructor)
};

// ScriptStruct Engine.GPUSpriteEmitterInfo
// 0x0280
struct FEngine_GPUSpriteEmitterInfo
{
	class UEngine_ParticleModuleRequired*              RequiredModule;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEngine_ParticleModuleSpawn*                 SpawnModule;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEngine_ParticleModuleSpawnPerUnit*          SpawnPerUnitModule;                                       // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UEngine_ParticleModule*>              SpawnModules;                                             // 0x0018(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FEngine_GPUSpriteLocalVectorFieldInfo       LocalVectorField;                                         // 0x0030(0x0070)
	struct FEngine_FloatDistribution                   VectorFieldScale;                                         // 0x00A0(0x0020) (ZeroConstructor)
	struct FEngine_FloatDistribution                   DragCoefficient;                                          // 0x00C0(0x0020) (ZeroConstructor)
	struct FEngine_FloatDistribution                   PointAttractorStrength;                                   // 0x00E0(0x0020) (ZeroConstructor)
	struct FEngine_FloatDistribution                   Resilience;                                               // 0x0100(0x0020) (ZeroConstructor)
	struct FVector                                     ConstantAcceleration;                                     // 0x0120(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     PointAttractorPosition;                                   // 0x012C(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              PointAttractorRadiusSq;                                   // 0x0138(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     OrbitOffsetBase;                                          // 0x013C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     OrbitOffsetRange;                                         // 0x0148(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   InvMaxSize;                                               // 0x0154(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              InvRotationRateScale;                                     // 0x015C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxLifetime;                                              // 0x0160(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxParticleCount;                                         // 0x0164(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_EParticleScreenAlignment> ScreenAlignment;                                          // 0x0168(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_EParticleAxisLock>      LockAxisFlag;                                             // 0x0169(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x016A(0x0002) MISSED OFFSET
	unsigned char                                      bEnableCollision : 1;                                     // 0x016C(0x0001)
	unsigned char                                      UnknownData02[0x3];                                       // 0x016D(0x0003) MISSED OFFSET
	TEnumAsByte<FEngine_Engine_EParticleCollisionMode> CollisionMode;                                            // 0x0170(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0171(0x0003) MISSED OFFSET
	unsigned char                                      bRemoveHMDRoll : 1;                                       // 0x0174(0x0001)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0175(0x0003) MISSED OFFSET
	float                                              MinFacingCameraBlendDistance;                             // 0x0178(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxFacingCameraBlendDistance;                             // 0x017C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FEngine_RawDistributionVector               DynamicColor;                                             // 0x0180(0x0048)
	struct FEngine_RawDistributionFloat                DynamicAlpha;                                             // 0x01C8(0x0030)
	struct FEngine_RawDistributionVector               DynamicColorScale;                                        // 0x01F8(0x0048)
	struct FEngine_RawDistributionFloat                DynamicAlphaScale;                                        // 0x0240(0x0030)
	unsigned char                                      UnknownData05[0x10];                                      // 0x0270(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.GPUSpriteResourceData
// 0x0160
struct FEngine_GPUSpriteResourceData
{
	TArray<struct FColor>                              QuantizedColorSamples;                                    // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FColor>                              QuantizedMiscSamples;                                     // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FColor>                              QuantizedSimulationAttrSamples;                           // 0x0020(0x0010) (ZeroConstructor)
	struct FVector4                                    ColorScale;                                               // 0x0030(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ColorBias;                                                // 0x0040(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FVector4                                    MiscScale;                                                // 0x0050(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FVector4                                    MiscBias;                                                 // 0x0060(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FVector4                                    SimulationAttrCurveScale;                                 // 0x0070(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FVector4                                    SimulationAttrCurveBias;                                  // 0x0080(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FVector4                                    SubImageSize;                                             // 0x0090(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FVector4                                    SizeBySpeed;                                              // 0x00A0(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     ConstantAcceleration;                                     // 0x00B0(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     OrbitOffsetBase;                                          // 0x00BC(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     OrbitOffsetRange;                                         // 0x00C8(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     OrbitFrequencyBase;                                       // 0x00D4(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     OrbitFrequencyRange;                                      // 0x00E0(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     OrbitPhaseBase;                                           // 0x00EC(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     OrbitPhaseRange;                                          // 0x00F8(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              GlobalVectorFieldScale;                                   // 0x0104(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              GlobalVectorFieldTightness;                               // 0x0108(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PerParticleVectorFieldScale;                              // 0x010C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PerParticleVectorFieldBias;                               // 0x0110(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DragCoefficientScale;                                     // 0x0114(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DragCoefficientBias;                                      // 0x0118(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ResilienceScale;                                          // 0x011C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ResilienceBias;                                           // 0x0120(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CollisionRadiusScale;                                     // 0x0124(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CollisionRadiusBias;                                      // 0x0128(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CollisionTimeBias;                                        // 0x012C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CollisionRandomSpread;                                    // 0x0130(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CollisionRandomDistribution;                              // 0x0134(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              OneMinusFriction;                                         // 0x0138(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RotationRateScale;                                        // 0x013C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CameraMotionBlurAmount;                                   // 0x0140(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_EParticleScreenAlignment> ScreenAlignment;                                          // 0x0144(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_EParticleAxisLock>      LockAxisFlag;                                             // 0x0145(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0146(0x0002) MISSED OFFSET
	struct FVector2D                                   PivotOffset;                                              // 0x0148(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bRemoveHMDRoll : 1;                                       // 0x0150(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0151(0x0003) MISSED OFFSET
	float                                              MinFacingCameraBlendDistance;                             // 0x0154(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxFacingCameraBlendDistance;                             // 0x0158(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x015C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.ParticleSystemLOD
// 0x0001
struct FEngine_ParticleSystemLOD
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.LODSoloTrack
// 0x0010
struct FEngine_LODSoloTrack
{
	TArray<unsigned char>                              SoloEnableSetting;                                        // 0x0000(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct Engine.NamedEmitterMaterial
// 0x0010
struct FEngine_NamedEmitterMaterial
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UEngine_MaterialInterface*                   Material;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.PhysicalAnimationData
// 0x0024
struct FEngine_PhysicalAnimationData
{
	struct FName                                       BodyName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsLocalSimulation : 1;                                   // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              OrientationStrength;                                      // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AngularVelocityStrength;                                  // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PositionStrength;                                         // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VelocityStrength;                                         // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxLinearForce;                                           // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxAngularForce;                                          // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.PhysicalAnimationProfile
// 0x002C
struct FEngine_PhysicalAnimationProfile
{
	struct FName                                       ProfileName;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FEngine_PhysicalAnimationData               PhysicalAnimationData;                                    // 0x0008(0x0024) (Edit)
};

// ScriptStruct Engine.ConstrainComponentPropName
// 0x0008
struct FEngine_ConstrainComponentPropName
{
	struct FName                                       ComponentName;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ConstraintBaseParams
// 0x0014
struct FEngine_ConstraintBaseParams
{
	float                                              Stiffness;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Damping;                                                  // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Restitution;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ContactDistance;                                          // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bSoftConstraint : 1;                                      // 0x0010(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.LinearConstraint
// 0x0008 (0x001C - 0x0014)
struct FEngine_LinearConstraint : public FEngine_ConstraintBaseParams
{
	float                                              Limit;                                                    // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ELinearConstraintMotion> XMotion;                                                  // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ELinearConstraintMotion> YMotion;                                                  // 0x0019(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ELinearConstraintMotion> ZMotion;                                                  // 0x001A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x001B(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.ConeConstraint
// 0x000C (0x0020 - 0x0014)
struct FEngine_ConeConstraint : public FEngine_ConstraintBaseParams
{
	float                                              Swing1LimitDegrees;                                       // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Swing2LimitDegrees;                                       // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_EAngularConstraintMotion> Swing1Motion;                                             // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_EAngularConstraintMotion> Swing2Motion;                                             // 0x001D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x001E(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.TwistConstraint
// 0x0008 (0x001C - 0x0014)
struct FEngine_TwistConstraint : public FEngine_ConstraintBaseParams
{
	float                                              TwistLimitDegrees;                                        // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_EAngularConstraintMotion> TwistMotion;                                              // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.ConstraintDrive
// 0x0010
struct FEngine_ConstraintDrive
{
	float                                              Stiffness;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Damping;                                                  // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxForce;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnablePositionDrive : 1;                                 // 0x000C(0x0001) (Edit)
	unsigned char                                      bEnableVelocityDrive : 1;                                 // 0x000C(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.LinearDriveConstraint
// 0x004C
struct FEngine_LinearDriveConstraint
{
	struct FVector                                     PositionTarget;                                           // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     VelocityTarget;                                           // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FEngine_ConstraintDrive                     XDrive;                                                   // 0x0018(0x0010) (Edit)
	struct FEngine_ConstraintDrive                     YDrive;                                                   // 0x0028(0x0010) (Edit)
	struct FEngine_ConstraintDrive                     ZDrive;                                                   // 0x0038(0x0010) (Edit)
	unsigned char                                      bEnablePositionDrive : 1;                                 // 0x0048(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.AngularDriveConstraint
// 0x004C
struct FEngine_AngularDriveConstraint
{
	struct FEngine_ConstraintDrive                     TwistDrive;                                               // 0x0000(0x0010) (Edit)
	struct FEngine_ConstraintDrive                     SwingDrive;                                               // 0x0010(0x0010) (Edit)
	struct FEngine_ConstraintDrive                     SlerpDrive;                                               // 0x0020(0x0010) (Edit)
	struct FRotator                                    OrientationTarget;                                        // 0x0030(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AngularVelocityTarget;                                    // 0x003C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_EAngularDriveMode>      AngularDriveMode;                                         // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.ConstraintProfileProperties
// 0x0104
struct FEngine_ConstraintProfileProperties
{
	float                                              ProjectionLinearTolerance;                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ProjectionAngularTolerance;                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LinearBreakThreshold;                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AngularBreakThreshold;                                    // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FEngine_LinearConstraint                    LinearLimit;                                              // 0x0010(0x001C) (Edit)
	struct FEngine_ConeConstraint                      ConeLimit;                                                // 0x002C(0x0020) (Edit)
	struct FEngine_TwistConstraint                     TwistLimit;                                               // 0x004C(0x001C) (Edit)
	struct FEngine_LinearDriveConstraint               LinearDrive;                                              // 0x0068(0x004C) (Edit)
	struct FEngine_AngularDriveConstraint              AngularDrive;                                             // 0x00B4(0x004C) (Edit)
	unsigned char                                      bDisableCollision : 1;                                    // 0x0100(0x0001) (Edit)
	unsigned char                                      bParentDominates : 1;                                     // 0x0100(0x0001) (Edit)
	unsigned char                                      bEnableProjection : 1;                                    // 0x0100(0x0001) (Edit)
	unsigned char                                      bAngularBreakable : 1;                                    // 0x0100(0x0001) (Edit)
	unsigned char                                      bLinearBreakable : 1;                                     // 0x0100(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0101(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.ConstraintInstance
// 0x01B8
struct FEngine_ConstraintInstance
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
	struct FName                                       JointName;                                                // 0x0018(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FName                                       ConstraintBone1;                                          // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       ConstraintBone2;                                          // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Pos1;                                                     // 0x0030(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     PriAxis1;                                                 // 0x003C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     SecAxis1;                                                 // 0x0048(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Pos2;                                                     // 0x0054(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     PriAxis2;                                                 // 0x0060(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     SecAxis2;                                                 // 0x006C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    AngularRotationOffset;                                    // 0x0078(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bScaleLinearLimits : 1;                                   // 0x0084(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0085(0x0007) MISSED OFFSET
	struct FEngine_ConstraintProfileProperties         ProfileInstance;                                          // 0x008C(0x0104) (Edit)
	unsigned char                                      UnknownData02[0x28];                                      // 0x0190(0x0028) MISSED OFFSET
};

// ScriptStruct Engine.EngineShowFlagsSetting
// 0x0018
struct FEngine_EngineShowFlagsSetting
{
	struct FString                                     ShowFlagName;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               Enabled;                                                  // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.PhysicsConstraintProfileHandle
// 0x010C
struct FEngine_PhysicsConstraintProfileHandle
{
	struct FEngine_ConstraintProfileProperties         ProfileProperties;                                        // 0x0000(0x0104)
	struct FName                                       ProfileName;                                              // 0x0104(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.KeyBind
// 0x0030
struct FEngine_KeyBind
{
	struct FInputCore_Key                              Key;                                                      // 0x0000(0x0018) (Config)
	struct FString                                     Command;                                                  // 0x0018(0x0010) (ZeroConstructor, Config)
	unsigned char                                      Control : 1;                                              // 0x0028(0x0001) (Config)
	unsigned char                                      Shift : 1;                                                // 0x0028(0x0001) (Config)
	unsigned char                                      Alt : 1;                                                  // 0x0028(0x0001) (Config)
	unsigned char                                      Cmd : 1;                                                  // 0x0028(0x0001) (Config)
	unsigned char                                      bIgnoreCtrl : 1;                                          // 0x0028(0x0001) (Config)
	unsigned char                                      bIgnoreShift : 1;                                         // 0x0028(0x0001) (Config)
	unsigned char                                      bIgnoreAlt : 1;                                           // 0x0028(0x0001) (Config)
	unsigned char                                      bIgnoreCmd : 1;                                           // 0x0028(0x0001) (Config)
	unsigned char                                      bDisabled : 1;                                            // 0x0029(0x0001) (Transient)
	unsigned char                                      UnknownData00[0x6];                                       // 0x002A(0x0006) MISSED OFFSET
};

// ScriptStruct Engine.PoseData
// 0x0070
struct FEngine_PoseData
{
	TArray<struct FTransform>                          LocalSpacePose;                                           // 0x0000(0x0010) (ZeroConstructor)
	TMap<int, int>                                     TrackToBufferIndex;                                       // 0x0010(0x0050) (ZeroConstructor)
	TArray<float>                                      CurveData;                                                // 0x0060(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.PoseDataContainer
// 0x0090
struct FEngine_PoseDataContainer
{
	TArray<struct FEngine_SmartName>                   PoseNames;                                                // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FName>                               Tracks;                                                   // 0x0010(0x0010) (ZeroConstructor)
	TMap<struct FName, int>                            TrackMap;                                                 // 0x0020(0x0050) (ZeroConstructor, Transient)
	TArray<struct FEngine_PoseData>                    Poses;                                                    // 0x0070(0x0010) (ZeroConstructor)
	TArray<struct FEngine_AnimCurveBase>               Curves;                                                   // 0x0080(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.PreviewMeshCollectionEntry
// 0x0028
struct FEngine_PreviewMeshCollectionEntry
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Engine.PreviewMeshCollectionEntry.SkeletalMesh
};

// ScriptStruct Engine.CollectionReference
// 0x0008
struct FEngine_CollectionReference
{
	struct FName                                       CollectionName;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.RigidBodyErrorCorrection
// 0x0034
struct FEngine_RigidBodyErrorCorrection
{
	float                                              PingExtrapolation;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PingLimit;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ErrorPerLinearDifference;                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ErrorPerAngularDifference;                                // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxRestoredStateError;                                    // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxLinearHardSnapDistance;                                // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PositionLerp;                                             // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AngleLerp;                                                // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LinearVelocityCoefficient;                                // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AngularVelocityCoefficient;                               // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ErrorAccumulationSeconds;                                 // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ErrorAccumulationDistanceSq;                              // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ErrorAccumulationSimilarity;                              // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.PhysicalSurfaceName
// 0x000C
struct FEngine_PhysicalSurfaceName
{
	TEnumAsByte<FEngine_Engine_EPhysicalSurface>       Type;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ChaosPhysicsSettings
// 0x0003
struct FEngine_ChaosPhysicsSettings
{
	FPhysicsCore_PhysicsCore_EChaosThreadingMode       DefaultThreadingModel;                                    // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	FPhysicsCore_PhysicsCore_EChaosSolverTickMode      DedicatedThreadTickMode;                                  // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	FPhysicsCore_PhysicsCore_EChaosBufferMode          DedicatedThreadBufferMode;                                // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.RigTransformConstraint
// 0x0010
struct FEngine_RigTransformConstraint
{
	TEnumAsByte<FEngine_Engine_EConstraintTransform>   TranformType;                                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       ParentSpace;                                              // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TransformBaseConstraint
// 0x0010
struct FEngine_TransformBaseConstraint
{
	TArray<struct FEngine_RigTransformConstraint>      TransformConstraints;                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Engine.TransformBase
// 0x0028
struct FEngine_TransformBase
{
	struct FName                                       Node;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FEngine_TransformBaseConstraint             Constraints[0x2];                                         // 0x0008(0x0010) (Edit)
};

// ScriptStruct Engine.Node
// 0x0060
struct FEngine_Node
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FName                                       ParentName;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (IsPlainOldData)
	struct FString                                     DisplayName;                                              // 0x0040(0x0010) (Edit, ZeroConstructor)
	bool                                               bAdvanced;                                                // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0051(0x000F) MISSED OFFSET
};

// ScriptStruct Engine.VirtualTextureBuildSettings
// 0x000C
struct FEngine_VirtualTextureBuildSettings
{
	int                                                TileSize;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TileBorderSize;                                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bEnableCompressCrunch;                                    // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bEnableCompressZlib;                                      // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.BPVariableMetaDataEntry
// 0x0018
struct FEngine_BPVariableMetaDataEntry
{
	struct FName                                       DataKey;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     DataValue;                                                // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Engine.MeshUVChannelInfo
// 0x0014
struct FEngine_MeshUVChannelInfo
{
	bool                                               bInitialized;                                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideDensities;                                       // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              LocalUVDensities[0x4];                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SkeletalMaterial
// 0x0028
struct FEngine_SkeletalMaterial
{
	class UEngine_MaterialInterface*                   MaterialInterface;                                        // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MaterialSlotName;                                         // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FEngine_MeshUVChannelInfo                   UVChannelData;                                            // 0x0010(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.BoneMirrorInfo
// 0x0008
struct FEngine_BoneMirrorInfo
{
	int                                                SourceIndex;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FCoreUObject_EAxis>                    BoneFlipAxis;                                             // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.PerPlatformFloat
// 0x0004
struct FEngine_PerPlatformFloat
{
	float                                              Default;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SkeletalMeshBuildSettings
// 0x0010
struct FEngine_SkeletalMeshBuildSettings
{
	unsigned char                                      bRecomputeNormals : 1;                                    // 0x0000(0x0001) (Edit)
	unsigned char                                      bRecomputeTangents : 1;                                   // 0x0000(0x0001) (Edit)
	unsigned char                                      bUseMikkTSpace : 1;                                       // 0x0000(0x0001) (Edit)
	unsigned char                                      bComputeWeightedNormals : 1;                              // 0x0000(0x0001) (Edit)
	unsigned char                                      bRemoveDegenerates : 1;                                   // 0x0000(0x0001) (Edit)
	unsigned char                                      bUseHighPrecisionTangentBasis : 1;                        // 0x0000(0x0001) (Edit)
	unsigned char                                      bUseFullPrecisionUVs : 1;                                 // 0x0000(0x0001) (Edit)
	unsigned char                                      bBuildAdjacencyBuffer : 1;                                // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              ThresholdPosition;                                        // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ThresholdTangentNormal;                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ThresholdUV;                                              // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SkeletalMeshOptimizationSettings
// 0x003C
struct FEngine_SkeletalMeshOptimizationSettings
{
	TEnumAsByte<FEngine_Engine_ESkeletalMeshTerminationCriterion> TerminationCriterion;                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              NumOfTrianglesPercentage;                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NumOfVertPercentage;                                      // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           MaxNumOfTriangles;                                        // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           MaxNumOfVerts;                                            // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxDeviationPercentage;                                   // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ESkeletalMeshOptimizationType> ReductionMethod;                                          // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ESkeletalMeshOptimizationImportance> SilhouetteImportance;                                     // 0x0019(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ESkeletalMeshOptimizationImportance> TextureImportance;                                        // 0x001A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ESkeletalMeshOptimizationImportance> ShadingImportance;                                        // 0x001B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ESkeletalMeshOptimizationImportance> SkinningImportance;                                       // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bRemapMorphTargets : 1;                                   // 0x001D(0x0001) (Edit)
	unsigned char                                      bRecalcNormals : 1;                                       // 0x001D(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x2];                                       // 0x001E(0x0002) MISSED OFFSET
	float                                              WeldingThreshold;                                         // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NormalsThreshold;                                         // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxBonesPerVertex;                                        // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnforceBoneBoundaries : 1;                               // 0x002C(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	float                                              VolumeImportance;                                         // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bLockEdges : 1;                                           // 0x0034(0x0001) (Edit)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	int                                                BaseLOD;                                                  // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SkeletalMeshLODInfo
// 0x00B8
struct FEngine_SkeletalMeshLODInfo
{
	struct FEngine_PerPlatformFloat                    ScreenSize;                                               // 0x0000(0x0004) (Edit)
	float                                              LODHysteresis;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        LODMaterialMap;                                           // 0x0008(0x0010) (ZeroConstructor)
	struct FEngine_SkeletalMeshBuildSettings           BuildSettings;                                            // 0x0018(0x0010) (Edit)
	struct FEngine_SkeletalMeshOptimizationSettings    ReductionSettings;                                        // 0x0028(0x003C) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	TArray<struct FEngine_BoneReference>               BonesToRemove;                                            // 0x0068(0x0010) (Edit, ZeroConstructor)
	TArray<struct FEngine_BoneReference>               BonesToPrioritize;                                        // 0x0078(0x0010) (Edit, ZeroConstructor)
	float                                              WeightOfPrioritization;                                   // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	class UEngine_AnimSequence*                        BakePose;                                                 // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UEngine_AnimSequence*                        BakePoseOverride;                                         // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     SourceImportFilename;                                     // 0x00A0(0x0010) (Edit, ZeroConstructor, EditConst)
	unsigned char                                      bHasBeenSimplified : 1;                                   // 0x00B0(0x0001)
	unsigned char                                      bHasPerLODVertexColors : 1;                               // 0x00B0(0x0001)
	unsigned char                                      bAllowCPUAccess : 1;                                      // 0x00B0(0x0001) (Edit)
	unsigned char                                      bSupportUniformlyDistributedSampling : 1;                 // 0x00B0(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.PerPlatformInt
// 0x0004
struct FEngine_PerPlatformInt
{
	int                                                Default;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.PerPlatformBool
// 0x0001
struct FEngine_PerPlatformBool
{
	bool                                               Default;                                                  // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SkeletalMeshSamplingRegionMaterialFilter
// 0x0008
struct FEngine_SkeletalMeshSamplingRegionMaterialFilter
{
	struct FName                                       MaterialName;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SkeletalMeshSamplingRegionBoneFilter
// 0x000C
struct FEngine_SkeletalMeshSamplingRegionBoneFilter
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIncludeOrExclude : 1;                                    // 0x0008(0x0001) (Edit)
	unsigned char                                      bApplyToChildren : 1;                                     // 0x0008(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshSamplingRegion
// 0x0030
struct FEngine_SkeletalMeshSamplingRegion
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                LODIndex;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bSupportUniformlyDistributedSampling : 1;                 // 0x000C(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	TArray<struct FEngine_SkeletalMeshSamplingRegionMaterialFilter> MaterialFilters;                                          // 0x0010(0x0010) (Edit, ZeroConstructor)
	TArray<struct FEngine_SkeletalMeshSamplingRegionBoneFilter> BoneFilters;                                              // 0x0020(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Engine.SkeletalMeshSamplingLODBuiltData
// 0x0048
struct FEngine_SkeletalMeshSamplingLODBuiltData
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshSamplingRegionBuiltData
// 0x0078
struct FEngine_SkeletalMeshSamplingRegionBuiltData
{
	unsigned char                                      UnknownData00[0x78];                                      // 0x0000(0x0078) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshSamplingBuiltData
// 0x0020
struct FEngine_SkeletalMeshSamplingBuiltData
{
	TArray<struct FEngine_SkeletalMeshSamplingLODBuiltData> WholeMeshBuiltData;                                       // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FEngine_SkeletalMeshSamplingRegionBuiltData> RegionBuiltData;                                          // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.SkeletalMeshSamplingInfo
// 0x0030
struct FEngine_SkeletalMeshSamplingInfo
{
	TArray<struct FEngine_SkeletalMeshSamplingRegion>  Regions;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FEngine_SkeletalMeshSamplingBuiltData       BuiltData;                                                // 0x0010(0x0020)
};

// ScriptStruct Engine.SkinWeightProfileInfo
// 0x0010
struct FEngine_SkinWeightProfileInfo
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FEngine_PerPlatformBool                     DefaultProfile;                                           // 0x0008(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FEngine_PerPlatformInt                      DefaultProfileFromLODIndex;                               // 0x000C(0x0004) (Edit)
};

// ScriptStruct Engine.BoneFilter
// 0x000C
struct FEngine_BoneFilter
{
	bool                                               bExcludeSelf;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       BoneName;                                                 // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SkeletalMeshLODGroupSettings
// 0x0080
struct FEngine_SkeletalMeshLODGroupSettings
{
	struct FEngine_PerPlatformFloat                    ScreenSize;                                               // 0x0000(0x0004) (Edit)
	float                                              LODHysteresis;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	FEngine_Engine_EBoneFilterActionOption             BoneFilterActionOption;                                   // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	TArray<struct FEngine_BoneFilter>                  BoneList;                                                 // 0x0010(0x0010) (Edit, ZeroConstructor)
	TArray<struct FName>                               BonesToPrioritize;                                        // 0x0020(0x0010) (Edit, ZeroConstructor)
	float                                              WeightOfPrioritization;                                   // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	class UEngine_AnimSequence*                        BakePose;                                                 // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FEngine_SkeletalMeshOptimizationSettings    ReductionSettings;                                        // 0x0040(0x003C) (Edit)
	unsigned char                                      UnknownData02[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.TentDistribution
// 0x000C
struct FEngine_TentDistribution
{
	float                                              TipAltitude;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TipValue;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Width;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SoundClassProperties
// 0x0030
struct FEngine_SoundClassProperties
{
	float                                              Volume;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LowPassFilterFrequency;                                   // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              StereoBleed;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LFEBleed;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              VoiceCenterChannelVolume;                                 // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RadioFilterVolume;                                        // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RadioFilterVolumeThreshold;                               // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bApplyEffects : 1;                                        // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bAlwaysPlay : 1;                                          // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bIsUISound : 1;                                           // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bIsMusic : 1;                                             // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bReverb : 1;                                              // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	float                                              Default2DReverbSendAmount;                                // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCenterChannelOnly : 1;                                   // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bApplyAmbientVolumes : 1;                                 // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	TEnumAsByte<FEngine_Engine_EAudioOutputTarget>     OutputTarget;                                             // 0x002C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	FEngine_Engine_ESoundWaveLoadingBehavior           LoadingBehavior;                                          // 0x002D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x002E(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.PassiveSoundMixModifier
// 0x0010
struct FEngine_PassiveSoundMixModifier
{
	class UEngine_SoundMix*                            SoundMix;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinVolumeThreshold;                                       // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxVolumeThreshold;                                       // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AudioEQEffect
// 0x0038
struct FEngine_AudioEQEffect
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	float                                              FrequencyCenter0;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Gain0;                                                    // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Bandwidth0;                                               // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FrequencyCenter1;                                         // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Gain1;                                                    // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Bandwidth1;                                               // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FrequencyCenter2;                                         // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Gain2;                                                    // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Bandwidth2;                                               // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FrequencyCenter3;                                         // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Gain3;                                                    // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Bandwidth3;                                               // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SoundClassAdjuster
// 0x0020
struct FEngine_SoundClassAdjuster
{
	class UEngine_SoundClass*                          SoundClassObject;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VolumeAdjuster;                                           // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PitchAdjuster;                                            // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LowPassFilterFrequency;                                   // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bApplyToChildren : 1;                                     // 0x0014(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	float                                              VoiceCenterChannelVolumeAdjuster;                         // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.SourceEffectChainEntry
// 0x0010
struct FEngine_SourceEffectChainEntry
{
	class UEngine_SoundEffectSourcePreset*             Preset;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bBypass : 1;                                              // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.SoundGroup
// 0x0020
struct FEngine_SoundGroup
{
	TEnumAsByte<FEngine_Engine_ESoundGroup>            SoundGroup;                                               // 0x0000(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     DisplayName;                                              // 0x0008(0x0010) (ZeroConstructor, Config)
	unsigned char                                      bAlwaysDecompressOnLoad : 1;                              // 0x0018(0x0001) (Config)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	float                                              DecompressedDuration;                                     // 0x001C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
};

// ScriptStruct Engine.DistanceDatum
// 0x0014
struct FEngine_DistanceDatum
{
	float                                              FadeInDistanceStart;                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FadeInDistanceEnd;                                        // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FadeOutDistanceStart;                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FadeOutDistanceEnd;                                       // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.DialogueWaveParameter
// 0x0020
struct FEngine_DialogueWaveParameter
{
	class UEngine_DialogueWave*                        DialogueWave;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FEngine_DialogueContext                     Context;                                                  // 0x0008(0x0018) (Edit)
};

// ScriptStruct Engine.ModulatorContinuousParams
// 0x0020
struct FEngine_ModulatorContinuousParams
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Default;                                                  // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinInput;                                                 // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxInput;                                                 // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinOutput;                                                // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxOutput;                                                // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_EModulationParamMode>   ParamMode;                                                // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.SplineMeshParams
// 0x0058
struct FEngine_SplineMeshParams
{
	struct FVector                                     StartPos;                                                 // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StartTangent;                                             // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   StartScale;                                               // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StartRoll;                                                // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   StartOffset;                                              // 0x0024(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EndPos;                                                   // 0x002C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   EndScale;                                                 // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EndTangent;                                               // 0x0040(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EndRoll;                                                  // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   EndOffset;                                                // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.StaticMaterial
// 0x0030
struct FEngine_StaticMaterial
{
	class UEngine_MaterialInterface*                   MaterialInterface;                                        // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MaterialSlotName;                                         // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ImportedMaterialSlotName;                                 // 0x0010(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FEngine_MeshUVChannelInfo                   UVChannelData;                                            // 0x0018(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.EquirectProps
// 0x0048
struct FEngine_EquirectProps
{
	struct FBox2D                                      LeftUVRect;                                               // 0x0000(0x0014) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
	struct FBox2D                                      RightUVRect;                                              // 0x0014(0x0014) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
	struct FVector2D                                   LeftScale;                                                // 0x0028(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   RightScale;                                               // 0x0030(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   LeftBias;                                                 // 0x0038(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   RightBias;                                                // 0x0040(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SubsurfaceProfileStruct
// 0x008C
struct FEngine_SubsurfaceProfileStruct
{
	struct FLinearColor                                SurfaceAlbedo;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                MeanFreePathColor;                                        // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MeanFreePathDistance;                                     // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WorldUnitScale;                                           // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableBurley;                                            // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	float                                              ScatterRadius;                                            // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                SubsurfaceColor;                                          // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FalloffColor;                                             // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                BoundaryColorBleed;                                       // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ExtinctionScale;                                          // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              NormalScale;                                              // 0x0064(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ScatteringDistribution;                                   // 0x0068(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              IOR;                                                      // 0x006C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Roughness0;                                               // 0x0070(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Roughness1;                                               // 0x0074(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LobeMix;                                                  // 0x0078(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                TransmissionTintColor;                                    // 0x007C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TimelineEventEntry
// 0x0014
struct FEngine_TimelineEventEntry
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             EventFunc;                                                // 0x0004(0x0014) (ZeroConstructor, InstancedReference)
};

// ScriptStruct Engine.TimelineVectorTrack
// 0x0040
struct FEngine_TimelineVectorTrack
{
	class UEngine_CurveVector*                         VectorCurve;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             InterpFunc;                                               // 0x0008(0x0014) (ZeroConstructor, InstancedReference)
	struct FName                                       TrackName;                                                // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       VectorPropertyName;                                       // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	class UStructProperty*                             VectorProperty;                                           // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.TimelineFloatTrack
// 0x0040
struct FEngine_TimelineFloatTrack
{
	class UEngine_CurveFloat*                          FloatCurve;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             InterpFunc;                                               // 0x0008(0x0014) (ZeroConstructor, InstancedReference)
	struct FName                                       TrackName;                                                // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       FloatPropertyName;                                        // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	class UFloatProperty*                              FloatProperty;                                            // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.TimelineLinearColorTrack
// 0x0040
struct FEngine_TimelineLinearColorTrack
{
	class UEngine_CurveLinearColor*                    LinearColorCurve;                                         // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             InterpFunc;                                               // 0x0008(0x0014) (ZeroConstructor, InstancedReference)
	struct FName                                       TrackName;                                                // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       LinearColorPropertyName;                                  // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	class UStructProperty*                             LinearColorProperty;                                      // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.Timeline
// 0x0098
struct FEngine_Timeline
{
	TEnumAsByte<FEngine_Engine_ETimelineLengthMode>    LengthMode;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      bLooping : 1;                                             // 0x0001(0x0001)
	unsigned char                                      bReversePlayback : 1;                                     // 0x0001(0x0001)
	unsigned char                                      bPlaying : 1;                                             // 0x0001(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              Length;                                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              PlayRate;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Position;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FEngine_TimelineEventEntry>          Events;                                                   // 0x0010(0x0010) (ZeroConstructor, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FEngine_TimelineVectorTrack>         InterpVectors;                                            // 0x0020(0x0010) (ZeroConstructor, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FEngine_TimelineFloatTrack>          InterpFloats;                                             // 0x0030(0x0010) (ZeroConstructor, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FEngine_TimelineLinearColorTrack>    InterpLinearColors;                                       // 0x0040(0x0010) (ZeroConstructor, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptDelegate                             TimelinePostUpdateFunc;                                   // 0x0050(0x0014) (ZeroConstructor, InstancedReference, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptDelegate                             TimelineFinishedFunc;                                     // 0x0060(0x0014) (ZeroConstructor, InstancedReference, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class UObject>                      PropertySetObject;                                        // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FName                                       DirectionPropertyName;                                    // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0080(0x0010) MISSED OFFSET
	class UProperty*                                   DirectionProperty;                                        // 0x0090(0x0008) (ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct Engine.TTTrackBase
// 0x0018
struct FEngine_TTTrackBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FName                                       TrackName;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsExternalCurve;                                         // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.TTEventTrack
// 0x0010 (0x0028 - 0x0018)
struct FEngine_TTEventTrack : public FEngine_TTTrackBase
{
	struct FName                                       FunctionName;                                             // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEngine_CurveFloat*                          CurveKeys;                                                // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TTPropertyTrack
// 0x0008 (0x0020 - 0x0018)
struct FEngine_TTPropertyTrack : public FEngine_TTTrackBase
{
	struct FName                                       PropertyName;                                             // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TTFloatTrack
// 0x0008 (0x0028 - 0x0020)
struct FEngine_TTFloatTrack : public FEngine_TTPropertyTrack
{
	class UEngine_CurveFloat*                          CurveFloat;                                               // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TTVectorTrack
// 0x0008 (0x0028 - 0x0020)
struct FEngine_TTVectorTrack : public FEngine_TTPropertyTrack
{
	class UEngine_CurveVector*                         CurveVector;                                              // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TTLinearColorTrack
// 0x0008 (0x0028 - 0x0020)
struct FEngine_TTLinearColorTrack : public FEngine_TTPropertyTrack
{
	class UEngine_CurveLinearColor*                    CurveLinearColor;                                         // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.HardwareCursorReference
// 0x0010
struct FEngine_HardwareCursorReference
{
	struct FName                                       CursorPath;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   HotSpot;                                                  // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.VirtualTextureSpacePoolConfig
// 0x0020
struct FEngine_VirtualTextureSpacePoolConfig
{
	int                                                MinTileSize;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxTileSize;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<FCoreUObject_EPixelFormat>>     Formats;                                                  // 0x0008(0x0010) (ZeroConstructor)
	int                                                SizeInMegabyte;                                           // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bAllowSizeScale;                                          // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.VoiceSettings
// 0x0018
struct FEngine_VoiceSettings
{
	class UEngine_SceneComponent*                      ComponentToAttachTo;                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEngine_SoundAttenuation*                    AttenuationSettings;                                      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UEngine_SoundEffectSourcePresetChain*        SourceEffectChain;                                        // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.MaterialProxySettings
// 0x0074
struct FEngine_MaterialProxySettings
{
	struct FIntPoint                                   TextureSize;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GutterSpace;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MetallicConstant;                                         // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RoughnessConstant;                                        // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpecularConstant;                                         // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OpacityConstant;                                          // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OpacityMaskConstant;                                      // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionConstant;                                 // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ETextureSizingType>     TextureSizingType;                                        // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_EMaterialMergeType>     MaterialMergeType;                                        // 0x0025(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_EBlendMode>             BlendMode;                                                // 0x0026(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAllowTwoSidedMaterial : 1;                               // 0x0027(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bNormalMap : 1;                                           // 0x0027(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bMetallicMap : 1;                                         // 0x0027(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bRoughnessMap : 1;                                        // 0x0027(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bSpecularMap : 1;                                         // 0x0027(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bEmissiveMap : 1;                                         // 0x0027(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOpacityMap : 1;                                          // 0x0027(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOpacityMaskMap : 1;                                      // 0x0027(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bAmbientOcclusionMap : 1;                                 // 0x0028(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	struct FIntPoint                                   DiffuseTextureSize;                                       // 0x002C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FIntPoint                                   NormalTextureSize;                                        // 0x0034(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FIntPoint                                   MetallicTextureSize;                                      // 0x003C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FIntPoint                                   RoughnessTextureSize;                                     // 0x0044(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FIntPoint                                   SpecularTextureSize;                                      // 0x004C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FIntPoint                                   EmissiveTextureSize;                                      // 0x0054(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FIntPoint                                   OpacityTextureSize;                                       // 0x005C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FIntPoint                                   OpacityMaskTextureSize;                                   // 0x0064(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FIntPoint                                   AmbientOcclusionTextureSize;                              // 0x006C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.MeshProxySettings
// 0x0094
struct FEngine_MeshProxySettings
{
	int                                                ScreenSize;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VoxelSize;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FEngine_MaterialProxySettings               MaterialSettings;                                         // 0x0008(0x0074) (Edit, BlueprintVisible)
	float                                              MergeDistance;                                            // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FColor                                      UnresolvedGeometryColor;                                  // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxRayCastDist;                                           // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HardAngleThreshold;                                       // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LightMapResolution;                                       // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_EProxyNormalComputationMethod> NormalCalculationMethod;                                  // 0x0090(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ELandscapeCullingPrecision> LandscapeCullingPrecision;                                // 0x0091(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCalculateCorrectLODModel : 1;                            // 0x0092(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverrideVoxelSize : 1;                                   // 0x0092(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverrideTransferDistance : 1;                            // 0x0092(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bUseHardAngleThreshold : 1;                               // 0x0092(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bComputeLightMapResolution : 1;                           // 0x0092(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bRecalculateNormals : 1;                                  // 0x0092(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bUseLandscapeCulling : 1;                                 // 0x0092(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bAllowAdjacency : 1;                                      // 0x0092(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bAllowDistanceField : 1;                                  // 0x0093(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bReuseMeshLightmapUVs : 1;                                // 0x0093(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCreateCollision : 1;                                     // 0x0093(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bAllowVertexColors : 1;                                   // 0x0093(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGenerateLightmapUVs : 1;                                 // 0x0093(0x0001) (Edit, BlueprintVisible)
};

// ScriptStruct Engine.MeshMergingSettings
// 0x008C
struct FEngine_MeshMergingSettings
{
	int                                                TargetLightMapResolution;                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FEngine_Engine_EUVOutput                           OutputUVs[0x8];                                           // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FEngine_MaterialProxySettings               MaterialSettings;                                         // 0x000C(0x0074) (Edit, BlueprintVisible)
	int                                                GutterSize;                                               // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SpecificLOD;                                              // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FEngine_Engine_EMeshLODSelectionType               LODSelectionType;                                         // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bGenerateLightMapUV : 1;                                  // 0x0089(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bComputedLightMapResolution : 1;                          // 0x0089(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bPivotPointAtZero : 1;                                    // 0x0089(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bMergePhysicsData : 1;                                    // 0x0089(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bMergeMaterials : 1;                                      // 0x0089(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCreateMergedMaterial : 1;                                // 0x0089(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bBakeVertexDataToMesh : 1;                                // 0x0089(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bUseVertexDataForBakingMaterial : 1;                      // 0x0089(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bUseTextureBinning : 1;                                   // 0x008A(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bReuseMeshLightmapUVs : 1;                                // 0x008A(0x0001) (Edit)
	unsigned char                                      bMergeEquivalentMaterials : 1;                            // 0x008A(0x0001) (Edit)
	unsigned char                                      bUseLandscapeCulling : 1;                                 // 0x008A(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bIncludeImposters : 1;                                    // 0x008A(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bAllowDistanceField : 1;                                  // 0x008A(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x1];                                       // 0x008B(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.HierarchicalSimplification
// 0x0138
struct FEngine_HierarchicalSimplification
{
	float                                              TransitionScreenSize;                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OverrideDrawDistance;                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseOverrideDrawDistance : 1;                             // 0x0008(0x0001) (Edit)
	unsigned char                                      bAllowSpecificExclusion : 1;                              // 0x0008(0x0001) (Edit)
	unsigned char                                      bSimplifyMesh : 1;                                        // 0x0008(0x0001) (Edit)
	unsigned char                                      bOnlyGenerateClustersForVolumes : 1;                      // 0x0008(0x0001) (Edit)
	unsigned char                                      bReusePreviousLevelClusters : 1;                          // 0x0008(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FEngine_MeshProxySettings                   ProxySetting;                                             // 0x000C(0x0094) (Edit)
	struct FEngine_MeshMergingSettings                 MergeSetting;                                             // 0x00A0(0x008C) (Edit)
	float                                              DesiredBoundRadius;                                       // 0x012C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DesiredFillingPercentage;                                 // 0x0130(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinNumberOfActorsToBuild;                                 // 0x0134(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.VectorDistribution
// 0x0020
struct FEngine_VectorDistribution
{
	struct FEngine_DistributionLookupTable             Table;                                                    // 0x0000(0x0020) (ZeroConstructor)
};

// ScriptStruct Engine.FloatRK4SpringInterpolator
// 0x0008
struct FEngine_FloatRK4SpringInterpolator
{
	float                                              StiffnessConstant;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DampeningRatio;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.VectorRK4SpringInterpolator
// 0x0008
struct FEngine_VectorRK4SpringInterpolator
{
	float                                              StiffnessConstant;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DampeningRatio;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.Vector4Distribution
// 0x0020
struct FEngine_Vector4Distribution
{
	struct FEngine_DistributionLookupTable             Table;                                                    // 0x0000(0x0020) (ZeroConstructor)
};

// ScriptStruct Engine.ExpressionOutput
// 0x0008
struct FEngine_ExpressionOutput
{
	struct FName                                       OutputName;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.Vector2MaterialInput
// 0x0000 (0x000C - 0x000C)
struct FEngine_Vector2MaterialInput : public FEngine_MaterialInput
{

};

// ScriptStruct Engine.BranchingPointNotifyPayload
// 0x0020
struct FEngine_BranchingPointNotifyPayload
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.PlatformInterfaceData
// 0x0030
struct FEngine_PlatformInterfaceData
{
	struct FName                                       DataName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_EPlatformInterfaceDataType> Type;                                                     // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                IntValue;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FloatValue;                                               // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     StringValue;                                              // 0x0018(0x0010) (ZeroConstructor)
	class UObject*                                     ObjectValue;                                              // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.PlatformInterfaceDelegateResult
// 0x0038
struct FEngine_PlatformInterfaceDelegateResult
{
	bool                                               bSuccessful;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FEngine_PlatformInterfaceData               Data;                                                     // 0x0008(0x0030)
};

// ScriptStruct Engine.AnimNode_Base
// 0x0010
struct FEngine_AnimNode_Base
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.PoseLinkBase
// 0x0010
struct FEngine_PoseLinkBase
{
	int                                                LinkID;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
};

// ScriptStruct Engine.PoseLink
// 0x0000 (0x0010 - 0x0010)
struct FEngine_PoseLink : public FEngine_PoseLinkBase
{

};

// ScriptStruct Engine.AnimInstanceProxy
// 0x06E0
struct FEngine_AnimInstanceProxy
{
	unsigned char                                      UnknownData00[0x6E0];                                     // 0x0000(0x06E0) MISSED OFFSET
};

// ScriptStruct Engine.KeyHandleLookupTable
// 0x0060
struct FEngine_KeyHandleLookupTable
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct Engine.InputRange
// 0x0008
struct FEngine_InputRange
{
	float                                              Min;                                                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.InputScaleBiasClamp
// 0x0030
struct FEngine_InputScaleBiasClamp
{
	bool                                               bMapRange;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bClampResult;                                             // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bInterpResult;                                            // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	struct FEngine_InputRange                          InRange;                                                  // 0x0004(0x0008) (Edit, BlueprintVisible)
	struct FEngine_InputRange                          OutRange;                                                 // 0x000C(0x0008) (Edit, BlueprintVisible)
	float                                              Scale;                                                    // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bias;                                                     // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClampMin;                                                 // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClampMax;                                                 // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InterpSpeedIncreasing;                                    // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InterpSpeedDecreasing;                                    // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.InputAlphaBoolBlend
// 0x0048
struct FEngine_InputAlphaBoolBlend
{
	float                                              BlendInTime;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlendOutTime;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FEngine_Engine_EAlphaBlendOption                   BlendOption;                                              // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bInitialized;                                             // 0x0009(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	class UEngine_CurveFloat*                          CustomCurve;                                              // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FEngine_AlphaBlend                          AlphaBlend;                                               // 0x0018(0x0030) (Transient)
};

// ScriptStruct Engine.InputScaleBias
// 0x0008
struct FEngine_InputScaleBias
{
	float                                              Scale;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bias;                                                     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ComponentSpacePoseLink
// 0x0000 (0x0010 - 0x0010)
struct FEngine_ComponentSpacePoseLink : public FEngine_PoseLinkBase
{

};

// ScriptStruct Engine.AnimNode_AssetPlayerBase
// 0x0020 (0x0030 - 0x0010)
struct FEngine_AnimNode_AssetPlayerBase : public FEngine_AnimNode_Base
{
	int                                                GroupIndex;                                               // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_EAnimGroupRole>         GroupRole;                                                // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreForRelevancyTest;                                  // 0x0015(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0016(0x0002) MISSED OFFSET
	float                                              BlendWeight;                                              // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              InternalTimeAccumulator;                                  // 0x001C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0020(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.PerBoneBlendWeight
// 0x0008
struct FEngine_PerBoneBlendWeight
{
	int                                                SourceIndex;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BlendWeight;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimNode_Root
// 0x0020 (0x0030 - 0x0010)
struct FEngine_AnimNode_Root : public FEngine_AnimNode_Base
{
	struct FEngine_PoseLink                            Result;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible)
	struct FName                                       Name;                                                     // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Group;                                                    // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimCurveParam
// 0x000C
struct FEngine_AnimCurveParam
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.ActorComponentDuplicatedObjectData
// 0x0010
struct FEngine_ActorComponentDuplicatedObjectData
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.ActorComponentInstanceData
// 0x0058
struct FEngine_ActorComponentInstanceData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UObject*                                     SourceComponentTemplate;                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	FEngine_Engine_EComponentCreationMethod            SourceComponentCreationMethod;                            // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                SourceComponentTypeSerializedIndex;                       // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              SavedProperties;                                          // 0x0018(0x0010) (ZeroConstructor)
	TArray<struct FEngine_ActorComponentDuplicatedObjectData> DuplicatedObjects;                                        // 0x0028(0x0010) (ZeroConstructor)
	TArray<class UObject*>                             ReferencedObjects;                                        // 0x0038(0x0010) (ZeroConstructor)
	TArray<struct FName>                               ReferencedNames;                                          // 0x0048(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.SceneComponentInstanceData
// 0x0050 (0x00A8 - 0x0058)
struct FEngine_SceneComponentInstanceData : public FEngine_ActorComponentInstanceData
{
	TMap<class UEngine_SceneComponent*, struct FTransform> AttachedInstanceComponents;                               // 0x0058(0x0050) (ZeroConstructor)
};

// ScriptStruct Engine.AnimationGroupReference
// 0x000C
struct FEngine_AnimationGroupReference
{
	struct FName                                       GroupName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_EAnimGroupRole>         GroupRole;                                                // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.AnimGroupInstance
// 0x0070
struct FEngine_AnimGroupInstance
{
	unsigned char                                      UnknownData00[0x70];                                      // 0x0000(0x0070) MISSED OFFSET
};

// ScriptStruct Engine.AnimTickRecord
// 0x0048
struct FEngine_AnimTickRecord
{
	class UEngine_AnimationAsset*                      SourceAsset;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0008(0x0040) MISSED OFFSET
};

// ScriptStruct Engine.BlendFilter
// 0x0078
struct FEngine_BlendFilter
{
	unsigned char                                      UnknownData00[0x78];                                      // 0x0000(0x0078) MISSED OFFSET
};

// ScriptStruct Engine.BlendSampleData
// 0x0040
struct FEngine_BlendSampleData
{
	int                                                SampleDataIndex;                                          // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UEngine_AnimSequence*                        Animation;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              TotalWeight;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PreviousTime;                                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SamplePlayRate;                                           // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0020(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.AnimationRecordingSettings
// 0x0010
struct FEngine_AnimationRecordingSettings
{
	bool                                               bRecordInWorldSpace;                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRemoveRootAnimation;                                     // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoSaveAsset;                                           // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	float                                              SampleRate;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Length;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ERichCurveInterpMode>   InterpMode;                                               // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ERichCurveTangentMode>  TangentMode;                                              // 0x000D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.ComponentSpacePose
// 0x0020
struct FEngine_ComponentSpacePose
{
	TArray<struct FTransform>                          Transforms;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               Names;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Engine.LocalSpacePose
// 0x0020
struct FEngine_LocalSpacePose
{
	TArray<struct FTransform>                          Transforms;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               Names;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Engine.NamedTransform
// 0x0040
struct FEngine_NamedTransform
{
	struct FTransform                                  Value;                                                    // 0x0000(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FName                                       Name;                                                     // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.NamedColor
// 0x000C
struct FEngine_NamedColor
{
	struct FColor                                      Value;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // 0x0004(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.NamedVector
// 0x0014
struct FEngine_NamedVector
{
	struct FVector                                     Value;                                                    // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // 0x000C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.NamedFloat
// 0x000C
struct FEngine_NamedFloat
{
	float                                              Value;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // 0x0004(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimParentNodeAssetOverride
// 0x0018
struct FEngine_AnimParentNodeAssetOverride
{
	class UEngine_AnimationAsset*                      NewAsset;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ParentNodeGuid;                                           // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimBlueprintDebugData
// 0x0001
struct FEngine_AnimBlueprintDebugData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.AnimationFrameSnapshot
// 0x0001
struct FEngine_AnimationFrameSnapshot
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.StateMachineDebugData
// 0x00B0
struct FEngine_StateMachineDebugData
{
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0000(0x00B0) MISSED OFFSET
};

// ScriptStruct Engine.RootMotionExtractionStep
// 0x0010
struct FEngine_RootMotionExtractionStep
{
	class UEngine_AnimSequence*                        AnimSequence;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              StartPosition;                                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EndPosition;                                              // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CompressedSegment
// 0x0010
struct FEngine_CompressedSegment
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.VectorCurve
// 0x0180 (0x0198 - 0x0018)
struct FEngine_VectorCurve : public FEngine_AnimCurveBase
{
	struct FEngine_RichCurve                           FloatCurves[0x3];                                         // 0x0018(0x0080)
};

// ScriptStruct Engine.TransformCurve
// 0x04C8 (0x04E0 - 0x0018)
struct FEngine_TransformCurve : public FEngine_AnimCurveBase
{
	struct FEngine_VectorCurve                         TranslationCurve;                                         // 0x0018(0x0198)
	struct FEngine_VectorCurve                         RotationCurve;                                            // 0x01B0(0x0198)
	struct FEngine_VectorCurve                         ScaleCurve;                                               // 0x0348(0x0198)
};

// ScriptStruct Engine.SlotEvaluationPose
// 0x0040
struct FEngine_SlotEvaluationPose
{
	TEnumAsByte<FEngine_Engine_EAdditiveAnimationType> AdditiveType;                                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Weight;                                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x38];                                      // 0x0008(0x0038) MISSED OFFSET
};

// ScriptStruct Engine.A2Pose
// 0x0010
struct FEngine_A2Pose
{
	TArray<struct FTransform>                          Bones;                                                    // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.A2CSPose
// 0x0018 (0x0028 - 0x0010)
struct FEngine_A2CSPose : public FEngine_A2Pose
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
	TArray<unsigned char>                              ComponentSpaceFlags;                                      // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.QueuedDrawDebugItem
// 0x0068
struct FEngine_QueuedDrawDebugItem
{
	TEnumAsByte<FEngine_Engine_EDrawDebugItemType>     ItemType;                                                 // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     StartLoc;                                                 // 0x0004(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     EndLoc;                                                   // 0x0010(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     Center;                                                   // 0x001C(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0028(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Radius;                                                   // 0x0034(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Size;                                                     // 0x0038(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                Segments;                                                 // 0x003C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FColor                                      Color;                                                    // 0x0040(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bPersistentLines;                                         // 0x0044(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	float                                              LifeTime;                                                 // 0x0048(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Thickness;                                                // 0x004C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FString                                     Message;                                                  // 0x0050(0x0010) (ZeroConstructor, Transient)
	struct FVector2D                                   TextScale;                                                // 0x0060(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Engine.AnimMontageInstance
// 0x01B0
struct FEngine_AnimMontageInstance
{
	class UEngine_AnimMontage*                         Montage;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
	bool                                               bPlaying;                                                 // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	float                                              DefaultBlendTimeMultiplier;                               // 0x002C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0xB8];                                      // 0x0030(0x00B8) MISSED OFFSET
	TArray<int>                                        NextSections;                                             // 0x00E8(0x0010) (ZeroConstructor)
	TArray<int>                                        PrevSections;                                             // 0x00F8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0108(0x0010) MISSED OFFSET
	TArray<struct FEngine_AnimNotifyEvent>             ActiveStateBranchingPoints;                               // 0x0118(0x0010) (ZeroConstructor, Transient)
	float                                              Position;                                                 // 0x0128(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x012C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FEngine_AlphaBlend                          Blend;                                                    // 0x0130(0x0030) (Transient)
	unsigned char                                      UnknownData04[0x28];                                      // 0x0160(0x0028) MISSED OFFSET
	int                                                DisableRootMotionCount;                                   // 0x0188(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x24];                                      // 0x018C(0x0024) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_ApplyMeshSpaceAdditive
// 0x0038 (0x0048 - 0x0010)
struct FEngine_AnimNode_ApplyMeshSpaceAdditive : public FEngine_AnimNode_Base
{
	struct FEngine_PoseLink                            Base;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible)
	struct FEngine_PoseLink                            Additive;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible)
	float                                              ALPHA;                                                    // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FEngine_InputScaleBias                      AlphaScaleBias;                                           // 0x0034(0x0008) (Edit, BlueprintVisible)
	int                                                LODThreshold;                                             // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_CustomProperty
// 0x0048 (0x0058 - 0x0010)
struct FEngine_AnimNode_CustomProperty : public FEngine_AnimNode_Base
{
	TArray<struct FName>                               SourcePropertyNames;                                      // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FName>                               DestPropertyNames;                                        // 0x0020(0x0010) (ZeroConstructor)
	class UObject*                                     TargetInstance;                                           // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UProperty*>                           SourceProperties;                                         // 0x0038(0x0010) (ZeroConstructor, Transient)
	TArray<class UProperty*>                           DestProperties;                                           // 0x0048(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct Engine.AnimNode_Inertialization
// 0x0060 (0x0070 - 0x0010)
struct FEngine_AnimNode_Inertialization : public FEngine_AnimNode_Base
{
	struct FEngine_PoseLink                            Source;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0020(0x0050) MISSED OFFSET
};

// ScriptStruct Engine.InertializationCurveDiff
// 0x0008
struct FEngine_InertializationCurveDiff
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.InertializationBoneDiff
// 0x003C
struct FEngine_InertializationBoneDiff
{
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0000(0x003C) MISSED OFFSET
};

// ScriptStruct Engine.InertializationPose
// 0x0090
struct FEngine_InertializationPose
{
	unsigned char                                      UnknownData00[0x90];                                      // 0x0000(0x0090) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_LinkedAnimGraph
// 0x0040 (0x0098 - 0x0058)
struct FEngine_AnimNode_LinkedAnimGraph : public FEngine_AnimNode_CustomProperty
{
	TArray<struct FEngine_PoseLink>                    InputPoses;                                               // 0x0058(0x0010) (ZeroConstructor)
	TArray<struct FName>                               InputPoseNames;                                           // 0x0068(0x0010) (ZeroConstructor)
	class UClass*                                      InstanceClass;                                            // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       Tag;                                                      // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0088(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_LinkedAnimLayer
// 0x0010 (0x00A8 - 0x0098)
struct FEngine_AnimNode_LinkedAnimLayer : public FEngine_AnimNode_LinkedAnimGraph
{
	class UClass*                                      Interface;                                                // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Layer;                                                    // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimNode_LinkedInputPose
// 0x0060 (0x0070 - 0x0010)
struct FEngine_AnimNode_LinkedInputPose : public FEngine_AnimNode_Base
{
	struct FName                                       Name;                                                     // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       Graph;                                                    // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FEngine_PoseLink                            InputPose;                                                // 0x0020(0x0010)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0030(0x0040) MISSED OFFSET
};

// ScriptStruct Engine.InertializationPoseDiff
// 0x0028
struct FEngine_InertializationPoseDiff
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_SaveCachedPose
// 0x00A8 (0x00B8 - 0x0010)
struct FEngine_AnimNode_SaveCachedPose : public FEngine_AnimNode_Base
{
	struct FEngine_PoseLink                            Pose;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible)
	struct FName                                       CachePoseName;                                            // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x90];                                      // 0x0028(0x0090) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_SequencePlayer
// 0x0048 (0x0078 - 0x0030)
struct FEngine_AnimNode_SequencePlayer : public FEngine_AnimNode_AssetPlayerBase
{
	class UEngine_AnimSequenceBase*                    Sequence;                                                 // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PlayRateBasis;                                            // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FEngine_InputScaleBiasClamp                 PlayRateScaleBiasClamp;                                   // 0x0040(0x0030) (Edit, BlueprintVisible)
	float                                              StartPosition;                                            // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLoopAnimation;                                           // 0x0074(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0075(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_StateMachine
// 0x00A0 (0x00B0 - 0x0010)
struct FEngine_AnimNode_StateMachine : public FEngine_AnimNode_Base
{
	int                                                StateMachineIndexInClass;                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxTransitionsPerFrame;                                   // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSkipFirstUpdateTransition;                               // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bReinitializeOnBecomingRelevant;                          // 0x0019(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x96];                                      // 0x001A(0x0096) MISSED OFFSET
};

// ScriptStruct Engine.AnimationPotentialTransition
// 0x0030
struct FEngine_AnimationPotentialTransition
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct Engine.AnimationActiveTransitionEntry
// 0x00C8
struct FEngine_AnimationActiveTransitionEntry
{
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0000(0x00B8) MISSED OFFSET
	class UEngine_BlendProfile*                        BlendProfile;                                             // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00C0(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_TransitionResult
// 0x0018 (0x0028 - 0x0010)
struct FEngine_AnimNode_TransitionResult : public FEngine_AnimNode_Base
{
	bool                                               bCanEnterTransition;                                      // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0011(0x0017) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_UseCachedPose
// 0x0018 (0x0028 - 0x0010)
struct FEngine_AnimNode_UseCachedPose : public FEngine_AnimNode_Base
{
	struct FEngine_PoseLink                            LinkToCachingNode;                                        // 0x0010(0x0010)
	struct FName                                       CachePoseName;                                            // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimNode_TransitionPoseEvaluator
// 0x0048 (0x0058 - 0x0010)
struct FEngine_AnimNode_TransitionPoseEvaluator : public FEngine_AnimNode_Base
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0010(0x0038) MISSED OFFSET
	int                                                FramesToCachePose;                                        // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	TEnumAsByte<FEngine_Engine_EEvaluatorDataSource>   DataSource;                                               // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_EEvaluatorMode>         EvaluatorMode;                                            // 0x0051(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0052(0x0006) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_ConvertLocalToComponentSpace
// 0x0010 (0x0020 - 0x0010)
struct FEngine_AnimNode_ConvertLocalToComponentSpace : public FEngine_AnimNode_Base
{
	struct FEngine_PoseLink                            LocalPose;                                                // 0x0010(0x0010) (Edit, BlueprintVisible)
};

// ScriptStruct Engine.AnimNode_ConvertComponentToLocalSpace
// 0x0010 (0x0020 - 0x0010)
struct FEngine_AnimNode_ConvertComponentToLocalSpace : public FEngine_AnimNode_Base
{
	struct FEngine_ComponentSpacePoseLink              ComponentPose;                                            // 0x0010(0x0010) (Edit, BlueprintVisible)
};

// ScriptStruct Engine.CompressedTrack
// 0x0038
struct FEngine_CompressedTrack
{
	TArray<unsigned char>                              ByteStream;                                               // 0x0000(0x0010) (ZeroConstructor)
	TArray<float>                                      Times;                                                    // 0x0010(0x0010) (ZeroConstructor)
	float                                              Mins[0x3];                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Ranges[0x3];                                              // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CurveTrack
// 0x0018
struct FEngine_CurveTrack
{
	struct FName                                       CurveName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<float>                                      CurveWeights;                                             // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.ScaleTrack
// 0x0020
struct FEngine_ScaleTrack
{
	TArray<struct FVector>                             ScaleKeys;                                                // 0x0000(0x0010) (ZeroConstructor)
	TArray<float>                                      Times;                                                    // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.RotationTrack
// 0x0020
struct FEngine_RotationTrack
{
	TArray<struct FQuat>                               RotKeys;                                                  // 0x0000(0x0010) (ZeroConstructor)
	TArray<float>                                      Times;                                                    // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.TranslationTrack
// 0x0020
struct FEngine_TranslationTrack
{
	TArray<struct FVector>                             PosKeys;                                                  // 0x0000(0x0010) (ZeroConstructor)
	TArray<float>                                      Times;                                                    // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.RawAnimSequenceTrack
// 0x0030
struct FEngine_RawAnimSequenceTrack
{
	TArray<struct FVector>                             PosKeys;                                                  // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FQuat>                               RotKeys;                                                  // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FVector>                             ScaleKeys;                                                // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.AnimSequenceTrackContainer
// 0x0020
struct FEngine_AnimSequenceTrackContainer
{
	TArray<struct FEngine_RawAnimSequenceTrack>        AnimationTracks;                                          // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FName>                               TrackNames;                                               // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.AnimSingleNodeInstanceProxy
// 0x0150 (0x0830 - 0x06E0)
struct FEngine_AnimSingleNodeInstanceProxy : public FEngine_AnimInstanceProxy
{
	unsigned char                                      UnknownData00[0x150];                                     // 0x06E0(0x0150) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_SingleNode
// 0x0020 (0x0030 - 0x0010)
struct FEngine_AnimNode_SingleNode : public FEngine_AnimNode_Base
{
	struct FEngine_PoseLink                            SourcePose;                                               // 0x0010(0x0010) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0020(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.AnimationTransitionRule
// 0x0010
struct FEngine_AnimationTransitionRule
{
	struct FName                                       RuleToExecute;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               TransitionReturnVal;                                      // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                TransitionIndex;                                          // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimationState
// 0x0020 (0x0028 - 0x0008)
struct FEngine_AnimationState : public FEngine_AnimationStateBase
{
	TArray<struct FEngine_AnimationTransitionRule>     Transitions;                                              // 0x0008(0x0010) (ZeroConstructor)
	int                                                StateRootNodeIndex;                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                StartNotify;                                              // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EndNotify;                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FullyBlendedNotify;                                       // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimNotifyTrack
// 0x0038
struct FEngine_AnimNotifyTrack
{
	struct FName                                       TrackName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                TrackColor;                                               // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0018(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.PerBoneBlendWeights
// 0x0010
struct FEngine_PerBoneBlendWeights
{
	TArray<struct FEngine_PerBoneBlendWeight>          BoneBlendWeights;                                         // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.AssetImportInfo
// 0x0001
struct FEngine_AssetImportInfo
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.AtmospherePrecomputeInstanceData
// 0x01E0 (0x0288 - 0x00A8)
struct FEngine_AtmospherePrecomputeInstanceData : public FEngine_SceneComponentInstanceData
{
	unsigned char                                      UnknownData00[0x1E0];                                     // 0x00A8(0x01E0) MISSED OFFSET
};

// ScriptStruct Engine.NavAvoidanceData
// 0x003C
struct FEngine_NavAvoidanceData
{
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0000(0x003C) MISSED OFFSET
};

// ScriptStruct Engine.GridBlendSample
// 0x001C
struct FEngine_GridBlendSample
{
	struct FEngine_EditorElement                       GridElement;                                              // 0x0000(0x0018)
	float                                              BlendWeight;                                              // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BPEditorBookmarkNode
// 0x0038
struct FEngine_BPEditorBookmarkNode
{
	struct FGuid                                       NodeGuid;                                                 // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ParentGuid;                                               // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FText                                       DisplayName;                                              // 0x0020(0x0018)
};

// ScriptStruct Engine.EditedDocumentInfo
// 0x0030
struct FEngine_EditedDocumentInfo
{
	struct FSoftObjectPath                             EditedObjectPath;                                         // 0x0000(0x0018) (ZeroConstructor)
	struct FVector2D                                   SavedViewOffset;                                          // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              SavedZoomAmount;                                          // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	class UObject*                                     EditedObject;                                             // 0x0028(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
};

// ScriptStruct Engine.BPInterfaceDescription
// 0x0018
struct FEngine_BPInterfaceDescription
{
	class UClass*                                      Interface;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UEngine_EdGraph*>                     Graphs;                                                   // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.BPVariableDescription
// 0x00D0
struct FEngine_BPVariableDescription
{
	struct FName                                       VarName;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       VarGuid;                                                  // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FEngine_EdGraphPinType                      VarType;                                                  // 0x0018(0x0058) (Edit)
	struct FString                                     FriendlyName;                                             // 0x0070(0x0010) (Edit, ZeroConstructor)
	struct FText                                       Category;                                                 // 0x0080(0x0018) (Edit)
	uint64_t                                           PropertyFlags;                                            // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       RepNotifyFunc;                                            // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FCoreUObject_ELifetimeCondition>       ReplicationCondition;                                     // 0x00A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET
	TArray<struct FEngine_BPVariableMetaDataEntry>     MetaDataArray;                                            // 0x00B0(0x0010) (Edit, ZeroConstructor)
	struct FString                                     DefaultValue;                                             // 0x00C0(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Engine.BlueprintMacroCosmeticInfo
// 0x0001
struct FEngine_BlueprintMacroCosmeticInfo
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.CompilerNativizationOptions
// 0x0080
struct FEngine_CompilerNativizationOptions
{
	struct FName                                       PlatformName;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               ServerOnlyPlatform;                                       // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               ClientOnlyPlatform;                                       // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bExcludeMonolithicHeaders;                                // 0x000A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x000B(0x0005) MISSED OFFSET
	TArray<struct FName>                               ExcludedModules;                                          // 0x0010(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0020(0x0050) UNKNOWN PROPERTY: SetProperty Engine.CompilerNativizationOptions.ExcludedAssets
	TArray<struct FString>                             ExcludedFolderPaths;                                      // 0x0070(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.EventGraphFastCallPair
// 0x0010
struct FEngine_EventGraphFastCallPair
{
	class UFunction*                                   FunctionToPatch;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                EventGraphCallOffset;                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.BlueprintDebugData
// 0x0001
struct FEngine_BlueprintDebugData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.DebuggingInfoForSingleFunction
// 0x0190
struct FEngine_DebuggingInfoForSingleFunction
{
	unsigned char                                      UnknownData00[0x190];                                     // 0x0000(0x0190) MISSED OFFSET
};

// ScriptStruct Engine.NodeToCodeAssociation
// 0x0014
struct FEngine_NodeToCodeAssociation
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0000(0x0014) MISSED OFFSET
};

// ScriptStruct Engine.AnimCurveType
// 0x0002
struct FEngine_AnimCurveType
{
	unsigned char                                      UnknownData00[0x2];                                       // 0x0000(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.BookmarkBaseJumpToSettings
// 0x0001
struct FEngine_BookmarkBaseJumpToSettings
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.BookmarkJumpToSettings
// 0x0000 (0x0001 - 0x0001)
struct FEngine_BookmarkJumpToSettings : public FEngine_BookmarkBaseJumpToSettings
{

};

// ScriptStruct Engine.Bookmark2DJumpToSettings
// 0x0001
struct FEngine_Bookmark2DJumpToSettings
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.PointerToUberGraphFrame
// 0x0008
struct FEngine_PointerToUberGraphFrame
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.CachedAnimTransitionData
// 0x0024
struct FEngine_CachedAnimTransitionData
{
	struct FName                                       StateMachineName;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       FromStateName;                                            // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ToStateName;                                              // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0018(0x000C) MISSED OFFSET
};

// ScriptStruct Engine.CachedAnimRelevancyData
// 0x001C
struct FEngine_CachedAnimRelevancyData
{
	struct FName                                       StateMachineName;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       StateName;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0010(0x000C) MISSED OFFSET
};

// ScriptStruct Engine.CachedAnimAssetPlayerData
// 0x0018
struct FEngine_CachedAnimAssetPlayerData
{
	struct FName                                       StateMachineName;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       StateName;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.CachedAnimStateData
// 0x001C
struct FEngine_CachedAnimStateData
{
	struct FName                                       StateMachineName;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       StateName;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0010(0x000C) MISSED OFFSET
};

// ScriptStruct Engine.CachedAnimStateArray
// 0x0018
struct FEngine_CachedAnimStateArray
{
	TArray<struct FEngine_CachedAnimStateData>         States;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.DummySpacerCameraTypes
// 0x0001
struct FEngine_DummySpacerCameraTypes
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.CanvasIcon
// 0x0018
struct FEngine_CanvasIcon
{
	class UEngine_Texture*                             Texture;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              U;                                                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              V;                                                        // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UL;                                                       // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VL;                                                       // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.WrappedStringElement
// 0x0018
struct FEngine_WrappedStringElement
{
	struct FString                                     Value;                                                    // 0x0000(0x0010) (ZeroConstructor)
	struct FVector2D                                   LineExtent;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TextSizingParameters
// 0x0028
struct FEngine_TextSizingParameters
{
	float                                              DrawX;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DrawY;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DrawXL;                                                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DrawYL;                                                   // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Scaling;                                                  // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEngine_Font*                                DrawFont;                                                 // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   SpacingAdjust;                                            // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ChildActorAttachedActorInfo
// 0x0040
struct FEngine_ChildActorAttachedActorInfo
{
	TWeakObjectPtr<class AEngine_Actor>                Actor;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketName;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FTransform                                  RelativeTransform;                                        // 0x0010(0x0030) (IsPlainOldData)
};

// ScriptStruct Engine.ChildActorComponentInstanceData
// 0x0028 (0x00D0 - 0x00A8)
struct FEngine_ChildActorComponentInstanceData : public FEngine_SceneComponentInstanceData
{
	struct FName                                       ChildActorName;                                           // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FEngine_ChildActorAttachedActorInfo> AttachedActors;                                           // 0x00B0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C0(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.AutoCompleteNode
// 0x0028
struct FEngine_AutoCompleteNode
{
	int                                                IndexChar;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<int>                                        AutoCompleteListIndices;                                  // 0x0008(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0018(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.RuntimeCurveLinearColor
// 0x0208
struct FEngine_RuntimeCurveLinearColor
{
	struct FEngine_RichCurve                           ColorCurves[0x4];                                         // 0x0000(0x0080)
	class UEngine_CurveLinearColor*                    ExternalCurve;                                            // 0x0200(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CurveTableRowHandle
// 0x0010
struct FEngine_CurveTableRowHandle
{
	class UEngine_CurveTable*                          CurveTable;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       RowName;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.DataTableCategoryHandle
// 0x0018
struct FEngine_DataTableCategoryHandle
{
	class UEngine_DataTable*                           DataTable;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       ColumnName;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       RowContents;                                              // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.DataTableRowHandle
// 0x0010
struct FEngine_DataTableRowHandle
{
	class UEngine_DataTable*                           DataTable;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       RowName;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.LevelNameAndTime
// 0x0018
struct FEngine_LevelNameAndTime
{
	struct FString                                     LevelName;                                                // 0x0000(0x0010) (ZeroConstructor)
	uint32_t                                           LevelChangeTimeInMS;                                      // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.GraphReference
// 0x0020
struct FEngine_GraphReference
{
	class UEngine_EdGraph*                             MacroGraph;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEngine_Blueprint*                           GraphBlueprint;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       GraphGuid;                                                // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.EdGraphPinReference
// 0x0018
struct FEngine_EdGraphPinReference
{
	TWeakObjectPtr<class UEngine_EdGraphNode>          OwningNode;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       PinID;                                                    // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.EdGraphSchemaAction
// 0x0100
struct FEngine_EdGraphSchemaAction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FText                                       MenuDescription;                                          // 0x0008(0x0018)
	struct FText                                       TooltipDescription;                                       // 0x0020(0x0018)
	struct FText                                       Category;                                                 // 0x0038(0x0018)
	struct FText                                       Keywords;                                                 // 0x0050(0x0018)
	int                                                Grouping;                                                 // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SectionID;                                                // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             MenuDescriptionArray;                                     // 0x0070(0x0010) (ZeroConstructor)
	TArray<struct FString>                             FullSearchTitlesArray;                                    // 0x0080(0x0010) (ZeroConstructor)
	TArray<struct FString>                             FullSearchKeywordsArray;                                  // 0x0090(0x0010) (ZeroConstructor)
	TArray<struct FString>                             FullSearchCategoryArray;                                  // 0x00A0(0x0010) (ZeroConstructor)
	TArray<struct FString>                             LocalizedMenuDescriptionArray;                            // 0x00B0(0x0010) (ZeroConstructor)
	TArray<struct FString>                             LocalizedFullSearchTitlesArray;                           // 0x00C0(0x0010) (ZeroConstructor)
	TArray<struct FString>                             LocalizedFullSearchKeywordsArray;                         // 0x00D0(0x0010) (ZeroConstructor)
	TArray<struct FString>                             LocalizedFullSearchCategoryArray;                         // 0x00E0(0x0010) (ZeroConstructor)
	struct FString                                     SearchText;                                               // 0x00F0(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.EdGraphSchemaAction_NewNode
// 0x0008 (0x0108 - 0x0100)
struct FEngine_EdGraphSchemaAction_NewNode : public FEngine_EdGraphSchemaAction
{
	class UEngine_EdGraphNode*                         NodeTemplate;                                             // 0x0100(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ScreenMessageString
// 0x0030
struct FEngine_ScreenMessageString
{
	uint64_t                                           Key;                                                      // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FString                                     ScreenMessage;                                            // 0x0008(0x0010) (ZeroConstructor, Transient)
	struct FColor                                      DisplayColor;                                             // 0x0018(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              TimeToDisplay;                                            // 0x001C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CurrentTimeDisplayed;                                     // 0x0020(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector2D                                   TextScale;                                                // 0x0024(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.URL
// 0x0068
struct FEngine_URL
{
	struct FString                                     Protocol;                                                 // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     Host;                                                     // 0x0010(0x0010) (ZeroConstructor)
	int                                                Port;                                                     // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Valid;                                                    // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Map;                                                      // 0x0028(0x0010) (ZeroConstructor)
	struct FString                                     RedirectURL;                                              // 0x0038(0x0010) (ZeroConstructor)
	TArray<struct FString>                             Op;                                                       // 0x0048(0x0010) (ZeroConstructor)
	struct FString                                     Portal;                                                   // 0x0058(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.FullyLoadedPackagesInfo
// 0x0038
struct FEngine_FullyLoadedPackagesInfo
{
	TEnumAsByte<FEngine_Engine_EFullyLoadPackageType>  FullyLoadType;                                            // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     Tag;                                                      // 0x0008(0x0010) (ZeroConstructor)
	TArray<struct FName>                               PackagesToLoad;                                           // 0x0018(0x0010) (ZeroConstructor)
	TArray<class UObject*>                             LoadedObjects;                                            // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.LevelStreamingStatus
// 0x0010
struct FEngine_LevelStreamingStatus
{
	struct FName                                       PackageName;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bShouldBeLoaded : 1;                                      // 0x0008(0x0001)
	unsigned char                                      bShouldBeVisible : 1;                                     // 0x0008(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	uint32_t                                           LODIndex;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.NamedNetDriver
// 0x0010
struct FEngine_NamedNetDriver
{
	class UEngine_NetDriver*                           NetDriver;                                                // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.WorldContext
// 0x0280
struct FEngine_WorldContext
{
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0000(0x00D0) MISSED OFFSET
	struct FEngine_URL                                 LastURL;                                                  // 0x00D0(0x0068)
	struct FEngine_URL                                 LastRemoteURL;                                            // 0x0138(0x0068)
	class UEngine_PendingNetGame*                      PendingNetGame;                                           // 0x01A0(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FEngine_FullyLoadedPackagesInfo>     PackagesToFullyLoad;                                      // 0x01A8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x01B8(0x0010) MISSED OFFSET
	TArray<class UEngine_Level*>                       LoadedLevelsForPendingMapChange;                          // 0x01C8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x18];                                      // 0x01D8(0x0018) MISSED OFFSET
	TArray<class UEngine_ObjectReferencer*>            ObjectReferencers;                                        // 0x01F0(0x0010) (ZeroConstructor)
	TArray<struct FEngine_LevelStreamingStatus>        PendingLevelStreamingStatusUpdates;                       // 0x0200(0x0010) (ZeroConstructor)
	class UEngine_GameViewportClient*                  GameViewport;                                             // 0x0210(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEngine_GameInstance*                        OwningGameInstance;                                       // 0x0218(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FEngine_NamedNetDriver>              ActiveNetDrivers;                                         // 0x0220(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData03[0x50];                                      // 0x0230(0x0050) MISSED OFFSET
};

// ScriptStruct Engine.ExposureSettings
// 0x0008
struct FEngine_ExposureSettings
{
	float                                              FixedEV100;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bFixed;                                                   // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.TickPrerequisite
// 0x0010
struct FEngine_TickPrerequisite
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.DepthFieldGlowInfo
// 0x0024
struct FEngine_DepthFieldGlowInfo
{
	unsigned char                                      bEnableGlow : 1;                                          // 0x0000(0x0001) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FLinearColor                                GlowColor;                                                // 0x0004(0x0010) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   GlowOuterRadius;                                          // 0x0014(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   GlowInnerRadius;                                          // 0x001C(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.FontRenderInfo
// 0x0028
struct FEngine_FontRenderInfo
{
	unsigned char                                      bClipText : 1;                                            // 0x0000(0x0001) (BlueprintVisible)
	unsigned char                                      bEnableShadow : 1;                                        // 0x0000(0x0001) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FEngine_DepthFieldGlowInfo                  GlowInfo;                                                 // 0x0004(0x0024) (BlueprintVisible)
};

// ScriptStruct Engine.DamageEvent
// 0x0010
struct FEngine_DamageEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UClass*                                      DamageTypeClass;                                          // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.RadialDamageParams
// 0x0014
struct FEngine_RadialDamageParams
{
	float                                              BaseDamage;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinimumDamage;                                            // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InnerRadius;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OuterRadius;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DamageFalloff;                                            // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.PointDamageEvent
// 0x0098 (0x00A8 - 0x0010)
struct FEngine_PointDamageEvent : public FEngine_DamageEvent
{
	float                                              Damage;                                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FEngine_Vector_NetQuantizeNormal            ShotDirection;                                            // 0x0014(0x000C)
	struct FEngine_HitResult                           HitInfo;                                                  // 0x0020(0x0088) (IsPlainOldData)
};

// ScriptStruct Engine.ComponentReference
// 0x0028
struct FEngine_ComponentReference
{
	class AEngine_Actor*                               OtherActor;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FName                                       ComponentProperty;                                        // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     PathToComponent;                                          // 0x0010(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.MeshBuildSettings
// 0x0030
struct FEngine_MeshBuildSettings
{
	unsigned char                                      bUseMikkTSpace : 1;                                       // 0x0000(0x0001) (Edit)
	unsigned char                                      bRecomputeNormals : 1;                                    // 0x0000(0x0001) (Edit)
	unsigned char                                      bRecomputeTangents : 1;                                   // 0x0000(0x0001) (Edit)
	unsigned char                                      bComputeWeightedNormals : 1;                              // 0x0000(0x0001) (Edit)
	unsigned char                                      bRemoveDegenerates : 1;                                   // 0x0000(0x0001) (Edit)
	unsigned char                                      bBuildAdjacencyBuffer : 1;                                // 0x0000(0x0001) (Edit)
	unsigned char                                      bBuildReversedIndexBuffer : 1;                            // 0x0000(0x0001) (Edit)
	unsigned char                                      bUseHighPrecisionTangentBasis : 1;                        // 0x0000(0x0001) (Edit)
	unsigned char                                      bUseFullPrecisionUVs : 1;                                 // 0x0001(0x0001) (Edit)
	unsigned char                                      bGenerateLightmapUVs : 1;                                 // 0x0001(0x0001) (Edit)
	unsigned char                                      bGenerateDistanceFieldAsIfTwoSided : 1;                   // 0x0001(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	int                                                MinLightmapResolution;                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SrcLightmapIndex;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                DstLightmapIndex;                                         // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BuildScale;                                               // 0x0010(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FVector                                     BuildScale3D;                                             // 0x0014(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DistanceFieldResolutionScale;                             // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	class UEngine_StaticMesh*                          DistanceFieldReplacementMesh;                             // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.POV
// 0x001C
struct FEngine_POV
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FOV;                                                      // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimUpdateRateParameters
// 0x0088
struct FEngine_AnimUpdateRateParameters
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
	FEngine_Engine_EUpdateRateShiftBucket              ShiftBucket;                                              // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bInterpolateSkippedFrames : 1;                            // 0x0002(0x0001)
	unsigned char                                      bShouldUseLodMap : 1;                                     // 0x0002(0x0001)
	unsigned char                                      bShouldUseMinLod : 1;                                     // 0x0002(0x0001)
	unsigned char                                      bSkipUpdate : 1;                                          // 0x0002(0x0001)
	unsigned char                                      bSkipEvaluation : 1;                                      // 0x0002(0x0001)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	int                                                UpdateRate;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EvaluationRate;                                           // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TickedPoseOffestTime;                                     // 0x000C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              AdditionalTime;                                           // 0x0010(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	int                                                BaseNonRenderedUpdateRate;                                // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxEvalRateForInterpolation;                              // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<float>                                      BaseVisibleDistanceFactorThesholds;                       // 0x0020(0x0010) (ZeroConstructor)
	TMap<int, int>                                     LODToFrameSkipMap;                                        // 0x0030(0x0050) (ZeroConstructor)
	int                                                SkippedUpdateFrames;                                      // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SkippedEvalFrames;                                        // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.RadialDamageEvent
// 0x0030 (0x0040 - 0x0010)
struct FEngine_RadialDamageEvent : public FEngine_DamageEvent
{
	struct FEngine_RadialDamageParams                  Params;                                                   // 0x0010(0x0014)
	struct FVector                                     Origin;                                                   // 0x0024(0x000C) (ZeroConstructor, IsPlainOldData)
	TArray<struct FEngine_HitResult>                   ComponentHits;                                            // 0x0030(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.AnimSlotDesc
// 0x000C
struct FEngine_AnimSlotDesc
{
	struct FName                                       SlotName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                NumChannels;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimSlotInfo
// 0x0018
struct FEngine_AnimSlotInfo
{
	struct FName                                       SlotName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<float>                                      ChannelWeights;                                           // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.MTDResult
// 0x0010
struct FEngine_MTDResult
{
	struct FVector                                     Direction;                                                // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.OverlapResult
// 0x0018
struct FEngine_OverlapResult
{
	TWeakObjectPtr<class AEngine_Actor>                Actor;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UEngine_PrimitiveComponent>   Component;                                                // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0010(0x0004) MISSED OFFSET
	unsigned char                                      bBlockingHit : 1;                                         // 0x0014(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.SwarmDebugOptions
// 0x0004
struct FEngine_SwarmDebugOptions
{
	unsigned char                                      bDistributionEnabled : 1;                                 // 0x0000(0x0001) (Edit)
	unsigned char                                      bForceContentExport : 1;                                  // 0x0000(0x0001) (Edit)
	unsigned char                                      bInitialized : 1;                                         // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.LightmassDebugOptions
// 0x0010
struct FEngine_LightmassDebugOptions
{
	unsigned char                                      bDebugMode : 1;                                           // 0x0000(0x0001) (Edit)
	unsigned char                                      bStatsEnabled : 1;                                        // 0x0000(0x0001) (Edit)
	unsigned char                                      bGatherBSPSurfacesAcrossComponents : 1;                   // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              CoplanarTolerance;                                        // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseImmediateImport : 1;                                  // 0x0008(0x0001) (Edit)
	unsigned char                                      bImmediateProcessMappings : 1;                            // 0x0008(0x0001) (Edit)
	unsigned char                                      bSortMappings : 1;                                        // 0x0008(0x0001) (Edit)
	unsigned char                                      bDumpBinaryFiles : 1;                                     // 0x0008(0x0001) (Edit)
	unsigned char                                      bDebugMaterials : 1;                                      // 0x0008(0x0001) (Edit)
	unsigned char                                      bPadMappings : 1;                                         // 0x0008(0x0001) (Edit)
	unsigned char                                      bDebugPaddings : 1;                                       // 0x0008(0x0001) (Edit)
	unsigned char                                      bOnlyCalcDebugTexelMappings : 1;                          // 0x0008(0x0001) (Edit)
	unsigned char                                      bUseRandomColors : 1;                                     // 0x0009(0x0001) (Edit)
	unsigned char                                      bColorBordersGreen : 1;                                   // 0x0009(0x0001) (Edit)
	unsigned char                                      bColorByExecutionTime : 1;                                // 0x0009(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
	float                                              ExecutionTimeDivisor;                                     // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BasedPosition
// 0x0038
struct FEngine_BasedPosition
{
	class AEngine_Actor*                               Base;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // 0x0008(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CachedBaseLocation;                                       // 0x0014(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    CachedBaseRotation;                                       // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     CachedTransPosition;                                      // 0x002C(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.FractureEffect
// 0x0010
struct FEngine_FractureEffect
{
	class UEngine_ParticleSystem*                      ParticleSystem;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UEngine_SoundBase*                           Sound;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.RigidBodyContactInfo
// 0x0030
struct FEngine_RigidBodyContactInfo
{
	struct FVector                                     ContactPosition;                                          // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     ContactNormal;                                            // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              ContactPenetration;                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UEngine_PhysicalMaterial*                    PhysMaterial[0x2];                                        // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CollisionImpactData
// 0x0028
struct FEngine_CollisionImpactData
{
	TArray<struct FEngine_RigidBodyContactInfo>        ContactInfos;                                             // 0x0000(0x0010) (ZeroConstructor)
	struct FVector                                     TotalNormalImpulse;                                       // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     TotalFrictionImpulse;                                     // 0x001C(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.RigidBodyState
// 0x0040
struct FEngine_RigidBodyState
{
	struct FEngine_Vector_NetQuantize100               Position;                                                 // 0x0000(0x000C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FQuat                                       Quaternion;                                               // 0x0010(0x0010) (IsPlainOldData)
	struct FEngine_Vector_NetQuantize100               LinVel;                                                   // 0x0020(0x000C)
	struct FEngine_Vector_NetQuantize100               AngVel;                                                   // 0x002C(0x000C)
	unsigned char                                      Flags;                                                    // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.ActiveHapticFeedbackEffect
// 0x0018
struct FEngine_ActiveHapticFeedbackEffect
{
	class UEngine_HapticFeedbackEffect_Base*           HapticEffect;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.ClusterNode
// 0x0040
struct FEngine_ClusterNode
{
	struct FVector                                     BoundMin;                                                 // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	int                                                FirstChild;                                               // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     BoundMax;                                                 // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData)
	int                                                LastChild;                                                // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FirstInstance;                                            // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LastInstance;                                             // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     MinInstanceScale;                                         // 0x0028(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     MaxInstanceScale;                                         // 0x0034(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ClusterNode_DEPRECATED
// 0x0028
struct FEngine_ClusterNode_DEPRECATED
{
	struct FVector                                     BoundMin;                                                 // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	int                                                FirstChild;                                               // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     BoundMax;                                                 // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData)
	int                                                LastChild;                                                // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FirstInstance;                                            // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LastInstance;                                             // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SoundModulationParameter
// 0x0014
struct FEngine_SoundModulationParameter
{
	struct FName                                       Control;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x000C(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.InstancedStaticMeshLightMapInstanceData
// 0x0040
struct FEngine_InstancedStaticMeshLightMapInstanceData
{
	struct FTransform                                  Transform;                                                // 0x0000(0x0030) (IsPlainOldData)
	TArray<struct FGuid>                               MapBuildDataIds;                                          // 0x0030(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.InstancedStaticMeshComponentInstanceData
// 0x0088 (0x0130 - 0x00A8)
struct FEngine_InstancedStaticMeshComponentInstanceData : public FEngine_SceneComponentInstanceData
{
	class UEngine_StaticMesh*                          StaticMesh;                                               // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FEngine_InstancedStaticMeshLightMapInstanceData CachedStaticLighting;                                     // 0x00B0(0x0040)
	TArray<struct FEngine_InstancedStaticMeshInstanceData> PerInstanceSMData;                                        // 0x00F0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0100(0x0020) MISSED OFFSET
	int                                                InstancingRandomSeed;                                     // 0x0120(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0124(0x000C) MISSED OFFSET
};

// ScriptStruct Engine.IntegralKey
// 0x0008
struct FEngine_IntegralKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.IntegralCurve
// 0x0018 (0x0080 - 0x0068)
struct FEngine_IntegralCurve : public FEngine_IndexedCurve
{
	TArray<struct FEngine_IntegralKey>                 Keys;                                                     // 0x0068(0x0010) (Edit, ZeroConstructor)
	int                                                DefaultValue;                                             // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseDefaultValueBeforeFirstKey;                           // 0x007C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x007D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.InterpEdSelKey
// 0x0018
struct FEngine_InterpEdSelKey
{
	class UEngine_InterpGroup*                         Group;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEngine_InterpTrack*                         Track;                                                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                KeyIndex;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              UnsnappedPosition;                                        // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CameraPreviewInfo
// 0x0030
struct FEngine_CameraPreviewInfo
{
	class UClass*                                      PawnClass;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UEngine_AnimSequence*                        AnimSeq;                                                  // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0010(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x001C(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	class AEngine_Pawn*                                PawnInst;                                                 // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Engine.SubTrackGroup
// 0x0028
struct FEngine_SubTrackGroup
{
	struct FString                                     GroupName;                                                // 0x0000(0x0010) (ZeroConstructor)
	TArray<int>                                        TrackIndices;                                             // 0x0010(0x0010) (ZeroConstructor)
	unsigned char                                      bIsCollapsed : 1;                                         // 0x0020(0x0001)
	unsigned char                                      bIsSelected : 1;                                          // 0x0020(0x0001) (Transient)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.SupportedSubTrackInfo
// 0x0020
struct FEngine_SupportedSubTrackInfo
{
	class UClass*                                      SupportedClass;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     SubTrackName;                                             // 0x0008(0x0010) (ZeroConstructor)
	int                                                GroupIndex;                                               // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.LatentActionManager
// 0x0060
struct FEngine_LatentActionManager
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct Engine.LevelSimplificationDetails
// 0x0104
struct FEngine_LevelSimplificationDetails
{
	bool                                               bCreatePackagePerAsset;                                   // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              DetailsPercentage;                                        // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FEngine_MaterialProxySettings               StaticMeshMaterialSettings;                               // 0x0008(0x0074) (Edit)
	bool                                               bOverrideLandscapeExportLOD;                              // 0x007C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x007D(0x0003) MISSED OFFSET
	int                                                LandscapeExportLOD;                                       // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FEngine_MaterialProxySettings               LandscapeMaterialSettings;                                // 0x0084(0x0074) (Edit)
	bool                                               bBakeFoliageToLandscape;                                  // 0x00F8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bBakeGrassToLandscape;                                    // 0x00F9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bGenerateMeshNormalMap;                                   // 0x00FA(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bGenerateMeshMetallicMap;                                 // 0x00FB(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bGenerateMeshRoughnessMap;                                // 0x00FC(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bGenerateMeshSpecularMap;                                 // 0x00FD(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bGenerateLandscapeNormalMap;                              // 0x00FE(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bGenerateLandscapeMetallicMap;                            // 0x00FF(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bGenerateLandscapeRoughnessMap;                           // 0x0100(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bGenerateLandscapeSpecularMap;                            // 0x0101(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0102(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.StreamableTextureInstance
// 0x0028
struct FEngine_StreamableTextureInstance
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct Engine.DynamicTextureInstance
// 0x0010 (0x0038 - 0x0028)
struct FEngine_DynamicTextureInstance : public FEngine_StreamableTextureInstance
{
	class UEngine_Texture2D*                           Texture;                                                  // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bAttached;                                                // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              OriginalRadius;                                           // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.PrecomputedLightInstanceData
// 0x0058 (0x0100 - 0x00A8)
struct FEngine_PrecomputedLightInstanceData : public FEngine_SceneComponentInstanceData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A8(0x0008) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x00B0(0x0030) (IsPlainOldData)
	struct FGuid                                       LightGuid;                                                // 0x00E0(0x0010) (ZeroConstructor, IsPlainOldData)
	int                                                PreviewShadowMapChannel;                                  // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x00F4(0x000C) MISSED OFFSET
};

// ScriptStruct Engine.BatchedPoint
// 0x0028
struct FEngine_BatchedPoint
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x000C(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              PointSize;                                                // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RemainingLifeTime;                                        // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      DepthPriority;                                            // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.BatchedLine
// 0x0034
struct FEngine_BatchedLine
{
	struct FVector                                     Start;                                                    // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x0018(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RemainingLifeTime;                                        // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      DepthPriority;                                            // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.ClientReceiveData
// 0x0040
struct FEngine_ClientReceiveData
{
	class AEngine_PlayerController*                    LocalPC;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       MessageType;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                MessageIndex;                                             // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     MessageString;                                            // 0x0018(0x0010) (ZeroConstructor)
	class AEngine_PlayerState*                         RelatedPlayerState_2;                                     // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class AEngine_PlayerState*                         RelatedPlayerState_3;                                     // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	class UObject*                                     OptionalObject;                                           // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ParameterGroupData
// 0x0018
struct FEngine_ParameterGroupData
{
	struct FString                                     GroupName;                                                // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst)
	int                                                GroupSortPriority;                                        // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.ParameterChannelNames
// 0x0060
struct FEngine_ParameterChannelNames
{
	struct FText                                       R;                                                        // 0x0000(0x0018) (Edit)
	struct FText                                       G;                                                        // 0x0018(0x0018) (Edit)
	struct FText                                       B;                                                        // 0x0030(0x0018) (Edit)
	struct FText                                       A;                                                        // 0x0048(0x0018) (Edit)
};

// ScriptStruct Engine.FunctionExpressionOutput
// 0x0020
struct FEngine_FunctionExpressionOutput
{
	class UEngine_MaterialExpressionFunctionOutput*    ExpressionOutput;                                         // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FGuid                                       ExpressionOutputId;                                       // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FEngine_ExpressionOutput                    Output;                                                   // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.FunctionExpressionInput
// 0x0030
struct FEngine_FunctionExpressionInput
{
	class UEngine_MaterialExpressionFunctionInput*     ExpressionInput;                                          // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FGuid                                       ExpressionInputId;                                        // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FEngine_ExpressionInput                     Input;                                                    // 0x0018(0x000C)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0024(0x000C) MISSED OFFSET
};

// ScriptStruct Engine.ScalarParameterAtlasInstanceData
// 0x0058
struct FEngine_ScalarParameterAtlasInstanceData
{
	bool                                               bIsUsedAsAtlasPosition;                                   // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x0001(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Engine.ScalarParameterAtlasInstanceData.Curve
	unsigned char                                      UnknownData02[0x28];                                      // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Engine.ScalarParameterAtlasInstanceData.Atlas
};

// ScriptStruct Engine.MemberReference
// 0x0038
struct FEngine_MemberReference
{
	class UObject*                                     MemberParent;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     MemberScope;                                              // 0x0008(0x0010) (ZeroConstructor)
	struct FName                                       MemberName;                                               // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       MemberGuid;                                               // 0x0020(0x0010) (ZeroConstructor, IsPlainOldData)
	bool                                               bSelfContext;                                             // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bWasDeprecated;                                           // 0x0031(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0032(0x0006) MISSED OFFSET
};

// ScriptStruct Engine.MeshInstancingSettings
// 0x0018
struct FEngine_MeshInstancingSettings
{
	class UClass*                                      ActorClassToUse;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoClear, IsPlainOldData)
	int                                                InstanceReplacementThreshold;                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FEngine_Engine_EMeshInstancingReplacementMethod    MeshReplacementMethod;                                    // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSkipMeshesWithVertexColors;                              // 0x000D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseHLODVolumes;                                          // 0x000E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x000F(0x0001) MISSED OFFSET
	class UClass*                                      ISMComponentToUse;                                        // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.MeshReductionSettings
// 0x0024
struct FEngine_MeshReductionSettings
{
	float                                              PercentTriangles;                                         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PercentVertices;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDeviation;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PixelError;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WeldingThreshold;                                         // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HardAngleThreshold;                                       // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BaseLODModel;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_EMeshFeatureImportance> SilhouetteImportance;                                     // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_EMeshFeatureImportance> TextureImportance;                                        // 0x001D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_EMeshFeatureImportance> ShadingImportance;                                        // 0x001E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bRecalculateNormals : 1;                                  // 0x001F(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGenerateUniqueLightmapUVs : 1;                           // 0x001F(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bKeepSymmetry : 1;                                        // 0x001F(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bVisibilityAided : 1;                                     // 0x001F(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCullOccluded : 1;                                        // 0x001F(0x0001) (Edit, BlueprintVisible)
	FEngine_Engine_EStaticMeshReductionTerimationCriterion TerminationCriterion;                                     // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_EMeshFeatureImportance> VisibilityAggressiveness;                                 // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_EMeshFeatureImportance> VertexColorImportance;                                    // 0x0022(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0023(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.NameCurveKey
// 0x000C
struct FEngine_NameCurveKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       Value;                                                    // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.NameCurve
// 0x0010 (0x0078 - 0x0068)
struct FEngine_NameCurve : public FEngine_IndexedCurve
{
	TArray<struct FEngine_NameCurveKey>                Keys;                                                     // 0x0068(0x0010) (Edit, EditFixedSize, ZeroConstructor)
};

// ScriptStruct Engine.NavDataConfig
// 0x0048 (0x0078 - 0x0030)
struct FEngine_NavDataConfig : public FEngine_NavAgentProperties
{
	struct FName                                       Name;                                                     // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FColor                                      Color;                                                    // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DefaultQueryExtent;                                       // 0x003C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      NavigationDataClass;                                      // 0x0048(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0050(0x0028) UNKNOWN PROPERTY: SoftClassProperty Engine.NavDataConfig.NavDataClass
};

// ScriptStruct Engine.PacketSimulationSettings
// 0x0030
struct FEngine_PacketSimulationSettings
{
	int                                                PktLoss;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PktLossMaxSize;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PktLossMinSize;                                           // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PktOrder;                                                 // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PktDup;                                                   // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PktLag;                                                   // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PktLagVariance;                                           // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PktLagMin;                                                // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PktLagMax;                                                // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PktIncomingLagMin;                                        // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PktIncomingLagMax;                                        // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PktIncomingLoss;                                          // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.FastArraySerializer
// 0x0108
struct FEngine_FastArraySerializer
{
	unsigned char                                      UnknownData00[0x54];                                      // 0x0000(0x0054) MISSED OFFSET
	int                                                ArrayReplicationKey;                                      // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0xA8];                                      // 0x0058(0x00A8) MISSED OFFSET
	FEngine_Engine_EFastArraySerializerDeltaFlags      DeltaFlags;                                               // 0x0100(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0101(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.FastArraySerializerItem
// 0x000C
struct FEngine_FastArraySerializerItem
{
	int                                                ReplicationID;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                ReplicationKey;                                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                MostRecentArrayReplicationKey;                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct Engine.ParticleCurvePair
// 0x0018
struct FEngine_ParticleCurvePair
{
	struct FString                                     CurveName;                                                // 0x0000(0x0010) (ZeroConstructor)
	class UObject*                                     CurveObject;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BeamTargetData
// 0x000C
struct FEngine_BeamTargetData
{
	struct FName                                       TargetName;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TargetPercentage;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ParticleSystemWorldManagerTickFunction
// 0x0008 (0x0030 - 0x0028)
struct FEngine_ParticleSystemWorldManagerTickFunction : public FEngine_TickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.ParticleSystemReplayFrame
// 0x0010
struct FEngine_ParticleSystemReplayFrame
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.ParticleEmitterReplayFrame
// 0x0010
struct FEngine_ParticleEmitterReplayFrame
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.PlayerMuteList
// 0x0038
struct FEngine_PlayerMuteList
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
	bool                                               bHasVoiceHandshakeCompleted;                              // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	int                                                VoiceChannelIdx;                                          // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.PreviewAttachedObjectPair
// 0x0038
struct FEngine_PreviewAttachedObjectPair
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Engine.PreviewAttachedObjectPair.AttachedObject
	class UObject*                                     Object;                                                   // 0x0028(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FName                                       AttachedTo;                                               // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.PreviewAssetAttachContainer
// 0x0010
struct FEngine_PreviewAssetAttachContainer
{
	TArray<struct FEngine_PreviewAttachedObjectPair>   AttachedObjects;                                          // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.PrimitiveComponentInstanceData
// 0x0048 (0x00F0 - 0x00A8)
struct FEngine_PrimitiveComponentInstanceData : public FEngine_SceneComponentInstanceData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A8(0x0008) MISSED OFFSET
	struct FTransform                                  ComponentTransform;                                       // 0x00B0(0x0030) (IsPlainOldData)
	int                                                VisibilityId;                                             // 0x00E0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET
	class UEngine_PrimitiveComponent*                  LODParent;                                                // 0x00E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct Engine.SpriteCategoryInfo
// 0x0038
struct FEngine_SpriteCategoryInfo
{
	struct FName                                       Category;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FText                                       DisplayName;                                              // 0x0008(0x0018)
	struct FText                                       Description;                                              // 0x0020(0x0018)
};

// ScriptStruct Engine.CompressedRichCurve
// 0x0018
struct FEngine_CompressedRichCurve
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.RootMotionSourceStatus
// 0x0001
struct FEngine_RootMotionSourceStatus
{
	unsigned char                                      Flags;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.RootMotionFinishVelocitySettings
// 0x0014
struct FEngine_RootMotionFinishVelocitySettings
{
	FEngine_Engine_ERootMotionFinishVelocityMode       Mode;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     SetVelocity;                                              // 0x0004(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              ClampVelocity;                                            // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.RootMotionSource
// 0x00A0
struct FEngine_RootMotionSource
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	uint16_t                                           Priority;                                                 // 0x0010(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           LocalID;                                                  // 0x0012(0x0002) (ZeroConstructor, IsPlainOldData)
	FEngine_Engine_ERootMotionAccumulateMode           AccumulateMode;                                           // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	struct FName                                       InstanceName;                                             // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CurrentTime;                                              // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PreviousTime;                                             // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FEngine_RootMotionSourceStatus              Status;                                                   // 0x0030(0x0001)
	struct FEngine_RootMotionSourceSettings            Settings;                                                 // 0x0031(0x0001)
	bool                                               bInLocalSpace;                                            // 0x0032(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xD];                                       // 0x0033(0x000D) MISSED OFFSET
	struct FEngine_RootMotionMovementParams            RootMotionParams;                                         // 0x0040(0x0040)
	struct FEngine_RootMotionFinishVelocitySettings    FinishVelocityParams;                                     // 0x0080(0x0014)
	unsigned char                                      UnknownData03[0xC];                                       // 0x0094(0x000C) MISSED OFFSET
};

// ScriptStruct Engine.RootMotionSource_JumpForce
// 0x0030 (0x00D0 - 0x00A0)
struct FEngine_RootMotionSource_JumpForce : public FEngine_RootMotionSource
{
	struct FRotator                                    Rotation;                                                 // 0x0098(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bDisableTimeout;                                          // 0x00AC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00AD(0x0003) MISSED OFFSET
	class UEngine_CurveVector*                         PathOffsetCurve;                                          // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEngine_CurveFloat*                          TimeMappingCurve;                                         // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x00C0(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.RootMotionSource_MoveToDynamicForce
// 0x0030 (0x00D0 - 0x00A0)
struct FEngine_RootMotionSource_MoveToDynamicForce : public FEngine_RootMotionSource
{
	struct FVector                                     StartLocation;                                            // 0x0098(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     InitialTargetLocation;                                    // 0x00A4(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // 0x00B0(0x000C) (ZeroConstructor, IsPlainOldData)
	bool                                               bRestrictSpeedToExpected;                                 // 0x00BC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00BD(0x0003) MISSED OFFSET
	class UEngine_CurveVector*                         PathOffsetCurve;                                          // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEngine_CurveFloat*                          TimeMappingCurve;                                         // 0x00C8(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.RootMotionSource_MoveToForce
// 0x0020 (0x00C0 - 0x00A0)
struct FEngine_RootMotionSource_MoveToForce : public FEngine_RootMotionSource
{
	struct FVector                                     StartLocation;                                            // 0x0098(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // 0x00A4(0x000C) (ZeroConstructor, IsPlainOldData)
	bool                                               bRestrictSpeedToExpected;                                 // 0x00B0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET
	class UEngine_CurveVector*                         PathOffsetCurve;                                          // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.RootMotionSource_RadialForce
// 0x0040 (0x00E0 - 0x00A0)
struct FEngine_RootMotionSource_RadialForce : public FEngine_RootMotionSource
{
	struct FVector                                     Location;                                                 // 0x0098(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
	class AEngine_Actor*                               LocationActor;                                            // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Strength;                                                 // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsPush;                                                  // 0x00B8(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bNoZForce;                                                // 0x00B9(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x00BA(0x0006) MISSED OFFSET
	class UEngine_CurveFloat*                          StrengthDistanceFalloff;                                  // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEngine_CurveFloat*                          StrengthOverTime;                                         // 0x00C8(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bUseFixedWorldDirection;                                  // 0x00D0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00D1(0x0003) MISSED OFFSET
	struct FRotator                                    FixedWorldDirection;                                      // 0x00D4(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.RootMotionSource_ConstantForce
// 0x0010 (0x00B0 - 0x00A0)
struct FEngine_RootMotionSource_ConstantForce : public FEngine_RootMotionSource
{
	struct FVector                                     force;                                                    // 0x0098(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
	class UEngine_CurveFloat*                          StrengthOverTime;                                         // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CameraExposureSettings
// 0x0038
struct FEngine_CameraExposureSettings
{
	TEnumAsByte<FEngine_Engine_EAutoExposureMethod>    Method;                                                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              LowPercent;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HighPercent;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinBrightness;                                            // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxBrightness;                                            // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpeedUp;                                                  // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpeedDown;                                                // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bias;                                                     // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UEngine_CurveFloat*                          BiasCurve;                                                // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HistogramLogMin;                                          // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HistogramLogMax;                                          // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CalibrationConstant;                                      // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.GaussianSumBloomSettings
// 0x0084
struct FEngine_GaussianSumBloomSettings
{
	float                                              Intensity;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Threshold;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SizeScale;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Filter1Size;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Filter2Size;                                              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Filter3Size;                                              // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Filter4Size;                                              // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Filter5Size;                                              // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Filter6Size;                                              // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Filter1Tint;                                              // 0x0024(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Filter2Tint;                                              // 0x0034(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Filter3Tint;                                              // 0x0044(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Filter4Tint;                                              // 0x0054(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Filter5Tint;                                              // 0x0064(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Filter6Tint;                                              // 0x0074(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ConvolutionBloomSettings
// 0x0028
struct FEngine_ConvolutionBloomSettings
{
	class UEngine_Texture2D*                           Texture;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Size;                                                     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   CenterUV;                                                 // 0x000C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PreFilterMin;                                             // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PreFilterMax;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PreFilterMult;                                            // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BufferScale;                                              // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.LensBloomSettings
// 0x00B8
struct FEngine_LensBloomSettings
{
	struct FEngine_GaussianSumBloomSettings            GaussianSum;                                              // 0x0000(0x0084) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	struct FEngine_ConvolutionBloomSettings            Convolution;                                              // 0x0088(0x0028) (Edit, BlueprintVisible)
	TEnumAsByte<FEngine_Engine_EBloomMethod>           Method;                                                   // 0x00B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.LensImperfectionSettings
// 0x0020
struct FEngine_LensImperfectionSettings
{
	class UEngine_Texture*                             DirtMask;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DirtMaskIntensity;                                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                DirtMaskTint;                                             // 0x000C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.LensSettings
// 0x00E0
struct FEngine_LensSettings
{
	struct FEngine_LensBloomSettings                   Bloom;                                                    // 0x0000(0x00B8) (Edit, BlueprintVisible)
	struct FEngine_LensImperfectionSettings            Imperfections;                                            // 0x00B8(0x0020) (Edit, BlueprintVisible)
	float                                              ChromaticAberration;                                      // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.FilmStockSettings
// 0x0014
struct FEngine_FilmStockSettings
{
	float                                              Slope;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Toe;                                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Shoulder;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlackClip;                                                // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WhiteClip;                                                // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ColorGradePerRangeSettings
// 0x0050
struct FEngine_ColorGradePerRangeSettings
{
	struct FVector4                                    Saturation;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    Contrast;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    Gamma;                                                    // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    Gain;                                                     // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    Offset;                                                   // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ColorGradingSettings
// 0x0150
struct FEngine_ColorGradingSettings
{
	struct FEngine_ColorGradePerRangeSettings          Global;                                                   // 0x0000(0x0050) (Edit, BlueprintVisible)
	struct FEngine_ColorGradePerRangeSettings          Shadows;                                                  // 0x0050(0x0050) (Edit, BlueprintVisible)
	struct FEngine_ColorGradePerRangeSettings          Midtones;                                                 // 0x00A0(0x0050) (Edit, BlueprintVisible)
	struct FEngine_ColorGradePerRangeSettings          Highlights;                                               // 0x00F0(0x0050) (Edit, BlueprintVisible)
	float                                              ShadowsMax;                                               // 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HighlightsMin;                                            // 0x0144(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0148(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.SimpleCurveKey
// 0x0008
struct FEngine_SimpleCurveKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SimpleCurve
// 0x0018 (0x0088 - 0x0070)
struct FEngine_SimpleCurve : public FEngine_RealCurve
{
	TEnumAsByte<FEngine_Engine_ERichCurveInterpMode>   InterpMode;                                               // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
	TArray<struct FEngine_SimpleCurveKey>              Keys;                                                     // 0x0078(0x0010) (Edit, EditFixedSize, ZeroConstructor)
};

// ScriptStruct Engine.ClothPhysicsProperties_Legacy
// 0x0050
struct FEngine_ClothPhysicsProperties_Legacy
{
	float                                              VerticalResistance;                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              HorizontalResistance;                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BendResistance;                                           // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ShearResistance;                                          // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Friction;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Damping;                                                  // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TetherStiffness;                                          // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TetherLimit;                                              // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Drag;                                                     // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              StiffnessFrequency;                                       // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              GravityScale;                                             // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MassScale;                                                // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              InertiaBlend;                                             // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SelfCollisionThickness;                                   // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SelfCollisionSquashScale;                                 // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SelfCollisionStiffness;                                   // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SolverFrequency;                                          // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FiberCompression;                                         // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FiberExpansion;                                           // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FiberResistance;                                          // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ClothingAssetData_Legacy
// 0x0078
struct FEngine_ClothingAssetData_Legacy
{
	struct FName                                       AssetName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     ApexFileName;                                             // 0x0008(0x0010) (ZeroConstructor)
	bool                                               bClothPropertiesChanged;                                  // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	struct FEngine_ClothPhysicsProperties_Legacy       PhysicsProperties;                                        // 0x001C(0x0050)
	unsigned char                                      UnknownData01[0xC];                                       // 0x006C(0x000C) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshClothBuildParams
// 0x0058
struct FEngine_SkeletalMeshClothBuildParams
{
	TWeakObjectPtr<class UClothingSystemRuntimeInterface_ClothingAssetBase> TargetAsset;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                TargetLod;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRemapParameters;                                         // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FString                                     AssetName;                                                // 0x0010(0x0010) (Edit, ZeroConstructor)
	int                                                LODIndex;                                                 // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SourceSection;                                            // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRemoveFromMesh;                                          // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData02[0x28];                                      // 0x0029(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Engine.SkeletalMeshClothBuildParams.PhysicsAsset
};

// ScriptStruct Engine.BoneMirrorExport
// 0x0014
struct FEngine_BoneMirrorExport
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SourceBoneName;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FCoreUObject_EAxis>                    BoneFlipAxis;                                             // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshComponentClothTickFunction
// 0x0008 (0x0030 - 0x0028)
struct FEngine_SkeletalMeshComponentClothTickFunction : public FEngine_TickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshComponentEndPhysicsTickFunction
// 0x0008 (0x0030 - 0x0028)
struct FEngine_SkeletalMeshComponentEndPhysicsTickFunction : public FEngine_TickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.NameMapping
// 0x0010
struct FEngine_NameMapping
{
	struct FName                                       NodeName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.RigConfiguration
// 0x0018
struct FEngine_RigConfiguration
{
	class UEngine_Rig*                                 Rig;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FEngine_NameMapping>                 BoneMappingTable;                                         // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.BoneReductionSetting
// 0x0010
struct FEngine_BoneReductionSetting
{
	TArray<struct FName>                               BonesToRemove;                                            // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.ReferencePose
// 0x0018
struct FEngine_ReferencePose
{
	struct FName                                       PoseName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FTransform>                          ReferencePose;                                            // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.SkeletonToMeshLinkup
// 0x0020
struct FEngine_SkeletonToMeshLinkup
{
	TArray<int>                                        SkeletonToMeshTable;                                      // 0x0000(0x0010) (ZeroConstructor)
	TArray<int>                                        MeshToSkeletonTable;                                      // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.PrecomputedSkyLightInstanceData
// 0x00B8 (0x0160 - 0x00A8)
struct FEngine_PrecomputedSkyLightInstanceData : public FEngine_SceneComponentInstanceData
{
	struct FGuid                                       LightGuid;                                                // 0x00A8(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              AverageBrightness;                                        // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xA4];                                      // 0x00BC(0x00A4) MISSED OFFSET
};

// ScriptStruct Engine.SmartNameMapping
// 0x0070
struct FEngine_SmartNameMapping
{
	unsigned char                                      UnknownData00[0x70];                                      // 0x0000(0x0070) MISSED OFFSET
};

// ScriptStruct Engine.CurveMetaData
// 0x0020
struct FEngine_CurveMetaData
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.SoundClassEditorData
// 0x0008
struct FEngine_SoundClassEditorData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.SoundNodeEditorData
// 0x0008
struct FEngine_SoundNodeEditorData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.StreamedAudioPlatformData
// 0x0020
struct FEngine_StreamedAudioPlatformData
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.SplineInstanceData
// 0x00D8 (0x0180 - 0x00A8)
struct FEngine_SplineInstanceData : public FEngine_SceneComponentInstanceData
{
	bool                                               bSplineHasBeenEdited;                                     // 0x00A8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET
	struct FEngine_SplineCurves                        SplineCurves;                                             // 0x00B0(0x0068)
	struct FEngine_SplineCurves                        SplineCurvesPreUCS;                                       // 0x0118(0x0068)
};

// ScriptStruct Engine.SplineMeshInstanceData
// 0x0030 (0x00D8 - 0x00A8)
struct FEngine_SplineMeshInstanceData : public FEngine_SceneComponentInstanceData
{
	struct FVector                                     StartPos;                                                 // 0x00A8(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     EndPos;                                                   // 0x00B4(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     StartTangent;                                             // 0x00C0(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     EndTangent;                                               // 0x00CC(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.MaterialRemapIndex
// 0x0018
struct FEngine_MaterialRemapIndex
{
	uint32_t                                           ImportVersionKey;                                         // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<int>                                        MaterialRemap;                                            // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.AssetEditorOrbitCameraPosition
// 0x0028
struct FEngine_AssetEditorOrbitCameraPosition
{
	bool                                               bIsSet;                                                   // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     CamOrbitPoint;                                            // 0x0004(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     CamOrbitZoom;                                             // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    CamOrbitRotation;                                         // 0x001C(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.MeshSectionInfo
// 0x0008
struct FEngine_MeshSectionInfo
{
	int                                                MaterialIndex;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bEnableCollision;                                         // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bCastShadow;                                              // 0x0005(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.MeshSectionInfoMap
// 0x0050
struct FEngine_MeshSectionInfoMap
{
	TMap<uint32_t, struct FEngine_MeshSectionInfo>     Map;                                                      // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct Engine.StaticMeshSourceModel
// 0x0070
struct FEngine_StaticMeshSourceModel
{
	struct FEngine_MeshBuildSettings                   BuildSettings;                                            // 0x0000(0x0030) (Edit)
	struct FEngine_MeshReductionSettings               ReductionSettings;                                        // 0x0030(0x0024) (Edit)
	float                                              LODDistance;                                              // 0x0054(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FEngine_PerPlatformFloat                    ScreenSize;                                               // 0x0058(0x0004) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FString                                     SourceImportFilename;                                     // 0x0060(0x0010) (Edit, ZeroConstructor, EditConst)
};

// ScriptStruct Engine.StaticMeshOptimizationSettings
// 0x001C
struct FEngine_StaticMeshOptimizationSettings
{
	TEnumAsByte<FEngine_Engine_EOptimizationType>      ReductionMethod;                                          // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              NumOfTrianglesPercentage;                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxDeviationPercentage;                                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              WeldingThreshold;                                         // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bRecalcNormals;                                           // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              NormalsThreshold;                                         // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      SilhouetteImportance;                                     // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      TextureImportance;                                        // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      ShadingImportance;                                        // 0x001A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x001B(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.PaintedVertex
// 0x0020
struct FEngine_PaintedVertex
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FColor                                      Color;                                                    // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector4                                    Normal;                                                   // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.StaticMeshVertexColorLODData
// 0x0028
struct FEngine_StaticMeshVertexColorLODData
{
	TArray<struct FEngine_PaintedVertex>               PaintedVertices;                                          // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FColor>                              VertexBufferColors;                                       // 0x0010(0x0010) (ZeroConstructor)
	uint32_t                                           LODIndex;                                                 // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.StaticMeshComponentInstanceData
// 0x0040 (0x0130 - 0x00F0)
struct FEngine_StaticMeshComponentInstanceData : public FEngine_PrimitiveComponentInstanceData
{
	class UEngine_StaticMesh*                          StaticMesh;                                               // 0x00F0(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FEngine_StaticMeshVertexColorLODData> VertexColorLODs;                                          // 0x00F8(0x0010) (ZeroConstructor)
	TArray<struct FGuid>                               CachedStaticLighting;                                     // 0x0108(0x0010) (ZeroConstructor)
	TArray<struct FEngine_StreamingTextureBuildInfo>   StreamingTextureData;                                     // 0x0118(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0128(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.StringCurveKey
// 0x0018
struct FEngine_StringCurveKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     Value;                                                    // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Engine.StringCurve
// 0x0020 (0x0088 - 0x0068)
struct FEngine_StringCurve : public FEngine_IndexedCurve
{
	struct FString                                     DefaultValue;                                             // 0x0068(0x0010) (Edit, ZeroConstructor)
	TArray<struct FEngine_StringCurveKey>              Keys;                                                     // 0x0078(0x0010) (Edit, EditFixedSize, ZeroConstructor)
};

// ScriptStruct Engine.TextureFormatSettings
// 0x0002
struct FEngine_TextureFormatSettings
{
	TEnumAsByte<FEngine_Engine_ETextureCompressionSettings> CompressionSettings;                                      // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      CompressionNoAlpha : 1;                                   // 0x0001(0x0001)
	unsigned char                                      CompressionNone : 1;                                      // 0x0001(0x0001)
	unsigned char                                      CompressionYCoCg : 1;                                     // 0x0001(0x0001)
	unsigned char                                      SRGB : 1;                                                 // 0x0001(0x0001)
};

// ScriptStruct Engine.TexturePlatformData
// 0x0030
struct FEngine_TexturePlatformData
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct Engine.TextureSource
// 0x00A0
struct FEngine_TextureSource
{
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0000(0x00A0) MISSED OFFSET
};

// ScriptStruct Engine.TextureSourceBlock
// 0x0018
struct FEngine_TextureSourceBlock
{
	int                                                BlockX;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                BlockY;                                                   // 0x0004(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                SizeX;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                SizeY;                                                    // 0x000C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                NumSlices;                                                // 0x0010(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                NumMips;                                                  // 0x0014(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct Engine.StreamingRenderAssetPrimitiveInfo
// 0x0030
struct FEngine_StreamingRenderAssetPrimitiveInfo
{
	class UEngine_StreamableRenderAsset*               RenderAsset;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FBoxSphereBounds                            Bounds;                                                   // 0x0008(0x001C) (ZeroConstructor, IsPlainOldData)
	float                                              TexelFactor;                                              // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PackedRelativeBox;                                        // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAllowInvalidTexelFactorWhenUnregistered : 1;             // 0x002C(0x0001) (Transient)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.TimeStretchCurveInstance
// 0x0030
struct FEngine_TimeStretchCurveInstance
{
	bool                                               bHasValidData;                                            // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2F];                                      // 0x0001(0x002F) MISSED OFFSET
};

// ScriptStruct Engine.EndPhysicsTickFunction
// 0x0008 (0x0030 - 0x0028)
struct FEngine_EndPhysicsTickFunction : public FEngine_TickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.StartPhysicsTickFunction
// 0x0008 (0x0030 - 0x0028)
struct FEngine_StartPhysicsTickFunction : public FEngine_TickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.LevelViewportInfo
// 0x0020
struct FEngine_LevelViewportInfo
{
	struct FVector                                     CamPosition;                                              // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    CamRotation;                                              // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              CamOrthoZoom;                                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               CamUpdated;                                               // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.LightmassWorldInfoSettings
// 0x004C
struct FEngine_LightmassWorldInfoSettings
{
	float                                              StaticLightingLevelScale;                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumIndirectLightingBounces;                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumSkyLightingBounces;                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              IndirectLightingQuality;                                  // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              IndirectLightingSmoothness;                               // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      EnvironmentColor;                                         // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EnvironmentIntensity;                                     // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EmissiveBoost;                                            // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DiffuseBoost;                                             // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_EVolumeLightingMethod>  VolumeLightingMethod;                                     // 0x0024(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseAmbientOcclusion : 1;                                 // 0x0025(0x0001) (Edit)
	unsigned char                                      bGenerateAmbientOcclusionMaterialMask : 1;                // 0x0025(0x0001) (Edit)
	unsigned char                                      bVisualizeMaterialDiffuse : 1;                            // 0x0025(0x0001) (Edit)
	unsigned char                                      bVisualizeAmbientOcclusion : 1;                           // 0x0025(0x0001) (Edit)
	unsigned char                                      bCompressLightmaps : 1;                                   // 0x0025(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0026(0x0002) MISSED OFFSET
	float                                              VolumetricLightmapDetailCellSize;                         // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VolumetricLightmapMaximumBrickMemoryMb;                   // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VolumetricLightmapSphericalHarmonicSmoothing;             // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VolumeLightSamplePlacementScale;                          // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DirectIlluminationOcclusionFraction;                      // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              IndirectIlluminationOcclusionFraction;                    // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OcclusionExponent;                                        // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FullyOccludedSamplesFraction;                             // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxOcclusionDistance;                                     // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
