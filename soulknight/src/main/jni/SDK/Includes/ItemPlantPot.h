#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemPlantPot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemPlantPot"));
	}

	template <typename T = int32_t> T& potIndex() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& unlockPrice() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& plantContainer() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& lockSprite() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& waterSprite() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& fertilizedSprite() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> static T& plant_pot_dic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_plant() {
		return ((T (*)(ItemPlantPot*))(Il2CppBase() + 0x1CD4DC8))(this);
	}
	template <typename T = bool> T get_isUnlock() {
		return ((T (*)(ItemPlantPot*))(Il2CppBase() + 0x1CD3DA0))(this);
	}
	template <typename T = void> T set_isUnlock(bool value) {
		return ((T (*)(ItemPlantPot*, bool))(Il2CppBase() + 0x1CD4EF0))(this, value);
	}
	template <typename T = bool> T get_isWatered() {
		return ((T (*)(ItemPlantPot*))(Il2CppBase() + 0x1CD5044))(this);
	}
	template <typename T = void> T set_isWatered(bool value) {
		return ((T (*)(ItemPlantPot*, bool))(Il2CppBase() + 0x1CD315C))(this, value);
	}
	template <typename T = bool> T get_isFertilized() {
		return ((T (*)(ItemPlantPot*))(Il2CppBase() + 0x1CD50D0))(this);
	}
	template <typename T = void> T set_isFertilized(bool value) {
		return ((T (*)(ItemPlantPot*, bool))(Il2CppBase() + 0x1CD33E8))(this, value);
	}
	template <typename T = uintptr_t> T get_info() {
		return ((T (*)(ItemPlantPot*))(Il2CppBase() + 0x1CD515C))(this);
	}
	template <typename T = void> T set_info(uintptr_t value) {
		return ((T (*)(ItemPlantPot*, uintptr_t))(Il2CppBase() + 0x1CD354C))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ItemPlantPot*))(Il2CppBase() + 0x1CD5254))(this);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(ItemPlantPot*, uintptr_t))(Il2CppBase() + 0x1CD53E8))(this, controller);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(ItemPlantPot*, uintptr_t))(Il2CppBase() + 0x1CD555C))(this, controller);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(ItemPlantPot*, uintptr_t))(Il2CppBase() + 0x1CD5C8C))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(ItemPlantPot*, uintptr_t))(Il2CppBase() + 0x1CD5F74))(this, other);
	}
	template <typename T = void> T Plant(Il2CppString* plantName) {
		return ((T (*)(ItemPlantPot*, Il2CppString*))(Il2CppBase() + 0x1CD60D8))(this, plantName);
	}
	template <typename T = void> T UnLock() {
		return ((T (*)(ItemPlantPot*))(Il2CppBase() + 0x1CD61CC))(this);
	}
	template <typename T = void> static T AddPlantPot(int32_t id, uintptr_t pot) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x1CD6230))(0, id, pot);
	}
	template <typename T = uintptr_t> static T GetPotById(int32_t id) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1CD6384))(0, id);
	}
	template <typename T = void> static T UnlockPlantPot(int32_t id) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1CD64B4))(0, id);
	}
	template <typename T = void> T iFixBaseProxy_ItemTrigger(uintptr_t P0) {
		return ((T (*)(ItemPlantPot*, uintptr_t))(Il2CppBase() + 0x1CD6694))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(ItemPlantPot*, uintptr_t))(Il2CppBase() + 0x1CD669C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerEnter2D(uintptr_t P0) {
		return ((T (*)(ItemPlantPot*, uintptr_t))(Il2CppBase() + 0x1CD66A4))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerExit2D(uintptr_t P0) {
		return ((T (*)(ItemPlantPot*, uintptr_t))(Il2CppBase() + 0x1CD66AC))(this, P0);
	}

};

}
