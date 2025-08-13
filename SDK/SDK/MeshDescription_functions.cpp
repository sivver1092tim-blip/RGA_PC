
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

// Function MeshDescription.MeshDescriptionBase.SetVertexPosition
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FMeshDescription_VertexID VertexID                       (Parm)
// struct FVector                 Position                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UMeshDescription_MeshDescriptionBase::SetVertexPosition(const struct FMeshDescription_VertexID& VertexID, const struct FVector& Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.SetVertexPosition");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.SetVertexPosition");

	UMeshDescription_MeshDescriptionBase_SetVertexPosition_Params params;
	params.VertexID = VertexID;
	params.Position = Position;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeshDescription.MeshDescriptionBase.SetPolygonVertexInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMeshDescription_PolygonID PolygonID                      (Parm)
// int                            PerimeterIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FMeshDescription_VertexInstanceID VertexInstanceID               (Parm)

void UMeshDescription_MeshDescriptionBase::SetPolygonVertexInstance(const struct FMeshDescription_PolygonID& PolygonID, int PerimeterIndex, const struct FMeshDescription_VertexInstanceID& VertexInstanceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.SetPolygonVertexInstance");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.SetPolygonVertexInstance");

	UMeshDescription_MeshDescriptionBase_SetPolygonVertexInstance_Params params;
	params.PolygonID = PolygonID;
	params.PerimeterIndex = PerimeterIndex;
	params.VertexInstanceID = VertexInstanceID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeshDescription.MeshDescriptionBase.SetPolygonPolygonGroup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMeshDescription_PolygonID PolygonID                      (Parm)
// struct FMeshDescription_PolygonGroupID PolygonGroupID                 (Parm)

void UMeshDescription_MeshDescriptionBase::SetPolygonPolygonGroup(const struct FMeshDescription_PolygonID& PolygonID, const struct FMeshDescription_PolygonGroupID& PolygonGroupID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.SetPolygonPolygonGroup");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.SetPolygonPolygonGroup");

	UMeshDescription_MeshDescriptionBase_SetPolygonPolygonGroup_Params params;
	params.PolygonID = PolygonID;
	params.PolygonGroupID = PolygonGroupID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeshDescription.MeshDescriptionBase.ReversePolygonFacing
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMeshDescription_PolygonID PolygonID                      (Parm)

void UMeshDescription_MeshDescriptionBase::ReversePolygonFacing(const struct FMeshDescription_PolygonID& PolygonID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.ReversePolygonFacing");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.ReversePolygonFacing");

	UMeshDescription_MeshDescriptionBase_ReversePolygonFacing_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeshDescription.MeshDescriptionBase.ReserveNewVertices
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            NumberOfNewVertices            (Parm, ZeroConstructor, IsPlainOldData)

void UMeshDescription_MeshDescriptionBase::ReserveNewVertices(int NumberOfNewVertices)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.ReserveNewVertices");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.ReserveNewVertices");

	UMeshDescription_MeshDescriptionBase_ReserveNewVertices_Params params;
	params.NumberOfNewVertices = NumberOfNewVertices;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeshDescription.MeshDescriptionBase.ReserveNewVertexInstances
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            NumberOfNewVertexInstances     (Parm, ZeroConstructor, IsPlainOldData)

void UMeshDescription_MeshDescriptionBase::ReserveNewVertexInstances(int NumberOfNewVertexInstances)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.ReserveNewVertexInstances");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.ReserveNewVertexInstances");

	UMeshDescription_MeshDescriptionBase_ReserveNewVertexInstances_Params params;
	params.NumberOfNewVertexInstances = NumberOfNewVertexInstances;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeshDescription.MeshDescriptionBase.ReserveNewTriangles
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            NumberOfNewTriangles           (Parm, ZeroConstructor, IsPlainOldData)

void UMeshDescription_MeshDescriptionBase::ReserveNewTriangles(int NumberOfNewTriangles)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.ReserveNewTriangles");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.ReserveNewTriangles");

	UMeshDescription_MeshDescriptionBase_ReserveNewTriangles_Params params;
	params.NumberOfNewTriangles = NumberOfNewTriangles;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeshDescription.MeshDescriptionBase.ReserveNewPolygons
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            NumberOfNewPolygons            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UMeshDescription_MeshDescriptionBase::ReserveNewPolygons(int NumberOfNewPolygons)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.ReserveNewPolygons");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.ReserveNewPolygons");

	UMeshDescription_MeshDescriptionBase_ReserveNewPolygons_Params params;
	params.NumberOfNewPolygons = NumberOfNewPolygons;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeshDescription.MeshDescriptionBase.ReserveNewPolygonGroups
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            NumberOfNewPolygonGroups       (Parm, ZeroConstructor, IsPlainOldData)

void UMeshDescription_MeshDescriptionBase::ReserveNewPolygonGroups(int NumberOfNewPolygonGroups)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.ReserveNewPolygonGroups");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.ReserveNewPolygonGroups");

	UMeshDescription_MeshDescriptionBase_ReserveNewPolygonGroups_Params params;
	params.NumberOfNewPolygonGroups = NumberOfNewPolygonGroups;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeshDescription.MeshDescriptionBase.ReserveNewEdges
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            NumberOfNewEdges               (Parm, ZeroConstructor, IsPlainOldData)

