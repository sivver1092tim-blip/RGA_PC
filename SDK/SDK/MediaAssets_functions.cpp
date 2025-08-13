
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

// Function MediaAssets.MediaSource.Validate
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaAssets_MediaSource::Validate()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSource.Validate");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSource.Validate");

	UMediaAssets_MediaSource_Validate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaSource.SetMediaOptionString
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   Key                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 Value                          (Parm, ZeroConstructor)

void UMediaAssets_MediaSource::SetMediaOptionString(const struct FName& Key, const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSource.SetMediaOptionString");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSource.SetMediaOptionString");

	UMediaAssets_MediaSource_SetMediaOptionString_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MediaAssets.MediaSource.SetMediaOptionInt64
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   Key                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int64_t                        Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UMediaAssets_MediaSource::SetMediaOptionInt64(const struct FName& Key, int64_t Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSource.SetMediaOptionInt64");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSource.SetMediaOptionInt64");

	UMediaAssets_MediaSource_SetMediaOptionInt64_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MediaAssets.MediaSource.SetMediaOptionFloat
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   Key                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UMediaAssets_MediaSource::SetMediaOptionFloat(const struct FName& Key, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSource.SetMediaOptionFloat");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSource.SetMediaOptionFloat");

	UMediaAssets_MediaSource_SetMediaOptionFloat_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MediaAssets.MediaSource.SetMediaOptionBool
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   Key                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UMediaAssets_MediaSource::SetMediaOptionBool(const struct FName& Key, bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSource.SetMediaOptionBool");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSource.SetMediaOptionBool");

	UMediaAssets_MediaSource_SetMediaOptionBool_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MediaAssets.MediaSource.GetUrl
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UMediaAssets_MediaSource::GetUrl()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSource.GetUrl");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSource.GetUrl");

	UMediaAssets_MediaSource_GetUrl_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.FileMediaSource.SetFilePath
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Path                           (Parm, ZeroConstructor)

void UMediaAssets_FileMediaSource::SetFilePath(const struct FString& Path)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.FileMediaSource.SetFilePath");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.FileMediaSource.SetFilePath");

	UMediaAssets_FileMediaSource_SetFilePath_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MediaAssets.MediaPlayer.SupportsSeeking
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaAssets_MediaPlayer::SupportsSeeking()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SupportsSeeking");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SupportsSeeking");

	UMediaAssets_MediaPlayer_SupportsSeeking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.SupportsScrubbing
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaAssets_MediaPlayer::SupportsScrubbing()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SupportsScrubbing");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SupportsScrubbing");

	UMediaAssets_MediaPlayer_SupportsScrubbing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.SupportsRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Rate                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Unthinned                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaAssets_MediaPlayer::SupportsRate(float Rate, bool Unthinned)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SupportsRate");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SupportsRate");

	UMediaAssets_MediaPlayer_SupportsRate_Params params;
	params.Rate = Rate;
	params.Unthinned = Unthinned;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.SetViewRotation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                Rotation                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           Absolute                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaAssets_MediaPlayer::SetViewRotation(const struct FRotator& Rotation, bool Absolute)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetViewRotation");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetViewRotation");

	UMediaAssets_MediaPlayer_SetViewRotation_Params params;
	params.Rotation = Rotation;
	params.Absolute = Absolute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.SetViewField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Horizontal                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          Vertical                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Absolute                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaAssets_MediaPlayer::SetViewField(float Horizontal, float Vertical, bool Absolute)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetViewField");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetViewField");

	UMediaAssets_MediaPlayer_SetViewField_Params params;
	params.Horizontal = Horizontal;
	params.Vertical = Vertical;
	params.Absolute = Absolute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.SetVideoTrackFrameRate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            FormatIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          FrameRate                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaAssets_MediaPlayer::SetVideoTrackFrameRate(int TrackIndex, int FormatIndex, float FrameRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetVideoTrackFrameRate");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetVideoTrackFrameRate");

	UMediaAssets_MediaPlayer_SetVideoTrackFrameRate_Params params;
	params.TrackIndex = TrackIndex;
	params.FormatIndex = FormatIndex;
	params.FrameRate = FrameRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.SetTrackFormat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// FMediaAssets_MediaAssets_EMediaPlayerTrack TrackType                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            FormatIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaAssets_MediaPlayer::SetTrackFormat(FMediaAssets_MediaAssets_EMediaPlayerTrack TrackType, int TrackIndex, int FormatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetTrackFormat");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetTrackFormat");

	UMediaAssets_MediaPlayer_SetTrackFormat_Params params;
	params.TrackType = TrackType;
	params.TrackIndex = TrackIndex;
	params.FormatIndex = FormatIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.SetTimeDelay
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTimespan               TimeDelay                      (Parm, ZeroConstructor)

