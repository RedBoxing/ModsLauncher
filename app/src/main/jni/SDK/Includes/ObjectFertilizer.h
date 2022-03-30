#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectFertilizer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectFertilizer"));
	}

	template <typename T = uintptr_t> T& fertilizerWeapon() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& fertilizers() {
		return *(T*)((uintptr_t)this + 0xA0);
	}

	template <typename T = int32_t> T get_count() {
		return ((T (*)(ObjectFertilizer*))(Il2CppBase() + 0x1D56FA8))(this);
	}
	template <typename T = void> T RefreshAppearance() {
		return ((T (*)(ObjectFertilizer*))(Il2CppBase() + 0x1D5717C))(this);
	}
	template <typename T = void> T OnWatchAdForManure(uintptr_t e) {
		return ((T (*)(ObjectFertilizer*, uintptr_t))(Il2CppBase() + 0x1D572C0))(this, e);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ObjectFertilizer*))(Il2CppBase() + 0x1D57334))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(ObjectFertilizer*))(Il2CppBase() + 0x1D57420))(this);
	}
	template <typename T = void> T PickUpFertilizer(uintptr_t controller) {
		return ((T (*)(ObjectFertilizer*, uintptr_t))(Il2CppBase() + 0x1D57504))(this, controller);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(ObjectFertilizer*, uintptr_t))(Il2CppBase() + 0x1D57910))(this, controller);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(ObjectFertilizer*))(Il2CppBase() + 0x1D57A1C))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnDestroy() {
		return ((T (*)(ObjectFertilizer*))(Il2CppBase() + 0x1D57BB0))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(ObjectFertilizer*, uintptr_t))(Il2CppBase() + 0x1D57BB8))(this, P0);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_GetItemName() {
		return ((T (*)(ObjectFertilizer*))(Il2CppBase() + 0x1D57BC0))(this);
	}

};

}
