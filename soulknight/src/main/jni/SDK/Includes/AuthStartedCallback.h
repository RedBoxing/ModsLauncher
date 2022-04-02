#pragma once
#include "Il2Cpp/Il2Cpp.h"

class AuthStartedCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AuthStartedCallback"));
	}


	template <typename T = void> T Invoke(uintptr_t operation) {
		return ((T (*)(AuthStartedCallback*, uintptr_t))(Il2CppBase() + 0x2AE9478))(this, operation);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t operation, uintptr_t callback, uintptr_t object) {
		return ((T (*)(AuthStartedCallback*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AEA0F4))(this, operation, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(AuthStartedCallback*, uintptr_t))(Il2CppBase() + 0x2AEA180))(this, result);
	}

};

}
