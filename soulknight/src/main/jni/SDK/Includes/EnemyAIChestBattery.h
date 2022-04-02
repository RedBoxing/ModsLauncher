#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyAIChestBattery
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyAIChestBattery"));
	}

	template <typename T = bool> T& need_tap() {
		return *(T*)((uintptr_t)this + 0x238);
	}
	template <typename T = int32_t> T& total_chest() {
		return *(T*)((uintptr_t)this + 0x23C);
	}
	template <typename T = uintptr_t> T& smg() {
		return *(T*)((uintptr_t)this + 0x240);
	}
	template <typename T = uintptr_t> T& se() {
		return *(T*)((uintptr_t)this + 0x248);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(EnemyAIChestBattery*))(Il2CppBase() + 0x2A25648))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(EnemyAIChestBattery*))(Il2CppBase() + 0x2A258D8))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(EnemyAIChestBattery*))(Il2CppBase() + 0x2A25A44))(this);
	}
	template <typename T = void> T Activate(int32_t index) {
		return ((T (*)(EnemyAIChestBattery*, int32_t))(Il2CppBase() + 0x2A25DA4))(this, index);
	}
	template <typename T = uintptr_t> T ShottingSMG(int32_t index) {
		return ((T (*)(EnemyAIChestBattery*, int32_t))(Il2CppBase() + 0x2A25E80))(this, index);
	}
	template <typename T = void> T Dead(uintptr_t source_object, bool sync) {
		return ((T (*)(EnemyAIChestBattery*, uintptr_t, bool))(Il2CppBase() + 0x2A25F74))(this, source_object, sync);
	}
	template <typename T = void> T ChildDead() {
		return ((T (*)(EnemyAIChestBattery*))(Il2CppBase() + 0x2A26820))(this);
	}
	template <typename T = void> T GetHurt(int32_t damage, uintptr_t source_object) {
		return ((T (*)(EnemyAIChestBattery*, int32_t, uintptr_t))(Il2CppBase() + 0x2A268A8))(this, damage, source_object);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(EnemyAIChestBattery*))(Il2CppBase() + 0x2A26D9C))(this);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(EnemyAIChestBattery*))(Il2CppBase() + 0x2A2722C))(this);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(EnemyAIChestBattery*))(Il2CppBase() + 0x2A27308))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(EnemyAIChestBattery*))(Il2CppBase() + 0x2A27730))(this);
	}
	template <typename T = void> T iFixBaseProxy_Dead(uintptr_t P0, bool P1) {
		return ((T (*)(EnemyAIChestBattery*, uintptr_t, bool))(Il2CppBase() + 0x2A27738))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_ChildDead() {
		return ((T (*)(EnemyAIChestBattery*))(Il2CppBase() + 0x2A27744))(this);
	}
	template <typename T = void> T iFixBaseProxy_GetHurt(int32_t P0, uintptr_t P1) {
		return ((T (*)(EnemyAIChestBattery*, int32_t, uintptr_t))(Il2CppBase() + 0x2A2774C))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(EnemyAIChestBattery*))(Il2CppBase() + 0x2A27754))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShootReflection() {
		return ((T (*)(EnemyAIChestBattery*))(Il2CppBase() + 0x2A2775C))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(EnemyAIChestBattery*))(Il2CppBase() + 0x2A27764))(this);
	}

};

}
