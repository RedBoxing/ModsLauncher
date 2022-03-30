#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass41
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass4_1"));
	}

	template <typename T = int32_t> T& d() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& CS$8__locals1() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T OnStartb__1() {
		return ((T (*)(cDisplayClass41*))(Il2CppBase() + 0x20A095C))(this);
	}

};

}
