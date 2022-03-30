#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponReforge
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponReforge"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& reforgeObjects() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T ReforgeWeapon() {
		return ((T (*)(WeaponReforge*))(Il2CppBase() + 0x45FB39C))(this);
	}

};

}
