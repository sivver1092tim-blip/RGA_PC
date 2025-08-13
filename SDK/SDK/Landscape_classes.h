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

// Class Landscape.ControlPointMeshActor
// 0x0008 (0x0220 - 0x0218)
class ALandscape_ControlPointMeshActor : public AEngine_Actor
{
public:
	class ULandscape_ControlPointMeshComponent*        ControlPointMeshComponent;                                // 0x0218(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.ControlPointMeshActor");
		if (!ptr)
			ptr = UObject::FindClass("Class Landscape.ControlPointMeshActor");
		return ptr;
	}

};


// Class Landscape.ControlPointMeshComponent
// 0x0000 (0x0470 - 0x0470)
class ULandscape_ControlPointMeshComponent : public UEngine_StaticMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.ControlPointMeshComponent");
		if (!ptr)
			ptr = UObject::FindClass("Class Landscape.ControlPointMeshComponent");
		return ptr;
	}

};


// Class Landscape.LandscapeProxy
// 0x02F8 (0x0510 - 0x0218)
class ALandscape_LandscapeProxy : public AEngine_Actor
{
public:
	class ULandscape_LandscapeSplinesComponent*        SplineComponent;                                          // 0x0218(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGuid                                       LandscapeGuid;                                            // 0x0220(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FIntPoint                                   LandscapeSectionOffset;                                   // 0x0230(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                MaxLODLevel;                                              // 0x0238(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LODDistanceFactor;                                        // 0x023C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	TEnumAsByte<FLandscape_Landscape_ELandscapeLODFalloff> LODFalloff;                                               // 0x0240(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0241(0x0003) MISSED OFFSET
	float                                              ComponentScreenSizeToUseSubSections;                      // 0x0244(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LOD0ScreenSize;                                           // 0x0248(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LOD0DistributionSetting;                                  // 0x024C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LODDistributionSetting;                                   // 0x0250(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TessellationComponentScreenSize;                          // 0x0254(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseTessellationComponentScreenSizeFalloff;                // 0x0258(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0259(0x0003) MISSED OFFSET
	float                                              TessellationComponentScreenSizeFalloff;                   // 0x025C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                OccluderGeometryLOD;                                      // 0x0260(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                StaticLightingLOD;                                        // 0x0264(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UEngine_PhysicalMaterial*                    DefaultPhysMaterial;                                      // 0x0268(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StreamingDistanceMultiplier;                              // 0x0270(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0274(0x0004) MISSED OFFSET
	class UEngine_MaterialInterface*                   LandscapeMaterial;                                        // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UEngine_MaterialInterface*                   LandscapeHoleMaterial;                                    // 0x0280(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FLandscape_LandscapeProxyMaterialOverride> LandscapeMaterialsOverride;                               // 0x0288(0x0010) (Edit, ZeroConstructor)
	TArray<class UEngine_RuntimeVirtualTexture*>       RuntimeVirtualTextures;                                   // 0x0298(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                VirtualTextureNumLods;                                    // 0x02A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                VirtualTextureLodBias;                                    // 0x02AC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	FEngine_Engine_ERuntimeVirtualTextureMainPassType  VirtualTextureRenderPassType;                             // 0x02B0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x02B1(0x0003) MISSED OFFSET
	float                                              NegativeZBoundsExtension;                                 // 0x02B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PositiveZBoundsExtension;                                 // 0x02B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x02BC(0x0004) MISSED OFFSET
	TArray<class ULandscape_LandscapeComponent*>       LandscapeComponents;                                      // 0x02C0(0x0010) (ExportObject, ZeroConstructor)
	TArray<class ULandscape_LandscapeHeightfieldCollisionComponent*> CollisionComponents;                                      // 0x02D0(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UEngine_HierarchicalInstancedStaticMeshComponent*> FoliageComponents;                                        // 0x02E0(0x0010) (ExportObject, ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      UnknownData05[0x64];                                      // 0x02F0(0x0064) MISSED OFFSET
	bool                                               bHasLandscapeGrass;                                       // 0x0354(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0355(0x0003) MISSED OFFSET
	float                                              StaticLightingResolution;                                 // 0x0358(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCastStaticShadow : 1;                                    // 0x035C(0x0001) (Edit)
	unsigned char                                      bCastShadowAsTwoSided : 1;                                // 0x035C(0x0001) (Edit)
	unsigned char                                      bCastFarShadow : 1;                                       // 0x035C(0x0001) (Edit)
	unsigned char                                      UnknownData07[0x3];                                       // 0x035D(0x0003) MISSED OFFSET
	unsigned char                                      bAffectDistanceFieldLighting : 1;                         // 0x0360(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FEngine_LightingChannels                    LightingChannels;                                         // 0x0361(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData08[0x2];                                       // 0x0362(0x0002) MISSED OFFSET
	unsigned char                                      bUseMaterialPositionOffsetInStaticLighting : 1;           // 0x0364(0x0001) (Edit)
	unsigned char                                      bRenderCustomDepth : 1;                                   // 0x0364(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0365(0x0003) MISSED OFFSET
	int                                                CustomDepthStencilValue;                                  // 0x0368(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LDMaxDrawDistance;                                        // 0x036C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FEngine_LightmassPrimitiveSettings          LightmassSettings;                                        // 0x0370(0x0018) (Edit)
	int                                                CollisionMipLevel;                                        // 0x0388(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SimpleCollisionMipLevel;                                  // 0x038C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CollisionThickness;                                       // 0x0390(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x0394(0x0004) MISSED OFFSET
	struct FEngine_BodyInstance                        BodyInstance;                                             // 0x0398(0x0110) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGenerateOverlapEvents : 1;                               // 0x04A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bBakeMaterialPositionOffsetIntoCollision : 1;             // 0x04A8(0x0001) (Edit)
	unsigned char                                      UnknownData11[0x3];                                       // 0x04A9(0x0003) MISSED OFFSET
	int                                                ComponentSizeQuads;                                       // 0x04AC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SubsectionSizeQuads;                                      // 0x04B0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumSubsections;                                           // 0x04B4(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUsedForNavigation : 1;                                   // 0x04B8(0x0001) (Edit)
	unsigned char                                      UnknownData12[0x3];                                       // 0x04B9(0x0003) MISSED OFFSET
	bool                                               bUseDynamicMaterialInstance;                              // 0x04BC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	FEngine_Engine_ENavDataGatheringMode               NavigationGeometryGatheringMode;                          // 0x04BD(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseLandscapeForCullingInvisibleHLODVertices;             // 0x04BE(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bHasLayersContent;                                        // 0x04BF(0x0001) (ZeroConstructor, IsPlainOldData)
	TMap<class UEngine_Texture2D*, class ULandscape_LandscapeWeightmapUsage*> WeightmapUsageMap;                                        // 0x04C0(0x0050) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeProxy");
		if (!ptr)
			ptr = UObject::FindClass("Class Landscape.LandscapeProxy");
		return ptr;
	}


	void SetLandscapeMaterialVectorParameterValue(const struct FName& ParameterName, const struct FLinearColor& Value);
	void SetLandscapeMaterialTextureParameterValue(const struct FName& ParameterName, class UEngine_Texture* Value);
	void SetLandscapeMaterialScalarParameterValue(const struct FName& ParameterName, float Value);
	void EditorSetLandscapeMaterial(class UEngine_MaterialInterface* NewLandscapeMaterial);
	void EditorApplySpline(class UEngine_SplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, class ULandscape_LandscapeLayerInfoObject* PaintLayer);
	void ChangeUseTessellationComponentScreenSizeFalloff(bool InComponentScreenSizeToUseSubSections);
	void ChangeTessellationComponentScreenSizeFalloff(float InUseTessellationComponentScreenSizeFalloff);
	void ChangeTessellationComponentScreenSize(float InTessellationComponentScreenSize);
	void ChangeLODDistanceFactor(float InLODDistanceFactor);
	void ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections);
};


