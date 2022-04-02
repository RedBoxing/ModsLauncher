#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass191
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass19_1"));
	}

	template <typename T = uintptr_t> T& toast() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& context() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& CS$8__locals1() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Toastb__1() {
		return ((T (*)(cDisplayClass191*))(Il2CppBase() + 0x43CBF24))(this);
	}

};

}
