#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemWishingWell
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemWishingWell"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T& pots() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& specialWeapons() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& water_clip() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& item_object() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& item() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& created_items() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& lights() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = int32_t> T& usedTimes() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = int32_t> T& level() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = float> T& randomIndex() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = int32_t> T& maxUnfech() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = bool> T& intensive() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = int32_t> static T& DefaultRandomIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MaxUseTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> T& stateIndex() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = int32_t> T& consumedCoin() {
		return *(T*)((uintptr_t)this + 0xF8);
	}

	template <typename T = void> T Start() {
		return ((T (*)(ItemWishingWell*))(Il2CppBase() + 0x21A04C8))(this);
	}
	template <typename T = void> T OnSetRGRandomSeed(int32_t seed) {
		return ((T (*)(ItemWishingWell*, int32_t))(Il2CppBase() + 0x21A0624))(this, seed);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(ItemWishingWell*, uintptr_t))(Il2CppBase() + 0x21A07BC))(this, other);
	}
	template <typename T = bool> T Triggerable(uintptr_t controller) {
		return ((T (*)(ItemWishingWell*, uintptr_t))(Il2CppBase() + 0x21A08B4))(this, controller);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(ItemWishingWell*, uintptr_t))(Il2CppBase() + 0x21A09C0))(this, controller);
	}
	template <typename T = void> T OnItemTriggerFail(uintptr_t controller) {
		return ((T (*)(ItemWishingWell*, uintptr_t))(Il2CppBase() + 0x21A0DD4))(this, controller);
	}
	template <typename T = uintptr_t> T CreateObject(uintptr_t controller) {
		return ((T (*)(ItemWishingWell*, uintptr_t))(Il2CppBase() + 0x21A0CF4))(this, controller);
	}
	template <typename T = void> T RiseItemComplete() {
		return ((T (*)(ItemWishingWell*))(Il2CppBase() + 0x21A123C))(this);
	}
	template <typename T = uintptr_t> T GetWeaponPrefab() {
		return ((T (*)(ItemWishingWell*))(Il2CppBase() + 0x21A13A0))(this);
	}
	template <typename T = uintptr_t> T GetPickablePrefab() {
		return ((T (*)(ItemWishingWell*))(Il2CppBase() + 0x21A15C4))(this);
	}
	template <typename T = void> T CreateResultGO(uintptr_t prefab, bool isWeapon) {
		return ((T (*)(ItemWishingWell*, uintptr_t, bool))(Il2CppBase() + 0x21A170C))(this, prefab, isWeapon);
	}
	template <typename T = uintptr_t> T GetPotPrefab() {
		return ((T (*)(ItemWishingWell*))(Il2CppBase() + 0x21A1650))(this);
	}
	template <typename T = uintptr_t> T GetMercenaryPrefab() {
		return ((T (*)(ItemWishingWell*))(Il2CppBase() + 0x21A1A38))(this);
	}
	template <typename T = void> T CreateMercenary(uintptr_t prefab, uintptr_t master) {
		return ((T (*)(ItemWishingWell*, uintptr_t, uintptr_t))(Il2CppBase() + 0x21A1AD0))(this, prefab, master);
	}
	template <typename T = uintptr_t> T CreateNothing(uintptr_t controller) {
		return ((T (*)(ItemWishingWell*, uintptr_t))(Il2CppBase() + 0x21A1F2C))(this, controller);
	}
	template <typename T = void> T AddConsumeCoin() {
		return ((T (*)(ItemWishingWell*))(Il2CppBase() + 0x21A0C28))(this);
	}
	template <typename T = void> T ResetConsumeCoin() {
		return ((T (*)(ItemWishingWell*))(Il2CppBase() + 0x21A2038))(this);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(ItemWishingWell*))(Il2CppBase() + 0x21A2098))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(ItemWishingWell*))(Il2CppBase() + 0x21A21C4))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnSetRGRandomSeed(int32_t P0) {
		return ((T (*)(ItemWishingWell*, int32_t))(Il2CppBase() + 0x21A21CC))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerEnter2D(uintptr_t P0) {
		return ((T (*)(ItemWishingWell*, uintptr_t))(Il2CppBase() + 0x21A21D4))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_Triggerable(uintptr_t P0) {
		return ((T (*)(ItemWishingWell*, uintptr_t))(Il2CppBase() + 0x21A21DC))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(ItemWishingWell*, uintptr_t))(Il2CppBase() + 0x21A21E4))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerFail(uintptr_t P0) {
		return ((T (*)(ItemWishingWell*, uintptr_t))(Il2CppBase() + 0x21A21EC))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_CanUse() {
		return ((T (*)(ItemWishingWell*))(Il2CppBase() + 0x21A21F4))(this);
	}

};

}