// Class Landscape.LandscapeBlueprintBrushBase
// 0x0000 (0x0218 - 0x0218)
class ALandscape_LandscapeBlueprintBrushBase : public AEngine_Actor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeBlueprintBrushBase");
		if (!ptr)
			ptr = UObject::FindClass("Class Landscape.LandscapeBlueprintBrushBase");
		return ptr;
	}


	void RequestLandscapeUpdate();
	class UEngine_TextureRenderTarget2D* Render(bool InIsHeightmap, class UEngine_TextureRenderTarget2D* InCombinedResult, const struct FName& InWeightmapLayerName);
	void Initialize(const struct FTransform& InLandscapeTransform, const struct FIntPoint& InLandscapeSize, const struct FIntPoint& InLandscapeRenderTargetSize);
	void GetBlueprintRenderDependencies(TArray<class UEngine_Texture2D*>* OutStreamableAssets);
};


// Class Landscape.LandscapeComponent
// 0x01F0 (0x05D0 - 0x03E0)
class ULandscape_LandscapeComponent : public UEngine_PrimitiveComponent
{
public:
	int                                                ComponentSizeQuads;                                       // 0x03E0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SubsectionSizeQuads;                                      // 0x03E4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumSubsections;                                           // 0x03E8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03EC(0x0004) MISSED OFFSET
	class UEngine_MaterialInterface*                   OverrideMaterial;                                         // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UEngine_MaterialInterface*                   OverrideHoleMaterial;                                     // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FLandscape_LandscapeComponentMaterialOverride> OverrideMaterials;                                        // 0x0400(0x0010) (Edit, ZeroConstructor)
	TArray<class UEngine_MaterialInstanceConstant*>    MaterialInstances;                                        // 0x0410(0x0010) (ZeroConstructor)
	TArray<class UEngine_MaterialInstanceDynamic*>     MaterialInstancesDynamic;                                 // 0x0420(0x0010) (ZeroConstructor, Transient)
	TArray<int8_t>                                     LODIndexToMaterialIndex;                                  // 0x0430(0x0010) (ZeroConstructor)
	TArray<int8_t>                                     MaterialIndexToDisabledTessellationMaterial;              // 0x0440(0x0010) (ZeroConstructor)
	class UEngine_Texture2D*                           XYOffsetmapTexture;                                       // 0x0450(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0458(0x0008) MISSED OFFSET
	struct FVector4                                    WeightmapScaleBias;                                       // 0x0460(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              WeightmapSubsectionOffset;                                // 0x0470(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0474(0x000C) MISSED OFFSET
	struct FVector4                                    HeightmapScaleBias;                                       // 0x0480(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FBox                                        CachedLocalBox;                                           // 0x0490(0x001C) (ZeroConstructor, IsPlainOldData)
	TLazyObjectPtr<class ULandscape_LandscapeHeightfieldCollisionComponent> CollisionComponent;                                       // 0x04AC(0x001C) (ExportObject, InstancedReference, IsPlainOldData)
	class UEngine_Texture2D*                           HeightmapTexture;                                         // 0x04C8(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FLandscape_WeightmapLayerAllocationInfo> WeightmapLayerAllocations;                                // 0x04D0(0x0010) (ZeroConstructor)
	TArray<class UEngine_Texture2D*>                   WeightmapTextures;                                        // 0x04E0(0x0010) (ZeroConstructor)
	struct FGuid                                       MapBuildDataId;                                           // 0x04F0(0x0010) (ZeroConstructor, IsPlainOldData)
	TArray<struct FGuid>                               IrrelevantLights;                                         // 0x0500(0x0010) (ZeroConstructor, Deprecated)
	int                                                CollisionMipLevel;                                        // 0x0510(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SimpleCollisionMipLevel;                                  // 0x0514(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NegativeZBoundsExtension;                                 // 0x0518(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PositiveZBoundsExtension;                                 // 0x051C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StaticLightingResolution;                                 // 0x0520(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ForcedLOD;                                                // 0x0524(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                LODBias;                                                  // 0x0528(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       StateId;                                                  // 0x052C(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       BakedTextureMaterialGuid;                                 // 0x053C(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x054C(0x0004) MISSED OFFSET
	class UEngine_Texture2D*                           GIBakedBaseColorTexture;                                  // 0x0550(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      MobileBlendableLayerMask;                                 // 0x0558(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0559(0x0007) MISSED OFFSET
	class UEngine_MaterialInterface*                   MobileMaterialInterface;                                  // 0x0560(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	TArray<class UEngine_MaterialInterface*>           MobileMaterialInterfaces;                                 // 0x0568(0x0010) (ZeroConstructor)
	TArray<class UEngine_Texture2D*>                   MobileWeightmapTextures;                                  // 0x0578(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData05[0x48];                                      // 0x0588(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeComponent");
		if (!ptr)
			ptr = UObject::FindClass("Class Landscape.LandscapeComponent");
		return ptr;
	}


	class UEngine_MaterialInstanceDynamic* GetMaterialInstanceDynamic(int InIndex);
	float EditorGetPaintLayerWeightByNameAtLocation(const struct FVector& InLocation, const struct FName& InPaintLayerName);
	float EditorGetPaintLayerWeightAtLocation(const struct FVector& InLocation, class ULandscape_LandscapeLayerInfoObject* PaintLayer);
};


