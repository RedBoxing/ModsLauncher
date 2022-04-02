#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponItemProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponItemProcessor"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& configDic() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Init() {
		return ((T (*)(WeaponItemProcessor*))(Il2CppBase() + 0x45F7E48))(this);
	}
	template <typename T = int32_t> T GetWeight(uintptr_t weaponItemInfo, int32_t originWeight, Il2CppArray<uintptr_t>* levelWeight, uintptr_t weapon) {
		return ((T (*)(WeaponItemProcessor*, uintptr_t, int32_t, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x45F8B78))(this, weaponItemInfo, originWeight, levelWeight, weapon);
	}
	template <typename T = void> T ProcessItem(uintptr_t weapon, uintptr_t weaponItemBase, uintptr_t weaponItemInfo) {
		return ((T (*)(WeaponItemProcessor*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x45F8F54))(this, weapon, weaponItemBase, weaponItemInfo);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T get_ProcessNames() {
		return ((T (*)(WeaponItemProcessor*))(Il2CppBase() + 0x45F9320))(this);
	}

};

}
