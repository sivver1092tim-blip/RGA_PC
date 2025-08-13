
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

// Function MovieSceneCapture.MovieSceneCaptureProtocolBase.IsCapturing
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMovieSceneCapture_MovieSceneCaptureProtocolBase::IsCapturing()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCaptureProtocolBase.IsCapturing");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCaptureProtocolBase.IsCapturing");

	UMovieSceneCapture_MovieSceneCaptureProtocolBase_IsCapturing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieSceneCapture.MovieSceneCaptureProtocolBase.GetState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FMovieSceneCapture_MovieSceneCapture_EMovieSceneCaptureProtocolState ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FMovieSceneCapture_MovieSceneCapture_EMovieSceneCaptureProtocolState UMovieSceneCapture_MovieSceneCaptureProtocolBase::GetState()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCaptureProtocolBase.GetState");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCaptureProtocolBase.GetState");

	UMovieSceneCapture_MovieSceneCaptureProtocolBase_GetState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieSceneCapture.MovieSceneCapture.SetImageCaptureProtocolType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  ProtocolType                   (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneCapture_MovieSceneCapture::SetImageCaptureProtocolType(class UClass* ProtocolType)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCapture.SetImageCaptureProtocolType");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCapture.SetImageCaptureProtocolType");

	UMovieSceneCapture_MovieSceneCapture_SetImageCaptureProtocolType_Params params;
	params.ProtocolType = ProtocolType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneCapture.MovieSceneCapture.SetAudioCaptureProtocolType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  ProtocolType                   (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneCapture_MovieSceneCapture::SetAudioCaptureProtocolType(class UClass* ProtocolType)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCapture.SetAudioCaptureProtocolType");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCapture.SetAudioCaptureProtocolType");

	UMovieSceneCapture_MovieSceneCapture_SetAudioCaptureProtocolType_Params params;
	params.ProtocolType = ProtocolType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneCapture.MovieSceneCapture.GetImageCaptureProtocol
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneCapture_MovieSceneCaptureProtocolBase* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMovieSceneCapture_MovieSceneCaptureProtocolBase* UMovieSceneCapture_MovieSceneCapture::GetImageCaptureProtocol()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCapture.GetImageCaptureProtocol");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCapture.GetImageCaptureProtocol");

	UMovieSceneCapture_MovieSceneCapture_GetImageCaptureProtocol_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieSceneCapture.MovieSceneCapture.GetAudioCaptureProtocol
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneCapture_MovieSceneCaptureProtocolBase* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMovieSceneCapture_MovieSceneCaptureProtocolBase* UMovieSceneCapture_MovieSceneCapture::GetAudioCaptureProtocol()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCapture.GetAudioCaptureProtocol");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCapture.GetAudioCaptureProtocol");

	UMovieSceneCapture_MovieSceneCapture_GetAudioCaptureProtocol_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieSceneCapture.MovieSceneCaptureEnvironment.IsCaptureInProgress
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMovieSceneCapture_MovieSceneCaptureEnvironment::STATIC_IsCaptureInProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCaptureEnvironment.IsCaptureInProgress");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCaptureEnvironment.IsCaptureInProgress");

	UMovieSceneCapture_MovieSceneCaptureEnvironment_IsCaptureInProgress_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureFrameNumber
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMovieSceneCapture_MovieSceneCaptureEnvironment::STATIC_GetCaptureFrameNumber()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureFrameNumber");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureFrameNumber");

	UMovieSceneCapture_MovieSceneCaptureEnvironment_GetCaptureFrameNumber_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureElapsedTime
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMovieSceneCapture_MovieSceneCaptureEnvironment::STATIC_GetCaptureElapsedTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureElapsedTime");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureElapsedTime");

	UMovieSceneCapture_MovieSceneCaptureEnvironment_GetCaptureElapsedTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindImageCaptureProtocol
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneCapture_MovieSceneImageCaptureProtocolBase* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMovieSceneCapture_MovieSceneImageCaptureProtocolBase* UMovieSceneCapture_MovieSceneCaptureEnvironment::STATIC_FindImageCaptureProtocol()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindImageCaptureProtocol");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindImageCaptureProtocol");

	UMovieSceneCapture_MovieSceneCaptureEnvironment_FindImageCaptureProtocol_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindAudioCaptureProtocol
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneCapture_MovieSceneAudioCaptureProtocolBase* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMovieSceneCapture_MovieSceneAudioCaptureProtocolBase* UMovieSceneCapture_MovieSceneCaptureEnvironment::STATIC_FindAudioCaptureProtocol()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindAudioCaptureProtocol");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindAudioCaptureProtocol");

	UMovieSceneCapture_MovieSceneCaptureEnvironment_FindAudioCaptureProtocol_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.StopCapturingFinalPixels
