#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace BossSkill {

class Boss27Skill
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BossSkill", "Boss27Skill"));
	}

	template <typename T = uintptr_t> T& heavyAttackModel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& fastSlashModel() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& jumpSlashModel() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& restoreArmorModel() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& summonScarabModel() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& armorRestoreDuration() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& enemyAi() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& animKeyBrokenArmor() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& boss27Armor() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& transportEffectPrefab() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Skills() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SkillAnimations() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppList<int32_t>*> T& skillWeight() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> static T& RestoreArmorIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& _isArmorEmpty() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& _armorRestoreCounter() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& _animIdBrokenArmor() {
		return *(T*)((uintptr_t)this + 0x98);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_Skills() {
		return ((T (*)(Boss27Skill*))(Il2CppBase() + 0x1B90A9C))(this);
	}
	template <typename T = void> T set_Skills(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(Boss27Skill*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1B90AA4))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_SkillAnimations() {
		return ((T (*)(Boss27Skill*))(Il2CppBase() + 0x1B90AAC))(this);
	}
	template <typename T = void> T set_SkillAnimations(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(Boss27Skill*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1B90AB4))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(Boss27Skill*))(Il2CppBase() + 0x1B90ABC))(this);
	}
	template <typename T = void> T OnDead(uintptr_t obj) {
		return ((T (*)(Boss27Skill*, uintptr_t))(Il2CppBase() + 0x1B915BC))(this, obj);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(Boss27Skill*))(Il2CppBase() + 0x1B91670))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(Boss27Skill*))(Il2CppBase() + 0x1B91828))(this);
	}
	template <typename T = void> T OnBossArmorChange(uintptr_t e) {
		return ((T (*)(Boss27Skill*, uintptr_t))(Il2CppBase() + 0x1B91D28))(this, e);
	}
	template <typename T = int32_t> T GetAttackIndex(uintptr_t controller) {
		return ((T (*)(Boss27Skill*, uintptr_t))(Il2CppBase() + 0x1B921A0))(this, controller);
	}
	template <typename T = bool> T CanReleaseSkill(uintptr_t controller) {
		return ((T (*)(Boss27Skill*, uintptr_t))(Il2CppBase() + 0x1B923D4))(this, controller);
	}
	template <typename T = void> T OnDrawGizmosSelected() {
		return ((T (*)(Boss27Skill*))(Il2CppBase() + 0x1B92450))(this);
	}

};

}
