#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass011
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass0_1`1"));
	}

	template <typename T = uintptr_t> T& val() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& CS$8__locals1() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T ToOnGameThreadb__2() {
		return ((T (*)(cDisplayClass011*))(Il2CppBase() + 0x0))(this);
	}

};

}
