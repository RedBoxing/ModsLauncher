#pragma once
#include "Il2Cpp/Il2Cpp.h"

class KTPlayAvailabilityChangedDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "KTPlayAvailabilityChangedDelegate"));
	}


	template <typename T = void> T Invoke(bool isEnabled) {
		return ((T (*)(KTPlayAvailabilityChangedDelegate*, bool))(Il2CppBase() + 0x21B3C54))(this, isEnabled);
	}
	template <typename T = uintptr_t> T BeginInvoke(bool isEnabled, uintptr_t callback, uintptr_t object) {
		return ((T (*)(KTPlayAvailabilityChangedDelegate*, bool, uintptr_t, uintptr_t))(Il2CppBase() + 0x21B5004))(this, isEnabled, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(KTPlayAvailabilityChangedDelegate*, uintptr_t))(Il2CppBase() + 0x21B5094))(this, result);
	}

};

}
