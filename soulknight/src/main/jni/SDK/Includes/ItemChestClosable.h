#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemChestClosable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemChestClosable"));
	}

	template <typename T = uintptr_t> T& container() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& itemObject() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& activateClip() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& ranData() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = float> T& priceFactor() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& seller() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& itemProto() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = bool> T& changingItem() {
		return *(T*)((uintptr_t)this + 0xD0);
	}

	template <typename T = bool> T get_needPay() {
		return ((T (*)(ItemChestClosable*))(Il2CppBase() + 0x1D92C78))(this);
	}
	template <typename T = Il2CppString*> T get_itemName() {
		return ((T (*)(ItemChestClosable*))(Il2CppBase() + 0x1D92CE0))(this);
	}
	template <typename T = bool> T get_inIdle() {
		return ((T (*)(ItemChestClosable*))(Il2CppBase() + 0x1D92EC8))(this);
	}
	template <typename T = bool> T get_isOpen() {
		return ((T (*)(ItemChestClosable*))(Il2CppBase() + 0x1D92FD8))(this);
	}
	template <typename T = void> T set_isOpen(bool value) {
		return ((T (*)(ItemChestClosable*, bool))(Il2CppBase() + 0x1D9308C))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ItemChestClosable*))(Il2CppBase() + 0x1D93158))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ItemChestClosable*))(Il2CppBase() + 0x1D9320C))(this);
	}
	template <typename T = void> T OnSetRGRandomSeed(int32_t seed) {
		return ((T (*)(ItemChestClosable*, int32_t))(Il2CppBase() + 0x1D93270))(this, seed);
	}
	template <typename T = void> T ResetItemWithAnim(uintptr_t ranData, uintptr_t rg_random) {
		return ((T (*)(ItemChestClosable*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1D932EC))(this, ranData, rg_random);
	}
	template <typename T = void> T ResetItemWithAnim_1(uintptr_t rg_random) {
		return ((T (*)(ItemChestClosable*, uintptr_t))(Il2CppBase() + 0x1D93774))(this, rg_random);
	}
	template <typename T = void> T RefreshItem(uintptr_t ranData, uintptr_t rg_random) {
		return ((T (*)(ItemChestClosable*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1D9339C))(this, ranData, rg_random);
	}
	template <typename T = void> T RefreshItem_1(uintptr_t rg_random) {
		return ((T (*)(ItemChestClosable*, uintptr_t))(Il2CppBase() + 0x1D93A6C))(this, rg_random);
	}
	template <typename T = void> T SetItem(uintptr_t newItemObject, bool openChest) {
		return ((T (*)(ItemChestClosable*, uintptr_t, bool))(Il2CppBase() + 0x1D937F0))(this, newItemObject, openChest);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(ItemChestClosable*, uintptr_t))(Il2CppBase() + 0x1D9408C))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(ItemChestClosable*, uintptr_t))(Il2CppBase() + 0x1D94408))(this, other);
	}
	template <typename T = bool> T Triggerable(uintptr_t controller) {
		return ((T (*)(ItemChestClosable*, uintptr_t))(Il2CppBase() + 0x1D94590))(this, controller);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(ItemChestClosable*, uintptr_t))(Il2CppBase() + 0x1D94694))(this, controller);
	}
	template <typename T = void> T OnItemTriggerFail(uintptr_t controller) {
		return ((T (*)(ItemChestClosable*, uintptr_t))(Il2CppBase() + 0x1D94904))(this, controller);
	}
	template <typename T = void> T TriggerChest(uintptr_t controller) {
		return ((T (*)(ItemChestClosable*, uintptr_t))(Il2CppBase() + 0x1D94778))(this, controller);
	}
	template <typename T = void> T OpenChest() {
		return ((T (*)(ItemChestClosable*))(Il2CppBase() + 0x1D93D50))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(ItemChestClosable*))(Il2CppBase() + 0x1D94B8C))(this);
	}
	template <typename T = void> T CloseChest() {
		return ((T (*)(ItemChestClosable*))(Il2CppBase() + 0x1D949F0))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(ItemChestClosable*))(Il2CppBase() + 0x1D94CB0))(this);
	}
	template <typename T = void> T OnCloseComplete() {
		return ((T (*)(ItemChestClosable*))(Il2CppBase() + 0x1D94DA0))(this);
	}
	template <typename T = void> T RefreshRenderer() {
		return ((T (*)(ItemChestClosable*))(Il2CppBase() + 0x1D93AE8))(this);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(ItemChestClosable*))(Il2CppBase() + 0x1D94E94))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(ItemChestClosable*))(Il2CppBase() + 0x1D94F08))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(ItemChestClosable*))(Il2CppBase() + 0x1D950A4))(this);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(ItemChestClosable*))(Il2CppBase() + 0x1D95230))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(ItemChestClosable*))(Il2CppBase() + 0x1D9543C))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnSetRGRandomSeed(int32_t P0) {
		return ((T (*)(ItemChestClosable*, int32_t))(Il2CppBase() + 0x1D95444))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerEnter2D(uintptr_t P0) {
		return ((T (*)(ItemChestClosable*, uintptr_t))(Il2CppBase() + 0x1D9544C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerExit2D(uintptr_t P0) {
		return ((T (*)(ItemChestClosable*, uintptr_t))(Il2CppBase() + 0x1D95454))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_Triggerable(uintptr_t P0) {
		return ((T (*)(ItemChestClosable*, uintptr_t))(Il2CppBase() + 0x1D9545C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(ItemChestClosable*, uintptr_t))(Il2CppBase() + 0x1D95464))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerFail(uintptr_t P0) {
		return ((T (*)(ItemChestClosable*, uintptr_t))(Il2CppBase() + 0x1D9546C))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_CanUse() {
		return ((T (*)(ItemChestClosable*))(Il2CppBase() + 0x1D95474))(this);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_GetItemName() {
		return ((T (*)(ItemChestClosable*))(Il2CppBase() + 0x1D9547C))(this);
	}
	template <typename T = int32_t> T iFixBaseProxy_GetItemLevel() {
		return ((T (*)(ItemChestClosable*))(Il2CppBase() + 0x1D95484))(this);
	}
	template <typename T = int32_t> T iFixBaseProxy_GetItemValue() {
		return ((T (*)(ItemChestClosable*))(Il2CppBase() + 0x1D9548C))(this);
	}

};

}
