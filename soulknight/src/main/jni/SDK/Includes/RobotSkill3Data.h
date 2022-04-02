#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RobotSkill3Data
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RobotSkill3Data"));
	}

	template <typename T = uintptr_t> T& bullet() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& needAttachEffect() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& attachEffect() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

}
