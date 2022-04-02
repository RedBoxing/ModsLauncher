#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponInBattle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponInBattle"));
	}

	template <typename T = Il2CppString*> T& weaponName() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& weaponItems() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& additionLevel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& customTags() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
