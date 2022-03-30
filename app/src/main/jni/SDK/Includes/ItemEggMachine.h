#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemEggMachine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemEggMachine"));
	}

	template <typename T = uintptr_t> T& eggProto() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& buyAudio() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& shootAudio() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& gun_point() {
		return *(T*)((uintptr_t)this + 0xB0);
	}

	template <typename T = bool> T get_limitTimes() {
		return ((T (*)(ItemEggMachine*))(Il2CppBase() + 0x1DA333C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ItemEggMachine*))(Il2CppBase() + 0x1DA3424))(this);
	}
	template <typename T = bool> T Triggerable(uintptr_t controller) {
		return ((T (*)(ItemEggMachine*, uintptr_t))(Il2CppBase() + 0x1DA34EC))(this, controller);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(ItemEggMachine*, uintptr_t))(Il2CppBase() + 0x1DA3648))(this, controller);
	}
	template <typename T = void> T OnItemTriggerFail(uintptr_t controller) {
		return ((T (*)(ItemEggMachine*, uintptr_t))(Il2CppBase() + 0x1DA3B2C))(this, controller);
	}
	template <typename T = void> T ShootEgg() {
		return ((T (*)(ItemEggMachine*))(Il2CppBase() + 0x1DA3878))(this);
	}
	template <typename T = uintptr_t> T ShootingObject(uintptr_t obj, Il2CppVector3 velocity) {
		return ((T (*)(ItemEggMachine*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x1DA4204))(this, obj, velocity);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(ItemEggMachine*))(Il2CppBase() + 0x1DA43AC))(this);
	}
	template <typename T = bool> T iFixBaseProxy_Triggerable(uintptr_t P0) {
		return ((T (*)(ItemEggMachine*, uintptr_t))(Il2CppBase() + 0x1DA43B4))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(ItemEggMachine*, uintptr_t))(Il2CppBase() + 0x1DA43BC))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerFail(uintptr_t P0) {
		return ((T (*)(ItemEggMachine*, uintptr_t))(Il2CppBase() + 0x1DA43C4))(this, P0);
	}

};

}
