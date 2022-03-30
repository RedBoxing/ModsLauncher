#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemDrink
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemDrink"));
	}

	template <typename T = Il2CppString*> static T& Mark() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& drinkingCtrl() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = bool> T& drinked() {
		return *(T*)((uintptr_t)this + 0xA0);
	}

	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(ItemDrink*, uintptr_t))(Il2CppBase() + 0x1D9E9F8))(this, other);
	}
	template <typename T = void> T ShowItemInfo() {
		return ((T (*)(ItemDrink*))(Il2CppBase() + 0x1D9EB38))(this);
	}
	template <typename T = void> T OnTriggerEnter2DEx(uintptr_t other) {
		return ((T (*)(ItemDrink*, uintptr_t))(Il2CppBase() + 0x1D9EC08))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(ItemDrink*, uintptr_t))(Il2CppBase() + 0x1D9EC8C))(this, other);
	}
	template <typename T = void> T OnTriggerExit2DEx(uintptr_t other) {
		return ((T (*)(ItemDrink*, uintptr_t))(Il2CppBase() + 0x1D9ED28))(this, other);
	}
	template <typename T = bool> T IsTriggerable(uintptr_t controller) {
		return ((T (*)(ItemDrink*, uintptr_t))(Il2CppBase() + 0x1D9EDAC))(this, controller);
	}
	template <typename T = bool> T Triggerable(uintptr_t controller) {
		return ((T (*)(ItemDrink*, uintptr_t))(Il2CppBase() + 0x1D9EE30))(this, controller);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(ItemDrink*, uintptr_t))(Il2CppBase() + 0x1D9EF48))(this, controller);
	}
	template <typename T = void> T DrinkAnim() {
		return ((T (*)(ItemDrink*))(Il2CppBase() + 0x1D9F3D8))(this);
	}
	template <typename T = void> T DrinkEffect() {
		return ((T (*)(ItemDrink*))(Il2CppBase() + 0x1D9F48C))(this);
	}
	template <typename T = uintptr_t> T DrinkTalk(uintptr_t controller) {
		return ((T (*)(ItemDrink*, uintptr_t))(Il2CppBase() + 0x1D9F2F8))(this, controller);
	}
	template <typename T = uintptr_t> T VampireTalk(uintptr_t controller) {
		return ((T (*)(ItemDrink*, uintptr_t))(Il2CppBase() + 0x1D9F728))(this, controller);
	}
	template <typename T = void> T OnItemTriggerFail(uintptr_t controller) {
		return ((T (*)(ItemDrink*, uintptr_t))(Il2CppBase() + 0x1D9F860))(this, controller);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerEnter2D(uintptr_t P0) {
		return ((T (*)(ItemDrink*, uintptr_t))(Il2CppBase() + 0x1D9FA10))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerExit2D(uintptr_t P0) {
		return ((T (*)(ItemDrink*, uintptr_t))(Il2CppBase() + 0x1D9FA18))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_Triggerable(uintptr_t P0) {
		return ((T (*)(ItemDrink*, uintptr_t))(Il2CppBase() + 0x1D9FA20))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(ItemDrink*, uintptr_t))(Il2CppBase() + 0x1D9FA28))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerFail(uintptr_t P0) {
		return ((T (*)(ItemDrink*, uintptr_t))(Il2CppBase() + 0x1D9FA30))(this, P0);
	}

};

}
