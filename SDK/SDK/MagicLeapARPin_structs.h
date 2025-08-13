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

// Enum MagicLeapARPin.EMagicLeapAutoPinType
enum class FMagicLeapARPin_MagicLeapARPin_EMagicLeapAutoPinType : uint8_t
{
	EMagicLeapAutoPinType__OnlyOnDataRestoration = 0,
	EMagicLeapAutoPinType__Always  = 1,
	EMagicLeapAutoPinType__Never   = 2,
	EMagicLeapAutoPinType__EMagicLeapAutoPinType_MAX = 3
};


// Enum MagicLeapARPin.EMagicLeapPassableWorldError
enum class FMagicLeapARPin_MagicLeapARPin_EMagicLeapPassableWorldError : uint8_t
{
	EMagicLeapPassableWorldError__None = 0,
	EMagicLeapPassableWorldError__LowMapQuality = 1,
	EMagicLeapPassableWorldError__UnableToLocalize = 2,
	EMagicLeapPassableWorldError__Unavailable = 3,
	EMagicLeapPassableWorldError__PrivilegeDenied = 4,
	EMagicLeapPassableWorldError__InvalidParam = 5,
	EMagicLeapPassableWorldError__UnspecifiedFailure = 6,
	EMagicLeapPassableWorldError__PrivilegeRequestPending = 7,
	EMagicLeapPassableWorldError__EMagicLeapPassableWorldError_MAX = 8
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
