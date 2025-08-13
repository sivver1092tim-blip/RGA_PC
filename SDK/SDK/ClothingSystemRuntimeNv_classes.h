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

// Class ClothingSystemRuntimeNv.ClothingAssetNv
// 0x00E8 (0x0190 - 0x00A8)
class UClothingSystemRuntimeNv_ClothingAssetNv : public UClothingSystemRuntimeCommon_ClothingAssetCommon
{
public:
	struct FClothingSystemRuntimeNv_ClothConfig        ClothConfig;                                              // 0x00A8(0x00D4) (Deprecated)
	unsigned char                                      UnknownData00[0x4];                                       // 0x017C(0x0004) MISSED OFFSET
	TArray<struct FClothingSystemRuntimeNv_ClothLODData> LODData;                                                  // 0x0180(0x0010) (ZeroConstructor, Deprecated)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ClothingSystemRuntimeNv.ClothingAssetNv");
		if (!ptr)
			ptr = UObject::FindClass("Class ClothingSystemRuntimeNv.ClothingAssetNv");
		return ptr;
	}

};


// Class ClothingSystemRuntimeNv.ClothingSimulationFactoryNv
// 0x0000 (0x0028 - 0x0028)
class UClothingSystemRuntimeNv_ClothingSimulationFactoryNv : public UClothingSystemRuntimeInterface_ClothingSimulationFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ClothingSystemRuntimeNv.ClothingSimulationFactoryNv");
		if (!ptr)
			ptr = UObject::FindClass("Class ClothingSystemRuntimeNv.ClothingSimulationFactoryNv");
		return ptr;
	}

};


// Class ClothingSystemRuntimeNv.ClothingSimulationInteractorNv
// 0x0010 (0x0040 - 0x0030)
class UClothingSystemRuntimeNv_ClothingSimulationInteractorNv : public UClothingSystemRuntimeInterface_ClothingSimulationInteractor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ClothingSystemRuntimeNv.ClothingSimulationInteractorNv");
		if (!ptr)
			ptr = UObject::FindClass("Class ClothingSystemRuntimeNv.ClothingSimulationInteractorNv");
		return ptr;
	}


	void SetAnimDriveSpringStiffness(float InStiffness);
	void SetAnimDriveDamperStiffness(float InStiffness);
	void EnableGravityOverride(const struct FVector& InVector);
	void DisableGravityOverride();
};


// Class ClothingSystemRuntimeNv.ClothConfigNv
// 0x00D8 (0x0100 - 0x0028)
class UClothingSystemRuntimeNv_ClothConfigNv : public UClothingSystemRuntimeInterface_ClothConfigBase
{
public:
	FClothingSystemRuntimeNv_ClothingSystemRuntimeNv_EClothingWindMethod WindMethod;                                               // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	struct FClothingSystemRuntimeNv_ClothConstraintSetup VerticalConstraintConfig;                                 // 0x002C(0x0010) (Edit)
	struct FClothingSystemRuntimeNv_ClothConstraintSetup HorizontalConstraintConfig;                               // 0x003C(0x0010) (Edit)
	struct FClothingSystemRuntimeNv_ClothConstraintSetup BendConstraintConfig;                                     // 0x004C(0x0010) (Edit)
	struct FClothingSystemRuntimeNv_ClothConstraintSetup ShearConstraintConfig;                                    // 0x005C(0x0010) (Edit)
	float                                              SelfCollisionRadius;                                      // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SelfCollisionStiffness;                                   // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SelfCollisionCullScale;                                   // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Damping;                                                  // 0x0078(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Friction;                                                 // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WindDragCoefficient;                                      // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WindLiftCoefficient;                                      // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LinearDrag;                                               // 0x0090(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AngularDrag;                                              // 0x009C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LinearInertiaScale;                                       // 0x00A8(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AngularInertiaScale;                                      // 0x00B4(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CentrifugalInertiaScale;                                  // 0x00C0(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SolverFrequency;                                          // 0x00CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StiffnessFrequency;                                       // 0x00D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GravityScale;                                             // 0x00D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     GravityOverride;                                          // 0x00D8(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseGravityOverride;                                      // 0x00E4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00E5(0x0003) MISSED OFFSET
	float                                              TetherStiffness;                                          // 0x00E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TetherLimit;                                              // 0x00EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CollisionThickness;                                       // 0x00F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AnimDriveSpringStiffness;                                 // 0x00F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AnimDriveDamperStiffness;                                 // 0x00F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ClothingSystemRuntimeNv.ClothConfigNv");
		if (!ptr)
			ptr = UObject::FindClass("Class ClothingSystemRuntimeNv.ClothConfigNv");
		return ptr;
	}

};


// Class ClothingSystemRuntimeNv.ClothLODDataNv
// 0x0000 (0x0090 - 0x0090)
class UClothingSystemRuntimeNv_ClothLODDataNv : public UClothingSystemRuntimeCommon_ClothLODDataBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ClothingSystemRuntimeNv.ClothLODDataNv");
		if (!ptr)
			ptr = UObject::FindClass("Class ClothingSystemRuntimeNv.ClothLODDataNv");
		return ptr;
	}

};


// Class ClothingSystemRuntimeNv.ClothPhysicalMeshDataNv
// 0x0040 (0x0120 - 0x00E0)
class UClothingSystemRuntimeNv_ClothPhysicalMeshDataNv : public UClothingSystemRuntimeInterface_ClothPhysicalMeshDataBase
{
public:
	TArray<float>                                      MaxDistances;                                             // 0x00E0(0x0010) (Edit, ZeroConstructor)
	TArray<float>                                      BackstopDistances;                                        // 0x00F0(0x0010) (Edit, ZeroConstructor)
	TArray<float>                                      BackstopRadiuses;                                         // 0x0100(0x0010) (Edit, ZeroConstructor)
	TArray<float>                                      AnimDriveMultipliers;                                     // 0x0110(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ClothingSystemRuntimeNv.ClothPhysicalMeshDataNv");
		if (!ptr)
			ptr = UObject::FindClass("Class ClothingSystemRuntimeNv.ClothPhysicalMeshDataNv");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
