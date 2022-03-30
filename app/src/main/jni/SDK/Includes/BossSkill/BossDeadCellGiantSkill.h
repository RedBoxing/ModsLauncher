#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace BossSkill {

class BossDeadCellGiantSkill
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BossSkill", "BossDeadCellGiantSkill"));
	}

	template <typename T = uintptr_t> T& boss() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& room() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& angryClip() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& blockcollider() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& roarModel() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& handHammerModelL() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& handHammerModelR() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& handHammerModelBoth() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& eyelaserModel() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& bulletShowerModel() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = float> T& skillCommonCooldown() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Skills() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SkillAnimations() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& mousePoint() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& skillBulletShower() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& rechargeSound() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = void*> T& currentSkill() {
		return *(T*)((uintptr_t)this + 0xD8);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_Skills() {
		return ((T (*)(BossDeadCellGiantSkill*))(Il2CppBase() + 0x1B9C47C))(this);
	}
	template <typename T = void> T set_Skills(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BossDeadCellGiantSkill*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1B9C484))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_SkillAnimations() {
		return ((T (*)(BossDeadCellGiantSkill*))(Il2CppBase() + 0x1B9C48C))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(BossDeadCellGiantSkill*))(Il2CppBase() + 0x1B9C494))(this);
	}
	template <typename T = int32_t> T GetAttackIndex(uintptr_t controller) {
		return ((T (*)(BossDeadCellGiantSkill*, uintptr_t))(Il2CppBase() + 0x1B9CABC))(this, controller);
	}
	template <typename T = bool> T CanReleaseSkill(uintptr_t controller) {
		return ((T (*)(BossDeadCellGiantSkill*, uintptr_t))(Il2CppBase() + 0x1B9CEE8))(this, controller);
	}
	template <typename T = bool> T CanProcessHurt(uintptr_t controller) {
		return ((T (*)(BossDeadCellGiantSkill*, uintptr_t))(Il2CppBase() + 0x1B9CF90))(this, controller);
	}
	template <typename T = void> T HurtProcess(uintptr_t controller, int32_t damage, uintptr_t sourceObject) {
		return ((T (*)(BossDeadCellGiantSkill*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x1B9D004))(this, controller, damage, sourceObject);
	}
	template <typename T = void> T TestRoar() {
		return ((T (*)(BossDeadCellGiantSkill*))(Il2CppBase() + 0x1B9D554))(this);
	}
	template <typename T = void*> T get_currentSkill() {
		return ((T (*)(BossDeadCellGiantSkill*))(Il2CppBase() + 0x1B9D52C))(this);
	}
	template <typename T = void> T set_currentSkill(void* value) {
		return ((T (*)(BossDeadCellGiantSkill*, void*))(Il2CppBase() + 0x1B9D5D4))(this, value);
	}
	template <typename T = void> T OnSkillAnimationEvent(int32_t key) {
		return ((T (*)(BossDeadCellGiantSkill*, int32_t))(Il2CppBase() + 0x1B9D5DC))(this, key);
	}
	template <typename T = void> T OnSkillAnimationEnd() {
		return ((T (*)(BossDeadCellGiantSkill*))(Il2CppBase() + 0x1B9D68C))(this);
	}
	template <typename T = bool> T Awakeb__20_1() {
		return ((T (*)(BossDeadCellGiantSkill*))(Il2CppBase() + 0x1B9D750))(this);
	}
	template <typename T = void> T Awakeb__20_3() {
		return ((T (*)(BossDeadCellGiantSkill*))(Il2CppBase() + 0x1B9D84C))(this);
	}
	template <typename T = void> T Awakeb__20_2(uintptr_t e) {
		return ((T (*)(BossDeadCellGiantSkill*, uintptr_t))(Il2CppBase() + 0x1B9D884))(this, e);
	}

};

}
