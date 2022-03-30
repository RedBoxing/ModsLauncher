#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MountBearController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MountBearController"));
	}

	template <typename T = uintptr_t> T& bulletEx() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& h1Tf() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& bulletInfo() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& bodyRenderer() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = int32_t> T& mountSortorder() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = int32_t> T& unmountSortorder() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = bool> T& canAtk() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = float> T& atkCd() {
		return *(T*)((uintptr_t)this + 0x134);
	}

	template <typename T = float> T get_justMountDelay() {
		return ((T (*)(MountBearController*))(Il2CppBase() + 0x41F7E34))(this);
	}
	template <typename T = uintptr_t> T get_battleController() {
		return ((T (*)(MountBearController*))(Il2CppBase() + 0x41F7E94))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(MountBearController*))(Il2CppBase() + 0x41F7F24))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(MountBearController*, uintptr_t))(Il2CppBase() + 0x41F8038))(this, other);
	}
	template <typename T = bool> T ShouldShowBtnSpecial(uintptr_t driver) {
		return ((T (*)(MountBearController*, uintptr_t))(Il2CppBase() + 0x41F80A8))(this, driver);
	}
	template <typename T = void> T BornInBattle() {
		return ((T (*)(MountBearController*))(Il2CppBase() + 0x41F8138))(this);
	}
	template <typename T = void> T OnDriveStatusChanged(bool isMount) {
		return ((T (*)(MountBearController*, bool))(Il2CppBase() + 0x41F81A8))(this, isMount);
	}
	template <typename T = void> T ChangeMountSortOrder(bool isMount) {
		return ((T (*)(MountBearController*, bool))(Il2CppBase() + 0x41F8884))(this, isMount);
	}
	template <typename T = void> T GetHurt(int32_t damage) {
		return ((T (*)(MountBearController*, int32_t))(Il2CppBase() + 0x41F8924))(this, damage);
	}
	template <typename T = void> T Dead() {
		return ((T (*)(MountBearController*))(Il2CppBase() + 0x41F89A0))(this);
	}
	template <typename T = void> T Recovered() {
		return ((T (*)(MountBearController*))(Il2CppBase() + 0x41F8DDC))(this);
	}
	template <typename T = bool> T PetAttacking() {
		return ((T (*)(MountBearController*))(Il2CppBase() + 0x41F8E3C))(this);
	}
	template <typename T = void> T SpecialClick(bool isDown) {
		return ((T (*)(MountBearController*, bool))(Il2CppBase() + 0x41F8F48))(this, isDown);
	}
	template <typename T = void> T FlushWeaponIcon(uintptr_t rgWeapon) {
		return ((T (*)(MountBearController*, uintptr_t))(Il2CppBase() + 0x41F906C))(this, rgWeapon);
	}
	template <typename T = void> T Mount(uintptr_t driver) {
		return ((T (*)(MountBearController*, uintptr_t))(Il2CppBase() + 0x41F91D0))(this, driver);
	}
	template <typename T = void> T TurnCanAtk() {
		return ((T (*)(MountBearController*))(Il2CppBase() + 0x41F9258))(this);
	}
	template <typename T = void> T OnMountAtk() {
		return ((T (*)(MountBearController*))(Il2CppBase() + 0x41F92BC))(this);
	}
	template <typename T = float> T iFixBaseProxy_get_justMountDelay() {
		return ((T (*)(MountBearController*))(Il2CppBase() + 0x41F9608))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(MountBearController*))(Il2CppBase() + 0x41F9610))(this);
	}
	template <typename T = bool> T iFixBaseProxy_ShouldShowBtnSpecial(uintptr_t P0) {
		return ((T (*)(MountBearController*, uintptr_t))(Il2CppBase() + 0x41F9618))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnDriveStatusChanged(bool P0) {
		return ((T (*)(MountBearController*, bool))(Il2CppBase() + 0x41F9620))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_GetHurt(int32_t P0) {
		return ((T (*)(MountBearController*, int32_t))(Il2CppBase() + 0x41F962C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Dead() {
		return ((T (*)(MountBearController*))(Il2CppBase() + 0x41F9634))(this);
	}
	template <typename T = void> T iFixBaseProxy_SpecialClick(bool P0) {
		return ((T (*)(MountBearController*, bool))(Il2CppBase() + 0x41F963C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_FlushWeaponIcon(uintptr_t P0) {
		return ((T (*)(MountBearController*, uintptr_t))(Il2CppBase() + 0x41F9648))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Mount(uintptr_t P0) {
		return ((T (*)(MountBearController*, uintptr_t))(Il2CppBase() + 0x41F9650))(this, P0);
	}

};

}
