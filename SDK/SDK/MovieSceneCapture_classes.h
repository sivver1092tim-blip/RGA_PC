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

// Class MovieSceneCapture.MovieSceneCaptureProtocolBase
// 0x0030 (0x0058 - 0x0028)
class UMovieSceneCapture_MovieSceneCaptureProtocolBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET
	FMovieSceneCapture_MovieSceneCapture_EMovieSceneCaptureProtocolState State;                                                    // 0x0050(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0051(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.MovieSceneCaptureProtocolBase");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneCapture.MovieSceneCaptureProtocolBase");
		return ptr;
	}


	bool IsCapturing();
	FMovieSceneCapture_MovieSceneCapture_EMovieSceneCaptureProtocolState GetState();
};


// Class MovieSceneCapture.MovieSceneAudioCaptureProtocolBase
// 0x0000 (0x0058 - 0x0058)
class UMovieSceneCapture_MovieSceneAudioCaptureProtocolBase : public UMovieSceneCapture_MovieSceneCaptureProtocolBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.MovieSceneAudioCaptureProtocolBase");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneCapture.MovieSceneAudioCaptureProtocolBase");
		return ptr;
	}

};


// Class MovieSceneCapture.NullAudioCaptureProtocol
// 0x0000 (0x0058 - 0x0058)
class UMovieSceneCapture_NullAudioCaptureProtocol : public UMovieSceneCapture_MovieSceneAudioCaptureProtocolBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.NullAudioCaptureProtocol");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneCapture.NullAudioCaptureProtocol");
		return ptr;
	}

};


// Class MovieSceneCapture.MasterAudioSubmixCaptureProtocol
// 0x0038 (0x0090 - 0x0058)
class UMovieSceneCapture_MasterAudioSubmixCaptureProtocol : public UMovieSceneCapture_MovieSceneAudioCaptureProtocolBase
{
public:
	struct FString                                     Filename;                                                 // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Config)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0068(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.MasterAudioSubmixCaptureProtocol");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneCapture.MasterAudioSubmixCaptureProtocol");
		return ptr;
	}

};


// Class MovieSceneCapture.MovieSceneImageCaptureProtocolBase
// 0x0000 (0x0058 - 0x0058)
class UMovieSceneCapture_MovieSceneImageCaptureProtocolBase : public UMovieSceneCapture_MovieSceneCaptureProtocolBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.MovieSceneImageCaptureProtocolBase");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneCapture.MovieSceneImageCaptureProtocolBase");
		return ptr;
	}

};


// Class MovieSceneCapture.CompositionGraphCaptureProtocol
// 0x0068 (0x00C0 - 0x0058)
class UMovieSceneCapture_CompositionGraphCaptureProtocol : public UMovieSceneCapture_MovieSceneImageCaptureProtocolBase
{
public:
	struct FMovieSceneCapture_CompositionGraphCapturePasses IncludeRenderPasses;                                      // 0x0058(0x0010) (Edit, BlueprintVisible, Config)
	bool                                               bCaptureFramesInHDR;                                      // 0x0068(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0069(0x0003) MISSED OFFSET
	int                                                HDRCompressionQuality;                                    // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<FMovieSceneCapture_MovieSceneCapture_EHDRCaptureGamut> CaptureGamut;                                             // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
	struct FSoftObjectPath                             PostProcessingMaterial;                                   // 0x0078(0x0018) (Edit, BlueprintVisible, ZeroConstructor, Config)
	bool                                               bDisableScreenPercentage;                                 // 0x0090(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
	class UEngine_MaterialInterface*                   PostProcessingMaterialPtr;                                // 0x0098(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x20];                                      // 0x00A0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.CompositionGraphCaptureProtocol");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneCapture.CompositionGraphCaptureProtocol");
		return ptr;
	}

};


// Class MovieSceneCapture.FrameGrabberProtocol
// 0x0010 (0x0068 - 0x0058)
class UMovieSceneCapture_FrameGrabberProtocol : public UMovieSceneCapture_MovieSceneImageCaptureProtocolBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.FrameGrabberProtocol");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneCapture.FrameGrabberProtocol");
		return ptr;
	}

};


// Class MovieSceneCapture.ImageSequenceProtocol
// 0x0070 (0x00D8 - 0x0068)
class UMovieSceneCapture_ImageSequenceProtocol : public UMovieSceneCapture_FrameGrabberProtocol
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0068(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.ImageSequenceProtocol");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneCapture.ImageSequenceProtocol");
		return ptr;
	}

};


