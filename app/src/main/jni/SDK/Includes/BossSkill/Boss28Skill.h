#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace BossSkill {

class Boss28Skill
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BossSkill", "Boss28Skill"));
	}

	template <typename T = uintptr_t> T& emitHookModel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& fireCannonModel() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& shieldDamageReduction() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& shieldDisableDuration() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& connon_prefab() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _owner() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _shield_control() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& _storedCannonBall() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Skills() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SkillAnimations() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = void*> T& onSkillAnimEvent() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_Skills() {
		return ((T (*)(Boss28Skill*))(Il2CppBase() + 0x1B964DC))(this);
	}
	template <typename T = void> T set_Skills(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(Boss28Skill*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1B964E4))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_SkillAnimations() {
		return ((T (*)(Boss28Skill*))(Il2CppBase() + 0x1B964EC))(this);
	}
	template <typename T = void> T set_SkillAnimations(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(Boss28Skill*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1B964F4))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(Boss28Skill*))(Il2CppBase() + 0x1B964FC))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(Boss28Skill*))(Il2CppBase() + 0x1B96CE0))(this);
	}
	template <typename T = uintptr_t> T CreateConnon() {
		return ((T (*)(Boss28Skill*))(Il2CppBase() + 0x1B96E30))(this);
	}
	template <typename T = int32_t> T GetAttackIndex(uintptr_t controller) {
		return ((T (*)(Boss28Skill*, uintptr_t))(Il2CppBase() + 0x1B96F10))(this, controller);
	}
	template <typename T = bool> T CanReleaseSkill(uintptr_t controller) {
		return ((T (*)(Boss28Skill*, uintptr_t))(Il2CppBase() + 0x1B97080))(this, controller);
	}
	template <typename T = bool> T CanProcessHurt(uintptr_t controller) {
		return ((T (*)(Boss28Skill*, uintptr_t))(Il2CppBase() + 0x1B97124))(this, controller);
	}
	template <typename T = void> T HurtProcess(uintptr_t controller, int32_t damage, uintptr_t sourceObject) {
		return ((T (*)(Boss28Skill*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x1B97198))(this, controller, damage, sourceObject);
	}
	template <typename T = void> T Boss28Skill_OnSkillAnimEvent(int32_t evNumber) {
		return ((T (*)(Boss28Skill*, int32_t))(Il2CppBase() + 0x1B972F4))(this, evNumber);
	}
	template <typename T = void> T TestHook() {
		return ((T (*)(Boss28Skill*))(Il2CppBase() + 0x1B973B0))(this);
	}
	template <typename T = void> T TestCannon(int32_t number) {
		return ((T (*)(Boss28Skill*, int32_t))(Il2CppBase() + 0x1B97430))(this, number);
	}
	template <typename T = void> T Awakeb__17_0() {
		return ((T (*)(Boss28Skill*))(Il2CppBase() + 0x1B974E0))(this);
	}
	template <typename T = void> T Awakeb__17_1() {
		return ((T (*)(Boss28Skill*))(Il2CppBase() + 0x1B9750C))(this);
	}
	template <typename T = void> T Awakeb__17_2() {
		return ((T (*)(Boss28Skill*))(Il2CppBase() + 0x1B9753C))(this);
	}
	template <typename T = void> T Awakeb__17_3() {
		return ((T (*)(Boss28Skill*))(Il2CppBase() + 0x1B97568))(this);
	}

};

}