void UMediaAssets_MediaPlayer::SetTimeDelay(const struct FTimespan& TimeDelay)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetTimeDelay");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetTimeDelay");

	UMediaAssets_MediaPlayer_SetTimeDelay_Params params;
	params.TimeDelay = TimeDelay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MediaAssets.MediaPlayer.SetRate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Rate                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaAssets_MediaPlayer::SetRate(float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetRate");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetRate");

	UMediaAssets_MediaPlayer_SetRate_Params params;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.SetNativeVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Volume                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaAssets_MediaPlayer::SetNativeVolume(float Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetNativeVolume");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetNativeVolume");

	UMediaAssets_MediaPlayer_SetNativeVolume_Params params;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.SetMediaOptions
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaAssets_MediaSource* Options                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UMediaAssets_MediaPlayer::SetMediaOptions(class UMediaAssets_MediaSource* Options)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetMediaOptions");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetMediaOptions");

	UMediaAssets_MediaPlayer_SetMediaOptions_Params params;
	params.Options = Options;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MediaAssets.MediaPlayer.SetLooping
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Looping                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaAssets_MediaPlayer::SetLooping(bool Looping)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetLooping");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetLooping");

	UMediaAssets_MediaPlayer_SetLooping_Params params;
	params.Looping = Looping;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.SetDesiredPlayerName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   PlayerName                     (Parm, ZeroConstructor, IsPlainOldData)

