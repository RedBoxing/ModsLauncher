#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectGiveWeapon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectGiveWeapon"));
	}

	template <typename T = Il2CppString*> T& give_talk() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& level() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> T& given() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = int32_t> T& finalLevel() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& the_weapon() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& collider() {
		return *(T*)((uintptr_t)this + 0xB8);
	}

	template <typename T = void> T Start() {
		return ((T (*)(ObjectGiveWeapon*))(Il2CppBase() + 0x1D5FEA4))(this);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(ObjectGiveWeapon*, uintptr_t))(Il2CppBase() + 0x1D5FF4C))(this, other);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(ObjectGiveWeapon*, uintptr_t))(Il2CppBase() + 0x1D5FFE8))(this, controller);
	}
	template <typename T = bool> T Triggerable(uintptr_t controller) {
		return ((T (*)(ObjectGiveWeapon*, uintptr_t))(Il2CppBase() + 0x1D6053C))(this, controller);
	}
	template <typename T = void> T SetObjPos() {
		return ((T (*)(ObjectGiveWeapon*))(Il2CppBase() + 0x1D602CC))(this);
	}
	template <typename T = uintptr_t> T GetWeaponProto() {
		return ((T (*)(ObjectGiveWeapon*))(Il2CppBase() + 0x1D601E4))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(ObjectGiveWeapon*))(Il2CppBase() + 0x1D60628))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerExit2D(uintptr_t P0) {
		return ((T (*)(ObjectGiveWeapon*, uintptr_t))(Il2CppBase() + 0x1D60630))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(ObjectGiveWeapon*, uintptr_t))(Il2CppBase() + 0x1D60638))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_Triggerable(uintptr_t P0) {
		return ((T (*)(ObjectGiveWeapon*, uintptr_t))(Il2CppBase() + 0x1D60640))(this, P0);
	}

};

}
