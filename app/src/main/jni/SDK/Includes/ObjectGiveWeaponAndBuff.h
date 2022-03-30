#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectGiveWeaponAndBuff
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectGiveWeaponAndBuff"));
	}

	template <typename T = Il2CppString*> T& give_talk() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> T& level() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = bool> T& given() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = int32_t> T& finalLevel() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& the_obj() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& collider() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T& object_distribution() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = int32_t> T& total() {
		return *(T*)((uintptr_t)this + 0xE8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ObjectGiveWeaponAndBuff*))(Il2CppBase() + 0x1D60648))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ObjectGiveWeaponAndBuff*))(Il2CppBase() + 0x1D606AC))(this);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(ObjectGiveWeaponAndBuff*, uintptr_t))(Il2CppBase() + 0x1D60754))(this, other);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(ObjectGiveWeaponAndBuff*, uintptr_t))(Il2CppBase() + 0x1D607F0))(this, controller);
	}
	template <typename T = void> T CreateObj() {
		return ((T (*)(ObjectGiveWeaponAndBuff*))(Il2CppBase() + 0x1D60AE0))(this);
	}
	template <typename T = void> T OnItemTriggerFail(uintptr_t controller) {
		return ((T (*)(ObjectGiveWeaponAndBuff*, uintptr_t))(Il2CppBase() + 0x1D612C4))(this, controller);
	}
	template <typename T = void> T OnItemTriggerState(uintptr_t controller, int32_t state) {
		return ((T (*)(ObjectGiveWeaponAndBuff*, uintptr_t, int32_t))(Il2CppBase() + 0x1D61430))(this, controller, state);
	}
	template <typename T = bool> T Triggerable(uintptr_t controller) {
		return ((T (*)(ObjectGiveWeaponAndBuff*, uintptr_t))(Il2CppBase() + 0x1D6161C))(this, controller);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(ObjectGiveWeaponAndBuff*))(Il2CppBase() + 0x1D616F0))(this);
	}
	template <typename T = void> T SetObjPos() {
		return ((T (*)(ObjectGiveWeaponAndBuff*))(Il2CppBase() + 0x1D61054))(this);
	}
	template <typename T = uintptr_t> T GetWeaponProto() {
		return ((T (*)(ObjectGiveWeaponAndBuff*))(Il2CppBase() + 0x1D60CA4))(this);
	}
	template <typename T = uintptr_t> T GetOtherObjProto() {
		return ((T (*)(ObjectGiveWeaponAndBuff*))(Il2CppBase() + 0x1D60D8C))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(ObjectGiveWeaponAndBuff*))(Il2CppBase() + 0x1D61824))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerExit2D(uintptr_t P0) {
		return ((T (*)(ObjectGiveWeaponAndBuff*, uintptr_t))(Il2CppBase() + 0x1D6182C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(ObjectGiveWeaponAndBuff*, uintptr_t))(Il2CppBase() + 0x1D61834))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerFail(uintptr_t P0) {
		return ((T (*)(ObjectGiveWeaponAndBuff*, uintptr_t))(Il2CppBase() + 0x1D6183C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerState(uintptr_t P0, int32_t P1) {
		return ((T (*)(ObjectGiveWeaponAndBuff*, uintptr_t, int32_t))(Il2CppBase() + 0x1D61844))(this, P0, P1);
	}
	template <typename T = bool> T iFixBaseProxy_Triggerable(uintptr_t P0) {
		return ((T (*)(ObjectGiveWeaponAndBuff*, uintptr_t))(Il2CppBase() + 0x1D6184C))(this, P0);
	}
	template <typename T = int32_t> T iFixBaseProxy_GetItemValue() {
		return ((T (*)(ObjectGiveWeaponAndBuff*))(Il2CppBase() + 0x1D61854))(this);
	}

};

}