void UMeshDescription_MeshDescriptionBase::ReserveNewEdges(int NumberOfNewEdges)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.ReserveNewEdges");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.ReserveNewEdges");

	UMeshDescription_MeshDescriptionBase_ReserveNewEdges_Params params;
	params.NumberOfNewEdges = NumberOfNewEdges;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeshDescription.MeshDescriptionBase.IsVertexValid
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_VertexID VertexID                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMeshDescription_MeshDescriptionBase::IsVertexValid(const struct FMeshDescription_VertexID& VertexID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.IsVertexValid");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.IsVertexValid");

	UMeshDescription_MeshDescriptionBase_IsVertexValid_Params params;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.IsVertexOrphaned
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_VertexID VertexID                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMeshDescription_MeshDescriptionBase::IsVertexOrphaned(const struct FMeshDescription_VertexID& VertexID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.IsVertexOrphaned");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.IsVertexOrphaned");

	UMeshDescription_MeshDescriptionBase_IsVertexOrphaned_Params params;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.IsVertexInstanceValid
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_VertexInstanceID VertexInstanceID               (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMeshDescription_MeshDescriptionBase::IsVertexInstanceValid(const struct FMeshDescription_VertexInstanceID& VertexInstanceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.IsVertexInstanceValid");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.IsVertexInstanceValid");

	UMeshDescription_MeshDescriptionBase_IsVertexInstanceValid_Params params;
	params.VertexInstanceID = VertexInstanceID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.IsTriangleValid
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_TriangleID TriangleID                     (ConstParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMeshDescription_MeshDescriptionBase::IsTriangleValid(const struct FMeshDescription_TriangleID& TriangleID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.IsTriangleValid");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.IsTriangleValid");

	UMeshDescription_MeshDescriptionBase_IsTriangleValid_Params params;
	params.TriangleID = TriangleID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.IsTrianglePartOfNgon
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_TriangleID TriangleID                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMeshDescription_MeshDescriptionBase::IsTrianglePartOfNgon(const struct FMeshDescription_TriangleID& TriangleID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.IsTrianglePartOfNgon");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.IsTrianglePartOfNgon");

	UMeshDescription_MeshDescriptionBase_IsTrianglePartOfNgon_Params params;
	params.TriangleID = TriangleID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.IsPolygonValid
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_PolygonID PolygonID                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMeshDescription_MeshDescriptionBase::IsPolygonValid(const struct FMeshDescription_PolygonID& PolygonID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.IsPolygonValid");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.IsPolygonValid");

	UMeshDescription_MeshDescriptionBase_IsPolygonValid_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.IsPolygonGroupValid
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_PolygonGroupID PolygonGroupID                 (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMeshDescription_MeshDescriptionBase::IsPolygonGroupValid(const struct FMeshDescription_PolygonGroupID& PolygonGroupID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.IsPolygonGroupValid");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.IsPolygonGroupValid");

	UMeshDescription_MeshDescriptionBase_IsPolygonGroupValid_Params params;
	params.PolygonGroupID = PolygonGroupID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.IsEmpty
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMeshDescription_MeshDescriptionBase::IsEmpty()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.IsEmpty");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.IsEmpty");

	UMeshDescription_MeshDescriptionBase_IsEmpty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.IsEdgeValid
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_EdgeID EdgeID                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMeshDescription_MeshDescriptionBase::IsEdgeValid(const struct FMeshDescription_EdgeID& EdgeID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.IsEdgeValid");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.IsEdgeValid");

	UMeshDescription_MeshDescriptionBase_IsEdgeValid_Params params;
	params.EdgeID = EdgeID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.IsEdgeInternalToPolygon
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_EdgeID EdgeID                         (Parm)
// struct FMeshDescription_PolygonID PolygonID                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMeshDescription_MeshDescriptionBase::IsEdgeInternalToPolygon(const struct FMeshDescription_EdgeID& EdgeID, const struct FMeshDescription_PolygonID& PolygonID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.IsEdgeInternalToPolygon");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.IsEdgeInternalToPolygon");

	UMeshDescription_MeshDescriptionBase_IsEdgeInternalToPolygon_Params params;
	params.EdgeID = EdgeID;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.IsEdgeInternal
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_EdgeID EdgeID                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMeshDescription_MeshDescriptionBase::IsEdgeInternal(const struct FMeshDescription_EdgeID& EdgeID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.IsEdgeInternal");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.IsEdgeInternal");

	UMeshDescription_MeshDescriptionBase_IsEdgeInternal_Params params;
	params.EdgeID = EdgeID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetVertexVertexInstances
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_VertexID VertexID                       (Parm)
// TArray<struct FMeshDescription_VertexInstanceID> OutVertexInstanceIDs           (Parm, OutParm, ZeroConstructor)

void UMeshDescription_MeshDescriptionBase::GetVertexVertexInstances(const struct FMeshDescription_VertexID& VertexID, TArray<struct FMeshDescription_VertexInstanceID>* OutVertexInstanceIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetVertexVertexInstances");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetVertexVertexInstances");

	UMeshDescription_MeshDescriptionBase_GetVertexVertexInstances_Params params;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVertexInstanceIDs != nullptr)
		*OutVertexInstanceIDs = params.OutVertexInstanceIDs;
}


// Function MeshDescription.MeshDescriptionBase.GetVertexPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_VertexID VertexID                       (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UMeshDescription_MeshDescriptionBase::GetVertexPosition(const struct FMeshDescription_VertexID& VertexID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetVertexPosition");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetVertexPosition");

	UMeshDescription_MeshDescriptionBase_GetVertexPosition_Params params;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetVertexPairEdge
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_VertexID VertexID0                      (Parm)
// struct FMeshDescription_VertexID VertexID1                      (Parm)
// struct FMeshDescription_EdgeID ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMeshDescription_EdgeID UMeshDescription_MeshDescriptionBase::GetVertexPairEdge(const struct FMeshDescription_VertexID& VertexID0, const struct FMeshDescription_VertexID& VertexID1)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetVertexPairEdge");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetVertexPairEdge");

	UMeshDescription_MeshDescriptionBase_GetVertexPairEdge_Params params;
	params.VertexID0 = VertexID0;
	params.VertexID1 = VertexID1;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceVertex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_VertexInstanceID VertexInstanceID               (Parm)
// struct FMeshDescription_VertexID ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMeshDescription_VertexID UMeshDescription_MeshDescriptionBase::GetVertexInstanceVertex(const struct FMeshDescription_VertexInstanceID& VertexInstanceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetVertexInstanceVertex");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetVertexInstanceVertex");

	UMeshDescription_MeshDescriptionBase_GetVertexInstanceVertex_Params params;
	params.VertexInstanceID = VertexInstanceID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetVertexInstancePairEdge
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_VertexInstanceID VertexInstanceID0              (Parm)
// struct FMeshDescription_VertexInstanceID VertexInstanceID1              (Parm)
// struct FMeshDescription_EdgeID ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMeshDescription_EdgeID UMeshDescription_MeshDescriptionBase::GetVertexInstancePairEdge(const struct FMeshDescription_VertexInstanceID& VertexInstanceID0, const struct FMeshDescription_VertexInstanceID& VertexInstanceID1)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetVertexInstancePairEdge");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetVertexInstancePairEdge");

	UMeshDescription_MeshDescriptionBase_GetVertexInstancePairEdge_Params params;
	params.VertexInstanceID0 = VertexInstanceID0;
	params.VertexInstanceID1 = VertexInstanceID1;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForTriangleVertex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_TriangleID TriangleID                     (Parm)