// Class Landscape.LandscapeGizmoActor
// 0x0000 (0x0218 - 0x0218)
class ALandscape_LandscapeGizmoActor : public AEngine_Actor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeGizmoActor");
		if (!ptr)
			ptr = UObject::FindClass("Class Landscape.LandscapeGizmoActor");
		return ptr;
	}

};


// Class Landscape.LandscapeGizmoActiveActor
// 0x0050 (0x0268 - 0x0218)
class ALandscape_LandscapeGizmoActiveActor : public ALandscape_LandscapeGizmoActor
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0218(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeGizmoActiveActor");
		if (!ptr)
			ptr = UObject::FindClass("Class Landscape.LandscapeGizmoActiveActor");
		return ptr;
	}

};


// Class Landscape.LandscapeGizmoRenderComponent
// 0x0000 (0x03E0 - 0x03E0)
class ULandscape_LandscapeGizmoRenderComponent : public UEngine_PrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeGizmoRenderComponent");
		if (!ptr)
			ptr = UObject::FindClass("Class Landscape.LandscapeGizmoRenderComponent");
		return ptr;
	}

};


// Class Landscape.LandscapeGrassType
// 0x0038 (0x0060 - 0x0028)
class ULandscape_LandscapeGrassType : public UObject
{
public:
	TArray<struct FLandscape_GrassVariety>             GrassVarieties;                                           // 0x0028(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      bEnableDensityScaling : 1;                                // 0x0038(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	class UEngine_StaticMesh*                          GrassMesh;                                                // 0x0040(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              GrassDensity;                                             // 0x0048(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              PlacementJitter;                                          // 0x004C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                StartCullDistance;                                        // 0x0050(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                EndCullDistance;                                          // 0x0054(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               RandomRotation;                                           // 0x0058(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               AlignToSurface;                                           // 0x0059(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x005A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeGrassType");
		if (!ptr)
			ptr = UObject::FindClass("Class Landscape.LandscapeGrassType");
		return ptr;
	}

};


