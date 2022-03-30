#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EGunScatter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EGunScatter"));
	}

	template <typename T = float> T& speed_correction() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = float> T& size() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& angleBetween() {
		return *(T*)((uintptr_t)this + 0x94);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(EGunScatter*))(Il2CppBase() + 0x22AAEB0))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(EGunScatter*))(Il2CppBase() + 0x22AB00C))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(EGunScatter*))(Il2CppBase() + 0x22AB0F4))(this);
	}

};

}
