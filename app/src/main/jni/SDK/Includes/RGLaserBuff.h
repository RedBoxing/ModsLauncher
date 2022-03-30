#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGLaserBuff
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGLaserBuff"));
	}

	template <typename T = uintptr_t> T& buff() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = int32_t> T& buff_probability() {
		return *(T*)((uintptr_t)this + 0x148);
	}

	template <typename T = void> T OnHit(uintptr_t enemy) {
		return ((T (*)(RGLaserBuff*, uintptr_t))(Il2CppBase() + 0x1B69678))(this, enemy);
	}
	template <typename T = void> T iFixBaseProxy_OnHit(uintptr_t P0) {
		return ((T (*)(RGLaserBuff*, uintptr_t))(Il2CppBase() + 0x1B69A48))(this, P0);
	}

};

}
