#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunAchemistSkill
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunAchemistSkill"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& collorStrings() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& colors() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& sprites() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& effects() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = uintptr_t> T& liquidRoot() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = uintptr_t> T& materialRoot() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = int32_t> T& extraLevel() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = float> T& showHpbarHeight() {
		return *(T*)((uintptr_t)this + 0x1DC);
	}
	template <typename T = float> T& noneHpbarHeight() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = bool> T& destroyed() {
		return *(T*)((uintptr_t)this + 0x1E4);
	}
	template <typename T = int32_t> T& maxMixCount() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = int32_t> T& mixCount() {
		return *(T*)((uintptr_t)this + 0x1EC);
	}
	template <typename T = uintptr_t> T& mixCtrl() {
		return *(T*)((uintptr_t)this + 0x1F0);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> static T& distribute() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& text() {
		return *(T*)((uintptr_t)this + 0x1F8);
	}
	template <typename T = bool> T& isSpecialWeapon() {
		return *(T*)((uintptr_t)this + 0x200);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(GunAchemistSkill*))(Il2CppBase() + 0x2577BC4))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(GunAchemistSkill*))(Il2CppBase() + 0x2578098))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GunAchemistSkill*))(Il2CppBase() + 0x25781AC))(this);
	}
	template <typename T = void> T Rotate() {
		return ((T (*)(GunAchemistSkill*))(Il2CppBase() + 0x2578288))(this);
	}
	template <typename T = bool> T IsHold() {
		return ((T (*)(GunAchemistSkill*))(Il2CppBase() + 0x257832C))(this);
	}
	template <typename T = void> T SetAttack(bool value1, bool setHandAttack) {
		return ((T (*)(GunAchemistSkill*, bool, bool))(Il2CppBase() + 0x257838C))(this, value1, setHandAttack);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunAchemistSkill*))(Il2CppBase() + 0x2578534))(this);
	}
	template <typename T = void> T MakeEffects() {
		return ((T (*)(GunAchemistSkill*))(Il2CppBase() + 0x2578704))(this);
	}
	template <typename T = void> T MakeEffect(uintptr_t effect, float value) {
		return ((T (*)(GunAchemistSkill*, uintptr_t, float))(Il2CppBase() + 0x2578C38))(this, effect, value);
	}
	template <typename T = void> T DestroySelf() {
		return ((T (*)(GunAchemistSkill*))(Il2CppBase() + 0x2578A10))(this);
	}
	template <typename T = bool> T MixPot(uintptr_t ctrl, uintptr_t rg_random) {
		return ((T (*)(GunAchemistSkill*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2578FE0))(this, ctrl, rg_random);
	}
	template <typename T = void> T DoMix(uintptr_t rg_random) {
		return ((T (*)(GunAchemistSkill*, uintptr_t))(Il2CppBase() + 0x25790D8))(this, rg_random);
	}
	template <typename T = void> T MixComplete() {
		return ((T (*)(GunAchemistSkill*))(Il2CppBase() + 0x25798E8))(this);
	}
	template <typename T = float> T GetEffectValue(uintptr_t effect) {
		return ((T (*)(GunAchemistSkill*, uintptr_t))(Il2CppBase() + 0x2578B00))(this, effect);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(GunAchemistSkill*))(Il2CppBase() + 0x25799FC))(this);
	}
	template <typename T = Il2CppString*> T GetEffectDesc() {
		return ((T (*)(GunAchemistSkill*))(Il2CppBase() + 0x2579AF4))(this);
	}
	template <typename T = void> T CreateText() {
		return ((T (*)(GunAchemistSkill*))(Il2CppBase() + 0x2577CBC))(this);
	}
	template <typename T = void> T OnSwitchWeapon(bool toFront, bool isPick) {
		return ((T (*)(GunAchemistSkill*, bool, bool))(Il2CppBase() + 0x2579D24))(this, toFront, isPick);
	}
	template <typename T = bool> T NeedHigherPos() {
		return ((T (*)(GunAchemistSkill*))(Il2CppBase() + 0x2579EB0))(this);
	}
	template <typename T = void> T RefreshLiquids() {
		return ((T (*)(GunAchemistSkill*))(Il2CppBase() + 0x2579308))(this);
	}
	template <typename T = void> T RefreshMaterial() {
		return ((T (*)(GunAchemistSkill*))(Il2CppBase() + 0x2579544))(this);
	}
	template <typename T = void> T SetWeaponFront(uintptr_t parent, int32_t target_layer) {
		return ((T (*)(GunAchemistSkill*, uintptr_t, int32_t))(Il2CppBase() + 0x2579F7C))(this, parent, target_layer);
	}
	template <typename T = void> T StartUseWeapon() {
		return ((T (*)(GunAchemistSkill*))(Il2CppBase() + 0x257A0B4))(this);
	}
	template <typename T = void> T DropWeapon(int32_t target_layer) {
		return ((T (*)(GunAchemistSkill*, int32_t))(Il2CppBase() + 0x257A164))(this, target_layer);
	}
	template <typename T = void> T SetBackPosition(Il2CppVector3 local_position, float angle, int32_t target_layer) {
		return ((T (*)(GunAchemistSkill*, Il2CppVector3, float, int32_t))(Il2CppBase() + 0x257A290))(this, local_position, angle, target_layer);
	}
	template <typename T = void> T ShowWeaponName(float height) {
		return ((T (*)(GunAchemistSkill*, float))(Il2CppBase() + 0x257A40C))(this, height);
	}
	template <typename T = void> T ShowItemInfo() {
		return ((T (*)(GunAchemistSkill*))(Il2CppBase() + 0x257A48C))(this);
	}
	template <typename T = void> T CopyFrom(uintptr_t proto) {
		return ((T (*)(GunAchemistSkill*, uintptr_t))(Il2CppBase() + 0x257A4E8))(this, proto);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_texts() {
		return ((T (*)(GunAchemistSkill*))(Il2CppBase() + 0x257A678))(this);
	}
	template <typename T = bool> T get_isSpecial() {
		return ((T (*)(GunAchemistSkill*))(Il2CppBase() + 0x257A87C))(this);
	}
	template <typename T = void> T WeaponSpecial(bool isDown) {
		return ((T (*)(GunAchemistSkill*, bool))(Il2CppBase() + 0x257A8DC))(this, isDown);
	}
	template <typename T = uintptr_t> T DoubleWeaponBoostStart(uintptr_t* doubleWeapon) {
		return ((T (*)(GunAchemistSkill*, uintptr_t*))(Il2CppBase() + 0x257AB54))(this, doubleWeapon);
	}
	template <typename T = void> T DoubleWeaponBoostEnd() {
		return ((T (*)(GunAchemistSkill*))(Il2CppBase() + 0x257ABCC))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(GunAchemistSkill*))(Il2CppBase() + 0x257AFFC))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnDestroy() {
		return ((T (*)(GunAchemistSkill*))(Il2CppBase() + 0x257B004))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(GunAchemistSkill*))(Il2CppBase() + 0x257B00C))(this);
	}
	template <typename T = bool> T iFixBaseProxy_IsHold() {
		return ((T (*)(GunAchemistSkill*))(Il2CppBase() + 0x257B014))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetAttack(bool P0, bool P1) {
		return ((T (*)(GunAchemistSkill*, bool, bool))(Il2CppBase() + 0x257B01C))(this, P0, P1);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_GetItemName() {
		return ((T (*)(GunAchemistSkill*))(Il2CppBase() + 0x257B02C))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnSwitchWeapon(bool P0, bool P1) {
		return ((T (*)(GunAchemistSkill*, bool, bool))(Il2CppBase() + 0x257B034))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_SetWeaponFront(uintptr_t P0, int32_t P1) {
		return ((T (*)(GunAchemistSkill*, uintptr_t, int32_t))(Il2CppBase() + 0x257B044))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_StartUseWeapon() {
		return ((T (*)(GunAchemistSkill*))(Il2CppBase() + 0x257B04C))(this);
	}
	template <typename T = void> T iFixBaseProxy_DropWeapon(int32_t P0) {
		return ((T (*)(GunAchemistSkill*, int32_t))(Il2CppBase() + 0x257B054))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_SetBackPosition(Il2CppVector3 P0, float P1, int32_t P2) {
		return ((T (*)(GunAchemistSkill*, Il2CppVector3, float, int32_t))(Il2CppBase() + 0x257B05C))(this, P0, P1, P2);
	}
	template <typename T = void> T iFixBaseProxy_ShowWeaponName(float P0) {
		return ((T (*)(GunAchemistSkill*, float))(Il2CppBase() + 0x257B064))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_ShowItemInfo() {
		return ((T (*)(GunAchemistSkill*))(Il2CppBase() + 0x257B06C))(this);
	}
	template <typename T = void> T iFixBaseProxy_CopyFrom(uintptr_t P0) {
		return ((T (*)(GunAchemistSkill*, uintptr_t))(Il2CppBase() + 0x257B074))(this, P0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T iFixBaseProxy_get_texts() {
		return ((T (*)(GunAchemistSkill*))(Il2CppBase() + 0x257B07C))(this);
	}

};

}
