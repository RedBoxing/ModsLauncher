#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunInitAssassin
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunInitAssassin"));
	}

	template <typename T = float> T& max_time() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = int32_t> T& max_hold_force() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = float> T& max_hold_atk_speed() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = uintptr_t> T& reload_object() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = int32_t> T& continuousCount() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = int32_t> T& master_skin_index() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = uintptr_t> T& master_sword_bullet() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = float> T& holdSpeed() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = uintptr_t> T& the_reload_object() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = float> T& hold_time() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = bool> T& is_hold() {
		return *(T*)((uintptr_t)this + 0x1D4);
	}
	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = bool> T& is_master_skin() {
		return *(T*)((uintptr_t)this + 0x1DC);
	}

	template <typename T = int32_t> T get_max_hold_critical() {
		return ((T (*)(GunInitAssassin*))(Il2CppBase() + 0x226BCC8))(this);
	}
	template <typename T = float> T get_max_hold_scale() {
		return ((T (*)(GunInitAssassin*))(Il2CppBase() + 0x226BD34))(this);
	}
	template <typename T = int32_t> T get_max_hold_atk() {
		return ((T (*)(GunInitAssassin*))(Il2CppBase() + 0x226BDAC))(this);
	}
	template <typename T = void> T set_hold_max(bool value) {
		return ((T (*)(GunInitAssassin*, bool))(Il2CppBase() + 0x226BE18))(this, value);
	}
	template <typename T = bool> T get_hold_max() {
		return ((T (*)(GunInitAssassin*))(Il2CppBase() + 0x226BED4))(this);
	}
	template <typename T = void> T set_back_state(bool value) {
		return ((T (*)(GunInitAssassin*, bool))(Il2CppBase() + 0x226BF78))(this, value);
	}
	template <typename T = uintptr_t> T get_default_type() {
		return ((T (*)(GunInitAssassin*))(Il2CppBase() + 0x226C034))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GunInitAssassin*))(Il2CppBase() + 0x226C094))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GunInitAssassin*))(Il2CppBase() + 0x226C110))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GunInitAssassin*))(Il2CppBase() + 0x226C2B8))(this);
	}
	template <typename T = void> T SetAttack(bool value1, bool manual) {
		return ((T (*)(GunInitAssassin*, bool, bool))(Il2CppBase() + 0x226C3A8))(this, value1, manual);
	}
	template <typename T = void> T AttackStart() {
		return ((T (*)(GunInitAssassin*))(Il2CppBase() + 0x226C558))(this);
	}
	template <typename T = void> T AttackStop() {
		return ((T (*)(GunInitAssassin*))(Il2CppBase() + 0x226C8A0))(this);
	}
	template <typename T = void> T AttackKeyUp(bool manual) {
		return ((T (*)(GunInitAssassin*, bool))(Il2CppBase() + 0x226C9E8))(this, manual);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunInitAssassin*))(Il2CppBase() + 0x226CAF8))(this);
	}
	template <typename T = void> T Attack2() {
		return ((T (*)(GunInitAssassin*))(Il2CppBase() + 0x226D0E8))(this);
	}
	template <typename T = void> T Attack3() {
		return ((T (*)(GunInitAssassin*))(Il2CppBase() + 0x226D1F4))(this);
	}
	template <typename T = void> T Attack4() {
		return ((T (*)(GunInitAssassin*))(Il2CppBase() + 0x226D3BC))(this);
	}
	template <typename T = void> T Attack_1(bool is_reverse, float speed_factor, int32_t critical, int32_t force, float scale, int32_t atk, uintptr_t bullet) {
		return ((T (*)(GunInitAssassin*, bool, float, int32_t, int32_t, float, int32_t, uintptr_t))(Il2CppBase() + 0x226CC04))(this, is_reverse, speed_factor, critical, force, scale, atk, bullet);
	}
	template <typename T = void> T OnReborn() {
		return ((T (*)(GunInitAssassin*))(Il2CppBase() + 0x226D4A8))(this);
	}
	template <typename T = void> T StopWeapon() {
		return ((T (*)(GunInitAssassin*))(Il2CppBase() + 0x226D51C))(this);
	}
	template <typename T = void> T StateInitialize() {
		return ((T (*)(GunInitAssassin*))(Il2CppBase() + 0x226C784))(this);
	}
	template <typename T = void> T MaxCounting() {
		return ((T (*)(GunInitAssassin*))(Il2CppBase() + 0x226D2E0))(this);
	}
	template <typename T = void> T SetWeaponBack(uintptr_t parent) {
		return ((T (*)(GunInitAssassin*, uintptr_t))(Il2CppBase() + 0x226D5E4))(this, parent);
	}
	template <typename T = void> T SetWeaponFront(uintptr_t parent, int32_t target_layer) {
		return ((T (*)(GunInitAssassin*, uintptr_t, int32_t))(Il2CppBase() + 0x226D66C))(this, parent, target_layer);
	}
	template <typename T = bool> T IsHold() {
		return ((T (*)(GunInitAssassin*))(Il2CppBase() + 0x226D700))(this);
	}
	template <typename T = void> T StartUseWeapon() {
		return ((T (*)(GunInitAssassin*))(Il2CppBase() + 0x226D760))(this);
	}
	template <typename T = float> T GetMaxChargeTime() {
		return ((T (*)(GunInitAssassin*))(Il2CppBase() + 0x226D840))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_default_type() {
		return ((T (*)(GunInitAssassin*))(Il2CppBase() + 0x226D8D0))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(GunInitAssassin*))(Il2CppBase() + 0x226D8D8))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(GunInitAssassin*))(Il2CppBase() + 0x226D8E0))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetAttack(bool P0, bool P1) {
		return ((T (*)(GunInitAssassin*, bool, bool))(Il2CppBase() + 0x226D8E8))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_AttackStart() {
		return ((T (*)(GunInitAssassin*))(Il2CppBase() + 0x226D8F8))(this);
	}
	template <typename T = void> T iFixBaseProxy_AttackStop() {
		return ((T (*)(GunInitAssassin*))(Il2CppBase() + 0x226D900))(this);
	}
	template <typename T = void> T iFixBaseProxy_AttackKeyUp(bool P0) {
		return ((T (*)(GunInitAssassin*, bool))(Il2CppBase() + 0x226D908))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnReborn() {
		return ((T (*)(GunInitAssassin*))(Il2CppBase() + 0x226D914))(this);
	}
	template <typename T = void> T iFixBaseProxy_StopWeapon() {
		return ((T (*)(GunInitAssassin*))(Il2CppBase() + 0x226D91C))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetWeaponBack(uintptr_t P0) {
		return ((T (*)(GunInitAssassin*, uintptr_t))(Il2CppBase() + 0x226D924))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_SetWeaponFront(uintptr_t P0, int32_t P1) {
		return ((T (*)(GunInitAssassin*, uintptr_t, int32_t))(Il2CppBase() + 0x226D92C))(this, P0, P1);
	}
	template <typename T = bool> T iFixBaseProxy_IsHold() {
		return ((T (*)(GunInitAssassin*))(Il2CppBase() + 0x226D934))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartUseWeapon() {
		return ((T (*)(GunInitAssassin*))(Il2CppBase() + 0x226D93C))(this);
	}

};

}
