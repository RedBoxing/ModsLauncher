#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BossAI10
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossAI10"));
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
	template <typename T = uintptr_t> T& h1() {
		return *(T*)((uintptr_t)this + 0x2E0);
	}
	template <typename T = uintptr_t> T& h2() {
		return *(T*)((uintptr_t)this + 0x2E8);
	}
	template <typename T = int32_t> T& atk_4_count() {
		return *(T*)((uintptr_t)this + 0x2F0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BossAI10*))(Il2CppBase() + 0x2EA5608))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(BossAI10*))(Il2CppBase() + 0x2EA57D4))(this);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(BossAI10*))(Il2CppBase() + 0x2EA5A1C))(this);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(BossAI10*))(Il2CppBase() + 0x2EA5A8C))(this);
	}
	template <typename T = void> T StartAttack(int32_t index) {
		return ((T (*)(BossAI10*, int32_t))(Il2CppBase() + 0x2EA5BA8))(this, index);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(BossAI10*))(Il2CppBase() + 0x2EA624C))(this);
	}
	template <typename T = void> T GetHurt(int32_t damage, uintptr_t source_object) {
		return ((T (*)(BossAI10*, int32_t, uintptr_t))(Il2CppBase() + 0x2EA6578))(this, damage, source_object);
	}
	template <typename T = void> T ChildDead() {
		return ((T (*)(BossAI10*))(Il2CppBase() + 0x2EA6990))(this);
	}
	template <typename T = void> T OnGameStateChange(int32_t game_state) {
		return ((T (*)(BossAI10*, int32_t))(Il2CppBase() + 0x2EA6A44))(this, game_state);
	}
	template <typename T = void> T StartAtk01() {
		return ((T (*)(BossAI10*))(Il2CppBase() + 0x2EA5CC0))(this);
	}
	template <typename T = void> T InAtk01() {
		return ((T (*)(BossAI10*))(Il2CppBase() + 0x2EA6B5C))(this);
	}
	template <typename T = void> T StartAtk02() {
		return ((T (*)(BossAI10*))(Il2CppBase() + 0x2EA5E4C))(this);
	}
	template <typename T = void> T InAtk02() {
		return ((T (*)(BossAI10*))(Il2CppBase() + 0x2EA6F1C))(this);
	}
	template <typename T = void> T StartAtk03() {
		return ((T (*)(BossAI10*))(Il2CppBase() + 0x2EA5FD8))(this);
	}
	template <typename T = void> T EndAtk03() {
		return ((T (*)(BossAI10*))(Il2CppBase() + 0x2EA72CC))(this);
	}
	template <typename T = void> T StartAtk04() {
		return ((T (*)(BossAI10*))(Il2CppBase() + 0x2EA60D0))(this);
	}
	template <typename T = void> T InAtk04() {
		return ((T (*)(BossAI10*))(Il2CppBase() + 0x2EA7388))(this);
	}
	template <typename T = void> T CreateIcicle() {
		return ((T (*)(BossAI10*))(Il2CppBase() + 0x2EA7444))(this);
	}
	template <typename T = void> T StartAtk05() {
		return ((T (*)(BossAI10*))(Il2CppBase() + 0x2EA6174))(this);
	}
	template <typename T = void> T InAtk05() {
		return ((T (*)(BossAI10*))(Il2CppBase() + 0x2EA7980))(this);
	}
	template <typename T = void> T Dizzy(float duration, bool isFreeze) {
		return ((T (*)(BossAI10*, float, bool))(Il2CppBase() + 0x2EA7D98))(this, duration, isFreeze);
	}
	template <typename T = void> T Reborn() {
		return ((T (*)(BossAI10*))(Il2CppBase() + 0x2EA7E98))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(BossAI10*, uintptr_t))(Il2CppBase() + 0x2EA7F4C))(this, other);
	}
	template <typename T = void> T CreateHpBar() {
		return ((T (*)(BossAI10*))(Il2CppBase() + 0x2EA7FD0))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedUpdate() {
		return ((T (*)(BossAI10*))(Il2CppBase() + 0x2EA80C0))(this);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(BossAI10*))(Il2CppBase() + 0x2EA80C8))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShootReflection() {
		return ((T (*)(BossAI10*))(Il2CppBase() + 0x2EA80D0))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartAttack(int32_t P0) {
		return ((T (*)(BossAI10*, int32_t))(Il2CppBase() + 0x2EA80D8))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(BossAI10*))(Il2CppBase() + 0x2EA80E0))(this);
	}
	template <typename T = void> T iFixBaseProxy_GetHurt(int32_t P0, uintptr_t P1) {
		return ((T (*)(BossAI10*, int32_t, uintptr_t))(Il2CppBase() + 0x2EA80E8))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_ChildDead() {
		return ((T (*)(BossAI10*))(Il2CppBase() + 0x2EA80F0))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnGameStateChange(int32_t P0) {
		return ((T (*)(BossAI10*, int32_t))(Il2CppBase() + 0x2EA80F8))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Dizzy(float P0, bool P1) {
		return ((T (*)(BossAI10*, float, bool))(Il2CppBase() + 0x2EA8100))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_Reborn() {
		return ((T (*)(BossAI10*))(Il2CppBase() + 0x2EA810C))(this);
	}
	template <typename T = void> T iFixBaseProxy_CreateHpBar() {
		return ((T (*)(BossAI10*))(Il2CppBase() + 0x2EA8114))(this);
	}

};

}
