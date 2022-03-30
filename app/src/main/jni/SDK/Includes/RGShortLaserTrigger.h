#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGShortLaserTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGShortLaserTrigger"));
	}

	template <typename T = uintptr_t> T& rigid2d() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppVector2> T& colliderSize() {
		return *(T*)((uintptr_t)this + 0x80);
	}

	template <typename T = uintptr_t> T get_the_bullet() {
		return ((T (*)(RGShortLaserTrigger*))(Il2CppBase() + 0x43D789C))(this);
	}
	template <typename T = uintptr_t> T get_carrier() {
		return ((T (*)(RGShortLaserTrigger*))(Il2CppBase() + 0x43D792C))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(RGShortLaserTrigger*, uintptr_t))(Il2CppBase() + 0x43D7A00))(this, other);
	}
	template <typename T = void> T OnHit(uintptr_t other, bool isCritic) {
		return ((T (*)(RGShortLaserTrigger*, uintptr_t, bool))(Il2CppBase() + 0x43D8670))(this, other, isCritic);
	}
	template <typename T = void> T SetInfo(uintptr_t damageInfo, int32_t camp) {
		return ((T (*)(RGShortLaserTrigger*, uintptr_t, int32_t))(Il2CppBase() + 0x43D7250))(this, damageInfo, camp);
	}
	template <typename T = void> T SetSourceObject(uintptr_t value) {
		return ((T (*)(RGShortLaserTrigger*, uintptr_t))(Il2CppBase() + 0x43D86E8))(this, value);
	}
	template <typename T = uintptr_t> T GetSourceObject() {
		return ((T (*)(RGShortLaserTrigger*))(Il2CppBase() + 0x43D877C))(this);
	}
	template <typename T = void> T CastModTrigger() {
		return ((T (*)(RGShortLaserTrigger*))(Il2CppBase() + 0x43D87F8))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_carrier() {
		return ((T (*)(RGShortLaserTrigger*))(Il2CppBase() + 0x43D8BB8))(this);
	}
	template <typename T = void> T iFixBaseProxy_CastModTrigger() {
		return ((T (*)(RGShortLaserTrigger*))(Il2CppBase() + 0x43D8BC0))(this);
	}

};

}
