#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Com.Google.Android.Gms.Common {

class ConnectionResult
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Com.Google.Android.Gms.Common", "ConnectionResult"));
	}

	template <typename T = Il2CppString*> static T& CLASS_NAME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = int32_t> static T get_SUCCESS() {
		return ((T (*)(void *))(Il2CppBase() + 0x2074BA0))(0);
	}
	template <typename T = int32_t> static T get_SERVICE_MISSING() {
		return ((T (*)(void *))(Il2CppBase() + 0x2074C34))(0);
	}
	template <typename T = int32_t> static T get_SERVICE_VERSION_UPDATE_REQUIRED() {
		return ((T (*)(void *))(Il2CppBase() + 0x2074CC8))(0);
	}
	template <typename T = int32_t> static T get_SERVICE_DISABLED() {
		return ((T (*)(void *))(Il2CppBase() + 0x2074D5C))(0);
	}
	template <typename T = int32_t> static T get_SIGN_IN_REQUIRED() {
		return ((T (*)(void *))(Il2CppBase() + 0x2074DF0))(0);
	}
	template <typename T = int32_t> static T get_INVALID_ACCOUNT() {
		return ((T (*)(void *))(Il2CppBase() + 0x2074E84))(0);
	}
	template <typename T = int32_t> static T get_RESOLUTION_REQUIRED() {
		return ((T (*)(void *))(Il2CppBase() + 0x2074F18))(0);
	}
	template <typename T = int32_t> static T get_NETWORK_ERROR() {
		return ((T (*)(void *))(Il2CppBase() + 0x2074FAC))(0);
	}
	template <typename T = int32_t> static T get_INTERNAL_ERROR() {
		return ((T (*)(void *))(Il2CppBase() + 0x2075040))(0);
	}
	template <typename T = int32_t> static T get_SERVICE_INVALID() {
		return ((T (*)(void *))(Il2CppBase() + 0x20750D4))(0);
	}
	template <typename T = int32_t> static T get_DEVELOPER_ERROR() {
		return ((T (*)(void *))(Il2CppBase() + 0x2075168))(0);
	}
	template <typename T = int32_t> static T get_LICENSE_CHECK_FAILED() {
		return ((T (*)(void *))(Il2CppBase() + 0x20751FC))(0);
	}
	template <typename T = int32_t> static T get_CANCELED() {
		return ((T (*)(void *))(Il2CppBase() + 0x2075290))(0);
	}
	template <typename T = int32_t> static T get_TIMEOUT() {
		return ((T (*)(void *))(Il2CppBase() + 0x2075324))(0);
	}
	template <typename T = int32_t> static T get_INTERRUPTED() {
		return ((T (*)(void *))(Il2CppBase() + 0x20753B8))(0);
	}
	template <typename T = int32_t> static T get_API_UNAVAILABLE() {
		return ((T (*)(void *))(Il2CppBase() + 0x207544C))(0);
	}
	template <typename T = int32_t> static T get_SIGN_IN_FAILED() {
		return ((T (*)(void *))(Il2CppBase() + 0x20754E0))(0);
	}
	template <typename T = int32_t> static T get_SERVICE_UPDATING() {
		return ((T (*)(void *))(Il2CppBase() + 0x2075574))(0);
	}
	template <typename T = int32_t> static T get_SERVICE_MISSING_PERMISSION() {
		return ((T (*)(void *))(Il2CppBase() + 0x2075608))(0);
	}
	template <typename T = int32_t> static T get_DRIVE_EXTERNAL_STORAGE_REQUIRED() {
		return ((T (*)(void *))(Il2CppBase() + 0x207569C))(0);
	}
	template <typename T = uintptr_t> static T get_CREATOR() {
		return ((T (*)(void *))(Il2CppBase() + 0x2075730))(0);
	}
	template <typename T = Il2CppString*> static T get_NULL() {
		return ((T (*)(void *))(Il2CppBase() + 0x20757D8))(0);
	}
	template <typename T = int32_t> static T get_CONTENTS_FILE_DESCRIPTOR() {
		return ((T (*)(void *))(Il2CppBase() + 0x207586C))(0);
	}
	template <typename T = int32_t> static T get_PARCELABLE_WRITE_RETURN_VALUE() {
		return ((T (*)(void *))(Il2CppBase() + 0x2075900))(0);
	}
	template <typename T = bool> T equals(uintptr_t arg_object_1) {
		return ((T (*)(ConnectionResult*, uintptr_t))(Il2CppBase() + 0x2075D88))(this, arg_object_1);
	}
	template <typename T = Il2CppString*> T toString() {
		return ((T (*)(ConnectionResult*))(Il2CppBase() + 0x2075EAC))(this);
	}
	template <typename T = int32_t> T hashCode() {
		return ((T (*)(ConnectionResult*))(Il2CppBase() + 0x2075F68))(this);
	}
	template <typename T = int32_t> T describeContents() {
		return ((T (*)(ConnectionResult*))(Il2CppBase() + 0x2076024))(this);
	}
	template <typename T = uintptr_t> T getResolution() {
		return ((T (*)(ConnectionResult*))(Il2CppBase() + 0x20760E0))(this);
	}
	template <typename T = bool> T hasResolution() {
		return ((T (*)(ConnectionResult*))(Il2CppBase() + 0x207619C))(this);
	}
	template <typename T = void> T startResolutionForResult(uintptr_t arg_object_1, int32_t arg_int_2) {
		return ((T (*)(ConnectionResult*, uintptr_t, int32_t))(Il2CppBase() + 0x2076258))(this, arg_object_1, arg_int_2);
	}
	template <typename T = void> T writeToParcel(uintptr_t arg_object_1, int32_t arg_int_2) {
		return ((T (*)(ConnectionResult*, uintptr_t, int32_t))(Il2CppBase() + 0x20763F0))(this, arg_object_1, arg_int_2);
	}
	template <typename T = int32_t> T getErrorCode() {
		return ((T (*)(ConnectionResult*))(Il2CppBase() + 0x2076588))(this);
	}
	template <typename T = Il2CppString*> T getErrorMessage() {
		return ((T (*)(ConnectionResult*))(Il2CppBase() + 0x2076644))(this);
	}
	template <typename T = bool> T isSuccess() {
		return ((T (*)(ConnectionResult*))(Il2CppBase() + 0x2076700))(this);
	}

};

}
