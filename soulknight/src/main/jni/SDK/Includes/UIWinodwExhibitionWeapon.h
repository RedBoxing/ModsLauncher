#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIWinodwExhibitionWeapon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWinodwExhibitionWeapon"));
	}

	template <typename T = uintptr_t> T& weaponInfoIcon() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& object_icon() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& object_name() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& object_info() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& notForgableGO() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& notInChestGO() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& images() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& texts() {
		return *(T*)((uintptr_t)this + 0x78);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIWinodwExhibitionWeapon*))(Il2CppBase() + 0x45CCD0C))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UIWinodwExhibitionWeapon*))(Il2CppBase() + 0x45CD164))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UIWinodwExhibitionWeapon*))(Il2CppBase() + 0x45CD1C0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIWinodwExhibitionWeapon*))(Il2CppBase() + 0x45CD21C))(this);
	}
	template <typename T = void> T ShowWindow(uintptr_t icon, Il2CppString* item_id, Il2CppString* info, bool show_info) {
		return ((T (*)(UIWinodwExhibitionWeapon*, uintptr_t, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x45CD550))(this, icon, item_id, info, show_info);
	}
	template <typename T = void> T CloseBtnClick() {
		return ((T (*)(UIWinodwExhibitionWeapon*))(Il2CppBase() + 0x45CD338))(this);
	}

};

}
