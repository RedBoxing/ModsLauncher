#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Gun007
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Gun007"));
	}

	template <typename T = uintptr_t> T& clip_hold() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& clip_big() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = uintptr_t> T& the_bullet() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = int32_t> T& multiCount() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = int32_t> T& continuousCount() {
		return *(T*)((uintptr_t)this + 0x1BC);
	}
	template <typename T = float> T& a_interval() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = int32_t> T& angle() {
		return *(T*)((uintptr_t)this + 0x1C4);
	}
	template <typename T = float> T& a_time() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = float> T& max_time() {
		return *(T*)((uintptr_t)this + 0x1CC);
	}
	template <typename T = float> T& holdSpeed() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = uintptr_t> T& reload_obj() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = float> T& inactiveTime() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = uintptr_t> T& the_reload_obj() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = uintptr_t> T& audio_source() {
		return *(T*)((uintptr_t)this + 0x1F0);
	}
	template <typename T = void*> T& _onDelayedBulletRelease() {
		return *(T*)((uintptr_t)this + 0x1F8);
	}

	template <typename T = bool> T get_is_shotgun_type() {
		return ((T (*)(Gun007*))(Il2CppBase() + 0x46235F8))(this);
	}
	template <typename T = bool> T get_isContinurous() {
		return ((T (*)(Gun007*))(Il2CppBase() + 0x4623660))(this);
	}
	template <typename T = uintptr_t> T get_bulletDelta() {
		return ((T (*)(Gun007*))(Il2CppBase() + 0x46236DC))(this);
	}
	template <typename T = void*> T get_onDelayedBulletRelease() {
		return ((T (*)(Gun007*))(Il2CppBase() + 0x4623740))(this);
	}
	template <typename T = void> T set_onDelayedBulletRelease(void* value) {
		return ((T (*)(Gun007*, void*))(Il2CppBase() + 0x46237A0))(this, value);
	}
	template <typename T = uintptr_t> T get_default_type() {
		return ((T (*)(Gun007*))(Il2CppBase() + 0x4623814))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(Gun007*))(Il2CppBase() + 0x4623874))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(Gun007*))(Il2CppBase() + 0x4623930))(this);
	}
	template <typename T = void> T SetAttack(bool value1, bool manual) {
		return ((T (*)(Gun007*, bool, bool))(Il2CppBase() + 0x4623B84))(this, value1, manual);
	}
	template <typename T = void> T AttackStart() {
		return ((T (*)(Gun007*))(Il2CppBase() + 0x4623C34))(this);
	}
	template <typename T = void> T AttackStop() {
		return ((T (*)(Gun007*))(Il2CppBase() + 0x462419C))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(Gun007*))(Il2CppBase() + 0x4624210))(this);
	}
	template <typename T = void> T StartUseWeapon() {
		return ((T (*)(Gun007*))(Il2CppBase() + 0x462448C))(this);
	}
	template <typename T = void> T StopWeapon() {
		return ((T (*)(Gun007*))(Il2CppBase() + 0x462459C))(this);
	}
	template <typename T = void> T MakeConsume() {
		return ((T (*)(Gun007*))(Il2CppBase() + 0x462465C))(this);
	}
	template <typename T = uintptr_t> T CreateBullet(float percentage) {
		return ((T (*)(Gun007*, float))(Il2CppBase() + 0x46243AC))(this, percentage);
	}
	template <typename T = bool> T IsHold() {
		return ((T (*)(Gun007*))(Il2CppBase() + 0x4624848))(this);
	}
	template <typename T = void> T OnReborn() {
		return ((T (*)(Gun007*))(Il2CppBase() + 0x46248A8))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_texts() {
		return ((T (*)(Gun007*))(Il2CppBase() + 0x4624A14))(this);
	}
	template <typename T = float> T GetMaxChargeTime() {
		return ((T (*)(Gun007*))(Il2CppBase() + 0x4624D58))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_default_type() {
		return ((T (*)(Gun007*))(Il2CppBase() + 0x4624DF4))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(Gun007*))(Il2CppBase() + 0x4624DFC))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetAttack(bool P0, bool P1) {
		return ((T (*)(Gun007*, bool, bool))(Il2CppBase() + 0x4624E04))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_AttackStart() {
		return ((T (*)(Gun007*))(Il2CppBase() + 0x4624E14))(this);
	}
	template <typename T = void> T iFixBaseProxy_AttackStop() {
		return ((T (*)(Gun007*))(Il2CppBase() + 0x4624E1C))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartUseWeapon() {
		return ((T (*)(Gun007*))(Il2CppBase() + 0x4624E24))(this);
	}
	template <typename T = void> T iFixBaseProxy_StopWeapon() {
		return ((T (*)(Gun007*))(Il2CppBase() + 0x4624E2C))(this);
	}
	template <typename T = void> T iFixBaseProxy_MakeConsume() {
		return ((T (*)(Gun007*))(Il2CppBase() + 0x4624E34))(this);
	}
	template <typename T = bool> T iFixBaseProxy_IsHold() {
		return ((T (*)(Gun007*))(Il2CppBase() + 0x4624E3C))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnReborn() {
		return ((T (*)(Gun007*))(Il2CppBase() + 0x4624E44))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T iFixBaseProxy_get_texts() {
		return ((T (*)(Gun007*))(Il2CppBase() + 0x4624E4C))(this);
	}

};

}
