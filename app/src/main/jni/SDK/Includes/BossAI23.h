#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BossAI23
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossAI23"));
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
	template <typename T = Il2CppList<uintptr_t>*> T& weapon1_points() {
		return *(T*)((uintptr_t)this + 0x2E0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& weapon2_points() {
		return *(T*)((uintptr_t)this + 0x2E8);
	}
	template <typename T = uintptr_t> T& weapon3_point() {
		return *(T*)((uintptr_t)this + 0x2F0);
	}
	template <typename T = uintptr_t> T& h1() {
		return *(T*)((uintptr_t)this + 0x2F8);
	}
	template <typename T = uintptr_t> T& h2() {
		return *(T*)((uintptr_t)this + 0x300);
	}
	template <typename T = uintptr_t> T& h3() {
		return *(T*)((uintptr_t)this + 0x308);
	}
	template <typename T = uintptr_t> T& h4() {
		return *(T*)((uintptr_t)this + 0x310);
	}
	template <typename T = uintptr_t> T& back_w1() {
		return *(T*)((uintptr_t)this + 0x318);
	}
	template <typename T = uintptr_t> T& back_w3() {
		return *(T*)((uintptr_t)this + 0x320);
	}
	template <typename T = int32_t> T& atk01_count() {
		return *(T*)((uintptr_t)this + 0x328);
	}
	template <typename T = int32_t> T& atk01_loop_count() {
		return *(T*)((uintptr_t)this + 0x32C);
	}
	template <typename T = int32_t> T& shit_count() {
		return *(T*)((uintptr_t)this + 0x330);
	}

	template <typename T = void> T SetAtkAniBool(int32_t atk_idx, bool in_atk) {
		return ((T (*)(BossAI23*, int32_t, bool))(Il2CppBase() + 0x1DD5408))(this, atk_idx, in_atk);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(BossAI23*))(Il2CppBase() + 0x1DD550C))(this);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(BossAI23*))(Il2CppBase() + 0x1DD59CC))(this);
	}
	template <typename T = void> T Dead(uintptr_t source_object, bool sync) {
		return ((T (*)(BossAI23*, uintptr_t, bool))(Il2CppBase() + 0x1DD5BF8))(this, source_object, sync);
	}
	template <typename T = void> T StartAttack(int32_t index) {
		return ((T (*)(BossAI23*, int32_t))(Il2CppBase() + 0x1DD5C8C))(this, index);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(BossAI23*))(Il2CppBase() + 0x1DD60A0))(this);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(BossAI23*))(Il2CppBase() + 0x1DD6110))(this);
	}
	template <typename T = void> T GetHurt(int32_t damage, uintptr_t source_object) {
		return ((T (*)(BossAI23*, int32_t, uintptr_t))(Il2CppBase() + 0x1DD64D4))(this, damage, source_object);
	}
	template <typename T = void> T ChangeWeapon(int32_t weapon_idx) {
		return ((T (*)(BossAI23*, int32_t))(Il2CppBase() + 0x1DD5678))(this, weapon_idx);
	}
	template <typename T = void> T PreAtk01() {
		return ((T (*)(BossAI23*))(Il2CppBase() + 0x1DD5DF0))(this);
	}
	template <typename T = void> T InAtk01() {
		return ((T (*)(BossAI23*))(Il2CppBase() + 0x1DD68EC))(this);
	}
	template <typename T = void> T CreateAtk01Bullet() {
		return ((T (*)(BossAI23*))(Il2CppBase() + 0x1DD694C))(this);
	}
	template <typename T = void> T EndAtk01() {
		return ((T (*)(BossAI23*))(Il2CppBase() + 0x1DD6D68))(this);
	}
	template <typename T = void> T PreAtk02() {
		return ((T (*)(BossAI23*))(Il2CppBase() + 0x1DD5ED8))(this);
	}
	template <typename T = void> T InAtk02() {
		return ((T (*)(BossAI23*))(Il2CppBase() + 0x1DD6E28))(this);
	}
	template <typename T = void> T PreAtk03() {
		return ((T (*)(BossAI23*))(Il2CppBase() + 0x1DD5F3C))(this);
	}
	template <typename T = void> T InAtk03() {
		return ((T (*)(BossAI23*))(Il2CppBase() + 0x1DD7348))(this);
	}
	template <typename T = void> T PreAtk04() {
		return ((T (*)(BossAI23*))(Il2CppBase() + 0x1DD5FA0))(this);
	}
	template <typename T = void> T InAtk04() {
		return ((T (*)(BossAI23*))(Il2CppBase() + 0x1DD76F0))(this);
	}
	template <typename T = void> T CreateShit() {
		return ((T (*)(BossAI23*))(Il2CppBase() + 0x1DD7750))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShootReflection() {
		return ((T (*)(BossAI23*))(Il2CppBase() + 0x1DD7C34))(this);
	}
	template <typename T = void> T iFixBaseProxy_Dead(uintptr_t P0, bool P1) {
		return ((T (*)(BossAI23*, uintptr_t, bool))(Il2CppBase() + 0x1DD7C3C))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_StartAttack(int32_t P0) {
		return ((T (*)(BossAI23*, int32_t))(Il2CppBase() + 0x1DD7C48))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(BossAI23*))(Il2CppBase() + 0x1DD7C50))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(BossAI23*))(Il2CppBase() + 0x1DD7C58))(this);
	}
	template <typename T = void> T iFixBaseProxy_GetHurt(int32_t P0, uintptr_t P1) {
		return ((T (*)(BossAI23*, int32_t, uintptr_t))(Il2CppBase() + 0x1DD7C60))(this, P0, P1);
	}

};

}
