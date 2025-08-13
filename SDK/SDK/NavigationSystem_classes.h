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

// Class NavigationSystem.NavArea
// 0x0018 (0x0048 - 0x0030)
class UNavigationSystem_NavArea : public UEngine_NavAreaBase
{
public:
	float                                              DefaultCost;                                              // 0x0030(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              FixedAreaEnteringCost;                                    // 0x0034(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FColor                                      DrawColor;                                                // 0x0038(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FEngine_NavAgentSelector                    SupportedAgents;                                          // 0x003C(0x0004) (Edit, Config)
	unsigned char                                      bSupportsAgent0 : 1;                                      // 0x0040(0x0001) (Config)
	unsigned char                                      bSupportsAgent1 : 1;                                      // 0x0040(0x0001) (Config)
	unsigned char                                      bSupportsAgent2 : 1;                                      // 0x0040(0x0001) (Config)
	unsigned char                                      bSupportsAgent3 : 1;                                      // 0x0040(0x0001) (Config)
	unsigned char                                      bSupportsAgent4 : 1;                                      // 0x0040(0x0001) (Config)
	unsigned char                                      bSupportsAgent5 : 1;                                      // 0x0040(0x0001) (Config)
	unsigned char                                      bSupportsAgent6 : 1;                                      // 0x0040(0x0001) (Config)
	unsigned char                                      bSupportsAgent7 : 1;                                      // 0x0040(0x0001) (Config)
	unsigned char                                      bSupportsAgent8 : 1;                                      // 0x0041(0x0001) (Config)
	unsigned char                                      bSupportsAgent9 : 1;                                      // 0x0041(0x0001) (Config)
	unsigned char                                      bSupportsAgent10 : 1;                                     // 0x0041(0x0001) (Config)
	unsigned char                                      bSupportsAgent11 : 1;                                     // 0x0041(0x0001) (Config)
	unsigned char                                      bSupportsAgent12 : 1;                                     // 0x0041(0x0001) (Config)
	unsigned char                                      bSupportsAgent13 : 1;                                     // 0x0041(0x0001) (Config)
	unsigned char                                      bSupportsAgent14 : 1;                                     // 0x0041(0x0001) (Config)
	unsigned char                                      bSupportsAgent15 : 1;                                     // 0x0041(0x0001) (Config)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0042(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavArea");
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavArea");
		return ptr;
	}

};


// Class NavigationSystem.NavModifierVolume
// 0x0010 (0x0260 - 0x0250)
class ANavigationSystem_NavModifierVolume : public AEngine_Volume
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0250(0x0008) MISSED OFFSET
	class UClass*                                      AreaClass;                                                // 0x0258(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavModifierVolume");
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavModifierVolume");
		return ptr;
	}


	void SetAreaClass(class UClass* NewAreaClass);
};


// Class NavigationSystem.NavigationQueryFilter
// 0x0020 (0x0048 - 0x0028)
class UNavigationSystem_NavigationQueryFilter : public UObject
{
public:
	TArray<struct FNavigationSystem_NavigationFilterArea> Areas;                                                    // 0x0028(0x0010) (Edit, ZeroConstructor)
	struct FNavigationSystem_NavigationFilterFlags     IncludeFlags;                                             // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNavigationSystem_NavigationFilterFlags     ExcludeFlags;                                             // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationQueryFilter");
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavigationQueryFilter");
		return ptr;
	}

};


// Class NavigationSystem.NavigationData
// 0x01E0 (0x03F8 - 0x0218)
class ANavigationSystem_NavigationData : public AEngine_Actor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0218(0x0008) MISSED OFFSET
	class UEngine_PrimitiveComponent*                  RenderingComp;                                            // 0x0220(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	struct FEngine_NavDataConfig                       NavDataConfig;                                            // 0x0228(0x0078)
	unsigned char                                      bEnableDrawing : 1;                                       // 0x02A0(0x0001) (Edit, Transient)
	unsigned char                                      bForceRebuildOnLoad : 1;                                  // 0x02A0(0x0001) (Edit, Config)
	unsigned char                                      bAutoDestroyWhenNoNavigation : 1;                         // 0x02A0(0x0001) (Edit, Config)
	unsigned char                                      bCanBeMainNavData : 1;                                    // 0x02A0(0x0001) (Edit, Config)
	unsigned char                                      bCanSpawnOnRebuild : 1;                                   // 0x02A0(0x0001) (Edit, Config, EditConst)
	unsigned char                                      bRebuildAtRuntime : 1;                                    // 0x02A0(0x0001) (Config, Deprecated)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02A1(0x0003) MISSED OFFSET
	FNavigationSystem_NavigationSystem_ERuntimeGenerationType RuntimeGeneration;                                        // 0x02A4(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x02A5(0x0003) MISSED OFFSET
	float                                              ObservedPathsTickInterval;                                // 0x02A8(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           DataVersion;                                              // 0x02AC(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xE0];                                      // 0x02B0(0x00E0) MISSED OFFSET
	TArray<struct FNavigationSystem_SupportedAreaData> SupportedAreas;                                           // 0x0390(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData04[0x58];                                      // 0x03A0(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationData");
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavigationData");
		return ptr;
	}

};