// struct FMeshDescription_VertexID VertexID                       (Parm)
// struct FMeshDescription_VertexInstanceID ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMeshDescription_VertexInstanceID UMeshDescription_MeshDescriptionBase::GetVertexInstanceForTriangleVertex(const struct FMeshDescription_TriangleID& TriangleID, const struct FMeshDescription_VertexID& VertexID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForTriangleVertex");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForTriangleVertex");

	UMeshDescription_MeshDescriptionBase_GetVertexInstanceForTriangleVertex_Params params;
	params.TriangleID = TriangleID;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForPolygonVertex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_PolygonID PolygonID                      (Parm)
// struct FMeshDescription_VertexID VertexID                       (Parm)
// struct FMeshDescription_VertexInstanceID ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMeshDescription_VertexInstanceID UMeshDescription_MeshDescriptionBase::GetVertexInstanceForPolygonVertex(const struct FMeshDescription_PolygonID& PolygonID, const struct FMeshDescription_VertexID& VertexID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForPolygonVertex");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForPolygonVertex");

	UMeshDescription_MeshDescriptionBase_GetVertexInstanceForPolygonVertex_Params params;
	params.PolygonID = PolygonID;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedTriangles
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_VertexInstanceID VertexInstanceID               (Parm)
// TArray<struct FMeshDescription_TriangleID> OutConnectedTriangleIDs        (Parm, OutParm, ZeroConstructor)

void UMeshDescription_MeshDescriptionBase::GetVertexInstanceConnectedTriangles(const struct FMeshDescription_VertexInstanceID& VertexInstanceID, TArray<struct FMeshDescription_TriangleID>* OutConnectedTriangleIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedTriangles");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedTriangles");

	UMeshDescription_MeshDescriptionBase_GetVertexInstanceConnectedTriangles_Params params;
	params.VertexInstanceID = VertexInstanceID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutConnectedTriangleIDs != nullptr)
		*OutConnectedTriangleIDs = params.OutConnectedTriangleIDs;
}


// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedPolygons
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_VertexInstanceID VertexInstanceID               (Parm)
// TArray<struct FMeshDescription_PolygonID> OutConnectedPolygonIDs         (Parm, OutParm, ZeroConstructor)

void UMeshDescription_MeshDescriptionBase::GetVertexInstanceConnectedPolygons(const struct FMeshDescription_VertexInstanceID& VertexInstanceID, TArray<struct FMeshDescription_PolygonID>* OutConnectedPolygonIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedPolygons");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedPolygons");

	UMeshDescription_MeshDescriptionBase_GetVertexInstanceConnectedPolygons_Params params;
	params.VertexInstanceID = VertexInstanceID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutConnectedPolygonIDs != nullptr)
		*OutConnectedPolygonIDs = params.OutConnectedPolygonIDs;
}


// Function MeshDescription.MeshDescriptionBase.GetVertexConnectedTriangles
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_VertexID VertexID                       (Parm)
// TArray<struct FMeshDescription_TriangleID> OutConnectedTriangleIDs        (Parm, OutParm, ZeroConstructor)

void UMeshDescription_MeshDescriptionBase::GetVertexConnectedTriangles(const struct FMeshDescription_VertexID& VertexID, TArray<struct FMeshDescription_TriangleID>* OutConnectedTriangleIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetVertexConnectedTriangles");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetVertexConnectedTriangles");

	UMeshDescription_MeshDescriptionBase_GetVertexConnectedTriangles_Params params;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutConnectedTriangleIDs != nullptr)
		*OutConnectedTriangleIDs = params.OutConnectedTriangleIDs;
}


// Function MeshDescription.MeshDescriptionBase.GetVertexConnectedPolygons
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_VertexID VertexID                       (Parm)
// TArray<struct FMeshDescription_PolygonID> OutConnectedPolygonIDs         (Parm, OutParm, ZeroConstructor)

void UMeshDescription_MeshDescriptionBase::GetVertexConnectedPolygons(const struct FMeshDescription_VertexID& VertexID, TArray<struct FMeshDescription_PolygonID>* OutConnectedPolygonIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetVertexConnectedPolygons");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetVertexConnectedPolygons");

	UMeshDescription_MeshDescriptionBase_GetVertexConnectedPolygons_Params params;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutConnectedPolygonIDs != nullptr)
		*OutConnectedPolygonIDs = params.OutConnectedPolygonIDs;
}


// Function MeshDescription.MeshDescriptionBase.GetVertexConnectedEdges
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_VertexID VertexID                       (Parm)
// TArray<struct FMeshDescription_EdgeID> OutEdgeIDs                     (Parm, OutParm, ZeroConstructor)

void UMeshDescription_MeshDescriptionBase::GetVertexConnectedEdges(const struct FMeshDescription_VertexID& VertexID, TArray<struct FMeshDescription_EdgeID>* OutEdgeIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetVertexConnectedEdges");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetVertexConnectedEdges");

	UMeshDescription_MeshDescriptionBase_GetVertexConnectedEdges_Params params;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutEdgeIDs != nullptr)
		*OutEdgeIDs = params.OutEdgeIDs;
}


// Function MeshDescription.MeshDescriptionBase.GetVertexAdjacentVertices
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_VertexID VertexID                       (Parm)
// TArray<struct FMeshDescription_VertexID> OutAdjacentVertexIDs           (Parm, OutParm, ZeroConstructor)

void UMeshDescription_MeshDescriptionBase::GetVertexAdjacentVertices(const struct FMeshDescription_VertexID& VertexID, TArray<struct FMeshDescription_VertexID>* OutAdjacentVertexIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetVertexAdjacentVertices");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetVertexAdjacentVertices");

	UMeshDescription_MeshDescriptionBase_GetVertexAdjacentVertices_Params params;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAdjacentVertexIDs != nullptr)
		*OutAdjacentVertexIDs = params.OutAdjacentVertexIDs;
}


// Function MeshDescription.MeshDescriptionBase.GetTriangleVertices
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_TriangleID TriangleID                     (Parm)
// TArray<struct FMeshDescription_VertexID> OutVertexIDs                   (Parm, OutParm, ZeroConstructor)

