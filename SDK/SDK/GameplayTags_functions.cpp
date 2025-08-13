
#include "../SDK.h"

// Name: , Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function GameplayTags.BlueprintGameplayTagLibrary.RemoveGameplayTag
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayTags_GameplayTagContainer TagContainer                   (Parm, OutParm, ReferenceParm)
// struct FGameplayTags_GameplayTag Tag                            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayTags_BlueprintGameplayTagLibrary::STATIC_RemoveGameplayTag(const struct FGameplayTags_GameplayTag& Tag, struct FGameplayTags_GameplayTagContainer* TagContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.RemoveGameplayTag");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.RemoveGameplayTag");

	UGameplayTags_BlueprintGameplayTagLibrary_RemoveGameplayTag_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TagContainer != nullptr)
		*TagContainer = params.TagContainer;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagTag
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTags_GameplayTag A                              (Parm)
// struct FString                 B                              (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayTags_BlueprintGameplayTagLibrary::STATIC_NotEqual_TagTag(const struct FGameplayTags_GameplayTag& A, const struct FString& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagTag");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagTag");

	UGameplayTags_BlueprintGameplayTagLibrary_NotEqual_TagTag_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagContainerTagContainer
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTags_GameplayTagContainer A                              (Parm)
// struct FString                 B                              (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayTags_BlueprintGameplayTagLibrary::STATIC_NotEqual_TagContainerTagContainer(const struct FGameplayTags_GameplayTagContainer& A, const struct FString& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagContainerTagContainer");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagContainerTagContainer");

	UGameplayTags_BlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTagContainer
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTags_GameplayTagContainer A                              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTags_GameplayTagContainer B                              (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayTags_BlueprintGameplayTagLibrary::STATIC_NotEqual_GameplayTagContainer(const struct FGameplayTags_GameplayTagContainer& A, const struct FGameplayTags_GameplayTagContainer& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTagContainer");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTagContainer");

	UGameplayTags_BlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTag
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTags_GameplayTag A                              (Parm)
// struct FGameplayTags_GameplayTag B                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayTags_BlueprintGameplayTagLibrary::STATIC_NotEqual_GameplayTag(const struct FGameplayTags_GameplayTag& A, const struct FGameplayTags_GameplayTag& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTag");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTag");

	UGameplayTags_BlueprintGameplayTagLibrary_NotEqual_GameplayTag_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.MatchesTag
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTags_GameplayTag TagOne                         (Parm)
// struct FGameplayTags_GameplayTag TagTwo                         (Parm)
// bool                           bExactMatch                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayTags_BlueprintGameplayTagLibrary::STATIC_MatchesTag(const struct FGameplayTags_GameplayTag& TagOne, const struct FGameplayTags_GameplayTag& TagTwo, bool bExactMatch)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.MatchesTag");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.MatchesTag");

	UGameplayTags_BlueprintGameplayTagLibrary_MatchesTag_Params params;
	params.TagOne = TagOne;
	params.TagTwo = TagTwo;
	params.bExactMatch = bExactMatch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.MatchesAnyTags
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTags_GameplayTag TagOne                         (Parm)
// struct FGameplayTags_GameplayTagContainer OtherContainer                 (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bExactMatch                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayTags_BlueprintGameplayTagLibrary::STATIC_MatchesAnyTags(const struct FGameplayTags_GameplayTag& TagOne, const struct FGameplayTags_GameplayTagContainer& OtherContainer, bool bExactMatch)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.MatchesAnyTags");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.MatchesAnyTags");

	UGameplayTags_BlueprintGameplayTagLibrary_MatchesAnyTags_Params params;
	params.TagOne = TagOne;
	params.OtherContainer = OtherContainer;
	params.bExactMatch = bExactMatch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTagContainer
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTags_GameplayTagContainer Value                          (Parm)
// struct FGameplayTags_GameplayTagContainer ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayTags_GameplayTagContainer UGameplayTags_BlueprintGameplayTagLibrary::STATIC_MakeLiteralGameplayTagContainer(const struct FGameplayTags_GameplayTagContainer& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTagContainer");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTagContainer");

	UGameplayTags_BlueprintGameplayTagLibrary_MakeLiteralGameplayTagContainer_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTags_GameplayTag Value                          (Parm)
// struct FGameplayTags_GameplayTag ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayTags_GameplayTag UGameplayTags_BlueprintGameplayTagLibrary::STATIC_MakeLiteralGameplayTag(const struct FGameplayTags_GameplayTag& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag");

	UGameplayTags_BlueprintGameplayTagLibrary_MakeLiteralGameplayTag_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTags_GameplayTagQuery TagQuery                       (Parm)
// struct FGameplayTags_GameplayTagQuery ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayTags_GameplayTagQuery UGameplayTags_BlueprintGameplayTagLibrary::STATIC_MakeGameplayTagQuery(const struct FGameplayTags_GameplayTagQuery& TagQuery)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery");

	UGameplayTags_BlueprintGameplayTagLibrary_MakeGameplayTagQuery_Params params;
	params.TagQuery = TagQuery;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromTag
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTags_GameplayTag SingleTag                      (Parm)
// struct FGameplayTags_GameplayTagContainer ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayTags_GameplayTagContainer UGameplayTags_BlueprintGameplayTagLibrary::STATIC_MakeGameplayTagContainerFromTag(const struct FGameplayTags_GameplayTag& SingleTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromTag");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromTag");

	UGameplayTags_BlueprintGameplayTagLibrary_MakeGameplayTagContainerFromTag_Params params;
	params.SingleTag = SingleTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromArray
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FGameplayTags_GameplayTag> GameplayTags                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FGameplayTags_GameplayTagContainer ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayTags_GameplayTagContainer UGameplayTags_BlueprintGameplayTagLibrary::STATIC_MakeGameplayTagContainerFromArray(TArray<struct FGameplayTags_GameplayTag> GameplayTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromArray");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromArray");

	UGameplayTags_BlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray_Params params;
	params.GameplayTags = GameplayTags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.IsTagQueryEmpty
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTags_GameplayTagQuery TagQuery                       (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayTags_BlueprintGameplayTagLibrary::STATIC_IsTagQueryEmpty(const struct FGameplayTags_GameplayTagQuery& TagQuery)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.IsTagQueryEmpty");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.IsTagQueryEmpty");

	UGameplayTags_BlueprintGameplayTagLibrary_IsTagQueryEmpty_Params params;
	params.TagQuery = TagQuery;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.IsGameplayTagValid
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTags_GameplayTag GameplayTag                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayTags_BlueprintGameplayTagLibrary::STATIC_IsGameplayTagValid(const struct FGameplayTags_GameplayTag& GameplayTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.IsGameplayTagValid");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.IsGameplayTagValid");

	UGameplayTags_BlueprintGameplayTagLibrary_IsGameplayTagValid_Params params;
	params.GameplayTag = GameplayTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.HasTag
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTags_GameplayTagContainer TagContainer                   (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTags_GameplayTag Tag                            (Parm)
// bool                           bExactMatch                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayTags_BlueprintGameplayTagLibrary::STATIC_HasTag(const struct FGameplayTags_GameplayTagContainer& TagContainer, const struct FGameplayTags_GameplayTag& Tag, bool bExactMatch)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.HasTag");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.HasTag");

	UGameplayTags_BlueprintGameplayTagLibrary_HasTag_Params params;
	params.TagContainer = TagContainer;
	params.Tag = Tag;
	params.bExactMatch = bExactMatch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.HasAnyTags
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTags_GameplayTagContainer TagContainer                   (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTags_GameplayTagContainer OtherContainer                 (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bExactMatch                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayTags_BlueprintGameplayTagLibrary::STATIC_HasAnyTags(const struct FGameplayTags_GameplayTagContainer& TagContainer, const struct FGameplayTags_GameplayTagContainer& OtherContainer, bool bExactMatch)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.HasAnyTags");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.HasAnyTags");

	UGameplayTags_BlueprintGameplayTagLibrary_HasAnyTags_Params params;
	params.TagContainer = TagContainer;
	params.OtherContainer = OtherContainer;
	params.bExactMatch = bExactMatch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.HasAllTags
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTags_GameplayTagContainer TagContainer                   (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTags_GameplayTagContainer OtherContainer                 (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bExactMatch                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayTags_BlueprintGameplayTagLibrary::STATIC_HasAllTags(const struct FGameplayTags_GameplayTagContainer& TagContainer, const struct FGameplayTags_GameplayTagContainer& OtherContainer, bool bExactMatch)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.HasAllTags");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.HasAllTags");

	UGameplayTags_BlueprintGameplayTagLibrary_HasAllTags_Params params;
	params.TagContainer = TagContainer;
	params.OtherContainer = OtherContainer;
	params.bExactMatch = bExactMatch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.HasAllMatchingGameplayTags
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TScriptInterface<class UGameplayTags_GameplayTagAssetInterface> TagContainerInterface          (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTags_GameplayTagContainer OtherContainer                 (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayTags_BlueprintGameplayTagLibrary::STATIC_HasAllMatchingGameplayTags(const TScriptInterface<class UGameplayTags_GameplayTagAssetInterface>& TagContainerInterface, const struct FGameplayTags_GameplayTagContainer& OtherContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.HasAllMatchingGameplayTags");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.HasAllMatchingGameplayTags");

	UGameplayTags_BlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Params params;
	params.TagContainerInterface = TagContainerInterface;
	params.OtherContainer = OtherContainer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.GetTagName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTags_GameplayTag GameplayTag                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UGameplayTags_BlueprintGameplayTagLibrary::STATIC_GetTagName(const struct FGameplayTags_GameplayTag& GameplayTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.GetTagName");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.GetTagName");

	UGameplayTags_BlueprintGameplayTagLibrary_GetTagName_Params params;
	params.GameplayTag = GameplayTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.GetNumGameplayTagsInContainer
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTags_GameplayTagContainer TagContainer                   (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGameplayTags_BlueprintGameplayTagLibrary::STATIC_GetNumGameplayTagsInContainer(const struct FGameplayTags_GameplayTagContainer& TagContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.GetNumGameplayTagsInContainer");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.GetNumGameplayTagsInContainer");

	UGameplayTags_BlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer_Params params;
	params.TagContainer = TagContainer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTagContainer
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTags_GameplayTagContainer TagContainer                   (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UGameplayTags_BlueprintGameplayTagLibrary::STATIC_GetDebugStringFromGameplayTagContainer(const struct FGameplayTags_GameplayTagContainer& TagContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTagContainer");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTagContainer");

	UGameplayTags_BlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer_Params params;
	params.TagContainer = TagContainer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTag
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTags_GameplayTag GameplayTag                    (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UGameplayTags_BlueprintGameplayTagLibrary::STATIC_GetDebugStringFromGameplayTag(const struct FGameplayTags_GameplayTag& GameplayTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTag");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTag");

	UGameplayTags_BlueprintGameplayTagLibrary_GetDebugStringFromGameplayTag_Params params;
	params.GameplayTag = GameplayTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.GetAllActorsOfClassMatchingTagQuery
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ActorClass                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTags_GameplayTagQuery GameplayTagQuery               (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<class AEngine_Actor*>   OutActors                      (Parm, OutParm, ZeroConstructor)

void UGameplayTags_BlueprintGameplayTagLibrary::STATIC_GetAllActorsOfClassMatchingTagQuery(class UObject* WorldContextObject, class UClass* ActorClass, const struct FGameplayTags_GameplayTagQuery& GameplayTagQuery, TArray<class AEngine_Actor*>* OutActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.GetAllActorsOfClassMatchingTagQuery");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.GetAllActorsOfClassMatchingTagQuery");

	UGameplayTags_BlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ActorClass = ActorClass;
	params.GameplayTagQuery = GameplayTagQuery;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutActors != nullptr)
		*OutActors = params.OutActors;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTagContainer
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTags_GameplayTagContainer A                              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTags_GameplayTagContainer B                              (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayTags_BlueprintGameplayTagLibrary::STATIC_EqualEqual_GameplayTagContainer(const struct FGameplayTags_GameplayTagContainer& A, const struct FGameplayTags_GameplayTagContainer& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTagContainer");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTagContainer");

	UGameplayTags_BlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTag
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTags_GameplayTag A                              (Parm)
// struct FGameplayTags_GameplayTag B                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayTags_BlueprintGameplayTagLibrary::STATIC_EqualEqual_GameplayTag(const struct FGameplayTags_GameplayTag& A, const struct FGameplayTags_GameplayTag& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTag");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTag");

	UGameplayTags_BlueprintGameplayTagLibrary_EqualEqual_GameplayTag_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.DoesTagAssetInterfaceHaveTag
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TScriptInterface<class UGameplayTags_GameplayTagAssetInterface> TagContainerInterface          (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTags_GameplayTag Tag                            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayTags_BlueprintGameplayTagLibrary::STATIC_DoesTagAssetInterfaceHaveTag(const TScriptInterface<class UGameplayTags_GameplayTagAssetInterface>& TagContainerInterface, const struct FGameplayTags_GameplayTag& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.DoesTagAssetInterfaceHaveTag");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.DoesTagAssetInterfaceHaveTag");

	UGameplayTags_BlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag_Params params;
	params.TagContainerInterface = TagContainerInterface;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchTagQuery
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTags_GameplayTagContainer TagContainer                   (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTags_GameplayTagQuery TagQuery                       (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayTags_BlueprintGameplayTagLibrary::STATIC_DoesContainerMatchTagQuery(const struct FGameplayTags_GameplayTagContainer& TagContainer, const struct FGameplayTags_GameplayTagQuery& TagQuery)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchTagQuery");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchTagQuery");

	UGameplayTags_BlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Params params;
	params.TagContainer = TagContainer;
	params.TagQuery = TagQuery;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.BreakGameplayTagContainer
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTags_GameplayTagContainer GameplayTagContainer           (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<struct FGameplayTags_GameplayTag> GameplayTags                   (Parm, OutParm, ZeroConstructor)

void UGameplayTags_BlueprintGameplayTagLibrary::STATIC_BreakGameplayTagContainer(const struct FGameplayTags_GameplayTagContainer& GameplayTagContainer, TArray<struct FGameplayTags_GameplayTag>* GameplayTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.BreakGameplayTagContainer");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.BreakGameplayTagContainer");

	UGameplayTags_BlueprintGameplayTagLibrary_BreakGameplayTagContainer_Params params;
	params.GameplayTagContainer = GameplayTagContainer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GameplayTags != nullptr)
		*GameplayTags = params.GameplayTags;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.AppendGameplayTagContainers
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayTags_GameplayTagContainer InOutTagContainer              (Parm, OutParm, ReferenceParm)
// struct FGameplayTags_GameplayTagContainer InTagContainer                 (ConstParm, Parm, OutParm, ReferenceParm)

void UGameplayTags_BlueprintGameplayTagLibrary::STATIC_AppendGameplayTagContainers(const struct FGameplayTags_GameplayTagContainer& InTagContainer, struct FGameplayTags_GameplayTagContainer* InOutTagContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.AppendGameplayTagContainers");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.AppendGameplayTagContainers");

	UGameplayTags_BlueprintGameplayTagLibrary_AppendGameplayTagContainers_Params params;
	params.InTagContainer = InTagContainer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InOutTagContainer != nullptr)
		*InOutTagContainer = params.InOutTagContainer;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.AddGameplayTag
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayTags_GameplayTagContainer TagContainer                   (Parm, OutParm, ReferenceParm)
// struct FGameplayTags_GameplayTag Tag                            (Parm)

void UGameplayTags_BlueprintGameplayTagLibrary::STATIC_AddGameplayTag(const struct FGameplayTags_GameplayTag& Tag, struct FGameplayTags_GameplayTagContainer* TagContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.AddGameplayTag");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.AddGameplayTag");

	UGameplayTags_BlueprintGameplayTagLibrary_AddGameplayTag_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TagContainer != nullptr)
		*TagContainer = params.TagContainer;
}


// Function GameplayTags.GameplayTagAssetInterface.HasMatchingGameplayTag
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTags_GameplayTag TagToCheck                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayTags_GameplayTagAssetInterface::HasMatchingGameplayTag(const struct FGameplayTags_GameplayTag& TagToCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.GameplayTagAssetInterface.HasMatchingGameplayTag");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function GameplayTags.GameplayTagAssetInterface.HasMatchingGameplayTag");

	UGameplayTags_GameplayTagAssetInterface_HasMatchingGameplayTag_Params params;
	params.TagToCheck = TagToCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.GameplayTagAssetInterface.HasAnyMatchingGameplayTags
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTags_GameplayTagContainer TagContainer                   (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayTags_GameplayTagAssetInterface::HasAnyMatchingGameplayTags(const struct FGameplayTags_GameplayTagContainer& TagContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.GameplayTagAssetInterface.HasAnyMatchingGameplayTags");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function GameplayTags.GameplayTagAssetInterface.HasAnyMatchingGameplayTags");

	UGameplayTags_GameplayTagAssetInterface_HasAnyMatchingGameplayTags_Params params;
	params.TagContainer = TagContainer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.GameplayTagAssetInterface.HasAllMatchingGameplayTags
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTags_GameplayTagContainer TagContainer                   (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayTags_GameplayTagAssetInterface::HasAllMatchingGameplayTags(const struct FGameplayTags_GameplayTagContainer& TagContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.GameplayTagAssetInterface.HasAllMatchingGameplayTags");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function GameplayTags.GameplayTagAssetInterface.HasAllMatchingGameplayTags");

	UGameplayTags_GameplayTagAssetInterface_HasAllMatchingGameplayTags_Params params;
	params.TagContainer = TagContainer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.GameplayTagAssetInterface.GetOwnedGameplayTags
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTags_GameplayTagContainer TagContainer                   (Parm, OutParm)

void UGameplayTags_GameplayTagAssetInterface::GetOwnedGameplayTags(struct FGameplayTags_GameplayTagContainer* TagContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.GameplayTagAssetInterface.GetOwnedGameplayTags");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function GameplayTags.GameplayTagAssetInterface.GetOwnedGameplayTags");

	UGameplayTags_GameplayTagAssetInterface_GetOwnedGameplayTags_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TagContainer != nullptr)
		*TagContainer = params.TagContainer;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
