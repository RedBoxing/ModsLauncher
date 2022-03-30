#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGSwordTriggerBeheadedSkill
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGSwordTriggerBeheadedSkill"));
	}

	template <typename T = uintptr_t> T& hitClip() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = void*> T& kicked() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& enemyHideBullet() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& show_zero_dmg() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = bool> T& forceFromSource() {
		return *(T*)((uintptr_t)this + 0x91);
	}
	template <typename T = int32_t> T& kickHitDamage() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& kickHitCritic() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = float> T& canKickForce() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = float> T& cantKickForce() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& _the_bullet() {
		return *(T*)((uintptr_t)this + 0xA8);
	}

	template <typename T = Il2CppVector3> T get_forceSourcePosition() {
		return ((T (*)(RGSwordTriggerBeheadedSkill*))(Il2CppBase() + 0x43DFF88))(this);
	}
	template <typename T = uintptr_t> T get_the_bullet() {
		return ((T (*)(RGSwordTriggerBeheadedSkill*))(Il2CppBase() + 0x43E0188))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(RGSwordTriggerBeheadedSkill*, uintptr_t))(Il2CppBase() + 0x43E0290))(this, other);
	}
	template <typename T = void> T UpdateCriticFactor() {
		return ((T (*)(RGSwordTriggerBeheadedSkill*))(Il2CppBase() + 0x43E1840))(this);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(RGSwordTriggerBeheadedSkill*))(Il2CppBase() + 0x43E18C4))(this);
	}
	template <typename T = void> T OnHit(uintptr_t other, bool isCritic) {
		return ((T (*)(RGSwordTriggerBeheadedSkill*, uintptr_t, bool))(Il2CppBase() + 0x43E1984))(this, other, isCritic);
	}
	template <typename T = uintptr_t> T GetBulletSourceObject() {
		return ((T (*)(RGSwordTriggerBeheadedSkill*))(Il2CppBase() + 0x43E0094))(this);
	}
	template <typename T = void> T SetInfo(int32_t value1, int32_t camp, int32_t repel, int32_t critic) {
		return ((T (*)(RGSwordTriggerBeheadedSkill*, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x43E19FC))(this, value1, camp, repel, critic);
	}
	template <typename T = void> T SetInfo_1(uintptr_t info) {
		return ((T (*)(RGSwordTriggerBeheadedSkill*, uintptr_t))(Il2CppBase() + 0x43E1AA4))(this, info);
	}
	template <typename T = void> T CastModTrigger() {
		return ((T (*)(RGSwordTriggerBeheadedSkill*))(Il2CppBase() + 0x43E1B70))(this);
	}
	template <typename T = void> T Enlarge(int32_t deltaDmg, int32_t critic, float deltaSize, Il2CppString* mark) {
		return ((T (*)(RGSwordTriggerBeheadedSkill*, int32_t, int32_t, float, Il2CppString*))(Il2CppBase() + 0x43E1F68))(this, deltaDmg, critic, deltaSize, mark);
	}
	template <typename T = void> T iFixBaseProxy_UpdateCriticFactor() {
		return ((T (*)(RGSwordTriggerBeheadedSkill*))(Il2CppBase() + 0x43E20B4))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTaken() {
		return ((T (*)(RGSwordTriggerBeheadedSkill*))(Il2CppBase() + 0x43E20BC))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetInfo(uintptr_t P0) {
		return ((T (*)(RGSwordTriggerBeheadedSkill*, uintptr_t))(Il2CppBase() + 0x43E20C4))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_CastModTrigger() {
		return ((T (*)(RGSwordTriggerBeheadedSkill*))(Il2CppBase() + 0x43E20F8))(this);
	}
	template <typename T = void> T iFixBaseProxy_Enlarge(int32_t P0, int32_t P1, float P2, Il2CppString* P3) {
		return ((T (*)(RGSwordTriggerBeheadedSkill*, int32_t, int32_t, float, Il2CppString*))(Il2CppBase() + 0x43E2100))(this, P0, P1, P2, P3);
	}

};

}