// (Final, Native, Public, BlueprintCallable)

void UMovieSceneCapture_UserDefinedCaptureProtocol::StopCapturingFinalPixels()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.StopCapturingFinalPixels");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.StopCapturingFinalPixels");

	UMovieSceneCapture_UserDefinedCaptureProtocol_StopCapturingFinalPixels_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.StartCapturingFinalPixels
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMovieSceneCapture_CapturedPixelsID StreamID                       (ConstParm, Parm, OutParm, ReferenceParm)

void UMovieSceneCapture_UserDefinedCaptureProtocol::StartCapturingFinalPixels(const struct FMovieSceneCapture_CapturedPixelsID& StreamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.StartCapturingFinalPixels");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.StartCapturingFinalPixels");

	UMovieSceneCapture_UserDefinedCaptureProtocol_StartCapturingFinalPixels_Params params;
	params.StreamID = StreamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.ResolveBuffer
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UEngine_Texture*         Buffer                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FMovieSceneCapture_CapturedPixelsID BufferID                       (ConstParm, Parm, OutParm, ReferenceParm)

void UMovieSceneCapture_UserDefinedCaptureProtocol::ResolveBuffer(class UEngine_Texture* Buffer, const struct FMovieSceneCapture_CapturedPixelsID& BufferID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.ResolveBuffer");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.ResolveBuffer");

	UMovieSceneCapture_UserDefinedCaptureProtocol_ResolveBuffer_Params params;
	params.Buffer = Buffer;
	params.BufferID = BufferID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnWarmUp
// (Event, Protected, BlueprintEvent)

void UMovieSceneCapture_UserDefinedCaptureProtocol::OnWarmUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnWarmUp");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnWarmUp");

	UMovieSceneCapture_UserDefinedCaptureProtocol_OnWarmUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnTick
// (Event, Protected, BlueprintEvent)

void UMovieSceneCapture_UserDefinedCaptureProtocol::OnTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnTick");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnTick");

	UMovieSceneCapture_UserDefinedCaptureProtocol_OnTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnStartCapture
// (Event, Protected, BlueprintEvent)

void UMovieSceneCapture_UserDefinedCaptureProtocol::OnStartCapture()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnStartCapture");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnStartCapture");

	UMovieSceneCapture_UserDefinedCaptureProtocol_OnStartCapture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnSetup
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMovieSceneCapture_UserDefinedCaptureProtocol::OnSetup()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnSetup");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnSetup");

	UMovieSceneCapture_UserDefinedCaptureProtocol_OnSetup_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPreTick
// (Event, Protected, BlueprintEvent)

void UMovieSceneCapture_UserDefinedCaptureProtocol::OnPreTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPreTick");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPreTick");

	UMovieSceneCapture_UserDefinedCaptureProtocol_OnPreTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPixelsReceived
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FMovieSceneCapture_CapturedPixels Pixels                         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FMovieSceneCapture_CapturedPixelsID ID                             (ConstParm, Parm, OutParm, ReferenceParm)
// struct FMovieSceneCapture_FrameMetrics FrameMetrics                   (Parm)

void UMovieSceneCapture_UserDefinedCaptureProtocol::OnPixelsReceived(const struct FMovieSceneCapture_CapturedPixels& Pixels, const struct FMovieSceneCapture_CapturedPixelsID& ID, const struct FMovieSceneCapture_FrameMetrics& FrameMetrics)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPixelsReceived");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPixelsReceived");

	UMovieSceneCapture_UserDefinedCaptureProtocol_OnPixelsReceived_Params params;
	params.Pixels = Pixels;
	params.ID = ID;
	params.FrameMetrics = FrameMetrics;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPauseCapture
// (Event, Protected, BlueprintEvent)

