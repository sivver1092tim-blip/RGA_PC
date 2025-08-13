#pragma once

// Name: , Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x1)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum MagicLeapPrivileges.EMagicLeapPrivilege
enum class FMagicLeapPrivileges_MagicLeapPrivileges_EMagicLeapPrivilege : uint8_t
{
	EMagicLeapPrivilege__Invalid   = 0,
	EMagicLeapPrivilege__BatteryInfo = 1,
	EMagicLeapPrivilege__CameraCapture = 2,
	EMagicLeapPrivilege__WorldReconstruction = 3,
	EMagicLeapPrivilege__InAppPurchase = 4,
	EMagicLeapPrivilege__AudioCaptureMic = 5,
	EMagicLeapPrivilege__DrmCertificates = 6,
	EMagicLeapPrivilege__Occlusion = 7,
	EMagicLeapPrivilege__LowLatencyLightwear = 8,
	EMagicLeapPrivilege__Internet  = 9,
	EMagicLeapPrivilege__IdentityRead = 10,
	EMagicLeapPrivilege__BackgroundDownload = 11,
	EMagicLeapPrivilege__BackgroundUpload = 12,
	EMagicLeapPrivilege__MediaDrm  = 13,
	EMagicLeapPrivilege__Media     = 14,
	EMagicLeapPrivilege__MediaMetadata = 15,
	EMagicLeapPrivilege__PowerInfo = 16,
	EMagicLeapPrivilege__LocalAreaNetwork = 17,
	EMagicLeapPrivilege__VoiceInput = 18,
	EMagicLeapPrivilege__Documents = 19,
	EMagicLeapPrivilege__ConnectBackgroundMusicService = 20,
	EMagicLeapPrivilege__RegisterBackgroundMusicService = 21,
	EMagicLeapPrivilege__PwFoundObjRead = 22,
	EMagicLeapPrivilege__NormalNotificationsUsage = 23,
	EMagicLeapPrivilege__MusicService = 24,
	EMagicLeapPrivilege__ControllerPose = 25,
	EMagicLeapPrivilege__ScreensProvider = 26,
	EMagicLeapPrivilege__GesturesSubscribe = 27,
	EMagicLeapPrivilege__GesturesConfig = 28,
	EMagicLeapPrivilege__AddressBookRead = 29,
	EMagicLeapPrivilege__AddressBookWrite = 30,
	EMagicLeapPrivilege__CoarseLocation = 31,
	EMagicLeapPrivilege__HandMesh  = 32,
	EMagicLeapPrivilege__WifiStatusRead = 33,
	EMagicLeapPrivilege__EMagicLeapPrivilege_MAX = 34
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