// Class NavigationSystem.RecastNavMesh
// 0x00B8 (0x04B0 - 0x03F8)
class ANavigationSystem_RecastNavMesh : public ANavigationSystem_NavigationData
{
public:
	unsigned char                                      bDrawTriangleEdges : 1;                                   // 0x03F8(0x0001) (Edit)
	unsigned char                                      bDrawPolyEdges : 1;                                       // 0x03F8(0x0001) (Edit, Config)
	unsigned char                                      bDrawFilledPolys : 1;                                     // 0x03F8(0x0001) (Edit)
	unsigned char                                      bDrawNavMeshEdges : 1;                                    // 0x03F8(0x0001) (Edit)
	unsigned char                                      bDrawTileBounds : 1;                                      // 0x03F8(0x0001) (Edit)
	unsigned char                                      bDrawPathCollidingGeometry : 1;                           // 0x03F8(0x0001) (Edit)
	unsigned char                                      bDrawTileLabels : 1;                                      // 0x03F8(0x0001) (Edit)
	unsigned char                                      bDrawPolygonLabels : 1;                                   // 0x03F8(0x0001) (Edit)
	unsigned char                                      bDrawDefaultPolygonCost : 1;                              // 0x03F9(0x0001) (Edit)
	unsigned char                                      bDrawLabelsOnPathNodes : 1;                               // 0x03F9(0x0001) (Edit)
	unsigned char                                      bDrawNavLinks : 1;                                        // 0x03F9(0x0001) (Edit)
	unsigned char                                      bDrawFailedNavLinks : 1;                                  // 0x03F9(0x0001) (Edit)
	unsigned char                                      bDrawClusters : 1;                                        // 0x03F9(0x0001) (Edit)
	unsigned char                                      bDrawOctree : 1;                                          // 0x03F9(0x0001) (Edit)
	unsigned char                                      bDrawOctreeDetails : 1;                                   // 0x03F9(0x0001) (Edit)
	unsigned char                                      bDrawMarkedForbiddenPolys : 1;                            // 0x03F9(0x0001) (Edit)
	unsigned char                                      bDistinctlyDrawTilesBeingBuilt : 1;                       // 0x03FA(0x0001) (Config)
	unsigned char                                      bDrawNavMesh : 1;                                         // 0x03FA(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x1];                                       // 0x03FB(0x0001) MISSED OFFSET
	float                                              DrawOffset;                                               // 0x03FC(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bFixedTilePoolSize : 1;                                   // 0x0400(0x0001) (Edit, Config)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0401(0x0003) MISSED OFFSET
	int                                                TilePoolSize;                                             // 0x0404(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              TileSizeUU;                                               // 0x0408(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CellSize;                                                 // 0x040C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CellHeight;                                               // 0x0410(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              AgentRadius;                                              // 0x0414(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              AgentHeight;                                              // 0x0418(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              AgentMaxHeight;                                           // 0x041C(0x0004) (Edit, ZeroConstructor, Config, EditConst, IsPlainOldData)
	float                                              AgentMaxSlope;                                            // 0x0420(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              AgentMaxStepHeight;                                       // 0x0424(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MinRegionArea;                                            // 0x0428(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MergeRegionSize;                                          // 0x042C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxSimplificationError;                                   // 0x0430(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxSimultaneousTileGenerationJobsCount;                   // 0x0434(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                TileNumberHardLimit;                                      // 0x0438(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                PolyRefTileBits;                                          // 0x043C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                PolyRefNavPolyBits;                                       // 0x0440(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                PolyRefSaltBits;                                          // 0x0444(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FVector                                     NavMeshOriginOffset;                                      // 0x0448(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DefaultDrawDistance;                                      // 0x0454(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              DefaultMaxSearchNodes;                                    // 0x0458(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              DefaultMaxHierarchicalSearchNodes;                        // 0x045C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<FNavigationSystem_NavigationSystem_ERecastPartitioning> RegionPartitioning;                                       // 0x0460(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<FNavigationSystem_NavigationSystem_ERecastPartitioning> LayerPartitioning;                                        // 0x0461(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0462(0x0002) MISSED OFFSET
	int                                                RegionChunkSplits;                                        // 0x0464(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                LayerChunkSplits;                                         // 0x0468(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bSortNavigationAreasByCost : 1;                           // 0x046C(0x0001) (Edit, Config)
	unsigned char                                      bPerformVoxelFiltering : 1;                               // 0x046C(0x0001) (Edit, Config)
	unsigned char                                      bMarkLowHeightAreas : 1;                                  // 0x046C(0x0001) (Edit, Config)
	unsigned char                                      bFilterLowSpanSequences : 1;                              // 0x046C(0x0001) (Edit, Config)
	unsigned char                                      bFilterLowSpanFromTileCache : 1;                          // 0x046C(0x0001) (Edit, Config)
	unsigned char                                      bDoFullyAsyncNavDataGathering : 1;                        // 0x046C(0x0001) (Edit, Config)
	unsigned char                                      bUseBetterOffsetsFromCorners : 1;                         // 0x046C(0x0001) (Config)
	unsigned char                                      bStoreEmptyTileLayers : 1;                                // 0x046C(0x0001) (Config)
	unsigned char                                      bUseVirtualFilters : 1;                                   // 0x046D(0x0001) (Config)
	unsigned char                                      bAllowNavLinkAsPathEnd : 1;                               // 0x046D(0x0001) (Config)
	unsigned char                                      bUseVoxelCache : 1;                                       // 0x046D(0x0001) (Config)
	unsigned char                                      UnknownData03[0x2];                                       // 0x046E(0x0002) MISSED OFFSET
	float                                              TileSetUpdateInterval;                                    // 0x0470(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              HeuristicScale;                                           // 0x0474(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              VerticalDeviationFromGroundCompensation;                  // 0x0478(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData04[0x34];                                      // 0x047C(0x0034) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.RecastNavMesh");
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.RecastNavMesh");
		return ptr;
	}


	bool K2_ReplaceAreaInTileBounds(const struct FBox& Bounds, class UClass* OldArea, class UClass* NewArea, bool ReplaceLinks);
};