void UMeshDescription_MeshDescriptionBase::GetTriangleVertices(const struct FMeshDescription_TriangleID& TriangleID, TArray<struct FMeshDescription_VertexID>* OutVertexIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetTriangleVertices");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetTriangleVertices");

	UMeshDescription_MeshDescriptionBase_GetTriangleVertices_Params params;
	params.TriangleID = TriangleID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVertexIDs != nullptr)
		*OutVertexIDs = params.OutVertexIDs;
}


// Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstances
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_TriangleID TriangleID                     (Parm)
// TArray<struct FMeshDescription_VertexInstanceID> OutVertexInstanceIDs           (Parm, OutParm, ZeroConstructor)

void UMeshDescription_MeshDescriptionBase::GetTriangleVertexInstances(const struct FMeshDescription_TriangleID& TriangleID, TArray<struct FMeshDescription_VertexInstanceID>* OutVertexInstanceIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstances");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstances");

	UMeshDescription_MeshDescriptionBase_GetTriangleVertexInstances_Params params;
	params.TriangleID = TriangleID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVertexInstanceIDs != nullptr)
		*OutVertexInstanceIDs = params.OutVertexInstanceIDs;
}


// Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_TriangleID TriangleID                     (Parm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FMeshDescription_VertexInstanceID ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMeshDescription_VertexInstanceID UMeshDescription_MeshDescriptionBase::GetTriangleVertexInstance(const struct FMeshDescription_TriangleID& TriangleID, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstance");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstance");

	UMeshDescription_MeshDescriptionBase_GetTriangleVertexInstance_Params params;
	params.TriangleID = TriangleID;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetTrianglePolygonGroup
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_TriangleID TriangleID                     (Parm)
// struct FMeshDescription_PolygonGroupID ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMeshDescription_PolygonGroupID UMeshDescription_MeshDescriptionBase::GetTrianglePolygonGroup(const struct FMeshDescription_TriangleID& TriangleID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetTrianglePolygonGroup");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetTrianglePolygonGroup");

	UMeshDescription_MeshDescriptionBase_GetTrianglePolygonGroup_Params params;
	params.TriangleID = TriangleID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetTrianglePolygon
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_TriangleID TriangleID                     (Parm)
// struct FMeshDescription_PolygonID ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMeshDescription_PolygonID UMeshDescription_MeshDescriptionBase::GetTrianglePolygon(const struct FMeshDescription_TriangleID& TriangleID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetTrianglePolygon");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetTrianglePolygon");

	UMeshDescription_MeshDescriptionBase_GetTrianglePolygon_Params params;
	params.TriangleID = TriangleID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetTriangleEdges
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_TriangleID TriangleID                     (Parm)
// TArray<struct FMeshDescription_EdgeID> OutEdgeIDs                     (Parm, OutParm, ZeroConstructor)

void UMeshDescription_MeshDescriptionBase::GetTriangleEdges(const struct FMeshDescription_TriangleID& TriangleID, TArray<struct FMeshDescription_EdgeID>* OutEdgeIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetTriangleEdges");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetTriangleEdges");

	UMeshDescription_MeshDescriptionBase_GetTriangleEdges_Params params;
	params.TriangleID = TriangleID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutEdgeIDs != nullptr)
		*OutEdgeIDs = params.OutEdgeIDs;
}


// Function MeshDescription.MeshDescriptionBase.GetTriangleAdjacentTriangles
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_TriangleID TriangleID                     (Parm)
// TArray<struct FMeshDescription_TriangleID> OutTriangleIDs                 (Parm, OutParm, ZeroConstructor)

void UMeshDescription_MeshDescriptionBase::GetTriangleAdjacentTriangles(const struct FMeshDescription_TriangleID& TriangleID, TArray<struct FMeshDescription_TriangleID>* OutTriangleIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetTriangleAdjacentTriangles");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetTriangleAdjacentTriangles");

	UMeshDescription_MeshDescriptionBase_GetTriangleAdjacentTriangles_Params params;
	params.TriangleID = TriangleID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTriangleIDs != nullptr)
		*OutTriangleIDs = params.OutTriangleIDs;
}


// Function MeshDescription.MeshDescriptionBase.GetPolygonVertices
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_PolygonID PolygonID                      (Parm)
// TArray<struct FMeshDescription_VertexID> OutVertexIDs                   (Parm, OutParm, ZeroConstructor)

void UMeshDescription_MeshDescriptionBase::GetPolygonVertices(const struct FMeshDescription_PolygonID& PolygonID, TArray<struct FMeshDescription_VertexID>* OutVertexIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetPolygonVertices");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetPolygonVertices");

	UMeshDescription_MeshDescriptionBase_GetPolygonVertices_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVertexIDs != nullptr)
		*OutVertexIDs = params.OutVertexIDs;
}


// Function MeshDescription.MeshDescriptionBase.GetPolygonVertexInstances
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_PolygonID PolygonID                      (Parm)
// TArray<struct FMeshDescription_VertexInstanceID> OutVertexInstanceIDs           (Parm, OutParm, ZeroConstructor)

void UMeshDescription_MeshDescriptionBase::GetPolygonVertexInstances(const struct FMeshDescription_PolygonID& PolygonID, TArray<struct FMeshDescription_VertexInstanceID>* OutVertexInstanceIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetPolygonVertexInstances");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetPolygonVertexInstances");

	UMeshDescription_MeshDescriptionBase_GetPolygonVertexInstances_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVertexInstanceIDs != nullptr)
		*OutVertexInstanceIDs = params.OutVertexInstanceIDs;
}


// Function MeshDescription.MeshDescriptionBase.GetPolygonTriangles
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_PolygonID PolygonID                      (Parm)
// TArray<struct FMeshDescription_TriangleID> OutTriangleIDs                 (Parm, OutParm, ZeroConstructor)

void UMeshDescription_MeshDescriptionBase::GetPolygonTriangles(const struct FMeshDescription_PolygonID& PolygonID, TArray<struct FMeshDescription_TriangleID>* OutTriangleIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetPolygonTriangles");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetPolygonTriangles");

	UMeshDescription_MeshDescriptionBase_GetPolygonTriangles_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTriangleIDs != nullptr)
		*OutTriangleIDs = params.OutTriangleIDs;
}


