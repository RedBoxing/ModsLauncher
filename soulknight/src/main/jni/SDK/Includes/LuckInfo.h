#pragma once
#include "Il2Cpp/Il2Cpp.h"

class LuckInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LuckInfo"));
	}

	template <typename T = int32_t> T& LuckLevel() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_LuckLevel() {
		return ((T (*)(LuckInfo*))(Il2CppBase() + 0x42FD800))(this);
	}
	template <typename T = void> T set_LuckLevel(int32_t value) {
		return ((T (*)(LuckInfo*, int32_t))(Il2CppBase() + 0x42FD808))(this, value);
	}

};

}