// Class Landscape.LandscapeHeightfieldCollisionComponent
// 0x00E0 (0x04C0 - 0x03E0)
class ULandscape_LandscapeHeightfieldCollisionComponent : public UEngine_PrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03E0(0x0008) MISSED OFFSET
	int                                                SectionBaseX;                                             // 0x03E8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SectionBaseY;                                             // 0x03EC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CollisionSizeQuads;                                       // 0x03F0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CollisionScale;                                           // 0x03F4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SimpleCollisionSizeQuads;                                 // 0x03F8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03FC(0x0004) MISSED OFFSET
	TArray<unsigned char>                              CollisionQuadFlags;                                       // 0x0400(0x0010) (ZeroConstructor)
	struct FGuid                                       HeightfieldGuid;                                          // 0x0410(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FBox                                        CachedLocalBox;                                           // 0x0420(0x001C) (ZeroConstructor, IsPlainOldData)
	TLazyObjectPtr<class ULandscape_LandscapeComponent> RenderComponent;                                          // 0x043C(0x001C) (ExportObject, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0458(0x0010) MISSED OFFSET
	TArray<class UEngine_PhysicalMaterial*>            CookedPhysicalMaterials;                                  // 0x0468(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x48];                                      // 0x0478(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeHeightfieldCollisionComponent");
		if (!ptr)
			ptr = UObject::FindClass("Class Landscape.LandscapeHeightfieldCollisionComponent");
		return ptr;
	}


	class ULandscape_LandscapeComponent* GetRenderComponent();
};


