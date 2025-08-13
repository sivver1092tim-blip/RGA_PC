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

// Enum Landscape.ELandscapeSetupErrors
enum class FLandscape_Landscape_ELandscapeSetupErrors : uint8_t
{
	LSE_None                       = 0,
	LSE_NoLandscapeInfo            = 1,
	LSE_CollsionXY                 = 2,
	LSE_NoLayerInfo                = 3,
	LSE_MAX                        = 4
};


// Enum Landscape.ELandscapeClearMode
enum class FLandscape_Landscape_ELandscapeClearMode : uint8_t
{
	Clear_Weightmap                = 0,
	Clear_Heightmap                = 1,
	Clear_All                      = 2,
	Clear_MAX                      = 3
};


// Enum Landscape.ELandscapeGizmoType
enum class FLandscape_Landscape_ELandscapeGizmoType : uint8_t
{
	LGT_None                       = 0,
	LGT_Height                     = 1,
	LGT_Weight                     = 2,
	LGT_MAX                        = 3
};


// Enum Landscape.ESplineModulationColorMask
enum class FLandscape_Landscape_ESplineModulationColorMask : uint8_t
{
	ESplineModulationColorMask__Red = 0,
	ESplineModulationColorMask__Green = 1,
	ESplineModulationColorMask__Blue = 2,
	ESplineModulationColorMask__Alpha = 3,
	ESplineModulationColorMask__ESplineModulationColorMask_MAX = 4
};


// Enum Landscape.ELandscapeLODFalloff
enum class FLandscape_Landscape_ELandscapeLODFalloff : uint8_t
{
	ELandscapeLODFalloff__Linear   = 0,
	ELandscapeLODFalloff__SquareRoot = 1,
	ELandscapeLODFalloff__ELandscapeLODFalloff_MAX = 2
};


// Enum Landscape.ELandscapeLayerDisplayMode
enum class FLandscape_Landscape_ELandscapeLayerDisplayMode : uint8_t
{
	ELandscapeLayerDisplayMode__Default = 0,
	ELandscapeLayerDisplayMode__Alphabetical = 1,
	ELandscapeLayerDisplayMode__UserSpecific = 2,
	ELandscapeLayerDisplayMode__ELandscapeLayerDisplayMode_MAX = 3
};


// Enum Landscape.ELandscapeLayerPaintingRestriction
enum class FLandscape_Landscape_ELandscapeLayerPaintingRestriction : uint8_t
{
	ELandscapeLayerPaintingRestriction__None = 0,
	ELandscapeLayerPaintingRestriction__UseMaxLayers = 1,
	ELandscapeLayerPaintingRestriction__ExistingOnly = 2,
	ELandscapeLayerPaintingRestriction__UseComponentWhitelist = 3,
	ELandscapeLayerPaintingRestriction__ELandscapeLayerPaintingRestriction_MAX = 4
};


// Enum Landscape.ELandscapeImportAlphamapType
enum class FLandscape_Landscape_ELandscapeImportAlphamapType : uint8_t
{
	ELandscapeImportAlphamapType__Additive = 0,
	ELandscapeImportAlphamapType__Layered = 1,
	ELandscapeImportAlphamapType__ELandscapeImportAlphamapType_MAX = 2
};


// Enum Landscape.LandscapeSplineMeshOrientation
enum class FLandscape_Landscape_ELandscapeSplineMeshOrientation : uint8_t
{
	LSMO_XUp                       = 0,
	LSMO_YUp                       = 1,
	LSMO_MAX                       = 2
};


// Enum Landscape.ELandscapeLayerBlendType
enum class FLandscape_Landscape_ELandscapeLayerBlendType : uint8_t
{
	LB_WeightBlend                 = 0,
	LB_AlphaBlend                  = 1,
	LB_HeightBlend                 = 2,
	LB_MAX                         = 3
};


// Enum Landscape.ELandscapeCustomizedCoordType
enum class FLandscape_Landscape_ELandscapeCustomizedCoordType : uint8_t
{
	LCCT_None                      = 0,
	LCCT_CustomUV0                 = 1,
	LCCT_CustomUV1                 = 2,
	LCCT_CustomUV2                 = 3,
	LCCT_WeightMapUV               = 4,
	LCCT_MAX                       = 5
};


// Enum Landscape.ETerrainCoordMappingType
enum class FLandscape_Landscape_ETerrainCoordMappingType : uint8_t
{
	TCMT_Auto                      = 0,
	TCMT_XY                        = 1,
	TCMT_XZ                        = 2,
	TCMT_YZ                        = 3,
	TCMT_MAX                       = 4
};


