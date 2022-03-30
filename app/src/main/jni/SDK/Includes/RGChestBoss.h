#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGChestBoss
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGChestBoss"));
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
	template <typename T = Il2CppArray<uintptr_t>*> T& object_list() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& level() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& bossWeaponProbability() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& onEmptyChestOpen() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& finalLevel() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& can_use() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& _isEmptyChest() {
		return *(T*)((uintptr_t)this + 0x5D);
	}

	template <typename T = void> T Start() {
		return ((T (*)(RGChestBoss*))(Il2CppBase() + 0x19DFDEC))(this);
	}
	template <typename T = void> T OnReady() {
		return ((T (*)(RGChestBoss*))(Il2CppBase() + 0x19E0148))(this);
	}
	template <typename T = void> T OpenChest() {
		return ((T (*)(RGChestBoss*))(Il2CppBase() + 0x19E0280))(this);
	}
	template <typename T = void> T OpenChestEffect() {
		return ((T (*)(RGChestBoss*))(Il2CppBase() + 0x19E0624))(this);
	}
	template <typename T = void> T InstantiateWeapon(int32_t r0) {
		return ((T (*)(RGChestBoss*, int32_t))(Il2CppBase() + 0x19E0574))(this, r0);
	}
	template <typename T = void> T CreateSampleWeapon() {
		return ((T (*)(RGChestBoss*))(Il2CppBase() + 0x19E0D2C))(this);
	}
	template <typename T = void> T CreateBossWeapon() {
		return ((T (*)(RGChestBoss*))(Il2CppBase() + 0x19E09E0))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(RGChestBoss*, uintptr_t))(Il2CppBase() + 0x19E1000))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(RGChestBoss*, uintptr_t))(Il2CppBase() + 0x19E1218))(this, other);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(RGChestBoss*, uintptr_t))(Il2CppBase() + 0x19E13CC))(this, controller);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(RGChestBoss*))(Il2CppBase() + 0x19E15FC))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(RGChestBoss*))(Il2CppBase() + 0x19E165C))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(RGChestBoss*))(Il2CppBase() + 0x19E16EC))(this);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(RGChestBoss*))(Il2CppBase() + 0x19E174C))(this);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(RGChestBoss*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x19E17C0))(this, controller, ext_info);
	}
	template <typename T = bool> T MelleValid() {
		return ((T (*)(RGChestBoss*))(Il2CppBase() + 0x19E0894))(this);
	}
	template <typename T = void> T StatisticItem() {
		return ((T (*)(RGChestBoss*))(Il2CppBase() + 0x19E0078))(this);
	}
	template <typename T = void> T SetChestEmpty() {
		return ((T (*)(RGChestBoss*))(Il2CppBase() + 0x19E01CC))(this);
	}

};

}
