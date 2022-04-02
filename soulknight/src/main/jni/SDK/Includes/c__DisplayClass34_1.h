#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass341
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass34_1"));
	}

	template <typename T = uintptr_t> T& twin() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& CS$8__locals1() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T DualWieldb__1(bool checkBackWeaponLimit) {
		return ((T (*)(cDisplayClass341*, bool))(Il2CppBase() + 0x201433C))(this, checkBackWeaponLimit);
	}

};

}
