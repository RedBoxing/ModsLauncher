#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGHand
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGHand"));
	}

	template <typename T = uintptr_t> T& controller() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& back_tf() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& _backMaxWeapon() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& onPreSwitchWeapon() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = void*> T& onSwitchWeapon() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = void*> T& onPickupItem() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = int32_t> T get_backMaxWeapon() {
		return ((T (*)(RGHand*))(Il2CppBase() + 0x1C524B8))(this);
	}
	template <typename T = void> T add_onPreSwitchWeapon(void* value) {
		return ((T (*)(RGHand*, void*))(Il2CppBase() + 0x1C52518))(this, value);
	}
	template <typename T = void> T remove_onPreSwitchWeapon(void* value) {
		return ((T (*)(RGHand*, void*))(Il2CppBase() + 0x1C52604))(this, value);
	}
	template <typename T = void> T add_onSwitchWeapon(void* value) {
		return ((T (*)(RGHand*, void*))(Il2CppBase() + 0x1C526F0))(this, value);
	}
	template <typename T = void> T remove_onSwitchWeapon(void* value) {
		return ((T (*)(RGHand*, void*))(Il2CppBase() + 0x1C527DC))(this, value);
	}
	template <typename T = void> T add_onPickupItem(void* value) {
		return ((T (*)(RGHand*, void*))(Il2CppBase() + 0x1C528C8))(this, value);
	}
	template <typename T = void> T remove_onPickupItem(void* value) {
		return ((T (*)(RGHand*, void*))(Il2CppBase() + 0x1C529B4))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(RGHand*))(Il2CppBase() + 0x1C52AA0))(this);
	}
	template <typename T = void> T SetController(uintptr_t controller) {
		return ((T (*)(RGHand*, uintptr_t))(Il2CppBase() + 0x1C52BB0))(this, controller);
	}
	template <typename T = void> T SetAttack(bool value1) {
		return ((T (*)(RGHand*, bool))(Il2CppBase() + 0x1C52C24))(this, value1);
	}
	template <typename T = void> T StartWeapon() {
		return ((T (*)(RGHand*))(Il2CppBase() + 0x1C52D24))(this);
	}
	template <typename T = void> T StopWeapon() {
		return ((T (*)(RGHand*))(Il2CppBase() + 0x1C52E20))(this);
	}
	template <typename T = void> T DeadWeapon() {
		return ((T (*)(RGHand*))(Il2CppBase() + 0x1C52F00))(this);
	}
	template <typename T = bool> T IsMelee() {
		return ((T (*)(RGHand*))(Il2CppBase() + 0x1C5306C))(this);
	}
	template <typename T = uintptr_t> T AtkCut(int32_t facing, int32_t atk, int32_t critical, bool skillHandCut) {
		return ((T (*)(RGHand*, int32_t, int32_t, int32_t, bool))(Il2CppBase() + 0x1C53184))(this, facing, atk, critical, skillHandCut);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T SetUpWeapon(Il2CppList<uintptr_t>* weapons) {
		return ((T (*)(RGHand*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1C53790))(this, weapons);
	}
	template <typename T = uintptr_t> T CreateWeapon(uintptr_t info, bool isFrontWeapon, int32_t idx) {
		return ((T (*)(RGHand*, uintptr_t, bool, int32_t))(Il2CppBase() + 0x1C542DC))(this, info, isFrontWeapon, idx);
	}
	template <typename T = void> T SetUpWeapon_1(uintptr_t new_weapon_tf, Il2CppVector3 alt_angles) {
		return ((T (*)(RGHand*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x1C549C4))(this, new_weapon_tf, alt_angles);
	}
	template <typename T = void> T SwitchWeapon(bool showText) {
		return ((T (*)(RGHand*, bool))(Il2CppBase() + 0x1C54B18))(this, showText);
	}
	template <typename T = void> T SwitchWeaponFromBack(uintptr_t weapon) {
		return ((T (*)(RGHand*, uintptr_t))(Il2CppBase() + 0x1C54F78))(this, weapon);
	}
	template <typename T = void> T SwitchToLastWeapon() {
		return ((T (*)(RGHand*))(Il2CppBase() + 0x1C551C8))(this);
	}
	template <typename T = void> T SwitchShowFrontWeapon() {
		return ((T (*)(RGHand*))(Il2CppBase() + 0x1C55334))(this);
	}
	template <typename T = void> T PutWeaponToBack() {
		return ((T (*)(RGHand*))(Il2CppBase() + 0x1C55428))(this);
	}
	template <typename T = uintptr_t> T DropWeapon(bool switchToNextWeapon) {
		return ((T (*)(RGHand*, bool))(Il2CppBase() + 0x1C55508))(this, switchToNextWeapon);
	}
	template <typename T = uintptr_t> T ForceDropWeapon() {
		return ((T (*)(RGHand*))(Il2CppBase() + 0x1C55634))(this);
	}
	template <typename T = uintptr_t> T DropWeapon_1(uintptr_t w) {
		return ((T (*)(RGHand*, uintptr_t))(Il2CppBase() + 0x1C55748))(this, w);
	}
	template <typename T = void> T SetNewWeaponActive(uintptr_t newWeaponGO) {
		return ((T (*)(RGHand*, uintptr_t))(Il2CppBase() + 0x1C559F4))(this, newWeaponGO);
	}
	template <typename T = bool> T NeedShowLimitCountTips(uintptr_t w) {
		return ((T (*)(RGHand*, uintptr_t))(Il2CppBase() + 0x1C55BDC))(this, w);
	}
	template <typename T = bool> T NeedShowLimitTransformHeroTips(uintptr_t w) {
		return ((T (*)(RGHand*, uintptr_t))(Il2CppBase() + 0x1C55FC8))(this, w);
	}
	template <typename T = void> T PickUpItem(uintptr_t new_weapon_tf, bool fusion, bool showText) {
		return ((T (*)(RGHand*, uintptr_t, bool, bool))(Il2CppBase() + 0x1C562F0))(this, new_weapon_tf, fusion, showText);
	}
	template <typename T = void> T CheckPickWeapon() {
		return ((T (*)(RGHand*))(Il2CppBase() + 0x1C56F98))(this);
	}
	template <typename T = void> T OnPickUpItem(uintptr_t trans) {
		return ((T (*)(RGHand*, uintptr_t))(Il2CppBase() + 0x1C56AC8))(this, trans);
	}
	template <typename T = void> T PickUpTrash(uintptr_t tranf) {
		return ((T (*)(RGHand*, uintptr_t))(Il2CppBase() + 0x1C5706C))(this, tranf);
	}
	template <typename T = bool> T CheckLimitWeapon(uintptr_t newWeapon, int32_t count) {
		return ((T (*)(RGHand*, uintptr_t, int32_t))(Il2CppBase() + 0x1C56B84))(this, newWeapon, count);
	}
	template <typename T = bool> T CheckLimitCount(uintptr_t weapon, int32_t count) {
		return ((T (*)(RGHand*, uintptr_t, int32_t))(Il2CppBase() + 0x1C55D90))(this, weapon, count);
	}
	template <typename T = bool> T CheckLimitTypeCount(uintptr_t wType, int32_t count) {
		return ((T (*)(RGHand*, uintptr_t, int32_t))(Il2CppBase() + 0x1C56164))(this, wType, count);
	}
	template <typename T = bool> T TryFusion(uintptr_t newWeapon) {
		return ((T (*)(RGHand*, uintptr_t))(Il2CppBase() + 0x1C56C28))(this, newWeapon);
	}
	template <typename T = void> T PushWeapon(uintptr_t newWeapon) {
		return ((T (*)(RGHand*, uintptr_t))(Il2CppBase() + 0x1C57258))(this, newWeapon);
	}
	template <typename T = void> T RemoveMountWeapon(uintptr_t weapon) {
		return ((T (*)(RGHand*, uintptr_t))(Il2CppBase() + 0x1C5740C))(this, weapon);
	}
	template <typename T = void> T HideWeapon() {
		return ((T (*)(RGHand*))(Il2CppBase() + 0x1C57A9C))(this);
	}
	template <typename T = void> T ShowWeapon() {
		return ((T (*)(RGHand*))(Il2CppBase() + 0x1C57B7C))(this);
	}
	template <typename T = void> T SetWeaponBack(uintptr_t w, bool temporarily, bool asFirstSibling) {
		return ((T (*)(RGHand*, uintptr_t, bool, bool))(Il2CppBase() + 0x1C57C60))(this, w, temporarily, asFirstSibling);
	}
	template <typename T = void> T ResetBackWeaponPositions() {
		return ((T (*)(RGHand*))(Il2CppBase() + 0x1C57718))(this);
	}
	template <typename T = void> T SetWeaponFront(uintptr_t w, Il2CppVector3 angles, bool isPick) {
		return ((T (*)(RGHand*, uintptr_t, Il2CppVector3, bool))(Il2CppBase() + 0x1C57DB0))(this, w, angles, isPick);
	}
	template <typename T = int32_t> T GetWeaponConsume() {
		return ((T (*)(RGHand*))(Il2CppBase() + 0x1C57FF0))(this);
	}
	template <typename T = bool> T IsBackFull() {
		return ((T (*)(RGHand*))(Il2CppBase() + 0x1C5806C))(this);
	}
	template <typename T = int32_t> T GetCurrentBackMaxWeaponCount() {
		return ((T (*)(RGHand*))(Il2CppBase() + 0x1C548D0))(this);
	}
	template <typename T = uintptr_t> T GetBackWeapon(bool includeInvisible) {
		return ((T (*)(RGHand*, bool))(Il2CppBase() + 0x1C581D4))(this, includeInvisible);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetBackWeapons() {
		return ((T (*)(RGHand*))(Il2CppBase() + 0x1C58360))(this);
	}
	template <typename T = bool> T ContainsBackWeapon(uintptr_t weapon) {
		return ((T (*)(RGHand*, uintptr_t))(Il2CppBase() + 0x1C58478))(this, weapon);
	}
	template <typename T = void> T LockedWeaponProcess(float fixed_angle) {
		return ((T (*)(RGHand*, float))(Il2CppBase() + 0x1C585C8))(this, fixed_angle);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetAllWeapons() {
		return ((T (*)(RGHand*))(Il2CppBase() + 0x1C52170))(this);
	}
	template <typename T = uintptr_t> T GetWeapon(Il2CppString* weaponName) {
		return ((T (*)(RGHand*, Il2CppString*))(Il2CppBase() + 0x1C586C4))(this, weaponName);
	}
	template <typename T = bool> T HasWeapon(Il2CppString* weaponName) {
		return ((T (*)(RGHand*, Il2CppString*))(Il2CppBase() + 0x1C58858))(this, weaponName);
	}
	template <typename T = bool> T RemoveWeapon(Il2CppString* weaponName) {
		return ((T (*)(RGHand*, Il2CppString*))(Il2CppBase() + 0x1C589F0))(this, weaponName);
	}
	template <typename T = bool> T RemoveWeapon_1(uintptr_t w, bool switchToNextWeapon) {
		return ((T (*)(RGHand*, uintptr_t, bool))(Il2CppBase() + 0x1C58BB0))(this, w, switchToNextWeapon);
	}
	template <typename T = void> T RemoveWeaponFlush() {
		return ((T (*)(RGHand*))(Il2CppBase() + 0x1C58D80))(this);
	}
	template <typename T = bool> static T CanUseHandCut(uintptr_t controller, uintptr_t target, uintptr_t hand) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1C58F2C))(0, controller, target, hand);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(RGHand*))(Il2CppBase() + 0x1C59268))(this);
	}
	template <typename T = bool> T iFixBaseProxy_HasWeapon(Il2CppString* P0) {
		return ((T (*)(RGHand*, Il2CppString*))(Il2CppBase() + 0x1C59270))(this, P0);
	}

};

}
