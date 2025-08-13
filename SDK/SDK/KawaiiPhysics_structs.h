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

// Enum KawaiiPhysics.EPlanarConstraint
enum class FKawaiiPhysics_KawaiiPhysics_EPlanarConstraint : uint8_t
{
	EPlanarConstraint__None        = 0,
	EPlanarConstraint__X           = 1,
	EPlanarConstraint__Y           = 2,
	EPlanarConstraint__Z           = 3,
	EPlanarConstraint__EPlanarConstraint_MAX = 4
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct KawaiiPhysics.KawaiiPhysicsSettings
// 0x0018
struct FKawaiiPhysics_KawaiiPhysicsSettings
{
	float                                              Damping;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WorldDampingLocation;                                     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WorldDampingRotation;                                     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Stiffness;                                                // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LimitAngle;                                               // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct KawaiiPhysics.KawaiiPhysicsModifyBone
// 0x00B0
struct FKawaiiPhysics_KawaiiPhysicsModifyBone
{
	struct FEngine_BoneReference                       BoneRef;                                                  // 0x0000(0x0010)
	int                                                ParentIndex;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<int>                                        ChildIndexs;                                              // 0x0018(0x0010) (ZeroConstructor)
	struct FKawaiiPhysics_KawaiiPhysicsSettings        PhysicsSettings;                                          // 0x0028(0x0018)
	struct FVector                                     Location;                                                 // 0x0040(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     PrevLocation;                                             // 0x004C(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0058(0x0008) MISSED OFFSET
	struct FQuat                                       PrevRotation;                                             // 0x0060(0x0010) (IsPlainOldData)
	struct FVector                                     PoseLocation;                                             // 0x0070(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	struct FQuat                                       PoseRotation;                                             // 0x0080(0x0010) (IsPlainOldData)
	struct FVector                                     PoseScale;                                                // 0x0090(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              LengthFromRoot;                                           // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bDummy;                                                   // 0x00A0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xF];                                       // 0x00A1(0x000F) MISSED OFFSET
};

// ScriptStruct KawaiiPhysics.CollisionLimitBase
// 0x0060
struct FKawaiiPhysics_CollisionLimitBase
{
	struct FEngine_BoneReference                       DrivingBone;                                              // 0x0000(0x0010) (Edit)
	bool                                               bUseCustomDrivingBone;                                    // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	struct FName                                       CustomDrivingBoneName;                                    // 0x0014(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugDrawCustomCollisionInGame;                          // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	struct FVector                                     OffsetLocation;                                           // 0x0020(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    OffsetRotation;                                           // 0x002C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0038(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0044(0x000C) MISSED OFFSET
	struct FQuat                                       Rotation;                                                 // 0x0050(0x0010) (IsPlainOldData)
};

// ScriptStruct KawaiiPhysics.SphericalLimit
// 0x0010 (0x0070 - 0x0060)
struct FKawaiiPhysics_SphericalLimit : public FKawaiiPhysics_CollisionLimitBase
{
	float                                              Radius;                                                   // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	FAnimGraphRuntime_AnimGraphRuntime_ESphericalLimitType LimitType;                                                // 0x0064(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x0065(0x000B) MISSED OFFSET
};

// ScriptStruct KawaiiPhysics.CapsuleLimit
// 0x0010 (0x0070 - 0x0060)
struct FKawaiiPhysics_CapsuleLimit : public FKawaiiPhysics_CollisionLimitBase
{
	float                                              Radius;                                                   // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Length;                                                   // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0068(0x0008) MISSED OFFSET
};

// ScriptStruct KawaiiPhysics.PlanarLimit
// 0x0010 (0x0070 - 0x0060)
struct FKawaiiPhysics_PlanarLimit : public FKawaiiPhysics_CollisionLimitBase
{
	struct FPlane                                      Plane;                                                    // 0x0060(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct KawaiiPhysics.AnimNode_KawaiiPhysics
// 0x0158 (0x0220 - 0x00C8)
struct FKawaiiPhysics_AnimNode_KawaiiPhysics : public FAnimGraphRuntime_AnimNode_SkeletalControlBase
{
	struct FEngine_BoneReference                       RootBone;                                                 // 0x00C8(0x0010) (Edit)
	TArray<struct FEngine_BoneReference>               ExcludeBones;                                             // 0x00D8(0x0010) (Edit, ZeroConstructor)
	int                                                TargetFramerate;                                          // 0x00E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideTargetFramerate;                                  // 0x00EC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00ED(0x0003) MISSED OFFSET
	struct FKawaiiPhysics_KawaiiPhysicsSettings        PhysicsSettings;                                          // 0x00F0(0x0018) (Edit, BlueprintVisible)
	class UEngine_CurveFloat*                          DampingCurve;                                             // 0x0108(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UEngine_CurveFloat*                          WorldDampingLocationCurve;                                // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UEngine_CurveFloat*                          WorldDampingRotationCurve;                                // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UEngine_CurveFloat*                          StiffnessCurve;                                           // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UEngine_CurveFloat*                          RadiusCurve;                                              // 0x0128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UEngine_CurveFloat*                          LimitAngleCurve;                                          // 0x0130(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUpdatePhysicsSettingsInGame;                             // 0x0138(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0139(0x0003) MISSED OFFSET
	float                                              DummyBoneLength;                                          // 0x013C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FKawaiiPhysics_KawaiiPhysics_EPlanarConstraint     PlanarConstraint;                                         // 0x0140(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0141(0x0007) MISSED OFFSET
	TArray<struct FKawaiiPhysics_SphericalLimit>       SphericalLimits;                                          // 0x0148(0x0010) (Edit, ZeroConstructor)
	TArray<struct FKawaiiPhysics_CapsuleLimit>         CapsuleLimits;                                            // 0x0158(0x0010) (Edit, ZeroConstructor)
	TArray<struct FKawaiiPhysics_PlanarLimit>          PlanarLimits;                                             // 0x0168(0x0010) (Edit, ZeroConstructor)
	float                                              TeleportDistanceThreshold;                                // 0x0178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TeleportRotationThreshold;                                // 0x017C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Gravity;                                                  // 0x0180(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UEngine_SkeletalMeshComponent> CharacterMesh;                                            // 0x018C(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bEnableWind;                                              // 0x0194(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0195(0x0003) MISSED OFFSET
	float                                              WindScale;                                                // 0x0198(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x019C(0x0004) MISSED OFFSET
	TArray<struct FKawaiiPhysics_KawaiiPhysicsModifyBone> ModifyBones;                                              // 0x01A0(0x0010) (ZeroConstructor)
	float                                              TotalBoneLength;                                          // 0x01B0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0xC];                                       // 0x01B4(0x000C) MISSED OFFSET
	struct FTransform                                  PreSkelCompTransform;                                     // 0x01C0(0x0030) (IsPlainOldData)
	bool                                               bInitPhysicsSettings;                                     // 0x01F0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2F];                                      // 0x01F1(0x002F) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
