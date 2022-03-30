#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace BossSkill {

class IHurtProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BossSkill", "IHurtProcessor"));
	}


	template <typename T = bool> T CanProcessHurt(uintptr_t controller) {
		return ((T (*)(IHurtProcessor*, uintptr_t))(Il2CppBase() + 0x0))(this, controller);
	}
	template <typename T = void> T HurtProcess(uintptr_t controller, int32_t damage, uintptr_t sourceObject) {
		return ((T (*)(IHurtProcessor*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x0))(this, controller, damage, sourceObject);
	}

};

}
