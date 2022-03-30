#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunThrowSword
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunThrowSword"));
	}

	template <typename T = uintptr_t> T& throw_audio_clip() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& throw_point() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = float> T& meleeDistance() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = int32_t> T& force() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = bool> T& invokeOnBulletTaken() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = int32_t> T& mode() {
		return *(T*)((uintptr_t)this + 0x1BC);
	}
	template <typename T = bool> T& change_mode() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = float> T& throw_consume() {
		return *(T*)((uintptr_t)this + 0x1C4);
	}
	template <typename T = uintptr_t> T& weaponSprite() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = void*> T& OnCreateThrowBullet() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = bool> T& forceMelle() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}

	template <typename T = void> T add_OnCreateThrowBullet(void* value) {
		return ((T (*)(GunThrowSword*, void*))(Il2CppBase() + 0x1A1BAF8))(this, value);
	}
	template <typename T = void> T remove_OnCreateThrowBullet(void* value) {
		return ((T (*)(GunThrowSword*, void*))(Il2CppBase() + 0x1A1BBE8))(this, value);
	}
	template <typename T = bool> T get_melee() {
		return ((T (*)(GunThrowSword*))(Il2CppBase() + 0x1A1BCD8))(this);
	}
	template <typename T = void> T set_back_state(bool value) {
		return ((T (*)(GunThrowSword*, bool))(Il2CppBase() + 0x1A1BF10))(this, value);
	}
	template <typename T = uintptr_t> T get_default_type() {
		return ((T (*)(GunThrowSword*))(Il2CppBase() + 0x1A1BFCC))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GunThrowSword*))(Il2CppBase() + 0x1A1C02C))(this);
	}
	template <typename T = void> T StopWeapon() {
		return ((T (*)(GunThrowSword*))(Il2CppBase() + 0x1A1C110))(this);
	}
	template <typename T = void> T SetAttack(bool value1, bool manual) {
		return ((T (*)(GunThrowSword*, bool, bool))(Il2CppBase() + 0x1A1C174))(this, value1, manual);
	}
	template <typename T = void> T CheckMode() {
		return ((T (*)(GunThrowSword*))(Il2CppBase() + 0x1A1C380))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunThrowSword*))(Il2CppBase() + 0x1A1C468))(this);
	}
	template <typename T = void> T Attack2() {
		return ((T (*)(GunThrowSword*))(Il2CppBase() + 0x1A1C9C8))(this);
	}
	template <typename T = void> T SwordAttack() {
		return ((T (*)(GunThrowSword*))(Il2CppBase() + 0x1A1C4E0))(this);
	}
	template <typename T = void> T SwordAttack2() {
		return ((T (*)(GunThrowSword*))(Il2CppBase() + 0x1A1CA40))(this);
	}
	template <typename T = void> T CreateSword(bool reverse) {
		return ((T (*)(GunThrowSword*, bool))(Il2CppBase() + 0x1A1CAA4))(this, reverse);
	}
	template <typename T = void> T ThrowAttack() {
		return ((T (*)(GunThrowSword*))(Il2CppBase() + 0x1A1C544))(this);
	}
	template <typename T = float> T GetThrowAngle() {
		return ((T (*)(GunThrowSword*))(Il2CppBase() + 0x1A1CE98))(this);
	}
	template <typename T = void> T Prepare() {
		return ((T (*)(GunThrowSword*))(Il2CppBase() + 0x1A1D154))(this);
	}
	template <typename T = void> T SetWeaponBack(uintptr_t parent) {
		return ((T (*)(GunThrowSword*, uintptr_t))(Il2CppBase() + 0x1A1D1E4))(this, parent);
	}
	template <typename T = void> T SetWeaponFront(uintptr_t parent, int32_t target_layer) {
		return ((T (*)(GunThrowSword*, uintptr_t, int32_t))(Il2CppBase() + 0x1A1D26C))(this, parent, target_layer);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_texts() {
		return ((T (*)(GunThrowSword*))(Il2CppBase() + 0x1A1D300))(this);
	}
	template <typename T = bool> T get_isSpecial() {
		return ((T (*)(GunThrowSword*))(Il2CppBase() + 0x1A1D65C))(this);
	}
	template <typename T = void> T WeaponSpecial(bool isDown) {
		return ((T (*)(GunThrowSword*, bool))(Il2CppBase() + 0x1A1D6BC))(this, isDown);
	}
	template <typename T = bool> T IsMelleIndeed() {
		return ((T (*)(GunThrowSword*))(Il2CppBase() + 0x1A1D748))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_default_type() {
		return ((T (*)(GunThrowSword*))(Il2CppBase() + 0x1A1D7B8))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(GunThrowSword*))(Il2CppBase() + 0x1A1D7C0))(this);
	}
	template <typename T = void> T iFixBaseProxy_StopWeapon() {
		return ((T (*)(GunThrowSword*))(Il2CppBase() + 0x1A1D7C8))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetAttack(bool P0, bool P1) {
		return ((T (*)(GunThrowSword*, bool, bool))(Il2CppBase() + 0x1A1D7D0))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_SetWeaponBack(uintptr_t P0) {
		return ((T (*)(GunThrowSword*, uintptr_t))(Il2CppBase() + 0x1A1D7E0))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_SetWeaponFront(uintptr_t P0, int32_t P1) {
		return ((T (*)(GunThrowSword*, uintptr_t, int32_t))(Il2CppBase() + 0x1A1D7E8))(this, P0, P1);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T iFixBaseProxy_get_texts() {
		return ((T (*)(GunThrowSword*))(Il2CppBase() + 0x1A1D7F0))(this);
	}
	template <typename T = bool> T iFixBaseProxy_IsMelleIndeed() {
		return ((T (*)(GunThrowSword*))(Il2CppBase() + 0x1A1D7F8))(this);
	}

};

}
