#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemPickable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemPickable"));
	}

	template <typename T = uintptr_t> T& overridePickAction() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& itemType() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Il2CppString*> T& cnName() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& item_level() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppString*> T& _name() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = float> T& friction() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = float> T& inertial_vel() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = Il2CppVector2> T& force_direction() {
		return *(T*)((uintptr_t)this + 0xC8);
	}

	template <typename T = uintptr_t> T get_overridePickAction() {
		return ((T (*)(ItemPickable*))(Il2CppBase() + 0x1CCF704))(this);
	}
	template <typename T = void> T set_overridePickAction(uintptr_t value) {
		return ((T (*)(ItemPickable*, uintptr_t))(Il2CppBase() + 0x1CCF70C))(this, value);
	}
	template <typename T = bool> T get_inGameScene() {
		return ((T (*)(ItemPickable*))(Il2CppBase() + 0x1CCF714))(this);
	}
	template <typename T = bool> T CanDrop() {
		return ((T (*)(ItemPickable*))(Il2CppBase() + 0x1CCF7CC))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ItemPickable*))(Il2CppBase() + 0x1CCF82C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ItemPickable*))(Il2CppBase() + 0x1CCF940))(this);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(ItemPickable*, uintptr_t))(Il2CppBase() + 0x1CCF9AC))(this, controller);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(ItemPickable*, uintptr_t))(Il2CppBase() + 0x1CCFC4C))(this, controller);
	}
	template <typename T = bool> T Triggerable(uintptr_t controller) {
		return ((T (*)(ItemPickable*, uintptr_t))(Il2CppBase() + 0x1CCFD3C))(this, controller);
	}
	template <typename T = void> T OnItemTriggerFail(uintptr_t controller) {
		return ((T (*)(ItemPickable*, uintptr_t))(Il2CppBase() + 0x1CCFDB8))(this, controller);
	}
	template <typename T = void> T ShowGetUI(uintptr_t controller) {
		return ((T (*)(ItemPickable*, uintptr_t))(Il2CppBase() + 0x1CCFE34))(this, controller);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(ItemPickable*))(Il2CppBase() + 0x1CD053C))(this);
	}
	template <typename T = Il2CppString*> T GetItemNameWithoutColor() {
		return ((T (*)(ItemPickable*))(Il2CppBase() + 0x1CD0CE0))(this);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(ItemPickable*))(Il2CppBase() + 0x1CD12E0))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(ItemPickable*))(Il2CppBase() + 0x1CD1350))(this);
	}
	template <typename T = void> T SetBlueprintRandomWeapon(int32_t level) {
		return ((T (*)(ItemPickable*, int32_t))(Il2CppBase() + 0x1CD13B0))(this, level);
	}
	template <typename T = void> T SetBlueprintIcon(uintptr_t sprite, Il2CppString* targetName) {
		return ((T (*)(ItemPickable*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1CD17B8))(this, sprite, targetName);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(ItemPickable*))(Il2CppBase() + 0x1CD1D24))(this);
	}
	template <typename T = void> T GetForce(Il2CppVector2 direction, float forceValue) {
		return ((T (*)(ItemPickable*, Il2CppVector2, float))(Il2CppBase() + 0x1CD1D80))(this, direction, forceValue);
	}
	template <typename T = void> T StartWave() {
		return ((T (*)(ItemPickable*))(Il2CppBase() + 0x1CD2280))(this);
	}
	template <typename T = uintptr_t> T Waving() {
		return ((T (*)(ItemPickable*))(Il2CppBase() + 0x1CD22F0))(this);
	}
	template <typename T = bool> T get_Droppable() {
		return ((T (*)(ItemPickable*))(Il2CppBase() + 0x1CD23D0))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(ItemPickable*))(Il2CppBase() + 0x1CD24B0))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(ItemPickable*, uintptr_t))(Il2CppBase() + 0x1CD24B8))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_ItemTrigger(uintptr_t P0) {
		return ((T (*)(ItemPickable*, uintptr_t))(Il2CppBase() + 0x1CD24C0))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_Triggerable(uintptr_t P0) {
		return ((T (*)(ItemPickable*, uintptr_t))(Il2CppBase() + 0x1CD24C8))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerFail(uintptr_t P0) {
		return ((T (*)(ItemPickable*, uintptr_t))(Il2CppBase() + 0x1CD24D0))(this, P0);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_GetItemName() {
		return ((T (*)(ItemPickable*))(Il2CppBase() + 0x1CD24D8))(this);
	}
	template <typename T = int32_t> T iFixBaseProxy_GetItemValue() {
		return ((T (*)(ItemPickable*))(Il2CppBase() + 0x1CD24E0))(this);
	}
	template <typename T = int32_t> T iFixBaseProxy_GetItemLevel() {
		return ((T (*)(ItemPickable*))(Il2CppBase() + 0x1CD24E8))(this);
	}

};

}