// Class MovieSceneCapture.ImageSequenceProtocol_BMP
// 0x0000 (0x00D8 - 0x00D8)
class UMovieSceneCapture_ImageSequenceProtocol_BMP : public UMovieSceneCapture_ImageSequenceProtocol
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.ImageSequenceProtocol_BMP");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneCapture.ImageSequenceProtocol_BMP");
		return ptr;
	}

};


// Class MovieSceneCapture.CompressedImageSequenceProtocol
// 0x0008 (0x00E0 - 0x00D8)
class UMovieSceneCapture_CompressedImageSequenceProtocol : public UMovieSceneCapture_ImageSequenceProtocol
{
public:
	int                                                CompressionQuality;                                       // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.CompressedImageSequenceProtocol");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneCapture.CompressedImageSequenceProtocol");
		return ptr;
	}

};


// Class MovieSceneCapture.ImageSequenceProtocol_PNG
// 0x0000 (0x00E0 - 0x00E0)
class UMovieSceneCapture_ImageSequenceProtocol_PNG : public UMovieSceneCapture_CompressedImageSequenceProtocol
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.ImageSequenceProtocol_PNG");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneCapture.ImageSequenceProtocol_PNG");
		return ptr;
	}

};


// Class MovieSceneCapture.ImageSequenceProtocol_JPG
// 0x0000 (0x00E0 - 0x00E0)
class UMovieSceneCapture_ImageSequenceProtocol_JPG : public UMovieSceneCapture_CompressedImageSequenceProtocol
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.ImageSequenceProtocol_JPG");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneCapture.ImageSequenceProtocol_JPG");
		return ptr;
	}

};


// Class MovieSceneCapture.ImageSequenceProtocol_EXR
// 0x0010 (0x00E8 - 0x00D8)
class UMovieSceneCapture_ImageSequenceProtocol_EXR : public UMovieSceneCapture_ImageSequenceProtocol
{
public:
	bool                                               bCompressed;                                              // 0x00D8(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<FMovieSceneCapture_MovieSceneCapture_EHDRCaptureGamut> CaptureGamut;                                             // 0x00D9(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0xE];                                       // 0x00DA(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.ImageSequenceProtocol_EXR");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneCapture.ImageSequenceProtocol_EXR");
		return ptr;
	}

};


// Class MovieSceneCapture.MovieSceneCaptureInterface
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneCapture_MovieSceneCaptureInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.MovieSceneCaptureInterface");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneCapture.MovieSceneCaptureInterface");
		return ptr;
	}

};


// Class MovieSceneCapture.MovieSceneCapture
// 0x01F8 (0x0220 - 0x0028)
class UMovieSceneCapture_MovieSceneCapture : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	struct FSoftClassPath                              ImageCaptureProtocolType;                                 // 0x0038(0x0018) (Edit, ZeroConstructor, Config, NoClear)
	struct FSoftClassPath                              AudioCaptureProtocolType;                                 // 0x0050(0x0018) (Edit, ZeroConstructor, Config, NoClear)
	class UMovieSceneCapture_MovieSceneImageCaptureProtocolBase* ImageCaptureProtocol;                                     // 0x0068(0x0008) (Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData)
	class UMovieSceneCapture_MovieSceneAudioCaptureProtocolBase* AudioCaptureProtocol;                                     // 0x0070(0x0008) (Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData)
	struct FMovieSceneCapture_MovieSceneCaptureSettings Settings;                                                 // 0x0078(0x0070) (Edit, BlueprintVisible, Config)
	bool                                               bUseSeparateProcess;                                      // 0x00E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bCloseEditorWhenCaptureStarts;                            // 0x00E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x00EA(0x0006) MISSED OFFSET
	struct FString                                     AdditionalCommandLineArguments;                           // 0x00F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Config)
	struct FString                                     InheritedCommandLineArguments;                            // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x110];                                     // 0x0110(0x0110) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.MovieSceneCapture");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneCapture.MovieSceneCapture");
		return ptr;
	}


	void SetImageCaptureProtocolType(class UClass* ProtocolType);
	void SetAudioCaptureProtocolType(class UClass* ProtocolType);
	class UMovieSceneCapture_MovieSceneCaptureProtocolBase* GetImageCaptureProtocol();
	class UMovieSceneCapture_MovieSceneCaptureProtocolBase* GetAudioCaptureProtocol();
};


