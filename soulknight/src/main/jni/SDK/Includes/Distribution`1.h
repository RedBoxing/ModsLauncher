#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Distribution1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Distribution`1"));
	}

	template <typename T = uintptr_t> T& data() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& weight() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = bool> T IsValid() {
		return ((T (*)(Distribution1*))(Il2CppBase() + 0x0))(this);
	}

};

}
