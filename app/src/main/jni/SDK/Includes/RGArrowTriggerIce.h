#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGArrowTriggerIce
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGArrowTriggerIce"));
	}

	template <typename T = uintptr_t> T& ice_obj() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& effect_clip() {
		return *(T*)((uintptr_t)this + 0xB0);
	}

	template <typename T = void> T OnHit(uintptr_t other, bool isCritic) {
		return ((T (*)(RGArrowTriggerIce*, uintptr_t, bool))(Il2CppBase() + 0x1BAD724))(this, other, isCritic);
	}
	template <typename T = void> T CreateIce() {
		return ((T (*)(RGArrowTriggerIce*))(Il2CppBase() + 0x1BAD7C4))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnHit(uintptr_t P0, bool P1) {
		return ((T (*)(RGArrowTriggerIce*, uintptr_t, bool))(Il2CppBase() + 0x1BADAE4))(this, P0, P1);
	}

};

}