// Function MeshDescription.MeshDescriptionBase.GetPolygonPolygonGroup
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_PolygonID PolygonID                      (Parm)
// struct FMeshDescription_PolygonGroupID ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMeshDescription_PolygonGroupID UMeshDescription_MeshDescriptionBase::GetPolygonPolygonGroup(const struct FMeshDescription_PolygonID& PolygonID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetPolygonPolygonGroup");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetPolygonPolygonGroup");

	UMeshDescription_MeshDescriptionBase_GetPolygonPolygonGroup_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetPolygonPerimeterEdges
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_PolygonID PolygonID                      (Parm)
// TArray<struct FMeshDescription_EdgeID> OutEdgeIDs                     (Parm, OutParm, ZeroConstructor)

void UMeshDescription_MeshDescriptionBase::GetPolygonPerimeterEdges(const struct FMeshDescription_PolygonID& PolygonID, TArray<struct FMeshDescription_EdgeID>* OutEdgeIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetPolygonPerimeterEdges");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetPolygonPerimeterEdges");

	UMeshDescription_MeshDescriptionBase_GetPolygonPerimeterEdges_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutEdgeIDs != nullptr)
		*OutEdgeIDs = params.OutEdgeIDs;
}


// Function MeshDescription.MeshDescriptionBase.GetPolygonInternalEdges
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_PolygonID PolygonID                      (Parm)
// TArray<struct FMeshDescription_EdgeID> OutEdgeIDs                     (Parm, OutParm, ZeroConstructor)

void UMeshDescription_MeshDescriptionBase::GetPolygonInternalEdges(const struct FMeshDescription_PolygonID& PolygonID, TArray<struct FMeshDescription_EdgeID>* OutEdgeIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetPolygonInternalEdges");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetPolygonInternalEdges");

	UMeshDescription_MeshDescriptionBase_GetPolygonInternalEdges_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutEdgeIDs != nullptr)
		*OutEdgeIDs = params.OutEdgeIDs;
}


// Function MeshDescription.MeshDescriptionBase.GetPolygonGroupPolygons
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_PolygonGroupID PolygonGroupID                 (Parm)
// TArray<struct FMeshDescription_PolygonID> OutPolygonIDs                  (Parm, OutParm, ZeroConstructor)

void UMeshDescription_MeshDescriptionBase::GetPolygonGroupPolygons(const struct FMeshDescription_PolygonGroupID& PolygonGroupID, TArray<struct FMeshDescription_PolygonID>* OutPolygonIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetPolygonGroupPolygons");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetPolygonGroupPolygons");

	UMeshDescription_MeshDescriptionBase_GetPolygonGroupPolygons_Params params;
	params.PolygonGroupID = PolygonGroupID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPolygonIDs != nullptr)
		*OutPolygonIDs = params.OutPolygonIDs;
}


// Function MeshDescription.MeshDescriptionBase.GetPolygonAdjacentPolygons
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_PolygonID PolygonID                      (Parm)
// TArray<struct FMeshDescription_PolygonID> OutPolygonIDs                  (Parm, OutParm, ZeroConstructor)

void UMeshDescription_MeshDescriptionBase::GetPolygonAdjacentPolygons(const struct FMeshDescription_PolygonID& PolygonID, TArray<struct FMeshDescription_PolygonID>* OutPolygonIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetPolygonAdjacentPolygons");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetPolygonAdjacentPolygons");

	UMeshDescription_MeshDescriptionBase_GetPolygonAdjacentPolygons_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPolygonIDs != nullptr)
		*OutPolygonIDs = params.OutPolygonIDs;
}


