#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass2212
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass22_1`2"));
	}

	template <typename T = uintptr_t> T& val1() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& val2() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& CS$8__locals1() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T ToOnGameThreadb__1() {
		return ((T (*)(cDisplayClass2212*))(Il2CppBase() + 0x0))(this);
	}

};

}
