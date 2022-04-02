#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunHeavyPunch
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunHeavyPunch"));
	}

	template <typename T = float> T& max_time() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = uintptr_t> T& reloadGO() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& holdClip() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = int32_t> T& atttackForce() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = uintptr_t> T& defaultSprite() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = uintptr_t> T& holdMaxSprite() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = float> T& dashForce() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = int32_t> T& dashMaxForce() {
		return *(T*)((uintptr_t)this + 0x1CC);
	}
	template <typename T = float> T& checkRadius() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = float> T& expMaxDistance() {
		return *(T*)((uintptr_t)this + 0x1D4);
	}
	template <typename T = float> T& expDelay() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = uintptr_t> T& drillTransform() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = bool> T& hold() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = uintptr_t> T& theReloadGO() {
		return *(T*)((uintptr_t)this + 0x1F0);
	}
	template <typename T = float> T& holdSpeed() {
		return *(T*)((uintptr_t)this + 0x1F8);
	}
	template <typename T = float> T& a_time() {
		return *(T*)((uintptr_t)this + 0x1FC);
	}
	template <typename T = uintptr_t> T& leftTransform() {
		return *(T*)((uintptr_t)this + 0x200);
	}
	template <typename T = uintptr_t> T& rightTransform() {
		return *(T*)((uintptr_t)this + 0x208);
	}
	template <typename T = uintptr_t> T& right_renderer() {
		return *(T*)((uintptr_t)this + 0x210);
	}
	template <typename T = uintptr_t> T& left_renderer() {
		return *(T*)((uintptr_t)this + 0x218);
	}
	template <typename T = uintptr_t> T& gun_point2() {
		return *(T*)((uintptr_t)this + 0x220);
	}
	template <typename T = bool> T& isDash() {
		return *(T*)((uintptr_t)this + 0x228);
	}
	template <typename T = Il2CppVector2> T& dashDir() {
		return *(T*)((uintptr_t)this + 0x22C);
	}
	template <typename T = bool> T& isLock() {
		return *(T*)((uintptr_t)this + 0x234);
	}
	template <typename T = void*> T& rigidBodyCache() {
		return *(T*)((uintptr_t)this + 0x238);
	}
	template <typename T = float> T& dashMinTime() {
		return *(T*)((uintptr_t)this + 0x240);
	}
	template <typename T = int32_t> T& dashFrameCount() {
		return *(T*)((uintptr_t)this + 0x244);
	}
	template <typename T = float> static T& dashSpeedMin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& dashSpeedMinTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& dashMinFrameCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& raycastHits() {
		return *(T*)((uintptr_t)this + 0x248);
	}
	template <typename T = uintptr_t> T& bulletGO() {
		return *(T*)((uintptr_t)this + 0x250);
	}
	template <typename T = int32_t> static T& HoldStop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T get_holdMax() {
		return ((T (*)(GunHeavyPunch*))(Il2CppBase() + 0x249F560))(this);
	}
	template <typename T = void> T set_holdMax(bool value) {
		return ((T (*)(GunHeavyPunch*, bool))(Il2CppBase() + 0x249F604))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GunHeavyPunch*))(Il2CppBase() + 0x249F6C0))(this);
	}
	template <typename T = uintptr_t> T get_default_type() {
		return ((T (*)(GunHeavyPunch*))(Il2CppBase() + 0x249F8B0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GunHeavyPunch*))(Il2CppBase() + 0x249F910))(this);
	}
	template <typename T = void> T UpdateHold() {
		return ((T (*)(GunHeavyPunch*))(Il2CppBase() + 0x249F978))(this);
	}
	template <typename T = void> T UpdateDash() {
		return ((T (*)(GunHeavyPunch*))(Il2CppBase() + 0x249FC80))(this);
	}
	template <typename T = void> T StartDash() {
		return ((T (*)(GunHeavyPunch*))(Il2CppBase() + 0x24A0774))(this);
	}
	template <typename T = void> T CheckBox(int32_t count) {
		return ((T (*)(GunHeavyPunch*, int32_t))(Il2CppBase() + 0x24A00F8))(this, count);
	}
	template <typename T = void> T CheckEnemy(int32_t count) {
		return ((T (*)(GunHeavyPunch*, int32_t))(Il2CppBase() + 0x24A0518))(this, count);
	}
	template <typename T = void> T EndDash() {
		return ((T (*)(GunHeavyPunch*))(Il2CppBase() + 0x24A0358))(this);
	}
	template <typename T = uintptr_t> T CreateEndExp() {
		return ((T (*)(GunHeavyPunch*))(Il2CppBase() + 0x24A0B6C))(this);
	}
	template <typename T = void> T HoldMax() {
		return ((T (*)(GunHeavyPunch*))(Il2CppBase() + 0x24A0028))(this);
	}
	template <typename T = void> T SetAttack(bool value1, bool manual) {
		return ((T (*)(GunHeavyPunch*, bool, bool))(Il2CppBase() + 0x24A0C4C))(this, value1, manual);
	}
	template <typename T = void> T MakeConsume() {
		return ((T (*)(GunHeavyPunch*))(Il2CppBase() + 0x24A0DA0))(this);
	}
	template <typename T = void> T AttackKeyUp(bool manual) {
		return ((T (*)(GunHeavyPunch*, bool))(Il2CppBase() + 0x24A0E44))(this, manual);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunHeavyPunch*))(Il2CppBase() + 0x24A0F58))(this);
	}
	template <typename T = void> T Attack2() {
		return ((T (*)(GunHeavyPunch*))(Il2CppBase() + 0x24A1370))(this);
	}
	template <typename T = void> T CreateBullet(Il2CppVector3 position) {
		return ((T (*)(GunHeavyPunch*, Il2CppVector3))(Il2CppBase() + 0x24A0FD4))(this, position);
	}
	template <typename T = bool> T IsHold() {
		return ((T (*)(GunHeavyPunch*))(Il2CppBase() + 0x24A13EC))(this);
	}
	template <typename T = void> T StartUseWeapon() {
		return ((T (*)(GunHeavyPunch*))(Il2CppBase() + 0x24A144C))(this);
	}
	template <typename T = void> T StopWeapon() {
		return ((T (*)(GunHeavyPunch*))(Il2CppBase() + 0x24A14FC))(this);
	}
	template <typename T = void> T SpriteLayerSetting(int32_t target_layer, bool isPet) {
		return ((T (*)(GunHeavyPunch*, int32_t, bool))(Il2CppBase() + 0x24A1654))(this, target_layer, isPet);
	}
	template <typename T = void> T LockedProcess(float fixed_angle) {
		return ((T (*)(GunHeavyPunch*, float))(Il2CppBase() + 0x24A176C))(this, fixed_angle);
	}
	template <typename T = float> T GetMaxChargeTime() {
		return ((T (*)(GunHeavyPunch*))(Il2CppBase() + 0x24A18F4))(this);
	}
	template <typename T = uintptr_t> T DoubleWeaponBoostStart(uintptr_t* doubleWeapon) {
		return ((T (*)(GunHeavyPunch*, uintptr_t*))(Il2CppBase() + 0x24A1954))(this, doubleWeapon);
	}
	template <typename T = void> T DoubleWeaponBoostEnd() {
		return ((T (*)(GunHeavyPunch*))(Il2CppBase() + 0x24A19E4))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_texts() {
		return ((T (*)(GunHeavyPunch*))(Il2CppBase() + 0x24A1A58))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(GunHeavyPunch*))(Il2CppBase() + 0x24A1E88))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_default_type() {
		return ((T (*)(GunHeavyPunch*))(Il2CppBase() + 0x24A1E90))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetAttack(bool P0, bool P1) {
		return ((T (*)(GunHeavyPunch*, bool, bool))(Il2CppBase() + 0x24A1E98))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_MakeConsume() {
		return ((T (*)(GunHeavyPunch*))(Il2CppBase() + 0x24A1EA8))(this);
	}
	template <typename T = void> T iFixBaseProxy_AttackKeyUp(bool P0) {
		return ((T (*)(GunHeavyPunch*, bool))(Il2CppBase() + 0x24A1EB0))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_IsHold() {
		return ((T (*)(GunHeavyPunch*))(Il2CppBase() + 0x24A1EBC))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartUseWeapon() {
		return ((T (*)(GunHeavyPunch*))(Il2CppBase() + 0x24A1EC4))(this);
	}
	template <typename T = void> T iFixBaseProxy_StopWeapon() {
		return ((T (*)(GunHeavyPunch*))(Il2CppBase() + 0x24A1ECC))(this);
	}
	template <typename T = void> T iFixBaseProxy_SpriteLayerSetting(int32_t P0, bool P1) {
		return ((T (*)(GunHeavyPunch*, int32_t, bool))(Il2CppBase() + 0x24A1ED4))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_LockedProcess(float P0) {
		return ((T (*)(GunHeavyPunch*, float))(Il2CppBase() + 0x24A1EE0))(this, P0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T iFixBaseProxy_get_texts() {
		return ((T (*)(GunHeavyPunch*))(Il2CppBase() + 0x24A1EE8))(this);
	}

};

}
