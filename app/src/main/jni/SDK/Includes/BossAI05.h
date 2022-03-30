#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BossAI05
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossAI05"));
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
	template <typename T = uintptr_t> T& tentacle() {
		return *(T*)((uintptr_t)this + 0x2E0);
	}
	template <typename T = int32_t> T& atk4_index() {
		return *(T*)((uintptr_t)this + 0x2E8);
	}
	template <typename T = bool> T& invisible() {
		return *(T*)((uintptr_t)this + 0x2EC);
	}
	template <typename T = uintptr_t> T& point_1() {
		return *(T*)((uintptr_t)this + 0x2F0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BossAI05*))(Il2CppBase() + 0x2E95648))(this);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(BossAI05*))(Il2CppBase() + 0x2E95814))(this);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(BossAI05*))(Il2CppBase() + 0x2E95884))(this);
	}
	template <typename T = void> T StartAttack(int32_t index) {
		return ((T (*)(BossAI05*, int32_t))(Il2CppBase() + 0x2E959E0))(this, index);
	}
	template <typename T = void> T GetHurt(int32_t damage, uintptr_t source_object) {
		return ((T (*)(BossAI05*, int32_t, uintptr_t))(Il2CppBase() + 0x2E9605C))(this, damage, source_object);
	}
	template <typename T = void> T ChildDead() {
		return ((T (*)(BossAI05*))(Il2CppBase() + 0x2E961E0))(this);
	}
	template <typename T = void> T StartAtk01() {
		return ((T (*)(BossAI05*))(Il2CppBase() + 0x2E95AE0))(this);
	}
	template <typename T = void> T InAtk01() {
		return ((T (*)(BossAI05*))(Il2CppBase() + 0x2E964FC))(this);
	}
	template <typename T = void> T StartAtk02() {
		return ((T (*)(BossAI05*))(Il2CppBase() + 0x2E95C5C))(this);
	}
	template <typename T = void> T InAtk02() {
		return ((T (*)(BossAI05*))(Il2CppBase() + 0x2E968B4))(this);
	}
	template <typename T = void> T StartAtk03() {
		return ((T (*)(BossAI05*))(Il2CppBase() + 0x2E95D60))(this);
	}
	template <typename T = void> T InAtk03() {
		return ((T (*)(BossAI05*))(Il2CppBase() + 0x2E96EE4))(this);
	}
	template <typename T = void> T EndAtk03() {
		return ((T (*)(BossAI05*))(Il2CppBase() + 0x2E972B0))(this);
	}
	template <typename T = void> T StartAtk04() {
		return ((T (*)(BossAI05*))(Il2CppBase() + 0x2E95ECC))(this);
	}
	template <typename T = void> T InAtk04() {
		return ((T (*)(BossAI05*))(Il2CppBase() + 0x2E974BC))(this);
	}
	template <typename T = void> T EndAtk04() {
		return ((T (*)(BossAI05*))(Il2CppBase() + 0x2E979F8))(this);
	}
	template <typename T = void> T TurnLockTarget() {
		return ((T (*)(BossAI05*))(Il2CppBase() + 0x2E97A6C))(this);
	}
	template <typename T = void> T TurnInvisible() {
		return ((T (*)(BossAI05*))(Il2CppBase() + 0x2E97AD0))(this);
	}
	template <typename T = void> T BackInvisible() {
		return ((T (*)(BossAI05*))(Il2CppBase() + 0x2E97BD8))(this);
	}
	template <typename T = void> T Dizzy(float duration, bool isFreeze) {
		return ((T (*)(BossAI05*, float, bool))(Il2CppBase() + 0x2E97C94))(this, duration, isFreeze);
	}
	template <typename T = void> T BossAngry() {
		return ((T (*)(BossAI05*))(Il2CppBase() + 0x2E97D4C))(this);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(BossAI05*))(Il2CppBase() + 0x2E97E40))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShootReflection() {
		return ((T (*)(BossAI05*))(Il2CppBase() + 0x2E97E48))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartAttack(int32_t P0) {
		return ((T (*)(BossAI05*, int32_t))(Il2CppBase() + 0x2E97E50))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_GetHurt(int32_t P0, uintptr_t P1) {
		return ((T (*)(BossAI05*, int32_t, uintptr_t))(Il2CppBase() + 0x2E97E58))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_ChildDead() {
		return ((T (*)(BossAI05*))(Il2CppBase() + 0x2E97E60))(this);
	}
	template <typename T = void> T iFixBaseProxy_Dizzy(float P0, bool P1) {
		return ((T (*)(BossAI05*, float, bool))(Il2CppBase() + 0x2E97E68))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_BossAngry() {
		return ((T (*)(BossAI05*))(Il2CppBase() + 0x2E97E74))(this);
	}

};

}