void UMediaAssets_MediaPlayer::SetDesiredPlayerName(const struct FName& PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetDesiredPlayerName");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetDesiredPlayerName");

	UMediaAssets_MediaPlayer_SetDesiredPlayerName_Params params;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MediaAssets.MediaPlayer.SetBlockOnTime
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTimespan               Time                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMediaAssets_MediaPlayer::SetBlockOnTime(const struct FTimespan& Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetBlockOnTime");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetBlockOnTime");

	UMediaAssets_MediaPlayer_SetBlockOnTime_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MediaAssets.MediaPlayer.SelectTrack
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// FMediaAssets_MediaAssets_EMediaPlayerTrack TrackType                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaAssets_MediaPlayer::SelectTrack(FMediaAssets_MediaAssets_EMediaPlayerTrack TrackType, int TrackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SelectTrack");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SelectTrack");

	UMediaAssets_MediaPlayer_SelectTrack_Params params;
	params.TrackType = TrackType;
	params.TrackIndex = TrackIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.Seek
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTimespan               Time                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaAssets_MediaPlayer::Seek(const struct FTimespan& Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Seek");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Seek");

	UMediaAssets_MediaPlayer_Seek_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.Rewind
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaAssets_MediaPlayer::Rewind()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Rewind");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Rewind");

	UMediaAssets_MediaPlayer_Rewind_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.Reopen
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaAssets_MediaPlayer::Reopen()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Reopen");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Reopen");

	UMediaAssets_MediaPlayer_Reopen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.Previous
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaAssets_MediaPlayer::Previous()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Previous");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Previous");

	UMediaAssets_MediaPlayer_Previous_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.Play
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaAssets_MediaPlayer::Play()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Play");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Play");

	UMediaAssets_MediaPlayer_Play_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.Pause
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaAssets_MediaPlayer::Pause()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Pause");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Pause");

	UMediaAssets_MediaPlayer_Pause_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.OpenUrl
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 URL                            (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaAssets_MediaPlayer::OpenUrl(const struct FString& URL)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.OpenUrl");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.OpenUrl");

	UMediaAssets_MediaPlayer_OpenUrl_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.OpenSourceWithOptions
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UMediaAssets_MediaSource* MediaSource                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FMediaUtils_MediaPlayerOptions Options                        (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaAssets_MediaPlayer::OpenSourceWithOptions(class UMediaAssets_MediaSource* MediaSource, const struct FMediaUtils_MediaPlayerOptions& Options)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.OpenSourceWithOptions");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.OpenSourceWithOptions");

	UMediaAssets_MediaPlayer_OpenSourceWithOptions_Params params;
	params.MediaSource = MediaSource;
	params.Options = Options;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.OpenSourceLatent
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FEngine_LatentActionInfo LatentInfo                     (Parm)
// class UMediaAssets_MediaSource* MediaSource                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FMediaUtils_MediaPlayerOptions Options                        (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMediaAssets_MediaPlayer::OpenSourceLatent(class UObject* WorldContextObject, const struct FEngine_LatentActionInfo& LatentInfo, class UMediaAssets_MediaSource* MediaSource, const struct FMediaUtils_MediaPlayerOptions& Options, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.OpenSourceLatent");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.OpenSourceLatent");

	UMediaAssets_MediaPlayer_OpenSourceLatent_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.MediaSource = MediaSource;
	params.Options = Options;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function MediaAssets.MediaPlayer.OpenSource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaAssets_MediaSource* MediaSource                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaAssets_MediaPlayer::OpenSource(class UMediaAssets_MediaSource* MediaSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.OpenSource");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.OpenSource");

	UMediaAssets_MediaPlayer_OpenSource_Params params;
	params.MediaSource = MediaSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.OpenPlaylistIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaAssets_MediaPlaylist* InPlaylist                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaAssets_MediaPlayer::OpenPlaylistIndex(class UMediaAssets_MediaPlaylist* InPlaylist, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.OpenPlaylistIndex");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.OpenPlaylistIndex");

	UMediaAssets_MediaPlayer_OpenPlaylistIndex_Params params;
	params.InPlaylist = InPlaylist;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.OpenPlaylist
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaAssets_MediaPlaylist* InPlaylist                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaAssets_MediaPlayer::OpenPlaylist(class UMediaAssets_MediaPlaylist* InPlaylist)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.OpenPlaylist");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.OpenPlaylist");

	UMediaAssets_MediaPlayer_OpenPlaylist_Params params;
	params.InPlaylist = InPlaylist;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.OpenFile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 FilePath                       (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaAssets_MediaPlayer::OpenFile(const struct FString& FilePath)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.OpenFile");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.OpenFile");

	UMediaAssets_MediaPlayer_OpenFile_Params params;
	params.FilePath = FilePath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.Next
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaAssets_MediaPlayer::Next()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Next");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Next");

	UMediaAssets_MediaPlayer_Next_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.IsReady
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaAssets_MediaPlayer::IsReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsReady");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsReady");

	UMediaAssets_MediaPlayer_IsReady_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.IsPreparing
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaAssets_MediaPlayer::IsPreparing()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsPreparing");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsPreparing");

	UMediaAssets_MediaPlayer_IsPreparing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.IsPlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaAssets_MediaPlayer::IsPlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsPlaying");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsPlaying");

	UMediaAssets_MediaPlayer_IsPlaying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.IsPaused
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaAssets_MediaPlayer::IsPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsPaused");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsPaused");

	UMediaAssets_MediaPlayer_IsPaused_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.IsLooping
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaAssets_MediaPlayer::IsLooping()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsLooping");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsLooping");

	UMediaAssets_MediaPlayer_IsLooping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.IsConnecting
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaAssets_MediaPlayer::IsConnecting()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsConnecting");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsConnecting");

	UMediaAssets_MediaPlayer_IsConnecting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.IsClosed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaAssets_MediaPlayer::IsClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsClosed");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsClosed");

	UMediaAssets_MediaPlayer_IsClosed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.IsBuffering
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaAssets_MediaPlayer::IsBuffering()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsBuffering");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsBuffering");

	UMediaAssets_MediaPlayer_IsBuffering_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.HasError
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaAssets_MediaPlayer::HasError()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.HasError");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.HasError");

	UMediaAssets_MediaPlayer_HasError_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetViewRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator UMediaAssets_MediaPlayer::GetViewRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetViewRotation");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetViewRotation");

	UMediaAssets_MediaPlayer_GetViewRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetVideoTrackType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            FormatIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UMediaAssets_MediaPlayer::GetVideoTrackType(int TrackIndex, int FormatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetVideoTrackType");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetVideoTrackType");

	UMediaAssets_MediaPlayer_GetVideoTrackType_Params params;
	params.TrackIndex = TrackIndex;
	params.FormatIndex = FormatIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetVideoTrackFrameRates
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            FormatIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FFloatRange             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FFloatRange UMediaAssets_MediaPlayer::GetVideoTrackFrameRates(int TrackIndex, int FormatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetVideoTrackFrameRates");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetVideoTrackFrameRates");

	UMediaAssets_MediaPlayer_GetVideoTrackFrameRates_Params params;
	params.TrackIndex = TrackIndex;
	params.FormatIndex = FormatIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetVideoTrackFrameRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            FormatIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMediaAssets_MediaPlayer::GetVideoTrackFrameRate(int TrackIndex, int FormatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetVideoTrackFrameRate");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetVideoTrackFrameRate");

	UMediaAssets_MediaPlayer_GetVideoTrackFrameRate_Params params;
	params.TrackIndex = TrackIndex;
	params.FormatIndex = FormatIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetVideoTrackDimensions
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            FormatIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FIntPoint               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FIntPoint UMediaAssets_MediaPlayer::GetVideoTrackDimensions(int TrackIndex, int FormatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetVideoTrackDimensions");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetVideoTrackDimensions");

	UMediaAssets_MediaPlayer_GetVideoTrackDimensions_Params params;
	params.TrackIndex = TrackIndex;
	params.FormatIndex = FormatIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetVideoTrackAspectRatio
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            FormatIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMediaAssets_MediaPlayer::GetVideoTrackAspectRatio(int TrackIndex, int FormatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetVideoTrackAspectRatio");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetVideoTrackAspectRatio");

	UMediaAssets_MediaPlayer_GetVideoTrackAspectRatio_Params params;
	params.TrackIndex = TrackIndex;
	params.FormatIndex = FormatIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetVerticalFieldOfView
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMediaAssets_MediaPlayer::GetVerticalFieldOfView()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetVerticalFieldOfView");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetVerticalFieldOfView");

	UMediaAssets_MediaPlayer_GetVerticalFieldOfView_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetUrl
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UMediaAssets_MediaPlayer::GetUrl()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetUrl");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetUrl");

	UMediaAssets_MediaPlayer_GetUrl_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetTrackLanguage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FMediaAssets_MediaAssets_EMediaPlayerTrack TrackType                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UMediaAssets_MediaPlayer::GetTrackLanguage(FMediaAssets_MediaAssets_EMediaPlayerTrack TrackType, int TrackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetTrackLanguage");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetTrackLanguage");

	UMediaAssets_MediaPlayer_GetTrackLanguage_Params params;
	params.TrackType = TrackType;
	params.TrackIndex = TrackIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetTrackFormat
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FMediaAssets_MediaAssets_EMediaPlayerTrack TrackType                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMediaAssets_MediaPlayer::GetTrackFormat(FMediaAssets_MediaAssets_EMediaPlayerTrack TrackType, int TrackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetTrackFormat");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetTrackFormat");

	UMediaAssets_MediaPlayer_GetTrackFormat_Params params;
	params.TrackType = TrackType;
	params.TrackIndex = TrackIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetTrackDisplayName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FMediaAssets_MediaAssets_EMediaPlayerTrack TrackType                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UMediaAssets_MediaPlayer::GetTrackDisplayName(FMediaAssets_MediaAssets_EMediaPlayerTrack TrackType, int TrackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetTrackDisplayName");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetTrackDisplayName");

	UMediaAssets_MediaPlayer_GetTrackDisplayName_Params params;
	params.TrackType = TrackType;
	params.TrackIndex = TrackIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetTimeDelay
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTimespan               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FTimespan UMediaAssets_MediaPlayer::GetTimeDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetTimeDelay");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetTimeDelay");

	UMediaAssets_MediaPlayer_GetTimeDelay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetTime
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTimespan               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FTimespan UMediaAssets_MediaPlayer::GetTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetTime");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetTime");

	UMediaAssets_MediaPlayer_GetTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetSupportedRates
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FFloatRange>     OutRates                       (Parm, OutParm, ZeroConstructor)
// bool                           Unthinned                      (Parm, ZeroConstructor, IsPlainOldData)

