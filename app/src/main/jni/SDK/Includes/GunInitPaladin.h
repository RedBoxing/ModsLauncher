#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunInitPaladin
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunInitPaladin"));
	}

	template <typename T = float> T& offset() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = float> T& max_offset() {
		return *(T*)((uintptr_t)this + 0x1D4);
	}
	template <typename T = float> T& scale() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = float> T& max_scale() {
		return *(T*)((uintptr_t)this + 0x1DC);
	}
	template <typename T = int32_t> T& max_atk_add() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = int32_t> T& max_critical_add() {
		return *(T*)((uintptr_t)this + 0x1E4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& extraSortingLayers() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = uintptr_t> T& hilt() {
		return *(T*)((uintptr_t)this + 0x1F0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& link_list() {
		return *(T*)((uintptr_t)this + 0x1F8);
	}
	template <typename T = uintptr_t> T& sword() {
		return *(T*)((uintptr_t)this + 0x200);
	}
	template <typename T = bool> T& hold_while_atk() {
		return *(T*)((uintptr_t)this + 0x208);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(GunInitPaladin*))(Il2CppBase() + 0x2271434))(this);
	}
	template <typename T = void> T set_max(bool value) {
		return ((T (*)(GunInitPaladin*, bool))(Il2CppBase() + 0x2271748))(this, value);
	}
	template <typename T = bool> T get_max() {
		return ((T (*)(GunInitPaladin*))(Il2CppBase() + 0x2271804))(this);
	}
	template <typename T = void> T set_back_state(bool value) {
		return ((T (*)(GunInitPaladin*, bool))(Il2CppBase() + 0x22718A8))(this, value);
	}
	template <typename T = void> T HoldMax() {
		return ((T (*)(GunInitPaladin*))(Il2CppBase() + 0x2271964))(this);
	}
	template <typename T = void> T StopWeapon() {
		return ((T (*)(GunInitPaladin*))(Il2CppBase() + 0x22719C8))(this);
	}
	template <typename T = void> T SetWeaponBack(uintptr_t parent) {
		return ((T (*)(GunInitPaladin*, uintptr_t))(Il2CppBase() + 0x2271A38))(this, parent);
	}
	template <typename T = void> T SetWeaponFront(uintptr_t parent, int32_t target_layer) {
		return ((T (*)(GunInitPaladin*, uintptr_t, int32_t))(Il2CppBase() + 0x2271AC0))(this, parent, target_layer);
	}
	template <typename T = void> T AttackStop() {
		return ((T (*)(GunInitPaladin*))(Il2CppBase() + 0x2271B54))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunInitPaladin*))(Il2CppBase() + 0x2271C4C))(this);
	}
	template <typename T = void> T CreateBullet(float scale, float offset, int32_t critical, int32_t atk) {
		return ((T (*)(GunInitPaladin*, float, float, int32_t, int32_t))(Il2CppBase() + 0x2271D70))(this, scale, offset, critical, atk);
	}
	template <typename T = void> T SpriteLayerSetting(int32_t target_layer, bool is_pet) {
		return ((T (*)(GunInitPaladin*, int32_t, bool))(Il2CppBase() + 0x2272110))(this, target_layer, is_pet);
	}
	template <typename T = void> T SetAttack(bool value1, bool manual) {
		return ((T (*)(GunInitPaladin*, bool, bool))(Il2CppBase() + 0x22722BC))(this, value1, manual);
	}
	template <typename T = bool> T IsHold() {
		return ((T (*)(GunInitPaladin*))(Il2CppBase() + 0x2272384))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_texts() {
		return ((T (*)(GunInitPaladin*))(Il2CppBase() + 0x22723E4))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(GunInitPaladin*))(Il2CppBase() + 0x22727B8))(this);
	}
	template <typename T = void> T iFixBaseProxy_HoldMax() {
		return ((T (*)(GunInitPaladin*))(Il2CppBase() + 0x22727C0))(this);
	}
	template <typename T = void> T iFixBaseProxy_StopWeapon() {
		return ((T (*)(GunInitPaladin*))(Il2CppBase() + 0x22727C8))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetWeaponBack(uintptr_t P0) {
		return ((T (*)(GunInitPaladin*, uintptr_t))(Il2CppBase() + 0x22727D0))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_SetWeaponFront(uintptr_t P0, int32_t P1) {
		return ((T (*)(GunInitPaladin*, uintptr_t, int32_t))(Il2CppBase() + 0x22727D8))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_AttackStop() {
		return ((T (*)(GunInitPaladin*))(Il2CppBase() + 0x22727E0))(this);
	}
	template <typename T = void> T iFixBaseProxy_SpriteLayerSetting(int32_t P0, bool P1) {
		return ((T (*)(GunInitPaladin*, int32_t, bool))(Il2CppBase() + 0x22727E8))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_SetAttack(bool P0, bool P1) {
		return ((T (*)(GunInitPaladin*, bool, bool))(Il2CppBase() + 0x22727F4))(this, P0, P1);
	}
	template <typename T = bool> T iFixBaseProxy_IsHold() {
		return ((T (*)(GunInitPaladin*))(Il2CppBase() + 0x2272804))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T iFixBaseProxy_get_texts() {
		return ((T (*)(GunInitPaladin*))(Il2CppBase() + 0x227280C))(this);
	}

};

}
