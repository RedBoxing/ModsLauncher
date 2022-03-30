#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Com.Google.Android.Gms.Common.Api {

class PendingResult1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Com.Google.Android.Gms.Common.Api", "PendingResult`1"));
	}

	template <typename T = Il2CppString*> static T& CLASS_NAME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T await(int64_t arg_long_1, uintptr_t arg_object_2) {
		return ((T (*)(PendingResult1*, int64_t, uintptr_t))(Il2CppBase() + 0x0))(this, arg_long_1, arg_object_2);
	}
	template <typename T = uintptr_t> T await_1() {
		return ((T (*)(PendingResult1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T isCanceled() {
		return ((T (*)(PendingResult1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T cancel() {
		return ((T (*)(PendingResult1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T setResultCallback(void* arg_ResultCallback_1) {
		return ((T (*)(PendingResult1*, void*))(Il2CppBase() + 0x0))(this, arg_ResultCallback_1);
	}
	template <typename T = void> T setResultCallback_1(void* arg_ResultCallback_1, int64_t arg_long_2, uintptr_t arg_object_3) {
		return ((T (*)(PendingResult1*, void*, int64_t, uintptr_t))(Il2CppBase() + 0x0))(this, arg_ResultCallback_1, arg_long_2, arg_object_3);
	}

};

}