void UMediaAssets_MediaPlayer::GetSupportedRates(bool Unthinned, TArray<struct FFloatRange>* OutRates)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetSupportedRates");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetSupportedRates");

	UMediaAssets_MediaPlayer_GetSupportedRates_Params params;
	params.Unthinned = Unthinned;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutRates != nullptr)
		*OutRates = params.OutRates;
}


// Function MediaAssets.MediaPlayer.GetSelectedTrack
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FMediaAssets_MediaAssets_EMediaPlayerTrack TrackType                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMediaAssets_MediaPlayer::GetSelectedTrack(FMediaAssets_MediaAssets_EMediaPlayerTrack TrackType)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetSelectedTrack");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetSelectedTrack");

	UMediaAssets_MediaPlayer_GetSelectedTrack_Params params;
	params.TrackType = TrackType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMediaAssets_MediaPlayer::GetRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetRate");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetRate");

	UMediaAssets_MediaPlayer_GetRate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetPlaylistIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMediaAssets_MediaPlayer::GetPlaylistIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetPlaylistIndex");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetPlaylistIndex");

	UMediaAssets_MediaPlayer_GetPlaylistIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetPlaylist
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMediaAssets_MediaPlaylist* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMediaAssets_MediaPlaylist* UMediaAssets_MediaPlayer::GetPlaylist()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetPlaylist");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetPlaylist");

	UMediaAssets_MediaPlayer_GetPlaylist_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetPlayerName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UMediaAssets_MediaPlayer::GetPlayerName()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetPlayerName");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetPlayerName");

	UMediaAssets_MediaPlayer_GetPlayerName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetNumTracks
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FMediaAssets_MediaAssets_EMediaPlayerTrack TrackType                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMediaAssets_MediaPlayer::GetNumTracks(FMediaAssets_MediaAssets_EMediaPlayerTrack TrackType)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetNumTracks");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetNumTracks");

	UMediaAssets_MediaPlayer_GetNumTracks_Params params;
	params.TrackType = TrackType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetNumTrackFormats
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FMediaAssets_MediaAssets_EMediaPlayerTrack TrackType                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMediaAssets_MediaPlayer::GetNumTrackFormats(FMediaAssets_MediaAssets_EMediaPlayerTrack TrackType, int TrackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetNumTrackFormats");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetNumTrackFormats");

	UMediaAssets_MediaPlayer_GetNumTrackFormats_Params params;
	params.TrackType = TrackType;
	params.TrackIndex = TrackIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetMediaName
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UMediaAssets_MediaPlayer::GetMediaName()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetMediaName");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetMediaName");

	UMediaAssets_MediaPlayer_GetMediaName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetLastVideoSampleProcessedTime
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTimespan               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FTimespan UMediaAssets_MediaPlayer::GetLastVideoSampleProcessedTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetLastVideoSampleProcessedTime");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetLastVideoSampleProcessedTime");

	UMediaAssets_MediaPlayer_GetLastVideoSampleProcessedTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetLastAudioSampleProcessedTime
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTimespan               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FTimespan UMediaAssets_MediaPlayer::GetLastAudioSampleProcessedTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetLastAudioSampleProcessedTime");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetLastAudioSampleProcessedTime");

	UMediaAssets_MediaPlayer_GetLastAudioSampleProcessedTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetHorizontalFieldOfView
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMediaAssets_MediaPlayer::GetHorizontalFieldOfView()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetHorizontalFieldOfView");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetHorizontalFieldOfView");

	UMediaAssets_MediaPlayer_GetHorizontalFieldOfView_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetDuration
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTimespan               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FTimespan UMediaAssets_MediaPlayer::GetDuration()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetDuration");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetDuration");

	UMediaAssets_MediaPlayer_GetDuration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetDesiredPlayerName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UMediaAssets_MediaPlayer::GetDesiredPlayerName()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetDesiredPlayerName");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetDesiredPlayerName");

	UMediaAssets_MediaPlayer_GetDesiredPlayerName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetAudioTrackType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            FormatIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UMediaAssets_MediaPlayer::GetAudioTrackType(int TrackIndex, int FormatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetAudioTrackType");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetAudioTrackType");

	UMediaAssets_MediaPlayer_GetAudioTrackType_Params params;
	params.TrackIndex = TrackIndex;
	params.FormatIndex = FormatIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetAudioTrackSampleRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            FormatIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMediaAssets_MediaPlayer::GetAudioTrackSampleRate(int TrackIndex, int FormatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetAudioTrackSampleRate");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetAudioTrackSampleRate");

	UMediaAssets_MediaPlayer_GetAudioTrackSampleRate_Params params;
	params.TrackIndex = TrackIndex;
	params.FormatIndex = FormatIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetAudioTrackChannels
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            FormatIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMediaAssets_MediaPlayer::GetAudioTrackChannels(int TrackIndex, int FormatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetAudioTrackChannels");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetAudioTrackChannels");

	UMediaAssets_MediaPlayer_GetAudioTrackChannels_Params params;
	params.TrackIndex = TrackIndex;
	params.FormatIndex = FormatIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.Close