// Class MovieSceneCapture.MovieSceneCaptureEnvironment
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneCapture_MovieSceneCaptureEnvironment : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.MovieSceneCaptureEnvironment");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneCapture.MovieSceneCaptureEnvironment");
		return ptr;
	}


	bool STATIC_IsCaptureInProgress();
	int STATIC_GetCaptureFrameNumber();
	float STATIC_GetCaptureElapsedTime();
	class UMovieSceneCapture_MovieSceneImageCaptureProtocolBase* STATIC_FindImageCaptureProtocol();
	class UMovieSceneCapture_MovieSceneAudioCaptureProtocolBase* STATIC_FindAudioCaptureProtocol();
};


// Class MovieSceneCapture.UserDefinedCaptureProtocol
// 0x0080 (0x00D8 - 0x0058)
class UMovieSceneCapture_UserDefinedCaptureProtocol : public UMovieSceneCapture_MovieSceneImageCaptureProtocolBase
{
public:
	class UEngine_World*                               World;                                                    // 0x0058(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x78];                                      // 0x0060(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.UserDefinedCaptureProtocol");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneCapture.UserDefinedCaptureProtocol");
		return ptr;
	}


	void StopCapturingFinalPixels();
	void StartCapturingFinalPixels(const struct FMovieSceneCapture_CapturedPixelsID& StreamID);
	void ResolveBuffer(class UEngine_Texture* Buffer, const struct FMovieSceneCapture_CapturedPixelsID& BufferID);
	void OnWarmUp();
	void OnTick();
	void OnStartCapture();
	bool OnSetup();
	void OnPreTick();
	void OnPixelsReceived(const struct FMovieSceneCapture_CapturedPixels& Pixels, const struct FMovieSceneCapture_CapturedPixelsID& ID, const struct FMovieSceneCapture_FrameMetrics& FrameMetrics);
	void OnPauseCapture();
	void OnFinalize();
	void OnCaptureFrame();
	bool OnCanFinalize();
	void OnBeginFinalize();
	struct FMovieSceneCapture_FrameMetrics GetCurrentFrameMetrics();
	struct FString GenerateFilename(const struct FMovieSceneCapture_FrameMetrics& InFrameMetrics);
};


// Class MovieSceneCapture.LevelCapture
// 0x0020 (0x0240 - 0x0220)
class UMovieSceneCapture_LevelCapture : public UMovieSceneCapture_MovieSceneCapture
{
public:
	bool                                               bAutoStartCapture;                                        // 0x0220(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x0221(0x000B) MISSED OFFSET
	struct FGuid                                       PrerequisiteActorId;                                      // 0x022C(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x023C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.LevelCapture");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneCapture.LevelCapture");
		return ptr;
	}

};


// Class MovieSceneCapture.VideoCaptureProtocol
// 0x0018 (0x0080 - 0x0068)
class UMovieSceneCapture_VideoCaptureProtocol : public UMovieSceneCapture_FrameGrabberProtocol
{
public:
	bool                                               bUseCompression;                                          // 0x0068(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0069(0x0003) MISSED OFFSET
	float                                              CompressionQuality;                                       // 0x006C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0070(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.VideoCaptureProtocol");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneCapture.VideoCaptureProtocol");
		return ptr;
	}

};


// Class MovieSceneCapture.UserDefinedImageCaptureProtocol
// 0x0008 (0x00E0 - 0x00D8)
class UMovieSceneCapture_UserDefinedImageCaptureProtocol : public UMovieSceneCapture_UserDefinedCaptureProtocol
{
public:
	FImageWriteQueue_ImageWriteQueue_EDesiredImageFormat Format;                                                   // 0x00D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableCompression;                                       // 0x00D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00DA(0x0002) MISSED OFFSET
	int                                                CompressionQuality;                                       // 0x00DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.UserDefinedImageCaptureProtocol");
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneCapture.UserDefinedImageCaptureProtocol");
		return ptr;
	}


	void WriteImageToDisk(const struct FMovieSceneCapture_CapturedPixels& PixelData, const struct FMovieSceneCapture_CapturedPixelsID& StreamID, const struct FMovieSceneCapture_FrameMetrics& FrameMetrics, bool bCopyImageData);
	struct FString GenerateFilenameForCurrentFrame();
	struct FString GenerateFilenameForBuffer(class UEngine_Texture* Buffer, const struct FMovieSceneCapture_CapturedPixelsID& StreamID);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
