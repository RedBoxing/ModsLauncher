#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass342
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass34_2"));
	}

	template <typename T = void*> T& preSwitchWeapon() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& CS$8__locals2() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T DualWieldb__0(uintptr_t w) {
		return ((T (*)(cDisplayClass342*, uintptr_t))(Il2CppBase() + 0x2014630))(this, w);
	}

};

}
