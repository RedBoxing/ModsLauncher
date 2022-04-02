#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponInfoIcon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponInfoIcon"));
	}

	template <typename T = uintptr_t> static T& _info() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& icons() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& weaponType2Icon() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = uintptr_t> static T get_info() {
		return ((T (*)(void *))(Il2CppBase() + 0x45F4140))(0);
	}
	template <typename T = uintptr_t> T GetWeaponTypeIcon(uintptr_t type) {
		return ((T (*)(WeaponInfoIcon*, uintptr_t))(Il2CppBase() + 0x45F4234))(this, type);
	}

};

}
