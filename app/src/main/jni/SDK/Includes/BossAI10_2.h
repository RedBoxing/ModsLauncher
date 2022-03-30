#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BossAI102
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossAI10_2"));
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
	template <typename T = int32_t> T& skill1Weight() {
		return *(T*)((uintptr_t)this + 0x2E8);
	}
	template <typename T = int32_t> T& skill2Weight() {
		return *(T*)((uintptr_t)this + 0x2EC);
	}
	template <typename T = int32_t> T& skill3Weight() {
		return *(T*)((uintptr_t)this + 0x2F0);
	}
	template <typename T = int32_t> T& skill4Weight() {
		return *(T*)((uintptr_t)this + 0x2F4);
	}
	template <typename T = int32_t> T& skill5Weight() {
		return *(T*)((uintptr_t)this + 0x2F8);
	}
	template <typename T = float> T& guardTime() {
		return *(T*)((uintptr_t)this + 0x2FC);
	}
	template <typename T = float> T& guardHealDelay() {
		return *(T*)((uintptr_t)this + 0x300);
	}
	template <typename T = bool> T& scaleHand() {
		return *(T*)((uintptr_t)this + 0x304);
	}
	template <typename T = uintptr_t> T& h1() {
		return *(T*)((uintptr_t)this + 0x308);
	}
	template <typename T = uintptr_t> T& h2() {
		return *(T*)((uintptr_t)this + 0x310);
	}
	template <typename T = int32_t> T& atk_4_count() {
		return *(T*)((uintptr_t)this + 0x318);
	}
	template <typename T = float> T& h2_scale_factor() {
		return *(T*)((uintptr_t)this + 0x31C);
	}
	template <typename T = Il2CppVector3> T& atk_4_center_pos() {
		return *(T*)((uintptr_t)this + 0x320);
	}
	template <typename T = bool> T& canHeal() {
		return *(T*)((uintptr_t)this + 0x32C);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BossAI102*))(Il2CppBase() + 0x2EA811C))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(BossAI102*))(Il2CppBase() + 0x2EA83B4))(this);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(BossAI102*))(Il2CppBase() + 0x2EA85FC))(this);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(BossAI102*))(Il2CppBase() + 0x2EA866C))(this);
	}
	template <typename T = void> T StartAttack(int32_t index) {
		return ((T (*)(BossAI102*, int32_t))(Il2CppBase() + 0x2EA886C))(this, index);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(BossAI102*))(Il2CppBase() + 0x2EA8F2C))(this);
	}
	template <typename T = void> T GetHurt(int32_t damage, uintptr_t source_object) {
		return ((T (*)(BossAI102*, int32_t, uintptr_t))(Il2CppBase() + 0x2EA9258))(this, damage, source_object);
	}
	template <typename T = void> T ChildDead() {
		return ((T (*)(BossAI102*))(Il2CppBase() + 0x2EA9618))(this);
	}
	template <typename T = void> T OnGameStateChange(int32_t game_state) {
		return ((T (*)(BossAI102*, int32_t))(Il2CppBase() + 0x2EA96CC))(this, game_state);
	}
	template <typename T = void> T StartAtk01() {
		return ((T (*)(BossAI102*))(Il2CppBase() + 0x2EA8984))(this);
	}
	template <typename T = void> T InAtk01() {
		return ((T (*)(BossAI102*))(Il2CppBase() + 0x2EA97E4))(this);
	}
	template <typename T = void> T StartAtk02() {
		return ((T (*)(BossAI102*))(Il2CppBase() + 0x2EA8B10))(this);
	}
	template <typename T = void> T InAtk02(int32_t num) {
		return ((T (*)(BossAI102*, int32_t))(Il2CppBase() + 0x2EA9E68))(this, num);
	}
	template <typename T = void> T StartAtk03() {
		return ((T (*)(BossAI102*))(Il2CppBase() + 0x2EA8C9C))(this);
	}
	template <typename T = void> T SetupHealing() {
		return ((T (*)(BossAI102*))(Il2CppBase() + 0x2EAA240))(this);
	}
	template <typename T = void> T EndAtk03() {
		return ((T (*)(BossAI102*))(Il2CppBase() + 0x2EAA2A4))(this);
	}
	template <typename T = void> T StartAtk04() {
		return ((T (*)(BossAI102*))(Il2CppBase() + 0x2EA8DB0))(this);
	}
	template <typename T = void> T InAtk04() {
		return ((T (*)(BossAI102*))(Il2CppBase() + 0x2EAA360))(this);
	}
	template <typename T = void> T CreateIcicle() {
		return ((T (*)(BossAI102*))(Il2CppBase() + 0x2EAA44C))(this);
	}
	template <typename T = void> T StartAtk05() {
		return ((T (*)(BossAI102*))(Il2CppBase() + 0x2EA8E54))(this);
	}
	template <typename T = void> T InAtk05() {
		return ((T (*)(BossAI102*))(Il2CppBase() + 0x2EAA944))(this);
	}
	template <typename T = void> T Dizzy(float duration, bool isFreeze) {
		return ((T (*)(BossAI102*, float, bool))(Il2CppBase() + 0x2EAAD5C))(this, duration, isFreeze);
	}
	template <typename T = void> T Reborn() {
		return ((T (*)(BossAI102*))(Il2CppBase() + 0x2EAAE5C))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(BossAI102*, uintptr_t))(Il2CppBase() + 0x2EAAF10))(this, other);
	}
	template <typename T = void> T CreateHpBar() {
		return ((T (*)(BossAI102*))(Il2CppBase() + 0x2EAAF94))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedUpdate() {
		return ((T (*)(BossAI102*))(Il2CppBase() + 0x2EAB0AC))(this);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(BossAI102*))(Il2CppBase() + 0x2EAB0B4))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShootReflection() {
		return ((T (*)(BossAI102*))(Il2CppBase() + 0x2EAB0BC))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartAttack(int32_t P0) {
		return ((T (*)(BossAI102*, int32_t))(Il2CppBase() + 0x2EAB0C4))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(BossAI102*))(Il2CppBase() + 0x2EAB0CC))(this);
	}
	template <typename T = void> T iFixBaseProxy_GetHurt(int32_t P0, uintptr_t P1) {
		return ((T (*)(BossAI102*, int32_t, uintptr_t))(Il2CppBase() + 0x2EAB0D4))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_ChildDead() {
		return ((T (*)(BossAI102*))(Il2CppBase() + 0x2EAB0DC))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnGameStateChange(int32_t P0) {
		return ((T (*)(BossAI102*, int32_t))(Il2CppBase() + 0x2EAB0E4))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Dizzy(float P0, bool P1) {
		return ((T (*)(BossAI102*, float, bool))(Il2CppBase() + 0x2EAB0EC))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_Reborn() {
		return ((T (*)(BossAI102*))(Il2CppBase() + 0x2EAB0F8))(this);
	}
	template <typename T = void> T iFixBaseProxy_CreateHpBar() {
		return ((T (*)(BossAI102*))(Il2CppBase() + 0x2EAB100))(this);
	}

};

}
