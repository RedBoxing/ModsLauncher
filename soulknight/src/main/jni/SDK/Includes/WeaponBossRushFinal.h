#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponBossRushFinal
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponBossRushFinal"));
	}

	template <typename T = uintptr_t> T& reload_obj() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& the_reload() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& chargeTime() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = bool> T& hold() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = float> T& wipeAngle() {
		return *(T*)((uintptr_t)this + 0x1BC);
	}
	template <typename T = float> T& holdSpeed() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = float> T& a_time() {
		return *(T*)((uintptr_t)this + 0x1C4);
	}
	template <typename T = bool> T& holdMax() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = int32_t> T& cantAttack() {
		return *(T*)((uintptr_t)this + 0x1CC);
	}
	template <typename T = bool> T& split() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = void*> T& splitCfgGetter() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}

	template <typename T = bool> T get_hold() {
		return ((T (*)(WeaponBossRushFinal*))(Il2CppBase() + 0x436CB70))(this);
	}
	template <typename T = void> T set_hold(bool value) {
		return ((T (*)(WeaponBossRushFinal*, bool))(Il2CppBase() + 0x436CB78))(this, value);
	}
	template <typename T = float> T get_max_time() {
		return ((T (*)(WeaponBossRushFinal*))(Il2CppBase() + 0x436CB84))(this);
	}
	template <typename T = int32_t> T get_realConsume() {
		return ((T (*)(WeaponBossRushFinal*))(Il2CppBase() + 0x436CC24))(this);
	}
	template <typename T = void> T SpriteLayerSetting(int32_t target_layer, Il2CppString* layer_name) {
		return ((T (*)(WeaponBossRushFinal*, int32_t, Il2CppString*))(Il2CppBase() + 0x436CC84))(this, target_layer, layer_name);
	}
	template <typename T = void> T SetBackPosition(Il2CppVector3 local_position, float angle, int32_t target_layer) {
		return ((T (*)(WeaponBossRushFinal*, Il2CppVector3, float, int32_t))(Il2CppBase() + 0x436CD9C))(this, local_position, angle, target_layer);
	}
	template <typename T = void> T Update() {
		return ((T (*)(WeaponBossRushFinal*))(Il2CppBase() + 0x436D010))(this);
	}
	template <typename T = void> T SetAttack(bool value1, bool manual) {
		return ((T (*)(WeaponBossRushFinal*, bool, bool))(Il2CppBase() + 0x436D25C))(this, value1, manual);
	}
	template <typename T = void> T AttackStart() {
		return ((T (*)(WeaponBossRushFinal*))(Il2CppBase() + 0x436D318))(this);
	}
	template <typename T = void> T AttackStop() {
		return ((T (*)(WeaponBossRushFinal*))(Il2CppBase() + 0x436D4B4))(this);
	}
	template <typename T = void> T AttackKeyUp(bool manual) {
		return ((T (*)(WeaponBossRushFinal*, bool))(Il2CppBase() + 0x436D5DC))(this, manual);
	}
	template <typename T = void> T MakeConsume() {
		return ((T (*)(WeaponBossRushFinal*))(Il2CppBase() + 0x436D7B0))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(WeaponBossRushFinal*))(Il2CppBase() + 0x436D854))(this);
	}
	template <typename T = void> T StopWeapon() {
		return ((T (*)(WeaponBossRushFinal*))(Il2CppBase() + 0x436E2DC))(this);
	}
	template <typename T = bool> T IsHold() {
		return ((T (*)(WeaponBossRushFinal*))(Il2CppBase() + 0x436E3E0))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_texts() {
		return ((T (*)(WeaponBossRushFinal*))(Il2CppBase() + 0x436E440))(this);
	}
	template <typename T = float> T GetMaxChargeTime() {
		return ((T (*)(WeaponBossRushFinal*))(Il2CppBase() + 0x436E6F4))(this);
	}
	template <typename T = void> T StartSplit(void* splitConfigGetter) {
		return ((T (*)(WeaponBossRushFinal*, void*))(Il2CppBase() + 0x436E754))(this, splitConfigGetter);
	}
	template <typename T = void> T EndSplit() {
		return ((T (*)(WeaponBossRushFinal*))(Il2CppBase() + 0x436E7D0))(this);
	}
	template <typename T = int32_t> T iFixBaseProxy_get_realConsume() {
		return ((T (*)(WeaponBossRushFinal*))(Il2CppBase() + 0x436E848))(this);
	}
	template <typename T = void> T iFixBaseProxy_SpriteLayerSetting(int32_t P0, Il2CppString* P1) {
		return ((T (*)(WeaponBossRushFinal*, int32_t, Il2CppString*))(Il2CppBase() + 0x436E850))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_SetBackPosition(Il2CppVector3 P0, float P1, int32_t P2) {
		return ((T (*)(WeaponBossRushFinal*, Il2CppVector3, float, int32_t))(Il2CppBase() + 0x436E858))(this, P0, P1, P2);
	}
	template <typename T = void> T iFixBaseProxy_SetAttack(bool P0, bool P1) {
		return ((T (*)(WeaponBossRushFinal*, bool, bool))(Il2CppBase() + 0x436E860))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_AttackStart() {
		return ((T (*)(WeaponBossRushFinal*))(Il2CppBase() + 0x436E870))(this);
	}
	template <typename T = void> T iFixBaseProxy_AttackStop() {
		return ((T (*)(WeaponBossRushFinal*))(Il2CppBase() + 0x436E878))(this);
	}
	template <typename T = void> T iFixBaseProxy_AttackKeyUp(bool P0) {
		return ((T (*)(WeaponBossRushFinal*, bool))(Il2CppBase() + 0x436E880))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_MakeConsume() {
		return ((T (*)(WeaponBossRushFinal*))(Il2CppBase() + 0x436E88C))(this);
	}
	template <typename T = void> T iFixBaseProxy_StopWeapon() {
		return ((T (*)(WeaponBossRushFinal*))(Il2CppBase() + 0x436E894))(this);
	}
	template <typename T = bool> T iFixBaseProxy_IsHold() {
		return ((T (*)(WeaponBossRushFinal*))(Il2CppBase() + 0x436E89C))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T iFixBaseProxy_get_texts() {
		return ((T (*)(WeaponBossRushFinal*))(Il2CppBase() + 0x436E8A4))(this);
	}

};

}
