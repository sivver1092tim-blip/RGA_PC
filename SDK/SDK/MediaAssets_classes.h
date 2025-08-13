#pragma once

// Name: , Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x1)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class MediaAssets.MediaSource
// 0x0058 (0x0080 - 0x0028)
class UMediaAssets_MediaSource : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.MediaSource");
		if (!ptr)
			ptr = UObject::FindClass("Class MediaAssets.MediaSource");
		return ptr;
	}


	bool Validate();
	void SetMediaOptionString(const struct FName& Key, const struct FString& Value);
	void SetMediaOptionInt64(const struct FName& Key, int64_t Value);
	void SetMediaOptionFloat(const struct FName& Key, float Value);
	void SetMediaOptionBool(const struct FName& Key, bool Value);
	struct FString GetUrl();
};


// Class MediaAssets.BaseMediaSource
// 0x0008 (0x0088 - 0x0080)
class UMediaAssets_BaseMediaSource : public UMediaAssets_MediaSource
{
public:
	struct FName                                       PlayerName;                                               // 0x0080(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.BaseMediaSource");
		if (!ptr)
			ptr = UObject::FindClass("Class MediaAssets.BaseMediaSource");
		return ptr;
	}

};


// Class MediaAssets.FileMediaSource
// 0x0028 (0x00B0 - 0x0088)
class UMediaAssets_FileMediaSource : public UMediaAssets_BaseMediaSource
{
public:
	struct FString                                     FilePath;                                                 // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               PrecacheFile;                                             // 0x0098(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0099(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.FileMediaSource");
		if (!ptr)
			ptr = UObject::FindClass("Class MediaAssets.FileMediaSource");
		return ptr;
	}


	void SetFilePath(const struct FString& Path);
};


