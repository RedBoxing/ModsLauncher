#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyAIWitch
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyAIWitch"));
	}

	template <typename T = int32_t> T& damage() {
		return *(T*)((uintptr_t)this + 0x238);
	}
	template <typename T = bool> T& in_atk1() {
		return *(T*)((uintptr_t)this + 0x23C);
	}
	template <typename T = float> T& later_time() {
		return *(T*)((uintptr_t)this + 0x240);
	}
	template <typename T = uintptr_t> T& atk1_cilp() {
		return *(T*)((uintptr_t)this + 0x248);
	}
	template <typename T = uintptr_t> T& dead_obj() {
		return *(T*)((uintptr_t)this + 0x250);
	}
	template <typename T = uintptr_t> T& hit_object() {
		return *(T*)((uintptr_t)this + 0x258);
	}
	template <typename T = uintptr_t> T& wave_bullet() {
		return *(T*)((uintptr_t)this + 0x260);
	}
	template <typename T = uintptr_t> T& img() {
		return *(T*)((uintptr_t)this + 0x268);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(EnemyAIWitch*))(Il2CppBase() + 0x1FE02CC))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(EnemyAIWitch*))(Il2CppBase() + 0x1FE04D0))(this);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(EnemyAIWitch*))(Il2CppBase() + 0x1FE0870))(this);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(EnemyAIWitch*))(Il2CppBase() + 0x1FE0C04))(this);
	}
	template <typename T = void> T StartAttack(int32_t index) {
		return ((T (*)(EnemyAIWitch*, int32_t))(Il2CppBase() + 0x1FE0C90))(this, index);
	}
	template <typename T = void> T Dash() {
		return ((T (*)(EnemyAIWitch*))(Il2CppBase() + 0x1FE0D78))(this);
	}
	template <typename T = void> T AdjustFlyingAngle() {
		return ((T (*)(EnemyAIWitch*))(Il2CppBase() + 0x1FE0FDC))(this);
	}
	template <typename T = uintptr_t> T Dashing() {
		return ((T (*)(EnemyAIWitch*))(Il2CppBase() + 0x1FE11F0))(this);
	}
	template <typename T = void> T CreateBullet() {
		return ((T (*)(EnemyAIWitch*))(Il2CppBase() + 0x1FE12D0))(this);
	}
	template <typename T = void> T EndAtk() {
		return ((T (*)(EnemyAIWitch*))(Il2CppBase() + 0x1FE1804))(this);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(EnemyAIWitch*))(Il2CppBase() + 0x1FE1958))(this);
	}
	template <typename T = bool> T GetForce(Il2CppVector2 value1, float value2, float limit, bool ignoreDizzy) {
		return ((T (*)(EnemyAIWitch*, Il2CppVector2, float, float, bool))(Il2CppBase() + 0x1FE1C94))(this, value1, value2, limit, ignoreDizzy);
	}
	template <typename T = void> T ReSetAtk() {
		return ((T (*)(EnemyAIWitch*))(Il2CppBase() + 0x1FE1D7C))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t collision) {
		return ((T (*)(EnemyAIWitch*, uintptr_t))(Il2CppBase() + 0x1FE1DDC))(this, collision);
	}
	template <typename T = void> T Awakeb__8_0(uintptr_t col) {
		return ((T (*)(EnemyAIWitch*, uintptr_t))(Il2CppBase() + 0x1FE1EF0))(this, col);
	}
	template <typename T = void> T iFixBaseProxy_FixedUpdate() {
		return ((T (*)(EnemyAIWitch*))(Il2CppBase() + 0x1FE22CC))(this);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(EnemyAIWitch*))(Il2CppBase() + 0x1FE22D4))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShootReflection() {
		return ((T (*)(EnemyAIWitch*))(Il2CppBase() + 0x1FE22DC))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartAttack(int32_t P0) {
		return ((T (*)(EnemyAIWitch*, int32_t))(Il2CppBase() + 0x1FE22E4))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(EnemyAIWitch*))(Il2CppBase() + 0x1FE22EC))(this);
	}
	template <typename T = bool> T iFixBaseProxy_GetForce(Il2CppVector2 P0, float P1, float P2, bool P3) {
		return ((T (*)(EnemyAIWitch*, Il2CppVector2, float, float, bool))(Il2CppBase() + 0x1FE22F4))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T iFixBaseProxy_ReSetAtk() {
		return ((T (*)(EnemyAIWitch*))(Il2CppBase() + 0x1FE2300))(this);
	}

};

}
