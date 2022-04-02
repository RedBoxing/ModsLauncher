#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass132
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass13_2"));
	}

	template <typename T = uintptr_t> T& helper() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& CS$8__locals2() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T AcceptFromInboxb__1() {
		return ((T (*)(cDisplayClass132*))(Il2CppBase() + 0x2829828))(this);
	}

};

}
