#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RoleSkinActive
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RoleSkinActive"));
	}

	template <typename T = uintptr_t> T& hero_type() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& skin_idx() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& objs() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(RoleSkinActive*))(Il2CppBase() + 0x1BF361C))(this);
	}

};

}
