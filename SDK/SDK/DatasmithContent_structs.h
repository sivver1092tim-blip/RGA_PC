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

// Enum DatasmithContent.EDatasmithAreaLightActorShape
enum class FDatasmithContent_DatasmithContent_EDatasmithAreaLightActorShape : uint8_t
{
	EDatasmithAreaLightActorShape__Rectangle = 0,
	EDatasmithAreaLightActorShape__Disc = 1,
	EDatasmithAreaLightActorShape__Sphere = 2,
	EDatasmithAreaLightActorShape__Cylinder = 3,
	EDatasmithAreaLightActorShape__None = 4,
	EDatasmithAreaLightActorShape__EDatasmithAreaLightActorShape_MAX = 5
};


// Enum DatasmithContent.EDatasmithCADStitchingTechnique
enum class FDatasmithContent_DatasmithContent_EDatasmithCADStitchingTechnique : uint8_t
{
	EDatasmithCADStitchingTechnique__StitchingNone = 0,
	EDatasmithCADStitchingTechnique__StitchingHeal = 1,
	EDatasmithCADStitchingTechnique__StitchingSew = 2,
	EDatasmithCADStitchingTechnique__EDatasmithCADStitchingTechnique_MAX = 3
};


// Enum DatasmithContent.EDatasmithImportHierarchy
enum class FDatasmithContent_DatasmithContent_EDatasmithImportHierarchy : uint8_t
{
	EDatasmithImportHierarchy__UseMultipleActors = 0,
	EDatasmithImportHierarchy__UseSingleActor = 1,
	EDatasmithImportHierarchy__UseOneBlueprint = 2,
	EDatasmithImportHierarchy__EDatasmithImportHierarchy_MAX = 3
};


// Enum DatasmithContent.EDatasmithImportScene
enum class FDatasmithContent_DatasmithContent_EDatasmithImportScene : uint8_t
{
	EDatasmithImportScene__NewLevel = 0,
	EDatasmithImportScene__CurrentLevel = 1,
	EDatasmithImportScene__AssetsOnly = 2,
	EDatasmithImportScene__EDatasmithImportScene_MAX = 3
};


// Enum DatasmithContent.EDatasmithImportLightmapMax
enum class FDatasmithContent_DatasmithContent_EDatasmithImportLightmapMax : uint8_t
{
	EDatasmithImportLightmapMax__LIGHTMAP = 0,
	EDatasmithImportLightmapMax__LIGHTMAP01 = 1,
	EDatasmithImportLightmapMax__LIGHTMAP02 = 2,
	EDatasmithImportLightmapMax__LIGHTMAP03 = 3,
	EDatasmithImportLightmapMax__LIGHTMAP04 = 4,
	EDatasmithImportLightmapMax__LIGHTMAP05 = 5,
	EDatasmithImportLightmapMax__LIGHTMAP06 = 6,
	EDatasmithImportLightmapMax__LIGHTMAP_MAX = 7
};


// Enum DatasmithContent.EDatasmithAreaLightActorType
enum class FDatasmithContent_DatasmithContent_EDatasmithAreaLightActorType : uint8_t
{
	EDatasmithAreaLightActorType__Point = 0,
	EDatasmithAreaLightActorType__Spot = 1,
	EDatasmithAreaLightActorType__Rect = 2,
	EDatasmithAreaLightActorType__EDatasmithAreaLightActorType_MAX = 3
};


// Enum DatasmithContent.EDatasmithImportActorPolicy
enum class FDatasmithContent_DatasmithContent_EDatasmithImportActorPolicy : uint8_t
{
	EDatasmithImportActorPolicy__Update = 0,
	EDatasmithImportActorPolicy__Full = 1,
	EDatasmithImportActorPolicy__Ignore = 2,
	EDatasmithImportActorPolicy__EDatasmithImportActorPolicy_MAX = 3
};


// Enum DatasmithContent.EDatasmithImportAssetConflictPolicy
enum class FDatasmithContent_DatasmithContent_EDatasmithImportAssetConflictPolicy : uint8_t
{
	EDatasmithImportAssetConflictPolicy__Replace = 0,
	EDatasmithImportAssetConflictPolicy__Update = 1,
	EDatasmithImportAssetConflictPolicy__Use = 2,
	EDatasmithImportAssetConflictPolicy__Ignore = 3,
	EDatasmithImportAssetConflictPolicy__EDatasmithImportAssetConflictPolicy_MAX = 4
};


