#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CharacterSkillModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CharacterSkillModel"));
	}

	template <typename T = int32_t> T& characterIndex() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& skillIndex() {
		return *(T*)((uintptr_t)this + 0x14);
	}


};

}
