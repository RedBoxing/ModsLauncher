#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BossAI08
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossAI08"));
	}

	template <typename T = uintptr_t> T& bullet01() {
		return *(T*)((uintptr_t)this + 0x2C0);
	}
	template <typename T = uintptr_t> T& bullet02() {
		return *(T*)((uintptr_t)this + 0x2C8);
	}
	template <typename T = uintptr_t> T& bullet03() {
		return *(T*)((uintptr_t)this + 0x2D0);
	}
	template <typename T = uintptr_t> T& bullet04() {
		return *(T*)((uintptr_t)this + 0x2D8);
	}
	template <typename T = int32_t> T& atk1_fire_ball_count() {
		return *(T*)((uintptr_t)this + 0x2E0);
	}
	template <typename T = float> T& temp_speed() {
		return *(T*)((uintptr_t)this + 0x2E4);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BossAI08*))(Il2CppBase() + 0x2EA0F98))(this);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(BossAI08*))(Il2CppBase() + 0x2EA1130))(this);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(BossAI08*))(Il2CppBase() + 0x2EA11A0))(this);
	}
	template <typename T = void> T StartAttack(int32_t index) {
		return ((T (*)(BossAI08*, int32_t))(Il2CppBase() + 0x2EA1344))(this, index);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(BossAI08*))(Il2CppBase() + 0x2EA17AC))(this);
	}
	template <typename T = void> T GetHurt(int32_t damage, uintptr_t source_object) {
		return ((T (*)(BossAI08*, int32_t, uintptr_t))(Il2CppBase() + 0x2EA1B1C))(this, damage, source_object);
	}
	template <typename T = void> T StartAtk01() {
		return ((T (*)(BossAI08*))(Il2CppBase() + 0x2EA1478))(this);
	}
	template <typename T = void> T InAtk01() {
		return ((T (*)(BossAI08*))(Il2CppBase() + 0x2EA1C98))(this);
	}
	template <typename T = void> T CreateFireBall() {
		return ((T (*)(BossAI08*))(Il2CppBase() + 0x2EA1DA0))(this);
	}
	template <typename T = void> T StartAtk02() {
		return ((T (*)(BossAI08*))(Il2CppBase() + 0x2EA1520))(this);
	}
	template <typename T = void> T InAtk02() {
		return ((T (*)(BossAI08*))(Il2CppBase() + 0x2EA21DC))(this);
	}
	template <typename T = void> T TrunWeaponLock() {
		return ((T (*)(BossAI08*))(Il2CppBase() + 0x2EA2578))(this);
	}
	template <typename T = void> T StartAtk03() {
		return ((T (*)(BossAI08*))(Il2CppBase() + 0x2EA15CC))(this);
	}
	template <typename T = void> T InAtk03() {
		return ((T (*)(BossAI08*))(Il2CppBase() + 0x2EA2628))(this);
	}
	template <typename T = void> T StartAtk04() {
		return ((T (*)(BossAI08*))(Il2CppBase() + 0x2EA16F4))(this);
	}
	template <typename T = void> T InAtk04() {
		return ((T (*)(BossAI08*))(Il2CppBase() + 0x2EA2A14))(this);
	}
	template <typename T = void> T Atk04Combo() {
		return ((T (*)(BossAI08*))(Il2CppBase() + 0x2EA2E1C))(this);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(BossAI08*))(Il2CppBase() + 0x2EA3138))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShootReflection() {
		return ((T (*)(BossAI08*))(Il2CppBase() + 0x2EA3140))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartAttack(int32_t P0) {
		return ((T (*)(BossAI08*, int32_t))(Il2CppBase() + 0x2EA3148))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(BossAI08*))(Il2CppBase() + 0x2EA3150))(this);
	}
	template <typename T = void> T iFixBaseProxy_GetHurt(int32_t P0, uintptr_t P1) {
		return ((T (*)(BossAI08*, int32_t, uintptr_t))(Il2CppBase() + 0x2EA3158))(this, P0, P1);
	}

};

}
