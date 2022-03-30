#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGSwordBuffTriggerBeheadedPan
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGSwordBuffTriggerBeheadedPan"));
	}

	template <typename T = uintptr_t> T& hitClip() {
		return *(T*)((uintptr_t)this + 0x98);
	}

	template <typename T = void> T OnHit(uintptr_t other, bool isCritic) {
		return ((T (*)(RGSwordBuffTriggerBeheadedPan*, uintptr_t, bool))(Il2CppBase() + 0x43DE1D4))(this, other, isCritic);
	}
	template <typename T = void> T iFixBaseProxy_OnHit(uintptr_t P0, bool P1) {
		return ((T (*)(RGSwordBuffTriggerBeheadedPan*, uintptr_t, bool))(Il2CppBase() + 0x43DE2E0))(this, P0, P1);
	}

};

}
