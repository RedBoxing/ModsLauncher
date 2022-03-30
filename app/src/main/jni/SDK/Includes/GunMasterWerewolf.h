#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunMasterWerewolf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunMasterWerewolf"));
	}

	template <typename T = uintptr_t> T& right() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = uintptr_t> T& left() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = uintptr_t> T& right_renderer() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = uintptr_t> T& left_renderer() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(GunMasterWerewolf*))(Il2CppBase() + 0x2284C84))(this);
	}
	template <typename T = void> T LockedProcess(float fixed_angle) {
		return ((T (*)(GunMasterWerewolf*, float))(Il2CppBase() + 0x2284F30))(this, fixed_angle);
	}
	template <typename T = void> T SpriteLayerSetting(int32_t target_layer, bool is_pet) {
		return ((T (*)(GunMasterWerewolf*, int32_t, bool))(Il2CppBase() + 0x2285034))(this, target_layer, is_pet);
	}
	template <typename T = void> T StartUseWeapon() {
		return ((T (*)(GunMasterWerewolf*))(Il2CppBase() + 0x228514C))(this);
	}
	template <typename T = void> T StopWeapon() {
		return ((T (*)(GunMasterWerewolf*))(Il2CppBase() + 0x2285340))(this);
	}
	template <typename T = void> T PositionInit() {
		return ((T (*)(GunMasterWerewolf*))(Il2CppBase() + 0x2285204))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(GunMasterWerewolf*))(Il2CppBase() + 0x22853BC))(this);
	}
	template <typename T = void> T iFixBaseProxy_LockedProcess(float P0) {
		return ((T (*)(GunMasterWerewolf*, float))(Il2CppBase() + 0x22853C0))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_SpriteLayerSetting(int32_t P0, bool P1) {
		return ((T (*)(GunMasterWerewolf*, int32_t, bool))(Il2CppBase() + 0x22853C8))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_StartUseWeapon() {
		return ((T (*)(GunMasterWerewolf*))(Il2CppBase() + 0x22853D4))(this);
	}
	template <typename T = void> T iFixBaseProxy_StopWeapon() {
		return ((T (*)(GunMasterWerewolf*))(Il2CppBase() + 0x22853DC))(this);
	}

};

}
