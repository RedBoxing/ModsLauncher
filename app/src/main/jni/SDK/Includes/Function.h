#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Function
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Function"));
	}


	template <typename T = float> T Invoke(float s, float e, float v) {
		return ((T (*)(Function*, float, float, float))(Il2CppBase() + 0x456F51C))(this, s, e, v);
	}
	template <typename T = uintptr_t> T BeginInvoke(float s, float e, float v, uintptr_t callback, uintptr_t object) {
		return ((T (*)(Function*, float, float, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x456F9CC))(this, s, e, v, callback, object);
	}
	template <typename T = float> T EndInvoke(uintptr_t result) {
		return ((T (*)(Function*, uintptr_t))(Il2CppBase() + 0x456FA84))(this, result);
	}

};

}
