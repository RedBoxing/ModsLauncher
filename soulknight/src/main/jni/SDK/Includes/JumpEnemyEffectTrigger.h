#pragma once
#include "Il2Cpp/Il2Cpp.h"

class JumpEnemyEffectTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "JumpEnemyEffectTrigger"));
	}

	template <typename T = float> T& jumpSearchRange() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& extraDamageFactor() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& extraReflectCount() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& _reflectCount() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = void*> T& _targetHitSet() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _hitTargetBuffer() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = bool> T& justTurn() {
		return *(T*)((uintptr_t)this + 0x98);
	}

	template <typename T = bool> T get_canReboundToOther() {
		return ((T (*)(JumpEnemyEffectTrigger*))(Il2CppBase() + 0x21A5000))(this);
	}
	template <typename T = int32_t> T get_TargetLayerMask() {
		return ((T (*)(JumpEnemyEffectTrigger*))(Il2CppBase() + 0x21A509C))(this);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(JumpEnemyEffectTrigger*))(Il2CppBase() + 0x21A51D8))(this);
	}
	template <typename T = void> T TriggerWith(uintptr_t other, bool isCritic, bool canThrough) {
		return ((T (*)(JumpEnemyEffectTrigger*, uintptr_t, bool, bool))(Il2CppBase() + 0x21A527C))(this, other, isCritic, canThrough);
	}
	template <typename T = void> T EndJustTurn() {
		return ((T (*)(JumpEnemyEffectTrigger*))(Il2CppBase() + 0x21A5CA0))(this);
	}
	template <typename T = void> T iFixBaseProxy_TriggerWith(uintptr_t P0, bool P1, bool P2) {
		return ((T (*)(JumpEnemyEffectTrigger*, uintptr_t, bool, bool))(Il2CppBase() + 0x21A5D94))(this, P0, P1, P2);
	}

};

}
