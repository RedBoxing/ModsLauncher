#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponUnlockedCondition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponUnlockedCondition"));
	}

	template <typename T = Il2CppString*> T& weaponName() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = bool> T IsValid() {
		return ((T (*)(WeaponUnlockedCondition*))(Il2CppBase() + 0x46012B8))(this);
	}
	template <typename T = bool> T iFixBaseProxy_IsValid() {
		return ((T (*)(WeaponUnlockedCondition*))(Il2CppBase() + 0x460139C))(this);
	}

};

}
