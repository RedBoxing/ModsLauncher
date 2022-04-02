#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass2201
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass22_0`1"));
	}

	template <typename T = void*> T& callback() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T AsOnGameThreadCallbackb__1(uintptr_t result) {
		return ((T (*)(cDisplayClass2201*, uintptr_t))(Il2CppBase() + 0x0))(this, result);
	}

};

}
