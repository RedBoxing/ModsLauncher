#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunWaken
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunWaken"));
	}

	template <typename T = uintptr_t> T& audio_clip_mode2() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = int32_t> T& atk_mode2() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = int32_t> T& critical_mode2() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = float> T& speed_mode2() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = uintptr_t> T& bullet2() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = int32_t> T& _mode() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}

	template <typename T = int32_t> T get_mode() {
		return ((T (*)(GunWaken*))(Il2CppBase() + 0x1A21FD8))(this);
	}
	template <typename T = void> T set_mode(int32_t value) {
		return ((T (*)(GunWaken*, int32_t))(Il2CppBase() + 0x1A2207C))(this, value);
	}
	template <typename T = bool> T get_isSpecial() {
		return ((T (*)(GunWaken*))(Il2CppBase() + 0x1A2215C))(this);
	}
	template <typename T = void> T StopWeapon() {
		return ((T (*)(GunWaken*))(Il2CppBase() + 0x1A221BC))(this);
	}
	template <typename T = void> T SetAttack(bool value1, bool setHandAttack) {
		return ((T (*)(GunWaken*, bool, bool))(Il2CppBase() + 0x1A22220))(this, value1, setHandAttack);
	}
	template <typename T = void> T ChangeMode() {
		return ((T (*)(GunWaken*))(Il2CppBase() + 0x1A222A8))(this);
	}
	template <typename T = void> T TurnChangeModeBack() {
		return ((T (*)(GunWaken*))(Il2CppBase() + 0x1A22328))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunWaken*))(Il2CppBase() + 0x1A22384))(this);
	}
	template <typename T = void> T WeaponSpecial(bool isDown) {
		return ((T (*)(GunWaken*, bool))(Il2CppBase() + 0x1A22830))(this, isDown);
	}
	template <typename T = void> T StartUseWeapon() {
		return ((T (*)(GunWaken*))(Il2CppBase() + 0x1A228B8))(this);
	}
	template <typename T = void> T CopyFrom(uintptr_t proto) {
		return ((T (*)(GunWaken*, uintptr_t))(Il2CppBase() + 0x1A22930))(this, proto);
	}
	template <typename T = uintptr_t> T GetBulletInfo2() {
		return ((T (*)(GunWaken*))(Il2CppBase() + 0x1A22658))(this);
	}
	template <typename T = uintptr_t> T GetDamageInfo2() {
		return ((T (*)(GunWaken*))(Il2CppBase() + 0x1A22734))(this);
	}
	template <typename T = void> T iFixBaseProxy_StopWeapon() {
		return ((T (*)(GunWaken*))(Il2CppBase() + 0x1A22A48))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetAttack(bool P0, bool P1) {
		return ((T (*)(GunWaken*, bool, bool))(Il2CppBase() + 0x1A22A50))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_StartUseWeapon() {
		return ((T (*)(GunWaken*))(Il2CppBase() + 0x1A22A60))(this);
	}
	template <typename T = void> T iFixBaseProxy_CopyFrom(uintptr_t P0) {
		return ((T (*)(GunWaken*, uintptr_t))(Il2CppBase() + 0x1A22A68))(this, P0);
	}

};

}
