#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponIcon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponIcon"));
	}

	template <typename T = uintptr_t> T& normalButtonSprite() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& weaponItemButtonSprite() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& button_image() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& weapon_item_image() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Start() {
		return ((T (*)(WeaponIcon*))(Il2CppBase() + 0x449DBD4))(this);
	}
	template <typename T = void> T FlushIcon(uintptr_t weapon_item) {
		return ((T (*)(WeaponIcon*, uintptr_t))(Il2CppBase() + 0x449DCBC))(this, weapon_item);
	}

};

}
