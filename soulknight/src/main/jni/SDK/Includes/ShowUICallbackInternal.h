#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ShowUICallbackInternal
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ShowUICallbackInternal"));
	}


	template <typename T = void> T Invoke(uintptr_t status, uintptr_t data) {
		return ((T (*)(ShowUICallbackInternal*, uintptr_t, uintptr_t))(Il2CppBase() + 0x283F5DC))(this, status, data);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t status, uintptr_t data, uintptr_t callback, uintptr_t object) {
		return ((T (*)(ShowUICallbackInternal*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x283FA44))(this, status, data, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(ShowUICallbackInternal*, uintptr_t))(Il2CppBase() + 0x283FAF0))(this, result);
	}

};

}
