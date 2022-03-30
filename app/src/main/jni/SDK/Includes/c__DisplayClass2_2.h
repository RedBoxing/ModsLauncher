#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass22
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass2_2"));
	}

	template <typename T = Il2CppString*> T& weaponSeriesName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& CS$8__locals2() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = bool> T OnSetRGRandomSeedb__1(uintptr_t o) {
		return ((T (*)(cDisplayClass22*, uintptr_t))(Il2CppBase() + 0x1CA94A4))(this, o);
	}

};

}
