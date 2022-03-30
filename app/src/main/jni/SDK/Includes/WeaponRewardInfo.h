#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponRewardInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponRewardInfo"));
	}

	template <typename T = Il2CppString*> T& weaponName() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T GetCount() {
		return ((T (*)(WeaponRewardInfo*))(Il2CppBase() + 0x45FB400))(this);
	}
	template <typename T = uintptr_t> T GetFlag() {
		return ((T (*)(WeaponRewardInfo*))(Il2CppBase() + 0x45FB460))(this);
	}
	template <typename T = Il2CppString*> T GetName() {
		return ((T (*)(WeaponRewardInfo*))(Il2CppBase() + 0x45FB4C0))(this);
	}
	template <typename T = Il2CppString*> T GetDesc() {
		return ((T (*)(WeaponRewardInfo*))(Il2CppBase() + 0x45FB644))(this);
	}
	template <typename T = void> T GetReward(bool showUi) {
		return ((T (*)(WeaponRewardInfo*, bool))(Il2CppBase() + 0x45FB70C))(this, showUi);
	}
	template <typename T = uintptr_t> T GetSprite() {
		return ((T (*)(WeaponRewardInfo*))(Il2CppBase() + 0x45FB7BC))(this);
	}

};

}
