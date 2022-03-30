#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BossAI07
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossAI07"));
	}

	template <typename T = uintptr_t> T& angry_body() {
		return *(T*)((uintptr_t)this + 0x2C0);
	}
	template <typename T = uintptr_t> T& bullet01() {
		return *(T*)((uintptr_t)this + 0x2C8);
	}
	template <typename T = uintptr_t> T& bullet02() {
		return *(T*)((uintptr_t)this + 0x2D0);
	}
	template <typename T = uintptr_t> T& bullet03() {
		return *(T*)((uintptr_t)this + 0x2D8);
	}
	template <typename T = uintptr_t> T& bullet04() {
		return *(T*)((uintptr_t)this + 0x2E0);
	}
	template <typename T = uintptr_t> T& bullet05() {
		return *(T*)((uintptr_t)this + 0x2E8);
	}
	template <typename T = uintptr_t> T& bullet06() {
		return *(T*)((uintptr_t)this + 0x2F0);
	}
	template <typename T = uintptr_t> T& child_elf() {
		return *(T*)((uintptr_t)this + 0x2F8);
	}
	template <typename T = int32_t> T& atk2_count() {
		return *(T*)((uintptr_t)this + 0x300);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BossAI07*))(Il2CppBase() + 0x2E9E12C))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(BossAI07*))(Il2CppBase() + 0x2E9E2F8))(this);
	}
	template <typename T = void> T Scout() {
		return ((T (*)(BossAI07*))(Il2CppBase() + 0x2E9E41C))(this);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(BossAI07*))(Il2CppBase() + 0x2E9E890))(this);
	}
	template <typename T = void> T BossAngry() {
		return ((T (*)(BossAI07*))(Il2CppBase() + 0x2E9EA30))(this);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(BossAI07*))(Il2CppBase() + 0x2E9F1CC))(this);
	}
	template <typename T = void> T GetHurt(int32_t damage, uintptr_t source_object) {
		return ((T (*)(BossAI07*, int32_t, uintptr_t))(Il2CppBase() + 0x2E9F534))(this, damage, source_object);
	}
	template <typename T = void> T ChildDead() {
		return ((T (*)(BossAI07*))(Il2CppBase() + 0x2E9F6B0))(this);
	}
	template <typename T = void> T StartAtk01() {
		return ((T (*)(BossAI07*))(Il2CppBase() + 0x2E9E98C))(this);
	}
	template <typename T = void> T InAtk01() {
		return ((T (*)(BossAI07*))(Il2CppBase() + 0x2E9F8AC))(this);
	}
	template <typename T = void> T CreateBullet1() {
		return ((T (*)(BossAI07*))(Il2CppBase() + 0x2E9FA5C))(this);
	}
	template <typename T = void> T CreateBullet2() {
		return ((T (*)(BossAI07*))(Il2CppBase() + 0x2E9FE6C))(this);
	}
	template <typename T = void> T CreateBullet3() {
		return ((T (*)(BossAI07*))(Il2CppBase() + 0x2EA01E8))(this);
	}
	template <typename T = void> T CreateBullet4() {
		return ((T (*)(BossAI07*))(Il2CppBase() + 0x2EA05C8))(this);
	}
	template <typename T = void> T CreateBullet5() {
		return ((T (*)(BossAI07*))(Il2CppBase() + 0x2EA09D8))(this);
	}
	template <typename T = uintptr_t> T CreatingGas() {
		return ((T (*)(BossAI07*))(Il2CppBase() + 0x2E9F118))(this);
	}
	template <typename T = void> T CreateBullet6() {
		return ((T (*)(BossAI07*))(Il2CppBase() + 0x2EA0BB8))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedUpdate() {
		return ((T (*)(BossAI07*))(Il2CppBase() + 0x2EA0E10))(this);
	}
	template <typename T = void> T iFixBaseProxy_Scout() {
		return ((T (*)(BossAI07*))(Il2CppBase() + 0x2EA0E18))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShootReflection() {
		return ((T (*)(BossAI07*))(Il2CppBase() + 0x2EA0E20))(this);
	}
	template <typename T = void> T iFixBaseProxy_BossAngry() {
		return ((T (*)(BossAI07*))(Il2CppBase() + 0x2EA0E28))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(BossAI07*))(Il2CppBase() + 0x2EA0E30))(this);
	}
	template <typename T = void> T iFixBaseProxy_GetHurt(int32_t P0, uintptr_t P1) {
		return ((T (*)(BossAI07*, int32_t, uintptr_t))(Il2CppBase() + 0x2EA0E38))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_ChildDead() {
		return ((T (*)(BossAI07*))(Il2CppBase() + 0x2EA0E40))(this);
	}

};

}
