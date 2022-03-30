#pragma once
#include "Il2Cpp/Il2Cpp.h"

class HugeBowEffectTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HugeBowEffectTrigger"));
	}

	template <typename T = float> T& slowDownTime() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = void*> T& _controllers() {
		return *(T*)((uintptr_t)this + 0x80);
	}

	template <typename T = void> T OnTaken() {
		return ((T (*)(HugeBowEffectTrigger*))(Il2CppBase() + 0x420A570))(this);
	}
	template <typename T = void> T TriggerWith(uintptr_t other, bool isCritic, bool canThrough) {
		return ((T (*)(HugeBowEffectTrigger*, uintptr_t, bool, bool))(Il2CppBase() + 0x420A610))(this, other, isCritic, canThrough);
	}
	template <typename T = void> T TriggerEnemy(uintptr_t controller) {
		return ((T (*)(HugeBowEffectTrigger*, uintptr_t))(Il2CppBase() + 0x420A7A0))(this, controller);
	}
	template <typename T = void> T Update() {
		return ((T (*)(HugeBowEffectTrigger*))(Il2CppBase() + 0x420A944))(this);
	}
	template <typename T = void> T iFixBaseProxy_TriggerWith(uintptr_t P0, bool P1, bool P2) {
		return ((T (*)(HugeBowEffectTrigger*, uintptr_t, bool, bool))(Il2CppBase() + 0x420AC50))(this, P0, P1, P2);
	}

};

}
