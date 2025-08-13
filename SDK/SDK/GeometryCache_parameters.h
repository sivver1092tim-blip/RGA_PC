#pragma once

#include "../SDK.h"

// Name: , Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function GeometryCache.GeometryCacheActor.GetGeometryCacheComponent
struct AGeometryCache_GeometryCacheActor_GetGeometryCacheComponent_Params
{
	class UGeometryCache_GeometryCacheComponent*       ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GeometryCache.GeometryCacheComponent.TickAtThisTime
struct UGeometryCache_GeometryCacheComponent_TickAtThisTime_Params
{
	float                                              Time;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInIsRunning;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInBackwards;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInIsLooping;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GeometryCache.GeometryCacheComponent.Stop
struct UGeometryCache_GeometryCacheComponent_Stop_Params
{
};

// Function GeometryCache.GeometryCacheComponent.SetStartTimeOffset
struct UGeometryCache_GeometryCacheComponent_SetStartTimeOffset_Params
{
	float                                              NewStartTimeOffset;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GeometryCache.GeometryCacheComponent.SetPlaybackSpeed
struct UGeometryCache_GeometryCacheComponent_SetPlaybackSpeed_Params
{
	float                                              NewPlaybackSpeed;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GeometryCache.GeometryCacheComponent.SetLooping
struct UGeometryCache_GeometryCacheComponent_SetLooping_Params
{
	bool                                               bNewLooping;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GeometryCache.GeometryCacheComponent.SetGeometryCache
struct UGeometryCache_GeometryCacheComponent_SetGeometryCache_Params
{
	class UGeometryCache_GeometryCache*                NewGeomCache;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GeometryCache.GeometryCacheComponent.PlayReversedFromEnd
struct UGeometryCache_GeometryCacheComponent_PlayReversedFromEnd_Params
{
};

// Function GeometryCache.GeometryCacheComponent.PlayReversed
struct UGeometryCache_GeometryCacheComponent_PlayReversed_Params
{
};

// Function GeometryCache.GeometryCacheComponent.PlayFromStart
struct UGeometryCache_GeometryCacheComponent_PlayFromStart_Params
{
};

// Function GeometryCache.GeometryCacheComponent.Play
struct UGeometryCache_GeometryCacheComponent_Play_Params
{
};

// Function GeometryCache.GeometryCacheComponent.Pause
struct UGeometryCache_GeometryCacheComponent_Pause_Params
{
};

// Function GeometryCache.GeometryCacheComponent.IsPlayingReversed
struct UGeometryCache_GeometryCacheComponent_IsPlayingReversed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GeometryCache.GeometryCacheComponent.IsPlaying
struct UGeometryCache_GeometryCacheComponent_IsPlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GeometryCache.GeometryCacheComponent.IsLooping
struct UGeometryCache_GeometryCacheComponent_IsLooping_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GeometryCache.GeometryCacheComponent.GetStartTimeOffset
struct UGeometryCache_GeometryCacheComponent_GetStartTimeOffset_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GeometryCache.GeometryCacheComponent.GetPlaybackSpeed
struct UGeometryCache_GeometryCacheComponent_GetPlaybackSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GeometryCache.GeometryCacheComponent.GetPlaybackDirection
struct UGeometryCache_GeometryCacheComponent_GetPlaybackDirection_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GeometryCache.GeometryCacheComponent.GetNumberOfFrames
struct UGeometryCache_GeometryCacheComponent_GetNumberOfFrames_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GeometryCache.GeometryCacheComponent.GetDuration
struct UGeometryCache_GeometryCacheComponent_GetDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GeometryCache.GeometryCacheComponent.GetAnimationTime
struct UGeometryCache_GeometryCacheComponent_GetAnimationTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample
struct UGeometryCache_GeometryCacheTrack_FlipbookAnimation_AddMeshSample_Params
{
	struct FGeometryCache_GeometryCacheMeshData        MeshData;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              SampleTime;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GeometryCache.GeometryCacheTrack_TransformAnimation.SetMesh
struct UGeometryCache_GeometryCacheTrack_TransformAnimation_SetMesh_Params
{
	struct FGeometryCache_GeometryCacheMeshData        NewMeshData;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GeometryCache.GeometryCacheTrack_TransformGroupAnimation.SetMesh
struct UGeometryCache_GeometryCacheTrack_TransformGroupAnimation_SetMesh_Params
{
	struct FGeometryCache_GeometryCacheMeshData        NewMeshData;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
