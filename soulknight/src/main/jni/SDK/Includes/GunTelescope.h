#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunTelescope
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunTelescope"));
	}

	template <typename T = float> T& minCameraSize() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = float> T& maxCameraSize() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = float> T& resizeSpeed() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}

	template <typename T = float> T get_cameraSize() {
		return ((T (*)(GunTelescope*))(Il2CppBase() + 0x2182E50))(this);
	}
	template <typename T = void> T set_cameraSize(float value) {
		return ((T (*)(GunTelescope*, float))(Il2CppBase() + 0x2182F28))(this, value);
	}
	template <typename T = uintptr_t> T get_cam() {
		return ((T (*)(GunTelescope*))(Il2CppBase() + 0x2182EC8))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GunTelescope*))(Il2CppBase() + 0x2182FB8))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunTelescope*))(Il2CppBase() + 0x2183084))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GunTelescope*))(Il2CppBase() + 0x21830E0))(this);
	}
	template <typename T = void> T AdjustViewport() {
		return ((T (*)(GunTelescope*))(Il2CppBase() + 0x218315C))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(GunTelescope*))(Il2CppBase() + 0x21833EC))(this);
	}

};

}
