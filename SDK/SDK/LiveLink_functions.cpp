
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

// Function LiveLink.LiveLinkBlueprintLibrary.TransformNames
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkInterface_SubjectFrameHandle SubjectFrameHandle             (Parm, OutParm, ReferenceParm)
// TArray<struct FName>           TransformNames                 (Parm, OutParm, ZeroConstructor)

void ULiveLink_LiveLinkBlueprintLibrary::STATIC_TransformNames(struct FLiveLinkInterface_SubjectFrameHandle* SubjectFrameHandle, TArray<struct FName>* TransformNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.TransformNames");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.TransformNames");

	ULiveLink_LiveLinkBlueprintLibrary_TransformNames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = params.SubjectFrameHandle;
	if (TransformNames != nullptr)
		*TransformNames = params.TransformNames;
}


// Function LiveLink.LiveLinkBlueprintLibrary.TransformName
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkInterface_LiveLinkTransform LiveLinkTransform              (Parm, OutParm, ReferenceParm)
// struct FName                   Name                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULiveLink_LiveLinkBlueprintLibrary::STATIC_TransformName(struct FLiveLinkInterface_LiveLinkTransform* LiveLinkTransform, struct FName* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.TransformName");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.TransformName");

	ULiveLink_LiveLinkBlueprintLibrary_TransformName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LiveLinkTransform != nullptr)
		*LiveLinkTransform = params.LiveLinkTransform;
	if (Name != nullptr)
		*Name = params.Name;
}


// Function LiveLink.LiveLinkBlueprintLibrary.SetLiveLinkSubjectEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FLiveLinkInterface_LiveLinkSubjectKey SubjectKey                     (ConstParm, Parm)
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void ULiveLink_LiveLinkBlueprintLibrary::SetLiveLinkSubjectEnabled(const struct FLiveLinkInterface_LiveLinkSubjectKey& SubjectKey, bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.SetLiveLinkSubjectEnabled");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.SetLiveLinkSubjectEnabled");

	ULiveLink_LiveLinkBlueprintLibrary_SetLiveLinkSubjectEnabled_Params params;
	params.SubjectKey = SubjectKey;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LiveLink.LiveLinkBlueprintLibrary.RemoveSource
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLiveLinkInterface_LiveLinkSourceHandle SourceHandle                   (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULiveLink_LiveLinkBlueprintLibrary::STATIC_RemoveSource(struct FLiveLinkInterface_LiveLinkSourceHandle* SourceHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.RemoveSource");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.RemoveSource");

	ULiveLink_LiveLinkBlueprintLibrary_RemoveSource_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SourceHandle != nullptr)
		*SourceHandle = params.SourceHandle;

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkBlueprintLibrary.ParentBoneSpaceTransform
// (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkInterface_LiveLinkTransform LiveLinkTransform              (Parm, OutParm, ReferenceParm)
// struct FTransform              Transform                      (Parm, OutParm, IsPlainOldData)

void ULiveLink_LiveLinkBlueprintLibrary::STATIC_ParentBoneSpaceTransform(struct FLiveLinkInterface_LiveLinkTransform* LiveLinkTransform, struct FTransform* Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.ParentBoneSpaceTransform");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.ParentBoneSpaceTransform");

	ULiveLink_LiveLinkBlueprintLibrary_ParentBoneSpaceTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LiveLinkTransform != nullptr)
		*LiveLinkTransform = params.LiveLinkTransform;
	if (Transform != nullptr)
		*Transform = params.Transform;
}


