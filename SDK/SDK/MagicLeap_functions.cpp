
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

// Function MagicLeap.InAppPurchaseComponent.TryPurchaseItemAsync
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMagicLeap_PurchaseItemDetails ItemDetails                    (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeap_InAppPurchaseComponent::TryPurchaseItemAsync(const struct FMagicLeap_PurchaseItemDetails& ItemDetails)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeap.InAppPurchaseComponent.TryPurchaseItemAsync");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeap.InAppPurchaseComponent.TryPurchaseItemAsync");

	UMagicLeap_InAppPurchaseComponent_TryPurchaseItemAsync_Params params;
	params.ItemDetails = ItemDetails;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeap.InAppPurchaseComponent.TryGetPurchaseHistoryAsync
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InNumPages                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeap_InAppPurchaseComponent::TryGetPurchaseHistoryAsync(int InNumPages)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeap.InAppPurchaseComponent.TryGetPurchaseHistoryAsync");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeap.InAppPurchaseComponent.TryGetPurchaseHistoryAsync");

	UMagicLeap_InAppPurchaseComponent_TryGetPurchaseHistoryAsync_Params params;
	params.InNumPages = InNumPages;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeap.InAppPurchaseComponent.TryGetItemsDetailsAsync
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FString>         ItemIDs                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeap_InAppPurchaseComponent::TryGetItemsDetailsAsync(TArray<struct FString> ItemIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeap.InAppPurchaseComponent.TryGetItemsDetailsAsync");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeap.InAppPurchaseComponent.TryGetItemsDetailsAsync");

	UMagicLeap_InAppPurchaseComponent_TryGetItemsDetailsAsync_Params params;
	params.ItemIDs = ItemIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction MagicLeap.InAppPurchaseComponent.PurchaseConfirmationSuccess__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// struct FMagicLeap_PurchaseConfirmation PurchaseConfirmations          (ConstParm, Parm, OutParm, ReferenceParm)

void UMagicLeap_InAppPurchaseComponent::PurchaseConfirmationSuccess__DelegateSignature(const struct FMagicLeap_PurchaseConfirmation& PurchaseConfirmations)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeap.InAppPurchaseComponent.PurchaseConfirmationSuccess__DelegateSignature");

	if (!fn)
		fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeap.InAppPurchaseComponent.PurchaseConfirmationSuccess__DelegateSignature");

	UMagicLeap_InAppPurchaseComponent_PurchaseConfirmationSuccess__DelegateSignature_Params params;
	params.PurchaseConfirmations = PurchaseConfirmations;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction MagicLeap.InAppPurchaseComponent.PurchaseConfirmationFailure__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UMagicLeap_InAppPurchaseComponent::PurchaseConfirmationFailure__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeap.InAppPurchaseComponent.PurchaseConfirmationFailure__DelegateSignature");

	if (!fn)
		fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeap.InAppPurchaseComponent.PurchaseConfirmationFailure__DelegateSignature");

	UMagicLeap_InAppPurchaseComponent_PurchaseConfirmationFailure__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction MagicLeap.InAppPurchaseComponent.InAppPurchaseLogMessage__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// struct FString                 LogMessage                     (Parm, ZeroConstructor)

void UMagicLeap_InAppPurchaseComponent::InAppPurchaseLogMessage__DelegateSignature(const struct FString& LogMessage)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeap.InAppPurchaseComponent.InAppPurchaseLogMessage__DelegateSignature");

	if (!fn)
		fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeap.InAppPurchaseComponent.InAppPurchaseLogMessage__DelegateSignature");

	UMagicLeap_InAppPurchaseComponent_InAppPurchaseLogMessage__DelegateSignature_Params params;
	params.LogMessage = LogMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction MagicLeap.InAppPurchaseComponent.GetPurchaseHistorySuccess__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// TArray<struct FMagicLeap_PurchaseConfirmation> PurchaseHistory                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMagicLeap_InAppPurchaseComponent::GetPurchaseHistorySuccess__DelegateSignature(TArray<struct FMagicLeap_PurchaseConfirmation> PurchaseHistory)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeap.InAppPurchaseComponent.GetPurchaseHistorySuccess__DelegateSignature");

	if (!fn)
		fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeap.InAppPurchaseComponent.GetPurchaseHistorySuccess__DelegateSignature");

	UMagicLeap_InAppPurchaseComponent_GetPurchaseHistorySuccess__DelegateSignature_Params params;
	params.PurchaseHistory = PurchaseHistory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction MagicLeap.InAppPurchaseComponent.GetPurchaseHistoryFailure__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UMagicLeap_InAppPurchaseComponent::GetPurchaseHistoryFailure__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeap.InAppPurchaseComponent.GetPurchaseHistoryFailure__DelegateSignature");

	if (!fn)
		fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeap.InAppPurchaseComponent.GetPurchaseHistoryFailure__DelegateSignature");

	UMagicLeap_InAppPurchaseComponent_GetPurchaseHistoryFailure__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction MagicLeap.InAppPurchaseComponent.GetItemsDetailsSuccess__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// TArray<struct FMagicLeap_PurchaseItemDetails> ItemsDetails                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMagicLeap_InAppPurchaseComponent::GetItemsDetailsSuccess__DelegateSignature(TArray<struct FMagicLeap_PurchaseItemDetails> ItemsDetails)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeap.InAppPurchaseComponent.GetItemsDetailsSuccess__DelegateSignature");

	if (!fn)
		fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeap.InAppPurchaseComponent.GetItemsDetailsSuccess__DelegateSignature");

	UMagicLeap_InAppPurchaseComponent_GetItemsDetailsSuccess__DelegateSignature_Params params;
	params.ItemsDetails = ItemsDetails;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction MagicLeap.InAppPurchaseComponent.GetItemsDetailsFailure__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UMagicLeap_InAppPurchaseComponent::GetItemsDetailsFailure__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeap.InAppPurchaseComponent.GetItemsDetailsFailure__DelegateSignature");

	if (!fn)
		fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeap.InAppPurchaseComponent.GetItemsDetailsFailure__DelegateSignature");

	UMagicLeap_InAppPurchaseComponent_GetItemsDetailsFailure__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.SetStabilizationDepthActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AEngine_Actor*           InStabilizationDepthActor      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSetFocusActor                 (Parm, ZeroConstructor, IsPlainOldData)

