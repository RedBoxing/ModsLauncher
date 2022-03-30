#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UpgradeKitProcess
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UpgradeKitProcess"));
	}


	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(UpgradeKitProcess*))(Il2CppBase() + 0x4401584))(this);
	}
	template <typename T = int32_t> T GetWeight(uintptr_t weapon, Il2CppArray<uintptr_t>* levelWeight, uintptr_t weaponItemInfo) {
		return ((T (*)(UpgradeKitProcess*, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4401610))(this, weapon, levelWeight, weaponItemInfo);
	}
	template <typename T = void> T ProcessItem(uintptr_t weapon, uintptr_t weaponItemBase, uintptr_t weaponItemInfo) {
		return ((T (*)(UpgradeKitProcess*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x44016DC))(this, weapon, weaponItemBase, weaponItemInfo);
	}

};

}
