#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemSellPlaceAttrbute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemSellPlaceAttrbute"));
	}

	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& item() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& the_item() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& sell_obj() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& isWeapon() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> T& level() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = int32_t> T& finalLevel() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = int32_t> T& total() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T& object_distribution() {
		return *(T*)((uintptr_t)this + 0xC8);
	}

	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(ItemSellPlaceAttrbute*, uintptr_t))(Il2CppBase() + 0x1CE0994))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(ItemSellPlaceAttrbute*, uintptr_t))(Il2CppBase() + 0x1CE0DA0))(this, other);
	}
	template <typename T = bool> T Triggerable(uintptr_t controller) {
		return ((T (*)(ItemSellPlaceAttrbute*, uintptr_t))(Il2CppBase() + 0x1CE0F28))(this, controller);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(ItemSellPlaceAttrbute*, uintptr_t))(Il2CppBase() + 0x1CE0FE8))(this, controller);
	}
	template <typename T = void> T OnItemTriggerFail(uintptr_t controller) {
		return ((T (*)(ItemSellPlaceAttrbute*, uintptr_t))(Il2CppBase() + 0x1CE1464))(this, controller);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(ItemSellPlaceAttrbute*))(Il2CppBase() + 0x1CE15D0))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(ItemSellPlaceAttrbute*))(Il2CppBase() + 0x1CE1798))(this);
	}
	template <typename T = void> T OnSetRGRandomSeed(int32_t seed) {
		return ((T (*)(ItemSellPlaceAttrbute*, int32_t))(Il2CppBase() + 0x1CE1A5C))(this, seed);
	}
	template <typename T = void> T CreateCommedity() {
		return ((T (*)(ItemSellPlaceAttrbute*))(Il2CppBase() + 0x1CE1AE0))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerEnter2D(uintptr_t P0) {
		return ((T (*)(ItemSellPlaceAttrbute*, uintptr_t))(Il2CppBase() + 0x1CE22B4))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerExit2D(uintptr_t P0) {
		return ((T (*)(ItemSellPlaceAttrbute*, uintptr_t))(Il2CppBase() + 0x1CE22BC))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_Triggerable(uintptr_t P0) {
		return ((T (*)(ItemSellPlaceAttrbute*, uintptr_t))(Il2CppBase() + 0x1CE22C4))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(ItemSellPlaceAttrbute*, uintptr_t))(Il2CppBase() + 0x1CE22CC))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerFail(uintptr_t P0) {
		return ((T (*)(ItemSellPlaceAttrbute*, uintptr_t))(Il2CppBase() + 0x1CE22D4))(this, P0);
	}
	template <typename T = int32_t> T iFixBaseProxy_GetItemValue() {
		return ((T (*)(ItemSellPlaceAttrbute*))(Il2CppBase() + 0x1CE22DC))(this);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_GetItemName() {
		return ((T (*)(ItemSellPlaceAttrbute*))(Il2CppBase() + 0x1CE22E4))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnSetRGRandomSeed(int32_t P0) {
		return ((T (*)(ItemSellPlaceAttrbute*, int32_t))(Il2CppBase() + 0x1CE22EC))(this, P0);
	}

};

}
