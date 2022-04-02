#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunLock
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunLock"));
	}

	template <typename T = bool> T& has_trail() {
		return *(T*)((uintptr_t)this + 0x19C);
	}

	template <typename T = uintptr_t> T get_default_type() {
		return ((T (*)(GunLock*))(Il2CppBase() + 0x227D428))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GunLock*))(Il2CppBase() + 0x227D488))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GunLock*))(Il2CppBase() + 0x227D5DC))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunLock*))(Il2CppBase() + 0x227D640))(this);
	}
	template <typename T = void> T StartUseWeapon() {
		return ((T (*)(GunLock*))(Il2CppBase() + 0x227D888))(this);
	}
	template <typename T = void> T DropWeapon(int32_t target_layer) {
		return ((T (*)(GunLock*, int32_t))(Il2CppBase() + 0x227D978))(this, target_layer);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_default_type() {
		return ((T (*)(GunLock*))(Il2CppBase() + 0x227DA48))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(GunLock*))(Il2CppBase() + 0x227DA50))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(GunLock*))(Il2CppBase() + 0x227DA58))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartUseWeapon() {
		return ((T (*)(GunLock*))(Il2CppBase() + 0x227DA60))(this);
	}
	template <typename T = void> T iFixBaseProxy_DropWeapon(int32_t P0) {
		return ((T (*)(GunLock*, int32_t))(Il2CppBase() + 0x227DA68))(this, P0);
	}

};

}
