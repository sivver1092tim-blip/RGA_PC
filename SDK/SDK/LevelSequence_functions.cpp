
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

// Function LevelSequence.LevelSequenceActor.ShowBurnin
// (Final, Native, Public, BlueprintCallable)

void ALevelSequence_LevelSequenceActor::ShowBurnin()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.ShowBurnin");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.ShowBurnin");

	ALevelSequence_LevelSequenceActor_ShowBurnin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelSequence.LevelSequenceActor.SetSequence
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULevelSequence_LevelSequence* InSequence                     (Parm, ZeroConstructor, IsPlainOldData)

void ALevelSequence_LevelSequenceActor::SetSequence(class ULevelSequence_LevelSequence* InSequence)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.SetSequence");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.SetSequence");

	ALevelSequence_LevelSequenceActor_SetSequence_Params params;
	params.InSequence = InSequence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelSequence.LevelSequenceActor.SetReplicatePlayback
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReplicatePlayback              (Parm, ZeroConstructor, IsPlainOldData)

void ALevelSequence_LevelSequenceActor::SetReplicatePlayback(bool ReplicatePlayback)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.SetReplicatePlayback");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.SetReplicatePlayback");

	ALevelSequence_LevelSequenceActor_SetReplicatePlayback_Params params;
	params.ReplicatePlayback = ReplicatePlayback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelSequence.LevelSequenceActor.SetEventReceivers
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class AEngine_Actor*>   AdditionalReceivers            (Parm, ZeroConstructor)

void ALevelSequence_LevelSequenceActor::SetEventReceivers(TArray<class AEngine_Actor*> AdditionalReceivers)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.SetEventReceivers");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.SetEventReceivers");

	ALevelSequence_LevelSequenceActor_SetEventReceivers_Params params;
	params.AdditionalReceivers = AdditionalReceivers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelSequence.LevelSequenceActor.SetBindingByTag
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   BindingTag                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AEngine_Actor*>   Actors                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bAllowBindingsFromAsset        (Parm, ZeroConstructor, IsPlainOldData)

void ALevelSequence_LevelSequenceActor::SetBindingByTag(const struct FName& BindingTag, TArray<class AEngine_Actor*> Actors, bool bAllowBindingsFromAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.SetBindingByTag");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.SetBindingByTag");

	ALevelSequence_LevelSequenceActor_SetBindingByTag_Params params;
	params.BindingTag = BindingTag;
	params.Actors = Actors;
	params.bAllowBindingsFromAsset = bAllowBindingsFromAsset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelSequence.LevelSequenceActor.SetBinding
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMovieScene_MovieSceneObjectBindingID Binding                        (Parm)
// TArray<class AEngine_Actor*>   Actors                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bAllowBindingsFromAsset        (Parm, ZeroConstructor, IsPlainOldData)

void ALevelSequence_LevelSequenceActor::SetBinding(const struct FMovieScene_MovieSceneObjectBindingID& Binding, TArray<class AEngine_Actor*> Actors, bool bAllowBindingsFromAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.SetBinding");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.SetBinding");

	ALevelSequence_LevelSequenceActor_SetBinding_Params params;
	params.Binding = Binding;
	params.Actors = Actors;
	params.bAllowBindingsFromAsset = bAllowBindingsFromAsset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelSequence.LevelSequenceActor.ResetBindings
// (Final, Native, Public, BlueprintCallable)

void ALevelSequence_LevelSequenceActor::ResetBindings()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.ResetBindings");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.ResetBindings");

	ALevelSequence_LevelSequenceActor_ResetBindings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelSequence.LevelSequenceActor.ResetBinding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMovieScene_MovieSceneObjectBindingID Binding                        (Parm)

void ALevelSequence_LevelSequenceActor::ResetBinding(const struct FMovieScene_MovieSceneObjectBindingID& Binding)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.ResetBinding");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.ResetBinding");

	ALevelSequence_LevelSequenceActor_ResetBinding_Params params;
	params.Binding = Binding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelSequence.LevelSequenceActor.RemoveBindingByTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   Tag                            (Parm, ZeroConstructor, IsPlainOldData)