// Class MediaAssets.MediaPlayer
// 0x0110 (0x0138 - 0x0028)
class UMediaAssets_MediaPlayer : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnEndReached;                                             // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMediaClosed;                                            // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMediaOpened;                                            // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMediaOpenFailed;                                        // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPlaybackResumed;                                        // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPlaybackSuspended;                                      // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSeekCompleted;                                          // 0x0088(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTracksChanged;                                          // 0x0098(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FTimespan                                   CacheAhead;                                               // 0x00A8(0x0008) (BlueprintVisible, ZeroConstructor)
	struct FTimespan                                   CacheBehind;                                              // 0x00B0(0x0008) (BlueprintVisible, ZeroConstructor)
	struct FTimespan                                   CacheBehindGame;                                          // 0x00B8(0x0008) (BlueprintVisible, ZeroConstructor)
	bool                                               NativeAudioOut;                                           // 0x00C0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PlayOnOpen;                                               // 0x00C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00C2(0x0002) MISSED OFFSET
	unsigned char                                      Shuffle : 1;                                              // 0x00C4(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      Loop : 1;                                                 // 0x00C4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00C5(0x0003) MISSED OFFSET
	class UMediaAssets_MediaPlaylist*                  Playlist;                                                 // 0x00C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                PlaylistIndex;                                            // 0x00D0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET
	struct FTimespan                                   TimeDelay;                                                // 0x00D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              HorizontalFieldOfView;                                    // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VerticalFieldOfView;                                      // 0x00E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ViewRotation;                                             // 0x00E8(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2C];                                      // 0x00F4(0x002C) MISSED OFFSET
	struct FGuid                                       PlayerGuid;                                               // 0x0120(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0130(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.MediaPlayer");
		if (!ptr)
			ptr = UObject::FindClass("Class MediaAssets.MediaPlayer");
		return ptr;
	}


	bool SupportsSeeking();
	bool SupportsScrubbing();
	bool SupportsRate(float Rate, bool Unthinned);
	bool SetViewRotation(const struct FRotator& Rotation, bool Absolute);
	bool SetViewField(float Horizontal, float Vertical, bool Absolute);
	bool SetVideoTrackFrameRate(int TrackIndex, int FormatIndex, float FrameRate);
	bool SetTrackFormat(FMediaAssets_MediaAssets_EMediaPlayerTrack TrackType, int TrackIndex, int FormatIndex);
	void SetTimeDelay(const struct FTimespan& TimeDelay);
	bool SetRate(float Rate);
	bool SetNativeVolume(float Volume);
	void SetMediaOptions(class UMediaAssets_MediaSource* Options);
	bool SetLooping(bool Looping);
	void SetDesiredPlayerName(const struct FName& PlayerName);
	void SetBlockOnTime(const struct FTimespan& Time);
	bool SelectTrack(FMediaAssets_MediaAssets_EMediaPlayerTrack TrackType, int TrackIndex);
	bool Seek(const struct FTimespan& Time);
	bool Rewind();
	bool Reopen();
	bool Previous();
	bool Play();
	bool Pause();
	bool OpenUrl(const struct FString& URL);
	bool OpenSourceWithOptions(class UMediaAssets_MediaSource* MediaSource, const struct FMediaUtils_MediaPlayerOptions& Options);
	void OpenSourceLatent(class UObject* WorldContextObject, const struct FEngine_LatentActionInfo& LatentInfo, class UMediaAssets_MediaSource* MediaSource, const struct FMediaUtils_MediaPlayerOptions& Options, bool* bSuccess);
	bool OpenSource(class UMediaAssets_MediaSource* MediaSource);
	bool OpenPlaylistIndex(class UMediaAssets_MediaPlaylist* InPlaylist, int Index);
	bool OpenPlaylist(class UMediaAssets_MediaPlaylist* InPlaylist);
	bool OpenFile(const struct FString& FilePath);
	bool Next();
	bool IsReady();
	bool IsPreparing();
	bool IsPlaying();
	bool IsPaused();
	bool IsLooping();
	bool IsConnecting();
	bool IsClosed();
	bool IsBuffering();
	bool HasError();
	struct FRotator GetViewRotation();
	struct FString GetVideoTrackType(int TrackIndex, int FormatIndex);
	struct FFloatRange GetVideoTrackFrameRates(int TrackIndex, int FormatIndex);
	float GetVideoTrackFrameRate(int TrackIndex, int FormatIndex);
	struct FIntPoint GetVideoTrackDimensions(int TrackIndex, int FormatIndex);
	float GetVideoTrackAspectRatio(int TrackIndex, int FormatIndex);
	float GetVerticalFieldOfView();
	struct FString GetUrl();
	struct FString GetTrackLanguage(FMediaAssets_MediaAssets_EMediaPlayerTrack TrackType, int TrackIndex);
	int GetTrackFormat(FMediaAssets_MediaAssets_EMediaPlayerTrack TrackType, int TrackIndex);
	struct FText GetTrackDisplayName(FMediaAssets_MediaAssets_EMediaPlayerTrack TrackType, int TrackIndex);
	struct FTimespan GetTimeDelay();
	struct FTimespan GetTime();
	void GetSupportedRates(bool Unthinned, TArray<struct FFloatRange>* OutRates);
	int GetSelectedTrack(FMediaAssets_MediaAssets_EMediaPlayerTrack TrackType);
	float GetRate();
	int GetPlaylistIndex();
	class UMediaAssets_MediaPlaylist* GetPlaylist();
	struct FName GetPlayerName();
	int GetNumTracks(FMediaAssets_MediaAssets_EMediaPlayerTrack TrackType);
	int GetNumTrackFormats(FMediaAssets_MediaAssets_EMediaPlayerTrack TrackType, int TrackIndex);
	struct FText GetMediaName();
	struct FTimespan GetLastVideoSampleProcessedTime();
	struct FTimespan GetLastAudioSampleProcessedTime();
	float GetHorizontalFieldOfView();
	struct FTimespan GetDuration();
	struct FName GetDesiredPlayerName();
	struct FString GetAudioTrackType(int TrackIndex, int FormatIndex);
	int GetAudioTrackSampleRate(int TrackIndex, int FormatIndex);
	int GetAudioTrackChannels(int TrackIndex, int FormatIndex);
	void Close();
	bool CanPlayUrl(const struct FString& URL);
	bool CanPlaySource(class UMediaAssets_MediaSource* MediaSource);
	bool CanPause();
};


// Class MediaAssets.MediaPlaylist
// 0x0010 (0x0038 - 0x0028)
class UMediaAssets_MediaPlaylist : public UObject
{
public:
	TArray<class UMediaAssets_MediaSource*>            Items;                                                    // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.MediaPlaylist");
		if (!ptr)
			ptr = UObject::FindClass("Class MediaAssets.MediaPlaylist");
		return ptr;
	}


	bool Replace(int Index, class UMediaAssets_MediaSource* Replacement);
	bool RemoveAt(int Index);
	bool Remove(class UMediaAssets_MediaSource* MediaSource);
	int Num();
	void Insert(class UMediaAssets_MediaSource* MediaSource, int Index);
	class UMediaAssets_MediaSource* GetRandom(int* OutIndex);
	class UMediaAssets_MediaSource* GetPrevious(int* InOutIndex);
	class UMediaAssets_MediaSource* GetNext(int* InOutIndex);
	class UMediaAssets_MediaSource* Get(int Index);
	bool AddUrl(const struct FString& URL);
	bool AddFile(const struct FString& FilePath);
	bool Add(class UMediaAssets_MediaSource* MediaSource);
};


