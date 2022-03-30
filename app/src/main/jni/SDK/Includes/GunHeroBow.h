#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunHeroBow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunHeroBow"));
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
	template <typename T = Il2CppList<uintptr_t>*> T& the_bullets() {
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
	template <typename T = uintptr_t> T& the_reload_obj() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = int32_t> T& angle() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = int32_t> T& multiCount() {
		return *(T*)((uintptr_t)this + 0x1E4);
	}
	template <typename T = float> T& holdSpeed() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = void*> T& _onDelayedBulletRelease() {
		return *(T*)((uintptr_t)this + 0x1F0);
	}

	template <typename T = void*> T get_onDelayedBulletRelease() {
		return ((T (*)(GunHeroBow*))(Il2CppBase() + 0x24A3D9C))(this);
	}
	template <typename T = void> T set_onDelayedBulletRelease(void* value) {
		return ((T (*)(GunHeroBow*, void*))(Il2CppBase() + 0x24A3DFC))(this, value);
	}
	template <typename T = uintptr_t> T get_default_type() {
		return ((T (*)(GunHeroBow*))(Il2CppBase() + 0x24A3E70))(this);
	}
	template <typename T = uintptr_t> T get_bulletDelta() {
		return ((T (*)(GunHeroBow*))(Il2CppBase() + 0x24A3ED0))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GunHeroBow*))(Il2CppBase() + 0x24A3F74))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GunHeroBow*))(Il2CppBase() + 0x24A4054))(this);
	}
	template <typename T = void> T AttackStart() {
		return ((T (*)(GunHeroBow*))(Il2CppBase() + 0x24A4140))(this);
	}
	template <typename T = void> T AttackStop() {
		return ((T (*)(GunHeroBow*))(Il2CppBase() + 0x24A4628))(this);
	}
	template <typename T = void> T AttackKeyUp(bool manual) {
		return ((T (*)(GunHeroBow*, bool))(Il2CppBase() + 0x24A4E8C))(this, manual);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunHeroBow*))(Il2CppBase() + 0x24A4730))(this);
	}
	template <typename T = void> T SetAttack(bool value1, bool manual) {
		return ((T (*)(GunHeroBow*, bool, bool))(Il2CppBase() + 0x24A4F78))(this, value1, manual);
	}
	template <typename T = void> T TurnActivatex() {
		return ((T (*)(GunHeroBow*))(Il2CppBase() + 0x24A5028))(this);
	}
	template <typename T = void> T MakeConsume() {
		return ((T (*)(GunHeroBow*))(Il2CppBase() + 0x24A50E8))(this);
	}
	template <typename T = void> T OnReborn() {
		return ((T (*)(GunHeroBow*))(Il2CppBase() + 0x24A52A8))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_texts() {
		return ((T (*)(GunHeroBow*))(Il2CppBase() + 0x24A54F0))(this);
	}
	template <typename T = bool> T IsHold() {
		return ((T (*)(GunHeroBow*))(Il2CppBase() + 0x24A5834))(this);
	}
	template <typename T = float> T GetMaxChargeTime() {
		return ((T (*)(GunHeroBow*))(Il2CppBase() + 0x24A5894))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_default_type() {
		return ((T (*)(GunHeroBow*))(Il2CppBase() + 0x24A5984))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(GunHeroBow*))(Il2CppBase() + 0x24A598C))(this);
	}
	template <typename T = void> T iFixBaseProxy_AttackStart() {
		return ((T (*)(GunHeroBow*))(Il2CppBase() + 0x24A5994))(this);
	}
	template <typename T = void> T iFixBaseProxy_AttackStop() {
		return ((T (*)(GunHeroBow*))(Il2CppBase() + 0x24A599C))(this);
	}
	template <typename T = void> T iFixBaseProxy_AttackKeyUp(bool P0) {
		return ((T (*)(GunHeroBow*, bool))(Il2CppBase() + 0x24A59A4))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_SetAttack(bool P0, bool P1) {
		return ((T (*)(GunHeroBow*, bool, bool))(Il2CppBase() + 0x24A59B0))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_MakeConsume() {
		return ((T (*)(GunHeroBow*))(Il2CppBase() + 0x24A59C0))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnReborn() {
		return ((T (*)(GunHeroBow*))(Il2CppBase() + 0x24A59C8))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T iFixBaseProxy_get_texts() {
		return ((T (*)(GunHeroBow*))(Il2CppBase() + 0x24A59D0))(this);
	}
	template <typename T = bool> T iFixBaseProxy_IsHold() {
		return ((T (*)(GunHeroBow*))(Il2CppBase() + 0x24A59D8))(this);
	}

};

}