// Function LiveLink.LiveLinkBlueprintLibrary.NumberOfTransforms
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkInterface_SubjectFrameHandle SubjectFrameHandle             (Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ULiveLink_LiveLinkBlueprintLibrary::STATIC_NumberOfTransforms(struct FLiveLinkInterface_SubjectFrameHandle* SubjectFrameHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.NumberOfTransforms");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.NumberOfTransforms");

	ULiveLink_LiveLinkBlueprintLibrary_NumberOfTransforms_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = params.SubjectFrameHandle;

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkBlueprintLibrary.IsSpecificLiveLinkSubjectEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FLiveLinkInterface_LiveLinkSubjectKey SubjectKey                     (ConstParm, Parm)
// bool                           bForThisFrame                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULiveLink_LiveLinkBlueprintLibrary::IsSpecificLiveLinkSubjectEnabled(const struct FLiveLinkInterface_LiveLinkSubjectKey& SubjectKey, bool bForThisFrame)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.IsSpecificLiveLinkSubjectEnabled");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.IsSpecificLiveLinkSubjectEnabled");

	ULiveLink_LiveLinkBlueprintLibrary_IsSpecificLiveLinkSubjectEnabled_Params params;
	params.SubjectKey = SubjectKey;
	params.bForThisFrame = bForThisFrame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkBlueprintLibrary.IsSourceStillValid
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLiveLinkInterface_LiveLinkSourceHandle SourceHandle                   (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULiveLink_LiveLinkBlueprintLibrary::STATIC_IsSourceStillValid(struct FLiveLinkInterface_LiveLinkSourceHandle* SourceHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.IsSourceStillValid");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.IsSourceStillValid");

	ULiveLink_LiveLinkBlueprintLibrary_IsSourceStillValid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SourceHandle != nullptr)
		*SourceHandle = params.SourceHandle;

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkBlueprintLibrary.IsLiveLinkSubjectEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FLiveLinkInterface_LiveLinkSubjectName SubjectName                    (ConstParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULiveLink_LiveLinkBlueprintLibrary::IsLiveLinkSubjectEnabled(const struct FLiveLinkInterface_LiveLinkSubjectName& SubjectName)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.IsLiveLinkSubjectEnabled");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.IsLiveLinkSubjectEnabled");

	ULiveLink_LiveLinkBlueprintLibrary_IsLiveLinkSubjectEnabled_Params params;
	params.SubjectName = SubjectName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkBlueprintLibrary.HasParent
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkInterface_LiveLinkTransform LiveLinkTransform              (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULiveLink_LiveLinkBlueprintLibrary::STATIC_HasParent(struct FLiveLinkInterface_LiveLinkTransform* LiveLinkTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.HasParent");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.HasParent");

	ULiveLink_LiveLinkBlueprintLibrary_HasParent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LiveLinkTransform != nullptr)
		*LiveLinkTransform = params.LiveLinkTransform;

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkBlueprintLibrary.GetTransformByName
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkInterface_SubjectFrameHandle SubjectFrameHandle             (Parm, OutParm, ReferenceParm)
// struct FName                   TransformName                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FLiveLinkInterface_LiveLinkTransform LiveLinkTransform              (Parm, OutParm)

void ULiveLink_LiveLinkBlueprintLibrary::STATIC_GetTransformByName(const struct FName& TransformName, struct FLiveLinkInterface_SubjectFrameHandle* SubjectFrameHandle, struct FLiveLinkInterface_LiveLinkTransform* LiveLinkTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetTransformByName");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetTransformByName");

	ULiveLink_LiveLinkBlueprintLibrary_GetTransformByName_Params params;
	params.TransformName = TransformName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = params.SubjectFrameHandle;
	if (LiveLinkTransform != nullptr)
		*LiveLinkTransform = params.LiveLinkTransform;
}


// Function LiveLink.LiveLinkBlueprintLibrary.GetTransformByIndex
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkInterface_SubjectFrameHandle SubjectFrameHandle             (Parm, OutParm, ReferenceParm)
// int                            TransformIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FLiveLinkInterface_LiveLinkTransform LiveLinkTransform              (Parm, OutParm)

void ULiveLink_LiveLinkBlueprintLibrary::STATIC_GetTransformByIndex(int TransformIndex, struct FLiveLinkInterface_SubjectFrameHandle* SubjectFrameHandle, struct FLiveLinkInterface_LiveLinkTransform* LiveLinkTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetTransformByIndex");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetTransformByIndex");

	ULiveLink_LiveLinkBlueprintLibrary_GetTransformByIndex_Params params;
	params.TransformIndex = TransformIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = params.SubjectFrameHandle;
	if (LiveLinkTransform != nullptr)
		*LiveLinkTransform = params.LiveLinkTransform;
}


