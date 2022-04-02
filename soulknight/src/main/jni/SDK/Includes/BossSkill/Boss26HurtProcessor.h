#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace BossSkill {

class Boss26HurtProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BossSkill", "Boss26HurtProcessor"));
	}

	template <typename T = int32_t> T& hpRestoreSkillIndex() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& hpRestoreAmount() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& roleAttribute() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& healClip() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& healthEffectPrefab() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = bool> T CanProcessHurt(uintptr_t controller) {
		return ((T (*)(Boss26HurtProcessor*, uintptr_t))(Il2CppBase() + 0x1B8720C))(this, controller);
	}
	template <typename T = void> T HurtProcess(uintptr_t controller, int32_t damage, uintptr_t sourceObject) {
		return ((T (*)(Boss26HurtProcessor*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x1B87298))(this, controller, damage, sourceObject);
	}

};

}
