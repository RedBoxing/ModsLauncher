#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass201
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass20_1"));
	}

	template <typename T = void*> T& action() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& CS$8__locals1() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T ProcessEnemyShowb__1(uintptr_t r) {
		return ((T (*)(cDisplayClass201*, uintptr_t))(Il2CppBase() + 0x1A49DD8))(this, r);
	}

};

}
