#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemBrokenMotorcycles
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemBrokenMotorcycles"));
	}

	template <typename T = Il2CppString*> static T& MotorKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& motor() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& tap() {
		return *(T*)((uintptr_t)this + 0xA0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ItemBrokenMotorcycles*))(Il2CppBase() + 0x1A52CF4))(this);
	}
	template <typename T = bool> T get_isEngineer() {
		return ((T (*)(ItemBrokenMotorcycles*))(Il2CppBase() + 0x1A52EF4))(this);
	}
	template <typename T = bool> T Triggerable(uintptr_t controller) {
		return ((T (*)(ItemBrokenMotorcycles*, uintptr_t))(Il2CppBase() + 0x1A52FD4))(this, controller);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(ItemBrokenMotorcycles*, uintptr_t))(Il2CppBase() + 0x1A53064))(this, controller);
	}
	template <typename T = void> T OnItemTriggerFail(uintptr_t controller) {
		return ((T (*)(ItemBrokenMotorcycles*, uintptr_t))(Il2CppBase() + 0x1A535B8))(this, controller);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(ItemBrokenMotorcycles*, uintptr_t))(Il2CppBase() + 0x1A5370C))(this, other);
	}
	template <typename T = bool> T iFixBaseProxy_Triggerable(uintptr_t P0) {
		return ((T (*)(ItemBrokenMotorcycles*, uintptr_t))(Il2CppBase() + 0x1A5386C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(ItemBrokenMotorcycles*, uintptr_t))(Il2CppBase() + 0x1A53874))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerFail(uintptr_t P0) {
		return ((T (*)(ItemBrokenMotorcycles*, uintptr_t))(Il2CppBase() + 0x1A5387C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerExit2D(uintptr_t P0) {
		return ((T (*)(ItemBrokenMotorcycles*, uintptr_t))(Il2CppBase() + 0x1A53884))(this, P0);
	}

};

}
