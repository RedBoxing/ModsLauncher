#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass72
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass7_2"));
	}

	template <typename T = uintptr_t> T& helper() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& CS$8__locals2() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CreateQuickGameb__0() {
		return ((T (*)(cDisplayClass72*))(Il2CppBase() + 0x282A8E8))(this);
	}

};

}
