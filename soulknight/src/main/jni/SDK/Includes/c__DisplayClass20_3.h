#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass203
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass20_3"));
	}

	template <typename T = uintptr_t> T& currentTarget() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& CS$8__locals2() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T UseShadowModelb__1() {
		return ((T (*)(cDisplayClass203*))(Il2CppBase() + 0x182BD20))(this);
	}

};

}
