#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass354
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass35_4"));
	}

	template <typename T = void*> T& currentComponentNames() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T OnChoosePartb__10(uintptr_t other) {
		return ((T (*)(cDisplayClass354*, uintptr_t))(Il2CppBase() + 0x41987F4))(this, other);
	}

};

}
