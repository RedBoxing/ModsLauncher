#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass2612
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass26_1`2"));
	}

	template <typename T = void*> T& callback() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& CS$8__locals1() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T Broadcastb__0() {
		return ((T (*)(cDisplayClass2612*))(Il2CppBase() + 0x0))(this);
	}

};

}
