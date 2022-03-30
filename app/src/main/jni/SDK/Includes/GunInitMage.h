#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunInitMage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunInitMage"));
	}

	template <typename T = float> T& throw_offset() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = int32_t> T& master_atk_add() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = int32_t> T& multiCount() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = float> T& max_bullet_angle_multiCount() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = float> T& bullet_anime_time() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = bool> T& has_trail() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}

	template <typename T = uintptr_t> T get_default_type() {
		return ((T (*)(GunInitMage*))(Il2CppBase() + 0x2270610))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GunInitMage*))(Il2CppBase() + 0x2270670))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GunInitMage*))(Il2CppBase() + 0x22707C4))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunInitMage*))(Il2CppBase() + 0x227089C))(this);
	}
	template <typename T = void> T StartUseWeapon() {
		return ((T (*)(GunInitMage*))(Il2CppBase() + 0x2270F3C))(this);
	}
	template <typename T = void> T DropWeapon(int32_t target_layer) {
		return ((T (*)(GunInitMage*, int32_t))(Il2CppBase() + 0x227102C))(this, target_layer);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_default_type() {
		return ((T (*)(GunInitMage*))(Il2CppBase() + 0x2271114))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(GunInitMage*))(Il2CppBase() + 0x227111C))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(GunInitMage*))(Il2CppBase() + 0x2271124))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartUseWeapon() {
		return ((T (*)(GunInitMage*))(Il2CppBase() + 0x227112C))(this);
	}
	template <typename T = void> T iFixBaseProxy_DropWeapon(int32_t P0) {
		return ((T (*)(GunInitMage*, int32_t))(Il2CppBase() + 0x2271134))(this, P0);
	}

};

}
