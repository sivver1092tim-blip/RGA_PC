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

// Function LiveLink.LiveLinkBlueprintLibrary.TransformNames
struct ULiveLink_LiveLinkBlueprintLibrary_TransformNames_Params
{
	struct FLiveLinkInterface_SubjectFrameHandle       SubjectFrameHandle;                                       // (Parm, OutParm, ReferenceParm)
	TArray<struct FName>                               TransformNames;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function LiveLink.LiveLinkBlueprintLibrary.TransformName
struct ULiveLink_LiveLinkBlueprintLibrary_TransformName_Params
{
	struct FLiveLinkInterface_LiveLinkTransform        LiveLinkTransform;                                        // (Parm, OutParm, ReferenceParm)
	struct FName                                       Name;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LiveLink.LiveLinkBlueprintLibrary.SetLiveLinkSubjectEnabled
struct ULiveLink_LiveLinkBlueprintLibrary_SetLiveLinkSubjectEnabled_Params
{
	struct FLiveLinkInterface_LiveLinkSubjectKey       SubjectKey;                                               // (ConstParm, Parm)
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LiveLink.LiveLinkBlueprintLibrary.RemoveSource
struct ULiveLink_LiveLinkBlueprintLibrary_RemoveSource_Params
{
	struct FLiveLinkInterface_LiveLinkSourceHandle     SourceHandle;                                             // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveLink.LiveLinkBlueprintLibrary.ParentBoneSpaceTransform
struct ULiveLink_LiveLinkBlueprintLibrary_ParentBoneSpaceTransform_Params
{
	struct FLiveLinkInterface_LiveLinkTransform        LiveLinkTransform;                                        // (Parm, OutParm, ReferenceParm)
	struct FTransform                                  Transform;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function LiveLink.LiveLinkBlueprintLibrary.NumberOfTransforms
struct ULiveLink_LiveLinkBlueprintLibrary_NumberOfTransforms_Params
{
	struct FLiveLinkInterface_SubjectFrameHandle       SubjectFrameHandle;                                       // (Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveLink.LiveLinkBlueprintLibrary.IsSpecificLiveLinkSubjectEnabled
struct ULiveLink_LiveLinkBlueprintLibrary_IsSpecificLiveLinkSubjectEnabled_Params
{
	struct FLiveLinkInterface_LiveLinkSubjectKey       SubjectKey;                                               // (ConstParm, Parm)
	bool                                               bForThisFrame;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveLink.LiveLinkBlueprintLibrary.IsSourceStillValid
struct ULiveLink_LiveLinkBlueprintLibrary_IsSourceStillValid_Params
{
	struct FLiveLinkInterface_LiveLinkSourceHandle     SourceHandle;                                             // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveLink.LiveLinkBlueprintLibrary.IsLiveLinkSubjectEnabled
struct ULiveLink_LiveLinkBlueprintLibrary_IsLiveLinkSubjectEnabled_Params
{
	struct FLiveLinkInterface_LiveLinkSubjectName      SubjectName;                                              // (ConstParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveLink.LiveLinkBlueprintLibrary.HasParent
struct ULiveLink_LiveLinkBlueprintLibrary_HasParent_Params
{
	struct FLiveLinkInterface_LiveLinkTransform        LiveLinkTransform;                                        // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveLink.LiveLinkBlueprintLibrary.GetTransformByName
struct ULiveLink_LiveLinkBlueprintLibrary_GetTransformByName_Params
{
	struct FLiveLinkInterface_SubjectFrameHandle       SubjectFrameHandle;                                       // (Parm, OutParm, ReferenceParm)
	struct FName                                       TransformName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLiveLinkInterface_LiveLinkTransform        LiveLinkTransform;                                        // (Parm, OutParm)
};

// Function LiveLink.LiveLinkBlueprintLibrary.GetTransformByIndex
struct ULiveLink_LiveLinkBlueprintLibrary_GetTransformByIndex_Params
{
	struct FLiveLinkInterface_SubjectFrameHandle       SubjectFrameHandle;                                       // (Parm, OutParm, ReferenceParm)
	int                                                TransformIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLiveLinkInterface_LiveLinkTransform        LiveLinkTransform;                                        // (Parm, OutParm)
};

// Function LiveLink.LiveLinkBlueprintLibrary.GetSpecificLiveLinkSubjectRole
struct ULiveLink_LiveLinkBlueprintLibrary_GetSpecificLiveLinkSubjectRole_Params
{
	struct FLiveLinkInterface_LiveLinkSubjectKey       SubjectKey;                                               // (ConstParm, Parm)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveLink.LiveLinkBlueprintLibrary.GetSourceType
struct ULiveLink_LiveLinkBlueprintLibrary_GetSourceType_Params
{
	struct FLiveLinkInterface_LiveLinkSourceHandle     SourceHandle;                                             // (Parm, OutParm, ReferenceParm)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function LiveLink.LiveLinkBlueprintLibrary.GetSourceStatus
struct ULiveLink_LiveLinkBlueprintLibrary_GetSourceStatus_Params
{
	struct FLiveLinkInterface_LiveLinkSourceHandle     SourceHandle;                                             // (Parm, OutParm, ReferenceParm)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function LiveLink.LiveLinkBlueprintLibrary.GetSourceMachineName
struct ULiveLink_LiveLinkBlueprintLibrary_GetSourceMachineName_Params
{
	struct FLiveLinkInterface_LiveLinkSourceHandle     SourceHandle;                                             // (Parm, OutParm, ReferenceParm)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function LiveLink.LiveLinkBlueprintLibrary.GetRootTransform
struct ULiveLink_LiveLinkBlueprintLibrary_GetRootTransform_Params
{
	struct FLiveLinkInterface_SubjectFrameHandle       SubjectFrameHandle;                                       // (Parm, OutParm, ReferenceParm)
	struct FLiveLinkInterface_LiveLinkTransform        LiveLinkTransform;                                        // (Parm, OutParm)
};

// Function LiveLink.LiveLinkBlueprintLibrary.GetPropertyValue
struct ULiveLink_LiveLinkBlueprintLibrary_GetPropertyValue_Params
{
	struct FLiveLinkInterface_LiveLinkBasicBlueprintData BasicData;                                                // (Parm, OutParm, ReferenceParm)
	struct FName                                       PropertyName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveLink.LiveLinkBlueprintLibrary.GetParent
struct ULiveLink_LiveLinkBlueprintLibrary_GetParent_Params
{
	struct FLiveLinkInterface_LiveLinkTransform        LiveLinkTransform;                                        // (Parm, OutParm, ReferenceParm)
	struct FLiveLinkInterface_LiveLinkTransform        Parent;                                                   // (Parm, OutParm)
};

// Function LiveLink.LiveLinkBlueprintLibrary.GetMetadata
struct ULiveLink_LiveLinkBlueprintLibrary_GetMetadata_Params
{
	struct FLiveLinkInterface_SubjectFrameHandle       SubjectFrameHandle;                                       // (Parm, OutParm, ReferenceParm)
	struct FLiveLinkInterface_SubjectMetadata          MetaData;                                                 // (Parm, OutParm)
};

// Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkSubjects
struct ULiveLink_LiveLinkBlueprintLibrary_GetLiveLinkSubjects_Params
{
	bool                                               bIncludeDisabledSubject;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeDisal;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FLiveLinkInterface_LiveLinkSubjectKey> ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkSubjectRole
struct ULiveLink_LiveLinkBlueprintLibrary_GetLiveLinkSubjectRole_Params
{
	struct FLiveLinkInterface_LiveLinkSubjectName      SubjectName;                                              // (ConstParm, Parm)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkEnabledSubjectNames
struct ULiveLink_LiveLinkBlueprintLibrary_GetLiveLinkEnabledSubjectNames_Params
{
	bool                                               bIncludeVirtualSubject;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FLiveLinkInterface_LiveLinkSubjectName> ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LiveLink.LiveLinkBlueprintLibrary.GetCurves
struct ULiveLink_LiveLinkBlueprintLibrary_GetCurves_Params
{
	struct FLiveLinkInterface_SubjectFrameHandle       SubjectFrameHandle;                                       // (Parm, OutParm, ReferenceParm)
	TMap<struct FName, float>                          Curves;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function LiveLink.LiveLinkBlueprintLibrary.GetChildren
struct ULiveLink_LiveLinkBlueprintLibrary_GetChildren_Params
{
	struct FLiveLinkInterface_LiveLinkTransform        LiveLinkTransform;                                        // (Parm, OutParm, ReferenceParm)
	TArray<struct FLiveLinkInterface_LiveLinkTransform> Children;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function LiveLink.LiveLinkBlueprintLibrary.GetBasicData
struct ULiveLink_LiveLinkBlueprintLibrary_GetBasicData_Params
{
	struct FLiveLinkInterface_SubjectFrameHandle       SubjectFrameHandle;                                       // (Parm, OutParm, ReferenceParm)
	struct FLiveLinkInterface_LiveLinkBasicBlueprintData BasicBlueprintData;                                       // (Parm, OutParm)
};

// Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameWithSpecificRole
struct ULiveLink_LiveLinkBlueprintLibrary_EvaluateLiveLinkFrameWithSpecificRole_Params
{
	struct FLiveLinkInterface_LiveLinkSubjectName      SubjectName;                                              // (Parm)
	class UClass*                                      Role;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLiveLinkInterface_LiveLinkBaseBlueprintData OutBlueprintData;                                         // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameAtWorldTimeOffset
struct ULiveLink_LiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtWorldTimeOffset_Params
{
	struct FLiveLinkInterface_LiveLinkSubjectName      SubjectName;                                              // (Parm)
	class UClass*                                      Role;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              WorldTimeOffset;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLiveLinkInterface_LiveLinkBaseBlueprintData OutBlueprintData;                                         // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameAtSceneTime
struct ULiveLink_LiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtSceneTime_Params
{
	struct FLiveLinkInterface_LiveLinkSubjectName      SubjectName;                                              // (Parm)
	class UClass*                                      Role;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTimecode                                   SceneTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLiveLinkInterface_LiveLinkBaseBlueprintData OutBlueprintData;                                         // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrame
struct ULiveLink_LiveLinkBlueprintLibrary_EvaluateLiveLinkFrame_Params
{
	struct FLiveLinkInterface_LiveLinkSubjectRepresentation SubjectRepresentation;                                    // (Parm)
	struct FLiveLinkInterface_LiveLinkBaseBlueprintData OutBlueprintData;                                         // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveLink.LiveLinkBlueprintLibrary.ComponentSpaceTransform
struct ULiveLink_LiveLinkBlueprintLibrary_ComponentSpaceTransform_Params
{
	struct FLiveLinkInterface_LiveLinkTransform        LiveLinkTransform;                                        // (Parm, OutParm, ReferenceParm)
	struct FTransform                                  Transform;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function LiveLink.LiveLinkBlueprintLibrary.ChildCount
struct ULiveLink_LiveLinkBlueprintLibrary_ChildCount_Params
{
	struct FLiveLinkInterface_LiveLinkTransform        LiveLinkTransform;                                        // (Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveLink.LiveLinkComponent.GetSubjectDataAtWorldTime
struct ULiveLink_LiveLinkComponent_GetSubjectDataAtWorldTime_Params
{
	struct FName                                       SubjectName;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              WorldTime;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FLiveLinkInterface_SubjectFrameHandle       SubjectFrameHandle;                                       // (Parm, OutParm)
};

// Function LiveLink.LiveLinkComponent.GetSubjectDataAtSceneTime
struct ULiveLink_LiveLinkComponent_GetSubjectDataAtSceneTime_Params
{
	struct FName                                       SubjectName;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FTimecode                                   SceneTime;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FLiveLinkInterface_SubjectFrameHandle       SubjectFrameHandle;                                       // (Parm, OutParm)
};

// Function LiveLink.LiveLinkComponent.GetSubjectData
struct ULiveLink_LiveLinkComponent_GetSubjectData_Params
{
	struct FName                                       SubjectName;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FLiveLinkInterface_SubjectFrameHandle       SubjectFrameHandle;                                       // (Parm, OutParm)
};

// Function LiveLink.LiveLinkComponent.GetAvailableSubjectNames
struct ULiveLink_LiveLinkComponent_GetAvailableSubjectNames_Params
{
	TArray<struct FName>                               SubjectNames;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function LiveLink.LiveLinkMessageBusFinder.GetAvailableProviders
struct ULiveLink_LiveLinkMessageBusFinder_GetAvailableProviders_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEngine_LatentActionInfo                    LatentInfo;                                               // (Parm)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FLiveLink_ProviderPollResult>        AvailableProviders;                                       // (Parm, OutParm, ZeroConstructor)
};

// Function LiveLink.LiveLinkMessageBusFinder.ConstructMessageBusFinder
struct ULiveLink_LiveLinkMessageBusFinder_ConstructMessageBusFinder_Params
{
	class ULiveLink_LiveLinkMessageBusFinder*          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveLink.LiveLinkMessageBusFinder.ConnectToProvider
struct ULiveLink_LiveLinkMessageBusFinder_ConnectToProvider_Params
{
	struct FLiveLink_ProviderPollResult                Provider;                                                 // (Parm, OutParm, ReferenceParm)
	struct FLiveLinkInterface_LiveLinkSourceHandle     SourceHandle;                                             // (Parm, OutParm)
};

// Function LiveLink.LiveLinkPreset.BuildFromClient
struct ULiveLink_LiveLinkPreset_BuildFromClient_Params
{
};

// Function LiveLink.LiveLinkPreset.ApplyToClient
struct ULiveLink_LiveLinkPreset_ApplyToClient_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveLink.LiveLinkRemapAsset.RemapCurveElements
struct ULiveLink_LiveLinkRemapAsset_RemapCurveElements_Params
{
	TMap<struct FName, float>                          CurveItems;                                               // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function LiveLink.LiveLinkRemapAsset.GetRemappedCurveName
struct ULiveLink_LiveLinkRemapAsset_GetRemappedCurveName_Params
{
	struct FName                                       CurveName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveLink.LiveLinkRemapAsset.GetRemappedBoneName
struct ULiveLink_LiveLinkRemapAsset_GetRemappedBoneName_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
