#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponItemInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponItemInfo"));
	}

	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& item_level() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& supportWeapons() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& byWeapon() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& processName() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

}
