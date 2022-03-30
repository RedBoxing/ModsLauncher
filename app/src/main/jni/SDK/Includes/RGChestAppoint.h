#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGChestAppoint
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGChestAppoint"));
	}

	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& item() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& object_list() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& can_use() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Start() {
		return ((T (*)(RGChestAppoint*))(Il2CppBase() + 0x19DD3A8))(this);
	}
	template <typename T = void> T OnReady() {
		return ((T (*)(RGChestAppoint*))(Il2CppBase() + 0x19DD48C))(this);
	}
	template <typename T = void> T OpenChest() {
		return ((T (*)(RGChestAppoint*))(Il2CppBase() + 0x19DD4E8))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(RGChestAppoint*, uintptr_t))(Il2CppBase() + 0x19DDAB0))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(RGChestAppoint*, uintptr_t))(Il2CppBase() + 0x19DDC88))(this, other);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(RGChestAppoint*, uintptr_t))(Il2CppBase() + 0x19DDE0C))(this, controller);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(RGChestAppoint*))(Il2CppBase() + 0x19DE0D4))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(RGChestAppoint*))(Il2CppBase() + 0x19DE134))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(RGChestAppoint*))(Il2CppBase() + 0x19DE1C4))(this);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(RGChestAppoint*))(Il2CppBase() + 0x19DE224))(this);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(RGChestAppoint*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x19DE298))(this, controller, ext_info);
	}

};

}