// Function LiveLink.LiveLinkBlueprintLibrary.GetSpecificLiveLinkSubjectRole
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FLiveLinkInterface_LiveLinkSubjectKey SubjectKey                     (ConstParm, Parm)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* ULiveLink_LiveLinkBlueprintLibrary::STATIC_GetSpecificLiveLinkSubjectRole(const struct FLiveLinkInterface_LiveLinkSubjectKey& SubjectKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetSpecificLiveLinkSubjectRole");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetSpecificLiveLinkSubjectRole");

	ULiveLink_LiveLinkBlueprintLibrary_GetSpecificLiveLinkSubjectRole_Params params;
	params.SubjectKey = SubjectKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkBlueprintLibrary.GetSourceType
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLiveLinkInterface_LiveLinkSourceHandle SourceHandle                   (Parm, OutParm, ReferenceParm)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText ULiveLink_LiveLinkBlueprintLibrary::STATIC_GetSourceType(struct FLiveLinkInterface_LiveLinkSourceHandle* SourceHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetSourceType");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetSourceType");

	ULiveLink_LiveLinkBlueprintLibrary_GetSourceType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SourceHandle != nullptr)
		*SourceHandle = params.SourceHandle;

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkBlueprintLibrary.GetSourceStatus
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLiveLinkInterface_LiveLinkSourceHandle SourceHandle                   (Parm, OutParm, ReferenceParm)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText ULiveLink_LiveLinkBlueprintLibrary::STATIC_GetSourceStatus(struct FLiveLinkInterface_LiveLinkSourceHandle* SourceHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetSourceStatus");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetSourceStatus");

	ULiveLink_LiveLinkBlueprintLibrary_GetSourceStatus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SourceHandle != nullptr)
		*SourceHandle = params.SourceHandle;

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkBlueprintLibrary.GetSourceMachineName
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLiveLinkInterface_LiveLinkSourceHandle SourceHandle                   (Parm, OutParm, ReferenceParm)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText ULiveLink_LiveLinkBlueprintLibrary::STATIC_GetSourceMachineName(struct FLiveLinkInterface_LiveLinkSourceHandle* SourceHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetSourceMachineName");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetSourceMachineName");

	ULiveLink_LiveLinkBlueprintLibrary_GetSourceMachineName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SourceHandle != nullptr)
		*SourceHandle = params.SourceHandle;

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkBlueprintLibrary.GetRootTransform
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkInterface_SubjectFrameHandle SubjectFrameHandle             (Parm, OutParm, ReferenceParm)
// struct FLiveLinkInterface_LiveLinkTransform LiveLinkTransform              (Parm, OutParm)

void ULiveLink_LiveLinkBlueprintLibrary::STATIC_GetRootTransform(struct FLiveLinkInterface_SubjectFrameHandle* SubjectFrameHandle, struct FLiveLinkInterface_LiveLinkTransform* LiveLinkTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetRootTransform");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetRootTransform");

	ULiveLink_LiveLinkBlueprintLibrary_GetRootTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = params.SubjectFrameHandle;
	if (LiveLinkTransform != nullptr)
		*LiveLinkTransform = params.LiveLinkTransform;
}


// Function LiveLink.LiveLinkBlueprintLibrary.GetPropertyValue
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkInterface_LiveLinkBasicBlueprintData BasicData                      (Parm, OutParm, ReferenceParm)
// struct FName                   PropertyName                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULiveLink_LiveLinkBlueprintLibrary::STATIC_GetPropertyValue(const struct FName& PropertyName, struct FLiveLinkInterface_LiveLinkBasicBlueprintData* BasicData, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetPropertyValue");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetPropertyValue");

	ULiveLink_LiveLinkBlueprintLibrary_GetPropertyValue_Params params;
	params.PropertyName = PropertyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BasicData != nullptr)
		*BasicData = params.BasicData;
	if (Value != nullptr)
		*Value = params.Value;

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkBlueprintLibrary.GetParent
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkInterface_LiveLinkTransform LiveLinkTransform              (Parm, OutParm, ReferenceParm)
// struct FLiveLinkInterface_LiveLinkTransform Parent                         (Parm, OutParm)

void ULiveLink_LiveLinkBlueprintLibrary::STATIC_GetParent(struct FLiveLinkInterface_LiveLinkTransform* LiveLinkTransform, struct FLiveLinkInterface_LiveLinkTransform* Parent)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetParent");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetParent");

	ULiveLink_LiveLinkBlueprintLibrary_GetParent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LiveLinkTransform != nullptr)
		*LiveLinkTransform = params.LiveLinkTransform;
	if (Parent != nullptr)
		*Parent = params.Parent;
}


