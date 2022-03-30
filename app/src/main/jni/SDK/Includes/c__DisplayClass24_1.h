#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass241
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass24_1"));
	}

	template <typename T = float> T& t() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& CS$8__locals1() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = float> T Attackb__2() {
		return ((T (*)(cDisplayClass241*))(Il2CppBase() + 0x201069C))(this);
	}
	template <typename T = void> T Attackb__3(float newT) {
		return ((T (*)(cDisplayClass241*, float))(Il2CppBase() + 0x20106A4))(this, newT);
	}

};

}
