#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGChestBig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGChestBig"));
	}

	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& level() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& onEmptyChestOpen() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& finalLevel() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& can_use() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& items() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& buttons() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& buttonsPressed() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& _isEmptyChest() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = void> T Start() {
		return ((T (*)(RGChestBig*))(Il2CppBase() + 0x19DE35C))(this);
	}
	template <typename T = void> T OnReady() {
		return ((T (*)(RGChestBig*))(Il2CppBase() + 0x19DE5A8))(this);
	}
	template <typename T = void> T OpenChest() {
		return ((T (*)(RGChestBig*))(Il2CppBase() + 0x19DE6E0))(this);
	}
	template <typename T = void> T InstantiateWeapon() {
		return ((T (*)(RGChestBig*))(Il2CppBase() + 0x19DE9BC))(this);
	}
	template <typename T = void> T OpenChestEffect() {
		return ((T (*)(RGChestBig*))(Il2CppBase() + 0x19DED0C))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(RGChestBig*, uintptr_t))(Il2CppBase() + 0x19DEFC8))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(RGChestBig*, uintptr_t))(Il2CppBase() + 0x19DF1E0))(this, other);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(RGChestBig*, uintptr_t))(Il2CppBase() + 0x19DF394))(this, controller);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(RGChestBig*))(Il2CppBase() + 0x19DF490))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(RGChestBig*))(Il2CppBase() + 0x19DF4F0))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(RGChestBig*))(Il2CppBase() + 0x19DF580))(this);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(RGChestBig*))(Il2CppBase() + 0x19DF5E0))(this);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(RGChestBig*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x19DF654))(this, controller, ext_info);
	}
	template <typename T = void> T BtnCheck(int32_t btnindex, bool value) {
		return ((T (*)(RGChestBig*, int32_t, bool))(Il2CppBase() + 0x19DF708))(this, btnindex, value);
	}
	template <typename T = void> T SetChestEmpty() {
		return ((T (*)(RGChestBig*))(Il2CppBase() + 0x19DE62C))(this);
	}

};

}