// Class NavigationSystem.CrowdManagerBase
// 0x0000 (0x0028 - 0x0028)
class UNavigationSystem_CrowdManagerBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.CrowdManagerBase");
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.CrowdManagerBase");
		return ptr;
	}

};


// Class NavigationSystem.NavArea_LowHeight
// 0x0000 (0x0048 - 0x0048)
class UNavigationSystem_NavArea_LowHeight : public UNavigationSystem_NavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavArea_LowHeight");
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavArea_LowHeight");
		return ptr;
	}

};


// Class NavigationSystem.NavArea_Default
// 0x0000 (0x0048 - 0x0048)
class UNavigationSystem_NavArea_Default : public UNavigationSystem_NavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavArea_Default");
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavArea_Default");
		return ptr;
	}

};


// Class NavigationSystem.AbstractNavData
// 0x0000 (0x03F8 - 0x03F8)
class ANavigationSystem_AbstractNavData : public ANavigationSystem_NavigationData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.AbstractNavData");
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.AbstractNavData");
		return ptr;
	}

};


// Class NavigationSystem.NavAreaMeta
// 0x0000 (0x0048 - 0x0048)
class UNavigationSystem_NavAreaMeta : public UNavigationSystem_NavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavAreaMeta");
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavAreaMeta");
		return ptr;
	}

};


// Class NavigationSystem.NavCollision
// 0x0068 (0x00D8 - 0x0070)
class UNavigationSystem_NavCollision : public UEngine_NavCollisionBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0070(0x0010) MISSED OFFSET
	TArray<struct FNavigationSystem_NavCollisionCylinder> CylinderCollision;                                        // 0x0080(0x0010) (Edit, ZeroConstructor)
	TArray<struct FNavigationSystem_NavCollisionBox>   BoxCollision;                                             // 0x0090(0x0010) (Edit, ZeroConstructor)
	class UClass*                                      AreaClass;                                                // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bGatherConvexGeometry : 1;                                // 0x00A8(0x0001) (Edit, Config)
	unsigned char                                      bCreateOnClient : 1;                                      // 0x00A8(0x0001) (Edit, Config)
	unsigned char                                      UnknownData01[0x2F];                                      // 0x00A9(0x002F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavCollision");
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavCollision");
		return ptr;
	}

};