// (Final, Native, Public, BlueprintCallable)

void UMediaAssets_MediaPlayer::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Close");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Close");

	UMediaAssets_MediaPlayer_Close_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MediaAssets.MediaPlayer.CanPlayUrl
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 URL                            (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaAssets_MediaPlayer::CanPlayUrl(const struct FString& URL)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.CanPlayUrl");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.CanPlayUrl");

	UMediaAssets_MediaPlayer_CanPlayUrl_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.CanPlaySource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaAssets_MediaSource* MediaSource                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaAssets_MediaPlayer::CanPlaySource(class UMediaAssets_MediaSource* MediaSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.CanPlaySource");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.CanPlaySource");

	UMediaAssets_MediaPlayer_CanPlaySource_Params params;
	params.MediaSource = MediaSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.CanPause
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaAssets_MediaPlayer::CanPause()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.CanPause");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.CanPause");

	UMediaAssets_MediaPlayer_CanPause_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlaylist.Replace
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UMediaAssets_MediaSource* Replacement                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaAssets_MediaPlaylist::Replace(int Index, class UMediaAssets_MediaSource* Replacement)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.Replace");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.Replace");

	UMediaAssets_MediaPlaylist_Replace_Params params;
	params.Index = Index;
	params.Replacement = Replacement;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlaylist.RemoveAt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaAssets_MediaPlaylist::RemoveAt(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.RemoveAt");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.RemoveAt");

	UMediaAssets_MediaPlaylist_RemoveAt_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlaylist.Remove
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaAssets_MediaSource* MediaSource                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaAssets_MediaPlaylist::Remove(class UMediaAssets_MediaSource* MediaSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.Remove");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.Remove");

	UMediaAssets_MediaPlaylist_Remove_Params params;
	params.MediaSource = MediaSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlaylist.Num
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMediaAssets_MediaPlaylist::Num()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.Num");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.Num");

	UMediaAssets_MediaPlaylist_Num_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlaylist.Insert
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaAssets_MediaSource* MediaSource                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UMediaAssets_MediaPlaylist::Insert(class UMediaAssets_MediaSource* MediaSource, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.Insert");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.Insert");

	UMediaAssets_MediaPlaylist_Insert_Params params;
	params.MediaSource = MediaSource;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MediaAssets.MediaPlaylist.GetRandom
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            OutIndex                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UMediaAssets_MediaSource* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMediaAssets_MediaSource* UMediaAssets_MediaPlaylist::GetRandom(int* OutIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.GetRandom");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.GetRandom");

	UMediaAssets_MediaPlaylist_GetRandom_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIndex != nullptr)
		*OutIndex = params.OutIndex;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlaylist.GetPrevious
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            InOutIndex                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UMediaAssets_MediaSource* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMediaAssets_MediaSource* UMediaAssets_MediaPlaylist::GetPrevious(int* InOutIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.GetPrevious");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.GetPrevious");

	UMediaAssets_MediaPlaylist_GetPrevious_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InOutIndex != nullptr)
		*InOutIndex = params.InOutIndex;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlaylist.GetNext
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            InOutIndex                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UMediaAssets_MediaSource* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMediaAssets_MediaSource* UMediaAssets_MediaPlaylist::GetNext(int* InOutIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.GetNext");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.GetNext");

	UMediaAssets_MediaPlaylist_GetNext_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InOutIndex != nullptr)
		*InOutIndex = params.InOutIndex;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlaylist.Get
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UMediaAssets_MediaSource* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMediaAssets_MediaSource* UMediaAssets_MediaPlaylist::Get(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.Get");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.Get");

	UMediaAssets_MediaPlaylist_Get_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlaylist.AddUrl
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 URL                            (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaAssets_MediaPlaylist::AddUrl(const struct FString& URL)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.AddUrl");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.AddUrl");

	UMediaAssets_MediaPlaylist_AddUrl_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlaylist.AddFile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 FilePath                       (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaAssets_MediaPlaylist::AddFile(const struct FString& FilePath)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.AddFile");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.AddFile");

	UMediaAssets_MediaPlaylist_AddFile_Params params;
	params.FilePath = FilePath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlaylist.Add
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaAssets_MediaSource* MediaSource                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaAssets_MediaPlaylist::Add(class UMediaAssets_MediaSource* MediaSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.Add");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.Add");

	UMediaAssets_MediaPlaylist_Add_Params params;
	params.MediaSource = MediaSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaSoundComponent.SetSpectralAnalysisSettings
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<float>                  InFrequenciesToAnalyze         (Parm, ZeroConstructor)
// FMediaAssets_MediaAssets_EMediaSoundComponentFFTSize InFFTSize                      (Parm, ZeroConstructor, IsPlainOldData)

