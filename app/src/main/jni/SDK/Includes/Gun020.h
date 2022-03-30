#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Gun020
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Gun020"));
	}

	template <typename T = uintptr_t> T& clip_shoot_max() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& clip_hold() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = uintptr_t> T& clip_big() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = uintptr_t> T& hold_effect_obj() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = int32_t> T& force() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = float> T& a_size_max() {
		return *(T*)((uintptr_t)this + 0x1C4);
	}
	template <typename T = float> T& a_time() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = float> T& max_time() {
		return *(T*)((uintptr_t)this + 0x1CC);
	}
	template <typename T = uintptr_t> T& reload_obj() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = int32_t> T& reflectCount() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = uintptr_t> T& the_reload_obj() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = bool> T& hold_in() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = uintptr_t> T& audio_source() {
		return *(T*)((uintptr_t)this + 0x1F0);
	}
	template <typename T = bool> T& big_atk() {
		return *(T*)((uintptr_t)this + 0x1F8);
	}
	template <typename T = float> T& holdSpeed() {
		return *(T*)((uintptr_t)this + 0x1FC);
	}

	template <typename T = uintptr_t> T get_default_type() {
		return ((T (*)(Gun020*))(Il2CppBase() + 0x2576164))(this);
	}
	template <typename T = uintptr_t> T get_bulletDelta() {
		return ((T (*)(Gun020*))(Il2CppBase() + 0x25761C4))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(Gun020*))(Il2CppBase() + 0x2576228))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(Gun020*))(Il2CppBase() + 0x25762E4))(this);
	}
	template <typename T = void> T SetAttack(bool value1, bool manual) {
		return ((T (*)(Gun020*, bool, bool))(Il2CppBase() + 0x2576458))(this, value1, manual);
	}
	template <typename T = void> T AttackKeyUp(bool manual) {
		return ((T (*)(Gun020*, bool))(Il2CppBase() + 0x2576508))(this, manual);
	}
	template <typename T = void> T TurnActivatex() {
		return ((T (*)(Gun020*))(Il2CppBase() + 0x25765E4))(this);
	}
	template <typename T = void> T AttackStart() {
		return ((T (*)(Gun020*))(Il2CppBase() + 0x25766A0))(this);
	}
	template <typename T = void> T AttackStop() {
		return ((T (*)(Gun020*))(Il2CppBase() + 0x2576908))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(Gun020*))(Il2CppBase() + 0x25769F8))(this);
	}
	template <typename T = void> T StopWeapon() {
		return ((T (*)(Gun020*))(Il2CppBase() + 0x2577060))(this);
	}
	template <typename T = void> T MakeConsume() {
		return ((T (*)(Gun020*))(Il2CppBase() + 0x25772A0))(this);
	}
	template <typename T = void> T CreateBullet(float percentage) {
		return ((T (*)(Gun020*, float))(Il2CppBase() + 0x2576AE8))(this, percentage);
	}
	template <typename T = bool> T IsHold() {
		return ((T (*)(Gun020*))(Il2CppBase() + 0x2577460))(this);
	}
	template <typename T = void> T OnReborn() {
		return ((T (*)(Gun020*))(Il2CppBase() + 0x25774C0))(this);
	}
	template <typename T = void> T SpriteLayerSetting(int32_t target_layer, bool is_pet) {
		return ((T (*)(Gun020*, int32_t, bool))(Il2CppBase() + 0x25775C8))(this, target_layer, is_pet);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_texts() {
		return ((T (*)(Gun020*))(Il2CppBase() + 0x25777A4))(this);
	}
	template <typename T = float> T GetMaxChargeTime() {
		return ((T (*)(Gun020*))(Il2CppBase() + 0x2577AD4))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_default_type() {
		return ((T (*)(Gun020*))(Il2CppBase() + 0x2577B54))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(Gun020*))(Il2CppBase() + 0x2577B5C))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetAttack(bool P0, bool P1) {
		return ((T (*)(Gun020*, bool, bool))(Il2CppBase() + 0x2577B64))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_AttackKeyUp(bool P0) {
		return ((T (*)(Gun020*, bool))(Il2CppBase() + 0x2577B74))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_AttackStart() {
		return ((T (*)(Gun020*))(Il2CppBase() + 0x2577B80))(this);
	}
	template <typename T = void> T iFixBaseProxy_AttackStop() {
		return ((T (*)(Gun020*))(Il2CppBase() + 0x2577B88))(this);
	}
	template <typename T = void> T iFixBaseProxy_StopWeapon() {
		return ((T (*)(Gun020*))(Il2CppBase() + 0x2577B90))(this);
	}
	template <typename T = void> T iFixBaseProxy_MakeConsume() {
		return ((T (*)(Gun020*))(Il2CppBase() + 0x2577B98))(this);
	}
	template <typename T = bool> T iFixBaseProxy_IsHold() {
		return ((T (*)(Gun020*))(Il2CppBase() + 0x2577BA0))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnReborn() {
		return ((T (*)(Gun020*))(Il2CppBase() + 0x2577BA8))(this);
	}
	template <typename T = void> T iFixBaseProxy_SpriteLayerSetting(int32_t P0, bool P1) {
		return ((T (*)(Gun020*, int32_t, bool))(Il2CppBase() + 0x2577BB0))(this, P0, P1);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T iFixBaseProxy_get_texts() {
		return ((T (*)(Gun020*))(Il2CppBase() + 0x2577BBC))(this);
	}

};

}
