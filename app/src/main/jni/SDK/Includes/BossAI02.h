#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BossAI02
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossAI02"));
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
	template <typename T = uintptr_t> T& point_1() {
		return *(T*)((uintptr_t)this + 0x2F0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BossAI02*))(Il2CppBase() + 0x1B3504C))(this);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(BossAI02*))(Il2CppBase() + 0x1B35218))(this);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(BossAI02*))(Il2CppBase() + 0x1B35288))(this);
	}
	template <typename T = void> T StartAttack(int32_t index) {
		return ((T (*)(BossAI02*, int32_t))(Il2CppBase() + 0x1B35390))(this, index);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(BossAI02*))(Il2CppBase() + 0x1B354F4))(this);
	}
	template <typename T = void> T GetHurt(int32_t damage, uintptr_t source_object) {
		return ((T (*)(BossAI02*, int32_t, uintptr_t))(Il2CppBase() + 0x1B35870))(this, damage, source_object);
	}
	template <typename T = void> T ChildDead() {
		return ((T (*)(BossAI02*))(Il2CppBase() + 0x1B359EC))(this);
	}
	template <typename T = void> T InAtk01() {
		return ((T (*)(BossAI02*))(Il2CppBase() + 0x1B35BC8))(this);
	}
	template <typename T = void> T EndAtk01() {
		return ((T (*)(BossAI02*))(Il2CppBase() + 0x1B35FA0))(this);
	}
	template <typename T = void> T InAtk02() {
		return ((T (*)(BossAI02*))(Il2CppBase() + 0x1B3624C))(this);
	}
	template <typename T = uintptr_t> T CreatingBullet() {
		return ((T (*)(BossAI02*))(Il2CppBase() + 0x1B363D0))(this);
	}
	template <typename T = void> T CreateBullet() {
		return ((T (*)(BossAI02*))(Il2CppBase() + 0x1B364B0))(this);
	}
	template <typename T = void> T EndAtk02() {
		return ((T (*)(BossAI02*))(Il2CppBase() + 0x1B36800))(this);
	}
	template <typename T = void> T TrunWeaponLock() {
		return ((T (*)(BossAI02*))(Il2CppBase() + 0x1B36194))(this);
	}
	template <typename T = void> T InAtk03() {
		return ((T (*)(BossAI02*))(Il2CppBase() + 0x1B368B0))(this);
	}
	template <typename T = void> T EndAtk03() {
		return ((T (*)(BossAI02*))(Il2CppBase() + 0x1B36CD0))(this);
	}
	template <typename T = void> T InAtk04() {
		return ((T (*)(BossAI02*))(Il2CppBase() + 0x1B36E28))(this);
	}
	template <typename T = void> T EndAtk04() {
		return ((T (*)(BossAI02*))(Il2CppBase() + 0x1B3721C))(this);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(BossAI02*))(Il2CppBase() + 0x1B372F0))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShootReflection() {
		return ((T (*)(BossAI02*))(Il2CppBase() + 0x1B372F8))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartAttack(int32_t P0) {
		return ((T (*)(BossAI02*, int32_t))(Il2CppBase() + 0x1B37300))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(BossAI02*))(Il2CppBase() + 0x1B37308))(this);
	}
	template <typename T = void> T iFixBaseProxy_GetHurt(int32_t P0, uintptr_t P1) {
		return ((T (*)(BossAI02*, int32_t, uintptr_t))(Il2CppBase() + 0x1B37310))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_ChildDead() {
		return ((T (*)(BossAI02*))(Il2CppBase() + 0x1B37318))(this);
	}

};

}
