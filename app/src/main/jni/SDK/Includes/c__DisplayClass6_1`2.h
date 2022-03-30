#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass612
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass6_1`2"));
	}

	template <typename T = bool> T& handle() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& CS$8__locals1() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = bool> T QueryDatab__0(uintptr_t ex) {
		return ((T (*)(cDisplayClass612*, uintptr_t))(Il2CppBase() + 0x0))(this, ex);
	}

};

}
