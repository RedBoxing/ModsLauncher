#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunInitTranscendent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunInitTranscendent"));
	}

	template <typename T = uintptr_t> T& right_renderer() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& left_renderer() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = uintptr_t> T& gun_point2() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = uintptr_t> T& right() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = uintptr_t> T& left() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(GunInitTranscendent*))(Il2CppBase() + 0x2278294))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(GunInitTranscendent*))(Il2CppBase() + 0x227849C))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunInitTranscendent*))(Il2CppBase() + 0x2278624))(this);
	}
	template <typename T = void> T StartUseWeapon() {
		return ((T (*)(GunInitTranscendent*))(Il2CppBase() + 0x22788FC))(this);
	}
	template <typename T = void> T StopWeapon() {
		return ((T (*)(GunInitTranscendent*))(Il2CppBase() + 0x22789D8))(this);
	}
	template <typename T = void> T DropWeapon(int32_t target_layer) {
		return ((T (*)(GunInitTranscendent*, int32_t))(Il2CppBase() + 0x2278AA0))(this, target_layer);
	}
	template <typename T = void> T LockedProcess(float fixed_angle) {
		return ((T (*)(GunInitTranscendent*, float))(Il2CppBase() + 0x2278B6C))(this, fixed_angle);
	}
	template <typename T = uintptr_t> T DoubleWeaponBoostStart(uintptr_t* doubleWeapon) {
		return ((T (*)(GunInitTranscendent*, uintptr_t*))(Il2CppBase() + 0x2278C70))(this, doubleWeapon);
	}
	template <typename T = void> T DoubleWeaponBoostEnd() {
		return ((T (*)(GunInitTranscendent*))(Il2CppBase() + 0x2278D00))(this);
	}
	template <typename T = void> T SpriteLayerSetting(int32_t target_layer, bool isPet) {
		return ((T (*)(GunInitTranscendent*, int32_t, bool))(Il2CppBase() + 0x2278D74))(this, target_layer, isPet);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(GunInitTranscendent*))(Il2CppBase() + 0x2278E94))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnEnable() {
		return ((T (*)(GunInitTranscendent*))(Il2CppBase() + 0x2278E9C))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartUseWeapon() {
		return ((T (*)(GunInitTranscendent*))(Il2CppBase() + 0x2278EA4))(this);
	}
	template <typename T = void> T iFixBaseProxy_StopWeapon() {
		return ((T (*)(GunInitTranscendent*))(Il2CppBase() + 0x2278EAC))(this);
	}
	template <typename T = void> T iFixBaseProxy_DropWeapon(int32_t P0) {
		return ((T (*)(GunInitTranscendent*, int32_t))(Il2CppBase() + 0x2278EB4))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_LockedProcess(float P0) {
		return ((T (*)(GunInitTranscendent*, float))(Il2CppBase() + 0x2278EBC))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_SpriteLayerSetting(int32_t P0, bool P1) {
		return ((T (*)(GunInitTranscendent*, int32_t, bool))(Il2CppBase() + 0x2278EC4))(this, P0, P1);
	}

};

}
