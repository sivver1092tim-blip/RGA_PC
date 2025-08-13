
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

// Function VariantManagerContent.LevelVariantSets.GetVariantSetByName
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 VariantSetName                 (Parm, ZeroConstructor)
// class UVariantManagerContent_VariantSet* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UVariantManagerContent_VariantSet* UVariantManagerContent_LevelVariantSets::GetVariantSetByName(const struct FString& VariantSetName)
{
	static auto fn = UObject::FindObject<UFunction>("Function VariantManagerContent.LevelVariantSets.GetVariantSetByName");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function VariantManagerContent.LevelVariantSets.GetVariantSetByName");

	UVariantManagerContent_LevelVariantSets_GetVariantSetByName_Params params;
	params.VariantSetName = VariantSetName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VariantManagerContent.LevelVariantSets.GetVariantSet
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            VariantSetIndex                (Parm, ZeroConstructor, IsPlainOldData)
// class UVariantManagerContent_VariantSet* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UVariantManagerContent_VariantSet* UVariantManagerContent_LevelVariantSets::GetVariantSet(int VariantSetIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function VariantManagerContent.LevelVariantSets.GetVariantSet");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function VariantManagerContent.LevelVariantSets.GetVariantSet");

	UVariantManagerContent_LevelVariantSets_GetVariantSet_Params params;
	params.VariantSetIndex = VariantSetIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VariantManagerContent.LevelVariantSets.GetNumVariantSets
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UVariantManagerContent_LevelVariantSets::GetNumVariantSets()
{
	static auto fn = UObject::FindObject<UFunction>("Function VariantManagerContent.LevelVariantSets.GetNumVariantSets");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function VariantManagerContent.LevelVariantSets.GetNumVariantSets");

	UVariantManagerContent_LevelVariantSets_GetNumVariantSets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 VariantSetName                 (Parm, ZeroConstructor)
// struct FString                 VariantName                    (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AVariantManagerContent_LevelVariantSetsActor::SwitchOnVariantByName(const struct FString& VariantSetName, const struct FString& VariantName)
{
	static auto fn = UObject::FindObject<UFunction>("Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByName");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByName");

	AVariantManagerContent_LevelVariantSetsActor_SwitchOnVariantByName_Params params;
	params.VariantSetName = VariantSetName;
	params.VariantName = VariantName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            VariantSetIndex                (Parm, ZeroConstructor, IsPlainOldData)
// int                            VariantIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AVariantManagerContent_LevelVariantSetsActor::SwitchOnVariantByIndex(int VariantSetIndex, int VariantIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByIndex");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByIndex");

	AVariantManagerContent_LevelVariantSetsActor_SwitchOnVariantByIndex_Params params;
	params.VariantSetIndex = VariantSetIndex;
	params.VariantIndex = VariantIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VariantManagerContent.LevelVariantSetsActor.SetLevelVariantSets
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVariantManagerContent_LevelVariantSets* InVariantSets                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AVariantManagerContent_LevelVariantSetsActor::SetLevelVariantSets(class UVariantManagerContent_LevelVariantSets* InVariantSets)
{
	static auto fn = UObject::FindObject<UFunction>("Function VariantManagerContent.LevelVariantSetsActor.SetLevelVariantSets");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function VariantManagerContent.LevelVariantSetsActor.SetLevelVariantSets");

	AVariantManagerContent_LevelVariantSetsActor_SetLevelVariantSets_Params params;
	params.InVariantSets = InVariantSets;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VariantManagerContent.LevelVariantSetsActor.GetLevelVariantSets
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bLoad                          (Parm, ZeroConstructor, IsPlainOldData)
// class UVariantManagerContent_LevelVariantSets* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UVariantManagerContent_LevelVariantSets* AVariantManagerContent_LevelVariantSetsActor::GetLevelVariantSets(bool bLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function VariantManagerContent.LevelVariantSetsActor.GetLevelVariantSets");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function VariantManagerContent.LevelVariantSetsActor.GetLevelVariantSets");

	AVariantManagerContent_LevelVariantSetsActor_GetLevelVariantSets_Params params;
	params.bLoad = bLoad;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VariantManagerContent.PropertyValue.HasRecordedData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVariantManagerContent_PropertyValue::HasRecordedData()
{
	static auto fn = UObject::FindObject<UFunction>("Function VariantManagerContent.PropertyValue.HasRecordedData");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function VariantManagerContent.PropertyValue.HasRecordedData");

	UVariantManagerContent_PropertyValue_HasRecordedData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VariantManagerContent.PropertyValue.GetPropertyTooltip
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UVariantManagerContent_PropertyValue::GetPropertyTooltip()
{
	static auto fn = UObject::FindObject<UFunction>("Function VariantManagerContent.PropertyValue.GetPropertyTooltip");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function VariantManagerContent.PropertyValue.GetPropertyTooltip");

	UVariantManagerContent_PropertyValue_GetPropertyTooltip_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VariantManagerContent.PropertyValue.GetFullDisplayString
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UVariantManagerContent_PropertyValue::GetFullDisplayString()
{
	static auto fn = UObject::FindObject<UFunction>("Function VariantManagerContent.PropertyValue.GetFullDisplayString");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function VariantManagerContent.PropertyValue.GetFullDisplayString");

	UVariantManagerContent_PropertyValue_GetFullDisplayString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VariantManagerContent.SwitchActor.SelectOption
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            OptionIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void AVariantManagerContent_SwitchActor::SelectOption(int OptionIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function VariantManagerContent.SwitchActor.SelectOption");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function VariantManagerContent.SwitchActor.SelectOption");

	AVariantManagerContent_SwitchActor_SelectOption_Params params;
	params.OptionIndex = OptionIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VariantManagerContent.SwitchActor.GetSelectedOption
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AVariantManagerContent_SwitchActor::GetSelectedOption()
{
	static auto fn = UObject::FindObject<UFunction>("Function VariantManagerContent.SwitchActor.GetSelectedOption");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function VariantManagerContent.SwitchActor.GetSelectedOption");

	AVariantManagerContent_SwitchActor_GetSelectedOption_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VariantManagerContent.SwitchActor.GetOptions
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AEngine_Actor*>   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AEngine_Actor*> AVariantManagerContent_SwitchActor::GetOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function VariantManagerContent.SwitchActor.GetOptions");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function VariantManagerContent.SwitchActor.GetOptions");

	AVariantManagerContent_SwitchActor_GetOptions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VariantManagerContent.Variant.SwitchOn
// (Final, Native, Public, BlueprintCallable)

void UVariantManagerContent_Variant::SwitchOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.SwitchOn");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.SwitchOn");

	UVariantManagerContent_Variant_SwitchOn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VariantManagerContent.Variant.SetDisplayText
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FText                   NewDisplayText                 (ConstParm, Parm, OutParm, ReferenceParm)

void UVariantManagerContent_Variant::SetDisplayText(const struct FText& NewDisplayText)
{
	static auto fn = UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.SetDisplayText");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.SetDisplayText");

	UVariantManagerContent_Variant_SetDisplayText_Params params;
	params.NewDisplayText = NewDisplayText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VariantManagerContent.Variant.GetNumActors
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UVariantManagerContent_Variant::GetNumActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.GetNumActors");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.GetNumActors");

	UVariantManagerContent_Variant_GetNumActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VariantManagerContent.Variant.GetDisplayText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UVariantManagerContent_Variant::GetDisplayText()
{
	static auto fn = UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.GetDisplayText");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.GetDisplayText");

	UVariantManagerContent_Variant_GetDisplayText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VariantManagerContent.Variant.GetActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ActorIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// class AEngine_Actor*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AEngine_Actor* UVariantManagerContent_Variant::GetActor(int ActorIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.GetActor");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.GetActor");

	UVariantManagerContent_Variant_GetActor_Params params;
	params.ActorIndex = ActorIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VariantManagerContent.VariantSet.SetDisplayText
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FText                   NewDisplayText                 (ConstParm, Parm, OutParm, ReferenceParm)

void UVariantManagerContent_VariantSet::SetDisplayText(const struct FText& NewDisplayText)
{
	static auto fn = UObject::FindObject<UFunction>("Function VariantManagerContent.VariantSet.SetDisplayText");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function VariantManagerContent.VariantSet.SetDisplayText");

	UVariantManagerContent_VariantSet_SetDisplayText_Params params;
	params.NewDisplayText = NewDisplayText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VariantManagerContent.VariantSet.GetVariantByName
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 VariantName                    (Parm, ZeroConstructor)
// class UVariantManagerContent_Variant* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UVariantManagerContent_Variant* UVariantManagerContent_VariantSet::GetVariantByName(const struct FString& VariantName)
{
	static auto fn = UObject::FindObject<UFunction>("Function VariantManagerContent.VariantSet.GetVariantByName");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function VariantManagerContent.VariantSet.GetVariantByName");

	UVariantManagerContent_VariantSet_GetVariantByName_Params params;
	params.VariantName = VariantName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VariantManagerContent.VariantSet.GetVariant
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            VariantIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// class UVariantManagerContent_Variant* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UVariantManagerContent_Variant* UVariantManagerContent_VariantSet::GetVariant(int VariantIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function VariantManagerContent.VariantSet.GetVariant");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function VariantManagerContent.VariantSet.GetVariant");

	UVariantManagerContent_VariantSet_GetVariant_Params params;
	params.VariantIndex = VariantIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VariantManagerContent.VariantSet.GetNumVariants
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UVariantManagerContent_VariantSet::GetNumVariants()
{
	static auto fn = UObject::FindObject<UFunction>("Function VariantManagerContent.VariantSet.GetNumVariants");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function VariantManagerContent.VariantSet.GetNumVariants");

	UVariantManagerContent_VariantSet_GetNumVariants_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VariantManagerContent.VariantSet.GetDisplayText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UVariantManagerContent_VariantSet::GetDisplayText()
{
	static auto fn = UObject::FindObject<UFunction>("Function VariantManagerContent.VariantSet.GetDisplayText");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function VariantManagerContent.VariantSet.GetDisplayText");

	UVariantManagerContent_VariantSet_GetDisplayText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
