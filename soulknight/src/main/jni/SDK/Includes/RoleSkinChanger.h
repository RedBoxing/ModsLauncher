#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RoleSkinChanger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RoleSkinChanger"));
	}

	template <typename T = uintptr_t> T& hero_type() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(RoleSkinChanger*))(Il2CppBase() + 0x1BF3790))(this);
	}

};

}
