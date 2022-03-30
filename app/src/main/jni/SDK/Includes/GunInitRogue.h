#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunInitRogue
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunInitRogue"));
	}

	template <typename T = Il2CppList<Il2CppString*>*> T& startTriggers() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& bullet2() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = uintptr_t> T& right_hand_bullet() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = uintptr_t> T& left_hand_bullet() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = uintptr_t> T& sting_bullet() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = uintptr_t> T& left_sting_bullet() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = uintptr_t> T& audio_clip2() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = float> T& melee_distance() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = float> T& melee_right_scale() {
		return *(T*)((uintptr_t)this + 0x1DC);
	}
	template <typename T = float> T& melee_left_scale() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = int32_t> T& atk_force() {
		return *(T*)((uintptr_t)this + 0x1E4);
	}
	template <typename T = float> T& throw_offset() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = int32_t> T& sting_atk() {
		return *(T*)((uintptr_t)this + 0x1EC);
	}
	template <typename T = int32_t> T& sword_atk() {
		return *(T*)((uintptr_t)this + 0x1F0);
	}
	template <typename T = uintptr_t> T& left() {
		return *(T*)((uintptr_t)this + 0x1F8);
	}
	template <typename T = uintptr_t> T& right() {
		return *(T*)((uintptr_t)this + 0x200);
	}
	template <typename T = uintptr_t> T& gun_point_sting() {
		return *(T*)((uintptr_t)this + 0x208);
	}
	template <typename T = uintptr_t> T& gun_point_throw_left() {
		return *(T*)((uintptr_t)this + 0x210);
	}
	template <typename T = uintptr_t> T& right_renderer() {
		return *(T*)((uintptr_t)this + 0x218);
	}
	template <typename T = uintptr_t> T& left_renderer() {
		return *(T*)((uintptr_t)this + 0x220);
	}
	template <typename T = int32_t> T& previous_melee_mode() {
		return *(T*)((uintptr_t)this + 0x228);
	}
	template <typename T = int32_t> T& throw_consume() {
		return *(T*)((uintptr_t)this + 0x22C);
	}
	template <typename T = bool> T& forceMelle() {
		return *(T*)((uintptr_t)this + 0x230);
	}

	template <typename T = int32_t> T get_StingAtk() {
		return ((T (*)(GunInitRogue*))(Il2CppBase() + 0x22742E4))(this);
	}
	template <typename T = int32_t> T get_SwordAtk() {
		return ((T (*)(GunInitRogue*))(Il2CppBase() + 0x22743F4))(this);
	}
	template <typename T = void> T set_atk_count(int32_t value) {
		return ((T (*)(GunInitRogue*, int32_t))(Il2CppBase() + 0x2274504))(this, value);
	}
	template <typename T = int32_t> T get_atk_count() {
		return ((T (*)(GunInitRogue*))(Il2CppBase() + 0x22745C0))(this);
	}
	template <typename T = void> T set_atk_count_throw(int32_t value) {
		return ((T (*)(GunInitRogue*, int32_t))(Il2CppBase() + 0x2274664))(this, value);
	}
	template <typename T = int32_t> T get_atk_count_throw() {
		return ((T (*)(GunInitRogue*))(Il2CppBase() + 0x2274720))(this);
	}
	template <typename T = bool> T get_should_melee() {
		return ((T (*)(GunInitRogue*))(Il2CppBase() + 0x22747C4))(this);
	}
	template <typename T = bool> T get_isSpecial() {
		return ((T (*)(GunInitRogue*))(Il2CppBase() + 0x2274A04))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GunInitRogue*))(Il2CppBase() + 0x2274A64))(this);
	}
	template <typename T = void> T AttackStop() {
		return ((T (*)(GunInitRogue*))(Il2CppBase() + 0x2274D18))(this);
	}
	template <typename T = void> T CheckMode() {
		return ((T (*)(GunInitRogue*))(Il2CppBase() + 0x2274D88))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunInitRogue*))(Il2CppBase() + 0x2274EB4))(this);
	}
	template <typename T = void> T Attack2() {
		return ((T (*)(GunInitRogue*))(Il2CppBase() + 0x2275510))(this);
	}
	template <typename T = void> T Attack3() {
		return ((T (*)(GunInitRogue*))(Il2CppBase() + 0x2275758))(this);
	}
	template <typename T = void> T ThrowAttack1() {
		return ((T (*)(GunInitRogue*))(Il2CppBase() + 0x22758A8))(this);
	}
	template <typename T = void> T ThrowAttack2() {
		return ((T (*)(GunInitRogue*))(Il2CppBase() + 0x2275DA0))(this);
	}
	template <typename T = void> T SwordAttack(uintptr_t bullet, Il2CppVector3 position, uintptr_t audio_clip, bool is_reverse, int32_t atk, int32_t force, float scale) {
		return ((T (*)(GunInitRogue*, uintptr_t, Il2CppVector3, uintptr_t, bool, int32_t, int32_t, float))(Il2CppBase() + 0x22750FC))(this, bullet, position, audio_clip, is_reverse, atk, force, scale);
	}
	template <typename T = void> T ThrowAttack(uintptr_t bulletProto, Il2CppVector3 position, float throw_offset) {
		return ((T (*)(GunInitRogue*, uintptr_t, Il2CppVector3, float))(Il2CppBase() + 0x227595C))(this, bulletProto, position, throw_offset);
	}
	template <typename T = float> T GetThrowAngle(float offset) {
		return ((T (*)(GunInitRogue*, float))(Il2CppBase() + 0x2275E40))(this, offset);
	}
	template <typename T = void> T StartUseWeapon() {
		return ((T (*)(GunInitRogue*))(Il2CppBase() + 0x22760EC))(this);
	}
	template <typename T = void> T StopWeapon() {
		return ((T (*)(GunInitRogue*))(Il2CppBase() + 0x227626C))(this);
	}
	template <typename T = void> T LockedProcess(float fixed_angle) {
		return ((T (*)(GunInitRogue*, float))(Il2CppBase() + 0x2276494))(this, fixed_angle);
	}
	template <typename T = void> T OnReborn() {
		return ((T (*)(GunInitRogue*))(Il2CppBase() + 0x22765FC))(this);
	}
	template <typename T = void> T SpriteLayerSetting(int32_t target_layer, bool is_pet) {
		return ((T (*)(GunInitRogue*, int32_t, bool))(Il2CppBase() + 0x227667C))(this, target_layer, is_pet);
	}
	template <typename T = void> T SetAttack(bool value1, bool manual) {
		return ((T (*)(GunInitRogue*, bool, bool))(Il2CppBase() + 0x22767D4))(this, value1, manual);
	}
	template <typename T = uintptr_t> T DoubleWeaponBoostStart(uintptr_t* doubleWeapon) {
		return ((T (*)(GunInitRogue*, uintptr_t*))(Il2CppBase() + 0x227692C))(this, doubleWeapon);
	}
	template <typename T = void> T DoubleWeaponBoostEnd() {
		return ((T (*)(GunInitRogue*))(Il2CppBase() + 0x22769BC))(this);
	}
	template <typename T = bool> T IsHold() {
		return ((T (*)(GunInitRogue*))(Il2CppBase() + 0x2276A30))(this);
	}
	template <typename T = void> T PositionInit() {
		return ((T (*)(GunInitRogue*))(Il2CppBase() + 0x2276358))(this);
	}
	template <typename T = void> T WeaponSpecial(bool isDown) {
		return ((T (*)(GunInitRogue*, bool))(Il2CppBase() + 0x2276A90))(this, isDown);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_texts() {
		return ((T (*)(GunInitRogue*))(Il2CppBase() + 0x2276B1C))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(GunInitRogue*))(Il2CppBase() + 0x2276FE0))(this);
	}
	template <typename T = void> T iFixBaseProxy_AttackStop() {
		return ((T (*)(GunInitRogue*))(Il2CppBase() + 0x2276FE8))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartUseWeapon() {
		return ((T (*)(GunInitRogue*))(Il2CppBase() + 0x2276FF0))(this);
	}
	template <typename T = void> T iFixBaseProxy_StopWeapon() {
		return ((T (*)(GunInitRogue*))(Il2CppBase() + 0x2276FF8))(this);
	}
	template <typename T = void> T iFixBaseProxy_LockedProcess(float P0) {
		return ((T (*)(GunInitRogue*, float))(Il2CppBase() + 0x2277000))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnReborn() {
		return ((T (*)(GunInitRogue*))(Il2CppBase() + 0x2277008))(this);
	}
	template <typename T = void> T iFixBaseProxy_SpriteLayerSetting(int32_t P0, bool P1) {
		return ((T (*)(GunInitRogue*, int32_t, bool))(Il2CppBase() + 0x2277010))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_SetAttack(bool P0, bool P1) {
		return ((T (*)(GunInitRogue*, bool, bool))(Il2CppBase() + 0x227701C))(this, P0, P1);
	}
	template <typename T = bool> T iFixBaseProxy_IsHold() {
		return ((T (*)(GunInitRogue*))(Il2CppBase() + 0x227702C))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T iFixBaseProxy_get_texts() {
		return ((T (*)(GunInitRogue*))(Il2CppBase() + 0x2277034))(this);
	}

};

}
