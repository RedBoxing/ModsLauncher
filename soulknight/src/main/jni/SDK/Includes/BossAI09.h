#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BossAI09
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossAI09"));
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
	template <typename T = uintptr_t> T& h1() {
		return *(T*)((uintptr_t)this + 0x2F0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BossAI09*))(Il2CppBase() + 0x2EA3160))(this);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(BossAI09*))(Il2CppBase() + 0x2EA32F8))(this);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(BossAI09*))(Il2CppBase() + 0x2EA3368))(this);
	}
	template <typename T = void> T StartAttack(int32_t index) {
		return ((T (*)(BossAI09*, int32_t))(Il2CppBase() + 0x2EA3484))(this, index);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(BossAI09*))(Il2CppBase() + 0x2EA3BC4))(this);
	}
	template <typename T = void> T GetHurt(int32_t damage, uintptr_t source_object) {
		return ((T (*)(BossAI09*, int32_t, uintptr_t))(Il2CppBase() + 0x2EA3EF0))(this, damage, source_object);
	}
	template <typename T = void> T StartAtk01() {
		return ((T (*)(BossAI09*))(Il2CppBase() + 0x2EA359C))(this);
	}
	template <typename T = void> T InAtk01() {
		return ((T (*)(BossAI09*))(Il2CppBase() + 0x2EA406C))(this);
	}
	template <typename T = void> T StartAtk02() {
		return ((T (*)(BossAI09*))(Il2CppBase() + 0x2EA38C4))(this);
	}
	template <typename T = void> T InAtk02() {
		return ((T (*)(BossAI09*))(Il2CppBase() + 0x2EA4694))(this);
	}
	template <typename T = void> T StartAtk03() {
		return ((T (*)(BossAI09*))(Il2CppBase() + 0x2EA399C))(this);
	}
	template <typename T = void> T InAtk03() {
		return ((T (*)(BossAI09*))(Il2CppBase() + 0x2EA49EC))(this);
	}
	template <typename T = void> T StartAtk04() {
		return ((T (*)(BossAI09*))(Il2CppBase() + 0x2EA3A74))(this);
	}
	template <typename T = void> T InAtk04() {
		return ((T (*)(BossAI09*))(Il2CppBase() + 0x2EA4D1C))(this);
	}
	template <typename T = void> T StartAtk05() {
		return ((T (*)(BossAI09*))(Il2CppBase() + 0x2EA3B20))(this);
	}
	template <typename T = void> T InAtk05() {
		return ((T (*)(BossAI09*))(Il2CppBase() + 0x2EA5210))(this);
	}
	template <typename T = void> T AtkEnd() {
		return ((T (*)(BossAI09*))(Il2CppBase() + 0x2EA5568))(this);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(BossAI09*))(Il2CppBase() + 0x2EA55E0))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShootReflection() {
		return ((T (*)(BossAI09*))(Il2CppBase() + 0x2EA55E8))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartAttack(int32_t P0) {
		return ((T (*)(BossAI09*, int32_t))(Il2CppBase() + 0x2EA55F0))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(BossAI09*))(Il2CppBase() + 0x2EA55F8))(this);
	}
	template <typename T = void> T iFixBaseProxy_GetHurt(int32_t P0, uintptr_t P1) {
		return ((T (*)(BossAI09*, int32_t, uintptr_t))(Il2CppBase() + 0x2EA5600))(this, P0, P1);
	}

};

}
