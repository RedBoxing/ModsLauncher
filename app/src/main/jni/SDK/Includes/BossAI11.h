#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BossAI11
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossAI11"));
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
	template <typename T = uintptr_t> T& bullet05() {
		return *(T*)((uintptr_t)this + 0x2E0);
	}
	template <typename T = uintptr_t> T& bullet06() {
		return *(T*)((uintptr_t)this + 0x2E8);
	}
	template <typename T = uintptr_t> T& head_point() {
		return *(T*)((uintptr_t)this + 0x2F0);
	}
	template <typename T = bool> T& in_ground() {
		return *(T*)((uintptr_t)this + 0x2F8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BossAI11*))(Il2CppBase() + 0x2EAB108))(this);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(BossAI11*))(Il2CppBase() + 0x2EAB2A0))(this);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(BossAI11*))(Il2CppBase() + 0x2EAB310))(this);
	}
	template <typename T = void> T StartAttack(int32_t index) {
		return ((T (*)(BossAI11*, int32_t))(Il2CppBase() + 0x2EAB430))(this, index);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(BossAI11*))(Il2CppBase() + 0x2EAB668))(this);
	}
	template <typename T = void> T GetHurt(int32_t damage, uintptr_t source_object) {
		return ((T (*)(BossAI11*, int32_t, uintptr_t))(Il2CppBase() + 0x2EAB9A0))(this, damage, source_object);
	}
	template <typename T = void> T ChildDead() {
		return ((T (*)(BossAI11*))(Il2CppBase() + 0x2EABB1C))(this);
	}
	template <typename T = void> T InAtk01() {
		return ((T (*)(BossAI11*))(Il2CppBase() + 0x2EABBE4))(this);
	}
	template <typename T = void> T InAtk02() {
		return ((T (*)(BossAI11*))(Il2CppBase() + 0x2EABFDC))(this);
	}
	template <typename T = void> T InAtk03() {
		return ((T (*)(BossAI11*))(Il2CppBase() + 0x2EAC3F8))(this);
	}
	template <typename T = void> T IntAtkIn() {
		return ((T (*)(BossAI11*))(Il2CppBase() + 0x2EAC6D8))(this);
	}
	template <typename T = void> T InAtkOut() {
		return ((T (*)(BossAI11*))(Il2CppBase() + 0x2EACB68))(this);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(BossAI11*))(Il2CppBase() + 0x2EAD004))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShootReflection() {
		return ((T (*)(BossAI11*))(Il2CppBase() + 0x2EAD00C))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartAttack(int32_t P0) {
		return ((T (*)(BossAI11*, int32_t))(Il2CppBase() + 0x2EAD014))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(BossAI11*))(Il2CppBase() + 0x2EAD01C))(this);
	}
	template <typename T = void> T iFixBaseProxy_GetHurt(int32_t P0, uintptr_t P1) {
		return ((T (*)(BossAI11*, int32_t, uintptr_t))(Il2CppBase() + 0x2EAD024))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_ChildDead() {
		return ((T (*)(BossAI11*))(Il2CppBase() + 0x2EAD02C))(this);
	}

};

}
