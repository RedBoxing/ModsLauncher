#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponConfig"));
	}

	template <typename T = uintptr_t> T& weaponObject() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& frameType() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
