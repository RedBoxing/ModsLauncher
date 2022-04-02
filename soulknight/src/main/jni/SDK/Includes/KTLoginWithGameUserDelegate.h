#pragma once
#include "Il2Cpp/Il2Cpp.h"

class KTLoginWithGameUserDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "KTLoginWithGameUserDelegate"));
	}


	template <typename T = void> T Invoke(uintptr_t user, uintptr_t error) {
		return ((T (*)(KTLoginWithGameUserDelegate*, uintptr_t, uintptr_t))(Il2CppBase() + 0x21A8D3C))(this, user, error);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t user, uintptr_t error, uintptr_t callback, uintptr_t object) {
		return ((T (*)(KTLoginWithGameUserDelegate*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x21A9F18))(this, user, error, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(KTLoginWithGameUserDelegate*, uintptr_t))(Il2CppBase() + 0x21A9F48))(this, result);
	}

};

}
