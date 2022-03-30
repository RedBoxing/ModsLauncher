#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RandomTest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RandomTest"));
	}

	template <typename T = uintptr_t> T& rg_random() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T TestRandom(int32_t seed) {
		return ((T (*)(RandomTest*, int32_t))(Il2CppBase() + 0x44DC82C))(this, seed);
	}

};

}
