#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemWaiter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemWaiter"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& drinksDistribute() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& troopDrinksDistribute() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& drinkObject() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& drinkInterface() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& drinkContainer() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& npcDistribute() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = int32_t> T& skin_idx() {
		return *(T*)((uintptr_t)this + 0xC8);
	}

	template <typename T = bool> T get_isTroop() {
		return ((T (*)(ItemWaiter*))(Il2CppBase() + 0x219DE28))(this);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(ItemWaiter*, uintptr_t))(Il2CppBase() + 0x219DEEC))(this, other);
	}
	template <typename T = void> T OnSetRGRandomSeed(int32_t seed) {
		return ((T (*)(ItemWaiter*, int32_t))(Il2CppBase() + 0x219DF88))(this, seed);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(ItemWaiter*, uintptr_t))(Il2CppBase() + 0x219E5F8))(this, controller);
	}
	template <typename T = void> T TalkAfterDrink() {
		return ((T (*)(ItemWaiter*))(Il2CppBase() + 0x219E7F4))(this);
	}
	template <typename T = void> T OnItemTriggerFail(uintptr_t controller) {
		return ((T (*)(ItemWaiter*, uintptr_t))(Il2CppBase() + 0x219E8DC))(this, controller);
	}
	template <typename T = bool> T Triggerable(uintptr_t controller) {
		return ((T (*)(ItemWaiter*, uintptr_t))(Il2CppBase() + 0x219EF54))(this, controller);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(ItemWaiter*))(Il2CppBase() + 0x219F114))(this);
	}
	template <typename T = void> T OnSetRGRandomSeedg__RandomCharactor|10_0() {
		return ((T (*)(ItemWaiter*))(Il2CppBase() + 0x219E04C))(this);
	}
	template <typename T = void> T OnSetRGRandomSeedg__RandomDrink|10_1() {
		return ((T (*)(ItemWaiter*))(Il2CppBase() + 0x219E3F4))(this);
	}
	template <typename T = void> T OnSetRGRandomSeedg__RandomTroopDrink|10_2() {
		return ((T (*)(ItemWaiter*))(Il2CppBase() + 0x219E188))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerExit2D(uintptr_t P0) {
		return ((T (*)(ItemWaiter*, uintptr_t))(Il2CppBase() + 0x219F2C4))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnSetRGRandomSeed(int32_t P0) {
		return ((T (*)(ItemWaiter*, int32_t))(Il2CppBase() + 0x219F2CC))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(ItemWaiter*, uintptr_t))(Il2CppBase() + 0x219F2D4))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerFail(uintptr_t P0) {
		return ((T (*)(ItemWaiter*, uintptr_t))(Il2CppBase() + 0x219F2DC))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_Triggerable(uintptr_t P0) {
		return ((T (*)(ItemWaiter*, uintptr_t))(Il2CppBase() + 0x219F2E4))(this, P0);
	}
	template <typename T = int32_t> T iFixBaseProxy_GetItemValue() {
		return ((T (*)(ItemWaiter*))(Il2CppBase() + 0x219F2EC))(this);
	}

};

}
