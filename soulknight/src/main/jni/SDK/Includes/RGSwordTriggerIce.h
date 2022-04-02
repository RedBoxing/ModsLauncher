#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGSwordTriggerIce
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGSwordTriggerIce"));
	}

	template <typename T = uintptr_t> T& ice_obj() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& effect_clip() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& ice_count() {
		return *(T*)((uintptr_t)this + 0x98);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(RGSwordTriggerIce*))(Il2CppBase() + 0x43E2108))(this);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(RGSwordTriggerIce*))(Il2CppBase() + 0x43E21CC))(this);
	}
	template <typename T = void> T OnHit(uintptr_t other, bool isCritic) {
		return ((T (*)(RGSwordTriggerIce*, uintptr_t, bool))(Il2CppBase() + 0x43E2234))(this, other, isCritic);
	}
	template <typename T = void> T CreateIce() {
		return ((T (*)(RGSwordTriggerIce*))(Il2CppBase() + 0x43E22D4))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTaken() {
		return ((T (*)(RGSwordTriggerIce*))(Il2CppBase() + 0x43E2824))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnHit(uintptr_t P0, bool P1) {
		return ((T (*)(RGSwordTriggerIce*, uintptr_t, bool))(Il2CppBase() + 0x43E2828))(this, P0, P1);
	}

};

}
