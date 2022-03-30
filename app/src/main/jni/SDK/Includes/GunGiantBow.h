#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunGiantBow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunGiantBow"));
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
	template <typename T = float> T& a_time() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = float> T& max_time() {
		return *(T*)((uintptr_t)this + 0x1CC);
	}
	template <typename T = uintptr_t> T& reload_obj() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = float> T& maxAtkInterval() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = float> T& minAtkInterval() {
		return *(T*)((uintptr_t)this + 0x1DC);
	}
	template <typename T = int32_t> T& increaseAttackCount() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = float> T& holdSpeed() {
		return *(T*)((uintptr_t)this + 0x1E4);
	}
	template <typename T = bool> T& _isHoldComplete() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = float> T& _attackTime() {
		return *(T*)((uintptr_t)this + 0x1EC);
	}
	template <typename T = float> T& _currentHoldInterval() {
		return *(T*)((uintptr_t)this + 0x1F0);
	}
	template <typename T = int32_t> T& _holdAttackCount() {
		return *(T*)((uintptr_t)this + 0x1F4);
	}
	template <typename T = uintptr_t> T& the_reload_obj() {
		return *(T*)((uintptr_t)this + 0x1F8);
	}
	template <typename T = void*> T& onDelayedBulletRelease() {
		return *(T*)((uintptr_t)this + 0x200);
	}

	template <typename T = uintptr_t> T get_default_type() {
		return ((T (*)(GunGiantBow*))(Il2CppBase() + 0x2497FC0))(this);
	}
	template <typename T = uintptr_t> T get_bulletDelta() {
		return ((T (*)(GunGiantBow*))(Il2CppBase() + 0x2498020))(this);
	}
	template <typename T = void*> T get_onDelayedBulletRelease() {
		return ((T (*)(GunGiantBow*))(Il2CppBase() + 0x24980C4))(this);
	}
	template <typename T = void> T set_onDelayedBulletRelease(void* value) {
		return ((T (*)(GunGiantBow*, void*))(Il2CppBase() + 0x24980CC))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GunGiantBow*))(Il2CppBase() + 0x24980D4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GunGiantBow*))(Il2CppBase() + 0x24981B4))(this);
	}
	template <typename T = void> T HoldCompleteAttack() {
		return ((T (*)(GunGiantBow*))(Il2CppBase() + 0x2498408))(this);
	}
	template <typename T = void> T SetAttack(bool value1, bool manual) {
		return ((T (*)(GunGiantBow*, bool, bool))(Il2CppBase() + 0x24990B0))(this, value1, manual);
	}
	template <typename T = void> T AttackStart() {
		return ((T (*)(GunGiantBow*))(Il2CppBase() + 0x2499160))(this);
	}
	template <typename T = void> T InstantiateLoadClip(float time) {
		return ((T (*)(GunGiantBow*, float))(Il2CppBase() + 0x24987A4))(this, time);
	}
	template <typename T = void> T InstantiateBullet() {
		return ((T (*)(GunGiantBow*))(Il2CppBase() + 0x24984F8))(this);
	}
	template <typename T = void> T AttackKeyUp(bool manual) {
		return ((T (*)(GunGiantBow*, bool))(Il2CppBase() + 0x2499220))(this, manual);
	}
	template <typename T = void> T AttackStop() {
		return ((T (*)(GunGiantBow*))(Il2CppBase() + 0x249930C))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunGiantBow*))(Il2CppBase() + 0x249892C))(this);
	}
	template <typename T = void> T TurnActivatex() {
		return ((T (*)(GunGiantBow*))(Il2CppBase() + 0x2499488))(this);
	}
	template <typename T = void> T MakeConsume() {
		return ((T (*)(GunGiantBow*))(Il2CppBase() + 0x2499548))(this);
	}
	template <typename T = bool> T IsHold() {
		return ((T (*)(GunGiantBow*))(Il2CppBase() + 0x2499708))(this);
	}
	template <typename T = void> T OnReborn() {
		return ((T (*)(GunGiantBow*))(Il2CppBase() + 0x2499768))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_texts() {
		return ((T (*)(GunGiantBow*))(Il2CppBase() + 0x24998C4))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_default_type() {
		return ((T (*)(GunGiantBow*))(Il2CppBase() + 0x2499B48))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(GunGiantBow*))(Il2CppBase() + 0x2499B50))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetAttack(bool P0, bool P1) {
		return ((T (*)(GunGiantBow*, bool, bool))(Il2CppBase() + 0x2499B58))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_AttackStart() {
		return ((T (*)(GunGiantBow*))(Il2CppBase() + 0x2499B68))(this);
	}
	template <typename T = void> T iFixBaseProxy_AttackKeyUp(bool P0) {
		return ((T (*)(GunGiantBow*, bool))(Il2CppBase() + 0x2499B70))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_AttackStop() {
		return ((T (*)(GunGiantBow*))(Il2CppBase() + 0x2499B7C))(this);
	}
	template <typename T = void> T iFixBaseProxy_MakeConsume() {
		return ((T (*)(GunGiantBow*))(Il2CppBase() + 0x2499B84))(this);
	}
	template <typename T = bool> T iFixBaseProxy_IsHold() {
		return ((T (*)(GunGiantBow*))(Il2CppBase() + 0x2499B8C))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnReborn() {
		return ((T (*)(GunGiantBow*))(Il2CppBase() + 0x2499B94))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T iFixBaseProxy_get_texts() {
		return ((T (*)(GunGiantBow*))(Il2CppBase() + 0x2499B9C))(this);
	}

};

}
