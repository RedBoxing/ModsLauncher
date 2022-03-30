#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyAI20
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyAI20"));
	}

	template <typename T = bool> T& need_tap() {
		return *(T*)((uintptr_t)this + 0x238);
	}
	template <typename T = int32_t> T& damage() {
		return *(T*)((uintptr_t)this + 0x23C);
	}
	template <typename T = uintptr_t> T& atk1_cilp() {
		return *(T*)((uintptr_t)this + 0x240);
	}
	template <typename T = uintptr_t> T& bullet01() {
		return *(T*)((uintptr_t)this + 0x248);
	}
	template <typename T = uintptr_t> T& bullet02() {
		return *(T*)((uintptr_t)this + 0x250);
	}
	template <typename T = uintptr_t> T& dead_obj() {
		return *(T*)((uintptr_t)this + 0x258);
	}
	template <typename T = int32_t> T& bullet_count() {
		return *(T*)((uintptr_t)this + 0x260);
	}
	template <typename T = bool> T& need_random_speed() {
		return *(T*)((uintptr_t)this + 0x264);
	}
	template <typename T = float> T& bullet_speed() {
		return *(T*)((uintptr_t)this + 0x268);
	}
	template <typename T = float> T& angle() {
		return *(T*)((uintptr_t)this + 0x26C);
	}
	template <typename T = bool> T& hasCollideHurt() {
		return *(T*)((uintptr_t)this + 0x270);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(EnemyAI20*))(Il2CppBase() + 0x2A21D24))(this);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(EnemyAI20*))(Il2CppBase() + 0x2A21EBC))(this);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(EnemyAI20*))(Il2CppBase() + 0x2A223B8))(this);
	}
	template <typename T = void> T OnAtk() {
		return ((T (*)(EnemyAI20*))(Il2CppBase() + 0x2A22520))(this);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(EnemyAI20*))(Il2CppBase() + 0x2A228F0))(this);
	}
	template <typename T = void> T DeadEvent() {
		return ((T (*)(EnemyAI20*))(Il2CppBase() + 0x2A22C70))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(EnemyAI20*, uintptr_t))(Il2CppBase() + 0x2A22E64))(this, other);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(EnemyAI20*))(Il2CppBase() + 0x2A22F88))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShootReflection() {
		return ((T (*)(EnemyAI20*))(Il2CppBase() + 0x2A22F90))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(EnemyAI20*))(Il2CppBase() + 0x2A22F98))(this);
	}

};

}
