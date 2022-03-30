#pragma once
#include "Il2Cpp/Il2Cpp.h"

class OnP2PConnectedCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnP2PConnectedCallback"));
	}


	template <typename T = void> T Invoke(uintptr_t arg0, uintptr_t arg1, uintptr_t arg2) {
		return ((T (*)(OnP2PConnectedCallback*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x35782F0))(this, arg0, arg1, arg2);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t arg0, uintptr_t arg1, uintptr_t arg2, uintptr_t callback, uintptr_t object) {
		return ((T (*)(OnP2PConnectedCallback*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3578790))(this, arg0, arg1, arg2, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnP2PConnectedCallback*, uintptr_t))(Il2CppBase() + 0x3578848))(this, result);
	}

};

}
