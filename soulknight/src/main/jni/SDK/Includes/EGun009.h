#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EGun009
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EGun009"));
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
	template <typename T = int32_t> T& group_angle() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& per_count() {
		return *(T*)((uintptr_t)this + 0x98);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(EGun009*))(Il2CppBase() + 0x22A78E0))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(EGun009*))(Il2CppBase() + 0x22A7A58))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(EGun009*))(Il2CppBase() + 0x22A7B40))(this);
	}

};

}
