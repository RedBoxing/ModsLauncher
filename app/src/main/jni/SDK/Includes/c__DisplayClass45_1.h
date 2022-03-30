#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass451
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass45_1"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& users() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& CS$8__locals1() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T LoadUsersb__1() {
		return ((T (*)(cDisplayClass451*))(Il2CppBase() + 0x3591714))(this);
	}

};

}
