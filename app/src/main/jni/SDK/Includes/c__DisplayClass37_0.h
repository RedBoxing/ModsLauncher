#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass370
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass37_0"));
	}

	template <typename T = uint32_t> T& currentAuthGeneration() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T HandleAuthTransitionb__0(uintptr_t results) {
		return ((T (*)(cDisplayClass370*, uintptr_t))(Il2CppBase() + 0x35912E4))(this, results);
	}

};

}