// Function LiveLink.LiveLinkBlueprintLibrary.GetMetadata
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkInterface_SubjectFrameHandle SubjectFrameHandle             (Parm, OutParm, ReferenceParm)
// struct FLiveLinkInterface_SubjectMetadata MetaData                       (Parm, OutParm)

void ULiveLink_LiveLinkBlueprintLibrary::STATIC_GetMetadata(struct FLiveLinkInterface_SubjectFrameHandle* SubjectFrameHandle, struct FLiveLinkInterface_SubjectMetadata* MetaData)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetMetadata");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetMetadata");

	ULiveLink_LiveLinkBlueprintLibrary_GetMetadata_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = params.SubjectFrameHandle;
	if (MetaData != nullptr)
		*MetaData = params.MetaData;
}


// Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkSubjects
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bIncludeDisabledSubject        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIncludeDisal                  (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FLiveLinkInterface_LiveLinkSubjectKey> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FLiveLinkInterface_LiveLinkSubjectKey> ULiveLink_LiveLinkBlueprintLibrary::STATIC_GetLiveLinkSubjects(bool bIncludeDisabledSubject, bool bIncludeDisal)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkSubjects");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkSubjects");

	ULiveLink_LiveLinkBlueprintLibrary_GetLiveLinkSubjects_Params params;
	params.bIncludeDisabledSubject = bIncludeDisabledSubject;
	params.bIncludeDisal = bIncludeDisal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkSubjectRole
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FLiveLinkInterface_LiveLinkSubjectName SubjectName                    (ConstParm, Parm)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* ULiveLink_LiveLinkBlueprintLibrary::STATIC_GetLiveLinkSubjectRole(const struct FLiveLinkInterface_LiveLinkSubjectName& SubjectName)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkSubjectRole");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkSubjectRole");

	ULiveLink_LiveLinkBlueprintLibrary_GetLiveLinkSubjectRole_Params params;
	params.SubjectName = SubjectName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkEnabledSubjectNames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bIncludeVirtualSubject         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FLiveLinkInterface_LiveLinkSubjectName> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FLiveLinkInterface_LiveLinkSubjectName> ULiveLink_LiveLinkBlueprintLibrary::STATIC_GetLiveLinkEnabledSubjectNames(bool bIncludeVirtualSubject)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkEnabledSubjectNames");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkEnabledSubjectNames");

	ULiveLink_LiveLinkBlueprintLibrary_GetLiveLinkEnabledSubjectNames_Params params;
	params.bIncludeVirtualSubject = bIncludeVirtualSubject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkBlueprintLibrary.GetCurves
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkInterface_SubjectFrameHandle SubjectFrameHandle             (Parm, OutParm, ReferenceParm)
// TMap<struct FName, float>      Curves                         (Parm, OutParm, ZeroConstructor)

void ULiveLink_LiveLinkBlueprintLibrary::STATIC_GetCurves(struct FLiveLinkInterface_SubjectFrameHandle* SubjectFrameHandle, TMap<struct FName, float>* Curves)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetCurves");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetCurves");

	ULiveLink_LiveLinkBlueprintLibrary_GetCurves_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = params.SubjectFrameHandle;
	if (Curves != nullptr)
		*Curves = params.Curves;
}


// Function LiveLink.LiveLinkBlueprintLibrary.GetChildren
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkInterface_LiveLinkTransform LiveLinkTransform              (Parm, OutParm, ReferenceParm)
// TArray<struct FLiveLinkInterface_LiveLinkTransform> Children                       (Parm, OutParm, ZeroConstructor)

void ULiveLink_LiveLinkBlueprintLibrary::STATIC_GetChildren(struct FLiveLinkInterface_LiveLinkTransform* LiveLinkTransform, TArray<struct FLiveLinkInterface_LiveLinkTransform>* Children)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetChildren");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetChildren");

	ULiveLink_LiveLinkBlueprintLibrary_GetChildren_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LiveLinkTransform != nullptr)
		*LiveLinkTransform = params.LiveLinkTransform;
	if (Children != nullptr)
		*Children = params.Children;
}


