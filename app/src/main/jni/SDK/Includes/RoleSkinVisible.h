#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RoleSkinVisible
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RoleSkinVisible"));
	}

	template <typename T = uintptr_t> T& hero_type() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& skin_idx() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(RoleSkinVisible*))(Il2CppBase() + 0x1BF3934))(this);
	}

};

}
