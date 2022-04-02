#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RolePetController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RolePetController"));
	}

	template <typename T = bool> T& inStartRoom() {
		return *(T*)((uintptr_t)this + 0x2F0);
	}
	template <typename T = float> T& cutCd() {
		return *(T*)((uintptr_t)this + 0x2F4);
	}
	template <typename T = int32_t> T& skillWeaponIndex() {
		return *(T*)((uintptr_t)this + 0x2F8);
	}

	template <typename T = bool> T get_frontWeaponAllow() {
		return ((T (*)(RolePetController*))(Il2CppBase() + 0x1BF1580))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(RolePetController*))(Il2CppBase() + 0x1BF1680))(this);
	}
	template <typename T = uintptr_t> T PetBugHandler() {
		return ((T (*)(RolePetController*))(Il2CppBase() + 0x1BF19A4))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(RolePetController*))(Il2CppBase() + 0x1BF1A84))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(RolePetController*))(Il2CppBase() + 0x1BF1B04))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(RolePetController*))(Il2CppBase() + 0x1BF1B88))(this);
	}
	template <typename T = void> T StatisticInitWeapon() {
		return ((T (*)(RolePetController*))(Il2CppBase() + 0x1BF1BF4))(this);
	}
	template <typename T = void> T RoleAtk(bool value) {
		return ((T (*)(RolePetController*, bool))(Il2CppBase() + 0x1BF1C50))(this, value);
	}
	template <typename T = void> T GetHurt(int32_t damage, uintptr_t source_object) {
		return ((T (*)(RolePetController*, int32_t, uintptr_t))(Il2CppBase() + 0x1BF1EB4))(this, damage, source_object);
	}
	template <typename T = void> T GetForce(Il2CppVector2 dir, float force) {
		return ((T (*)(RolePetController*, Il2CppVector2, float))(Il2CppBase() + 0x1BF1F2C))(this, dir, force);
	}
	template <typename T = void> T PickUpItem(uintptr_t temp_tf, bool fusion, bool showText) {
		return ((T (*)(RolePetController*, uintptr_t, bool, bool))(Il2CppBase() + 0x1BF1FB8))(this, temp_tf, fusion, showText);
	}
	template <typename T = void> T BtnSwitchWeaponClick() {
		return ((T (*)(RolePetController*))(Il2CppBase() + 0x1BF2060))(this);
	}
	template <typename T = void> T RoleSkill() {
		return ((T (*)(RolePetController*))(Il2CppBase() + 0x1BF20CC))(this);
	}
	template <typename T = void> T RoleSkillEnd() {
		return ((T (*)(RolePetController*))(Il2CppBase() + 0x1BF2364))(this);
	}
	template <typename T = void> T OnGameStateChange(int32_t game_state) {
		return ((T (*)(RolePetController*, int32_t))(Il2CppBase() + 0x1BF24DC))(this, game_state);
	}
	template <typename T = void> T OnBuffChanged(uintptr_t buff, bool isGet) {
		return ((T (*)(RolePetController*, uintptr_t, bool))(Il2CppBase() + 0x1BF25FC))(this, buff, isGet);
	}
	template <typename T = void> T OnAllDead() {
		return ((T (*)(RolePetController*))(Il2CppBase() + 0x1BF27D0))(this);
	}
	template <typename T = void> T DoReborn(bool uiReborn) {
		return ((T (*)(RolePetController*, bool))(Il2CppBase() + 0x1BF28B0))(this, uiReborn);
	}
	template <typename T = void> T iFixBaseProxy_StatisticInitWeapon() {
		return ((T (*)(RolePetController*))(Il2CppBase() + 0x1BF2CE8))(this);
	}
	template <typename T = void> T iFixBaseProxy_RoleAtk(bool P0) {
		return ((T (*)(RolePetController*, bool))(Il2CppBase() + 0x1BF2CF0))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_GetHurt(int32_t P0, uintptr_t P1) {
		return ((T (*)(RolePetController*, int32_t, uintptr_t))(Il2CppBase() + 0x1BF2CFC))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_GetForce(Il2CppVector2 P0, float P1) {
		return ((T (*)(RolePetController*, Il2CppVector2, float))(Il2CppBase() + 0x1BF2D04))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_PickUpItem(uintptr_t P0, bool P1, bool P2) {
		return ((T (*)(RolePetController*, uintptr_t, bool, bool))(Il2CppBase() + 0x1BF2D0C))(this, P0, P1, P2);
	}
	template <typename T = void> T iFixBaseProxy_BtnSwitchWeaponClick() {
		return ((T (*)(RolePetController*))(Il2CppBase() + 0x1BF2D1C))(this);
	}
	template <typename T = void> T iFixBaseProxy_RoleSkill() {
		return ((T (*)(RolePetController*))(Il2CppBase() + 0x1BF2D24))(this);
	}
	template <typename T = void> T iFixBaseProxy_RoleSkillEnd() {
		return ((T (*)(RolePetController*))(Il2CppBase() + 0x1BF2D2C))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnGameStateChange(int32_t P0) {
		return ((T (*)(RolePetController*, int32_t))(Il2CppBase() + 0x1BF2D34))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnBuffChanged(uintptr_t P0, bool P1) {
		return ((T (*)(RolePetController*, uintptr_t, bool))(Il2CppBase() + 0x1BF2D3C))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_DoReborn(bool P0) {
		return ((T (*)(RolePetController*, bool))(Il2CppBase() + 0x1BF2D48))(this, P0);
	}

};

}