// Class NavigationSystem.NavigationGraph
// 0x0000 (0x03F8 - 0x03F8)
class ANavigationSystem_NavigationGraph : public ANavigationSystem_NavigationData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationGraph");
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavigationGraph");
		return ptr;
	}

};


// Class NavigationSystem.NavigationGraphNode
// 0x0000 (0x0218 - 0x0218)
class ANavigationSystem_NavigationGraphNode : public AEngine_Actor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationGraphNode");
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavigationGraphNode");
		return ptr;
	}

};


// Class NavigationSystem.NavigationGraphNodeComponent
// 0x0030 (0x0220 - 0x01F0)
class UNavigationSystem_NavigationGraphNodeComponent : public UEngine_SceneComponent
{
public:
	struct FNavigationSystem_NavGraphNode              Node;                                                     // 0x01F0(0x0018)
	class UNavigationSystem_NavigationGraphNodeComponent* NextNodeComponent;                                        // 0x0208(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UNavigationSystem_NavigationGraphNodeComponent* PrevNodeComponent;                                        // 0x0210(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0218(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationGraphNodeComponent");
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavigationGraphNodeComponent");
		return ptr;
	}

};


// Class NavigationSystem.NavigationInvokerComponent
// 0x0008 (0x00B8 - 0x00B0)
class UNavigationSystem_NavigationInvokerComponent : public UEngine_ActorComponent
{
public:
	float                                              TileGenerationRadius;                                     // 0x00B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TileRemovalRadius;                                        // 0x00B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationInvokerComponent");
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavigationInvokerComponent");
		return ptr;
	}

};


// Class NavigationSystem.NavigationPath
// 0x0060 (0x0088 - 0x0028)
class UNavigationSystem_NavigationPath : public UObject
{
public:
	struct FScriptMulticastDelegate                    PathUpdatedNotifier;                                      // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<struct FVector>                             PathPoints;                                               // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TEnumAsByte<FEngine_Engine_ENavigationOptionFlag>  RecalculateOnInvalidation;                                // 0x0048(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3F];                                      // 0x0049(0x003F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationPath");
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavigationPath");
		return ptr;
	}


	bool IsValid();
	bool IsStringPulled();
	bool IsPartial();
	float GetPathLength();
	float GetPathCost();
	struct FString GetDebugString();
	void EnableRecalculationOnInvalidation(TEnumAsByte<FEngine_Engine_ENavigationOptionFlag> DoRecalculation);
	void EnableDebugDrawing(bool bShouldDrawDebugData, const struct FLinearColor& PathColor);
};


// Class NavigationSystem.NavigationPathGenerator
// 0x0000 (0x0028 - 0x0028)
class UNavigationSystem_NavigationPathGenerator : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationPathGenerator");
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavigationPathGenerator");
		return ptr;
	}

};


// Class NavigationSystem.NavigationSystemV1
// 0x0510 (0x0538 - 0x0028)
class UNavigationSystem_NavigationSystemV1 : public UEngine_NavigationSystemBase
{
public:
	class ANavigationSystem_NavigationData*            MainNavData;                                              // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class ANavigationSystem_NavigationData*            AbstractNavData;                                          // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       DefaultAgentName;                                         // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0040(0x0028) UNKNOWN PROPERTY: SoftClassProperty NavigationSystem.NavigationSystemV1.CrowdManagerClass
	unsigned char                                      bAutoCreateNavigationData : 1;                            // 0x0068(0x0001) (Edit, Config)
	unsigned char                                      bSpawnNavDataInNavBoundsLevel : 1;                        // 0x0068(0x0001) (Edit, Config)
	unsigned char                                      bAllowClientSideNavigation : 1;                           // 0x0068(0x0001) (Edit, Config)
	unsigned char                                      bShouldDiscardSubLevelNavData : 1;                        // 0x0068(0x0001) (Edit, Config)
	unsigned char                                      bTickWhilePaused : 1;                                     // 0x0068(0x0001) (Edit, Config)
	unsigned char                                      bSupportRebuilding : 1;                                   // 0x0068(0x0001)
	unsigned char                                      bInitialBuildingLocked : 1;                               // 0x0068(0x0001) (Edit, Config)
	unsigned char                                      UnknownData01 : 1;                                        // 0x0068(0x0001)
	unsigned char                                      bSkipAgentHeightCheckWhenPickingNavData : 1;              // 0x0069(0x0001) (Edit, Config)
	unsigned char                                      UnknownData02[0x2];                                       // 0x006A(0x0002) MISSED OFFSET
	FEngine_Engine_ENavDataGatheringModeConfig         DataGatheringMode;                                        // 0x006C(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x006D(0x0003) MISSED OFFSET
	unsigned char                                      bGenerateNavigationOnlyAroundNavigationInvokers : 1;      // 0x0070(0x0001) (Edit, Config, DisableEditOnInstance)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
	float                                              ActiveTilesUpdateInterval;                                // 0x0074(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TArray<struct FEngine_NavDataConfig>               SupportedAgents;                                          // 0x0078(0x0010) (Edit, ZeroConstructor, Config)
	struct FEngine_NavAgentSelector                    SupportedAgentsMask;                                      // 0x0088(0x0004) (Edit, Config)
	unsigned char                                      UnknownData05[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	TArray<class ANavigationSystem_NavigationData*>    NavDataSet;                                               // 0x0090(0x0010) (ZeroConstructor)
	TArray<class ANavigationSystem_NavigationData*>    NavDataRegistrationQueue;                                 // 0x00A0(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData06[0x10];                                      // 0x00B0(0x0010) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnNavDataRegisteredEvent;                                 // 0x00C0(0x0010) (ZeroConstructor, Transient, InstancedReference)
	struct FScriptMulticastDelegate                    OnNavigationGenerationFinishedDelegate;                   // 0x00D0(0x0010) (ZeroConstructor, Transient, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData07[0xDC];                                      // 0x00E0(0x00DC) MISSED OFFSET
	FEngine_Engine_EFNavigationSystemRunMode           OperationMode;                                            // 0x01BC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x357];                                     // 0x01BD(0x0357) MISSED OFFSET
	float                                              DirtyAreasUpdateFreq;                                     // 0x0514(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData09[0x20];                                      // 0x0518(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationSystemV1");
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavigationSystemV1");
		return ptr;
	}