// class AEngine_Actor*           Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void ALevelSequence_LevelSequenceActor::RemoveBindingByTag(const struct FName& Tag, class AEngine_Actor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.RemoveBindingByTag");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.RemoveBindingByTag");

	ALevelSequence_LevelSequenceActor_RemoveBindingByTag_Params params;
	params.Tag = Tag;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelSequence.LevelSequenceActor.RemoveBinding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMovieScene_MovieSceneObjectBindingID Binding                        (Parm)
// class AEngine_Actor*           Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void ALevelSequence_LevelSequenceActor::RemoveBinding(const struct FMovieScene_MovieSceneObjectBindingID& Binding, class AEngine_Actor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.RemoveBinding");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.RemoveBinding");

	ALevelSequence_LevelSequenceActor_RemoveBinding_Params params;
	params.Binding = Binding;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelSequence.LevelSequenceActor.LoadSequence
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULevelSequence_LevelSequence* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ULevelSequence_LevelSequence* ALevelSequence_LevelSequenceActor::LoadSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.LoadSequence");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.LoadSequence");

	ALevelSequence_LevelSequenceActor_LoadSequence_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LevelSequence.LevelSequenceActor.HideBurnin
// (Final, Native, Public, BlueprintCallable)

void ALevelSequence_LevelSequenceActor::HideBurnin()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.HideBurnin");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.HideBurnin");

	ALevelSequence_LevelSequenceActor_HideBurnin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelSequence.LevelSequenceActor.GetSequencePlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULevelSequence_LevelSequencePlayer* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ULevelSequence_LevelSequencePlayer* ALevelSequence_LevelSequenceActor::GetSequencePlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.GetSequencePlayer");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.GetSequencePlayer");

	ALevelSequence_LevelSequenceActor_GetSequencePlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LevelSequence.LevelSequenceActor.GetSequence
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULevelSequence_LevelSequence* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ULevelSequence_LevelSequence* ALevelSequence_LevelSequenceActor::GetSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.GetSequence");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.GetSequence");

	ALevelSequence_LevelSequenceActor_GetSequence_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LevelSequence.LevelSequenceActor.FindNamedBindings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   Tag                            (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMovieScene_MovieSceneObjectBindingID> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<struct FMovieScene_MovieSceneObjectBindingID> ALevelSequence_LevelSequenceActor::FindNamedBindings(const struct FName& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.FindNamedBindings");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.FindNamedBindings");

	ALevelSequence_LevelSequenceActor_FindNamedBindings_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LevelSequence.LevelSequenceActor.FindNamedBinding
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   Tag                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FMovieScene_MovieSceneObjectBindingID ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMovieScene_MovieSceneObjectBindingID ALevelSequence_LevelSequenceActor::FindNamedBinding(const struct FName& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.FindNamedBinding");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.FindNamedBinding");

	ALevelSequence_LevelSequenceActor_FindNamedBinding_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LevelSequence.LevelSequenceActor.AddBindingByTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   BindingTag                     (Parm, ZeroConstructor, IsPlainOldData)
// class AEngine_Actor*           Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAllowBindingsFromAsset        (Parm, ZeroConstructor, IsPlainOldData)

void ALevelSequence_LevelSequenceActor::AddBindingByTag(const struct FName& BindingTag, class AEngine_Actor* Actor, bool bAllowBindingsFromAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.AddBindingByTag");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.AddBindingByTag");

	ALevelSequence_LevelSequenceActor_AddBindingByTag_Params params;
	params.BindingTag = BindingTag;
	params.Actor = Actor;
	params.bAllowBindingsFromAsset = bAllowBindingsFromAsset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelSequence.LevelSequenceActor.AddBinding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMovieScene_MovieSceneObjectBindingID Binding                        (Parm)
// class AEngine_Actor*           Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAllowBindingsFromAsset        (Parm, ZeroConstructor, IsPlainOldData)

void ALevelSequence_LevelSequenceActor::AddBinding(const struct FMovieScene_MovieSceneObjectBindingID& Binding, class AEngine_Actor* Actor, bool bAllowBindingsFromAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.AddBinding");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.AddBinding");

	ALevelSequence_LevelSequenceActor_AddBinding_Params params;
	params.Binding = Binding;
	params.Actor = Actor;
	params.bAllowBindingsFromAsset = bAllowBindingsFromAsset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelSequence.LevelSequenceDirector.OnCreated
// (Event, Public, BlueprintEvent)

void ULevelSequence_LevelSequenceDirector::OnCreated()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceDirector.OnCreated");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceDirector.OnCreated");

	ULevelSequence_LevelSequenceDirector_OnCreated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelSequence.LevelSequence.RemoveMetaDataByClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  InClass                        (Parm, ZeroConstructor, IsPlainOldData)