// Function LiveLink.LiveLinkBlueprintLibrary.GetBasicData
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkInterface_SubjectFrameHandle SubjectFrameHandle             (Parm, OutParm, ReferenceParm)
// struct FLiveLinkInterface_LiveLinkBasicBlueprintData BasicBlueprintData             (Parm, OutParm)

void ULiveLink_LiveLinkBlueprintLibrary::STATIC_GetBasicData(struct FLiveLinkInterface_SubjectFrameHandle* SubjectFrameHandle, struct FLiveLinkInterface_LiveLinkBasicBlueprintData* BasicBlueprintData)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetBasicData");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetBasicData");

	ULiveLink_LiveLinkBlueprintLibrary_GetBasicData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = params.SubjectFrameHandle;
	if (BasicBlueprintData != nullptr)
		*BasicBlueprintData = params.BasicBlueprintData;
}


// Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameWithSpecificRole
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLiveLinkInterface_LiveLinkSubjectName SubjectName                    (Parm)
// class UClass*                  Role                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FLiveLinkInterface_LiveLinkBaseBlueprintData OutBlueprintData               (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULiveLink_LiveLinkBlueprintLibrary::STATIC_EvaluateLiveLinkFrameWithSpecificRole(const struct FLiveLinkInterface_LiveLinkSubjectName& SubjectName, class UClass* Role, struct FLiveLinkInterface_LiveLinkBaseBlueprintData* OutBlueprintData)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameWithSpecificRole");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameWithSpecificRole");

	ULiveLink_LiveLinkBlueprintLibrary_EvaluateLiveLinkFrameWithSpecificRole_Params params;
	params.SubjectName = SubjectName;
	params.Role = Role;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutBlueprintData != nullptr)
		*OutBlueprintData = params.OutBlueprintData;

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameAtWorldTimeOffset
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLiveLinkInterface_LiveLinkSubjectName SubjectName                    (Parm)
// class UClass*                  Role                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          WorldTimeOffset                (Parm, ZeroConstructor, IsPlainOldData)
// struct FLiveLinkInterface_LiveLinkBaseBlueprintData OutBlueprintData               (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULiveLink_LiveLinkBlueprintLibrary::STATIC_EvaluateLiveLinkFrameAtWorldTimeOffset(const struct FLiveLinkInterface_LiveLinkSubjectName& SubjectName, class UClass* Role, float WorldTimeOffset, struct FLiveLinkInterface_LiveLinkBaseBlueprintData* OutBlueprintData)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameAtWorldTimeOffset");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameAtWorldTimeOffset");

	ULiveLink_LiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtWorldTimeOffset_Params params;
	params.SubjectName = SubjectName;
	params.Role = Role;
	params.WorldTimeOffset = WorldTimeOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutBlueprintData != nullptr)
		*OutBlueprintData = params.OutBlueprintData;

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameAtSceneTime
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLiveLinkInterface_LiveLinkSubjectName SubjectName                    (Parm)
// class UClass*                  Role                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FTimecode               SceneTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FLiveLinkInterface_LiveLinkBaseBlueprintData OutBlueprintData               (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULiveLink_LiveLinkBlueprintLibrary::STATIC_EvaluateLiveLinkFrameAtSceneTime(const struct FLiveLinkInterface_LiveLinkSubjectName& SubjectName, class UClass* Role, const struct FTimecode& SceneTime, struct FLiveLinkInterface_LiveLinkBaseBlueprintData* OutBlueprintData)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameAtSceneTime");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameAtSceneTime");

	ULiveLink_LiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtSceneTime_Params params;
	params.SubjectName = SubjectName;
	params.Role = Role;
	params.SceneTime = SceneTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutBlueprintData != nullptr)
		*OutBlueprintData = params.OutBlueprintData;

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrame
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLiveLinkInterface_LiveLinkSubjectRepresentation SubjectRepresentation          (Parm)
// struct FLiveLinkInterface_LiveLinkBaseBlueprintData OutBlueprintData               (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULiveLink_LiveLinkBlueprintLibrary::STATIC_EvaluateLiveLinkFrame(const struct FLiveLinkInterface_LiveLinkSubjectRepresentation& SubjectRepresentation, struct FLiveLinkInterface_LiveLinkBaseBlueprintData* OutBlueprintData)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrame");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrame");

	ULiveLink_LiveLinkBlueprintLibrary_EvaluateLiveLinkFrame_Params params;
	params.SubjectRepresentation = SubjectRepresentation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutBlueprintData != nullptr)
		*OutBlueprintData = params.OutBlueprintData;

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkBlueprintLibrary.ComponentSpaceTransform
// (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkInterface_LiveLinkTransform LiveLinkTransform              (Parm, OutParm, ReferenceParm)
// struct FTransform              Transform                      (Parm, OutParm, IsPlainOldData)

