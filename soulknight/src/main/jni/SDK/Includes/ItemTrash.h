#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemTrash
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemTrash"));
	}

	template <typename T = int32_t> T& level() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _owner() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& cleanFunc() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(ItemTrash*, uintptr_t))(Il2CppBase() + 0x219AEA8))(this, controller);
	}
	template <typename T = bool> T OnTrigger(uintptr_t controller) {
		return ((T (*)(ItemTrash*, uintptr_t))(Il2CppBase() + 0x219AF2C))(this, controller);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(ItemTrash*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x219B840))(this, controller, ext_info);
	}
	template <typename T = void> T Drop() {
		return ((T (*)(ItemTrash*))(Il2CppBase() + 0x219B604))(this);
	}
	template <typename T = void> T OnDrop() {
		return ((T (*)(ItemTrash*))(Il2CppBase() + 0x219B8CC))(this);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(ItemTrash*))(Il2CppBase() + 0x219B928))(this);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(ItemTrash*))(Il2CppBase() + 0x219B988))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(ItemTrash*))(Il2CppBase() + 0x219B9E8))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(ItemTrash*))(Il2CppBase() + 0x219BA48))(this);
	}
	template <typename T = bool> T Use(uintptr_t controller) {
		return ((T (*)(ItemTrash*, uintptr_t))(Il2CppBase() + 0x219BAFC))(this, controller);
	}
	template <typename T = void> T SyncUse(uintptr_t controller) {
		return ((T (*)(ItemTrash*, uintptr_t))(Il2CppBase() + 0x219BC94))(this, controller);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(ItemTrash*, uintptr_t))(Il2CppBase() + 0x219BD08))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(ItemTrash*, uintptr_t))(Il2CppBase() + 0x219C010))(this, other);
	}
	template <typename T = void> T PlayerIn(uintptr_t other) {
		return ((T (*)(ItemTrash*, uintptr_t))(Il2CppBase() + 0x219BD80))(this, other);
	}
	template <typename T = void> T PlayerOut(uintptr_t other) {
		return ((T (*)(ItemTrash*, uintptr_t))(Il2CppBase() + 0x219C088))(this, other);
	}
	template <typename T = void> T ShowName(float height) {
		return ((T (*)(ItemTrash*, float))(Il2CppBase() + 0x219C268))(this, height);
	}

};

}
