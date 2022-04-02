#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGRotateLaser
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGRotateLaser"));
	}

	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = bool> T& setup() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& _audioSource() {
		return *(T*)((uintptr_t)this + 0x118);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(RGRotateLaser*))(Il2CppBase() + 0x1C7D694))(this);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(RGRotateLaser*))(Il2CppBase() + 0x1C7D750))(this);
	}
	template <typename T = void> T UpdateInfo(uintptr_t bulletInfo, uintptr_t damageInfo) {
		return ((T (*)(RGRotateLaser*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1C7DD8C))(this, bulletInfo, damageInfo);
	}
	template <typename T = void> T Update() {
		return ((T (*)(RGRotateLaser*))(Il2CppBase() + 0x1C7DE9C))(this);
	}
	template <typename T = void> T UpdateShape(bool forceUpdate) {
		return ((T (*)(RGRotateLaser*, bool))(Il2CppBase() + 0x1C7D7B4))(this, forceUpdate);
	}
	template <typename T = void> T EndLaser() {
		return ((T (*)(RGRotateLaser*))(Il2CppBase() + 0x1C7DF88))(this);
	}
	template <typename T = void> T DestoryLaser() {
		return ((T (*)(RGRotateLaser*))(Il2CppBase() + 0x1C7E070))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(RGRotateLaser*))(Il2CppBase() + 0x1C7E154))(this);
	}
	template <typename T = void> T iFixBaseProxy_UpdateInfo(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(RGRotateLaser*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1C7E15C))(this, P0, P1);
	}

};

}