void ULiveLink_LiveLinkBlueprintLibrary::STATIC_ComponentSpaceTransform(struct FLiveLinkInterface_LiveLinkTransform* LiveLinkTransform, struct FTransform* Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.ComponentSpaceTransform");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.ComponentSpaceTransform");

	ULiveLink_LiveLinkBlueprintLibrary_ComponentSpaceTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LiveLinkTransform != nullptr)
		*LiveLinkTransform = params.LiveLinkTransform;
	if (Transform != nullptr)
		*Transform = params.Transform;
}


// Function LiveLink.LiveLinkBlueprintLibrary.ChildCount
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkInterface_LiveLinkTransform LiveLinkTransform              (Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ULiveLink_LiveLinkBlueprintLibrary::STATIC_ChildCount(struct FLiveLinkInterface_LiveLinkTransform* LiveLinkTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.ChildCount");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.ChildCount");

	ULiveLink_LiveLinkBlueprintLibrary_ChildCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LiveLinkTransform != nullptr)
		*LiveLinkTransform = params.LiveLinkTransform;

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkComponent.GetSubjectDataAtWorldTime
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   SubjectName                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          WorldTime                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FLiveLinkInterface_SubjectFrameHandle SubjectFrameHandle             (Parm, OutParm)

void ULiveLink_LiveLinkComponent::GetSubjectDataAtWorldTime(const struct FName& SubjectName, float WorldTime, bool* bSuccess, struct FLiveLinkInterface_SubjectFrameHandle* SubjectFrameHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkComponent.GetSubjectDataAtWorldTime");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkComponent.GetSubjectDataAtWorldTime");

	ULiveLink_LiveLinkComponent_GetSubjectDataAtWorldTime_Params params;
	params.SubjectName = SubjectName;
	params.WorldTime = WorldTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = params.SubjectFrameHandle;
}


// Function LiveLink.LiveLinkComponent.GetSubjectDataAtSceneTime
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   SubjectName                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FTimecode               SceneTime                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FLiveLinkInterface_SubjectFrameHandle SubjectFrameHandle             (Parm, OutParm)

void ULiveLink_LiveLinkComponent::GetSubjectDataAtSceneTime(const struct FName& SubjectName, const struct FTimecode& SceneTime, bool* bSuccess, struct FLiveLinkInterface_SubjectFrameHandle* SubjectFrameHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkComponent.GetSubjectDataAtSceneTime");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkComponent.GetSubjectDataAtSceneTime");

	ULiveLink_LiveLinkComponent_GetSubjectDataAtSceneTime_Params params;
	params.SubjectName = SubjectName;
	params.SceneTime = SceneTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = params.SubjectFrameHandle;
}


// Function LiveLink.LiveLinkComponent.GetSubjectData
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   SubjectName                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FLiveLinkInterface_SubjectFrameHandle SubjectFrameHandle             (Parm, OutParm)

void ULiveLink_LiveLinkComponent::GetSubjectData(const struct FName& SubjectName, bool* bSuccess, struct FLiveLinkInterface_SubjectFrameHandle* SubjectFrameHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkComponent.GetSubjectData");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkComponent.GetSubjectData");

	ULiveLink_LiveLinkComponent_GetSubjectData_Params params;
	params.SubjectName = SubjectName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = params.SubjectFrameHandle;
}


// Function LiveLink.LiveLinkComponent.GetAvailableSubjectNames
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FName>           SubjectNames                   (Parm, OutParm, ZeroConstructor)

void ULiveLink_LiveLinkComponent::GetAvailableSubjectNames(TArray<struct FName>* SubjectNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkComponent.GetAvailableSubjectNames");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkComponent.GetAvailableSubjectNames");

	ULiveLink_LiveLinkComponent_GetAvailableSubjectNames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SubjectNames != nullptr)
		*SubjectNames = params.SubjectNames;
}


