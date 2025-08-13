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

// Function MovieSceneCapture.MovieSceneCaptureProtocolBase.IsCapturing
struct UMovieSceneCapture_MovieSceneCaptureProtocolBase_IsCapturing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieSceneCapture.MovieSceneCaptureProtocolBase.GetState
struct UMovieSceneCapture_MovieSceneCaptureProtocolBase_GetState_Params
{
	FMovieSceneCapture_MovieSceneCapture_EMovieSceneCaptureProtocolState ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieSceneCapture.MovieSceneCapture.SetImageCaptureProtocolType
struct UMovieSceneCapture_MovieSceneCapture_SetImageCaptureProtocolType_Params
{
	class UClass*                                      ProtocolType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieSceneCapture.MovieSceneCapture.SetAudioCaptureProtocolType
struct UMovieSceneCapture_MovieSceneCapture_SetAudioCaptureProtocolType_Params
{
	class UClass*                                      ProtocolType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieSceneCapture.MovieSceneCapture.GetImageCaptureProtocol
struct UMovieSceneCapture_MovieSceneCapture_GetImageCaptureProtocol_Params
{
	class UMovieSceneCapture_MovieSceneCaptureProtocolBase* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieSceneCapture.MovieSceneCapture.GetAudioCaptureProtocol
struct UMovieSceneCapture_MovieSceneCapture_GetAudioCaptureProtocol_Params
{
	class UMovieSceneCapture_MovieSceneCaptureProtocolBase* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieSceneCapture.MovieSceneCaptureEnvironment.IsCaptureInProgress
struct UMovieSceneCapture_MovieSceneCaptureEnvironment_IsCaptureInProgress_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureFrameNumber
struct UMovieSceneCapture_MovieSceneCaptureEnvironment_GetCaptureFrameNumber_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureElapsedTime
struct UMovieSceneCapture_MovieSceneCaptureEnvironment_GetCaptureElapsedTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindImageCaptureProtocol
struct UMovieSceneCapture_MovieSceneCaptureEnvironment_FindImageCaptureProtocol_Params
{
	class UMovieSceneCapture_MovieSceneImageCaptureProtocolBase* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindAudioCaptureProtocol
struct UMovieSceneCapture_MovieSceneCaptureEnvironment_FindAudioCaptureProtocol_Params
{
	class UMovieSceneCapture_MovieSceneAudioCaptureProtocolBase* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.StopCapturingFinalPixels
struct UMovieSceneCapture_UserDefinedCaptureProtocol_StopCapturingFinalPixels_Params
{
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.StartCapturingFinalPixels
struct UMovieSceneCapture_UserDefinedCaptureProtocol_StartCapturingFinalPixels_Params
{
	struct FMovieSceneCapture_CapturedPixelsID         StreamID;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.ResolveBuffer
struct UMovieSceneCapture_UserDefinedCaptureProtocol_ResolveBuffer_Params
{
	class UEngine_Texture*                             Buffer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMovieSceneCapture_CapturedPixelsID         BufferID;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnWarmUp
struct UMovieSceneCapture_UserDefinedCaptureProtocol_OnWarmUp_Params
{
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnTick
struct UMovieSceneCapture_UserDefinedCaptureProtocol_OnTick_Params
{
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnStartCapture
struct UMovieSceneCapture_UserDefinedCaptureProtocol_OnStartCapture_Params
{
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnSetup
struct UMovieSceneCapture_UserDefinedCaptureProtocol_OnSetup_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPreTick
struct UMovieSceneCapture_UserDefinedCaptureProtocol_OnPreTick_Params
{
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPixelsReceived
struct UMovieSceneCapture_UserDefinedCaptureProtocol_OnPixelsReceived_Params
{
	struct FMovieSceneCapture_CapturedPixels           Pixels;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FMovieSceneCapture_CapturedPixelsID         ID;                                                       // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FMovieSceneCapture_FrameMetrics             FrameMetrics;                                             // (Parm)
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPauseCapture
struct UMovieSceneCapture_UserDefinedCaptureProtocol_OnPauseCapture_Params
{
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnFinalize
struct UMovieSceneCapture_UserDefinedCaptureProtocol_OnFinalize_Params
{
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCaptureFrame
struct UMovieSceneCapture_UserDefinedCaptureProtocol_OnCaptureFrame_Params
{
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCanFinalize
struct UMovieSceneCapture_UserDefinedCaptureProtocol_OnCanFinalize_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnBeginFinalize
struct UMovieSceneCapture_UserDefinedCaptureProtocol_OnBeginFinalize_Params
{
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.GetCurrentFrameMetrics
struct UMovieSceneCapture_UserDefinedCaptureProtocol_GetCurrentFrameMetrics_Params
{
	struct FMovieSceneCapture_FrameMetrics             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.GenerateFilename
struct UMovieSceneCapture_UserDefinedCaptureProtocol_GenerateFilename_Params
{
	struct FMovieSceneCapture_FrameMetrics             InFrameMetrics;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MovieSceneCapture.UserDefinedImageCaptureProtocol.WriteImageToDisk
struct UMovieSceneCapture_UserDefinedImageCaptureProtocol_WriteImageToDisk_Params
{
	struct FMovieSceneCapture_CapturedPixels           PixelData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FMovieSceneCapture_CapturedPixelsID         StreamID;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FMovieSceneCapture_FrameMetrics             FrameMetrics;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bCopyImageData;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForCurrentFrame
struct UMovieSceneCapture_UserDefinedImageCaptureProtocol_GenerateFilenameForCurrentFrame_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForBuffer
struct UMovieSceneCapture_UserDefinedImageCaptureProtocol_GenerateFilenameForBuffer_Params
{
	class UEngine_Texture*                             Buffer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMovieSceneCapture_CapturedPixelsID         StreamID;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
