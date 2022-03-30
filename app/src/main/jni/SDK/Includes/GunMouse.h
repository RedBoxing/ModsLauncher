#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunMouse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunMouse"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& bullets() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& mousePrefab() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = int32_t> T& continuousCount() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = float> T& delay() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = uintptr_t> T& weaponSprite() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = Il2CppVector3> T& h1Offset() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = float> T& _delayTotal() {
		return *(T*)((uintptr_t)this + 0x1CC);
	}
	template <typename T = uintptr_t> T& _mouseGO() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = void*> T& _mouseAnimCache() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = uintptr_t> T& _weaponSpriteRenderer() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = bool> T& backAtk() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = float> T& atkTime() {
		return *(T*)((uintptr_t)this + 0x1EC);
	}
	template <typename T = float> T& _backAtkReleaseTime() {
		return *(T*)((uintptr_t)this + 0x1F0);
	}
	template <typename T = float> static T& BackAtkUpTimeWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& _delayedButton() {
		return *(T*)((uintptr_t)this + 0x1F8);
	}

	template <typename T = uintptr_t> T get_weaponSpriteRenderer() {
		return ((T (*)(GunMouse*))(Il2CppBase() + 0x22873D4))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GunMouse*))(Il2CppBase() + 0x22874E0))(this);
	}
	template <typename T = void> T CalculateTotalTime() {
		return ((T (*)(GunMouse*))(Il2CppBase() + 0x228755C))(this);
	}
	template <typename T = void> T ResetShootInterval() {
		return ((T (*)(GunMouse*))(Il2CppBase() + 0x22875D0))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunMouse*))(Il2CppBase() + 0x2287644))(this);
	}
	template <typename T = uintptr_t> T CreateBullet(int32_t totalCount) {
		return ((T (*)(GunMouse*, int32_t))(Il2CppBase() + 0x22876D8))(this, totalCount);
	}
	template <typename T = void> T StopWeapon() {
		return ((T (*)(GunMouse*))(Il2CppBase() + 0x22877E4))(this);
	}
	template <typename T = void> T OnTypicalChange() {
		return ((T (*)(GunMouse*))(Il2CppBase() + 0x2287850))(this);
	}
	template <typename T = void> T SetWeaponBack(uintptr_t parent) {
		return ((T (*)(GunMouse*, uintptr_t))(Il2CppBase() + 0x22878BC))(this, parent);
	}
	template <typename T = void> T SetWeaponFront(uintptr_t parent, int32_t target_layer) {
		return ((T (*)(GunMouse*, uintptr_t, int32_t))(Il2CppBase() + 0x2287FDC))(this, parent, target_layer);
	}
	template <typename T = bool> T get_showMouse() {
		return ((T (*)(GunMouse*))(Il2CppBase() + 0x2287E88))(this);
	}
	template <typename T = void> T StartUseWeapon() {
		return ((T (*)(GunMouse*))(Il2CppBase() + 0x2288424))(this);
	}
	template <typename T = void> T BackAttackDown() {
		return ((T (*)(GunMouse*))(Il2CppBase() + 0x22884B4))(this);
	}
	template <typename T = void> T BackAttackUp() {
		return ((T (*)(GunMouse*))(Il2CppBase() + 0x2288528))(this);
	}
	template <typename T = void> T MouseAttack() {
		return ((T (*)(GunMouse*))(Il2CppBase() + 0x228859C))(this);
	}
	template <typename T = void> T MouseAttackStop() {
		return ((T (*)(GunMouse*))(Il2CppBase() + 0x22886F0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GunMouse*))(Il2CppBase() + 0x2288838))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_texts() {
		return ((T (*)(GunMouse*))(Il2CppBase() + 0x2288CD0))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(GunMouse*))(Il2CppBase() + 0x2289104))(this);
	}
	template <typename T = void> T iFixBaseProxy_StopWeapon() {
		return ((T (*)(GunMouse*))(Il2CppBase() + 0x228910C))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTypicalChange() {
		return ((T (*)(GunMouse*))(Il2CppBase() + 0x2289114))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetWeaponBack(uintptr_t P0) {
		return ((T (*)(GunMouse*, uintptr_t))(Il2CppBase() + 0x228911C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_SetWeaponFront(uintptr_t P0, int32_t P1) {
		return ((T (*)(GunMouse*, uintptr_t, int32_t))(Il2CppBase() + 0x2289124))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_StartUseWeapon() {
		return ((T (*)(GunMouse*))(Il2CppBase() + 0x228912C))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T iFixBaseProxy_get_texts() {
		return ((T (*)(GunMouse*))(Il2CppBase() + 0x2289134))(this);
	}

};

}
