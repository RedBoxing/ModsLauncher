#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BossAI01
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossAI01"));
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
	template <typename T = uintptr_t> T& h2() {
		return *(T*)((uintptr_t)this + 0x2E0);
	}
	template <typename T = uintptr_t> T& point_1() {
		return *(T*)((uintptr_t)this + 0x2E8);
	}
	template <typename T = uintptr_t> T& point_2() {
		return *(T*)((uintptr_t)this + 0x2F0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BossAI01*))(Il2CppBase() + 0x1B30248))(this);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(BossAI01*))(Il2CppBase() + 0x1B3047C))(this);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(BossAI01*))(Il2CppBase() + 0x1B304EC))(this);
	}
	template <typename T = void> T StartAttack(int32_t index) {
		return ((T (*)(BossAI01*, int32_t))(Il2CppBase() + 0x1B305F4))(this, index);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(BossAI01*))(Il2CppBase() + 0x1B30890))(this);
	}
	template <typename T = void> T GetHurt(int32_t damage, uintptr_t source_object) {
		return ((T (*)(BossAI01*, int32_t, uintptr_t))(Il2CppBase() + 0x1B30C10))(this, damage, source_object);
	}
	template <typename T = void> T InAtk01() {
		return ((T (*)(BossAI01*))(Il2CppBase() + 0x1B30D8C))(this);
	}
	template <typename T = void> T EndAtk01() {
		return ((T (*)(BossAI01*))(Il2CppBase() + 0x1B31614))(this);
	}
	template <typename T = void> T InAtk02() {
		return ((T (*)(BossAI01*))(Il2CppBase() + 0x1B31708))(this);
	}
	template <typename T = void> T InAtk03() {
		return ((T (*)(BossAI01*))(Il2CppBase() + 0x1B31A50))(this);
	}
	template <typename T = void> T InAtk04() {
		return ((T (*)(BossAI01*))(Il2CppBase() + 0x1B31DD4))(this);
	}
	template <typename T = void> T EndAtk04() {
		return ((T (*)(BossAI01*))(Il2CppBase() + 0x1B32178))(this);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(BossAI01*))(Il2CppBase() + 0x1B3234C))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShootReflection() {
		return ((T (*)(BossAI01*))(Il2CppBase() + 0x1B32354))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartAttack(int32_t P0) {
		return ((T (*)(BossAI01*, int32_t))(Il2CppBase() + 0x1B3235C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(BossAI01*))(Il2CppBase() + 0x1B32364))(this);
	}
	template <typename T = void> T iFixBaseProxy_GetHurt(int32_t P0, uintptr_t P1) {
		return ((T (*)(BossAI01*, int32_t, uintptr_t))(Il2CppBase() + 0x1B3236C))(this, P0, P1);
	}

};

}
