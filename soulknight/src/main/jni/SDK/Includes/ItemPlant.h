#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemPlant
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemPlant"));
	}

	template <typename T = bool> T& permanent() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& restartState() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& icon() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& pot() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& usableState() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& _info() {
		return *(T*)((uintptr_t)this + 0xB8);
	}

	template <typename T = uintptr_t> T get_sprite() {
		return ((T (*)(ItemPlant*))(Il2CppBase() + 0x1CD27C0))(this);
	}
	template <typename T = uintptr_t> T get_trState() {
		return ((T (*)(ItemPlant*))(Il2CppBase() + 0x1CD2850))(this);
	}
	template <typename T = int32_t> T get_maxState() {
		return ((T (*)(ItemPlant*))(Il2CppBase() + 0x1CD28D0))(this);
	}
	template <typename T = uintptr_t> T get_info() {
		return ((T (*)(ItemPlant*))(Il2CppBase() + 0x1CD2950))(this);
	}
	template <typename T = void> T set_info(uintptr_t value) {
		return ((T (*)(ItemPlant*, uintptr_t))(Il2CppBase() + 0x1CD29B0))(this, value);
	}
	template <typename T = int32_t> T get_state() {
		return ((T (*)(ItemPlant*))(Il2CppBase() + 0x1CD2B1C))(this);
	}
	template <typename T = void> T set_state(int32_t value) {
		return ((T (*)(ItemPlant*, int32_t))(Il2CppBase() + 0x1CD2BBC))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ItemPlant*))(Il2CppBase() + 0x1CD2C68))(this);
	}
	template <typename T = void> T SetPot(uintptr_t pot) {
		return ((T (*)(ItemPlant*, uintptr_t))(Il2CppBase() + 0x1CD2CC4))(this, pot);
	}
	template <typename T = void> T StageUp() {
		return ((T (*)(ItemPlant*))(Il2CppBase() + 0x1CD2D78))(this);
	}
	template <typename T = void> T SetState(int32_t state) {
		return ((T (*)(ItemPlant*, int32_t))(Il2CppBase() + 0x1CD2A38))(this, state);
	}
	template <typename T = void> T Water() {
		return ((T (*)(ItemPlant*))(Il2CppBase() + 0x1CD2F68))(this);
	}
	template <typename T = void> T Fertilize() {
		return ((T (*)(ItemPlant*))(Il2CppBase() + 0x1CD3200))(this);
	}
	template <typename T = void> T Shovel() {
		return ((T (*)(ItemPlant*))(Il2CppBase() + 0x1CD348C))(this);
	}
	template <typename T = void> T FlushSprite() {
		return ((T (*)(ItemPlant*))(Il2CppBase() + 0x1CD2DE4))(this);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(ItemPlant*, uintptr_t))(Il2CppBase() + 0x1CD3914))(this, controller);
	}
	template <typename T = void> T OnItemTriggerFail(uintptr_t controller) {
		return ((T (*)(ItemPlant*, uintptr_t))(Il2CppBase() + 0x1CD3EDC))(this, controller);
	}
	template <typename T = bool> T Triggerable(uintptr_t controller) {
		return ((T (*)(ItemPlant*, uintptr_t))(Il2CppBase() + 0x1CD4ADC))(this, controller);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(ItemPlant*))(Il2CppBase() + 0x1CD4BC8))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(ItemPlant*))(Il2CppBase() + 0x1CD4C58))(this);
	}
	template <typename T = bool> T HoldShower(uintptr_t controller) {
		return ((T (*)(ItemPlant*, uintptr_t))(Il2CppBase() + 0x1CD48A8))(this, controller);
	}
	template <typename T = bool> T HoldShovel(uintptr_t controller) {
		return ((T (*)(ItemPlant*, uintptr_t))(Il2CppBase() + 0x1CD4A20))(this, controller);
	}
	template <typename T = bool> T HoldFertilizer(uintptr_t controller) {
		return ((T (*)(ItemPlant*, uintptr_t))(Il2CppBase() + 0x1CD4964))(this, controller);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(ItemPlant*, uintptr_t))(Il2CppBase() + 0x1CD4DA0))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerFail(uintptr_t P0) {
		return ((T (*)(ItemPlant*, uintptr_t))(Il2CppBase() + 0x1CD4DA8))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_Triggerable(uintptr_t P0) {
		return ((T (*)(ItemPlant*, uintptr_t))(Il2CppBase() + 0x1CD4DB0))(this, P0);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_GetItemName() {
		return ((T (*)(ItemPlant*))(Il2CppBase() + 0x1CD4DB8))(this);
	}
	template <typename T = int32_t> T iFixBaseProxy_GetItemLevel() {
		return ((T (*)(ItemPlant*))(Il2CppBase() + 0x1CD4DC0))(this);
	}

};

}
