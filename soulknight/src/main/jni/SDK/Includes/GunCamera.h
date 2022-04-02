#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunCamera
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunCamera"));
	}

	template <typename T = uintptr_t> T& cam_light_obj() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = float> T& lightTime() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = uintptr_t> T& lightSprite() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}

	template <typename T = void> T Start() {
		return ((T (*)(GunCamera*))(Il2CppBase() + 0x2587D10))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunCamera*))(Il2CppBase() + 0x2587E00))(this);
	}
	template <typename T = void> T FlickLight() {
		return ((T (*)(GunCamera*))(Il2CppBase() + 0x2588178))(this);
	}
	template <typename T = void> T FlickLightb__5_2() {
		return ((T (*)(GunCamera*))(Il2CppBase() + 0x2588410))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(GunCamera*))(Il2CppBase() + 0x2588444))(this);
	}

};

}
