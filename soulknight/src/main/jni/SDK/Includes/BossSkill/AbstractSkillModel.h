#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace BossSkill {

class AbstractSkillModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BossSkill", "AbstractSkillModel"));
	}

	template <typename T = float> T& cd() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& animationTriggerName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& normalWeight() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& angryWeight() {
		return *(T*)((uintptr_t)this + 0x24);
	}


};

}
