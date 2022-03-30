#pragma once
#include "Il2Cpp/Il2Cpp.h"

class AuthFinishedCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AuthFinishedCallback"));
	}


	template <typename T = void> T Invoke(uintptr_t operation, uintptr_t status) {
		return ((T (*)(AuthFinishedCallback*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AE8EFC))(this, operation, status);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t operation, uintptr_t status, uintptr_t callback, uintptr_t object) {
		return ((T (*)(AuthFinishedCallback*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AEA030))(this, operation, status, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(AuthFinishedCallback*, uintptr_t))(Il2CppBase() + 0x2AEA0D8))(this, result);
	}

};

}
