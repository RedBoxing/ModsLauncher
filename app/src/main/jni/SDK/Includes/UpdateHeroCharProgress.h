#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UpdateHeroCharProgress
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UpdateHeroCharProgress"));
	}

	template <typename T = bool> T& hasUnlockedHeroChar() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
