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

// Function GameplayTags.BlueprintGameplayTagLibrary.RemoveGameplayTag
struct UGameplayTags_BlueprintGameplayTagLibrary_RemoveGameplayTag_Params
{
	struct FGameplayTags_GameplayTagContainer          TagContainer;                                             // (Parm, OutParm, ReferenceParm)
	struct FGameplayTags_GameplayTag                   Tag;                                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagTag
struct UGameplayTags_BlueprintGameplayTagLibrary_NotEqual_TagTag_Params
{
	struct FGameplayTags_GameplayTag                   A;                                                        // (Parm)
	struct FString                                     B;                                                        // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagContainerTagContainer
struct UGameplayTags_BlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer_Params
{
	struct FGameplayTags_GameplayTagContainer          A;                                                        // (Parm)
	struct FString                                     B;                                                        // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTagContainer
struct UGameplayTags_BlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer_Params
{
	struct FGameplayTags_GameplayTagContainer          A;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTags_GameplayTagContainer          B;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTag
struct UGameplayTags_BlueprintGameplayTagLibrary_NotEqual_GameplayTag_Params
{
	struct FGameplayTags_GameplayTag                   A;                                                        // (Parm)
	struct FGameplayTags_GameplayTag                   B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.MatchesTag
struct UGameplayTags_BlueprintGameplayTagLibrary_MatchesTag_Params
{
	struct FGameplayTags_GameplayTag                   TagOne;                                                   // (Parm)
	struct FGameplayTags_GameplayTag                   TagTwo;                                                   // (Parm)
	bool                                               bExactMatch;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.MatchesAnyTags
struct UGameplayTags_BlueprintGameplayTagLibrary_MatchesAnyTags_Params
{
	struct FGameplayTags_GameplayTag                   TagOne;                                                   // (Parm)
	struct FGameplayTags_GameplayTagContainer          OtherContainer;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bExactMatch;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTagContainer
struct UGameplayTags_BlueprintGameplayTagLibrary_MakeLiteralGameplayTagContainer_Params
{
	struct FGameplayTags_GameplayTagContainer          Value;                                                    // (Parm)
	struct FGameplayTags_GameplayTagContainer          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag
struct UGameplayTags_BlueprintGameplayTagLibrary_MakeLiteralGameplayTag_Params
{
	struct FGameplayTags_GameplayTag                   Value;                                                    // (Parm)
	struct FGameplayTags_GameplayTag                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery
struct UGameplayTags_BlueprintGameplayTagLibrary_MakeGameplayTagQuery_Params
{
	struct FGameplayTags_GameplayTagQuery              TagQuery;                                                 // (Parm)
	struct FGameplayTags_GameplayTagQuery              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromTag
struct UGameplayTags_BlueprintGameplayTagLibrary_MakeGameplayTagContainerFromTag_Params
{
	struct FGameplayTags_GameplayTag                   SingleTag;                                                // (Parm)
	struct FGameplayTags_GameplayTagContainer          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromArray
struct UGameplayTags_BlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray_Params
{
	TArray<struct FGameplayTags_GameplayTag>           GameplayTags;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FGameplayTags_GameplayTagContainer          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.IsTagQueryEmpty
struct UGameplayTags_BlueprintGameplayTagLibrary_IsTagQueryEmpty_Params
{
	struct FGameplayTags_GameplayTagQuery              TagQuery;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.IsGameplayTagValid
struct UGameplayTags_BlueprintGameplayTagLibrary_IsGameplayTagValid_Params
{
	struct FGameplayTags_GameplayTag                   GameplayTag;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.HasTag
struct UGameplayTags_BlueprintGameplayTagLibrary_HasTag_Params
{
	struct FGameplayTags_GameplayTagContainer          TagContainer;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTags_GameplayTag                   Tag;                                                      // (Parm)
	bool                                               bExactMatch;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.HasAnyTags
struct UGameplayTags_BlueprintGameplayTagLibrary_HasAnyTags_Params
{
	struct FGameplayTags_GameplayTagContainer          TagContainer;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTags_GameplayTagContainer          OtherContainer;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bExactMatch;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.HasAllTags
struct UGameplayTags_BlueprintGameplayTagLibrary_HasAllTags_Params
{
	struct FGameplayTags_GameplayTagContainer          TagContainer;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTags_GameplayTagContainer          OtherContainer;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bExactMatch;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.HasAllMatchingGameplayTags
struct UGameplayTags_BlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Params
{
	TScriptInterface<class UGameplayTags_GameplayTagAssetInterface> TagContainerInterface;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTags_GameplayTagContainer          OtherContainer;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.GetTagName
struct UGameplayTags_BlueprintGameplayTagLibrary_GetTagName_Params
{
	struct FGameplayTags_GameplayTag                   GameplayTag;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.GetNumGameplayTagsInContainer
struct UGameplayTags_BlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer_Params
{
	struct FGameplayTags_GameplayTagContainer          TagContainer;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTagContainer
struct UGameplayTags_BlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer_Params
{
	struct FGameplayTags_GameplayTagContainer          TagContainer;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTag
struct UGameplayTags_BlueprintGameplayTagLibrary_GetDebugStringFromGameplayTag_Params
{
	struct FGameplayTags_GameplayTag                   GameplayTag;                                              // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.GetAllActorsOfClassMatchingTagQuery
struct UGameplayTags_BlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ActorClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTags_GameplayTagQuery              GameplayTagQuery;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<class AEngine_Actor*>                       OutActors;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTagContainer
struct UGameplayTags_BlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer_Params
{
	struct FGameplayTags_GameplayTagContainer          A;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTags_GameplayTagContainer          B;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTag
struct UGameplayTags_BlueprintGameplayTagLibrary_EqualEqual_GameplayTag_Params
{
	struct FGameplayTags_GameplayTag                   A;                                                        // (Parm)
	struct FGameplayTags_GameplayTag                   B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.DoesTagAssetInterfaceHaveTag
struct UGameplayTags_BlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag_Params
{
	TScriptInterface<class UGameplayTags_GameplayTagAssetInterface> TagContainerInterface;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTags_GameplayTag                   Tag;                                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchTagQuery
struct UGameplayTags_BlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Params
{
	struct FGameplayTags_GameplayTagContainer          TagContainer;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTags_GameplayTagQuery              TagQuery;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.BreakGameplayTagContainer
struct UGameplayTags_BlueprintGameplayTagLibrary_BreakGameplayTagContainer_Params
{
	struct FGameplayTags_GameplayTagContainer          GameplayTagContainer;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FGameplayTags_GameplayTag>           GameplayTags;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.AppendGameplayTagContainers
struct UGameplayTags_BlueprintGameplayTagLibrary_AppendGameplayTagContainers_Params
{
	struct FGameplayTags_GameplayTagContainer          InOutTagContainer;                                        // (Parm, OutParm, ReferenceParm)
	struct FGameplayTags_GameplayTagContainer          InTagContainer;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.AddGameplayTag
struct UGameplayTags_BlueprintGameplayTagLibrary_AddGameplayTag_Params
{
	struct FGameplayTags_GameplayTagContainer          TagContainer;                                             // (Parm, OutParm, ReferenceParm)
	struct FGameplayTags_GameplayTag                   Tag;                                                      // (Parm)
};

// Function GameplayTags.GameplayTagAssetInterface.HasMatchingGameplayTag
struct UGameplayTags_GameplayTagAssetInterface_HasMatchingGameplayTag_Params
{
	struct FGameplayTags_GameplayTag                   TagToCheck;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayTags.GameplayTagAssetInterface.HasAnyMatchingGameplayTags
struct UGameplayTags_GameplayTagAssetInterface_HasAnyMatchingGameplayTags_Params
{
	struct FGameplayTags_GameplayTagContainer          TagContainer;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayTags.GameplayTagAssetInterface.HasAllMatchingGameplayTags
struct UGameplayTags_GameplayTagAssetInterface_HasAllMatchingGameplayTags_Params
{
	struct FGameplayTags_GameplayTagContainer          TagContainer;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayTags.GameplayTagAssetInterface.GetOwnedGameplayTags
struct UGameplayTags_GameplayTagAssetInterface_GetOwnedGameplayTags_Params
{
	struct FGameplayTags_GameplayTagContainer          TagContainer;                                             // (Parm, OutParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
