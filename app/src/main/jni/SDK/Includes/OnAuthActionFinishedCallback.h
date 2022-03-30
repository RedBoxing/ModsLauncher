#pragma once
#include "Il2Cpp/Il2Cpp.h"

class OnAuthActionFinishedCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnAuthActionFinishedCallback"));
	}


	template <typename T = void> T Invoke(uintptr_t arg0, uintptr_t arg1, uintptr_t arg2) {
		return ((T (*)(OnAuthActionFinishedCallback*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x35CE99C))(this, arg0, arg1, arg2);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t arg0, uintptr_t arg1, uintptr_t arg2, uintptr_t callback, uintptr_t object) {
		return ((T (*)(OnAuthActionFinishedCallback*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x35CEE3C))(this, arg0, arg1, arg2, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnAuthActionFinishedCallback*, uintptr_t))(Il2CppBase() + 0x35CEF08))(this, result);
	}

};

}