void ULevelSequence_LevelSequence::RemoveMetaDataByClass(class UClass* InClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequence.RemoveMetaDataByClass");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequence.RemoveMetaDataByClass");

	ULevelSequence_LevelSequence_RemoveMetaDataByClass_Params params;
	params.InClass = InClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelSequence.LevelSequence.FindOrAddMetaDataByClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  InClass                        (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* ULevelSequence_LevelSequence::FindOrAddMetaDataByClass(class UClass* InClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequence.FindOrAddMetaDataByClass");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequence.FindOrAddMetaDataByClass");

	ULevelSequence_LevelSequence_FindOrAddMetaDataByClass_Params params;
	params.InClass = InClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LevelSequence.LevelSequence.FindMetaDataByClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  InClass                        (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* ULevelSequence_LevelSequence::FindMetaDataByClass(class UClass* InClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequence.FindMetaDataByClass");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequence.FindMetaDataByClass");

	ULevelSequence_LevelSequence_FindMetaDataByClass_Params params;
	params.InClass = InClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LevelSequence.LevelSequence.CopyMetaData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 InMetaData                     (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* ULevelSequence_LevelSequence::CopyMetaData(class UObject* InMetaData)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequence.CopyMetaData");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequence.CopyMetaData");

	ULevelSequence_LevelSequence_CopyMetaData_Params params;
	params.InMetaData = InMetaData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LevelSequence.LevelSequenceBurnInOptions.SetBurnIn
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FSoftClassPath          InBurnInClass                  (Parm, ZeroConstructor)

void ULevelSequence_LevelSequenceBurnInOptions::SetBurnIn(const struct FSoftClassPath& InBurnInClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceBurnInOptions.SetBurnIn");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceBurnInOptions.SetBurnIn");

	ULevelSequence_LevelSequenceBurnInOptions_SetBurnIn_Params params;
	params.InBurnInClass = InBurnInClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelSequence.LevelSequenceBurnIn.SetSettings
// (Event, Public, BlueprintEvent)
// Parameters:
// class UObject*                 InSettings                     (Parm, ZeroConstructor, IsPlainOldData)

void ULevelSequence_LevelSequenceBurnIn::SetSettings(class UObject* InSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceBurnIn.SetSettings");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceBurnIn.SetSettings");

	ULevelSequence_LevelSequenceBurnIn_SetSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* ULevelSequence_LevelSequenceBurnIn::GetSettingsClass()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass");

	ULevelSequence_LevelSequenceBurnIn_GetSettingsClass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LevelSequence.LevelSequencePlayer.GetActiveCameraComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UEngine_CameraComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UEngine_CameraComponent* ULevelSequence_LevelSequencePlayer::GetActiveCameraComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequencePlayer.GetActiveCameraComponent");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequencePlayer.GetActiveCameraComponent");

	ULevelSequence_LevelSequencePlayer_GetActiveCameraComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class ULevelSequence_LevelSequence* LevelSequence                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FMovieScene_MovieSceneSequencePlaybackSettings Settings                       (Parm)
// class ALevelSequence_LevelSequenceActor* OutActor                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class ULevelSequence_LevelSequencePlayer* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ULevelSequence_LevelSequencePlayer* ULevelSequence_LevelSequencePlayer::STATIC_CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence_LevelSequence* LevelSequence, const struct FMovieScene_MovieSceneSequencePlaybackSettings& Settings, class ALevelSequence_LevelSequenceActor** OutActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer");

	ULevelSequence_LevelSequencePlayer_CreateLevelSequencePlayer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LevelSequence = LevelSequence;
	params.Settings = Settings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutActor != nullptr)
		*OutActor = params.OutActor;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
