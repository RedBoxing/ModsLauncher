#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EGun002
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EGun002"));
	}

	template <typename T = float> T& speed_correction() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& angle() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = bool> T& has_trail() {
		return *(T*)((uintptr_t)this + 0x94);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(EGun002*))(Il2CppBase() + 0x22A335C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(EGun002*))(Il2CppBase() + 0x22A3610))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(EGun002*))(Il2CppBase() + 0x22A36F8))(this);
	}

};

}
