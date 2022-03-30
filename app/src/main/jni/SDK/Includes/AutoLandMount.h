#pragma once
#include "Il2Cpp/Il2Cpp.h"

class AutoLandMount
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AutoLandMount"));
	}

	template <typename T = uintptr_t> T& land_pos_go() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& target_mech_name() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T OnTriggerStay2D(uintptr_t other) {
		return ((T (*)(AutoLandMount*, uintptr_t))(Il2CppBase() + 0x41868C0))(this, other);
	}
	template <typename T = void> T MakeMountLand(uintptr_t other) {
		return ((T (*)(AutoLandMount*, uintptr_t))(Il2CppBase() + 0x4186938))(this, other);
	}

};

}
