#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace BossSkill {

class Boss26Skill
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BossSkill", "Boss26Skill"));
	}

	template <typename T = uintptr_t> T& summonEnemyModel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& ultimateSkillModel() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& followBulletModel() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& snakeBulletModel() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& circularEnlargeModel() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& circularRandomModel() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Skills() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SkillAnimations() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppList<int32_t>*> T& _bufferWeight() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_Skills() {
		return ((T (*)(Boss26Skill*))(Il2CppBase() + 0x1B875D4))(this);
	}
	template <typename T = void> T set_Skills(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(Boss26Skill*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1B875DC))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_SkillAnimations() {
		return ((T (*)(Boss26Skill*))(Il2CppBase() + 0x1B875E4))(this);
	}
	template <typename T = void> T set_SkillAnimations(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(Boss26Skill*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1B875EC))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(Boss26Skill*))(Il2CppBase() + 0x1B875F4))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(Boss26Skill*))(Il2CppBase() + 0x1B88408))(this);
	}
	template <typename T = int32_t> T GetAttackIndex(uintptr_t controller) {
		return ((T (*)(Boss26Skill*, uintptr_t))(Il2CppBase() + 0x1B88558))(this, controller);
	}
	template <typename T = bool> T CanReleaseSkill(uintptr_t controller) {
		return ((T (*)(Boss26Skill*, uintptr_t))(Il2CppBase() + 0x1B8878C))(this, controller);
	}

};

}
