#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemDrinkSeller
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemDrinkSeller"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& drinkDistribute() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& buyAudio() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& emptyAudio() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& canUse() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& drinkContainer() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& drink() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& the_controller() {
		return *(T*)((uintptr_t)this + 0xC8);
	}

	template <typename T = void> T Start() {
		return ((T (*)(ItemDrinkSeller*))(Il2CppBase() + 0x1DA10CC))(this);
	}
	template <typename T = bool> T Triggerable(uintptr_t controller) {
		return ((T (*)(ItemDrinkSeller*, uintptr_t))(Il2CppBase() + 0x1DA1130))(this, controller);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(ItemDrinkSeller*, uintptr_t))(Il2CppBase() + 0x1DA125C))(this, controller);
	}
	template <typename T = void> T OnItemTriggerFail(uintptr_t controller) {
		return ((T (*)(ItemDrinkSeller*, uintptr_t))(Il2CppBase() + 0x1DA1624))(this, controller);
	}
	template <typename T = void> T ShowDrink() {
		return ((T (*)(ItemDrinkSeller*))(Il2CppBase() + 0x1DA145C))(this);
	}
	template <typename T = void> T TakeDrink(uintptr_t controller) {
		return ((T (*)(ItemDrinkSeller*, uintptr_t))(Il2CppBase() + 0x1DA1A4C))(this, controller);
	}
	template <typename T = void> T TalkAfterDrink() {
		return ((T (*)(ItemDrinkSeller*))(Il2CppBase() + 0x1DA1B94))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(ItemDrinkSeller*, uintptr_t))(Il2CppBase() + 0x1DA1CD4))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(ItemDrinkSeller*, uintptr_t))(Il2CppBase() + 0x1DA1DD4))(this, other);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(ItemDrinkSeller*, uintptr_t))(Il2CppBase() + 0x1DA1ED8))(this, controller);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(ItemDrinkSeller*))(Il2CppBase() + 0x1DA2118))(this);
	}
	template <typename T = bool> T iFixBaseProxy_Triggerable(uintptr_t P0) {
		return ((T (*)(ItemDrinkSeller*, uintptr_t))(Il2CppBase() + 0x1DA2120))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(ItemDrinkSeller*, uintptr_t))(Il2CppBase() + 0x1DA2128))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerFail(uintptr_t P0) {
		return ((T (*)(ItemDrinkSeller*, uintptr_t))(Il2CppBase() + 0x1DA2130))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerEnter2D(uintptr_t P0) {
		return ((T (*)(ItemDrinkSeller*, uintptr_t))(Il2CppBase() + 0x1DA2138))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerExit2D(uintptr_t P0) {
		return ((T (*)(ItemDrinkSeller*, uintptr_t))(Il2CppBase() + 0x1DA2140))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_ItemTrigger(uintptr_t P0) {
		return ((T (*)(ItemDrinkSeller*, uintptr_t))(Il2CppBase() + 0x1DA2148))(this, P0);
	}

};

}
