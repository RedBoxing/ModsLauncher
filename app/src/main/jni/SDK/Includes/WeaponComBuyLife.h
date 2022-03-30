#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponComBuyLife
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponComBuyLife"));
	}

	template <typename T = int32_t> T& coinConsume() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& buffPrefab() {
		return *(T*)((uintptr_t)this + 0xB0);
	}

	template <typename T = uintptr_t> T OnEquipWeapon() {
		return ((T (*)(WeaponComBuyLife*))(Il2CppBase() + 0x20225DC))(this);
	}
	template <typename T = uintptr_t> T OnDropWeapon() {
		return ((T (*)(WeaponComBuyLife*))(Il2CppBase() + 0x2022710))(this);
	}
	template <typename T = void> T OnEvent(uintptr_t data) {
		return ((T (*)(WeaponComBuyLife*, uintptr_t))(Il2CppBase() + 0x2022788))(this, data);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetDescParams() {
		return ((T (*)(WeaponComBuyLife*))(Il2CppBase() + 0x2022C34))(this);
	}
	template <typename T = void> T OnEquipWeaponb__2_0() {
		return ((T (*)(WeaponComBuyLife*))(Il2CppBase() + 0x2022D5C))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnEquipWeapon() {
		return ((T (*)(WeaponComBuyLife*))(Il2CppBase() + 0x2022E00))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnDropWeapon() {
		return ((T (*)(WeaponComBuyLife*))(Il2CppBase() + 0x2022E08))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T iFixBaseProxy_GetDescParams() {
		return ((T (*)(WeaponComBuyLife*))(Il2CppBase() + 0x2022E10))(this);
	}

};

}
