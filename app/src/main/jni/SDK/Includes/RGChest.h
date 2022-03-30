#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGChest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGChest"));
	}

	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& statisticKey() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& item() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& level() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& itemParent() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& hasCustomOpenEffect() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& openEffectPrefab() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& onEmptyChestOpen() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& finalLevel() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& can_use() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& onOpen() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& _isEmptyChest() {
		return *(T*)((uintptr_t)this + 0x78);
	}

	template <typename T = void> T Start() {
		return ((T (*)(RGChest*))(Il2CppBase() + 0x19DB8E0))(this);
	}
	template <typename T = void> T OnReady() {
		return ((T (*)(RGChest*))(Il2CppBase() + 0x19DBB24))(this);
	}
	template <typename T = void> T SetChestEmpty() {
		return ((T (*)(RGChest*))(Il2CppBase() + 0x19DBBA8))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(RGChest*))(Il2CppBase() + 0x19DBC5C))(this);
	}
	template <typename T = void> T OnHide() {
		return ((T (*)(RGChest*))(Il2CppBase() + 0x19DBCDC))(this);
	}
	template <typename T = void> T OpenChest() {
		return ((T (*)(RGChest*))(Il2CppBase() + 0x19DBD5C))(this);
	}
	template <typename T = void> T OpenChestEffect() {
		return ((T (*)(RGChest*))(Il2CppBase() + 0x19DC2F8))(this);
	}
	template <typename T = void> T InstantiateWeapon() {
		return ((T (*)(RGChest*))(Il2CppBase() + 0x19DC0B8))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(RGChest*, uintptr_t))(Il2CppBase() + 0x19DC6D0))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(RGChest*, uintptr_t))(Il2CppBase() + 0x19DCC58))(this, other);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(RGChest*, uintptr_t))(Il2CppBase() + 0x19DCEF0))(this, controller);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(RGChest*))(Il2CppBase() + 0x19DD120))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(RGChest*))(Il2CppBase() + 0x19DD180))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(RGChest*))(Il2CppBase() + 0x19DD210))(this);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(RGChest*))(Il2CppBase() + 0x19DD270))(this);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(RGChest*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x19DD2E4))(this, controller, ext_info);
	}
	template <typename T = void> T StatisticItem() {
		return ((T (*)(RGChest*))(Il2CppBase() + 0x19DBA54))(this);
	}

};

}