void UMagicLeap_MagicLeapHMDFunctionLibrary::STATIC_SetStabilizationDepthActor(class AEngine_Actor* InStabilizationDepthActor, bool bSetFocusActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.SetStabilizationDepthActor");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.SetStabilizationDepthActor");

	UMagicLeap_MagicLeapHMDFunctionLibrary_SetStabilizationDepthActor_Params params;
	params.InStabilizationDepthActor = InStabilizationDepthActor;
	params.bSetFocusActor = bSetFocusActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.SetFocusActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AEngine_Actor*           InFocusActor                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSetStabilizationActor         (Parm, ZeroConstructor, IsPlainOldData)

void UMagicLeap_MagicLeapHMDFunctionLibrary::STATIC_SetFocusActor(class AEngine_Actor* InFocusActor, bool bSetStabilizationActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.SetFocusActor");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.SetFocusActor");

	UMagicLeap_MagicLeapHMDFunctionLibrary_SetFocusActor_Params params;
	params.InFocusActor = InFocusActor;
	params.bSetStabilizationActor = bSetStabilizationActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBaseRotation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                InBaseRotation                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UMagicLeap_MagicLeapHMDFunctionLibrary::STATIC_SetBaseRotation(const struct FRotator& InBaseRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBaseRotation");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBaseRotation");

	UMagicLeap_MagicLeapHMDFunctionLibrary_SetBaseRotation_Params params;
	params.InBaseRotation = InBaseRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBasePosition
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 InBasePosition                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UMagicLeap_MagicLeapHMDFunctionLibrary::STATIC_SetBasePosition(const struct FVector& InBasePosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBasePosition");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBasePosition");

	UMagicLeap_MagicLeapHMDFunctionLibrary_SetBasePosition_Params params;
	params.InBasePosition = InBasePosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBaseOrientation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FQuat                   InBaseOrientation              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UMagicLeap_MagicLeapHMDFunctionLibrary::STATIC_SetBaseOrientation(const struct FQuat& InBaseOrientation)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBaseOrientation");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBaseOrientation");

	UMagicLeap_MagicLeapHMDFunctionLibrary_SetBaseOrientation_Params params;
	params.InBaseOrientation = InBaseOrientation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.SetAppReady
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeap_MagicLeapHMDFunctionLibrary::STATIC_SetAppReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.SetAppReady");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.SetAppReady");

	UMagicLeap_MagicLeapHMDFunctionLibrary_SetAppReady_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.IsRunningOnMagicLeapHMD
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeap_MagicLeapHMDFunctionLibrary::STATIC_IsRunningOnMagicLeapHMD()
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.IsRunningOnMagicLeapHMD");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.IsRunningOnMagicLeapHMD");

	UMagicLeap_MagicLeapHMDFunctionLibrary_IsRunningOnMagicLeapHMD_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionRevision
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMagicLeap_MagicLeapHMDFunctionLibrary::STATIC_GetMLSDKVersionRevision()
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionRevision");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionRevision");

	UMagicLeap_MagicLeapHMDFunctionLibrary_GetMLSDKVersionRevision_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionMinor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMagicLeap_MagicLeapHMDFunctionLibrary::STATIC_GetMLSDKVersionMinor()
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionMinor");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionMinor");

	UMagicLeap_MagicLeapHMDFunctionLibrary_GetMLSDKVersionMinor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionMajor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMagicLeap_MagicLeapHMDFunctionLibrary::STATIC_GetMLSDKVersionMajor()
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionMajor");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionMajor");

	UMagicLeap_MagicLeapHMDFunctionLibrary_GetMLSDKVersionMajor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersion
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UMagicLeap_MagicLeapHMDFunctionLibrary::STATIC_GetMLSDKVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersion");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersion");

	UMagicLeap_MagicLeapHMDFunctionLibrary_GetMLSDKVersion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetHeadTrackingState
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FMagicLeap_MagicLeapHeadTrackingState State                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeap_MagicLeapHMDFunctionLibrary::STATIC_GetHeadTrackingState(struct FMagicLeap_MagicLeapHeadTrackingState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.GetHeadTrackingState");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.GetHeadTrackingState");

	UMagicLeap_MagicLeapHMDFunctionLibrary_GetHeadTrackingState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;

	return params.ReturnValue;
}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetHeadTrackingMapEvents
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeap_MagicLeapHMDFunctionLibrary::STATIC_GetHeadTrackingMapEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.GetHeadTrackingMapEvents");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.GetHeadTrackingMapEvents");

	UMagicLeap_MagicLeapHMDFunctionLibrary_GetHeadTrackingMapEvents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeap.MagicLeapMeshBlockSelectorInterface.SelectMeshBlocks
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMagicLeap_MagicLeapTrackingMeshInfo NewMeshInfo                    (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<struct FMagicLeap_MagicLeapMeshBlockRequest> RequestedMesh                  (Parm, OutParm, ZeroConstructor)

void UMagicLeap_MagicLeapMeshBlockSelectorInterface::SelectMeshBlocks(const struct FMagicLeap_MagicLeapTrackingMeshInfo& NewMeshInfo, TArray<struct FMagicLeap_MagicLeapMeshBlockRequest>* RequestedMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapMeshBlockSelectorInterface.SelectMeshBlocks");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapMeshBlockSelectorInterface.SelectMeshBlocks");

	UMagicLeap_MagicLeapMeshBlockSelectorInterface_SelectMeshBlocks_Params params;
	params.NewMeshInfo = NewMeshInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RequestedMesh != nullptr)
		*RequestedMesh = params.RequestedMesh;
}


