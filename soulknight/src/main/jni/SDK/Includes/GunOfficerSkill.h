#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunOfficerSkill
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunOfficerSkill"));
	}

	template <typename T = Il2CppString*> T& weaponNameId() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = int32_t> T& bulletCount() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = float> T& delay() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = int32_t> T& maxCount() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = uintptr_t> T& onReloadGun() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = uintptr_t> T& onAttack() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = bool> T& upgraded() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = bool> T& isShooting() {
		return *(T*)((uintptr_t)this + 0x1C9);
	}
	template <typename T = uintptr_t> T& officer() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = bool> T& destroyed() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(GunOfficerSkill*))(Il2CppBase() + 0x2168868))(this);
	}
	template <typename T = void> T FlushIcon(bool leave) {
		return ((T (*)(GunOfficerSkill*, bool))(Il2CppBase() + 0x2168914))(this, leave);
	}
	template <typename T = void> T SetAttack(bool value1, bool manual) {
		return ((T (*)(GunOfficerSkill*, bool, bool))(Il2CppBase() + 0x2168A24))(this, value1, manual);
	}
	template <typename T = int32_t> T ReloadGun(uintptr_t officer, int32_t count) {
		return ((T (*)(GunOfficerSkill*, uintptr_t, int32_t))(Il2CppBase() + 0x2168B80))(this, officer, count);
	}
	template <typename T = uintptr_t> T Shooting() {
		return ((T (*)(GunOfficerSkill*))(Il2CppBase() + 0x2168ACC))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunOfficerSkill*))(Il2CppBase() + 0x2169240))(this);
	}
	template <typename T = void> T StopWeapon() {
		return ((T (*)(GunOfficerSkill*))(Il2CppBase() + 0x216940C))(this);
	}
	template <typename T = void> T DestroySelf() {
		return ((T (*)(GunOfficerSkill*))(Il2CppBase() + 0x216948C))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(GunOfficerSkill*))(Il2CppBase() + 0x2169598))(this);
	}
	template <typename T = void> T WeaponBulletVisualize(uintptr_t officer, int32_t bulletCount) {
		return ((T (*)(GunOfficerSkill*, uintptr_t, int32_t))(Il2CppBase() + 0x2168CD4))(this, officer, bulletCount);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(GunOfficerSkill*))(Il2CppBase() + 0x2169764))(this);
	}
	template <typename T = void> T iFixBaseProxy_FlushIcon(bool P0) {
		return ((T (*)(GunOfficerSkill*, bool))(Il2CppBase() + 0x216976C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_SetAttack(bool P0, bool P1) {
		return ((T (*)(GunOfficerSkill*, bool, bool))(Il2CppBase() + 0x2169778))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_StopWeapon() {
		return ((T (*)(GunOfficerSkill*))(Il2CppBase() + 0x2169788))(this);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_GetItemName() {
		return ((T (*)(GunOfficerSkill*))(Il2CppBase() + 0x2169790))(this);
	}

};

}
