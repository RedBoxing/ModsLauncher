#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectRoomChest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectRoomChest"));
	}

	template <typename T = uintptr_t> T& sprite_img() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& ui_window() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& the_window() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& gem() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& is_unlock() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& item() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& level() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& final_level() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& chest_info() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ring_pos() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = void> T Start() {
		return ((T (*)(ObjectRoomChest*))(Il2CppBase() + 0x1DBD9B0))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(ObjectRoomChest*, uintptr_t))(Il2CppBase() + 0x1DBDB30))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(ObjectRoomChest*, uintptr_t))(Il2CppBase() + 0x1DBDD08))(this, other);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(ObjectRoomChest*, uintptr_t))(Il2CppBase() + 0x1DBDE94))(this, controller);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(ObjectRoomChest*))(Il2CppBase() + 0x1DBEAD4))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(ObjectRoomChest*))(Il2CppBase() + 0x1DBEB34))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(ObjectRoomChest*))(Il2CppBase() + 0x1DBEBC0))(this);
	}
	template <typename T = void> T BtnClick1() {
		return ((T (*)(ObjectRoomChest*))(Il2CppBase() + 0x1DBEC20))(this);
	}
	template <typename T = void> T BtnClick2() {
		return ((T (*)(ObjectRoomChest*))(Il2CppBase() + 0x1DBED3C))(this);
	}
	template <typename T = void> T DestroyWindow() {
		return ((T (*)(ObjectRoomChest*))(Il2CppBase() + 0x1DBEDD4))(this);
	}
	template <typename T = void> T OpenChest() {
		return ((T (*)(ObjectRoomChest*))(Il2CppBase() + 0x1DBE204))(this);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(ObjectRoomChest*))(Il2CppBase() + 0x1DBEF5C))(this);
	}
	template <typename T = uintptr_t> T ShowRings() {
		return ((T (*)(ObjectRoomChest*))(Il2CppBase() + 0x1DBEEA8))(this);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(ObjectRoomChest*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1DBEFE8))(this, controller, ext_info);
	}

};

}