// Function MagicLeap.MeshTrackerComponent.SelectMeshBlocks
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMagicLeap_MagicLeapTrackingMeshInfo NewMeshInfo                    (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<struct FMagicLeap_MagicLeapMeshBlockRequest> RequestedMesh                  (Parm, OutParm, ZeroConstructor)

void UMagicLeap_MeshTrackerComponent::SelectMeshBlocks(const struct FMagicLeap_MagicLeapTrackingMeshInfo& NewMeshInfo, TArray<struct FMagicLeap_MagicLeapMeshBlockRequest>* RequestedMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeap.MeshTrackerComponent.SelectMeshBlocks");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeap.MeshTrackerComponent.SelectMeshBlocks");

	UMagicLeap_MeshTrackerComponent_SelectMeshBlocks_Params params;
	params.NewMeshInfo = NewMeshInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RequestedMesh != nullptr)
		*RequestedMesh = params.RequestedMesh;
}


// DelegateFunction MagicLeap.MeshTrackerComponent.OnMeshTrackerUpdated__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms, HasDefaults)
// Parameters:
// struct FGuid                   ID                             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         Vertices                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    Triangles                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector>         Normals                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>                  Confidence                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMagicLeap_MeshTrackerComponent::OnMeshTrackerUpdated__DelegateSignature(const struct FGuid& ID, TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector> Normals, TArray<float> Confidence)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeap.MeshTrackerComponent.OnMeshTrackerUpdated__DelegateSignature");

	if (!fn)
		fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeap.MeshTrackerComponent.OnMeshTrackerUpdated__DelegateSignature");

	UMagicLeap_MeshTrackerComponent_OnMeshTrackerUpdated__DelegateSignature_Params params;
	params.ID = ID;
	params.Vertices = Vertices;
	params.Triangles = Triangles;
	params.Normals = Normals;
	params.Confidence = Confidence;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MagicLeap.MeshTrackerComponent.GetNumQueuedBlockUpdates
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMagicLeap_MeshTrackerComponent::GetNumQueuedBlockUpdates()
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeap.MeshTrackerComponent.GetNumQueuedBlockUpdates");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeap.MeshTrackerComponent.GetNumQueuedBlockUpdates");

	UMagicLeap_MeshTrackerComponent_GetNumQueuedBlockUpdates_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeap.MeshTrackerComponent.DisconnectMRMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMRMesh_MRMeshComponent* InMRMeshPtr                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMagicLeap_MeshTrackerComponent::DisconnectMRMesh(class UMRMesh_MRMeshComponent* InMRMeshPtr)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeap.MeshTrackerComponent.DisconnectMRMesh");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeap.MeshTrackerComponent.DisconnectMRMesh");

	UMagicLeap_MeshTrackerComponent_DisconnectMRMesh_Params params;
	params.InMRMeshPtr = InMRMeshPtr;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MagicLeap.MeshTrackerComponent.DisconnectBlockSelector