// Enum DatasmithContent.EDatasmithImportSearchPackagePolicy
enum class FDatasmithContent_DatasmithContent_EDatasmithImportSearchPackagePolicy : uint8_t
{
	EDatasmithImportSearchPackagePolicy__Current = 0,
	EDatasmithImportSearchPackagePolicy__All = 1,
	EDatasmithImportSearchPackagePolicy__EDatasmithImportSearchPackagePolicy_MAX = 2
};


// Enum DatasmithContent.EDatasmithImportMaterialQuality
enum class FDatasmithContent_DatasmithContent_EDatasmithImportMaterialQuality : uint8_t
{
	EDatasmithImportMaterialQuality__UseNoFresnelCurves = 0,
	EDatasmithImportMaterialQuality__UseSimplifierFresnelCurves = 1,
	EDatasmithImportMaterialQuality__UseRealFresnelCurves = 2,
	EDatasmithImportMaterialQuality__EDatasmithImportMaterialQuality_MAX = 3
};


// Enum DatasmithContent.EDatasmithImportLightmapMin
enum class FDatasmithContent_DatasmithContent_EDatasmithImportLightmapMin : uint8_t
{
	EDatasmithImportLightmapMin__LIGHTMAP = 0,
	EDatasmithImportLightmapMin__LIGHTMAP01 = 1,
	EDatasmithImportLightmapMin__LIGHTMAP02 = 2,
	EDatasmithImportLightmapMin__LIGHTMAP03 = 3,
	EDatasmithImportLightmapMin__LIGHTMAP04 = 4,
	EDatasmithImportLightmapMin__LIGHTMAP05 = 5,
	EDatasmithImportLightmapMin__LIGHTMAP_MAX = 6
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct DatasmithContent.DatasmithCameraLookatTrackingSettingsTemplate
// 0x0030
struct FDatasmithContent_DatasmithCameraLookatTrackingSettingsTemplate
{
	unsigned char                                      bEnableLookAtTracking : 1;                                // 0x0000(0x0001)
	unsigned char                                      bAllowRoll : 1;                                           // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x0001(0x0028) UNKNOWN PROPERTY: SoftObjectProperty DatasmithContent.DatasmithCameraLookatTrackingSettingsTemplate.ActorToTrack
};

// ScriptStruct DatasmithContent.DatasmithCameraFilmbackSettingsTemplate
// 0x0008
struct FDatasmithContent_DatasmithCameraFilmbackSettingsTemplate
{
	float                                              SensorWidth;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SensorHeight;                                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DatasmithContent.DatasmithCameraLensSettingsTemplate
// 0x0004
struct FDatasmithContent_DatasmithCameraLensSettingsTemplate
{
	float                                              MaxFStop;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DatasmithContent.DatasmithCameraFocusSettingsTemplate
// 0x0008
struct FDatasmithContent_DatasmithCameraFocusSettingsTemplate
{
	FCinematicCamera_CinematicCamera_ECameraFocusMethod FocusMethod;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              ManualFocusDistance;                                      // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DatasmithContent.DatasmithPostProcessSettingsTemplate
// 0x0040
struct FDatasmithContent_DatasmithPostProcessSettingsTemplate
{
	unsigned char                                      bOverride_WhiteTemp : 1;                                  // 0x0000(0x0001)
	unsigned char                                      bOverride_ColorSaturation : 1;                            // 0x0000(0x0001)
	unsigned char                                      bOverride_VignetteIntensity : 1;                          // 0x0000(0x0001)
	unsigned char                                      bOverride_FilmWhitePoint : 1;                             // 0x0000(0x0001)
	unsigned char                                      bOverride_AutoExposureMethod : 1;                         // 0x0000(0x0001)
	unsigned char                                      bOverride_CameraISO : 1;                                  // 0x0000(0x0001)
	unsigned char                                      bOverride_CameraShutterSpeed : 1;                         // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	unsigned char                                      bOverride_DepthOfFieldFstop : 1;                          // 0x0004(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	float                                              WhiteTemp;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              VignetteIntensity;                                        // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FilmWhitePoint;                                           // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ColorSaturation;                                          // 0x0020(0x0010) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_EAutoExposureMethod>    AutoExposureMethod;                                       // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              CameraISO;                                                // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CameraShutterSpeed;                                       // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldFstop;                                        // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DatasmithContent.DatasmithTessellationOptions
// 0x0010
struct FDatasmithContent_DatasmithTessellationOptions
{
	float                                              ChordTolerance;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxEdgeLength;                                            // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              NormalTolerance;                                          // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	FDatasmithContent_DatasmithContent_EDatasmithCADStitchingTechnique StitchingTechnique;                                       // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct DatasmithContent.DatasmithAssetImportOptions
// 0x0008
struct FDatasmithContent_DatasmithAssetImportOptions
{
	struct FName                                       PackagePath;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DatasmithContent.DatasmithStaticMeshImportOptions
// 0x0004
struct FDatasmithContent_DatasmithStaticMeshImportOptions
{
	FDatasmithContent_DatasmithContent_EDatasmithImportLightmapMin MinLightmapResolution;                                    // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FDatasmithContent_DatasmithContent_EDatasmithImportLightmapMax MaxLightmapResolution;                                    // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bGenerateLightmapUVs;                                     // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRemoveDegenerates;                                       // 0x0003(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct DatasmithContent.DatasmithImportBaseOptions
// 0x0014
struct FDatasmithContent_DatasmithImportBaseOptions
{
	FDatasmithContent_DatasmithContent_EDatasmithImportScene SceneHandling;                                            // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIncludeGeometry;                                         // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bIncludeMaterial;                                         // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bIncludeLight;                                            // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bIncludeCamera;                                           // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bIncludeAnimation;                                        // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	struct FDatasmithContent_DatasmithAssetImportOptions AssetOptions;                                             // 0x0008(0x0008) (BlueprintVisible)
	struct FDatasmithContent_DatasmithStaticMeshImportOptions StaticMeshOptions;                                        // 0x0010(0x0004) (Edit, BlueprintVisible, Config)
};

// ScriptStruct DatasmithContent.DatasmithReimportOptions
// 0x0002
struct FDatasmithContent_DatasmithReimportOptions
{
	bool                                               bUpdateActors;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRespawnDeletedActors;                                    // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DatasmithContent.DatasmithStaticParameterSetTemplate
// 0x0050
struct FDatasmithContent_DatasmithStaticParameterSetTemplate
{
	TMap<struct FName, bool>                           StaticSwitchParameters;                                   // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct DatasmithContent.DatasmithMeshSectionInfoTemplate
// 0x0004
struct FDatasmithContent_DatasmithMeshSectionInfoTemplate
{
	int                                                MaterialIndex;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DatasmithContent.DatasmithMeshSectionInfoMapTemplate
// 0x0050
struct FDatasmithContent_DatasmithMeshSectionInfoMapTemplate
{
	TMap<uint32_t, struct FDatasmithContent_DatasmithMeshSectionInfoTemplate> Map;                                                      // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct DatasmithContent.DatasmithMeshBuildSettingsTemplate
// 0x0010
struct FDatasmithContent_DatasmithMeshBuildSettingsTemplate
{
	unsigned char                                      bUseMikkTSpace : 1;                                       // 0x0000(0x0001)
	unsigned char                                      bRecomputeNormals : 1;                                    // 0x0000(0x0001)
	unsigned char                                      bRecomputeTangents : 1;                                   // 0x0000(0x0001)
	unsigned char                                      bRemoveDegenerates : 1;                                   // 0x0000(0x0001)
	unsigned char                                      bBuildAdjacencyBuffer : 1;                                // 0x0000(0x0001)
	unsigned char                                      bUseHighPrecisionTangentBasis : 1;                        // 0x0000(0x0001)
	unsigned char                                      bUseFullPrecisionUVs : 1;                                 // 0x0000(0x0001)
	unsigned char                                      bGenerateLightmapUVs : 1;                                 // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                MinLightmapResolution;                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SrcLightmapIndex;                                         // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DstLightmapIndex;                                         // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DatasmithContent.DatasmithStaticMaterialTemplate
// 0x0010
struct FDatasmithContent_DatasmithStaticMaterialTemplate
{
	struct FName                                       MaterialSlotName;                                         // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEngine_MaterialInterface*                   MaterialInterface;                                        // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