// Function MeshDescription.MeshDescriptionBase.GetNumVertexVertexInstances
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_VertexID VertexID                       (Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMeshDescription_MeshDescriptionBase::GetNumVertexVertexInstances(const struct FMeshDescription_VertexID& VertexID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetNumVertexVertexInstances");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetNumVertexVertexInstances");

	UMeshDescription_MeshDescriptionBase_GetNumVertexVertexInstances_Params params;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedTriangles
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_VertexInstanceID VertexInstanceID               (Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMeshDescription_MeshDescriptionBase::GetNumVertexInstanceConnectedTriangles(const struct FMeshDescription_VertexInstanceID& VertexInstanceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedTriangles");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedTriangles");

	UMeshDescription_MeshDescriptionBase_GetNumVertexInstanceConnectedTriangles_Params params;
	params.VertexInstanceID = VertexInstanceID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedPolygons
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_VertexInstanceID VertexInstanceID               (Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMeshDescription_MeshDescriptionBase::GetNumVertexInstanceConnectedPolygons(const struct FMeshDescription_VertexInstanceID& VertexInstanceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedPolygons");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedPolygons");

	UMeshDescription_MeshDescriptionBase_GetNumVertexInstanceConnectedPolygons_Params params;
	params.VertexInstanceID = VertexInstanceID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedTriangles
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_VertexID VertexID                       (Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMeshDescription_MeshDescriptionBase::GetNumVertexConnectedTriangles(const struct FMeshDescription_VertexID& VertexID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedTriangles");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedTriangles");

	UMeshDescription_MeshDescriptionBase_GetNumVertexConnectedTriangles_Params params;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedPolygons
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_VertexID VertexID                       (Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMeshDescription_MeshDescriptionBase::GetNumVertexConnectedPolygons(const struct FMeshDescription_VertexID& VertexID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedPolygons");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedPolygons");

	UMeshDescription_MeshDescriptionBase_GetNumVertexConnectedPolygons_Params params;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedEdges
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_VertexID VertexID                       (Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMeshDescription_MeshDescriptionBase::GetNumVertexConnectedEdges(const struct FMeshDescription_VertexID& VertexID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedEdges");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedEdges");

	UMeshDescription_MeshDescriptionBase_GetNumVertexConnectedEdges_Params params;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetNumPolygonVertices
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_PolygonID PolygonID                      (Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMeshDescription_MeshDescriptionBase::GetNumPolygonVertices(const struct FMeshDescription_PolygonID& PolygonID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetNumPolygonVertices");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetNumPolygonVertices");

	UMeshDescription_MeshDescriptionBase_GetNumPolygonVertices_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetNumPolygonTriangles
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_PolygonID PolygonID                      (Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMeshDescription_MeshDescriptionBase::GetNumPolygonTriangles(const struct FMeshDescription_PolygonID& PolygonID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetNumPolygonTriangles");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetNumPolygonTriangles");

	UMeshDescription_MeshDescriptionBase_GetNumPolygonTriangles_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetNumPolygonInternalEdges
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_PolygonID PolygonID                      (Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMeshDescription_MeshDescriptionBase::GetNumPolygonInternalEdges(const struct FMeshDescription_PolygonID& PolygonID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetNumPolygonInternalEdges");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetNumPolygonInternalEdges");

	UMeshDescription_MeshDescriptionBase_GetNumPolygonInternalEdges_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetNumPolygonGroupPolygons
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_PolygonGroupID PolygonGroupID                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMeshDescription_MeshDescriptionBase::GetNumPolygonGroupPolygons(const struct FMeshDescription_PolygonGroupID& PolygonGroupID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetNumPolygonGroupPolygons");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetNumPolygonGroupPolygons");

	UMeshDescription_MeshDescriptionBase_GetNumPolygonGroupPolygons_Params params;
	params.PolygonGroupID = PolygonGroupID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedTriangles
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_EdgeID EdgeID                         (Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMeshDescription_MeshDescriptionBase::GetNumEdgeConnectedTriangles(const struct FMeshDescription_EdgeID& EdgeID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedTriangles");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedTriangles");

	UMeshDescription_MeshDescriptionBase_GetNumEdgeConnectedTriangles_Params params;
	params.EdgeID = EdgeID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedPolygons
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_EdgeID EdgeID                         (Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMeshDescription_MeshDescriptionBase::GetNumEdgeConnectedPolygons(const struct FMeshDescription_EdgeID& EdgeID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedPolygons");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedPolygons");

	UMeshDescription_MeshDescriptionBase_GetNumEdgeConnectedPolygons_Params params;
	params.EdgeID = EdgeID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetEdgeVertices
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_EdgeID EdgeID                         (ConstParm, Parm)
// TArray<struct FMeshDescription_VertexID> OutVertexIDs                   (Parm, OutParm, ZeroConstructor)

void UMeshDescription_MeshDescriptionBase::GetEdgeVertices(const struct FMeshDescription_EdgeID& EdgeID, TArray<struct FMeshDescription_VertexID>* OutVertexIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetEdgeVertices");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetEdgeVertices");

	UMeshDescription_MeshDescriptionBase_GetEdgeVertices_Params params;
	params.EdgeID = EdgeID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVertexIDs != nullptr)
		*OutVertexIDs = params.OutVertexIDs;
}


// Function MeshDescription.MeshDescriptionBase.GetEdgeVertex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_EdgeID EdgeID                         (Parm)
// int                            VertexNumber                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FMeshDescription_VertexID ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMeshDescription_VertexID UMeshDescription_MeshDescriptionBase::GetEdgeVertex(const struct FMeshDescription_EdgeID& EdgeID, int VertexNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetEdgeVertex");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetEdgeVertex");

	UMeshDescription_MeshDescriptionBase_GetEdgeVertex_Params params;
	params.EdgeID = EdgeID;
	params.VertexNumber = VertexNumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedTriangles
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_EdgeID EdgeID                         (Parm)
// TArray<struct FMeshDescription_TriangleID> OutConnectedTriangleIDs        (Parm, OutParm, ZeroConstructor)

void UMeshDescription_MeshDescriptionBase::GetEdgeConnectedTriangles(const struct FMeshDescription_EdgeID& EdgeID, TArray<struct FMeshDescription_TriangleID>* OutConnectedTriangleIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedTriangles");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedTriangles");

	UMeshDescription_MeshDescriptionBase_GetEdgeConnectedTriangles_Params params;
	params.EdgeID = EdgeID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutConnectedTriangleIDs != nullptr)
		*OutConnectedTriangleIDs = params.OutConnectedTriangleIDs;
}


// Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedPolygons
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMeshDescription_EdgeID EdgeID                         (Parm)
// TArray<struct FMeshDescription_PolygonID> OutConnectedPolygonIDs         (Parm, OutParm, ZeroConstructor)

void UMeshDescription_MeshDescriptionBase::GetEdgeConnectedPolygons(const struct FMeshDescription_EdgeID& EdgeID, TArray<struct FMeshDescription_PolygonID>* OutConnectedPolygonIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedPolygons");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedPolygons");

	UMeshDescription_MeshDescriptionBase_GetEdgeConnectedPolygons_Params params;
	params.EdgeID = EdgeID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutConnectedPolygonIDs != nullptr)
		*OutConnectedPolygonIDs = params.OutConnectedPolygonIDs;
}


// Function MeshDescription.MeshDescriptionBase.Empty
// (Final, Native, Public, BlueprintCallable)

void UMeshDescription_MeshDescriptionBase::Empty()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.Empty");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.Empty");

	UMeshDescription_MeshDescriptionBase_Empty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeshDescription.MeshDescriptionBase.DeleteVertexInstance
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMeshDescription_VertexInstanceID VertexInstanceID               (Parm)
// TArray<struct FMeshDescription_VertexID> OrphanedVertices               (Parm, OutParm, ZeroConstructor)

void UMeshDescription_MeshDescriptionBase::DeleteVertexInstance(const struct FMeshDescription_VertexInstanceID& VertexInstanceID, TArray<struct FMeshDescription_VertexID>* OrphanedVertices)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.DeleteVertexInstance");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.DeleteVertexInstance");

	UMeshDescription_MeshDescriptionBase_DeleteVertexInstance_Params params;
	params.VertexInstanceID = VertexInstanceID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OrphanedVertices != nullptr)
		*OrphanedVertices = params.OrphanedVertices;
}


// Function MeshDescription.MeshDescriptionBase.DeleteVertex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMeshDescription_VertexID VertexID                       (Parm)

void UMeshDescription_MeshDescriptionBase::DeleteVertex(const struct FMeshDescription_VertexID& VertexID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.DeleteVertex");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.DeleteVertex");

	UMeshDescription_MeshDescriptionBase_DeleteVertex_Params params;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeshDescription.MeshDescriptionBase.DeleteTriangle
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMeshDescription_TriangleID TriangleID                     (Parm)
// TArray<struct FMeshDescription_EdgeID> OrphanedEdges                  (Parm, OutParm, ZeroConstructor)
// TArray<struct FMeshDescription_VertexInstanceID> OrphanedVertexInstances        (Parm, OutParm, ZeroConstructor)
// TArray<struct FMeshDescription_PolygonGroupID> OrphanedPolygonGroupsPtr       (Parm, OutParm, ZeroConstructor)

void UMeshDescription_MeshDescriptionBase::DeleteTriangle(const struct FMeshDescription_TriangleID& TriangleID, TArray<struct FMeshDescription_EdgeID>* OrphanedEdges, TArray<struct FMeshDescription_VertexInstanceID>* OrphanedVertexInstances, TArray<struct FMeshDescription_PolygonGroupID>* OrphanedPolygonGroupsPtr)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.DeleteTriangle");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.DeleteTriangle");

	UMeshDescription_MeshDescriptionBase_DeleteTriangle_Params params;
	params.TriangleID = TriangleID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OrphanedEdges != nullptr)
		*OrphanedEdges = params.OrphanedEdges;
	if (OrphanedVertexInstances != nullptr)
		*OrphanedVertexInstances = params.OrphanedVertexInstances;
	if (OrphanedPolygonGroupsPtr != nullptr)
		*OrphanedPolygonGroupsPtr = params.OrphanedPolygonGroupsPtr;
}


