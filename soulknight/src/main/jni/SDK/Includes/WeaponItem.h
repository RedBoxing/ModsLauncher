#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponItem"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& weaponItemInfos() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _info() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppString*> static T get_Path() {
		return ((T (*)(void *))(Il2CppBase() + 0x45F48B8))(0);
	}
	template <typename T = uintptr_t> static T get_info() {
		return ((T (*)(void *))(Il2CppBase() + 0x45F4948))(0);
	}
	template <typename T = void> static T set_info(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x45F4B64))(0, value);
	}
	template <typename T = void> static T Load() {
		return ((T (*)(void *))(Il2CppBase() + 0x45F49E8))(0);
	}
	template <typename T = void> static T Save() {
		return ((T (*)(void *))(Il2CppBase() + 0x45F4C00))(0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetSupportItem(uintptr_t weapon) {
		return ((T (*)(WeaponItem*, uintptr_t))(Il2CppBase() + 0x45F4CB0))(this, weapon);
	}
	template <typename T = uintptr_t> static T IsSupport(uintptr_t weaponItem, uintptr_t weapon) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x45F4ED8))(0, weaponItem, weapon);
	}

};

}