void UMediaAssets_MediaSoundComponent::SetSpectralAnalysisSettings(TArray<float> InFrequenciesToAnalyze, FMediaAssets_MediaAssets_EMediaSoundComponentFFTSize InFFTSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSoundComponent.SetSpectralAnalysisSettings");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSoundComponent.SetSpectralAnalysisSettings");

	UMediaAssets_MediaSoundComponent_SetSpectralAnalysisSettings_Params params;
	params.InFrequenciesToAnalyze = InFrequenciesToAnalyze;
	params.InFFTSize = InFFTSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MediaAssets.MediaSoundComponent.SetMediaPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaAssets_MediaPlayer* NewMediaPlayer                 (Parm, ZeroConstructor, IsPlainOldData)

void UMediaAssets_MediaSoundComponent::SetMediaPlayer(class UMediaAssets_MediaPlayer* NewMediaPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSoundComponent.SetMediaPlayer");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSoundComponent.SetMediaPlayer");

	UMediaAssets_MediaSoundComponent_SetMediaPlayer_Params params;
	params.NewMediaPlayer = NewMediaPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MediaAssets.MediaSoundComponent.SetEnvelopeFollowingsettings
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            AttackTimeMsec                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReleaseTimeMsec                (Parm, ZeroConstructor, IsPlainOldData)

