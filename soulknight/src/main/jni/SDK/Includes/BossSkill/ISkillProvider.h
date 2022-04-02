#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace BossSkill {

class ISkillProvider
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BossSkill", "ISkillProvider"));
	}


	template <typename T = Il2CppArray<uintptr_t>*> T get_Skills() {
		return ((T (*)(ISkillProvider*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_SkillAnimations() {
		return ((T (*)(ISkillProvider*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T GetAttackIndex(uintptr_t controller) {
		return ((T (*)(ISkillProvider*, uintptr_t))(Il2CppBase() + 0x0))(this, controller);
	}
	template <typename T = bool> T CanReleaseSkill(uintptr_t controller) {
		return ((T (*)(ISkillProvider*, uintptr_t))(Il2CppBase() + 0x0))(this, controller);
	}

};

}
