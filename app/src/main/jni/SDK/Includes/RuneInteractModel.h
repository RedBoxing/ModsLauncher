#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RuneInteractModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RuneInteractModel"));
	}

	template <typename T = uintptr_t> T& rune() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& controller() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
