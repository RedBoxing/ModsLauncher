#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MuseumWeaponInsert
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MuseumWeaponInsert"));
	}

	template <typename T = uintptr_t> T& insertWeapon() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& insertIcon() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = void> T InsertItemInfo(uintptr_t addedItem) {
		return ((T (*)(MuseumWeaponInsert*, uintptr_t))(Il2CppBase() + 0x437D274))(this, addedItem);
	}
	template <typename T = void> T iFixBaseProxy_InsertItemInfo(uintptr_t P0) {
		return ((T (*)(MuseumWeaponInsert*, uintptr_t))(Il2CppBase() + 0x437D498))(this, P0);
	}

};

}
