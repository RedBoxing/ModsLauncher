#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunMissle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunMissle"));
	}

	template <typename T = float> T& verticle_speed() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = float> T& launch_time() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = int32_t> T& multiCount() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = bool> T& is_shot_gun() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}

	template <typename T = uintptr_t> T get_default_type() {
		return ((T (*)(GunMissle*))(Il2CppBase() + 0x228693C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GunMissle*))(Il2CppBase() + 0x228699C))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunMissle*))(Il2CppBase() + 0x2286A98))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_default_type() {
		return ((T (*)(GunMissle*))(Il2CppBase() + 0x2286D98))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(GunMissle*))(Il2CppBase() + 0x2286DA0))(this);
	}

};

}
