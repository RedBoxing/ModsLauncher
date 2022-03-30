#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectVendingMachine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectVendingMachine"));
	}

	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& item_value() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& item() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& state() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& object_list() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& finalLevel() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& can_use() {
		return *(T*)((uintptr_t)this + 0x4C);
	}

	template <typename T = bool> T get_read_xml() {
		return ((T (*)(ObjectVendingMachine*))(Il2CppBase() + 0x1DCCC48))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ObjectVendingMachine*))(Il2CppBase() + 0x1DCCCC0))(this);
	}
	template <typename T = void> T OnReady() {
		return ((T (*)(ObjectVendingMachine*))(Il2CppBase() + 0x1DCCF58))(this);
	}
	template <typename T = void> T OpenChest() {
		return ((T (*)(ObjectVendingMachine*))(Il2CppBase() + 0x1DCCFB4))(this);
	}
	template <typename T = void> T CreateSampleWeapon() {
		return ((T (*)(ObjectVendingMachine*))(Il2CppBase() + 0x1DCD1FC))(this);
	}
	template <typename T = void> T CreateItem() {
		return ((T (*)(ObjectVendingMachine*))(Il2CppBase() + 0x1DCD3F4))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(ObjectVendingMachine*, uintptr_t))(Il2CppBase() + 0x1DCD67C))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(ObjectVendingMachine*, uintptr_t))(Il2CppBase() + 0x1DCD888))(this, other);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(ObjectVendingMachine*, uintptr_t))(Il2CppBase() + 0x1DCDA48))(this, controller);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(ObjectVendingMachine*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1DCE194))(this, controller, ext_info);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(ObjectVendingMachine*))(Il2CppBase() + 0x1DCE094))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(ObjectVendingMachine*))(Il2CppBase() + 0x1DCE3E4))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(ObjectVendingMachine*))(Il2CppBase() + 0x1DCE470))(this);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(ObjectVendingMachine*))(Il2CppBase() + 0x1DCE4D0))(this);
	}
	template <typename T = void> T OnSetRGRandomSeed(int32_t seed) {
		return ((T (*)(ObjectVendingMachine*, int32_t))(Il2CppBase() + 0x1DCE544))(this, seed);
	}
	template <typename T = void> T StatisticItem() {
		return ((T (*)(ObjectVendingMachine*))(Il2CppBase() + 0x1DCCE78))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnSetRGRandomSeed(int32_t P0) {
		return ((T (*)(ObjectVendingMachine*, int32_t))(Il2CppBase() + 0x1DCE66C))(this, P0);
	}

};

}
