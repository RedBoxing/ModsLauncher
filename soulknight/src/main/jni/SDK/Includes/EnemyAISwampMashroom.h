#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyAISwampMashroom
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyAISwampMashroom"));
	}

	template <typename T = int32_t> T& damage() {
		return *(T*)((uintptr_t)this + 0x238);
	}
	template <typename T = float> T& later_time() {
		return *(T*)((uintptr_t)this + 0x23C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& dead_obj() {
		return *(T*)((uintptr_t)this + 0x240);
	}
	template <typename T = uintptr_t> T& hit_object() {
		return *(T*)((uintptr_t)this + 0x248);
	}
	template <typename T = float> T& releaseGasDuration() {
		return *(T*)((uintptr_t)this + 0x250);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& gasPrefab() {
		return *(T*)((uintptr_t)this + 0x258);
	}
	template <typename T = Il2CppString*> T& gasAnimTriggerName() {
		return *(T*)((uintptr_t)this + 0x260);
	}
	template <typename T = int32_t> T& gasProbability() {
		return *(T*)((uintptr_t)this + 0x268);
	}
	template <typename T = int32_t> T& _gasAnimTriggerId() {
		return *(T*)((uintptr_t)this + 0x26C);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(EnemyAISwampMashroom*))(Il2CppBase() + 0x1FDC458))(this);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(EnemyAISwampMashroom*))(Il2CppBase() + 0x1FDC5D0))(this);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(EnemyAISwampMashroom*))(Il2CppBase() + 0x1FDCC14))(this);
	}
	template <typename T = void> T ChildDead() {
		return ((T (*)(EnemyAISwampMashroom*))(Il2CppBase() + 0x1FDCF48))(this);
	}
	template <typename T = void> T DeadEvent() {
		return ((T (*)(EnemyAISwampMashroom*))(Il2CppBase() + 0x1FDCFF4))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(EnemyAISwampMashroom*, uintptr_t))(Il2CppBase() + 0x1FDD24C))(this, other);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(EnemyAISwampMashroom*))(Il2CppBase() + 0x1FDD344))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(EnemyAISwampMashroom*))(Il2CppBase() + 0x1FDD34C))(this);
	}
	template <typename T = void> T iFixBaseProxy_ChildDead() {
		return ((T (*)(EnemyAISwampMashroom*))(Il2CppBase() + 0x1FDD354))(this);
	}

};

}
