#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace BossSkill {

class Boss27HurtProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BossSkill", "Boss27HurtProcessor"));
	}

	template <typename T = uintptr_t> T& armorModel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& armorDamage() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = bool> T CanProcessHurt(uintptr_t controller) {
		return ((T (*)(Boss27HurtProcessor*, uintptr_t))(Il2CppBase() + 0x1B90720))(this, controller);
	}
	template <typename T = void> T HurtProcess(uintptr_t controller, int32_t damage, uintptr_t sourceObject) {
		return ((T (*)(Boss27HurtProcessor*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x1B907AC))(this, controller, damage, sourceObject);
	}

};

}
