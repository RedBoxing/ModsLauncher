#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyAIChestRainbowHorse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyAIChestRainbowHorse"));
	}

	template <typename T = bool> T& need_tap() {
		return *(T*)((uintptr_t)this + 0x238);
	}
	template <typename T = float> T& attackDuration() {
		return *(T*)((uintptr_t)this + 0x23C);
	}
	template <typename T = float> T& shootWaitTime() {
		return *(T*)((uintptr_t)this + 0x240);
	}
	template <typename T = uintptr_t> T& deadEffect() {
		return *(T*)((uintptr_t)this + 0x248);
	}
	template <typename T = int32_t> T& total_chest() {
		return *(T*)((uintptr_t)this + 0x250);
	}
	template <typename T = uintptr_t> T& smg() {
		return *(T*)((uintptr_t)this + 0x258);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(EnemyAIChestRainbowHorse*))(Il2CppBase() + 0x2A27AEC))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(EnemyAIChestRainbowHorse*))(Il2CppBase() + 0x2A27D38))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(EnemyAIChestRainbowHorse*))(Il2CppBase() + 0x2A27EA4))(this);
	}
	template <typename T = void> T Activate(int32_t index) {
		return ((T (*)(EnemyAIChestRainbowHorse*, int32_t))(Il2CppBase() + 0x2A28204))(this, index);
	}
	template <typename T = uintptr_t> T ShottingSMG(int32_t index) {
		return ((T (*)(EnemyAIChestRainbowHorse*, int32_t))(Il2CppBase() + 0x2A282E0))(this, index);
	}
	template <typename T = void> T Dead(uintptr_t source_object, bool sync) {
		return ((T (*)(EnemyAIChestRainbowHorse*, uintptr_t, bool))(Il2CppBase() + 0x2A283D4))(this, source_object, sync);
	}
	template <typename T = void> T ChildDead() {
		return ((T (*)(EnemyAIChestRainbowHorse*))(Il2CppBase() + 0x2A28C64))(this);
	}
	template <typename T = void> T GetHurt(int32_t damage, uintptr_t source_object) {
		return ((T (*)(EnemyAIChestRainbowHorse*, int32_t, uintptr_t))(Il2CppBase() + 0x2A28EB4))(this, damage, source_object);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(EnemyAIChestRainbowHorse*))(Il2CppBase() + 0x2A293A8))(this);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(EnemyAIChestRainbowHorse*))(Il2CppBase() + 0x2A29838))(this);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(EnemyAIChestRainbowHorse*))(Il2CppBase() + 0x2A298F8))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(EnemyAIChestRainbowHorse*))(Il2CppBase() + 0x2A29D44))(this);
	}
	template <typename T = void> T iFixBaseProxy_Dead(uintptr_t P0, bool P1) {
		return ((T (*)(EnemyAIChestRainbowHorse*, uintptr_t, bool))(Il2CppBase() + 0x2A29D4C))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_ChildDead() {
		return ((T (*)(EnemyAIChestRainbowHorse*))(Il2CppBase() + 0x2A29D58))(this);
	}
	template <typename T = void> T iFixBaseProxy_GetHurt(int32_t P0, uintptr_t P1) {
		return ((T (*)(EnemyAIChestRainbowHorse*, int32_t, uintptr_t))(Il2CppBase() + 0x2A29D60))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(EnemyAIChestRainbowHorse*))(Il2CppBase() + 0x2A29D68))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShootReflection() {
		return ((T (*)(EnemyAIChestRainbowHorse*))(Il2CppBase() + 0x2A29D70))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(EnemyAIChestRainbowHorse*))(Il2CppBase() + 0x2A29D78))(this);
	}

};

}
