#pragma once
#include "Il2Cpp/Il2Cpp.h"

class OnEndpointFoundCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnEndpointFoundCallback"));
	}


	template <typename T = void> T Invoke(int64_t arg0, uintptr_t arg1, uintptr_t arg2) {
		return ((T (*)(OnEndpointFoundCallback*, int64_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x35D140C))(this, arg0, arg1, arg2);
	}
	template <typename T = uintptr_t> T BeginInvoke(int64_t arg0, uintptr_t arg1, uintptr_t arg2, uintptr_t callback, uintptr_t object) {
		return ((T (*)(OnEndpointFoundCallback*, int64_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x35D18AC))(this, arg0, arg1, arg2, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnEndpointFoundCallback*, uintptr_t))(Il2CppBase() + 0x35D196C))(this, result);
	}

};

}