// Function MeshDescription.MeshDescriptionBase.DeletePolygonGroup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMeshDescription_PolygonGroupID PolygonGroupID                 (Parm)

void UMeshDescription_MeshDescriptionBase::DeletePolygonGroup(const struct FMeshDescription_PolygonGroupID& PolygonGroupID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.DeletePolygonGroup");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.DeletePolygonGroup");

	UMeshDescription_MeshDescriptionBase_DeletePolygonGroup_Params params;
	params.PolygonGroupID = PolygonGroupID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeshDescription.MeshDescriptionBase.DeletePolygon
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMeshDescription_PolygonID PolygonID                      (Parm)
// TArray<struct FMeshDescription_EdgeID> OrphanedEdges                  (Parm, OutParm, ZeroConstructor)
// TArray<struct FMeshDescription_VertexInstanceID> OrphanedVertexInstances        (Parm, OutParm, ZeroConstructor)
// TArray<struct FMeshDescription_PolygonGroupID> OrphanedPolygonGroups          (Parm, OutParm, ZeroConstructor)

void UMeshDescription_MeshDescriptionBase::DeletePolygon(const struct FMeshDescription_PolygonID& PolygonID, TArray<struct FMeshDescription_EdgeID>* OrphanedEdges, TArray<struct FMeshDescription_VertexInstanceID>* OrphanedVertexInstances, TArray<struct FMeshDescription_PolygonGroupID>* OrphanedPolygonGroups)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.DeletePolygon");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.DeletePolygon");

	UMeshDescription_MeshDescriptionBase_DeletePolygon_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OrphanedEdges != nullptr)
		*OrphanedEdges = params.OrphanedEdges;
	if (OrphanedVertexInstances != nullptr)
		*OrphanedVertexInstances = params.OrphanedVertexInstances;
	if (OrphanedPolygonGroups != nullptr)
		*OrphanedPolygonGroups = params.OrphanedPolygonGroups;
}


// Function MeshDescription.MeshDescriptionBase.DeleteEdge
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMeshDescription_EdgeID EdgeID                         (Parm)
// TArray<struct FMeshDescription_VertexID> OrphanedVertices               (Parm, OutParm, ZeroConstructor)

void UMeshDescription_MeshDescriptionBase::DeleteEdge(const struct FMeshDescription_EdgeID& EdgeID, TArray<struct FMeshDescription_VertexID>* OrphanedVertices)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.DeleteEdge");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.DeleteEdge");

	UMeshDescription_MeshDescriptionBase_DeleteEdge_Params params;
	params.EdgeID = EdgeID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OrphanedVertices != nullptr)
		*OrphanedVertices = params.OrphanedVertices;
}


// Function MeshDescription.MeshDescriptionBase.CreateVertexWithID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMeshDescription_VertexID VertexID                       (Parm)

void UMeshDescription_MeshDescriptionBase::CreateVertexWithID(const struct FMeshDescription_VertexID& VertexID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.CreateVertexWithID");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.CreateVertexWithID");

	UMeshDescription_MeshDescriptionBase_CreateVertexWithID_Params params;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeshDescription.MeshDescriptionBase.CreateVertexInstanceWithID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMeshDescription_VertexInstanceID VertexInstanceID               (Parm)
// struct FMeshDescription_VertexID VertexID                       (Parm)

void UMeshDescription_MeshDescriptionBase::CreateVertexInstanceWithID(const struct FMeshDescription_VertexInstanceID& VertexInstanceID, const struct FMeshDescription_VertexID& VertexID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.CreateVertexInstanceWithID");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.CreateVertexInstanceWithID");

	UMeshDescription_MeshDescriptionBase_CreateVertexInstanceWithID_Params params;
	params.VertexInstanceID = VertexInstanceID;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeshDescription.MeshDescriptionBase.CreateVertexInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMeshDescription_VertexID VertexID                       (Parm)
// struct FMeshDescription_VertexInstanceID ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMeshDescription_VertexInstanceID UMeshDescription_MeshDescriptionBase::CreateVertexInstance(const struct FMeshDescription_VertexID& VertexID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.CreateVertexInstance");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.CreateVertexInstance");

	UMeshDescription_MeshDescriptionBase_CreateVertexInstance_Params params;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.CreateVertex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMeshDescription_VertexID ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMeshDescription_VertexID UMeshDescription_MeshDescriptionBase::CreateVertex()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.CreateVertex");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.CreateVertex");

	UMeshDescription_MeshDescriptionBase_CreateVertex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.CreateTriangleWithID
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMeshDescription_TriangleID TriangleID                     (Parm)
// struct FMeshDescription_PolygonGroupID PolygonGroupID                 (Parm)
// TArray<struct FMeshDescription_VertexInstanceID> VertexInstanceIDs              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMeshDescription_EdgeID> NewEdgeIDs                     (Parm, OutParm, ZeroConstructor)

void UMeshDescription_MeshDescriptionBase::CreateTriangleWithID(const struct FMeshDescription_TriangleID& TriangleID, const struct FMeshDescription_PolygonGroupID& PolygonGroupID, TArray<struct FMeshDescription_VertexInstanceID> VertexInstanceIDs, TArray<struct FMeshDescription_EdgeID>* NewEdgeIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.CreateTriangleWithID");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.CreateTriangleWithID");

	UMeshDescription_MeshDescriptionBase_CreateTriangleWithID_Params params;
	params.TriangleID = TriangleID;
	params.PolygonGroupID = PolygonGroupID;
	params.VertexInstanceIDs = VertexInstanceIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewEdgeIDs != nullptr)
		*NewEdgeIDs = params.NewEdgeIDs;
}