// Function LiveLink.LiveLinkMessageBusFinder.GetAvailableProviders
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FEngine_LatentActionInfo LatentInfo                     (Parm)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FLiveLink_ProviderPollResult> AvailableProviders             (Parm, OutParm, ZeroConstructor)

void ULiveLink_LiveLinkMessageBusFinder::GetAvailableProviders(class UObject* WorldContextObject, const struct FEngine_LatentActionInfo& LatentInfo, float Duration, TArray<struct FLiveLink_ProviderPollResult>* AvailableProviders)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkMessageBusFinder.GetAvailableProviders");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkMessageBusFinder.GetAvailableProviders");

	ULiveLink_LiveLinkMessageBusFinder_GetAvailableProviders_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AvailableProviders != nullptr)
		*AvailableProviders = params.AvailableProviders;
}


// Function LiveLink.LiveLinkMessageBusFinder.ConstructMessageBusFinder
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ULiveLink_LiveLinkMessageBusFinder* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ULiveLink_LiveLinkMessageBusFinder* ULiveLink_LiveLinkMessageBusFinder::STATIC_ConstructMessageBusFinder()
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkMessageBusFinder.ConstructMessageBusFinder");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkMessageBusFinder.ConstructMessageBusFinder");

	ULiveLink_LiveLinkMessageBusFinder_ConstructMessageBusFinder_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkMessageBusFinder.ConnectToProvider
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLiveLink_ProviderPollResult Provider                       (Parm, OutParm, ReferenceParm)
// struct FLiveLinkInterface_LiveLinkSourceHandle SourceHandle                   (Parm, OutParm)

void ULiveLink_LiveLinkMessageBusFinder::STATIC_ConnectToProvider(struct FLiveLink_ProviderPollResult* Provider, struct FLiveLinkInterface_LiveLinkSourceHandle* SourceHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkMessageBusFinder.ConnectToProvider");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkMessageBusFinder.ConnectToProvider");

	ULiveLink_LiveLinkMessageBusFinder_ConnectToProvider_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Provider != nullptr)
		*Provider = params.Provider;
	if (SourceHandle != nullptr)
		*SourceHandle = params.SourceHandle;
}


// Function LiveLink.LiveLinkPreset.BuildFromClient
// (Final, Native, Public, BlueprintCallable)

void ULiveLink_LiveLinkPreset::BuildFromClient()
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkPreset.BuildFromClient");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkPreset.BuildFromClient");

	ULiveLink_LiveLinkPreset_BuildFromClient_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LiveLink.LiveLinkPreset.ApplyToClient
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULiveLink_LiveLinkPreset::ApplyToClient()
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkPreset.ApplyToClient");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkPreset.ApplyToClient");

	ULiveLink_LiveLinkPreset_ApplyToClient_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkRemapAsset.RemapCurveElements
// (Native, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// TMap<struct FName, float>      CurveItems                     (Parm, OutParm, ZeroConstructor, ReferenceParm)

void ULiveLink_LiveLinkRemapAsset::RemapCurveElements(TMap<struct FName, float>* CurveItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkRemapAsset.RemapCurveElements");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkRemapAsset.RemapCurveElements");

	ULiveLink_LiveLinkRemapAsset_RemapCurveElements_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurveItems != nullptr)
		*CurveItems = params.CurveItems;
}


// Function LiveLink.LiveLinkRemapAsset.GetRemappedCurveName
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// struct FName                   CurveName                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ULiveLink_LiveLinkRemapAsset::GetRemappedCurveName(const struct FName& CurveName)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkRemapAsset.GetRemappedCurveName");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkRemapAsset.GetRemappedCurveName");

	ULiveLink_LiveLinkRemapAsset_GetRemappedCurveName_Params params;
	params.CurveName = CurveName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkRemapAsset.GetRemappedBoneName
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ULiveLink_LiveLinkRemapAsset::GetRemappedBoneName(const struct FName& BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkRemapAsset.GetRemappedBoneName");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkRemapAsset.GetRemappedBoneName");

	ULiveLink_LiveLinkRemapAsset_GetRemappedBoneName_Params params;
	params.BoneName = BoneName;

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
