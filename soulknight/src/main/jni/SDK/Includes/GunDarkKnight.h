#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunDarkKnight
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunDarkKnight"));
	}

	template <typename T = uintptr_t> T& rightRenderer() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& leftRenderer() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = uintptr_t> T& rightHandTransform() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = uintptr_t> T& leftHandTransform() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = float> T& attack1Offset() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = int32_t> T& stingIndex() {
		return *(T*)((uintptr_t)this + 0x1C4);
	}
	template <typename T = float> T& force() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}

	template <typename T = void> T set_back_state(bool value) {
		return ((T (*)(GunDarkKnight*, bool))(Il2CppBase() + 0x2490C6C))(this, value);
	}
	template <typename T = bool> T get_back_state() {
		return ((T (*)(GunDarkKnight*))(Il2CppBase() + 0x2490D28))(this);
	}
	template <typename T = uintptr_t> T get_default_type() {
		return ((T (*)(GunDarkKnight*))(Il2CppBase() + 0x2490DCC))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunDarkKnight*))(Il2CppBase() + 0x2490E2C))(this);
	}
	template <typename T = void> T Attack2() {
		return ((T (*)(GunDarkKnight*))(Il2CppBase() + 0x249139C))(this);
	}
	template <typename T = void> T CreateBullet(Il2CppVector3 position, bool reverse) {
		return ((T (*)(GunDarkKnight*, Il2CppVector3, bool))(Il2CppBase() + 0x2491070))(this, position, reverse);
	}
	template <typename T = void> T CreateStingBullet(int32_t index) {
		return ((T (*)(GunDarkKnight*, int32_t))(Il2CppBase() + 0x2491498))(this, index);
	}
	template <typename T = void> T StartUseWeapon() {
		return ((T (*)(GunDarkKnight*))(Il2CppBase() + 0x2491794))(this);
	}
	template <typename T = void> T StopWeapon() {
		return ((T (*)(GunDarkKnight*))(Il2CppBase() + 0x24918A8))(this);
	}
	template <typename T = void> T SetWeaponBack(uintptr_t parent) {
		return ((T (*)(GunDarkKnight*, uintptr_t))(Il2CppBase() + 0x24919BC))(this, parent);
	}
	template <typename T = void> T SetWeaponFront(uintptr_t parent, int32_t target_layer) {
		return ((T (*)(GunDarkKnight*, uintptr_t, int32_t))(Il2CppBase() + 0x2491B18))(this, parent, target_layer);
	}
	template <typename T = void> T LockedProcess(float fixed_angle) {
		return ((T (*)(GunDarkKnight*, float))(Il2CppBase() + 0x2491BAC))(this, fixed_angle);
	}
	template <typename T = void> T SpriteLayerSetting(int32_t target_layer, bool is_pet) {
		return ((T (*)(GunDarkKnight*, int32_t, bool))(Il2CppBase() + 0x2491D20))(this, target_layer, is_pet);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_default_type() {
		return ((T (*)(GunDarkKnight*))(Il2CppBase() + 0x2491E8C))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartUseWeapon() {
		return ((T (*)(GunDarkKnight*))(Il2CppBase() + 0x2491E94))(this);
	}
	template <typename T = void> T iFixBaseProxy_StopWeapon() {
		return ((T (*)(GunDarkKnight*))(Il2CppBase() + 0x2491E9C))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetWeaponBack(uintptr_t P0) {
		return ((T (*)(GunDarkKnight*, uintptr_t))(Il2CppBase() + 0x2491EA4))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_SetWeaponFront(uintptr_t P0, int32_t P1) {
		return ((T (*)(GunDarkKnight*, uintptr_t, int32_t))(Il2CppBase() + 0x2491EAC))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_LockedProcess(float P0) {
		return ((T (*)(GunDarkKnight*, float))(Il2CppBase() + 0x2491EB4))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_SpriteLayerSetting(int32_t P0, bool P1) {
		return ((T (*)(GunDarkKnight*, int32_t, bool))(Il2CppBase() + 0x2491EBC))(this, P0, P1);
	}

};

}
