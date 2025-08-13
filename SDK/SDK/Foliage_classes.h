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

// Class Foliage.FoliageInstancedStaticMeshComponent
// 0x0020 (0x0610 - 0x05F0)
class UFoliage_FoliageInstancedStaticMeshComponent : public UEngine_HierarchicalInstancedStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x05F0(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnInstanceTakeRadialDamage;                               // 0x05F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0608(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.FoliageInstancedStaticMeshComponent");
		if (!ptr)
			ptr = UObject::FindClass("Class Foliage.FoliageInstancedStaticMeshComponent");
		return ptr;
	}

};


// Class Foliage.FoliageStatistics
// 0x0000 (0x0028 - 0x0028)
class UFoliage_FoliageStatistics : public UEngine_BlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.FoliageStatistics");
		if (!ptr)
			ptr = UObject::FindClass("Class Foliage.FoliageStatistics");
		return ptr;
	}


	int STATIC_FoliageOverlappingSphereCount(class UObject* WorldContextObject, class UEngine_StaticMesh* StaticMesh, const struct FVector& CenterPosition, float Radius);
	int STATIC_FoliageOverlappingBoxCount(class UObject* WorldContextObject, class UEngine_StaticMesh* StaticMesh, const struct FBox& Box);
};


// Class Foliage.FoliageType
// 0x0338 (0x0360 - 0x0028)
class UFoliage_FoliageType : public UObject
{
public:
	struct FGuid                                       UpdateGuid;                                               // 0x0028(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              Density;                                                  // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DensityAdjustmentFactor;                                  // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSingleInstanceModeOverrideRadius;                        // 0x0044(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	float                                              SingleInstanceModeRadius;                                 // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	FFoliage_Foliage_EFoliageScaling                   Scaling;                                                  // 0x004C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
	struct FFloatInterval                              ScaleX;                                                   // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatInterval                              ScaleY;                                                   // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatInterval                              ScaleZ;                                                   // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFoliage_FoliageVertexColorChannelMask      VertexColorMaskByChannel[0x4];                            // 0x0068(0x000C) (Edit)
	TEnumAsByte<FFoliage_Foliage_EFoliageVertexColorMask> VertexColorMask;                                          // 0x0098(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0099(0x0003) MISSED OFFSET
	float                                              VertexColorMaskThreshold;                                 // 0x009C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      VertexColorMaskInvert : 1;                                // 0x00A0(0x0001) (Deprecated)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00A1(0x0003) MISSED OFFSET
	struct FFloatInterval                              ZOffset;                                                  // 0x00A4(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      AlignToNormal : 1;                                        // 0x00AC(0x0001) (Edit)
	unsigned char                                      UnknownData04[0x3];                                       // 0x00AD(0x0003) MISSED OFFSET
	float                                              AlignMaxAngle;                                            // 0x00B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      RandomYaw : 1;                                            // 0x00B4(0x0001) (Edit)
	unsigned char                                      UnknownData05[0x3];                                       // 0x00B5(0x0003) MISSED OFFSET
	float                                              RandomPitchAngle;                                         // 0x00B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatInterval                              GroundSlopeAngle;                                         // 0x00BC(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatInterval                              Height;                                                   // 0x00C4(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET
	TArray<struct FName>                               LandscapeLayers;                                          // 0x00D0(0x0010) (Edit, ZeroConstructor)
	float                                              MinimumLayerWeight;                                       // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET
	TArray<struct FName>                               ExclusionLandscapeLayers;                                 // 0x00E8(0x0010) (Edit, ZeroConstructor)
	float                                              MinimumExclusionLayerWeight;                              // 0x00F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       LandscapeLayer;                                           // 0x00FC(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      CollisionWithWorld : 1;                                   // 0x0104(0x0001) (Edit)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0105(0x0003) MISSED OFFSET
	struct FVector                                     CollisionScale;                                           // 0x0108(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBoxSphereBounds                            MeshBounds;                                               // 0x0114(0x001C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     LowBoundOriginRadius;                                     // 0x0130(0x000C) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_EComponentMobility>     Mobility;                                                 // 0x013C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x013D(0x0003) MISSED OFFSET
	struct FInt32Interval                              CullDistance;                                             // 0x0140(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnableStaticLighting : 1;                                // 0x0148(0x0001) (Deprecated)
	unsigned char                                      CastShadow : 1;                                           // 0x0148(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bAffectDynamicIndirectLighting : 1;                       // 0x0148(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bAffectDistanceFieldLighting : 1;                         // 0x0148(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bCastDynamicShadow : 1;                                   // 0x0148(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bCastStaticShadow : 1;                                    // 0x0148(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bCastShadowAsTwoSided : 1;                                // 0x0148(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bReceivesDecals : 1;                                      // 0x0148(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bOverrideLightMapRes : 1;                                 // 0x0149(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData10[0x2];                                       // 0x014A(0x0002) MISSED OFFSET
	int                                                OverriddenLightMapRes;                                    // 0x014C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	FEngine_Engine_ELightmapType                       LightmapType;                                             // 0x0150(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0151(0x0003) MISSED OFFSET
	unsigned char                                      bUseAsOccluder : 1;                                       // 0x0154(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData12[0x3];                                       // 0x0155(0x0003) MISSED OFFSET
	struct FEngine_BodyInstance                        BodyInstance;                                             // 0x0158(0x0110) (Edit)
	TEnumAsByte<FEngine_Engine_EHasCustomNavigableGeometry> CustomNavigableGeometry;                                  // 0x0268(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FEngine_LightingChannels                    LightingChannels;                                         // 0x0269(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData13[0x2];                                       // 0x026A(0x0002) MISSED OFFSET
	unsigned char                                      bRenderCustomDepth : 1;                                   // 0x026C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData14[0x3];                                       // 0x026D(0x0003) MISSED OFFSET
	int                                                CustomDepthStencilValue;                                  // 0x0270(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TranslucencySortPriority;                                 // 0x0274(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CollisionRadius;                                          // 0x0278(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ShadeRadius;                                              // 0x027C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumSteps;                                                 // 0x0280(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InitialSeedDensity;                                       // 0x0284(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AverageSpreadDistance;                                    // 0x0288(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpreadVariance;                                           // 0x028C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SeedsPerStep;                                             // 0x0290(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                DistributionSeed;                                         // 0x0294(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxInitialSeedOffset;                                     // 0x0298(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCanGrowInShade;                                          // 0x029C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSpawnsInShade;                                           // 0x029D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x2];                                       // 0x029E(0x0002) MISSED OFFSET
	float                                              MaxInitialAge;                                            // 0x02A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxAge;                                                   // 0x02A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OverlapPriority;                                          // 0x02A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatInterval                              ProceduralScale;                                          // 0x02AC(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x02B4(0x0004) MISSED OFFSET
	struct FEngine_RuntimeFloatCurve                   ScaleCurve;                                               // 0x02B8(0x0088) (Edit)
	int                                                ChangeCount;                                              // 0x0340(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReapplyDensity : 1;                                       // 0x0344(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyRadius : 1;                                        // 0x0344(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyAlignToNormal : 1;                                 // 0x0344(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyRandomYaw : 1;                                     // 0x0344(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyScaling : 1;                                       // 0x0344(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyScaleX : 1;                                        // 0x0344(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyScaleY : 1;                                        // 0x0344(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyScaleZ : 1;                                        // 0x0344(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyRandomPitchAngle : 1;                              // 0x0345(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyGroundSlope : 1;                                   // 0x0345(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyHeight : 1;                                        // 0x0345(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyLandscapeLayers : 1;                               // 0x0345(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyZOffset : 1;                                       // 0x0345(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyCollisionWithWorld : 1;                            // 0x0345(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyVertexColorMask : 1;                               // 0x0345(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bEnableDensityScaling : 1;                                // 0x0345(0x0001) (Edit)
	unsigned char                                      UnknownData17[0x2];                                       // 0x0346(0x0002) MISSED OFFSET
	TArray<class UEngine_RuntimeVirtualTexture*>       RuntimeVirtualTextures;                                   // 0x0348(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                VirtualTextureCullMips;                                   // 0x0358(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	FEngine_Engine_ERuntimeVirtualTextureMainPassType  VirtualTextureRenderPassType;                             // 0x035C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData18[0x3];                                       // 0x035D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.FoliageType");
		if (!ptr)
			ptr = UObject::FindClass("Class Foliage.FoliageType");
		return ptr;
	}

};


