#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemChangeHero
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemChangeHero"));
	}

	template <typename T = Il2CppString*> T& change_hero() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& have_mount() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& height() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& can_use() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(ItemChangeHero*, uintptr_t))(Il2CppBase() + 0x1A559A8))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(ItemChangeHero*, uintptr_t))(Il2CppBase() + 0x1A55BA0))(this, other);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(ItemChangeHero*, uintptr_t))(Il2CppBase() + 0x1A55D60))(this, controller);
	}
	template <typename T = void> T ResetChoseHero() {
		return ((T (*)(ItemChangeHero*))(Il2CppBase() + 0x1A5606C))(this);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(ItemChangeHero*))(Il2CppBase() + 0x1A560CC))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(ItemChangeHero*))(Il2CppBase() + 0x1A5612C))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(ItemChangeHero*))(Il2CppBase() + 0x1A561B8))(this);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(ItemChangeHero*))(Il2CppBase() + 0x1A56218))(this);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(ItemChangeHero*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1A56278))(this, controller, ext_info);
	}

};

}
