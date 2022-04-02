#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass231
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass23_1"));
	}

	template <typename T = void*> T& action() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& CS$8__locals1() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T AfterCreatePartb__0(uintptr_t r) {
		return ((T (*)(cDisplayClass231*, uintptr_t))(Il2CppBase() + 0x1A49EDC))(this, r);
	}

};

}
