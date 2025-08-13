
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

// Function MagicLeapHandMeshing.MagicLeapHandMeshingComponent.DisconnectMRMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMRMesh_MRMeshComponent* InMRMeshPtr                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapHandMeshing_MagicLeapHandMeshingComponent::DisconnectMRMesh(class UMRMesh_MRMeshComponent* InMRMeshPtr)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapHandMeshing.MagicLeapHandMeshingComponent.DisconnectMRMesh");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapHandMeshing.MagicLeapHandMeshingComponent.DisconnectMRMesh");

	UMagicLeapHandMeshing_MagicLeapHandMeshingComponent_DisconnectMRMesh_Params params;
	params.InMRMeshPtr = InMRMeshPtr;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapHandMeshing.MagicLeapHandMeshingComponent.ConnectMRMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMRMesh_MRMeshComponent* InMRMeshPtr                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapHandMeshing_MagicLeapHandMeshingComponent::ConnectMRMesh(class UMRMesh_MRMeshComponent* InMRMeshPtr)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapHandMeshing.MagicLeapHandMeshingComponent.ConnectMRMesh");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapHandMeshing.MagicLeapHandMeshingComponent.ConnectMRMesh");

	UMagicLeapHandMeshing_MagicLeapHandMeshingComponent_ConnectMRMesh_Params params;
	params.InMRMeshPtr = InMRMeshPtr;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.DisconnectMRMesh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMRMesh_MRMeshComponent* InMRMeshPtr                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapHandMeshing_MagicLeapHandMeshingFunctionLibrary::STATIC_DisconnectMRMesh(class UMRMesh_MRMeshComponent* InMRMeshPtr)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.DisconnectMRMesh");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.DisconnectMRMesh");

	UMagicLeapHandMeshing_MagicLeapHandMeshingFunctionLibrary_DisconnectMRMesh_Params params;
	params.InMRMeshPtr = InMRMeshPtr;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.DestroyClient
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapHandMeshing_MagicLeapHandMeshingFunctionLibrary::STATIC_DestroyClient()
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.DestroyClient");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.DestroyClient");

	UMagicLeapHandMeshing_MagicLeapHandMeshingFunctionLibrary_DestroyClient_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.CreateClient
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapHandMeshing_MagicLeapHandMeshingFunctionLibrary::STATIC_CreateClient()
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.CreateClient");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.CreateClient");

	UMagicLeapHandMeshing_MagicLeapHandMeshingFunctionLibrary_CreateClient_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.ConnectMRMesh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMRMesh_MRMeshComponent* InMRMeshPtr                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapHandMeshing_MagicLeapHandMeshingFunctionLibrary::STATIC_ConnectMRMesh(class UMRMesh_MRMeshComponent* InMRMeshPtr)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.ConnectMRMesh");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.ConnectMRMesh");

	UMagicLeapHandMeshing_MagicLeapHandMeshingFunctionLibrary_ConnectMRMesh_Params params;
	params.InMRMeshPtr = InMRMeshPtr;

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