// Class Landscape.LandscapeInfo
// 0x01E8 (0x0210 - 0x0028)
class ULandscape_LandscapeInfo : public UObject
{
public:
	TLazyObjectPtr<class ALandscape_Landscape>         LandscapeActor;                                           // 0x0028(0x001C) (IsPlainOldData)
	struct FGuid                                       LandscapeGuid;                                            // 0x0044(0x0010) (ZeroConstructor, IsPlainOldData)
	int                                                ComponentSizeQuads;                                       // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SubsectionSizeQuads;                                      // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ComponentNumSubsections;                                  // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     DrawScale;                                                // 0x0060(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xA4];                                      // 0x006C(0x00A4) MISSED OFFSET
	TArray<class ALandscape_LandscapeStreamingProxy*>  Proxies;                                                  // 0x0110(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0xF0];                                      // 0x0120(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeInfo");
		if (!ptr)
			ptr = UObject::FindClass("Class Landscape.LandscapeInfo");
		return ptr;
	}

};


// Class Landscape.LandscapeInfoMap
// 0x0058 (0x0080 - 0x0028)
class ULandscape_LandscapeInfoMap : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET
	class UEngine_World*                               World;                                                    // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeInfoMap");
		if (!ptr)
			ptr = UObject::FindClass("Class Landscape.LandscapeInfoMap");
		return ptr;
	}

};


// Class Landscape.LandscapeLayerInfoObject
// 0x0028 (0x0050 - 0x0028)
class ULandscape_LandscapeLayerInfoObject : public UObject
{
public:
	struct FName                                       LayerName;                                                // 0x0028(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	class UEngine_PhysicalMaterial*                    PhysMaterial;                                             // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Hardness;                                                 // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LayerUsageDebugColor;                                     // 0x003C(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeLayerInfoObject");
		if (!ptr)
			ptr = UObject::FindClass("Class Landscape.LandscapeLayerInfoObject");
		return ptr;
	}

};


// Class Landscape.LandscapeMaterialInstanceConstant
// 0x0008 (0x01E0 - 0x01D8)
class ULandscape_LandscapeMaterialInstanceConstant : public UEngine_MaterialInstanceConstant
{
public:
	unsigned char                                      bIsLayerThumbnail : 1;                                    // 0x01D8(0x0001)
	unsigned char                                      bDisableTessellation : 1;                                 // 0x01D8(0x0001)
	unsigned char                                      bMobile : 1;                                              // 0x01D8(0x0001)
	unsigned char                                      bEditorToolUsage : 1;                                     // 0x01D8(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01D9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeMaterialInstanceConstant");
		if (!ptr)
			ptr = UObject::FindClass("Class Landscape.LandscapeMaterialInstanceConstant");
		return ptr;
	}

};


// Class Landscape.LandscapeMeshCollisionComponent
// 0x0010 (0x04D0 - 0x04C0)
class ULandscape_LandscapeMeshCollisionComponent : public ULandscape_LandscapeHeightfieldCollisionComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x04C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeMeshCollisionComponent");
		if (!ptr)
			ptr = UObject::FindClass("Class Landscape.LandscapeMeshCollisionComponent");
		return ptr;
	}

};


// Class Landscape.LandscapeMeshProxyActor
// 0x0008 (0x0220 - 0x0218)
class ALandscape_LandscapeMeshProxyActor : public AEngine_Actor
{
public:
	class ULandscape_LandscapeMeshProxyComponent*      LandscapeMeshProxyComponent;                              // 0x0218(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeMeshProxyActor");
		if (!ptr)
			ptr = UObject::FindClass("Class Landscape.LandscapeMeshProxyActor");
		return ptr;
	}

};


// Class Landscape.LandscapeMeshProxyComponent
// 0x0020 (0x0490 - 0x0470)
class ULandscape_LandscapeMeshProxyComponent : public UEngine_StaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0470(0x0008) MISSED OFFSET
	TArray<struct FIntPoint>                           ProxyComponentBases;                                      // 0x0478(0x0010) (ZeroConstructor)
	int8_t                                             ProxyLOD;                                                 // 0x0488(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0489(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeMeshProxyComponent");
		if (!ptr)
			ptr = UObject::FindClass("Class Landscape.LandscapeMeshProxyComponent");
		return ptr;
	}

};


