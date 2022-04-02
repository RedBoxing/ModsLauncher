#pragma once
#include "Il2Cpp/Il2Cpp.h"

class C16Controller
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "C16Controller"));
	}

	template <typename T = uintptr_t> T& hand2() {
		return *(T*)((uintptr_t)this + 0x2F0);
	}
	template <typename T = uintptr_t> T& rewardMark() {
		return *(T*)((uintptr_t)this + 0x2F8);
	}
	template <typename T = uintptr_t> T& phone() {
		return *(T*)((uintptr_t)this + 0x300);
	}
	template <typename T = float> T& waitTime() {
		return *(T*)((uintptr_t)this + 0x308);
	}
	template <typename T = Il2CppVector3> T& flyDirection() {
		return *(T*)((uintptr_t)this + 0x30C);
	}
	template <typename T = int32_t> T& AirDropRate() {
		return *(T*)((uintptr_t)this + 0x318);
	}

	template <typename T = bool> T get_is_opera() {
		return ((T (*)(C16Controller*))(Il2CppBase() + 0x1F41444))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(C16Controller*))(Il2CppBase() + 0x1F414B4))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(C16Controller*))(Il2CppBase() + 0x1F416B4))(this);
	}
	template <typename T = void> T SetUpChar() {
		return ((T (*)(C16Controller*))(Il2CppBase() + 0x1F4185C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(C16Controller*))(Il2CppBase() + 0x1F419E0))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(C16Controller*))(Il2CppBase() + 0x1F41BFC))(this);
	}
	template <typename T = void> T SetVelocity() {
		return ((T (*)(C16Controller*))(Il2CppBase() + 0x1F41C68))(this);
	}
	template <typename T = void> T AutoLock() {
		return ((T (*)(C16Controller*))(Il2CppBase() + 0x1F41E5C))(this);
	}
	template <typename T = uintptr_t> T FindTarget() {
		return ((T (*)(C16Controller*))(Il2CppBase() + 0x1F41FBC))(this);
	}
	template <typename T = void> T RoleSkill() {
		return ((T (*)(C16Controller*))(Il2CppBase() + 0x1F42358))(this);
	}
	template <typename T = void> T RoleSkill0() {
		return ((T (*)(C16Controller*))(Il2CppBase() + 0x1F4243C))(this);
	}
	template <typename T = void> T OnSkill0ShootEnd() {
		return ((T (*)(C16Controller*))(Il2CppBase() + 0x1F42E30))(this);
	}
	template <typename T = void> T RoleSkill1() {
		return ((T (*)(C16Controller*))(Il2CppBase() + 0x1F42ACC))(this);
	}
	template <typename T = bool> T CreateMark() {
		return ((T (*)(C16Controller*))(Il2CppBase() + 0x1F42F5C))(this);
	}
	template <typename T = void> T RoleSkill2() {
		return ((T (*)(C16Controller*))(Il2CppBase() + 0x1F42B80))(this);
	}
	template <typename T = uintptr_t> T AirStrikeDelay() {
		return ((T (*)(C16Controller*))(Il2CppBase() + 0x1F432C8))(this);
	}
	template <typename T = void> T ShowCallEffect() {
		return ((T (*)(C16Controller*))(Il2CppBase() + 0x1F433A8))(this);
	}
	template <typename T = void> T HideCallEffect() {
		return ((T (*)(C16Controller*))(Il2CppBase() + 0x1F43800))(this);
	}
	template <typename T = void> T AirStrike() {
		return ((T (*)(C16Controller*))(Il2CppBase() + 0x1F439A0))(this);
	}
	template <typename T = void> T ShowAirDrop(Il2CppVector3 startPos, Il2CppVector3 targetPos) {
		return ((T (*)(C16Controller*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x1F44278))(this, startPos, targetPos);
	}
	template <typename T = void> T OnBulletCreate(uintptr_t bulletGo) {
		return ((T (*)(C16Controller*, uintptr_t))(Il2CppBase() + 0x1F446D4))(this, bulletGo);
	}
	template <typename T = void> T OnDelayedBulletRelease(uintptr_t bulletGo) {
		return ((T (*)(C16Controller*, uintptr_t))(Il2CppBase() + 0x1F44B90))(this, bulletGo);
	}
	template <typename T = void> T AddFollowMover(uintptr_t bulletGo) {
		return ((T (*)(C16Controller*, uintptr_t))(Il2CppBase() + 0x1F4475C))(this, bulletGo);
	}
	template <typename T = void> T OnMotivated() {
		return ((T (*)(C16Controller*))(Il2CppBase() + 0x1F41CFC))(this);
	}
	template <typename T = void> T SeatCheckUpdate() {
		return ((T (*)(C16Controller*))(Il2CppBase() + 0x1F41A6C))(this);
	}
	template <typename T = void> T SeatDown() {
		return ((T (*)(C16Controller*))(Il2CppBase() + 0x1F44C18))(this);
	}
	template <typename T = void> T RoleAtk(bool value) {
		return ((T (*)(C16Controller*, bool))(Il2CppBase() + 0x1F44CEC))(this, value);
	}
	template <typename T = void> T HandAtk(bool val) {
		return ((T (*)(C16Controller*, bool))(Il2CppBase() + 0x1F44E08))(this, val);
	}
	template <typename T = void> T BtnSwitchWeaponClick() {
		return ((T (*)(C16Controller*))(Il2CppBase() + 0x1F44EB4))(this);
	}
	template <typename T = void> T BtnSpecialClick(bool isDown, uintptr_t btnType) {
		return ((T (*)(C16Controller*, bool, uintptr_t))(Il2CppBase() + 0x1F44F20))(this, isDown, btnType);
	}
	template <typename T = void> T DeadChild() {
		return ((T (*)(C16Controller*))(Il2CppBase() + 0x1F44FB0))(this);
	}
	template <typename T = void> T Dizzy(float the_time) {
		return ((T (*)(C16Controller*, float))(Il2CppBase() + 0x1F45038))(this, the_time);
	}
	template <typename T = uintptr_t> T GetHeroType() {
		return ((T (*)(C16Controller*))(Il2CppBase() + 0x1F450E8))(this);
	}
	template <typename T = uintptr_t> T DropWeapon(bool autoSwitchWeapon) {
		return ((T (*)(C16Controller*, bool))(Il2CppBase() + 0x1F45148))(this, autoSwitchWeapon);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetWeaponsData() {
		return ((T (*)(C16Controller*))(Il2CppBase() + 0x1F451F0))(this);
	}
	template <typename T = void> T OnMount(bool isMount) {
		return ((T (*)(C16Controller*, bool))(Il2CppBase() + 0x1F45268))(this, isMount);
	}
	template <typename T = void> T TriggerItem() {
		return ((T (*)(C16Controller*))(Il2CppBase() + 0x1F453F0))(this);
	}
	template <typename T = void> T OnChosen() {
		return ((T (*)(C16Controller*))(Il2CppBase() + 0x1F455B4))(this);
	}
	template <typename T = void> T OnBuffChanged(uintptr_t buff, bool isGet) {
		return ((T (*)(C16Controller*, uintptr_t, bool))(Il2CppBase() + 0x1F4568C))(this, buff, isGet);
	}
	template <typename T = void> T OnSkinChanged(int32_t index) {
		return ((T (*)(C16Controller*, int32_t))(Il2CppBase() + 0x1F457E8))(this, index);
	}
	template <typename T = void> T OnSkinChangerChangeSkin(int32_t index) {
		return ((T (*)(C16Controller*, int32_t))(Il2CppBase() + 0x1F458AC))(this, index);
	}
	template <typename T = void> T Awakeb__6_0() {
		return ((T (*)(C16Controller*))(Il2CppBase() + 0x1F459E0))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetUpChar() {
		return ((T (*)(C16Controller*))(Il2CppBase() + 0x1F45A50))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetVelocity() {
		return ((T (*)(C16Controller*))(Il2CppBase() + 0x1F45A58))(this);
	}
	template <typename T = void> T iFixBaseProxy_AutoLock() {
		return ((T (*)(C16Controller*))(Il2CppBase() + 0x1F45A60))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_FindTarget() {
		return ((T (*)(C16Controller*))(Il2CppBase() + 0x1F45A68))(this);
	}
	template <typename T = void> T iFixBaseProxy_RoleSkill() {
		return ((T (*)(C16Controller*))(Il2CppBase() + 0x1F45A70))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnBulletCreate(uintptr_t P0) {
		return ((T (*)(C16Controller*, uintptr_t))(Il2CppBase() + 0x1F45A78))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnDelayedBulletRelease(uintptr_t P0) {
		return ((T (*)(C16Controller*, uintptr_t))(Il2CppBase() + 0x1F45A80))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_RoleAtk(bool P0) {
		return ((T (*)(C16Controller*, bool))(Il2CppBase() + 0x1F45A88))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_HandAtk(bool P0) {
		return ((T (*)(C16Controller*, bool))(Il2CppBase() + 0x1F45A94))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_BtnSwitchWeaponClick() {
		return ((T (*)(C16Controller*))(Il2CppBase() + 0x1F45AA0))(this);
	}
	template <typename T = void> T iFixBaseProxy_BtnSpecialClick(bool P0, uintptr_t P1) {
		return ((T (*)(C16Controller*, bool, uintptr_t))(Il2CppBase() + 0x1F45AA8))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_DeadChild() {
		return ((T (*)(C16Controller*))(Il2CppBase() + 0x1F45AB4))(this);
	}
	template <typename T = void> T iFixBaseProxy_Dizzy(float P0) {
		return ((T (*)(C16Controller*, float))(Il2CppBase() + 0x1F45ABC))(this, P0);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_GetHeroType() {
		return ((T (*)(C16Controller*))(Il2CppBase() + 0x1F45AC4))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_DropWeapon(bool P0) {
		return ((T (*)(C16Controller*, bool))(Il2CppBase() + 0x1F45ACC))(this, P0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T iFixBaseProxy_GetWeaponsData() {
		return ((T (*)(C16Controller*))(Il2CppBase() + 0x1F45AD8))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnMount(bool P0) {
		return ((T (*)(C16Controller*, bool))(Il2CppBase() + 0x1F45AE0))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_TriggerItem() {
		return ((T (*)(C16Controller*))(Il2CppBase() + 0x1F45AEC))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnChosen() {
		return ((T (*)(C16Controller*))(Il2CppBase() + 0x1F45AF4))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnBuffChanged(uintptr_t P0, bool P1) {
		return ((T (*)(C16Controller*, uintptr_t, bool))(Il2CppBase() + 0x1F45AFC))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_OnSkinChanged(int32_t P0) {
		return ((T (*)(C16Controller*, int32_t))(Il2CppBase() + 0x1F45B08))(this, P0);
	}

};

}
