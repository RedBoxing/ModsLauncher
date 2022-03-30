#pragma once
#include "Il2Cpp/Il2Cpp.h"

class HeroLevelUpEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HeroLevelUpEvent"));
	}

	template <typename T = int32_t> T& HeroIndex() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Level() {
		return *(T*)((uintptr_t)this + 0x14);
	}


};

}
