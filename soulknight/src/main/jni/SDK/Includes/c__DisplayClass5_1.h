#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass51
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass5_1"));
	}

	template <typename T = int32_t> T& idx() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& CS$8__locals1() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Todob__0() {
		return ((T (*)(cDisplayClass51*))(Il2CppBase() + 0x2094950))(this);
	}

};

}
