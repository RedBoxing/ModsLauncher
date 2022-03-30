#pragma once
#include "Il2Cpp/Il2Cpp.h"

class OnClickDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnClickDelegate"));
	}


	template <typename T = void> T Invoke(uintptr_t view) {
		return ((T (*)(OnClickDelegate*, uintptr_t))(Il2CppBase() + 0x455065C))(this, view);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t view, uintptr_t callback, uintptr_t object) {
		return ((T (*)(OnClickDelegate*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4550DA0))(this, view, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnClickDelegate*, uintptr_t))(Il2CppBase() + 0x4550DC4))(this, result);
	}

};

}