// Class Foliage.FoliageType_Actor
// 0x0010 (0x0370 - 0x0360)
class UFoliage_FoliageType_Actor : public UFoliage_FoliageType
{
public:
	class UClass*                                      ActorClass;                                               // 0x0360(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldAttachToBaseComponent;                             // 0x0368(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0369(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.FoliageType_Actor");
		if (!ptr)
			ptr = UObject::FindClass("Class Foliage.FoliageType_Actor");
		return ptr;
	}

};


// Class Foliage.FoliageType_InstancedStaticMesh
// 0x0020 (0x0380 - 0x0360)
class UFoliage_FoliageType_InstancedStaticMesh : public UFoliage_FoliageType
{
public:
	class UEngine_StaticMesh*                          Mesh;                                                     // 0x0360(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UEngine_MaterialInterface*>           OverrideMaterials;                                        // 0x0368(0x0010) (Edit, ZeroConstructor)
	class UClass*                                      ComponentClass;                                           // 0x0378(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.FoliageType_InstancedStaticMesh");
		if (!ptr)
			ptr = UObject::FindClass("Class Foliage.FoliageType_InstancedStaticMesh");
		return ptr;
	}

};


// Class Foliage.InstancedFoliageActor
// 0x0050 (0x0268 - 0x0218)
class AFoliage_InstancedFoliageActor : public AEngine_Actor
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0218(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.InstancedFoliageActor");
		if (!ptr)
			ptr = UObject::FindClass("Class Foliage.InstancedFoliageActor");
		return ptr;
	}

};