void UMediaAssets_MediaSoundComponent::SetEnvelopeFollowingsettings(int AttackTimeMsec, int ReleaseTimeMsec)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSoundComponent.SetEnvelopeFollowingsettings");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSoundComponent.SetEnvelopeFollowingsettings");

	UMediaAssets_MediaSoundComponent_SetEnvelopeFollowingsettings_Params params;
	params.AttackTimeMsec = AttackTimeMsec;
	params.ReleaseTimeMsec = ReleaseTimeMsec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MediaAssets.MediaSoundComponent.SetEnableSpectralAnalysis
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInSpectralAnalysisEnabled     (Parm, ZeroConstructor, IsPlainOldData)

void UMediaAssets_MediaSoundComponent::SetEnableSpectralAnalysis(bool bInSpectralAnalysisEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSoundComponent.SetEnableSpectralAnalysis");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSoundComponent.SetEnableSpectralAnalysis");

	UMediaAssets_MediaSoundComponent_SetEnableSpectralAnalysis_Params params;
	params.bInSpectralAnalysisEnabled = bInSpectralAnalysisEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MediaAssets.MediaSoundComponent.SetEnableEnvelopeFollowing
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInEnvelopeFollowing           (Parm, ZeroConstructor, IsPlainOldData)

void UMediaAssets_MediaSoundComponent::SetEnableEnvelopeFollowing(bool bInEnvelopeFollowing)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSoundComponent.SetEnableEnvelopeFollowing");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSoundComponent.SetEnableEnvelopeFollowing");

	UMediaAssets_MediaSoundComponent_SetEnableEnvelopeFollowing_Params params;
	params.bInEnvelopeFollowing = bInEnvelopeFollowing;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MediaAssets.MediaSoundComponent.GetSpectralData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FMediaAssets_MediaSoundComponentSpectralData> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMediaAssets_MediaSoundComponentSpectralData> UMediaAssets_MediaSoundComponent::GetSpectralData()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSoundComponent.GetSpectralData");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSoundComponent.GetSpectralData");

	UMediaAssets_MediaSoundComponent_GetSpectralData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaSoundComponent.GetMediaPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMediaAssets_MediaPlayer* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMediaAssets_MediaPlayer* UMediaAssets_MediaSoundComponent::GetMediaPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSoundComponent.GetMediaPlayer");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSoundComponent.GetMediaPlayer");

	UMediaAssets_MediaSoundComponent_GetMediaPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaSoundComponent.GetEnvelopeValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMediaAssets_MediaSoundComponent::GetEnvelopeValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSoundComponent.GetEnvelopeValue");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSoundComponent.GetEnvelopeValue");

	UMediaAssets_MediaSoundComponent_GetEnvelopeValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaSoundComponent.BP_GetAttenuationSettingsToApply
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FEngine_SoundAttenuationSettings OutAttenuationSettings         (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaAssets_MediaSoundComponent::BP_GetAttenuationSettingsToApply(struct FEngine_SoundAttenuationSettings* OutAttenuationSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSoundComponent.BP_GetAttenuationSettingsToApply");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSoundComponent.BP_GetAttenuationSettingsToApply");

	UMediaAssets_MediaSoundComponent_BP_GetAttenuationSettingsToApply_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAttenuationSettings != nullptr)
		*OutAttenuationSettings = params.OutAttenuationSettings;

	return params.ReturnValue;
}


