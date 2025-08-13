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

// Function MediaAssets.MediaSource.Validate
struct UMediaAssets_MediaSource_Validate_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaSource.SetMediaOptionString
struct UMediaAssets_MediaSource_SetMediaOptionString_Params
{
	struct FName                                       Key;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
};

// Function MediaAssets.MediaSource.SetMediaOptionInt64
struct UMediaAssets_MediaSource_SetMediaOptionInt64_Params
{
	struct FName                                       Key;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int64_t                                            Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MediaAssets.MediaSource.SetMediaOptionFloat
struct UMediaAssets_MediaSource_SetMediaOptionFloat_Params
{
	struct FName                                       Key;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MediaAssets.MediaSource.SetMediaOptionBool
struct UMediaAssets_MediaSource_SetMediaOptionBool_Params
{
	struct FName                                       Key;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MediaAssets.MediaSource.GetUrl
struct UMediaAssets_MediaSource_GetUrl_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MediaAssets.FileMediaSource.SetFilePath
struct UMediaAssets_FileMediaSource_SetFilePath_Params
{
	struct FString                                     Path;                                                     // (Parm, ZeroConstructor)
};

// Function MediaAssets.MediaPlayer.SupportsSeeking
struct UMediaAssets_MediaPlayer_SupportsSeeking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.SupportsScrubbing
struct UMediaAssets_MediaPlayer_SupportsScrubbing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.SupportsRate
struct UMediaAssets_MediaPlayer_SupportsRate_Params
{
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Unthinned;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.SetViewRotation
struct UMediaAssets_MediaPlayer_SetViewRotation_Params
{
	struct FRotator                                    Rotation;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               Absolute;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.SetViewField
struct UMediaAssets_MediaPlayer_SetViewField_Params
{
	float                                              Horizontal;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Vertical;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Absolute;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.SetVideoTrackFrameRate
struct UMediaAssets_MediaPlayer_SetVideoTrackFrameRate_Params
{
	int                                                TrackIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FormatIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FrameRate;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.SetTrackFormat
struct UMediaAssets_MediaPlayer_SetTrackFormat_Params
{
	FMediaAssets_MediaAssets_EMediaPlayerTrack         TrackType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TrackIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FormatIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.SetTimeDelay
struct UMediaAssets_MediaPlayer_SetTimeDelay_Params
{
	struct FTimespan                                   TimeDelay;                                                // (Parm, ZeroConstructor)
};

// Function MediaAssets.MediaPlayer.SetRate
struct UMediaAssets_MediaPlayer_SetRate_Params
{
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.SetNativeVolume
struct UMediaAssets_MediaPlayer_SetNativeVolume_Params
{
	float                                              Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.SetMediaOptions
struct UMediaAssets_MediaPlayer_SetMediaOptions_Params
{
	class UMediaAssets_MediaSource*                    Options;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.SetLooping
struct UMediaAssets_MediaPlayer_SetLooping_Params
{
	bool                                               Looping;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.SetDesiredPlayerName
struct UMediaAssets_MediaPlayer_SetDesiredPlayerName_Params
{
	struct FName                                       PlayerName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.SetBlockOnTime
struct UMediaAssets_MediaPlayer_SetBlockOnTime_Params
{
	struct FTimespan                                   Time;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MediaAssets.MediaPlayer.SelectTrack
struct UMediaAssets_MediaPlayer_SelectTrack_Params
{
	FMediaAssets_MediaAssets_EMediaPlayerTrack         TrackType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TrackIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.Seek
struct UMediaAssets_MediaPlayer_Seek_Params
{
	struct FTimespan                                   Time;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.Rewind
struct UMediaAssets_MediaPlayer_Rewind_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.Reopen
struct UMediaAssets_MediaPlayer_Reopen_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.Previous
struct UMediaAssets_MediaPlayer_Previous_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.Play
struct UMediaAssets_MediaPlayer_Play_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.Pause
struct UMediaAssets_MediaPlayer_Pause_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.OpenUrl
struct UMediaAssets_MediaPlayer_OpenUrl_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.OpenSourceWithOptions
struct UMediaAssets_MediaPlayer_OpenSourceWithOptions_Params
{
	class UMediaAssets_MediaSource*                    MediaSource;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMediaUtils_MediaPlayerOptions              Options;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.OpenSourceLatent
struct UMediaAssets_MediaPlayer_OpenSourceLatent_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FEngine_LatentActionInfo                    LatentInfo;                                               // (Parm)
	class UMediaAssets_MediaSource*                    MediaSource;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMediaUtils_MediaPlayerOptions              Options;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.OpenSource
struct UMediaAssets_MediaPlayer_OpenSource_Params
{
	class UMediaAssets_MediaSource*                    MediaSource;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.OpenPlaylistIndex
struct UMediaAssets_MediaPlayer_OpenPlaylistIndex_Params
{
	class UMediaAssets_MediaPlaylist*                  InPlaylist;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.OpenPlaylist
struct UMediaAssets_MediaPlayer_OpenPlaylist_Params
{
	class UMediaAssets_MediaPlaylist*                  InPlaylist;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.OpenFile
struct UMediaAssets_MediaPlayer_OpenFile_Params
{
	struct FString                                     FilePath;                                                 // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.Next
struct UMediaAssets_MediaPlayer_Next_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.IsReady
struct UMediaAssets_MediaPlayer_IsReady_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.IsPreparing
struct UMediaAssets_MediaPlayer_IsPreparing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.IsPlaying
struct UMediaAssets_MediaPlayer_IsPlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.IsPaused
struct UMediaAssets_MediaPlayer_IsPaused_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.IsLooping
struct UMediaAssets_MediaPlayer_IsLooping_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.IsConnecting
struct UMediaAssets_MediaPlayer_IsConnecting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.IsClosed
struct UMediaAssets_MediaPlayer_IsClosed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.IsBuffering
struct UMediaAssets_MediaPlayer_IsBuffering_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.HasError
struct UMediaAssets_MediaPlayer_HasError_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.GetViewRotation
struct UMediaAssets_MediaPlayer_GetViewRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.GetVideoTrackType
struct UMediaAssets_MediaPlayer_GetVideoTrackType_Params
{
	int                                                TrackIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FormatIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MediaAssets.MediaPlayer.GetVideoTrackFrameRates
struct UMediaAssets_MediaPlayer_GetVideoTrackFrameRates_Params
{
	int                                                TrackIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FormatIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFloatRange                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.GetVideoTrackFrameRate
struct UMediaAssets_MediaPlayer_GetVideoTrackFrameRate_Params
{
	int                                                TrackIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FormatIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.GetVideoTrackDimensions
struct UMediaAssets_MediaPlayer_GetVideoTrackDimensions_Params
{
	int                                                TrackIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FormatIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FIntPoint                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.GetVideoTrackAspectRatio
struct UMediaAssets_MediaPlayer_GetVideoTrackAspectRatio_Params
{
	int                                                TrackIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FormatIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.GetVerticalFieldOfView
struct UMediaAssets_MediaPlayer_GetVerticalFieldOfView_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.GetUrl
struct UMediaAssets_MediaPlayer_GetUrl_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MediaAssets.MediaPlayer.GetTrackLanguage
struct UMediaAssets_MediaPlayer_GetTrackLanguage_Params
{
	FMediaAssets_MediaAssets_EMediaPlayerTrack         TrackType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TrackIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MediaAssets.MediaPlayer.GetTrackFormat
struct UMediaAssets_MediaPlayer_GetTrackFormat_Params
{
	FMediaAssets_MediaAssets_EMediaPlayerTrack         TrackType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TrackIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.GetTrackDisplayName
struct UMediaAssets_MediaPlayer_GetTrackDisplayName_Params
{
	FMediaAssets_MediaAssets_EMediaPlayerTrack         TrackType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TrackIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MediaAssets.MediaPlayer.GetTimeDelay
struct UMediaAssets_MediaPlayer_GetTimeDelay_Params
{
	struct FTimespan                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MediaAssets.MediaPlayer.GetTime
struct UMediaAssets_MediaPlayer_GetTime_Params
{
	struct FTimespan                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MediaAssets.MediaPlayer.GetSupportedRates
struct UMediaAssets_MediaPlayer_GetSupportedRates_Params
{
	TArray<struct FFloatRange>                         OutRates;                                                 // (Parm, OutParm, ZeroConstructor)
	bool                                               Unthinned;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.GetSelectedTrack
struct UMediaAssets_MediaPlayer_GetSelectedTrack_Params
{
	FMediaAssets_MediaAssets_EMediaPlayerTrack         TrackType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.GetRate
struct UMediaAssets_MediaPlayer_GetRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.GetPlaylistIndex
struct UMediaAssets_MediaPlayer_GetPlaylistIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.GetPlaylist
struct UMediaAssets_MediaPlayer_GetPlaylist_Params
{
	class UMediaAssets_MediaPlaylist*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.GetPlayerName
struct UMediaAssets_MediaPlayer_GetPlayerName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.GetNumTracks
struct UMediaAssets_MediaPlayer_GetNumTracks_Params
{
	FMediaAssets_MediaAssets_EMediaPlayerTrack         TrackType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.GetNumTrackFormats
struct UMediaAssets_MediaPlayer_GetNumTrackFormats_Params
{
	FMediaAssets_MediaAssets_EMediaPlayerTrack         TrackType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TrackIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.GetMediaName
struct UMediaAssets_MediaPlayer_GetMediaName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MediaAssets.MediaPlayer.GetLastVideoSampleProcessedTime
struct UMediaAssets_MediaPlayer_GetLastVideoSampleProcessedTime_Params
{
	struct FTimespan                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MediaAssets.MediaPlayer.GetLastAudioSampleProcessedTime
struct UMediaAssets_MediaPlayer_GetLastAudioSampleProcessedTime_Params
{
	struct FTimespan                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MediaAssets.MediaPlayer.GetHorizontalFieldOfView
struct UMediaAssets_MediaPlayer_GetHorizontalFieldOfView_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.GetDuration
struct UMediaAssets_MediaPlayer_GetDuration_Params
{
	struct FTimespan                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MediaAssets.MediaPlayer.GetDesiredPlayerName
struct UMediaAssets_MediaPlayer_GetDesiredPlayerName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.GetAudioTrackType
struct UMediaAssets_MediaPlayer_GetAudioTrackType_Params
{
	int                                                TrackIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FormatIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MediaAssets.MediaPlayer.GetAudioTrackSampleRate
struct UMediaAssets_MediaPlayer_GetAudioTrackSampleRate_Params
{
	int                                                TrackIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FormatIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.GetAudioTrackChannels
struct UMediaAssets_MediaPlayer_GetAudioTrackChannels_Params
{
	int                                                TrackIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FormatIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.Close
struct UMediaAssets_MediaPlayer_Close_Params
{
};

// Function MediaAssets.MediaPlayer.CanPlayUrl
struct UMediaAssets_MediaPlayer_CanPlayUrl_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.CanPlaySource
struct UMediaAssets_MediaPlayer_CanPlaySource_Params
{
	class UMediaAssets_MediaSource*                    MediaSource;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlayer.CanPause
struct UMediaAssets_MediaPlayer_CanPause_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlaylist.Replace
struct UMediaAssets_MediaPlaylist_Replace_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UMediaAssets_MediaSource*                    Replacement;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlaylist.RemoveAt
struct UMediaAssets_MediaPlaylist_RemoveAt_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlaylist.Remove
struct UMediaAssets_MediaPlaylist_Remove_Params
{
	class UMediaAssets_MediaSource*                    MediaSource;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlaylist.Num
struct UMediaAssets_MediaPlaylist_Num_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlaylist.Insert
struct UMediaAssets_MediaPlaylist_Insert_Params
{
	class UMediaAssets_MediaSource*                    MediaSource;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MediaAssets.MediaPlaylist.GetRandom
struct UMediaAssets_MediaPlaylist_GetRandom_Params
{
	int                                                OutIndex;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UMediaAssets_MediaSource*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlaylist.GetPrevious
struct UMediaAssets_MediaPlaylist_GetPrevious_Params
{
	int                                                InOutIndex;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UMediaAssets_MediaSource*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlaylist.GetNext
struct UMediaAssets_MediaPlaylist_GetNext_Params
{
	int                                                InOutIndex;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UMediaAssets_MediaSource*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlaylist.Get
struct UMediaAssets_MediaPlaylist_Get_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UMediaAssets_MediaSource*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlaylist.AddUrl
struct UMediaAssets_MediaPlaylist_AddUrl_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlaylist.AddFile
struct UMediaAssets_MediaPlaylist_AddFile_Params
{
	struct FString                                     FilePath;                                                 // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaPlaylist.Add
struct UMediaAssets_MediaPlaylist_Add_Params
{
	class UMediaAssets_MediaSource*                    MediaSource;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaSoundComponent.SetSpectralAnalysisSettings
struct UMediaAssets_MediaSoundComponent_SetSpectralAnalysisSettings_Params
{
	TArray<float>                                      InFrequenciesToAnalyze;                                   // (Parm, ZeroConstructor)
	FMediaAssets_MediaAssets_EMediaSoundComponentFFTSize InFFTSize;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MediaAssets.MediaSoundComponent.SetMediaPlayer
struct UMediaAssets_MediaSoundComponent_SetMediaPlayer_Params
{
	class UMediaAssets_MediaPlayer*                    NewMediaPlayer;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MediaAssets.MediaSoundComponent.SetEnvelopeFollowingsettings
struct UMediaAssets_MediaSoundComponent_SetEnvelopeFollowingsettings_Params
{
	int                                                AttackTimeMsec;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReleaseTimeMsec;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MediaAssets.MediaSoundComponent.SetEnableSpectralAnalysis
struct UMediaAssets_MediaSoundComponent_SetEnableSpectralAnalysis_Params
{
	bool                                               bInSpectralAnalysisEnabled;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MediaAssets.MediaSoundComponent.SetEnableEnvelopeFollowing
struct UMediaAssets_MediaSoundComponent_SetEnableEnvelopeFollowing_Params
{
	bool                                               bInEnvelopeFollowing;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MediaAssets.MediaSoundComponent.GetSpectralData
struct UMediaAssets_MediaSoundComponent_GetSpectralData_Params
{
	TArray<struct FMediaAssets_MediaSoundComponentSpectralData> ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MediaAssets.MediaSoundComponent.GetMediaPlayer
struct UMediaAssets_MediaSoundComponent_GetMediaPlayer_Params
{
	class UMediaAssets_MediaPlayer*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaSoundComponent.GetEnvelopeValue
struct UMediaAssets_MediaSoundComponent_GetEnvelopeValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaSoundComponent.BP_GetAttenuationSettingsToApply
struct UMediaAssets_MediaSoundComponent_BP_GetAttenuationSettingsToApply_Params
{
	struct FEngine_SoundAttenuationSettings            OutAttenuationSettings;                                   // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaTexture.SetMediaPlayer
struct UMediaAssets_MediaTexture_SetMediaPlayer_Params
{
	class UMediaAssets_MediaPlayer*                    NewMediaPlayer;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MediaAssets.MediaTexture.GetWidth
struct UMediaAssets_MediaTexture_GetWidth_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaTexture.GetMediaPlayer
struct UMediaAssets_MediaTexture_GetMediaPlayer_Params
{
	class UMediaAssets_MediaPlayer*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaTexture.GetHeight
struct UMediaAssets_MediaTexture_GetHeight_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaTexture.GetAspectRatio
struct UMediaAssets_MediaTexture_GetAspectRatio_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateWebcamCaptureDevices
struct UMediaAssets_MediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices_Params
{
	TArray<struct FMediaAssets_MediaCaptureDevice>     OutDevices;                                               // (Parm, OutParm, ZeroConstructor)
	int                                                Filter;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateVideoCaptureDevices
struct UMediaAssets_MediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices_Params
{
	TArray<struct FMediaAssets_MediaCaptureDevice>     OutDevices;                                               // (Parm, OutParm, ZeroConstructor)
	int                                                Filter;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateAudioCaptureDevices
struct UMediaAssets_MediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices_Params
{
	TArray<struct FMediaAssets_MediaCaptureDevice>     OutDevices;                                               // (Parm, OutParm, ZeroConstructor)
	int                                                Filter;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
