#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponComAddBuff
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponComAddBuff"));
	}

	template <typename T = uintptr_t> T& type() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& buffPrefab() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& damageCarrierBuff() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = float> T& interval() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = float> T& range() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& _trigger() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& cached_hits() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = float> T& _real_interval() {
		return *(T*)((uintptr_t)this + 0xD8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(WeaponComAddBuff*))(Il2CppBase() + 0x201803C))(this);
	}
	template <typename T = uintptr_t> T OnEquipWeapon() {
		return ((T (*)(WeaponComAddBuff*))(Il2CppBase() + 0x2018188))(this);
	}
	template <typename T = uintptr_t> T OnDropWeapon() {
		return ((T (*)(WeaponComAddBuff*))(Il2CppBase() + 0x2018334))(this);
	}
	template <typename T = void> T TryAddBuff(uintptr_t specifiedTarget) {
		return ((T (*)(WeaponComAddBuff*, uintptr_t))(Il2CppBase() + 0x2018434))(this, specifiedTarget);
	}
	template <typename T = void> T Loop() {
		return ((T (*)(WeaponComAddBuff*))(Il2CppBase() + 0x2018290))(this);
	}
	template <typename T = void> T Awakeb__7_0(uintptr_t arg) {
		return ((T (*)(WeaponComAddBuff*, uintptr_t))(Il2CppBase() + 0x20188F4))(this, arg);
	}
	template <typename T = void> T TryAddBuffb__11_0(uintptr_t target) {
		return ((T (*)(WeaponComAddBuff*, uintptr_t))(Il2CppBase() + 0x201898C))(this, target);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(WeaponComAddBuff*))(Il2CppBase() + 0x2018D4C))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnEquipWeapon() {
		return ((T (*)(WeaponComAddBuff*))(Il2CppBase() + 0x2018D54))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnDropWeapon() {
		return ((T (*)(WeaponComAddBuff*))(Il2CppBase() + 0x2018D5C))(this);
	}

};

}