// Function MeshDescription.MeshDescriptionBase.CreateTriangle
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMeshDescription_PolygonGroupID PolygonGroupID                 (Parm)
// TArray<struct FMeshDescription_VertexInstanceID> VertexInstanceIDs              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMeshDescription_EdgeID> NewEdgeIDs                     (Parm, OutParm, ZeroConstructor)
// struct FMeshDescription_TriangleID ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMeshDescription_TriangleID UMeshDescription_MeshDescriptionBase::CreateTriangle(const struct FMeshDescription_PolygonGroupID& PolygonGroupID, TArray<struct FMeshDescription_VertexInstanceID> VertexInstanceIDs, TArray<struct FMeshDescription_EdgeID>* NewEdgeIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.CreateTriangle");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.CreateTriangle");

	UMeshDescription_MeshDescriptionBase_CreateTriangle_Params params;
	params.PolygonGroupID = PolygonGroupID;
	params.VertexInstanceIDs = VertexInstanceIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewEdgeIDs != nullptr)
		*NewEdgeIDs = params.NewEdgeIDs;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.CreatePolygonWithID
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMeshDescription_PolygonID PolygonID                      (Parm)
// struct FMeshDescription_PolygonGroupID PolygonGroupID                 (Parm)
// TArray<struct FMeshDescription_VertexInstanceID> VertexInstanceIDs              (Parm, OutParm, ZeroConstructor)
// TArray<struct FMeshDescription_EdgeID> NewEdgeIDs                     (Parm, OutParm, ZeroConstructor)

void UMeshDescription_MeshDescriptionBase::CreatePolygonWithID(const struct FMeshDescription_PolygonID& PolygonID, const struct FMeshDescription_PolygonGroupID& PolygonGroupID, TArray<struct FMeshDescription_VertexInstanceID>* VertexInstanceIDs, TArray<struct FMeshDescription_EdgeID>* NewEdgeIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.CreatePolygonWithID");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.CreatePolygonWithID");

	UMeshDescription_MeshDescriptionBase_CreatePolygonWithID_Params params;
	params.PolygonID = PolygonID;
	params.PolygonGroupID = PolygonGroupID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (VertexInstanceIDs != nullptr)
		*VertexInstanceIDs = params.VertexInstanceIDs;
	if (NewEdgeIDs != nullptr)
		*NewEdgeIDs = params.NewEdgeIDs;
}


// Function MeshDescription.MeshDescriptionBase.CreatePolygonGroupWithID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMeshDescription_PolygonGroupID PolygonGroupID                 (Parm)

void UMeshDescription_MeshDescriptionBase::CreatePolygonGroupWithID(const struct FMeshDescription_PolygonGroupID& PolygonGroupID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.CreatePolygonGroupWithID");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.CreatePolygonGroupWithID");

	UMeshDescription_MeshDescriptionBase_CreatePolygonGroupWithID_Params params;
	params.PolygonGroupID = PolygonGroupID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeshDescription.MeshDescriptionBase.CreatePolygonGroup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMeshDescription_PolygonGroupID ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMeshDescription_PolygonGroupID UMeshDescription_MeshDescriptionBase::CreatePolygonGroup()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.CreatePolygonGroup");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.CreatePolygonGroup");

	UMeshDescription_MeshDescriptionBase_CreatePolygonGroup_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.CreatePolygon
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMeshDescription_PolygonGroupID PolygonGroupID                 (Parm)
// TArray<struct FMeshDescription_VertexInstanceID> VertexInstanceIDs              (Parm, OutParm, ZeroConstructor)
// TArray<struct FMeshDescription_EdgeID> NewEdgeIDs                     (Parm, OutParm, ZeroConstructor)
// struct FMeshDescription_PolygonID ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMeshDescription_PolygonID UMeshDescription_MeshDescriptionBase::CreatePolygon(const struct FMeshDescription_PolygonGroupID& PolygonGroupID, TArray<struct FMeshDescription_VertexInstanceID>* VertexInstanceIDs, TArray<struct FMeshDescription_EdgeID>* NewEdgeIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.CreatePolygon");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.CreatePolygon");

	UMeshDescription_MeshDescriptionBase_CreatePolygon_Params params;
	params.PolygonGroupID = PolygonGroupID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (VertexInstanceIDs != nullptr)
		*VertexInstanceIDs = params.VertexInstanceIDs;
	if (NewEdgeIDs != nullptr)
		*NewEdgeIDs = params.NewEdgeIDs;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.CreateEdgeWithID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMeshDescription_EdgeID EdgeID                         (Parm)
// struct FMeshDescription_VertexID VertexID0                      (Parm)
// struct FMeshDescription_VertexID VertexID1                      (Parm)

void UMeshDescription_MeshDescriptionBase::CreateEdgeWithID(const struct FMeshDescription_EdgeID& EdgeID, const struct FMeshDescription_VertexID& VertexID0, const struct FMeshDescription_VertexID& VertexID1)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.CreateEdgeWithID");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.CreateEdgeWithID");

	UMeshDescription_MeshDescriptionBase_CreateEdgeWithID_Params params;
	params.EdgeID = EdgeID;
	params.VertexID0 = VertexID0;
	params.VertexID1 = VertexID1;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeshDescription.MeshDescriptionBase.CreateEdge
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMeshDescription_VertexID VertexID0                      (Parm)
// struct FMeshDescription_VertexID VertexID1                      (Parm)
// struct FMeshDescription_EdgeID ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMeshDescription_EdgeID UMeshDescription_MeshDescriptionBase::CreateEdge(const struct FMeshDescription_VertexID& VertexID0, const struct FMeshDescription_VertexID& VertexID1)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.CreateEdge");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.CreateEdge");

	UMeshDescription_MeshDescriptionBase_CreateEdge_Params params;
	params.VertexID0 = VertexID0;
	params.VertexID1 = VertexID1;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.ComputePolygonTriangulation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMeshDescription_PolygonID PolygonID                      (Parm)

void UMeshDescription_MeshDescriptionBase::ComputePolygonTriangulation(const struct FMeshDescription_PolygonID& PolygonID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.ComputePolygonTriangulation");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.ComputePolygonTriangulation");

	UMeshDescription_MeshDescriptionBase_ComputePolygonTriangulation_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
