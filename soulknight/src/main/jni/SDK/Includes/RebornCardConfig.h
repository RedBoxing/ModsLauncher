#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RebornCardConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RebornCardConfig"));
	}

	template <typename T = uintptr_t> T& normalColor() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& inactiveColor() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

}
