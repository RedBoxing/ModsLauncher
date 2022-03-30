#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BossAI13
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossAI13"));
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
	template <typename T = uintptr_t> T& bullet03_angry() {
		return *(T*)((uintptr_t)this + 0x2D8);
	}
	template <typename T = uintptr_t> T& bullet04() {
		return *(T*)((uintptr_t)this + 0x2E0);
	}
	template <typename T = uintptr_t> T& bullet04_snowman() {
		return *(T*)((uintptr_t)this + 0x2E8);
	}
	template <typename T = uintptr_t> T& bullet05() {
		return *(T*)((uintptr_t)this + 0x2F0);
	}
	template <typename T = uintptr_t> T& h1() {
		return *(T*)((uintptr_t)this + 0x2F8);
	}
	template <typename T = uintptr_t> T& h2() {
		return *(T*)((uintptr_t)this + 0x300);
	}
	template <typename T = uintptr_t> T& h1_gunpoint() {
		return *(T*)((uintptr_t)this + 0x308);
	}
	template <typename T = uintptr_t> T& h2_gunpoint() {
		return *(T*)((uintptr_t)this + 0x310);
	}
	template <typename T = uintptr_t> T& eye_left() {
		return *(T*)((uintptr_t)this + 0x318);
	}
	template <typename T = uintptr_t> T& eye_right() {
		return *(T*)((uintptr_t)this + 0x320);
	}
	template <typename T = uintptr_t> T& body() {
		return *(T*)((uintptr_t)this + 0x328);
	}
	template <typename T = bool> T& inAttack5() {
		return *(T*)((uintptr_t)this + 0x330);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BossAI13*))(Il2CppBase() + 0x294115C))(this);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(BossAI13*))(Il2CppBase() + 0x2941440))(this);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(BossAI13*))(Il2CppBase() + 0x29414B0))(this);
	}
	template <typename T = void> T StartAttack(int32_t index) {
		return ((T (*)(BossAI13*, int32_t))(Il2CppBase() + 0x294161C))(this, index);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(BossAI13*))(Il2CppBase() + 0x2941CAC))(this);
	}
	template <typename T = void> T GetHurt(int32_t damage, uintptr_t source_object) {
		return ((T (*)(BossAI13*, int32_t, uintptr_t))(Il2CppBase() + 0x2941FD8))(this, damage, source_object);
	}
	template <typename T = void> T StartAtk01() {
		return ((T (*)(BossAI13*))(Il2CppBase() + 0x2941734))(this);
	}
	template <typename T = void> T InAtk01() {
		return ((T (*)(BossAI13*))(Il2CppBase() + 0x2942154))(this);
	}
	template <typename T = void> T EndAtk01() {
		return ((T (*)(BossAI13*))(Il2CppBase() + 0x2942574))(this);
	}
	template <typename T = void> T StartAtk02() {
		return ((T (*)(BossAI13*))(Il2CppBase() + 0x29419D0))(this);
	}
	template <typename T = void> T InAtk02(int32_t isH2) {
		return ((T (*)(BossAI13*, int32_t))(Il2CppBase() + 0x294266C))(this, isH2);
	}
	template <typename T = void> T EndAtk02() {
		return ((T (*)(BossAI13*))(Il2CppBase() + 0x2942BC8))(this);
	}
	template <typename T = void> T StartAtk03() {
		return ((T (*)(BossAI13*))(Il2CppBase() + 0x2941A74))(this);
	}
	template <typename T = void> T InAtk03() {
		return ((T (*)(BossAI13*))(Il2CppBase() + 0x2942C34))(this);
	}
	template <typename T = void> T StartAtk04() {
		return ((T (*)(BossAI13*))(Il2CppBase() + 0x2941B18))(this);
	}
	template <typename T = void> T InAtk04() {
		return ((T (*)(BossAI13*))(Il2CppBase() + 0x294322C))(this);
	}
	template <typename T = void> T StartAtk05() {
		return ((T (*)(BossAI13*))(Il2CppBase() + 0x2941C08))(this);
	}
	template <typename T = void> T InAtk05() {
		return ((T (*)(BossAI13*))(Il2CppBase() + 0x2943808))(this);
	}
	template <typename T = uintptr_t> T Attacking5() {
		return ((T (*)(BossAI13*))(Il2CppBase() + 0x2943948))(this);
	}
	template <typename T = void> T EndAttack5() {
		return ((T (*)(BossAI13*))(Il2CppBase() + 0x2943A28))(this);
	}
	template <typename T = float> T GetAngle(uintptr_t trans) {
		return ((T (*)(BossAI13*, uintptr_t))(Il2CppBase() + 0x29429EC))(this, trans);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(BossAI13*))(Il2CppBase() + 0x2943AA0))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShootReflection() {
		return ((T (*)(BossAI13*))(Il2CppBase() + 0x2943AA8))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartAttack(int32_t P0) {
		return ((T (*)(BossAI13*, int32_t))(Il2CppBase() + 0x2943AB0))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(BossAI13*))(Il2CppBase() + 0x2943AB8))(this);
	}
	template <typename T = void> T iFixBaseProxy_GetHurt(int32_t P0, uintptr_t P1) {
		return ((T (*)(BossAI13*, int32_t, uintptr_t))(Il2CppBase() + 0x2943AC0))(this, P0, P1);
	}

};

}
