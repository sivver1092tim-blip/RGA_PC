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

// Function VariantManagerContent.LevelVariantSets.GetVariantSetByName
struct UVariantManagerContent_LevelVariantSets_GetVariantSetByName_Params
{
	struct FString                                     VariantSetName;                                           // (Parm, ZeroConstructor)
	class UVariantManagerContent_VariantSet*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VariantManagerContent.LevelVariantSets.GetVariantSet
struct UVariantManagerContent_LevelVariantSets_GetVariantSet_Params
{
	int                                                VariantSetIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UVariantManagerContent_VariantSet*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VariantManagerContent.LevelVariantSets.GetNumVariantSets
struct UVariantManagerContent_LevelVariantSets_GetNumVariantSets_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByName
struct AVariantManagerContent_LevelVariantSetsActor_SwitchOnVariantByName_Params
{
	struct FString                                     VariantSetName;                                           // (Parm, ZeroConstructor)
	struct FString                                     VariantName;                                              // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByIndex
struct AVariantManagerContent_LevelVariantSetsActor_SwitchOnVariantByIndex_Params
{
	int                                                VariantSetIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                VariantIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VariantManagerContent.LevelVariantSetsActor.SetLevelVariantSets
struct AVariantManagerContent_LevelVariantSetsActor_SetLevelVariantSets_Params
{
	class UVariantManagerContent_LevelVariantSets*     InVariantSets;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function VariantManagerContent.LevelVariantSetsActor.GetLevelVariantSets
struct AVariantManagerContent_LevelVariantSetsActor_GetLevelVariantSets_Params
{
	bool                                               bLoad;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UVariantManagerContent_LevelVariantSets*     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function VariantManagerContent.PropertyValue.HasRecordedData
struct UVariantManagerContent_PropertyValue_HasRecordedData_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VariantManagerContent.PropertyValue.GetPropertyTooltip
struct UVariantManagerContent_PropertyValue_GetPropertyTooltip_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function VariantManagerContent.PropertyValue.GetFullDisplayString
struct UVariantManagerContent_PropertyValue_GetFullDisplayString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function VariantManagerContent.SwitchActor.SelectOption
struct AVariantManagerContent_SwitchActor_SelectOption_Params
{
	int                                                OptionIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VariantManagerContent.SwitchActor.GetSelectedOption
struct AVariantManagerContent_SwitchActor_GetSelectedOption_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VariantManagerContent.SwitchActor.GetOptions
struct AVariantManagerContent_SwitchActor_GetOptions_Params
{
	TArray<class AEngine_Actor*>                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function VariantManagerContent.Variant.SwitchOn
struct UVariantManagerContent_Variant_SwitchOn_Params
{
};

// Function VariantManagerContent.Variant.SetDisplayText
struct UVariantManagerContent_Variant_SetDisplayText_Params
{
	struct FText                                       NewDisplayText;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VariantManagerContent.Variant.GetNumActors
struct UVariantManagerContent_Variant_GetNumActors_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VariantManagerContent.Variant.GetDisplayText
struct UVariantManagerContent_Variant_GetDisplayText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function VariantManagerContent.Variant.GetActor
struct UVariantManagerContent_Variant_GetActor_Params
{
	int                                                ActorIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AEngine_Actor*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VariantManagerContent.VariantSet.SetDisplayText
struct UVariantManagerContent_VariantSet_SetDisplayText_Params
{
	struct FText                                       NewDisplayText;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VariantManagerContent.VariantSet.GetVariantByName
struct UVariantManagerContent_VariantSet_GetVariantByName_Params
{
	struct FString                                     VariantName;                                              // (Parm, ZeroConstructor)
	class UVariantManagerContent_Variant*              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function VariantManagerContent.VariantSet.GetVariant
struct UVariantManagerContent_VariantSet_GetVariant_Params
{
	int                                                VariantIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UVariantManagerContent_Variant*              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function VariantManagerContent.VariantSet.GetNumVariants
struct UVariantManagerContent_VariantSet_GetNumVariants_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VariantManagerContent.VariantSet.GetDisplayText
struct UVariantManagerContent_VariantSet_GetDisplayText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
