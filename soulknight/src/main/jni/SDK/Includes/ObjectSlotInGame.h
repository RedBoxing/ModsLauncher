#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectSlotInGame
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectSlotInGame"));
	}

	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& item_value() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& max_time() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& talk_name() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& talk_money() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& talk_answer() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& talk_item() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& talk_enough() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& item() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& state() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& can_use() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& first_object_list() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& object_list() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& nextItem() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppString*> T& nextItemName() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& time() {
		return *(T*)((uintptr_t)this + 0x88);
	}

	template <typename T = void> T Start() {
		return ((T (*)(ObjectSlotInGame*))(Il2CppBase() + 0x1DC1C8C))(this);
	}
	template <typename T = void> T OnReady() {
		return ((T (*)(ObjectSlotInGame*))(Il2CppBase() + 0x1DC1F48))(this);
	}
	template <typename T = void> T OpenChest(uintptr_t controller) {
		return ((T (*)(ObjectSlotInGame*, uintptr_t))(Il2CppBase() + 0x1DC1FA4))(this, controller);
	}
	template <typename T = void> T Dismiss() {
		return ((T (*)(ObjectSlotInGame*))(Il2CppBase() + 0x1DC2634))(this);
	}
	template <typename T = void> T Talk() {
		return ((T (*)(ObjectSlotInGame*))(Il2CppBase() + 0x1DC27E0))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(ObjectSlotInGame*, uintptr_t))(Il2CppBase() + 0x1DC28E8))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(ObjectSlotInGame*, uintptr_t))(Il2CppBase() + 0x1DC2AEC))(this, other);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(ObjectSlotInGame*, uintptr_t))(Il2CppBase() + 0x1DC2CAC))(this, controller);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(ObjectSlotInGame*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1DC3328))(this, controller, ext_info);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(ObjectSlotInGame*))(Il2CppBase() + 0x1DC3228))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(ObjectSlotInGame*))(Il2CppBase() + 0x1DC357C))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(ObjectSlotInGame*))(Il2CppBase() + 0x1DC3608))(this);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(ObjectSlotInGame*))(Il2CppBase() + 0x1DC3668))(this);
	}
	template <typename T = void> T OnSetRGRandomSeed(int32_t seed) {
		return ((T (*)(ObjectSlotInGame*, int32_t))(Il2CppBase() + 0x1DC36C8))(this, seed);
	}
	template <typename T = void> T ResetNextItem() {
		return ((T (*)(ObjectSlotInGame*))(Il2CppBase() + 0x1DC24A0))(this);
	}
	template <typename T = void> T SetSampleWeapon() {
		return ((T (*)(ObjectSlotInGame*))(Il2CppBase() + 0x1DC373C))(this);
	}
	template <typename T = void> T SetItem() {
		return ((T (*)(ObjectSlotInGame*))(Il2CppBase() + 0x1DC38D0))(this);
	}
	template <typename T = void> T StatisticItem() {
		return ((T (*)(ObjectSlotInGame*))(Il2CppBase() + 0x1DC1E74))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnSetRGRandomSeed(int32_t P0) {
		return ((T (*)(ObjectSlotInGame*, int32_t))(Il2CppBase() + 0x1DC3A7C))(this, P0);
	}

};

}
