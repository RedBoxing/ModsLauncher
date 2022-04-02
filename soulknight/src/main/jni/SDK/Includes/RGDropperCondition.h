#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGDropperCondition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGDropperCondition"));
	}

	template <typename T = uintptr_t> T& condition() {
		return *(T*)((uintptr_t)this + 0x88);
	}

	template <typename T = void> T DropItem(uintptr_t rg_random) {
		return ((T (*)(RGDropperCondition*, uintptr_t))(Il2CppBase() + 0x222102C))(this, rg_random);
	}
	template <typename T = void> T iFixBaseProxy_DropItem(uintptr_t P0) {
		return ((T (*)(RGDropperCondition*, uintptr_t))(Il2CppBase() + 0x22210DC))(this, P0);
	}

};

}
