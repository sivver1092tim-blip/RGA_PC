
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

// Function StaticMeshDescription.StaticMeshDescription.SetVertexInstanceUV
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FMeshDescription_VertexInstanceID VertexInstanceID               (Parm)
// struct FVector2D               UV                             (Parm, ZeroConstructor, IsPlainOldData)
// int                            UVIndex                        (Parm, ZeroConstructor, IsPlainOldData)

void UStaticMeshDescription_StaticMeshDescription::SetVertexInstanceUV(const struct FMeshDescription_VertexInstanceID& VertexInstanceID, const struct FVector2D& UV, int UVIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function StaticMeshDescription.StaticMeshDescription.SetVertexInstanceUV");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function StaticMeshDescription.StaticMeshDescription.SetVertexInstanceUV");

	UStaticMeshDescription_StaticMeshDescription_SetVertexInstanceUV_Params params;
	params.VertexInstanceID = VertexInstanceID;
	params.UV = UV;
	params.UVIndex = UVIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StaticMeshDescription.StaticMeshDescription.SetPolygonGroupMaterialSlotName
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMeshDescription_PolygonGroupID PolygonGroupID                 (Parm)
// struct FName                   SlotName                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UStaticMeshDescription_StaticMeshDescription::SetPolygonGroupMaterialSlotName(const struct FMeshDescription_PolygonGroupID& PolygonGroupID, const struct FName& SlotName)
{
	static auto fn = UObject::FindObject<UFunction>("Function StaticMeshDescription.StaticMeshDescription.SetPolygonGroupMaterialSlotName");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function StaticMeshDescription.StaticMeshDescription.SetPolygonGroupMaterialSlotName");

	UStaticMeshDescription_StaticMeshDescription_SetPolygonGroupMaterialSlotName_Params params;
	params.PolygonGroupID = PolygonGroupID;
	params.SlotName = SlotName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StaticMeshDescription.StaticMeshDescription.GetVertexInstanceUV
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_VertexInstanceID VertexInstanceID               (Parm)
// int                            UVIndex                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D UStaticMeshDescription_StaticMeshDescription::GetVertexInstanceUV(const struct FMeshDescription_VertexInstanceID& VertexInstanceID, int UVIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function StaticMeshDescription.StaticMeshDescription.GetVertexInstanceUV");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function StaticMeshDescription.StaticMeshDescription.GetVertexInstanceUV");

	UStaticMeshDescription_StaticMeshDescription_GetVertexInstanceUV_Params params;
	params.VertexInstanceID = VertexInstanceID;
	params.UVIndex = UVIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StaticMeshDescription.StaticMeshDescription.CreateCube
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Center                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HalfExtents                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FMeshDescription_PolygonGroupID PolygonGroup                   (Parm)
// struct FMeshDescription_PolygonID PolygonID_PlusX                (Parm, OutParm)
// struct FMeshDescription_PolygonID PolygonID_MinusX               (Parm, OutParm)
// struct FMeshDescription_PolygonID PolygonID_PlusY                (Parm, OutParm)
// struct FMeshDescription_PolygonID PolygonID_MinusY               (Parm, OutParm)
// struct FMeshDescription_PolygonID PolygonID_PlusZ                (Parm, OutParm)
// struct FMeshDescription_PolygonID PolygonID_MinusZ               (Parm, OutParm)

void UStaticMeshDescription_StaticMeshDescription::CreateCube(const struct FVector& Center, const struct FVector& HalfExtents, const struct FMeshDescription_PolygonGroupID& PolygonGroup, struct FMeshDescription_PolygonID* PolygonID_PlusX, struct FMeshDescription_PolygonID* PolygonID_MinusX, struct FMeshDescription_PolygonID* PolygonID_PlusY, struct FMeshDescription_PolygonID* PolygonID_MinusY, struct FMeshDescription_PolygonID* PolygonID_PlusZ, struct FMeshDescription_PolygonID* PolygonID_MinusZ)
{
	static auto fn = UObject::FindObject<UFunction>("Function StaticMeshDescription.StaticMeshDescription.CreateCube");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function StaticMeshDescription.StaticMeshDescription.CreateCube");

	UStaticMeshDescription_StaticMeshDescription_CreateCube_Params params;
	params.Center = Center;
	params.HalfExtents = HalfExtents;
	params.PolygonGroup = PolygonGroup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PolygonID_PlusX != nullptr)
		*PolygonID_PlusX = params.PolygonID_PlusX;
	if (PolygonID_MinusX != nullptr)
		*PolygonID_MinusX = params.PolygonID_MinusX;
	if (PolygonID_PlusY != nullptr)
		*PolygonID_PlusY = params.PolygonID_PlusY;
	if (PolygonID_MinusY != nullptr)
		*PolygonID_MinusY = params.PolygonID_MinusY;
	if (PolygonID_PlusZ != nullptr)
		*PolygonID_PlusZ = params.PolygonID_PlusZ;
	if (PolygonID_MinusZ != nullptr)
		*PolygonID_MinusZ = params.PolygonID_MinusZ;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
