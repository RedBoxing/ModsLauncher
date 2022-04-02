#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGShortTargetLaser
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGShortTargetLaser"));
	}

	template <typename T = uintptr_t> T& bullet() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& end() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppVector2> T& direction() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& rigid2d() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& source_objcet() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& lastHitCollider() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = int32_t> T& damage() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = float> T& repel() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = int32_t> T& critic() {
		return *(T*)((uintptr_t)this + 0xE0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(RGShortTargetLaser*))(Il2CppBase() + 0x43D95B4))(this);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(RGShortTargetLaser*))(Il2CppBase() + 0x43D96CC))(this);
	}
	template <typename T = void> T DestroySelf(float totalTime) {
		return ((T (*)(RGShortTargetLaser*, float))(Il2CppBase() + 0x43D99E4))(this, totalTime);
	}
	template <typename T = uintptr_t> T Destroying(float totalTime) {
		return ((T (*)(RGShortTargetLaser*, float))(Il2CppBase() + 0x43D9AAC))(this, totalTime);
	}
	template <typename T = void> T UpdateInfo(uintptr_t bulletInfo, uintptr_t damageInfo) {
		return ((T (*)(RGShortTargetLaser*, uintptr_t, uintptr_t))(Il2CppBase() + 0x43D9BB8))(this, bulletInfo, damageInfo);
	}
	template <typename T = void> T iFixBaseProxy_UpdateInfo(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(RGShortTargetLaser*, uintptr_t, uintptr_t))(Il2CppBase() + 0x43D9D80))(this, P0, P1);
	}

};

}