	void UnregisterNavigationInvoker(class AEngine_Actor* Invoker);
	void STATIC_SimpleMoveToLocation(class AEngine_Controller* Controller, const struct FVector& Goal);
	void STATIC_SimpleMoveToActor(class AEngine_Controller* Controller, class AEngine_Actor* Goal);
	void SetMaxSimultaneousTileGenerationJobsCount(int MaxNumberOfJobs);
	void SetGeometryGatheringMode(FEngine_Engine_ENavDataGatheringModeConfig NewMode);
	void ResetMaxSimultaneousTileGenerationJobsCount();
	void RegisterNavigationInvoker(class AEngine_Actor* Invoker, float TileGenerationRadius, float TileRemovalRadius);
	struct FVector STATIC_ProjectPointToNavigation(class UObject* WorldContextObject, const struct FVector& Point, class ANavigationSystem_NavigationData* NavData, class UClass* FilterClass, const struct FVector& QueryExtent);
	void OnNavigationBoundsUpdated(class ANavigationSystem_NavMeshBoundsVolume* NavVolume);
	bool STATIC_NavigationRaycast(class UObject* WorldContextObject, const struct FVector& RayStart, const struct FVector& RayEnd, class UClass* FilterClass, class AEngine_Controller* Querier, struct FVector* HitLocation);
	bool K2_ReplaceAreaInOctreeData(class UObject* Object, class UClass* OldArea, class UClass* NewArea);
	bool STATIC_K2_ProjectPointToNavigation(class UObject* WorldContextObject, const struct FVector& Point, class ANavigationSystem_NavigationData* NavData, class UClass* FilterClass, const struct FVector& QueryExtent, struct FVector* ProjectedLocation);
	bool STATIC_K2_GetRandomReachablePointInRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, class ANavigationSystem_NavigationData* NavData, class UClass* FilterClass, struct FVector* RandomLocation);
	bool STATIC_K2_GetRandomPointInNavigableRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, class ANavigationSystem_NavigationData* NavData, class UClass* FilterClass, struct FVector* RandomLocation);
	bool STATIC_K2_GetRandomLocationInNavigableRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, class ANavigationSystem_NavigationData* NavData, class UClass* FilterClass, struct FVector* RandomLocation);
	bool STATIC_IsNavigationBeingBuiltOrLocked(class UObject* WorldContextObject);
	bool STATIC_IsNavigationBeingBuilt(class UObject* WorldContextObject);
	struct FVector STATIC_GetRandomReachablePointInRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, class ANavigationSystem_NavigationData* NavData, class UClass* FilterClass);
	struct FVector STATIC_GetRandomPointInNavigableRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, class ANavigationSystem_NavigationData* NavData, class UClass* FilterClass);
	TEnumAsByte<FEngine_Engine_ENavigationQueryResult> STATIC_GetPathLength(class UObject* WorldContextObject, const struct FVector& PathStart, const struct FVector& PathEnd, class ANavigationSystem_NavigationData* NavData, class UClass* FilterClass, float* PathLength);
	TEnumAsByte<FEngine_Engine_ENavigationQueryResult> STATIC_GetPathCost(class UObject* WorldContextObject, const struct FVector& PathStart, const struct FVector& PathEnd, class ANavigationSystem_NavigationData* NavData, class UClass* FilterClass, float* PathCost);
	class UNavigationSystem_NavigationSystemV1* STATIC_GetNavigationSystem(class UObject* WorldContextObject);
	class UNavigationSystem_NavigationPath* STATIC_FindPathToLocationSynchronously(class UObject* WorldContextObject, const struct FVector& PathStart, const struct FVector& PathEnd, class AEngine_Actor* PathfindingContext, class UClass* FilterClass);
	class UNavigationSystem_NavigationPath* STATIC_FindPathToActorSynchronously(class UObject* WorldContextObject, const struct FVector& PathStart, class AEngine_Actor* GoalActor, float TetherDistance, class AEngine_Actor* PathfindingContext, class UClass* FilterClass);
};


