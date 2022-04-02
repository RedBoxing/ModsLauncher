#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BossAI04
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossAI04"));
	}

	template <typename T = uintptr_t> T& angry_body() {
		return *(T*)((uintptr_t)this + 0x2C0);
	}
	template <typename T = uintptr_t> T& angry_hand() {
		return *(T*)((uintptr_t)this + 0x2C8);
	}
	template <typename T = uintptr_t> T& body_dead() {
		return *(T*)((uintptr_t)this + 0x2D0);
	}
	template <typename T = uintptr_t> T& h1_render() {
		return *(T*)((uintptr_t)this + 0x2D8);
	}
	template <typename T = uintptr_t> T& h2_render() {
		return *(T*)((uintptr_t)this + 0x2E0);
	}
	template <typename T = uintptr_t> T& bullet01() {
		return *(T*)((uintptr_t)this + 0x2E8);
	}
	template <typename T = uintptr_t> T& bullet02() {
		return *(T*)((uintptr_t)this + 0x2F0);
	}
	template <typename T = uintptr_t> T& bullet03() {
		return *(T*)((uintptr_t)this + 0x2F8);
	}
	template <typename T = uintptr_t> T& bullet04() {
		return *(T*)((uintptr_t)this + 0x300);
	}
	template <typename T = uintptr_t> T& bullet05() {
		return *(T*)((uintptr_t)this + 0x308);
	}
	template <typename T = uintptr_t> T& the_bullet() {
		return *(T*)((uintptr_t)this + 0x310);
	}
	template <typename T = uintptr_t> T& head() {
		return *(T*)((uintptr_t)this + 0x318);
	}
	template <typename T = uintptr_t> T& h1() {
		return *(T*)((uintptr_t)this + 0x320);
	}
	template <typename T = uintptr_t> T& h2() {
		return *(T*)((uintptr_t)this + 0x328);
	}
	template <typename T = uintptr_t> T& point_1() {
		return *(T*)((uintptr_t)this + 0x330);
	}
	template <typename T = uintptr_t> T& point_2() {
		return *(T*)((uintptr_t)this + 0x338);
	}
	template <typename T = int32_t> T& atk2_index() {
		return *(T*)((uintptr_t)this + 0x340);
	}
	template <typename T = bool> T& in_atk2() {
		return *(T*)((uintptr_t)this + 0x344);
	}
	template <typename T = int32_t> T& atk_index() {
		return *(T*)((uintptr_t)this + 0x348);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BossAI04*))(Il2CppBase() + 0x2E91A84))(this);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(BossAI04*))(Il2CppBase() + 0x2E91D90))(this);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(BossAI04*))(Il2CppBase() + 0x2E91E00))(this);
	}
	template <typename T = void> T StartAttack(int32_t index) {
		return ((T (*)(BossAI04*, int32_t))(Il2CppBase() + 0x2E91F64))(this, index);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(BossAI04*))(Il2CppBase() + 0x2E92994))(this);
	}
	template <typename T = void> T GetHurt(int32_t damage, uintptr_t source_object) {
		return ((T (*)(BossAI04*, int32_t, uintptr_t))(Il2CppBase() + 0x2E92A98))(this, damage, source_object);
	}
	template <typename T = void> T ChildDead() {
		return ((T (*)(BossAI04*))(Il2CppBase() + 0x2E92C14))(this);
	}
	template <typename T = void> T Reborn() {
		return ((T (*)(BossAI04*))(Il2CppBase() + 0x2E932D8))(this);
	}
	template <typename T = void> T Dizzy(float value1, bool isfreeze) {
		return ((T (*)(BossAI04*, float, bool))(Il2CppBase() + 0x2E93368))(this, value1, isfreeze);
	}
	template <typename T = void> T StartAtk01() {
		return ((T (*)(BossAI04*))(Il2CppBase() + 0x2E92068))(this);
	}
	template <typename T = void> T EndAtk01() {
		return ((T (*)(BossAI04*))(Il2CppBase() + 0x2E934FC))(this);
	}
	template <typename T = void> T StartAtk02() {
		return ((T (*)(BossAI04*))(Il2CppBase() + 0x2E923BC))(this);
	}
	template <typename T = void> T CreateBullet() {
		return ((T (*)(BossAI04*))(Il2CppBase() + 0x2E93A0C))(this);
	}
	template <typename T = void> T EndAtk02() {
		return ((T (*)(BossAI04*))(Il2CppBase() + 0x2E93D18))(this);
	}
	template <typename T = void> T StartAtk03() {
		return ((T (*)(BossAI04*))(Il2CppBase() + 0x2E92550))(this);
	}
	template <typename T = void> T InAtk03H1() {
		return ((T (*)(BossAI04*))(Il2CppBase() + 0x2E93D7C))(this);
	}
	template <typename T = void> T InAtk03H2() {
		return ((T (*)(BossAI04*))(Il2CppBase() + 0x2E940D0))(this);
	}
	template <typename T = void> T EndAtk03() {
		return ((T (*)(BossAI04*))(Il2CppBase() + 0x2E94424))(this);
	}
	template <typename T = void> T StartAtk04() {
		return ((T (*)(BossAI04*))(Il2CppBase() + 0x2E926D8))(this);
	}
	template <typename T = void> T InAtk04() {
		return ((T (*)(BossAI04*))(Il2CppBase() + 0x2E945A8))(this);
	}
	template <typename T = void> T EndAtk04() {
		return ((T (*)(BossAI04*))(Il2CppBase() + 0x2E94BD0))(this);
	}
	template <typename T = void> T StartAtk05() {
		return ((T (*)(BossAI04*))(Il2CppBase() + 0x2E92860))(this);
	}
	template <typename T = void> T InAtk05H1() {
		return ((T (*)(BossAI04*))(Il2CppBase() + 0x2E94CBC))(this);
	}
	template <typename T = void> T EndAtk05H1() {
		return ((T (*)(BossAI04*))(Il2CppBase() + 0x2E92F58))(this);
	}
	template <typename T = void> T InAtk05H2() {
		return ((T (*)(BossAI04*))(Il2CppBase() + 0x2E94FFC))(this);
	}
	template <typename T = void> T EndAtk05H2() {
		return ((T (*)(BossAI04*))(Il2CppBase() + 0x2E93118))(this);
	}
	template <typename T = void> T EndAtk05() {
		return ((T (*)(BossAI04*))(Il2CppBase() + 0x2E95340))(this);
	}
	template <typename T = void> T StopAttack() {
		return ((T (*)(BossAI04*))(Il2CppBase() + 0x2E92D44))(this);
	}
	template <typename T = void> T BossAngry() {
		return ((T (*)(BossAI04*))(Il2CppBase() + 0x2E95454))(this);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(BossAI04*))(Il2CppBase() + 0x2E9551C))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShootReflection() {
		return ((T (*)(BossAI04*))(Il2CppBase() + 0x2E95524))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartAttack(int32_t P0) {
		return ((T (*)(BossAI04*, int32_t))(Il2CppBase() + 0x2E9552C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(BossAI04*))(Il2CppBase() + 0x2E95534))(this);
	}
	template <typename T = void> T iFixBaseProxy_GetHurt(int32_t P0, uintptr_t P1) {
		return ((T (*)(BossAI04*, int32_t, uintptr_t))(Il2CppBase() + 0x2E9553C))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_ChildDead() {
		return ((T (*)(BossAI04*))(Il2CppBase() + 0x2E95544))(this);
	}
	template <typename T = void> T iFixBaseProxy_Reborn() {
		return ((T (*)(BossAI04*))(Il2CppBase() + 0x2E9554C))(this);
	}
	template <typename T = void> T iFixBaseProxy_Dizzy(float P0, bool P1) {
		return ((T (*)(BossAI04*, float, bool))(Il2CppBase() + 0x2E95554))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_BossAngry() {
		return ((T (*)(BossAI04*))(Il2CppBase() + 0x2E95560))(this);
	}

};

}
