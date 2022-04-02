#pragma once
#include "Il2Cpp/Il2Cpp.h"

class HpChanged
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HpChanged"));
	}


	template <typename T = void> T Invoke(float value, float maxValue) {
		return ((T (*)(HpChanged*, float, float))(Il2CppBase() + 0x4338620))(this, value, maxValue);
	}
	template <typename T = uintptr_t> T BeginInvoke(float value, float maxValue, uintptr_t callback, uintptr_t object) {
		return ((T (*)(HpChanged*, float, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x4338A84))(this, value, maxValue, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(HpChanged*, uintptr_t))(Il2CppBase() + 0x4338B24))(this, result);
	}

};

}