// Class NavigationSystem.NavAreaMeta_SwitchByAgent
// 0x0080 (0x00C8 - 0x0048)
class UNavigationSystem_NavAreaMeta_SwitchByAgent : public UNavigationSystem_NavAreaMeta
{
public:
	class UClass*                                      Agent0Area;                                               // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent1Area;                                               // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent2Area;                                               // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent3Area;                                               // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent4Area;                                               // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent5Area;                                               // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent6Area;                                               // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent7Area;                                               // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent8Area;                                               // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent9Area;                                               // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent10Area;                                              // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent11Area;                                              // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent12Area;                                              // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent13Area;                                              // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent14Area;                                              // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent15Area;                                              // 0x00C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavAreaMeta_SwitchByAgent");
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavAreaMeta_SwitchByAgent");
		return ptr;
	}

};


// Class NavigationSystem.NavigationTestingActor
// 0x00E8 (0x0300 - 0x0218)
class ANavigationSystem_NavigationTestingActor : public AEngine_Actor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0218(0x0010) MISSED OFFSET
	class UEngine_CapsuleComponent*                    CapsuleComponent;                                         // 0x0228(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UNavigationSystem_NavigationInvokerComponent* InvokerComponent;                                         // 0x0230(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      bActAsNavigationInvoker : 1;                              // 0x0238(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0239(0x0007) MISSED OFFSET
	struct FEngine_NavAgentProperties                  NavAgentProps;                                            // 0x0240(0x0030) (Edit)
	struct FVector                                     QueryingExtent;                                           // 0x0270(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x027C(0x0004) MISSED OFFSET
	class ANavigationSystem_NavigationData*            MyNavData;                                                // 0x0280(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     ProjectedLocation;                                        // 0x0288(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      bProjectedLocationValid : 1;                              // 0x0294(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	unsigned char                                      bSearchStart : 1;                                         // 0x0294(0x0001) (Edit)
	unsigned char                                      bBacktracking : 1;                                        // 0x0294(0x0001) (Edit)
	unsigned char                                      bUseHierarchicalPathfinding : 1;                          // 0x0294(0x0001) (Edit)
	unsigned char                                      bGatherDetailedInfo : 1;                                  // 0x0294(0x0001) (Edit)
	unsigned char                                      bDrawDistanceToWall : 1;                                  // 0x0294(0x0001) (Edit)
	unsigned char                                      bShowNodePool : 1;                                        // 0x0294(0x0001) (Edit)
	unsigned char                                      bShowBestPath : 1;                                        // 0x0294(0x0001) (Edit)
	unsigned char                                      bShowDiffWithPreviousStep : 1;                            // 0x0295(0x0001) (Edit)
	unsigned char                                      bShouldBeVisibleInGame : 1;                               // 0x0295(0x0001) (Edit)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0296(0x0002) MISSED OFFSET
	TEnumAsByte<FNavigationSystem_NavigationSystem_ENavCostDisplay> CostDisplayMode;                                          // 0x0298(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0299(0x0003) MISSED OFFSET
	struct FVector2D                                   TextCanvasOffset;                                         // 0x029C(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bPathExist : 1;                                           // 0x02A4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst)
	unsigned char                                      bPathIsPartial : 1;                                       // 0x02A4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst)
	unsigned char                                      bPathSearchOutOfNodes : 1;                                // 0x02A4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst)
	unsigned char                                      UnknownData05[0x3];                                       // 0x02A5(0x0003) MISSED OFFSET
	float                                              PathfindingTime;                                          // 0x02A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	float                                              PathCost;                                                 // 0x02AC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	int                                                PathfindingSteps;                                         // 0x02B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x02B4(0x0004) MISSED OFFSET
	class ANavigationSystem_NavigationTestingActor*    OtherActor;                                               // 0x02B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FilterClass;                                              // 0x02C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ShowStepIndex;                                            // 0x02C8(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData)
	float                                              OffsetFromCornersDistance;                                // 0x02CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x30];                                      // 0x02D0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationTestingActor");
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavigationTestingActor");
		return ptr;
	}

};


