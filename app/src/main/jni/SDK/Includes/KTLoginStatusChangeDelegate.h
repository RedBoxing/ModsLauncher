#pragma once
#include "Il2Cpp/Il2Cpp.h"

class KTLoginStatusChangeDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "KTLoginStatusChangeDelegate"));
	}


	template <typename T = void> T Invoke(bool isLoggedIn, uintptr_t user) {
		return ((T (*)(KTLoginStatusChangeDelegate*, bool, uintptr_t))(Il2CppBase() + 0x21A8154))(this, isLoggedIn, user);
	}
	template <typename T = uintptr_t> T BeginInvoke(bool isLoggedIn, uintptr_t user, uintptr_t callback, uintptr_t object) {
		return ((T (*)(KTLoginStatusChangeDelegate*, bool, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x21A9E60))(this, isLoggedIn, user, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(KTLoginStatusChangeDelegate*, uintptr_t))(Il2CppBase() + 0x21A9EFC))(this, result);
	}

};

}
