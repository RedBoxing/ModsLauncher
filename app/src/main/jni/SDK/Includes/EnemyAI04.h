#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyAI04
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyAI04"));
	}

	template <typename T = int32_t> T& damage() {
		return *(T*)((uintptr_t)this + 0x238);
	}
	template <typename T = float> T& later_time() {
		return *(T*)((uintptr_t)this + 0x23C);
	}
	template <typename T = uintptr_t> T& dead_obj() {
		return *(T*)((uintptr_t)this + 0x240);
	}
	template <typename T = uintptr_t> T& hit_object() {
		return *(T*)((uintptr_t)this + 0x248);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(EnemyAI04*))(Il2CppBase() + 0x22B3E5C))(this);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(EnemyAI04*))(Il2CppBase() + 0x22B3FC0))(this);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(EnemyAI04*))(Il2CppBase() + 0x22B4370))(this);
	}
	template <typename T = void> T ChildDead() {
		return ((T (*)(EnemyAI04*))(Il2CppBase() + 0x22B46A4))(this);
	}
	template <typename T = void> T DeadEvent() {
		return ((T (*)(EnemyAI04*))(Il2CppBase() + 0x22B4780))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(EnemyAI04*, uintptr_t))(Il2CppBase() + 0x22B4A1C))(this, other);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(EnemyAI04*))(Il2CppBase() + 0x22B4B14))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(EnemyAI04*))(Il2CppBase() + 0x22B4B1C))(this);
	}
	template <typename T = void> T iFixBaseProxy_ChildDead() {
		return ((T (*)(EnemyAI04*))(Il2CppBase() + 0x22B4B24))(this);
	}

};

}
