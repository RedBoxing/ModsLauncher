#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BloodHoleTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BloodHoleTrigger"));
	}

	template <typename T = uintptr_t> T& bloodSpot() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x98);
	}

	template <typename T = void> T OnMakeDamage(uintptr_t enemy) {
		return ((T (*)(BloodHoleTrigger*, uintptr_t))(Il2CppBase() + 0x1B2C4E4))(this, enemy);
	}
	template <typename T = void> T DestroySelf(float delayTime) {
		return ((T (*)(BloodHoleTrigger*, float))(Il2CppBase() + 0x1B2C8E4))(this, delayTime);
	}
	template <typename T = void> T Close() {
		return ((T (*)(BloodHoleTrigger*))(Il2CppBase() + 0x1B2C990))(this);
	}
	template <typename T = void> T OnLoop() {
		return ((T (*)(BloodHoleTrigger*))(Il2CppBase() + 0x1B2CAC4))(this);
	}
	template <typename T = void> T ClearBullets() {
		return ((T (*)(BloodHoleTrigger*))(Il2CppBase() + 0x1B2CB24))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnMakeDamage(uintptr_t P0) {
		return ((T (*)(BloodHoleTrigger*, uintptr_t))(Il2CppBase() + 0x1B2CDA0))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnLoop() {
		return ((T (*)(BloodHoleTrigger*))(Il2CppBase() + 0x1B2CDA8))(this);
	}

};

}
