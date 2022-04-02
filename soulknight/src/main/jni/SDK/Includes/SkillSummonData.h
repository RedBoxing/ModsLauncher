#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SkillSummonData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SkillSummonData"));
	}

	template <typename T = uintptr_t> T& sound() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& strengthenFactor() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& rebornEFX() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

}
