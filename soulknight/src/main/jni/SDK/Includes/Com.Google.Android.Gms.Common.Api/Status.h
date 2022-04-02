#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Com.Google.Android.Gms.Common.Api {

class Status
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Com.Google.Android.Gms.Common.Api", "Status"));
	}

	template <typename T = Il2CppString*> static T& CLASS_NAME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T get_CREATOR() {
		return ((T (*)(void *))(Il2CppBase() + 0x20738D8))(0);
	}
	template <typename T = Il2CppString*> static T get_NULL() {
		return ((T (*)(void *))(Il2CppBase() + 0x2073980))(0);
	}
	template <typename T = int32_t> static T get_CONTENTS_FILE_DESCRIPTOR() {
		return ((T (*)(void *))(Il2CppBase() + 0x2073A14))(0);
	}
	template <typename T = int32_t> static T get_PARCELABLE_WRITE_RETURN_VALUE() {
		return ((T (*)(void *))(Il2CppBase() + 0x2073AA8))(0);
	}
	template <typename T = bool> T equals(uintptr_t arg_object_1) {
		return ((T (*)(Status*, uintptr_t))(Il2CppBase() + 0x2073F30))(this, arg_object_1);
	}
	template <typename T = Il2CppString*> T toString() {
		return ((T (*)(Status*))(Il2CppBase() + 0x2074054))(this);
	}
	template <typename T = int32_t> T hashCode() {
		return ((T (*)(Status*))(Il2CppBase() + 0x2074110))(this);
	}
	template <typename T = bool> T isInterrupted() {
		return ((T (*)(Status*))(Il2CppBase() + 0x20741CC))(this);
	}
	template <typename T = uintptr_t> T getStatus() {
		return ((T (*)(Status*))(Il2CppBase() + 0x2074288))(this);
	}
	template <typename T = bool> T isCanceled() {
		return ((T (*)(Status*))(Il2CppBase() + 0x2074344))(this);
	}
	template <typename T = int32_t> T describeContents() {
		return ((T (*)(Status*))(Il2CppBase() + 0x2074400))(this);
	}
	template <typename T = uintptr_t> T getResolution() {
		return ((T (*)(Status*))(Il2CppBase() + 0x20744BC))(this);
	}
	template <typename T = int32_t> T getStatusCode() {
		return ((T (*)(Status*))(Il2CppBase() + 0x2074578))(this);
	}
	template <typename T = Il2CppString*> T getStatusMessage() {
		return ((T (*)(Status*))(Il2CppBase() + 0x2074634))(this);
	}
	template <typename T = bool> T hasResolution() {
		return ((T (*)(Status*))(Il2CppBase() + 0x20746F0))(this);
	}
	template <typename T = void> T startResolutionForResult(uintptr_t arg_object_1, int32_t arg_int_2) {
		return ((T (*)(Status*, uintptr_t, int32_t))(Il2CppBase() + 0x20747AC))(this, arg_object_1, arg_int_2);
	}
	template <typename T = void> T writeToParcel(uintptr_t arg_object_1, int32_t arg_int_2) {
		return ((T (*)(Status*, uintptr_t, int32_t))(Il2CppBase() + 0x2074944))(this, arg_object_1, arg_int_2);
	}
	template <typename T = bool> T isSuccess() {
		return ((T (*)(Status*))(Il2CppBase() + 0x2074ADC))(this);
	}

};

}
