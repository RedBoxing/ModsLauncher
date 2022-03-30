#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BossAI16
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossAI16"));
	}

	template <typename T = uintptr_t> T& aim() {
		return *(T*)((uintptr_t)this + 0x2C0);
	}
	template <typename T = uintptr_t> T& bullet01() {
		return *(T*)((uintptr_t)this + 0x2C8);
	}
	template <typename T = uintptr_t> T& bullet02_1() {
		return *(T*)((uintptr_t)this + 0x2D0);
	}
	template <typename T = uintptr_t> T& bullet02_2() {
		return *(T*)((uintptr_t)this + 0x2D8);
	}
	template <typename T = uintptr_t> T& bullet03() {
		return *(T*)((uintptr_t)this + 0x2E0);
	}
	template <typename T = uintptr_t> T& bullet04() {
		return *(T*)((uintptr_t)this + 0x2E8);
	}
	template <typename T = uintptr_t> T& bullet05() {
		return *(T*)((uintptr_t)this + 0x2F0);
	}
	template <typename T = uintptr_t> T& bullet06() {
		return *(T*)((uintptr_t)this + 0x2F8);
	}
	template <typename T = uintptr_t> T& horsePrefab() {
		return *(T*)((uintptr_t)this + 0x300);
	}
	template <typename T = uintptr_t> T& horse() {
		return *(T*)((uintptr_t)this + 0x308);
	}
	template <typename T = uintptr_t> T& gun_point() {
		return *(T*)((uintptr_t)this + 0x310);
	}
	template <typename T = uintptr_t> T& horse_img() {
		return *(T*)((uintptr_t)this + 0x318);
	}
	template <typename T = uintptr_t> T& horse_hand() {
		return *(T*)((uintptr_t)this + 0x320);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& the_aims() {
		return *(T*)((uintptr_t)this + 0x328);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BossAI16*))(Il2CppBase() + 0x294C480))(this);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(BossAI16*))(Il2CppBase() + 0x294C6B4))(this);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(BossAI16*))(Il2CppBase() + 0x294C724))(this);
	}
	template <typename T = void> T GetHurt(int32_t damage, uintptr_t source_object) {
		return ((T (*)(BossAI16*, int32_t, uintptr_t))(Il2CppBase() + 0x294D084))(this, damage, source_object);
	}
	template <typename T = void> T ChildDead() {
		return ((T (*)(BossAI16*))(Il2CppBase() + 0x294D200))(this);
	}
	template <typename T = void> T DevideHead() {
		return ((T (*)(BossAI16*))(Il2CppBase() + 0x294CAAC))(this);
	}
	template <typename T = void> T StartAtk01(int32_t index) {
		return ((T (*)(BossAI16*, int32_t))(Il2CppBase() + 0x294D6EC))(this, index);
	}
	template <typename T = void> T InAtk01(int32_t index) {
		return ((T (*)(BossAI16*, int32_t))(Il2CppBase() + 0x294DA90))(this, index);
	}
	template <typename T = void> T EndAtk01() {
		return ((T (*)(BossAI16*))(Il2CppBase() + 0x294DEBC))(this);
	}
	template <typename T = void> T InAtk02(int32_t index) {
		return ((T (*)(BossAI16*, int32_t))(Il2CppBase() + 0x294DF8C))(this, index);
	}
	template <typename T = void> T EndAtk2() {
		return ((T (*)(BossAI16*))(Il2CppBase() + 0x294E55C))(this);
	}
	template <typename T = void> T InAtk03(int32_t index) {
		return ((T (*)(BossAI16*, int32_t))(Il2CppBase() + 0x294E660))(this, index);
	}
	template <typename T = void> T InAtk04() {
		return ((T (*)(BossAI16*))(Il2CppBase() + 0x294EB04))(this);
	}
	template <typename T = void> T EndAtk04() {
		return ((T (*)(BossAI16*))(Il2CppBase() + 0x294EEA8))(this);
	}
	template <typename T = void> T InAttack05() {
		return ((T (*)(BossAI16*))(Il2CppBase() + 0x294F00C))(this);
	}
	template <typename T = void> T StartAtk06() {
		return ((T (*)(BossAI16*))(Il2CppBase() + 0x294CDD8))(this);
	}
	template <typename T = void> T InAtk06() {
		return ((T (*)(BossAI16*))(Il2CppBase() + 0x294F414))(this);
	}
	template <typename T = void> T EndAttack06() {
		return ((T (*)(BossAI16*))(Il2CppBase() + 0x294F7D4))(this);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(BossAI16*))(Il2CppBase() + 0x294FAC0))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShootReflection() {
		return ((T (*)(BossAI16*))(Il2CppBase() + 0x294FAC8))(this);
	}
	template <typename T = void> T iFixBaseProxy_GetHurt(int32_t P0, uintptr_t P1) {
		return ((T (*)(BossAI16*, int32_t, uintptr_t))(Il2CppBase() + 0x294FAD0))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_ChildDead() {
		return ((T (*)(BossAI16*))(Il2CppBase() + 0x294FAD8))(this);
	}

};

}
