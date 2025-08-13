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

// Enum NavigationSystem.ERuntimeGenerationType
enum class FNavigationSystem_NavigationSystem_ERuntimeGenerationType : uint8_t
{
	ERuntimeGenerationType__Static = 0,
	ERuntimeGenerationType__DynamicModifiersOnly = 1,
	ERuntimeGenerationType__Dynamic = 2,
	ERuntimeGenerationType__LegacyGeneration = 3,
	ERuntimeGenerationType__ERuntimeGenerationType_MAX = 4
};


// Enum NavigationSystem.ENavCostDisplay
enum class FNavigationSystem_NavigationSystem_ENavCostDisplay : uint8_t
{
	ENavCostDisplay__TotalCost     = 0,
	ENavCostDisplay__HeuristicOnly = 1,
	ENavCostDisplay__RealCostOnly  = 2,
	ENavCostDisplay__ENavCostDisplay_MAX = 3
};


// Enum NavigationSystem.ENavSystemOverridePolicy
enum class FNavigationSystem_NavigationSystem_ENavSystemOverridePolicy : uint8_t
{
	ENavSystemOverridePolicy__Override = 0,
	ENavSystemOverridePolicy__Append = 1,
	ENavSystemOverridePolicy__Skip = 2,
	ENavSystemOverridePolicy__ENavSystemOverridePolicy_MAX = 3
};


// Enum NavigationSystem.ERecastPartitioning
enum class FNavigationSystem_NavigationSystem_ERecastPartitioning : uint8_t
{
	ERecastPartitioning__Monotone  = 0,
	ERecastPartitioning__Watershed = 1,
	ERecastPartitioning__ChunkyMonotone = 2,
	ERecastPartitioning__ERecastPartitioning_MAX = 3
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct NavigationSystem.NavigationFilterArea
// 0x0018
struct FNavigationSystem_NavigationFilterArea
{
	class UClass*                                      AreaClass;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TravelCostOverride;                                       // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EnteringCostOverride;                                     // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsExcluded : 1;                                          // 0x0010(0x0001) (Edit)
	unsigned char                                      bOverrideTravelCost : 1;                                  // 0x0010(0x0001) (Edit)
	unsigned char                                      bOverrideEnteringCost : 1;                                // 0x0010(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct NavigationSystem.NavigationFilterFlags
// 0x0004
struct FNavigationSystem_NavigationFilterFlags
{
	unsigned char                                      bNavFlag0 : 1;                                            // 0x0000(0x0001) (Edit)
	unsigned char                                      bNavFlag1 : 1;                                            // 0x0000(0x0001) (Edit)
	unsigned char                                      bNavFlag2 : 1;                                            // 0x0000(0x0001) (Edit)
	unsigned char                                      bNavFlag3 : 1;                                            // 0x0000(0x0001) (Edit)
	unsigned char                                      bNavFlag4 : 1;                                            // 0x0000(0x0001) (Edit)
	unsigned char                                      bNavFlag5 : 1;                                            // 0x0000(0x0001) (Edit)
	unsigned char                                      bNavFlag6 : 1;                                            // 0x0000(0x0001) (Edit)
	unsigned char                                      bNavFlag7 : 1;                                            // 0x0000(0x0001) (Edit)
	unsigned char                                      bNavFlag8 : 1;                                            // 0x0001(0x0001) (Edit)
	unsigned char                                      bNavFlag9 : 1;                                            // 0x0001(0x0001) (Edit)
	unsigned char                                      bNavFlag10 : 1;                                           // 0x0001(0x0001) (Edit)
	unsigned char                                      bNavFlag11 : 1;                                           // 0x0001(0x0001) (Edit)
	unsigned char                                      bNavFlag12 : 1;                                           // 0x0001(0x0001) (Edit)
	unsigned char                                      bNavFlag13 : 1;                                           // 0x0001(0x0001) (Edit)
	unsigned char                                      bNavFlag14 : 1;                                           // 0x0001(0x0001) (Edit)
	unsigned char                                      bNavFlag15 : 1;                                           // 0x0001(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
};

// ScriptStruct NavigationSystem.SupportedAreaData
// 0x0020
struct FNavigationSystem_SupportedAreaData
{
	struct FString                                     AreaClassName;                                            // 0x0000(0x0010) (ZeroConstructor)
	int                                                AreaID;                                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class UClass*                                      AreaClass;                                                // 0x0018(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct NavigationSystem.NavCollisionCylinder
// 0x0014
struct FNavigationSystem_NavCollisionCylinder
{
	struct FVector                                     Offset;                                                   // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct NavigationSystem.NavCollisionBox
// 0x0018
struct FNavigationSystem_NavCollisionBox
{
	struct FVector                                     Offset;                                                   // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Extent;                                                   // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct NavigationSystem.NavGraphNode
// 0x0018
struct FNavigationSystem_NavGraphNode
{
	class UObject*                                     Owner;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct NavigationSystem.NavGraphEdge
// 0x0018
struct FNavigationSystem_NavGraphEdge
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct NavigationSystem.NavLinkCustomInstanceData
// 0x0008 (0x0060 - 0x0058)
struct FNavigationSystem_NavLinkCustomInstanceData : public FEngine_ActorComponentInstanceData
{
	uint32_t                                           NavLinkUserId;                                            // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};

// ScriptStruct NavigationSystem.RecastNavMeshGenerationProperties
// 0x0040
struct FNavigationSystem_RecastNavMeshGenerationProperties
{
	int                                                TilePoolSize;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TileSizeUU;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CellSize;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CellHeight;                                               // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AgentRadius;                                              // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AgentHeight;                                              // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AgentMaxSlope;                                            // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AgentMaxStepHeight;                                       // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinRegionArea;                                            // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MergeRegionSize;                                          // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxSimplificationError;                                   // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                TileNumberHardLimit;                                      // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FNavigationSystem_NavigationSystem_ERecastPartitioning> RegionPartitioning;                                       // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FNavigationSystem_NavigationSystem_ERecastPartitioning> LayerPartitioning;                                        // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0032(0x0002) MISSED OFFSET
	int                                                RegionChunkSplits;                                        // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                LayerChunkSplits;                                         // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bSortNavigationAreasByCost : 1;                           // 0x003C(0x0001) (Edit)
	unsigned char                                      bPerformVoxelFiltering : 1;                               // 0x003C(0x0001) (Edit)
	unsigned char                                      bMarkLowHeightAreas : 1;                                  // 0x003C(0x0001) (Edit)
	unsigned char                                      bFilterLowSpanSequences : 1;                              // 0x003C(0x0001) (Edit)
	unsigned char                                      bFilterLowSpanFromTileCache : 1;                          // 0x003C(0x0001) (Edit)
	unsigned char                                      bFixedTilePoolSize : 1;                                   // 0x003C(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
