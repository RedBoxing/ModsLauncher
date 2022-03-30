#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGSwordTriggerIceGold
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGSwordTriggerIceGold"));
	}

	template <typename T = uintptr_t> T& bulletObject() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& effect_clip() {
		return *(T*)((uintptr_t)this + 0x90);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(RGSwordTriggerIceGold*))(Il2CppBase() + 0x43E2830))(this);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(RGSwordTriggerIceGold*))(Il2CppBase() + 0x43E28F4))(this);
	}
	template <typename T = void> T OnHit(uintptr_t other, bool isCritic) {
		return ((T (*)(RGSwordTriggerIceGold*, uintptr_t, bool))(Il2CppBase() + 0x43E2954))(this, other, isCritic);
	}
	template <typename T = void> T CreateIce() {
		return ((T (*)(RGSwordTriggerIceGold*))(Il2CppBase() + 0x43E29F4))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTaken() {
		return ((T (*)(RGSwordTriggerIceGold*))(Il2CppBase() + 0x43E2BF0))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnHit(uintptr_t P0, bool P1) {
		return ((T (*)(RGSwordTriggerIceGold*, uintptr_t, bool))(Il2CppBase() + 0x43E2BF4))(this, P0, P1);
	}

};

}
