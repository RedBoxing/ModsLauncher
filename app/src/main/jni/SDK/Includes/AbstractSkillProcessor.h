#pragma once
#include "Il2Cpp/Il2Cpp.h"

class AbstractSkillProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AbstractSkillProcessor"));
	}


	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(AbstractSkillProcessor*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T SkillStart(uintptr_t controller) {
		return ((T (*)(AbstractSkillProcessor*, uintptr_t))(Il2CppBase() + 0x0))(this, controller);
	}
	template <typename T = void> T SkillEnd(uintptr_t controller) {
		return ((T (*)(AbstractSkillProcessor*, uintptr_t))(Il2CppBase() + 0x0))(this, controller);
	}

};

}
