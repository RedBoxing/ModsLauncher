#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace BossSkill {

class Boss25Skill
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BossSkill", "Boss25Skill"));
	}

	template <typename T = uintptr_t> T& predictExplodeModel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& ringBulletModel() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& followBulletModel() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& traceBulletModel() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Skills() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SkillAnimations() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_Skills() {
		return ((T (*)(Boss25Skill*))(Il2CppBase() + 0x1B8347C))(this);
	}
	template <typename T = void> T set_Skills(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(Boss25Skill*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1B83484))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_SkillAnimations() {
		return ((T (*)(Boss25Skill*))(Il2CppBase() + 0x1B8348C))(this);
	}
	template <typename T = void> T set_SkillAnimations(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(Boss25Skill*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1B83494))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(Boss25Skill*))(Il2CppBase() + 0x1B8349C))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(Boss25Skill*))(Il2CppBase() + 0x1B83BF4))(this);
	}
	template <typename T = int32_t> T GetAttackIndex(uintptr_t controller) {
		return ((T (*)(Boss25Skill*, uintptr_t))(Il2CppBase() + 0x1B83D44))(this, controller);
	}
	template <typename T = bool> T CanReleaseSkill(uintptr_t controller) {
		return ((T (*)(Boss25Skill*, uintptr_t))(Il2CppBase() + 0x1B83F70))(this, controller);
	}
	template <typename T = void> T OnDrawGizmosSelected() {
		return ((T (*)(Boss25Skill*))(Il2CppBase() + 0x1B83FE4))(this);
	}
	template <typename T = uintptr_t> static T TargetProcess(uintptr_t sourceObject, uintptr_t releaseTarget, int32_t hitPlayerRate, Il2CppArray<uintptr_t>* colliderBuffer) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1B84238))(0, sourceObject, releaseTarget, hitPlayerRate, colliderBuffer);
	}
	template <typename T = void> T Awakeb__12_0(uintptr_t e) {
		return ((T (*)(Boss25Skill*, uintptr_t))(Il2CppBase() + 0x1B84700))(this, e);
	}

};

}
