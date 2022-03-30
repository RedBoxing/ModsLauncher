#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponComAttributePermanent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponComAttributePermanent"));
	}

	template <typename T = uintptr_t> T& type() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& value() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& _trigger() {
		return *(T*)((uintptr_t)this + 0xB0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(WeaponComAttributePermanent*))(Il2CppBase() + 0x201B0B4))(this);
	}
	template <typename T = uintptr_t> T OnEquipWeapon() {
		return ((T (*)(WeaponComAttributePermanent*))(Il2CppBase() + 0x201B1FC))(this);
	}
	template <typename T = uintptr_t> T OnDropWeapon() {
		return ((T (*)(WeaponComAttributePermanent*))(Il2CppBase() + 0x201B2F4))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetDescParams() {
		return ((T (*)(WeaponComAttributePermanent*))(Il2CppBase() + 0x201B3D8))(this);
	}
	template <typename T = void> T Awakeb__3_0(uintptr_t arg) {
		return ((T (*)(WeaponComAttributePermanent*, uintptr_t))(Il2CppBase() + 0x201B500))(this, arg);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(WeaponComAttributePermanent*))(Il2CppBase() + 0x201B880))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnEquipWeapon() {
		return ((T (*)(WeaponComAttributePermanent*))(Il2CppBase() + 0x201B888))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnDropWeapon() {
		return ((T (*)(WeaponComAttributePermanent*))(Il2CppBase() + 0x201B890))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T iFixBaseProxy_GetDescParams() {
		return ((T (*)(WeaponComAttributePermanent*))(Il2CppBase() + 0x201B898))(this);
	}

};

}
