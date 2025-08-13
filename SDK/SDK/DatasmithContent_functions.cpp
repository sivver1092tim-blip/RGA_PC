
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

// Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataValueForKey
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UDatasmithContent_DatasmithContentBlueprintLibrary::STATIC_GetDatasmithUserDataValueForKey(class UObject* Object, const struct FName& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataValueForKey");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataValueForKey");

	UDatasmithContent_DatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey_Params params;
	params.Object = Object;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataKeysAndValuesForValue
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 StringToMatch                  (Parm, ZeroConstructor)
// TArray<struct FName>           OutKeys                        (Parm, OutParm, ZeroConstructor)
// TArray<struct FString>         OutValues                      (Parm, OutParm, ZeroConstructor)

void UDatasmithContent_DatasmithContentBlueprintLibrary::STATIC_GetDatasmithUserDataKeysAndValuesForValue(class UObject* Object, const struct FString& StringToMatch, TArray<struct FName>* OutKeys, TArray<struct FString>* OutValues)
{
	static auto fn = UObject::FindObject<UFunction>("Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataKeysAndValuesForValue");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataKeysAndValuesForValue");

	UDatasmithContent_DatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue_Params params;
	params.Object = Object;
	params.StringToMatch = StringToMatch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutKeys != nullptr)
		*OutKeys = params.OutKeys;
	if (OutValues != nullptr)
		*OutValues = params.OutValues;
}


// Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDatasmithContent_DatasmithAssetUserData* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UDatasmithContent_DatasmithAssetUserData* UDatasmithContent_DatasmithContentBlueprintLibrary::STATIC_GetDatasmithUserData(class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserData");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserData");

	UDatasmithContent_DatasmithContentBlueprintLibrary_GetDatasmithUserData_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DatasmithContent.DatasmithImportedSequencesActor.PlayLevelSequence
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULevelSequence_LevelSequence* SequenceToPlay                 (Parm, ZeroConstructor, IsPlainOldData)

void ADatasmithContent_DatasmithImportedSequencesActor::PlayLevelSequence(class ULevelSequence_LevelSequence* SequenceToPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function DatasmithContent.DatasmithImportedSequencesActor.PlayLevelSequence");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function DatasmithContent.DatasmithImportedSequencesActor.PlayLevelSequence");

	ADatasmithContent_DatasmithImportedSequencesActor_PlayLevelSequence_Params params;
	params.SequenceToPlay = SequenceToPlay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
