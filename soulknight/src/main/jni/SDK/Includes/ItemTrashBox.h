#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemTrashBox
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemTrashBox"));
	}

	template <typename T = float> T& probability() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& loot() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& randItemCount() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& defaultLoot() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& open() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = bool> T& _opening() {
		return *(T*)((uintptr_t)this + 0x91);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _lootPrefab() {
		return *(T*)((uintptr_t)this + 0x98);
	}

	template <typename T = bool> T OnTrigger(uintptr_t controller) {
		return ((T (*)(ItemTrashBox*, uintptr_t))(Il2CppBase() + 0x219C680))(this, controller);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ItemTrashBox*))(Il2CppBase() + 0x219C7F4))(this);
	}
	template <typename T = void> T OnDrop() {
		return ((T (*)(ItemTrashBox*))(Il2CppBase() + 0x219C8B4))(this);
	}
	template <typename T = bool> T Use(uintptr_t controller) {
		return ((T (*)(ItemTrashBox*, uintptr_t))(Il2CppBase() + 0x219C9BC))(this, controller);
	}
	template <typename T = void> T SyncUse(uintptr_t controller) {
		return ((T (*)(ItemTrashBox*, uintptr_t))(Il2CppBase() + 0x219CE3C))(this, controller);
	}
	template <typename T = void> T Open() {
		return ((T (*)(ItemTrashBox*))(Il2CppBase() + 0x219CB64))(this);
	}
	template <typename T = void> T GetItemInside() {
		return ((T (*)(ItemTrashBox*))(Il2CppBase() + 0x219CEB0))(this);
	}
	template <typename T = void> T OpenBoxFinished() {
		return ((T (*)(ItemTrashBox*))(Il2CppBase() + 0x219D34C))(this);
	}
	template <typename T = bool> T iFixBaseProxy_OnTrigger(uintptr_t P0) {
		return ((T (*)(ItemTrashBox*, uintptr_t))(Il2CppBase() + 0x219D490))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnDrop() {
		return ((T (*)(ItemTrashBox*))(Il2CppBase() + 0x219D494))(this);
	}
	template <typename T = bool> T iFixBaseProxy_Use(uintptr_t P0) {
		return ((T (*)(ItemTrashBox*, uintptr_t))(Il2CppBase() + 0x219D498))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_SyncUse(uintptr_t P0) {
		return ((T (*)(ItemTrashBox*, uintptr_t))(Il2CppBase() + 0x219D49C))(this, P0);
	}

};

}
