#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BossAINian
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossAINian"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& lanterns() {
		return *(T*)((uintptr_t)this + 0x2C0);
	}
	template <typename T = uintptr_t> T& bullet01() {
		return *(T*)((uintptr_t)this + 0x2C8);
	}
	template <typename T = uintptr_t> T& bullet02() {
		return *(T*)((uintptr_t)this + 0x2D0);
	}
	template <typename T = uintptr_t> T& bullet02_shake() {
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
	template <typename T = bool> T& invisible() {
		return *(T*)((uintptr_t)this + 0x2F8);
	}
	template <typename T = uintptr_t> T& point_1() {
		return *(T*)((uintptr_t)this + 0x300);
	}
	template <typename T = uintptr_t> T& corn() {
		return *(T*)((uintptr_t)this + 0x308);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BossAINian*))(Il2CppBase() + 0x1DE426C))(this);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(BossAINian*))(Il2CppBase() + 0x1DE446C))(this);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(BossAINian*))(Il2CppBase() + 0x1DE48DC))(this);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(BossAINian*))(Il2CppBase() + 0x1DE4FE4))(this);
	}
	template <typename T = void> T GetHurt(int32_t damage, uintptr_t source_object) {
		return ((T (*)(BossAINian*, int32_t, uintptr_t))(Il2CppBase() + 0x1DE5370))(this, damage, source_object);
	}
	template <typename T = void> T StartAtk01() {
		return ((T (*)(BossAINian*))(Il2CppBase() + 0x1DE4A08))(this);
	}
	template <typename T = void> T InAtk01() {
		return ((T (*)(BossAINian*))(Il2CppBase() + 0x1DE5498))(this);
	}
	template <typename T = void> T CastPoly() {
		return ((T (*)(BossAINian*))(Il2CppBase() + 0x1DE5864))(this);
	}
	template <typename T = void> T StartAtk02() {
		return ((T (*)(BossAINian*))(Il2CppBase() + 0x1DE4B0C))(this);
	}
	template <typename T = void> T InAtk02() {
		return ((T (*)(BossAINian*))(Il2CppBase() + 0x1DE5A98))(this);
	}
	template <typename T = void> T StartAtk03() {
		return ((T (*)(BossAINian*))(Il2CppBase() + 0x1DE4C10))(this);
	}
	template <typename T = void> T InAtk03() {
		return ((T (*)(BossAINian*))(Il2CppBase() + 0x1DE5CCC))(this);
	}
	template <typename T = void> T StartAtk04() {
		return ((T (*)(BossAINian*))(Il2CppBase() + 0x1DE4D60))(this);
	}
	template <typename T = void> T InAtk04() {
		return ((T (*)(BossAINian*))(Il2CppBase() + 0x1DE6024))(this);
	}
	template <typename T = void> T StartAtk05() {
		return ((T (*)(BossAINian*))(Il2CppBase() + 0x1DE4EE8))(this);
	}
	template <typename T = void> T InAtk05() {
		return ((T (*)(BossAINian*))(Il2CppBase() + 0x1DE6408))(this);
	}
	template <typename T = uintptr_t> T Attacking05() {
		return ((T (*)(BossAINian*))(Il2CppBase() + 0x1DE6478))(this);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(BossAINian*))(Il2CppBase() + 0x1DE6560))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShootReflection() {
		return ((T (*)(BossAINian*))(Il2CppBase() + 0x1DE6568))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(BossAINian*))(Il2CppBase() + 0x1DE6570))(this);
	}
	template <typename T = void> T iFixBaseProxy_GetHurt(int32_t P0, uintptr_t P1) {
		return ((T (*)(BossAINian*, int32_t, uintptr_t))(Il2CppBase() + 0x1DE6578))(this, P0, P1);
	}

};

}
