#pragma once
#include "Il2Cpp/Il2Cpp.h"

class KTGetUserProfileDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "KTGetUserProfileDelegate"));
	}


	template <typename T = void> T Invoke(uintptr_t user, uintptr_t error) {
		return ((T (*)(KTGetUserProfileDelegate*, uintptr_t, uintptr_t))(Il2CppBase() + 0x21A79D4))(this, user, error);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t user, uintptr_t error, uintptr_t callback, uintptr_t object) {
		return ((T (*)(KTGetUserProfileDelegate*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x21A9E14))(this, user, error, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(KTGetUserProfileDelegate*, uintptr_t))(Il2CppBase() + 0x21A9E44))(this, result);
	}

};

}