// Function MediaAssets.MediaTexture.SetMediaPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaAssets_MediaPlayer* NewMediaPlayer                 (Parm, ZeroConstructor, IsPlainOldData)

void UMediaAssets_MediaTexture::SetMediaPlayer(class UMediaAssets_MediaPlayer* NewMediaPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaTexture.SetMediaPlayer");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaTexture.SetMediaPlayer");

	UMediaAssets_MediaTexture_SetMediaPlayer_Params params;
	params.NewMediaPlayer = NewMediaPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MediaAssets.MediaTexture.GetWidth
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMediaAssets_MediaTexture::GetWidth()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaTexture.GetWidth");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaTexture.GetWidth");

	UMediaAssets_MediaTexture_GetWidth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaTexture.GetMediaPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMediaAssets_MediaPlayer* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMediaAssets_MediaPlayer* UMediaAssets_MediaTexture::GetMediaPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaTexture.GetMediaPlayer");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaTexture.GetMediaPlayer");

	UMediaAssets_MediaTexture_GetMediaPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaTexture.GetHeight
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMediaAssets_MediaTexture::GetHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaTexture.GetHeight");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaTexture.GetHeight");

	UMediaAssets_MediaTexture_GetHeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaTexture.GetAspectRatio
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMediaAssets_MediaTexture::GetAspectRatio()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaTexture.GetAspectRatio");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaTexture.GetAspectRatio");

	UMediaAssets_MediaTexture_GetAspectRatio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateWebcamCaptureDevices
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FMediaAssets_MediaCaptureDevice> OutDevices                     (Parm, OutParm, ZeroConstructor)
// int                            Filter                         (Parm, ZeroConstructor, IsPlainOldData)

void UMediaAssets_MediaBlueprintFunctionLibrary::STATIC_EnumerateWebcamCaptureDevices(int Filter, TArray<struct FMediaAssets_MediaCaptureDevice>* OutDevices)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateWebcamCaptureDevices");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateWebcamCaptureDevices");

	UMediaAssets_MediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices_Params params;
	params.Filter = Filter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutDevices != nullptr)
		*OutDevices = params.OutDevices;
}


// Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateVideoCaptureDevices
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FMediaAssets_MediaCaptureDevice> OutDevices                     (Parm, OutParm, ZeroConstructor)
// int                            Filter                         (Parm, ZeroConstructor, IsPlainOldData)

void UMediaAssets_MediaBlueprintFunctionLibrary::STATIC_EnumerateVideoCaptureDevices(int Filter, TArray<struct FMediaAssets_MediaCaptureDevice>* OutDevices)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateVideoCaptureDevices");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateVideoCaptureDevices");

	UMediaAssets_MediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices_Params params;
	params.Filter = Filter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutDevices != nullptr)
		*OutDevices = params.OutDevices;
}


// Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateAudioCaptureDevices
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FMediaAssets_MediaCaptureDevice> OutDevices                     (Parm, OutParm, ZeroConstructor)
// int                            Filter                         (Parm, ZeroConstructor, IsPlainOldData)

void UMediaAssets_MediaBlueprintFunctionLibrary::STATIC_EnumerateAudioCaptureDevices(int Filter, TArray<struct FMediaAssets_MediaCaptureDevice>* OutDevices)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateAudioCaptureDevices");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateAudioCaptureDevices");

	UMediaAssets_MediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices_Params params;
	params.Filter = Filter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutDevices != nullptr)
		*OutDevices = params.OutDevices;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
