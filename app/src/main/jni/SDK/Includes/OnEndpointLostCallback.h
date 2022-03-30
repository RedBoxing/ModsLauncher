#pragma once
#include "Il2Cpp/Il2Cpp.h"

class OnEndpointLostCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnEndpointLostCallback"));
	}


	template <typename T = void> T Invoke(int64_t arg0, Il2CppString* arg1, uintptr_t arg2) {
		return ((T (*)(OnEndpointLostCallback*, int64_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x35D1988))(this, arg0, arg1, arg2);
	}
	template <typename T = uintptr_t> T BeginInvoke(int64_t arg0, Il2CppString* arg1, uintptr_t arg2, uintptr_t callback, uintptr_t object) {
		return ((T (*)(OnEndpointLostCallback*, int64_t, Il2CppString*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x35D1E28))(this, arg0, arg1, arg2, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnEndpointLostCallback*, uintptr_t))(Il2CppBase() + 0x35D1EDC))(this, result);
	}

};

}
