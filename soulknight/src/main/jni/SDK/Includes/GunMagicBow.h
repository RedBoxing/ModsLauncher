#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunMagicBow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunMagicBow"));
	}

	template <typename T = uintptr_t> T& clip_hold() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& s_ide() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = uintptr_t> T& s_atk() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = uintptr_t> T& sprite_render() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = uintptr_t> T& the_bullet() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = int32_t> T& multiCount() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = float> T& a_time() {
		return *(T*)((uintptr_t)this + 0x1CC);
	}
	template <typename T = float> T& max_time() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = uintptr_t> T& reload_obj() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = float> T& holdSpeed() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = uintptr_t> T& the_reload_obj() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = void*> T& _onDelayedBulletRelease() {
		return *(T*)((uintptr_t)this + 0x1F0);
	}

	template <typename T = void*> T get_onDelayedBulletRelease() {
		return ((T (*)(GunMagicBow*))(Il2CppBase() + 0x227F2B8))(this);
	}
	template <typename T = void> T set_onDelayedBulletRelease(void* value) {
		return ((T (*)(GunMagicBow*, void*))(Il2CppBase() + 0x227F318))(this, value);
	}
	template <typename T = uintptr_t> T get_default_type() {
		return ((T (*)(GunMagicBow*))(Il2CppBase() + 0x227F38C))(this);
	}
	template <typename T = uintptr_t> T get_bulletDelta() {
		return ((T (*)(GunMagicBow*))(Il2CppBase() + 0x227F3EC))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GunMagicBow*))(Il2CppBase() + 0x227F490))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GunMagicBow*))(Il2CppBase() + 0x227F570))(this);
	}
	template <typename T = void> T AttackStart() {
		return ((T (*)(GunMagicBow*))(Il2CppBase() + 0x227F65C))(this);
	}
	template <typename T = void> T AttackKeyUp(bool manual) {
		return ((T (*)(GunMagicBow*, bool))(Il2CppBase() + 0x227FB7C))(this, manual);
	}
	template <typename T = void> T AttackStop() {
		return ((T (*)(GunMagicBow*))(Il2CppBase() + 0x227FC68))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunMagicBow*))(Il2CppBase() + 0x227FD7C))(this);
	}
	template <typename T = void> T SetAttack(bool value1, bool manual) {
		return ((T (*)(GunMagicBow*, bool, bool))(Il2CppBase() + 0x22803F0))(this, value1, manual);
	}
	template <typename T = void> T TurnActivatex() {
		return ((T (*)(GunMagicBow*))(Il2CppBase() + 0x22804A0))(this);
	}
	template <typename T = void> T MakeConsume() {
		return ((T (*)(GunMagicBow*))(Il2CppBase() + 0x2280560))(this);
	}
	template <typename T = void> T OnReborn() {
		return ((T (*)(GunMagicBow*))(Il2CppBase() + 0x2280720))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_texts() {
		return ((T (*)(GunMagicBow*))(Il2CppBase() + 0x22808A0))(this);
	}
	template <typename T = bool> T IsHold() {
		return ((T (*)(GunMagicBow*))(Il2CppBase() + 0x2280BE4))(this);
	}
	template <typename T = float> T GetMaxChargeTime() {
		return ((T (*)(GunMagicBow*))(Il2CppBase() + 0x2280C44))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_default_type() {
		return ((T (*)(GunMagicBow*))(Il2CppBase() + 0x2280CC4))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(GunMagicBow*))(Il2CppBase() + 0x2280CCC))(this);
	}
	template <typename T = void> T iFixBaseProxy_AttackStart() {
		return ((T (*)(GunMagicBow*))(Il2CppBase() + 0x2280CD4))(this);
	}
	template <typename T = void> T iFixBaseProxy_AttackKeyUp(bool P0) {
		return ((T (*)(GunMagicBow*, bool))(Il2CppBase() + 0x2280CDC))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_AttackStop() {
		return ((T (*)(GunMagicBow*))(Il2CppBase() + 0x2280CE8))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetAttack(bool P0, bool P1) {
		return ((T (*)(GunMagicBow*, bool, bool))(Il2CppBase() + 0x2280CF0))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_MakeConsume() {
		return ((T (*)(GunMagicBow*))(Il2CppBase() + 0x2280D00))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnReborn() {
		return ((T (*)(GunMagicBow*))(Il2CppBase() + 0x2280D08))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T iFixBaseProxy_get_texts() {
		return ((T (*)(GunMagicBow*))(Il2CppBase() + 0x2280D10))(this);
	}
	template <typename T = bool> T iFixBaseProxy_IsHold() {
		return ((T (*)(GunMagicBow*))(Il2CppBase() + 0x2280D18))(this);
	}

};

}
