#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunChannel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunChannel"));
	}

	template <typename T = bool> T& show_aim_line() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = uintptr_t> T& clip_end_shoot() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = bool> T& need_create_bullet_end() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = float> T& shoot_end_time() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = uintptr_t> T& reload_obj() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = int32_t> T& max_mul_time() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = float> T& holdSpeed() {
		return *(T*)((uintptr_t)this + 0x1BC);
	}
	template <typename T = uintptr_t> T& bullet_instance() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = uintptr_t> T& the_reload_obj() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = bool> T& shoot_end() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = uintptr_t> T& aim_line() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = int32_t> T& tmp_consume() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = int32_t> T& add_times() {
		return *(T*)((uintptr_t)this + 0x1E4);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(GunChannel*))(Il2CppBase() + 0x2589C90))(this);
	}
	template <typename T = void> T StartUseWeapon() {
		return ((T (*)(GunChannel*))(Il2CppBase() + 0x2589D50))(this);
	}
	template <typename T = void> T AttackStart() {
		return ((T (*)(GunChannel*))(Il2CppBase() + 0x2589E18))(this);
	}
	template <typename T = void> T AttackStop() {
		return ((T (*)(GunChannel*))(Il2CppBase() + 0x258A008))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunChannel*))(Il2CppBase() + 0x258A2FC))(this);
	}
	template <typename T = void> T MakeConsume() {
		return ((T (*)(GunChannel*))(Il2CppBase() + 0x258A8D8))(this);
	}
	template <typename T = void> T StopWeapon() {
		return ((T (*)(GunChannel*))(Il2CppBase() + 0x258AAD8))(this);
	}
	template <typename T = void> T EndShooting() {
		return ((T (*)(GunChannel*))(Il2CppBase() + 0x258A09C))(this);
	}
	template <typename T = void> T ResetCosume() {
		return ((T (*)(GunChannel*))(Il2CppBase() + 0x258ACC8))(this);
	}
	template <typename T = void> T CreateEndShootBullet() {
		return ((T (*)(GunChannel*))(Il2CppBase() + 0x258AB54))(this);
	}
	template <typename T = void> T TurnEndShoot() {
		return ((T (*)(GunChannel*))(Il2CppBase() + 0x258AD48))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(GunChannel*))(Il2CppBase() + 0x258AECC))(this);
	}
	template <typename T = bool> T IsHold() {
		return ((T (*)(GunChannel*))(Il2CppBase() + 0x258B090))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_texts() {
		return ((T (*)(GunChannel*))(Il2CppBase() + 0x258B0F0))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(GunChannel*))(Il2CppBase() + 0x258B5AC))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartUseWeapon() {
		return ((T (*)(GunChannel*))(Il2CppBase() + 0x258B5B4))(this);
	}
	template <typename T = void> T iFixBaseProxy_AttackStart() {
		return ((T (*)(GunChannel*))(Il2CppBase() + 0x258B5BC))(this);
	}
	template <typename T = void> T iFixBaseProxy_AttackStop() {
		return ((T (*)(GunChannel*))(Il2CppBase() + 0x258B5C4))(this);
	}
	template <typename T = void> T iFixBaseProxy_MakeConsume() {
		return ((T (*)(GunChannel*))(Il2CppBase() + 0x258B5CC))(this);
	}
	template <typename T = void> T iFixBaseProxy_StopWeapon() {
		return ((T (*)(GunChannel*))(Il2CppBase() + 0x258B5D4))(this);
	}
	template <typename T = bool> T iFixBaseProxy_IsHold() {
		return ((T (*)(GunChannel*))(Il2CppBase() + 0x258B5DC))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T iFixBaseProxy_get_texts() {
		return ((T (*)(GunChannel*))(Il2CppBase() + 0x258B5E4))(this);
	}

};

}
