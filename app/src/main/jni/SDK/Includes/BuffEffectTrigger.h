#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BuffEffectTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuffEffectTrigger"));
	}

	template <typename T = uintptr_t> T& buff() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& probability() {
		return *(T*)((uintptr_t)this + 0x80);
	}

	template <typename T = void> T TriggerWith(uintptr_t other, bool isCritic, bool canThrough) {
		return ((T (*)(BuffEffectTrigger*, uintptr_t, bool, bool))(Il2CppBase() + 0x20A73F0))(this, other, isCritic, canThrough);
	}
	template <typename T = void> T AddBuff(uintptr_t target, uintptr_t targetbuff) {
		return ((T (*)(BuffEffectTrigger*, uintptr_t, uintptr_t))(Il2CppBase() + 0x20A7624))(this, target, targetbuff);
	}
	template <typename T = uintptr_t> T EnemyAddBuff(uintptr_t target) {
		return ((T (*)(BuffEffectTrigger*, uintptr_t))(Il2CppBase() + 0x20A7AB0))(this, target);
	}
	template <typename T = uintptr_t> T PlayerAddBuff(uintptr_t target) {
		return ((T (*)(BuffEffectTrigger*, uintptr_t))(Il2CppBase() + 0x20A7E74))(this, target);
	}
	template <typename T = void> T iFixBaseProxy_TriggerWith(uintptr_t P0, bool P1, bool P2) {
		return ((T (*)(BuffEffectTrigger*, uintptr_t, bool, bool))(Il2CppBase() + 0x20A81A8))(this, P0, P1, P2);
	}

};

}
