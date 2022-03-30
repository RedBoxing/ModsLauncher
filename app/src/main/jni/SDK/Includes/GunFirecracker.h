#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunFirecracker
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunFirecracker"));
	}

	template <typename T = uintptr_t> T& firecracker() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = float> static T& _max_angle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& _time_per_circle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(GunFirecracker*))(Il2CppBase() + 0x24974C0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GunFirecracker*))(Il2CppBase() + 0x24975E8))(this);
	}
	template <typename T = void> T StartUseWeapon() {
		return ((T (*)(GunFirecracker*))(Il2CppBase() + 0x2497718))(this);
	}
	template <typename T = void> T StopWeapon() {
		return ((T (*)(GunFirecracker*))(Il2CppBase() + 0x24977B4))(this);
	}
	template <typename T = void> T DropWeapon(int32_t target_layer) {
		return ((T (*)(GunFirecracker*, int32_t))(Il2CppBase() + 0x24978B4))(this, target_layer);
	}
	template <typename T = void> T iFixBaseProxy_StartUseWeapon() {
		return ((T (*)(GunFirecracker*))(Il2CppBase() + 0x2497970))(this);
	}
	template <typename T = void> T iFixBaseProxy_StopWeapon() {
		return ((T (*)(GunFirecracker*))(Il2CppBase() + 0x2497978))(this);
	}
	template <typename T = void> T iFixBaseProxy_DropWeapon(int32_t P0) {
		return ((T (*)(GunFirecracker*, int32_t))(Il2CppBase() + 0x2497980))(this, P0);
	}

};

}