// Class NavigationSystem.NavLinkComponent
// 0x0010 (0x03F0 - 0x03E0)
class UNavigationSystem_NavLinkComponent : public UEngine_PrimitiveComponent
{
public:
	TArray<struct FEngine_NavigationLink>              Links;                                                    // 0x03E0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavLinkComponent");
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavLinkComponent");
		return ptr;
	}

};


// Class NavigationSystem.NavRelevantComponent
// 0x0030 (0x00E0 - 0x00B0)
class UNavigationSystem_NavRelevantComponent : public UEngine_ActorComponent
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x00B0(0x0024) MISSED OFFSET
	unsigned char                                      bAttachToOwnersRoot : 1;                                  // 0x00D4(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00D5(0x0003) MISSED OFFSET
	class UObject*                                     CachedNavParent;                                          // 0x00D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavRelevantComponent");
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavRelevantComponent");
		return ptr;
	}


	void SetNavigationRelevancy(bool bRelevant);
};


// Class NavigationSystem.NavigationSystemModuleConfig
// 0x0008 (0x0058 - 0x0050)
class UNavigationSystem_NavigationSystemModuleConfig : public UEngine_NavigationSystemConfig
{
public:
	unsigned char                                      bStrictlyStatic : 1;                                      // 0x0050(0x0001) (Edit)
	unsigned char                                      bCreateOnClient : 1;                                      // 0x0050(0x0001) (Edit)
	unsigned char                                      bAutoSpawnMissingNavData : 1;                             // 0x0050(0x0001) (Edit)
	unsigned char                                      bSpawnNavDataInNavBoundsLevel : 1;                        // 0x0050(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationSystemModuleConfig");
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavigationSystemModuleConfig");
		return ptr;
	}

};


// Class NavigationSystem.NavLinkCustomComponent
// 0x00B0 (0x0190 - 0x00E0)
class UNavigationSystem_NavLinkCustomComponent : public UNavigationSystem_NavRelevantComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E0(0x0008) MISSED OFFSET
	uint32_t                                           NavLinkUserId;                                            // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET
	class UClass*                                      EnabledAreaClass;                                         // 0x00F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DisabledAreaClass;                                        // 0x00F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FEngine_NavAgentSelector                    SupportedAgents;                                          // 0x0100(0x0004) (Edit)
	struct FVector                                     LinkRelativeStart;                                        // 0x0104(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LinkRelativeEnd;                                          // 0x0110(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ENavLinkDirection>      LinkDirection;                                            // 0x011C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x011D(0x0003) MISSED OFFSET
	unsigned char                                      bLinkEnabled : 1;                                         // 0x0120(0x0001) (Edit)
	unsigned char                                      bNotifyWhenEnabled : 1;                                   // 0x0120(0x0001) (Edit)
	unsigned char                                      bNotifyWhenDisabled : 1;                                  // 0x0120(0x0001) (Edit)
	unsigned char                                      bCreateBoxObstacle : 1;                                   // 0x0120(0x0001) (Edit)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0121(0x0003) MISSED OFFSET
	struct FVector                                     ObstacleOffset;                                           // 0x0124(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ObstacleExtent;                                           // 0x0130(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x013C(0x0004) MISSED OFFSET
	class UClass*                                      ObstacleAreaClass;                                        // 0x0140(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BroadcastRadius;                                          // 0x0148(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BroadcastInterval;                                        // 0x014C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ECollisionChannel>      BroadcastChannel;                                         // 0x0150(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3F];                                      // 0x0151(0x003F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavLinkCustomComponent");
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavLinkCustomComponent");
		return ptr;
	}

};


// Class NavigationSystem.NavLinkHostInterface
// 0x0000 (0x0028 - 0x0028)
class UNavigationSystem_NavLinkHostInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavLinkHostInterface");
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavLinkHostInterface");
		return ptr;
	}

};