// Class Landscape.LandscapeSettings
// 0x0008 (0x0040 - 0x0038)
class ULandscape_LandscapeSettings : public UEngine_DeveloperSettings
{
public:
	int                                                MaxNumberOfLayers;                                        // 0x0038(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeSettings");
		if (!ptr)
			ptr = UObject::FindClass("Class Landscape.LandscapeSettings");
		return ptr;
	}

};


// Class Landscape.LandscapeSplinesComponent
// 0x0030 (0x0410 - 0x03E0)
class ULandscape_LandscapeSplinesComponent : public UEngine_PrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03E0(0x0008) MISSED OFFSET
	TArray<class ULandscape_LandscapeSplineSegment*>   Segments;                                                 // 0x03E8(0x0010) (ZeroConstructor)
	TArray<class UEngine_MeshComponent*>               CookedForeignMeshComponents;                              // 0x03F8(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0408(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeSplinesComponent");
		if (!ptr)
			ptr = UObject::FindClass("Class Landscape.LandscapeSplinesComponent");
		return ptr;
	}


	TArray<class UEngine_SplineMeshComponent*> GetSplineMeshComponents();
};


// Class Landscape.LandscapeSplineControlPoint
// 0x0080 (0x00A8 - 0x0028)
class ULandscape_LandscapeSplineControlPoint : public UObject
{
public:
	struct FVector                                     Location;                                                 // 0x0028(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0034(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Width;                                                    // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LayerWidthRatio;                                          // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SideFalloff;                                              // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LeftSideFalloffFactor;                                    // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RightSideFalloffFactor;                                   // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LeftSideLayerFalloffFactor;                               // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RightSideLayerFalloffFactor;                              // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EndFalloff;                                               // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FLandscape_LandscapeSplineConnection> ConnectedSegments;                                        // 0x0060(0x0010) (ZeroConstructor)
	TArray<struct FLandscape_LandscapeSplineInterpPoint> Points;                                                   // 0x0070(0x0010) (ZeroConstructor)
	struct FBox                                        Bounds;                                                   // 0x0080(0x001C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	class ULandscape_ControlPointMeshComponent*        LocalMeshComponent;                                       // 0x00A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeSplineControlPoint");
		if (!ptr)
			ptr = UObject::FindClass("Class Landscape.LandscapeSplineControlPoint");
		return ptr;
	}

};


// Class Landscape.LandscapeSplineSegment
// 0x0088 (0x00B0 - 0x0028)
class ULandscape_LandscapeSplineSegment : public UObject
{
public:
	struct FLandscape_LandscapeSplineSegmentConnection Connections[0x2];                                         // 0x0028(0x0018) (Edit, EditFixedSize)
	struct FInterpCurveVector                          SplineInfo;                                               // 0x0058(0x0018) (ZeroConstructor)
	TArray<struct FLandscape_LandscapeSplineInterpPoint> Points;                                                   // 0x0070(0x0010) (ZeroConstructor)
	struct FBox                                        Bounds;                                                   // 0x0080(0x001C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	TArray<class UEngine_SplineMeshComponent*>         LocalMeshComponents;                                      // 0x00A0(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeSplineSegment");
		if (!ptr)
			ptr = UObject::FindClass("Class Landscape.LandscapeSplineSegment");
		return ptr;
	}

};


// Class Landscape.LandscapeStreamingProxy
// 0x0020 (0x0530 - 0x0510)
class ALandscape_LandscapeStreamingProxy : public ALandscape_LandscapeProxy
{
public:
	TLazyObjectPtr<class ALandscape_Landscape>         LandscapeActor;                                           // 0x0510(0x001C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x052C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeStreamingProxy");
		if (!ptr)
			ptr = UObject::FindClass("Class Landscape.LandscapeStreamingProxy");
		return ptr;
	}

};


