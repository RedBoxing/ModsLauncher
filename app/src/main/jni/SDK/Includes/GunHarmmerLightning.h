#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunHarmmerLightning
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunHarmmerLightning"));
	}

	template <typename T = float> T& hammer_offset() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = int32_t> T& multiCount() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = int32_t> T& distance() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = uintptr_t> T& release_object() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}

	template <typename T = void> T Start() {
		return ((T (*)(GunHarmmerLightning*))(Il2CppBase() + 0x249F334))(this);
	}
	template <typename T = uintptr_t> T get_default_type() {
		return ((T (*)(GunHarmmerLightning*))(Il2CppBase() + 0x249F398))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunHarmmerLightning*))(Il2CppBase() + 0x249F3F8))(this);
	}
	template <typename T = void> T Attack2() {
		return ((T (*)(GunHarmmerLightning*))(Il2CppBase() + 0x249F4F0))(this);
	}
	template <typename T = void> T AttackProcess() {
		return ((T (*)(GunHarmmerLightning*))(Il2CppBase() + 0x249F458))(this);
	}
	template <typename T = void> T CreateBullet() {
		return ((T (*)(GunHarmmerLightning*))(Il2CppBase() + 0x249EFDC))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(GunHarmmerLightning*))(Il2CppBase() + 0x249F550))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_default_type() {
		return ((T (*)(GunHarmmerLightning*))(Il2CppBase() + 0x249F558))(this);
	}

};

}
