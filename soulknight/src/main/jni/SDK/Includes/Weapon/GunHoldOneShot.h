#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Weapon {

class GunHoldOneShot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Weapon", "GunHoldOneShot"));
	}

	template <typename T = uintptr_t> T& clipHold() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& loadingPrefab() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = float> T& a_time() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = float> T& max_time() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = float> T& holdSpeed() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = uintptr_t> T& loadingGO() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = int32_t> static T& AtkT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& _bulletCreator() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(GunHoldOneShot*))(Il2CppBase() + 0x4366FF4))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunHoldOneShot*))(Il2CppBase() + 0x4367098))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GunHoldOneShot*))(Il2CppBase() + 0x4367220))(this);
	}
	template <typename T = void> T HoldUpdate() {
		return ((T (*)(GunHoldOneShot*))(Il2CppBase() + 0x4367280))(this);
	}
	template <typename T = void> T HoldMax() {
		return ((T (*)(GunHoldOneShot*))(Il2CppBase() + 0x4367634))(this);
	}
	template <typename T = void> T InstantiateLoadingGO() {
		return ((T (*)(GunHoldOneShot*))(Il2CppBase() + 0x4367440))(this);
	}
	template <typename T = bool> T get_NeedInstantiateLoadingGO() {
		return ((T (*)(GunHoldOneShot*))(Il2CppBase() + 0x4367368))(this);
	}
	template <typename T = void> T AttackKeyUp(bool manual) {
		return ((T (*)(GunHoldOneShot*, bool))(Il2CppBase() + 0x4367690))(this, manual);
	}
	template <typename T = void> T DestroyLoadingGO() {
		return ((T (*)(GunHoldOneShot*))(Il2CppBase() + 0x4367874))(this);
	}
	template <typename T = void> T ReleaseAttack() {
		return ((T (*)(GunHoldOneShot*))(Il2CppBase() + 0x436771C))(this);
	}
	template <typename T = void> T StopWeapon() {
		return ((T (*)(GunHoldOneShot*))(Il2CppBase() + 0x4367960))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(GunHoldOneShot*))(Il2CppBase() + 0x4367A40))(this);
	}
	template <typename T = void> T iFixBaseProxy_AttackKeyUp(bool P0) {
		return ((T (*)(GunHoldOneShot*, bool))(Il2CppBase() + 0x4367A48))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_StopWeapon() {
		return ((T (*)(GunHoldOneShot*))(Il2CppBase() + 0x4367A54))(this);
	}

};

}