// Class NavigationSystem.NavLinkRenderingComponent
// 0x0000 (0x03E0 - 0x03E0)
class UNavigationSystem_NavLinkRenderingComponent : public UEngine_PrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavLinkRenderingComponent");
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavLinkRenderingComponent");
		return ptr;
	}

};


// Class NavigationSystem.NavLinkTrivial
// 0x0000 (0x0050 - 0x0050)
class UNavigationSystem_NavLinkTrivial : public UEngine_NavLinkDefinition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavLinkTrivial");
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavLinkTrivial");
		return ptr;
	}

};


// Class NavigationSystem.NavMeshBoundsVolume
// 0x0008 (0x0258 - 0x0250)
class ANavigationSystem_NavMeshBoundsVolume : public AEngine_Volume
{
public:
	struct FEngine_NavAgentSelector                    SupportedAgents;                                          // 0x0250(0x0004) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0254(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavMeshBoundsVolume");
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavMeshBoundsVolume");
		return ptr;
	}

};


// Class NavigationSystem.NavMeshRenderingComponent
// 0x0010 (0x03F0 - 0x03E0)
class UNavigationSystem_NavMeshRenderingComponent : public UEngine_PrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavMeshRenderingComponent");
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavMeshRenderingComponent");
		return ptr;
	}

};


// Class NavigationSystem.NavModifierComponent
// 0x0060 (0x0140 - 0x00E0)
class UNavigationSystem_NavModifierComponent : public UNavigationSystem_NavRelevantComponent
{
public:
	class UClass*                                      AreaClass;                                                // 0x00E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     FailsafeExtent;                                           // 0x00E8(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIncludeAgentHeight : 1;                                  // 0x00F4(0x0001) (Edit, Config)
	unsigned char                                      UnknownData00[0x4B];                                      // 0x00F5(0x004B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavModifierComponent");
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavModifierComponent");
		return ptr;
	}


	void SetAreaClass(class UClass* NewAreaClass);
};


// Class NavigationSystem.NavNodeInterface
// 0x0000 (0x0028 - 0x0028)
class UNavigationSystem_NavNodeInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavNodeInterface");
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavNodeInterface");
		return ptr;
	}

};


// Class NavigationSystem.NavSystemConfigOverride
// 0x0010 (0x0228 - 0x0218)
class ANavigationSystem_NavSystemConfigOverride : public AEngine_Actor
{
public:
	class UEngine_NavigationSystemConfig*              NavigationSystemConfig;                                   // 0x0218(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	FNavigationSystem_NavigationSystem_ENavSystemOverridePolicy OverridePolicy;                                           // 0x0220(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bLoadOnClient : 1;                                        // 0x0221(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0222(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavSystemConfigOverride");
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavSystemConfigOverride");
		return ptr;
	}

};


// Class NavigationSystem.NavTestRenderingComponent
// 0x0000 (0x03E0 - 0x03E0)
class UNavigationSystem_NavTestRenderingComponent : public UEngine_PrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavTestRenderingComponent");
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavTestRenderingComponent");
		return ptr;
	}

};


// Class NavigationSystem.RecastFilter_UseDefaultArea
// 0x0000 (0x0048 - 0x0048)
class UNavigationSystem_RecastFilter_UseDefaultArea : public UNavigationSystem_NavigationQueryFilter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.RecastFilter_UseDefaultArea");
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.RecastFilter_UseDefaultArea");
		return ptr;
	}

};


// Class NavigationSystem.NavLinkCustomInterface
// 0x0000 (0x0028 - 0x0028)
class UNavigationSystem_NavLinkCustomInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavLinkCustomInterface");
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavLinkCustomInterface");
		return ptr;
	}

};


// Class NavigationSystem.NavArea_Null
// 0x0000 (0x0048 - 0x0048)
class UNavigationSystem_NavArea_Null : public UNavigationSystem_NavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavArea_Null");
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavArea_Null");
		return ptr;
	}

};


// Class NavigationSystem.NavArea_Obstacle
// 0x0000 (0x0048 - 0x0048)
class UNavigationSystem_NavArea_Obstacle : public UNavigationSystem_NavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavArea_Obstacle");
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavArea_Obstacle");
		return ptr;
	}

};


// Class NavigationSystem.RecastNavMeshDataChunk
// 0x0010 (0x0040 - 0x0030)
class UNavigationSystem_RecastNavMeshDataChunk : public UEngine_NavigationDataChunk
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.RecastNavMeshDataChunk");
		if (!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.RecastNavMeshDataChunk");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
