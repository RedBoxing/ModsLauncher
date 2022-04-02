#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DamageTriggerHitChecker
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DamageTriggerHitChecker"));
	}

	template <typename T = float> T& checkRadius() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector3> T& positionOffset() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& OnSourceAttackHit() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& sourceScriptType() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& hitEffect() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T add_OnSourceAttackHit(void* value) {
		return ((T (*)(DamageTriggerHitChecker*, void*))(Il2CppBase() + 0x42D4AD8))(this, value);
	}
	template <typename T = void> T remove_OnSourceAttackHit(void* value) {
		return ((T (*)(DamageTriggerHitChecker*, void*))(Il2CppBase() + 0x42D4BC4))(this, value);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(DamageTriggerHitChecker*, uintptr_t))(Il2CppBase() + 0x42D4CB0))(this, other);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(DamageTriggerHitChecker*))(Il2CppBase() + 0x42D513C))(this);
	}

};

}
