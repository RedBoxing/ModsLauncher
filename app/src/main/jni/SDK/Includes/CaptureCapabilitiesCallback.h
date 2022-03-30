#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CaptureCapabilitiesCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CaptureCapabilitiesCallback"));
	}


	template <typename T = void> T Invoke(uintptr_t arg0, uintptr_t arg1) {
		return ((T (*)(CaptureCapabilitiesCallback*, uintptr_t, uintptr_t))(Il2CppBase() + 0x358A444))(this, arg0, arg1);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t arg0, uintptr_t arg1, uintptr_t callback, uintptr_t object) {
		return ((T (*)(CaptureCapabilitiesCallback*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x358A8AC))(this, arg0, arg1, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(CaptureCapabilitiesCallback*, uintptr_t))(Il2CppBase() + 0x358A94C))(this, result);
	}

};

}
