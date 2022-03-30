#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunLockVampires9
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunLock_Vampire_s9"));
	}

	template <typename T = bool> T& black() {
		return *(T*)((uintptr_t)this + 0x19D);
	}
	template <typename T = uintptr_t> T& _c07Controller() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = int32_t> T& bulletIndex() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(GunLockVampires9*))(Il2CppBase() + 0x227DA70))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunLockVampires9*))(Il2CppBase() + 0x227DB2C))(this);
	}
	template <typename T = void> T StartUseWeapon() {
		return ((T (*)(GunLockVampires9*))(Il2CppBase() + 0x227DD74))(this);
	}
	template <typename T = void> T SetController(uintptr_t controller) {
		return ((T (*)(GunLockVampires9*, uintptr_t))(Il2CppBase() + 0x227DE24))(this, controller);
	}
	template <typename T = void> T DropWeapon(int32_t target_layer) {
		return ((T (*)(GunLockVampires9*, int32_t))(Il2CppBase() + 0x227DF1C))(this, target_layer);
	}
	template <typename T = void> T OnReborn() {
		return ((T (*)(GunLockVampires9*))(Il2CppBase() + 0x227DFE4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GunLockVampires9*))(Il2CppBase() + 0x227E114))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(GunLockVampires9*))(Il2CppBase() + 0x227E270))(this);
	}
	template <typename T = void> T iFixBaseProxy_Attack() {
		return ((T (*)(GunLockVampires9*))(Il2CppBase() + 0x227E274))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartUseWeapon() {
		return ((T (*)(GunLockVampires9*))(Il2CppBase() + 0x227E278))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetController(uintptr_t P0) {
		return ((T (*)(GunLockVampires9*, uintptr_t))(Il2CppBase() + 0x227E27C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_DropWeapon(int32_t P0) {
		return ((T (*)(GunLockVampires9*, int32_t))(Il2CppBase() + 0x227E284))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnReborn() {
		return ((T (*)(GunLockVampires9*))(Il2CppBase() + 0x227E288))(this);
	}

};

}