// Class MediaAssets.MediaSoundComponent
// 0x0210 (0x0830 - 0x0620)
class UMediaAssets_MediaSoundComponent : public UAudioMixer_SynthComponent
{
public:
	FMediaAssets_MediaAssets_EMediaSoundChannels       Channels;                                                 // 0x0620(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0620(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               DynamicRateAdjustment;                                    // 0x0624(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0625(0x0003) MISSED OFFSET
	float                                              RateAdjustmentFactor;                                     // 0x0628(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatRange                                 RateAdjustmentRange;                                      // 0x062C(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x063C(0x0004) MISSED OFFSET
	class UMediaAssets_MediaPlayer*                    MediaPlayer;                                              // 0x0640(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1E8];                                     // 0x0648(0x01E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.MediaSoundComponent");
		if (!ptr)
			ptr = UObject::FindClass("Class MediaAssets.MediaSoundComponent");
		return ptr;
	}


	void SetSpectralAnalysisSettings(TArray<float> InFrequenciesToAnalyze, FMediaAssets_MediaAssets_EMediaSoundComponentFFTSize InFFTSize);
	void SetMediaPlayer(class UMediaAssets_MediaPlayer* NewMediaPlayer);
	void SetEnvelopeFollowingsettings(int AttackTimeMsec, int ReleaseTimeMsec);
	void SetEnableSpectralAnalysis(bool bInSpectralAnalysisEnabled);
	void SetEnableEnvelopeFollowing(bool bInEnvelopeFollowing);
	TArray<struct FMediaAssets_MediaSoundComponentSpectralData> GetSpectralData();
	class UMediaAssets_MediaPlayer* GetMediaPlayer();
	float GetEnvelopeValue();
	bool BP_GetAttenuationSettingsToApply(struct FEngine_SoundAttenuationSettings* OutAttenuationSettings);
};


// Class MediaAssets.MediaTexture
// 0x00D0 (0x01A0 - 0x00D0)
class UMediaAssets_MediaTexture : public UEngine_Texture
{
public:
	TEnumAsByte<FEngine_Engine_ETextureAddress>        AddressX;                                                 // 0x00D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<FEngine_Engine_ETextureAddress>        AddressY;                                                 // 0x00D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AutoClear;                                                // 0x00D2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x00D3(0x0001) MISSED OFFSET
	struct FLinearColor                                ClearColor;                                               // 0x00D4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET
	class UMediaAssets_MediaPlayer*                    MediaPlayer;                                              // 0x00E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xB0];                                      // 0x00F0(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.MediaTexture");
		if (!ptr)
			ptr = UObject::FindClass("Class MediaAssets.MediaTexture");
		return ptr;
	}


	void SetMediaPlayer(class UMediaAssets_MediaPlayer* NewMediaPlayer);
	int GetWidth();
	class UMediaAssets_MediaPlayer* GetMediaPlayer();
	int GetHeight();
	float GetAspectRatio();
};


// Class MediaAssets.PlatformMediaSource
// 0x0008 (0x0088 - 0x0080)
class UMediaAssets_PlatformMediaSource : public UMediaAssets_MediaSource
{
public:
	class UMediaAssets_MediaSource*                    MediaSource;                                              // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.PlatformMediaSource");
		if (!ptr)
			ptr = UObject::FindClass("Class MediaAssets.PlatformMediaSource");
		return ptr;
	}

};


// Class MediaAssets.MediaBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMediaAssets_MediaBlueprintFunctionLibrary : public UEngine_BlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.MediaBlueprintFunctionLibrary");
		if (!ptr)
			ptr = UObject::FindClass("Class MediaAssets.MediaBlueprintFunctionLibrary");
		return ptr;
	}


	void STATIC_EnumerateWebcamCaptureDevices(int Filter, TArray<struct FMediaAssets_MediaCaptureDevice>* OutDevices);
	void STATIC_EnumerateVideoCaptureDevices(int Filter, TArray<struct FMediaAssets_MediaCaptureDevice>* OutDevices);
	void STATIC_EnumerateAudioCaptureDevices(int Filter, TArray<struct FMediaAssets_MediaCaptureDevice>* OutDevices);
};


// Class MediaAssets.StreamMediaSource
// 0x0010 (0x0098 - 0x0088)
class UMediaAssets_StreamMediaSource : public UMediaAssets_BaseMediaSource
{
public:
	struct FString                                     StreamUrl;                                                // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.StreamMediaSource");
		if (!ptr)
			ptr = UObject::FindClass("Class MediaAssets.StreamMediaSource");
		return ptr;
	}

};


// Class MediaAssets.TimeSynchronizableMediaSource
// 0x0010 (0x0098 - 0x0088)
class UMediaAssets_TimeSynchronizableMediaSource : public UMediaAssets_BaseMediaSource
{
public:
	bool                                               bUseTimeSynchronization;                                  // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	int                                                FrameDelay;                                               // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	double                                             TimeDelay;                                                // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.TimeSynchronizableMediaSource");
		if (!ptr)
			ptr = UObject::FindClass("Class MediaAssets.TimeSynchronizableMediaSource");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
