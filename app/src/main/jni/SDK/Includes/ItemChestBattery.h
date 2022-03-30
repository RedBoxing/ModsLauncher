#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemChestBattery
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemChestBattery"));
	}

	template <typename T = uintptr_t> T& activate_clip() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& level() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> T& isPickable() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& item() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& treasure() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T& item_distribution() {
		return *(T*)((uintptr_t)this + 0xB8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ItemChestBattery*))(Il2CppBase() + 0x1A5630C))(this);
	}
	template <typename T = void> T OnSetRGRandomSeed(int32_t seed) {
		return ((T (*)(ItemChestBattery*, int32_t))(Il2CppBase() + 0x1A563C0))(this, seed);
	}
	template <typename T = void> T CreatePickable() {
		return ((T (*)(ItemChestBattery*))(Il2CppBase() + 0x1A564B8))(this);
	}
	template <typename T = void> T CreateWeapon() {
		return ((T (*)(ItemChestBattery*))(Il2CppBase() + 0x1A56A60))(this);
	}
	template <typename T = void> T CreateObjects() {
		return ((T (*)(ItemChestBattery*))(Il2CppBase() + 0x1A5679C))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(ItemChestBattery*, uintptr_t))(Il2CppBase() + 0x1A56DF4))(this, other);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(ItemChestBattery*, uintptr_t))(Il2CppBase() + 0x1A572D0))(this, controller);
	}
	template <typename T = Il2CppString*> T GetTreasureName() {
		return ((T (*)(ItemChestBattery*))(Il2CppBase() + 0x1A57014))(this);
	}
	template <typename T = int32_t> T GetTreasureLevel() {
		return ((T (*)(ItemChestBattery*))(Il2CppBase() + 0x1A5717C))(this);
	}
	template <typename T = void> T CloseChest() {
		return ((T (*)(ItemChestBattery*))(Il2CppBase() + 0x1A57C60))(this);
	}
	template <typename T = void> T OpenBattery() {
		return ((T (*)(ItemChestBattery*))(Il2CppBase() + 0x1A57894))(this);
	}
	template <typename T = void> T ActivateBattery() {
		return ((T (*)(ItemChestBattery*))(Il2CppBase() + 0x1A57E94))(this);
	}
	template <typename T = void> T DisactivateBattery() {
		return ((T (*)(ItemChestBattery*))(Il2CppBase() + 0x1A5804C))(this);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(ItemChestBattery*))(Il2CppBase() + 0x1A580A8))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnSetRGRandomSeed(int32_t P0) {
		return ((T (*)(ItemChestBattery*, int32_t))(Il2CppBase() + 0x1A58278))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerEnter2D(uintptr_t P0) {
		return ((T (*)(ItemChestBattery*, uintptr_t))(Il2CppBase() + 0x1A58280))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(ItemChestBattery*, uintptr_t))(Il2CppBase() + 0x1A58288))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_CanUse() {
		return ((T (*)(ItemChestBattery*))(Il2CppBase() + 0x1A58290))(this);
	}

};

}
