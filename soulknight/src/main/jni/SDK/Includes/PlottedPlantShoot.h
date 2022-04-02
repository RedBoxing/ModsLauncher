#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PlottedPlantShoot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlottedPlantShoot"));
	}

	template <typename T = uintptr_t> T& _anim() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _controller() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& Atk1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(PlottedPlantShoot*))(Il2CppBase() + 0x43A06E4))(this);
	}
	template <typename T = void> T StartShoot(uintptr_t random) {
		return ((T (*)(PlottedPlantShoot*, uintptr_t))(Il2CppBase() + 0x43A0794))(this, random);
	}
	template <typename T = void> T Atk() {
		return ((T (*)(PlottedPlantShoot*))(Il2CppBase() + 0x43A08A8))(this);
	}

};

}
