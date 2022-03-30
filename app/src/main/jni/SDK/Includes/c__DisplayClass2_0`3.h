#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass203
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass2_0`3"));
	}

	template <typename T = void*> T& toConvert() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T ToOnGameThreadb__1(uintptr_t val1, uintptr_t val2, uintptr_t val3) {
		return ((T (*)(cDisplayClass203*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, val1, val2, val3);
	}

};

}
