#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Com.Google.Android.Gms.Common.Api {

class ResultCallbackProxy1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Com.Google.Android.Gms.Common.Api", "ResultCallbackProxy`1"));
	}

	template <typename T = Il2CppString*> static T& CLASS_NAME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T OnResult(uintptr_t arg_Result_1) {
		return ((T (*)(ResultCallbackProxy1*, uintptr_t))(Il2CppBase() + 0x0))(this, arg_Result_1);
	}
	template <typename T = void> T onResult(uintptr_t arg_Result_1) {
		return ((T (*)(ResultCallbackProxy1*, uintptr_t))(Il2CppBase() + 0x0))(this, arg_Result_1);
	}
	template <typename T = void> T onResult_1(uintptr_t arg_Result_1) {
		return ((T (*)(ResultCallbackProxy1*, uintptr_t))(Il2CppBase() + 0x0))(this, arg_Result_1);
	}

};

}