// Enum Landscape.EGrassScaling
enum class FLandscape_Landscape_EGrassScaling : uint8_t
{
	EGrassScaling__Uniform         = 0,
	EGrassScaling__Free            = 1,
	EGrassScaling__LockXY          = 2,
	EGrassScaling__EGrassScaling_MAX = 3
};


// Enum Landscape.ELandscapeBlendMode
enum class FLandscape_Landscape_ELandscapeBlendMode : uint8_t
{
	LSBM_AdditiveBlend             = 0,
	LSBM_AlphaBlend                = 1,
	LSBM_MAX                       = 2
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Landscape.LandscapeProxyMaterialOverride
// 0x0010
struct FLandscape_LandscapeProxyMaterialOverride
{
	struct FEngine_PerPlatformInt                      LODIndex;                                                 // 0x0000(0x0004) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UEngine_MaterialInterface*                   Material;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Landscape.LandscapeComponentMaterialOverride
// 0x0010
struct FLandscape_LandscapeComponentMaterialOverride
{
	struct FEngine_PerPlatformInt                      LODIndex;                                                 // 0x0000(0x0004) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UEngine_MaterialInterface*                   Material;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Landscape.WeightmapLayerAllocationInfo
// 0x0010
struct FLandscape_WeightmapLayerAllocationInfo
{
	class ULandscape_LandscapeLayerInfoObject*         LayerInfo;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      WeightmapTextureIndex;                                    // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      WeightmapTextureChannel;                                  // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
};

// ScriptStruct Landscape.GrassVariety
// 0x0048
struct FLandscape_GrassVariety
{
	class UEngine_StaticMesh*                          GrassMesh;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FEngine_PerPlatformFloat                    GrassDensity;                                             // 0x0008(0x0004) (Edit)
	bool                                               bUseGrid;                                                 // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	float                                              PlacementJitter;                                          // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FEngine_PerPlatformInt                      StartCullDistance;                                        // 0x0014(0x0004) (Edit)
	struct FEngine_PerPlatformInt                      EndCullDistance;                                          // 0x0018(0x0004) (Edit)
	int                                                MinLOD;                                                   // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	FLandscape_Landscape_EGrassScaling                 Scaling;                                                  // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	struct FFloatInterval                              ScaleX;                                                   // 0x0024(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatInterval                              ScaleY;                                                   // 0x002C(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatInterval                              ScaleZ;                                                   // 0x0034(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RandomRotation;                                           // 0x003C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AlignToSurface;                                           // 0x003D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseLandscapeLightmap;                                    // 0x003E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FEngine_LightingChannels                    LightingChannels;                                         // 0x003F(0x0001) (Edit)
	bool                                               bReceivesDecals;                                          // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCastDynamicShadow;                                       // 0x0041(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bKeepInstanceBufferCPUCopy;                               // 0x0042(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x0043(0x0005) MISSED OFFSET
};

// ScriptStruct Landscape.LandscapeSplineConnection
// 0x0010
struct FLandscape_LandscapeSplineConnection
{
	class ULandscape_LandscapeSplineSegment*           Segment;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      End : 1;                                                  // 0x0008(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct Landscape.LandscapeSplineInterpPoint
// 0x0070
struct FLandscape_LandscapeSplineInterpPoint
{
	struct FVector                                     Center;                                                   // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Left;                                                     // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Right;                                                    // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     FalloffLeft;                                              // 0x0024(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     FalloffRight;                                             // 0x0030(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     LayerLeft;                                                // 0x003C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     LayerRight;                                               // 0x0048(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     LayerFalloffLeft;                                         // 0x0054(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     LayerFalloffRight;                                        // 0x0060(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              StartEndFalloff;                                          // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Landscape.LandscapeSplineSegmentConnection
// 0x0018
struct FLandscape_LandscapeSplineSegmentConnection
{
	class ULandscape_LandscapeSplineControlPoint*      ControlPoint;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              TangentLen;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketName;                                               // 0x000C(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Landscape.GrassInput
// 0x0028
struct FLandscape_GrassInput
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class ULandscape_LandscapeGrassType*               GrassType;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FEngine_ExpressionInput                     Input;                                                    // 0x0010(0x000C)
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET
};

// ScriptStruct Landscape.LayerBlendInput
// 0x0048
struct FLandscape_LayerBlendInput
{
	struct FName                                       LayerName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FLandscape_Landscape_ELandscapeLayerBlendType> BlendType;                                                // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FEngine_ExpressionInput                     LayerInput;                                               // 0x000C(0x000C)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	struct FEngine_ExpressionInput                     HeightInput;                                              // 0x0020(0x000C)
	unsigned char                                      UnknownData02[0x8];                                       // 0x002C(0x0008) MISSED OFFSET
	float                                              PreviewWeight;                                            // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ConstLayerInput;                                          // 0x0038(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ConstHeightInput;                                         // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Landscape.LandscapeLayerBrush
// 0x0001
struct FLandscape_LandscapeLayerBrush
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Landscape.LandscapeLayer
// 0x0088
struct FLandscape_LandscapeLayer
{
	struct FGuid                                       Guid;                                                     // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bVisible;                                                 // 0x0018(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bLocked;                                                  // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x001A(0x0002) MISSED OFFSET
	float                                              HeightmapAlpha;                                           // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              WeightmapAlpha;                                           // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FLandscape_Landscape_ELandscapeBlendMode> BlendMode;                                                // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	TArray<struct FLandscape_LandscapeLayerBrush>      Brushes;                                                  // 0x0028(0x0010) (ZeroConstructor)
	TMap<class ULandscape_LandscapeLayerInfoObject*, bool> WeightmapLayerAllocationBlend;                            // 0x0038(0x0050) (ZeroConstructor)
};

// ScriptStruct Landscape.HeightmapData
// 0x0008
struct FLandscape_HeightmapData
{
	class UEngine_Texture2D*                           Texture;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Landscape.WeightmapData
// 0x0030
struct FLandscape_WeightmapData
{
	TArray<class UEngine_Texture2D*>                   Textures;                                                 // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FLandscape_WeightmapLayerAllocationInfo> LayerAllocations;                                         // 0x0010(0x0010) (ZeroConstructor)
	TArray<class ULandscape_LandscapeWeightmapUsage*>  TextureUsages;                                            // 0x0020(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct Landscape.LandscapeLayerComponentData
// 0x0038
struct FLandscape_LandscapeLayerComponentData
{
	struct FLandscape_HeightmapData                    HeightmapData;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FLandscape_WeightmapData                    WeightmapData;                                            // 0x0008(0x0030)
};

// ScriptStruct Landscape.LandscapeEditToolRenderData
// 0x0038
struct FLandscape_LandscapeEditToolRenderData
{
	class UEngine_MaterialInterface*                   ToolMaterial;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEngine_MaterialInterface*                   GizmoMaterial;                                            // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                SelectedType;                                             // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DebugChannelR;                                            // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DebugChannelG;                                            // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DebugChannelB;                                            // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	class UEngine_Texture2D*                           DataTexture;                                              // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEngine_Texture2D*                           LayerContributionTexture;                                 // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEngine_Texture2D*                           DirtyTexture;                                             // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Landscape.GizmoSelectData
// 0x0050
struct FLandscape_GizmoSelectData
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct Landscape.LandscapeInfoLayerSettings
// 0x0010
struct FLandscape_LandscapeInfoLayerSettings
{
	class ULandscape_LandscapeLayerInfoObject*         LayerInfoObj;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       LayerName;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Landscape.LandscapeLayerStruct
// 0x0008
struct FLandscape_LandscapeLayerStruct
{
	class ULandscape_LandscapeLayerInfoObject*         LayerInfoObj;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Landscape.LandscapeImportLayerInfo
// 0x0001
struct FLandscape_LandscapeImportLayerInfo
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Landscape.ForeignWorldSplineData
// 0x0001
struct FLandscape_ForeignWorldSplineData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Landscape.ForeignControlPointData
// 0x0001
struct FLandscape_ForeignControlPointData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Landscape.ForeignSplineSegmentData
// 0x0001
struct FLandscape_ForeignSplineSegmentData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Landscape.LandscapeEditorLayerSettings
// 0x0001
struct FLandscape_LandscapeEditorLayerSettings
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Landscape.LandscapeSplineMeshEntry
// 0x0038
struct FLandscape_LandscapeSplineMeshEntry
{
	class UEngine_StaticMesh*                          Mesh;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UEngine_MaterialInterface*>           MaterialOverrides;                                        // 0x0008(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      bCenterH : 1;                                             // 0x0018(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	struct FVector2D                                   CenterAdjust;                                             // 0x001C(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bScaleToWidth : 1;                                        // 0x0024(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	struct FVector                                     Scale;                                                    // 0x0028(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FLandscape_Landscape_ELandscapeSplineMeshOrientation> Orientation;                                              // 0x0034(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ESplineMeshAxis>        ForwardAxis;                                              // 0x0035(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ESplineMeshAxis>        UpAxis;                                                   // 0x0036(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0037(0x0001) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
