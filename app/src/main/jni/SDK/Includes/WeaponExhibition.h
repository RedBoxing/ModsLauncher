#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponExhibition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponExhibition"));
	}

	template <typename T = uintptr_t> T& weapon() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& item_level() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& item_info() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& level_clause() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& item_score() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& item_icon() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& the_name() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& the_info() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& the_level() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& isLarge() {
		return *(T*)((uintptr_t)this + 0x5C);
	}

	template <typename T = void> T Start() {
		return ((T (*)(WeaponExhibition*))(Il2CppBase() + 0x449A9CC))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(WeaponExhibition*, uintptr_t))(Il2CppBase() + 0x449B490))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(WeaponExhibition*, uintptr_t))(Il2CppBase() + 0x449B654))(this, other);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(WeaponExhibition*))(Il2CppBase() + 0x449B7E0))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(WeaponExhibition*))(Il2CppBase() + 0x449B840))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(WeaponExhibition*))(Il2CppBase() + 0x449B8CC))(this);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(WeaponExhibition*))(Il2CppBase() + 0x449B92C))(this);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(WeaponExhibition*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x449B98C))(this, controller, ext_info);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(WeaponExhibition*, uintptr_t))(Il2CppBase() + 0x449BA04))(this, controller);
	}
	template <typename T = void> T ChangeEdge() {
		return ((T (*)(WeaponExhibition*))(Il2CppBase() + 0x449B2B4))(this);
	}
	template <typename T = void> T AdjustAnchor() {
		return ((T (*)(WeaponExhibition*))(Il2CppBase() + 0x449AE78))(this);
	}

};

}
