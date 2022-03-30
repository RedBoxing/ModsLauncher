#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CharacterHurtHpEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CharacterHurtHpEvent"));
	}

	template <typename T = uintptr_t> T& controller() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& oldHP() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& damage() {
		return *(T*)((uintptr_t)this + 0x1C);
	}


};

}
