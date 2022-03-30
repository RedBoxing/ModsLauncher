#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGSwordBuffTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGSwordBuffTrigger"));
	}

	template <typename T = uintptr_t> T& buff() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& normalCriticFactor() {
		return *(T*)((uintptr_t)this + 0x90);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(RGSwordBuffTrigger*))(Il2CppBase() + 0x43DD414))(this);
	}
	template <typename T = void> T UpdateCriticFactor() {
		return ((T (*)(RGSwordBuffTrigger*))(Il2CppBase() + 0x43DD480))(this);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(RGSwordBuffTrigger*))(Il2CppBase() + 0x43DD5D8))(this);
	}
	template <typename T = void> T OnHit(uintptr_t other, bool isCritic) {
		return ((T (*)(RGSwordBuffTrigger*, uintptr_t, bool))(Il2CppBase() + 0x43DD6C4))(this, other, isCritic);
	}
	template <typename T = void> T iFixBaseProxy_UpdateCriticFactor() {
		return ((T (*)(RGSwordBuffTrigger*))(Il2CppBase() + 0x43DE1C4))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTaken() {
		return ((T (*)(RGSwordBuffTrigger*))(Il2CppBase() + 0x43DE1C8))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnHit(uintptr_t P0, bool P1) {
		return ((T (*)(RGSwordBuffTrigger*, uintptr_t, bool))(Il2CppBase() + 0x43DE1CC))(this, P0, P1);
	}

};

}