void UMovieSceneCapture_UserDefinedCaptureProtocol::OnPauseCapture()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPauseCapture");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPauseCapture");

	UMovieSceneCapture_UserDefinedCaptureProtocol_OnPauseCapture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnFinalize
// (Event, Protected, BlueprintEvent)

void UMovieSceneCapture_UserDefinedCaptureProtocol::OnFinalize()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnFinalize");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnFinalize");

	UMovieSceneCapture_UserDefinedCaptureProtocol_OnFinalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCaptureFrame
// (Event, Protected, BlueprintEvent)

void UMovieSceneCapture_UserDefinedCaptureProtocol::OnCaptureFrame()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCaptureFrame");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCaptureFrame");

	UMovieSceneCapture_UserDefinedCaptureProtocol_OnCaptureFrame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCanFinalize
// (Native, Event, Protected, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMovieSceneCapture_UserDefinedCaptureProtocol::OnCanFinalize()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCanFinalize");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCanFinalize");

	UMovieSceneCapture_UserDefinedCaptureProtocol_OnCanFinalize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnBeginFinalize
// (Event, Protected, BlueprintEvent)

void UMovieSceneCapture_UserDefinedCaptureProtocol::OnBeginFinalize()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnBeginFinalize");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnBeginFinalize");

	UMovieSceneCapture_UserDefinedCaptureProtocol_OnBeginFinalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.GetCurrentFrameMetrics
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMovieSceneCapture_FrameMetrics ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMovieSceneCapture_FrameMetrics UMovieSceneCapture_UserDefinedCaptureProtocol::GetCurrentFrameMetrics()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.GetCurrentFrameMetrics");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.GetCurrentFrameMetrics");

	UMovieSceneCapture_UserDefinedCaptureProtocol_GetCurrentFrameMetrics_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.GenerateFilename
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMovieSceneCapture_FrameMetrics InFrameMetrics                 (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UMovieSceneCapture_UserDefinedCaptureProtocol::GenerateFilename(const struct FMovieSceneCapture_FrameMetrics& InFrameMetrics)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.GenerateFilename");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.GenerateFilename");

	UMovieSceneCapture_UserDefinedCaptureProtocol_GenerateFilename_Params params;
	params.InFrameMetrics = InFrameMetrics;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieSceneCapture.UserDefinedImageCaptureProtocol.WriteImageToDisk
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMovieSceneCapture_CapturedPixels PixelData                      (ConstParm, Parm, OutParm, ReferenceParm)
// struct FMovieSceneCapture_CapturedPixelsID StreamID                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FMovieSceneCapture_FrameMetrics FrameMetrics                   (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bCopyImageData                 (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneCapture_UserDefinedImageCaptureProtocol::WriteImageToDisk(const struct FMovieSceneCapture_CapturedPixels& PixelData, const struct FMovieSceneCapture_CapturedPixelsID& StreamID, const struct FMovieSceneCapture_FrameMetrics& FrameMetrics, bool bCopyImageData)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedImageCaptureProtocol.WriteImageToDisk");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedImageCaptureProtocol.WriteImageToDisk");

	UMovieSceneCapture_UserDefinedImageCaptureProtocol_WriteImageToDisk_Params params;
	params.PixelData = PixelData;
	params.StreamID = StreamID;
	params.FrameMetrics = FrameMetrics;
	params.bCopyImageData = bCopyImageData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForCurrentFrame
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UMovieSceneCapture_UserDefinedImageCaptureProtocol::GenerateFilenameForCurrentFrame()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForCurrentFrame");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForCurrentFrame");

	UMovieSceneCapture_UserDefinedImageCaptureProtocol_GenerateFilenameForCurrentFrame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForBuffer
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UEngine_Texture*         Buffer                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FMovieSceneCapture_CapturedPixelsID StreamID                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UMovieSceneCapture_UserDefinedImageCaptureProtocol::GenerateFilenameForBuffer(class UEngine_Texture* Buffer, const struct FMovieSceneCapture_CapturedPixelsID& StreamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForBuffer");

	if (!fn)
		fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForBuffer");

	UMovieSceneCapture_UserDefinedImageCaptureProtocol_GenerateFilenameForBuffer_Params params;
	params.Buffer = Buffer;
	params.StreamID = StreamID;

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