// Class Landscape.LandscapeWeightmapUsage
// 0x0030 (0x0058 - 0x0028)
class ULandscape_LandscapeWeightmapUsage : public UObject
{
public:
	class ULandscape_LandscapeComponent*               ChannelUsage[0x4];                                        // 0x0028(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGuid                                       LayerGuid;                                                // 0x0048(0x0010) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeWeightmapUsage");
		if (!ptr)
			ptr = UObject::FindClass("Class Landscape.LandscapeWeightmapUsage");
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeGrassOutput
// 0x0010 (0x0050 - 0x0040)
class ULandscape_MaterialExpressionLandscapeGrassOutput : public UEngine_MaterialExpressionCustomOutput
{
public:
	TArray<struct FLandscape_GrassInput>               GrassTypes;                                               // 0x0040(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeGrassOutput");
		if (!ptr)
			ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeGrassOutput");
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerBlend
// 0x0020 (0x0060 - 0x0040)
class ULandscape_MaterialExpressionLandscapeLayerBlend : public UEngine_MaterialExpression
{
public:
	TArray<struct FLandscape_LayerBlendInput>          Layers;                                                   // 0x0040(0x0010) (Edit, ZeroConstructor)
	struct FGuid                                       ExpressionGUID;                                           // 0x0050(0x0010) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerBlend");
		if (!ptr)
			ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerBlend");
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerCoords
// 0x0018 (0x0058 - 0x0040)
class ULandscape_MaterialExpressionLandscapeLayerCoords : public UEngine_MaterialExpression
{
public:
	TEnumAsByte<FLandscape_Landscape_ETerrainCoordMappingType> MappingType;                                              // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FLandscape_Landscape_ELandscapeCustomizedCoordType> CustomUVType;                                             // 0x0041(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0042(0x0002) MISSED OFFSET
	float                                              MappingScale;                                             // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MappingRotation;                                          // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MappingPanU;                                              // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MappingPanV;                                              // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerCoords");
		if (!ptr)
			ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerCoords");
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerSample
// 0x0020 (0x0060 - 0x0040)
class ULandscape_MaterialExpressionLandscapeLayerSample : public UEngine_MaterialExpression
{
public:
	struct FName                                       ParameterName;                                            // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PreviewWeight;                                            // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ExpressionGUID;                                           // 0x004C(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerSample");
		if (!ptr)
			ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerSample");
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerSwitch
// 0x0048 (0x0088 - 0x0040)
class ULandscape_MaterialExpressionLandscapeLayerSwitch : public UEngine_MaterialExpression
{
public:
	struct FEngine_ExpressionInput                     LayerUsed;                                                // 0x0040(0x000C)
	unsigned char                                      UnknownData00[0x8];                                       // 0x004C(0x0008) MISSED OFFSET
	struct FEngine_ExpressionInput                     LayerNotUsed;                                             // 0x0054(0x000C)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0060(0x0008) MISSED OFFSET
	struct FName                                       ParameterName;                                            // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PreviewUsed : 1;                                          // 0x0070(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
	struct FGuid                                       ExpressionGUID;                                           // 0x0074(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0084(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerSwitch");
		if (!ptr)
			ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerSwitch");
		return ptr;
	}

};


// Class Landscape.Landscape
// 0x0000 (0x0510 - 0x0510)
class ALandscape_Landscape : public ALandscape_LandscapeProxy
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.Landscape");
		if (!ptr)
			ptr = UObject::FindClass("Class Landscape.Landscape");
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerWeight
// 0x0050 (0x0090 - 0x0040)
class ULandscape_MaterialExpressionLandscapeLayerWeight : public UEngine_MaterialExpression
{
public:
	struct FEngine_ExpressionInput                     Base;                                                     // 0x0040(0x000C)
	unsigned char                                      UnknownData00[0x8];                                       // 0x004C(0x0008) MISSED OFFSET
	struct FEngine_ExpressionInput                     Layer;                                                    // 0x0054(0x000C)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0060(0x0008) MISSED OFFSET
	struct FName                                       ParameterName;                                            // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PreviewWeight;                                            // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ConstBase;                                                // 0x0074(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ExpressionGUID;                                           // 0x0080(0x0010) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerWeight");
		if (!ptr)
			ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerWeight");
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeVisibilityMask
// 0x0010 (0x0050 - 0x0040)
class ULandscape_MaterialExpressionLandscapeVisibilityMask : public UEngine_MaterialExpression
{
public:
	struct FGuid                                       ExpressionGUID;                                           // 0x0040(0x0010) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeVisibilityMask");
		if (!ptr)
			ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeVisibilityMask");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
