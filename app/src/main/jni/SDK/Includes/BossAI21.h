#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BossAI21
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossAI21"));
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
	template <typename T = uintptr_t> T& laser_bullet() {
		return *(T*)((uintptr_t)this + 0x2D8);
	}
	template <typename T = uintptr_t> T& laser_bullet2() {
		return *(T*)((uintptr_t)this + 0x2E0);
	}
	template <typename T = uintptr_t> T& explode_obj() {
		return *(T*)((uintptr_t)this + 0x2E8);
	}
	template <typename T = bool> T& has_hurt() {
		return *(T*)((uintptr_t)this + 0x2F0);
	}
	template <typename T = int32_t> T& collision_damage() {
		return *(T*)((uintptr_t)this + 0x2F4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& hand_points() {
		return *(T*)((uintptr_t)this + 0x2F8);
	}
	template <typename T = uintptr_t> T& col_shoot_point_tf() {
		return *(T*)((uintptr_t)this + 0x300);
	}
	template <typename T = uintptr_t> T& the_alien_parent() {
		return *(T*)((uintptr_t)this + 0x308);
	}
	template <typename T = bool> T& in_atk01() {
		return *(T*)((uintptr_t)this + 0x310);
	}
	template <typename T = int32_t> T& atk01_count() {
		return *(T*)((uintptr_t)this + 0x314);
	}
	template <typename T = int32_t> T& atk02_count() {
		return *(T*)((uintptr_t)this + 0x318);
	}
	template <typename T = bool> T& in_atk03() {
		return *(T*)((uintptr_t)this + 0x31C);
	}
	template <typename T = int32_t> T& atk03_count() {
		return *(T*)((uintptr_t)this + 0x320);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BossAI21*))(Il2CppBase() + 0x295B36C))(this);
	}
	template <typename T = uintptr_t> T FindHandPoint(int32_t idx) {
		return ((T (*)(BossAI21*, int32_t))(Il2CppBase() + 0x295B7A4))(this, idx);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(BossAI21*))(Il2CppBase() + 0x295B89C))(this);
	}
	template <typename T = uintptr_t> T StartShootLaser() {
		return ((T (*)(BossAI21*))(Il2CppBase() + 0x295B9B0))(this);
	}
	template <typename T = void> T CreateLaser(float shoot_angle) {
		return ((T (*)(BossAI21*, float))(Il2CppBase() + 0x295BA64))(this, shoot_angle);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(BossAI21*))(Il2CppBase() + 0x295BDCC))(this);
	}
	template <typename T = void> T InAtk01() {
		return ((T (*)(BossAI21*))(Il2CppBase() + 0x295C04C))(this);
	}
	template <typename T = void> T CreateAtk01Bullet() {
		return ((T (*)(BossAI21*))(Il2CppBase() + 0x295C238))(this);
	}
	template <typename T = void> T EndCreateAtk01Bullet() {
		return ((T (*)(BossAI21*))(Il2CppBase() + 0x295C1D0))(this);
	}
	template <typename T = void> T InAtk02() {
		return ((T (*)(BossAI21*))(Il2CppBase() + 0x295C750))(this);
	}
	template <typename T = void> T CreateAtk02Bullet() {
		return ((T (*)(BossAI21*))(Il2CppBase() + 0x295C7B4))(this);
	}
	template <typename T = void> T InAtk03() {
		return ((T (*)(BossAI21*))(Il2CppBase() + 0x295CD18))(this);
	}
	template <typename T = void> T CreateAtk03Bullet(Il2CppVector2 normal) {
		return ((T (*)(BossAI21*, Il2CppVector2))(Il2CppBase() + 0x295CF60))(this, normal);
	}
	template <typename T = void> T EndAtk03() {
		return ((T (*)(BossAI21*))(Il2CppBase() + 0x295D2E4))(this);
	}
	template <typename T = void> T StartAttack(int32_t index) {
		return ((T (*)(BossAI21*, int32_t))(Il2CppBase() + 0x295D438))(this, index);
	}
	template <typename T = void> T StartAtk03() {
		return ((T (*)(BossAI21*))(Il2CppBase() + 0x295D5B0))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(BossAI21*))(Il2CppBase() + 0x295D68C))(this);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(BossAI21*))(Il2CppBase() + 0x295D9F8))(this);
	}
	template <typename T = void> T ChildDead() {
		return ((T (*)(BossAI21*))(Il2CppBase() + 0x295DDCC))(this);
	}
	template <typename T = void> T TurnPlayer() {
		return ((T (*)(BossAI21*))(Il2CppBase() + 0x295DF58))(this);
	}
	template <typename T = void> T CreateDeadExplode() {
		return ((T (*)(BossAI21*))(Il2CppBase() + 0x295E048))(this);
	}
	template <typename T = bool> T GetForce(Il2CppVector2 value1, float value2, float limit, bool ignoreDizzy) {
		return ((T (*)(BossAI21*, Il2CppVector2, float, float, bool))(Il2CppBase() + 0x295E27C))(this, value1, value2, limit, ignoreDizzy);
	}
	template <typename T = void> T Dizzy(float value1, bool isFreeze) {
		return ((T (*)(BossAI21*, float, bool))(Il2CppBase() + 0x295E364))(this, value1, isFreeze);
	}
	template <typename T = void> T GetHurt(int32_t damage, uintptr_t source_object) {
		return ((T (*)(BossAI21*, int32_t, uintptr_t))(Il2CppBase() + 0x295E4F0))(this, damage, source_object);
	}
	template <typename T = void> T ShowDeadAnimation() {
		return ((T (*)(BossAI21*))(Il2CppBase() + 0x295E6F4))(this);
	}
	template <typename T = void> T FirstHurt() {
		return ((T (*)(BossAI21*))(Il2CppBase() + 0x295E684))(this);
	}
	template <typename T = void> T Awakeb__11_0(uintptr_t col) {
		return ((T (*)(BossAI21*, uintptr_t))(Il2CppBase() + 0x295E7B8))(this, col);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(BossAI21*))(Il2CppBase() + 0x295E984))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShootReflection() {
		return ((T (*)(BossAI21*))(Il2CppBase() + 0x295E98C))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartAttack(int32_t P0) {
		return ((T (*)(BossAI21*, int32_t))(Il2CppBase() + 0x295E994))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_FixedUpdate() {
		return ((T (*)(BossAI21*))(Il2CppBase() + 0x295E99C))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(BossAI21*))(Il2CppBase() + 0x295E9A4))(this);
	}
	template <typename T = void> T iFixBaseProxy_ChildDead() {
		return ((T (*)(BossAI21*))(Il2CppBase() + 0x295E9AC))(this);
	}
	template <typename T = void> T iFixBaseProxy_TurnPlayer() {
		return ((T (*)(BossAI21*))(Il2CppBase() + 0x295E9B4))(this);
	}
	template <typename T = bool> T iFixBaseProxy_GetForce(Il2CppVector2 P0, float P1, float P2, bool P3) {
		return ((T (*)(BossAI21*, Il2CppVector2, float, float, bool))(Il2CppBase() + 0x295E9BC))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T iFixBaseProxy_Dizzy(float P0, bool P1) {
		return ((T (*)(BossAI21*, float, bool))(Il2CppBase() + 0x295E9C8))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_GetHurt(int32_t P0, uintptr_t P1) {
		return ((T (*)(BossAI21*, int32_t, uintptr_t))(Il2CppBase() + 0x295E9D4))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_ShowDeadAnimation() {
		return ((T (*)(BossAI21*))(Il2CppBase() + 0x295E9DC))(this);
	}

};

}
