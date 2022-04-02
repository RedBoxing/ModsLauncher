#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemySplitTag
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemySplitTag"));
	}

	template <typename T = int32_t> T& SplitCount() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_SplitCount() {
		return ((T (*)(EnemySplitTag*))(Il2CppBase() + 0x1B1CA84))(this);
	}
	template <typename T = void> T set_SplitCount(int32_t value) {
		return ((T (*)(EnemySplitTag*, int32_t))(Il2CppBase() + 0x1B1D088))(this, value);
	}

};

}
