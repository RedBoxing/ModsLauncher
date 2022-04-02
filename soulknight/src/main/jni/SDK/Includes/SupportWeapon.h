#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SupportWeapon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SupportWeapon"));
	}

	template <typename T = int32_t> T& id() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& weaponType() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& supportWeaponScripts() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