// Class Foliage.InteractiveFoliageActor
// 0x0060 (0x0288 - 0x0228)
class AFoliage_InteractiveFoliageActor : public AEngine_StaticMeshActor
{
public:
	class UEngine_CapsuleComponent*                    CapsuleComponent;                                         // 0x0228(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     TouchingActorEntryPosition;                               // 0x0230(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     FoliageVelocity;                                          // 0x023C(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     FoliageForce;                                             // 0x0248(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     FoliagePosition;                                          // 0x0254(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              FoliageDamageImpulseScale;                                // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FoliageTouchImpulseScale;                                 // 0x0264(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FoliageStiffness;                                         // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FoliageStiffnessQuadratic;                                // 0x026C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FoliageDamping;                                           // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDamageImpulse;                                         // 0x0274(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxTouchImpulse;                                          // 0x0278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxForce;                                                 // 0x027C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Mass;                                                     // 0x0280(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0284(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.InteractiveFoliageActor");
		if (!ptr)
			ptr = UObject::FindClass("Class Foliage.InteractiveFoliageActor");
		return ptr;
	}


	void CapsuleTouched(class UEngine_PrimitiveComponent* OverlappedComp, class AEngine_Actor* Other, class UEngine_PrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FEngine_HitResult& OverlapInfo);
};


// Class Foliage.InteractiveFoliageComponent
// 0x0000 (0x0470 - 0x0470)
class UFoliage_InteractiveFoliageComponent : public UEngine_StaticMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.InteractiveFoliageComponent");
		if (!ptr)
			ptr = UObject::FindClass("Class Foliage.InteractiveFoliageComponent");
		return ptr;
	}

};


// Class Foliage.ProceduralFoliageBlockingVolume
// 0x0008 (0x0258 - 0x0250)
class AFoliage_ProceduralFoliageBlockingVolume : public AEngine_Volume
{
public:
	class AFoliage_ProceduralFoliageVolume*            ProceduralFoliageVolume;                                  // 0x0250(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.ProceduralFoliageBlockingVolume");
		if (!ptr)
			ptr = UObject::FindClass("Class Foliage.ProceduralFoliageBlockingVolume");
		return ptr;
	}

};


// Class Foliage.ProceduralFoliageSpawner
// 0x0048 (0x0070 - 0x0028)
class UFoliage_ProceduralFoliageSpawner : public UObject
{
public:
	int                                                RandomSeed;                                               // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TileSize;                                                 // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumUniqueTiles;                                           // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinimumQuadTreeSize;                                      // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	TArray<struct FFoliage_FoliageTypeObject>          FoliageTypes;                                             // 0x0040(0x0010) (Edit, ZeroConstructor)
	bool                                               bNeedsSimulation;                                         // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1F];                                      // 0x0051(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.ProceduralFoliageSpawner");
		if (!ptr)
			ptr = UObject::FindClass("Class Foliage.ProceduralFoliageSpawner");
		return ptr;
	}


	void Simulate(int NumSteps);
};


// Class Foliage.ProceduralFoliageTile
// 0x0130 (0x0158 - 0x0028)
class UFoliage_ProceduralFoliageTile : public UObject
{
public:
	class UFoliage_ProceduralFoliageSpawner*           FoliageSpawner;                                           // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0030(0x00A0) MISSED OFFSET
	TArray<struct FFoliage_ProceduralFoliageInstance>  InstancesArray;                                           // 0x00D0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x78];                                      // 0x00E0(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.ProceduralFoliageTile");
		if (!ptr)
			ptr = UObject::FindClass("Class Foliage.ProceduralFoliageTile");
		return ptr;
	}

};


// Class Foliage.ProceduralFoliageVolume
// 0x0008 (0x0258 - 0x0250)
class AFoliage_ProceduralFoliageVolume : public AEngine_Volume
{
public:
	class UFoliage_ProceduralFoliageComponent*         ProceduralComponent;                                      // 0x0250(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.ProceduralFoliageVolume");
		if (!ptr)
			ptr = UObject::FindClass("Class Foliage.ProceduralFoliageVolume");
		return ptr;
	}

};


// Class Foliage.ProceduralFoliageComponent
// 0x0028 (0x00D8 - 0x00B0)
class UFoliage_ProceduralFoliageComponent : public UEngine_ActorComponent
{
public:
	class UFoliage_ProceduralFoliageSpawner*           FoliageSpawner;                                           // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TileOverlap;                                              // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
	class AEngine_Volume*                              SpawningVolume;                                           // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ProceduralGuid;                                           // 0x00C8(0x0010) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.ProceduralFoliageComponent");
		if (!ptr)
			ptr = UObject::FindClass("Class Foliage.ProceduralFoliageComponent");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
