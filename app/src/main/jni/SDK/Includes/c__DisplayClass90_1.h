#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass901
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass90_1"));
	}

	template <typename T = bool> T& contains() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& CS$8__locals1() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T ShowUnlockObjectb__0(uintptr_t node) {
		return ((T (*)(cDisplayClass901*, uintptr_t))(Il2CppBase() + 0x41BE608))(this, node);
	}

};

}