// (Final, Native, Public, BlueprintCallable)

void UMagicLeap_MeshTrackerComponent::DisconnectBlockSelector()
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeap.MeshTrackerComponent.DisconnectBlockSelector");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeap.MeshTrackerComponent.DisconnectBlockSelector");

	UMagicLeap_MeshTrackerComponent_DisconnectBlockSelector_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MagicLeap.MeshTrackerComponent.ConnectMRMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMRMesh_MRMeshComponent* InMRMeshPtr                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMagicLeap_MeshTrackerComponent::ConnectMRMesh(class UMRMesh_MRMeshComponent* InMRMeshPtr)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeap.MeshTrackerComponent.ConnectMRMesh");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeap.MeshTrackerComponent.ConnectMRMesh");

	UMagicLeap_MeshTrackerComponent_ConnectMRMesh_Params params;
	params.InMRMeshPtr = InMRMeshPtr;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MagicLeap.MeshTrackerComponent.ConnectBlockSelector
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class UMagicLeap_MagicLeapMeshBlockSelectorInterface> Selector                       (Parm, ZeroConstructor, IsPlainOldData)

void UMagicLeap_MeshTrackerComponent::ConnectBlockSelector(const TScriptInterface<class UMagicLeap_MagicLeapMeshBlockSelectorInterface>& Selector)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeap.MeshTrackerComponent.ConnectBlockSelector");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeap.MeshTrackerComponent.ConnectBlockSelector");

	UMagicLeap_MeshTrackerComponent_ConnectBlockSelector_Params params;
	params.Selector = Selector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MagicLeap.MagicLeapRaycastComponent.RequestRaycast
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMagicLeap_MagicLeapRaycastQueryParams RequestParams                  (ConstParm, Parm, OutParm, ReferenceParm)
// struct FScriptDelegate         ResultDelegate                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeap_MagicLeapRaycastComponent::RequestRaycast(const struct FMagicLeap_MagicLeapRaycastQueryParams& RequestParams, const struct FScriptDelegate& ResultDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapRaycastComponent.RequestRaycast");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapRaycastComponent.RequestRaycast");

	UMagicLeap_MagicLeapRaycastComponent_RequestRaycast_Params params;
	params.RequestParams = RequestParams;
	params.ResultDelegate = ResultDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction MagicLeap.MagicLeapRaycastComponent.RaycastResultDelegate__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FMagicLeap_MagicLeapRaycastHitResult HitResult                      (Parm)

void UMagicLeap_MagicLeapRaycastComponent::RaycastResultDelegate__DelegateSignature(const struct FMagicLeap_MagicLeapRaycastHitResult& HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeap.MagicLeapRaycastComponent.RaycastResultDelegate__DelegateSignature");

	if (!fn)
		fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeap.MagicLeapRaycastComponent.RaycastResultDelegate__DelegateSignature");

	UMagicLeap_MagicLeapRaycastComponent_RaycastResultDelegate__DelegateSignature_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MagicLeap.MagicLeapRaycastFunctionLibrary.MakeRaycastQueryParams
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 Position                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Direction                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 UpVector                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            Width                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Height                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          HorizontalFovDegrees           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           CollideWithUnobserved          (Parm, ZeroConstructor, IsPlainOldData)
// int                            UserData                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FMagicLeap_MagicLeapRaycastQueryParams ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMagicLeap_MagicLeapRaycastQueryParams UMagicLeap_MagicLeapRaycastFunctionLibrary::STATIC_MakeRaycastQueryParams(const struct FVector& Position, const struct FVector& Direction, const struct FVector& UpVector, int Width, int Height, float HorizontalFovDegrees, bool CollideWithUnobserved, int UserData)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapRaycastFunctionLibrary.MakeRaycastQueryParams");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapRaycastFunctionLibrary.MakeRaycastQueryParams");

	UMagicLeap_MagicLeapRaycastFunctionLibrary_MakeRaycastQueryParams_Params params;
	params.Position = Position;
	params.Direction = Direction;
	params.UpVector = UpVector;
	params.Width = Width;
	params.Height = Height;
	params.HorizontalFovDegrees = HorizontalFovDegrees;
	params.CollideWithUnobserved = CollideWithUnobserved;
	params.UserData = UserData;

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
