#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Weapon {

class GunOneShotColdDown
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Weapon", "GunOneShotColdDown"));
	}

	template <typename T = bool> T& needSetTriggerStart() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = float> T& coldDown() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& OnColdDownStart() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = uintptr_t> T& OnColdDownFinished() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = uintptr_t> T& _weaponBulletCreator() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = float> T& _attackStartTime() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = int32_t> static T& Start1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& isAttacked() {
		return *(T*)((uintptr_t)this + 0x1C4);
	}
	template <typename T = uintptr_t> T& _weaponStateListener() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}

	template <typename T = void> T add_OnColdDownStart(uintptr_t value) {
		return ((T (*)(GunOneShotColdDown*, uintptr_t))(Il2CppBase() + 0x4367A5C))(this, value);
	}
	template <typename T = void> T remove_OnColdDownStart(uintptr_t value) {
		return ((T (*)(GunOneShotColdDown*, uintptr_t))(Il2CppBase() + 0x4367B4C))(this, value);
	}
	template <typename T = void> T add_OnColdDownFinished(uintptr_t value) {
		return ((T (*)(GunOneShotColdDown*, uintptr_t))(Il2CppBase() + 0x4367C3C))(this, value);
	}
	template <typename T = void> T remove_OnColdDownFinished(uintptr_t value) {
		return ((T (*)(GunOneShotColdDown*, uintptr_t))(Il2CppBase() + 0x4367D2C))(this, value);
	}
	template <typename T = bool> T get_IsInColdDown() {
		return ((T (*)(GunOneShotColdDown*))(Il2CppBase() + 0x4367E1C))(this);
	}
	template <typename T = bool> T get_IsColdDownOver() {
		return ((T (*)(GunOneShotColdDown*))(Il2CppBase() + 0x4367EAC))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GunOneShotColdDown*))(Il2CppBase() + 0x4367F3C))(this);
	}
	template <typename T = void> T StartUseWeapon() {
		return ((T (*)(GunOneShotColdDown*))(Il2CppBase() + 0x4367FF8))(this);
	}
	template <typename T = void> T AttackKeyDown(bool manual) {
		return ((T (*)(GunOneShotColdDown*, bool))(Il2CppBase() + 0x43680E0))(this, manual);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunOneShotColdDown*))(Il2CppBase() + 0x4368178))(this);
	}
	template <typename T = void> T Attack2() {
		return ((T (*)(GunOneShotColdDown*))(Il2CppBase() + 0x436839C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GunOneShotColdDown*))(Il2CppBase() + 0x4368408))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(GunOneShotColdDown*))(Il2CppBase() + 0x436850C))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartUseWeapon() {
		return ((T (*)(GunOneShotColdDown*))(Il2CppBase() + 0x4368514))(this);
	}
	template <typename T = void> T iFixBaseProxy_AttackKeyDown(bool P0) {
		return ((T (*)(GunOneShotColdDown*, bool))(Il2CppBase() + 0x436851C))(this, P0);
	}

};

}
