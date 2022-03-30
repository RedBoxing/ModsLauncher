#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Gun005
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Gun005"));
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
	template <typename T = float> T& holdSpeed() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = uintptr_t> T& the_reload_obj() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = void*> T& _onDelayedBulletRelease() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}

	template <typename T = uintptr_t> T get_default_type() {
		return ((T (*)(Gun005*))(Il2CppBase() + 0x46207A4))(this);
	}
	template <typename T = uintptr_t> T get_bulletDelta() {
		return ((T (*)(Gun005*))(Il2CppBase() + 0x4620804))(this);
	}
	template <typename T = void*> T get_onDelayedBulletRelease() {
		return ((T (*)(Gun005*))(Il2CppBase() + 0x46208A8))(this);
	}
	template <typename T = void> T set_onDelayedBulletRelease(void* value) {
		return ((T (*)(Gun005*, void*))(Il2CppBase() + 0x4620908))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(Gun005*))(Il2CppBase() + 0x462097C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(Gun005*))(Il2CppBase() + 0x4620A5C))(this);
	}
	template <typename T = void> T SetAttack(bool value1, bool manual) {
		return ((T (*)(Gun005*, bool, bool))(Il2CppBase() + 0x4620B4C))(this, value1, manual);
	}
	template <typename T = void> T AttackStart() {
		return ((T (*)(Gun005*))(Il2CppBase() + 0x4620BFC))(this);
	}
	template <typename T = void> T AttackKeyUp(bool manual) {
		return ((T (*)(Gun005*, bool))(Il2CppBase() + 0x4621254))(this, manual);
	}
	template <typename T = void> T AttackStop() {
		return ((T (*)(Gun005*))(Il2CppBase() + 0x4621340))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(Gun005*))(Il2CppBase() + 0x4621444))(this);
	}
	template <typename T = void> T TurnActivatex() {
		return ((T (*)(Gun005*))(Il2CppBase() + 0x4621C7C))(this);
	}
	template <typename T = void> T MakeConsume() {
		return ((T (*)(Gun005*))(Il2CppBase() + 0x4621D3C))(this);
	}
	template <typename T = bool> T IsHold() {
		return ((T (*)(Gun005*))(Il2CppBase() + 0x4621EFC))(this);
	}
	template <typename T = void> T OnReborn() {
		return ((T (*)(Gun005*))(Il2CppBase() + 0x4621F5C))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_texts() {
		return ((T (*)(Gun005*))(Il2CppBase() + 0x46220B8))(this);
	}
	template <typename T = uintptr_t> T GetBulletInfo(int32_t index) {
		return ((T (*)(Gun005*, int32_t))(Il2CppBase() + 0x46223FC))(this, index);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_default_type() {
		return ((T (*)(Gun005*))(Il2CppBase() + 0x46225A8))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(Gun005*))(Il2CppBase() + 0x46225B0))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetAttack(bool P0, bool P1) {
		return ((T (*)(Gun005*, bool, bool))(Il2CppBase() + 0x46225B8))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_AttackStart() {
		return ((T (*)(Gun005*))(Il2CppBase() + 0x46225C8))(this);
	}
	template <typename T = void> T iFixBaseProxy_AttackKeyUp(bool P0) {
		return ((T (*)(Gun005*, bool))(Il2CppBase() + 0x46225D0))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_AttackStop() {
		return ((T (*)(Gun005*))(Il2CppBase() + 0x46225DC))(this);
	}
	template <typename T = void> T iFixBaseProxy_MakeConsume() {
		return ((T (*)(Gun005*))(Il2CppBase() + 0x46225E4))(this);
	}
	template <typename T = bool> T iFixBaseProxy_IsHold() {
		return ((T (*)(Gun005*))(Il2CppBase() + 0x46225EC))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnReborn() {
		return ((T (*)(Gun005*))(Il2CppBase() + 0x46225F4))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T iFixBaseProxy_get_texts() {
		return ((T (*)(Gun005*))(Il2CppBase() + 0x46225FC))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_GetBulletInfo(int32_t P0) {
		return ((T (*)(Gun005*, int32_t))(Il2CppBase() + 0x4622604))(this, P0);
	}

};

}
