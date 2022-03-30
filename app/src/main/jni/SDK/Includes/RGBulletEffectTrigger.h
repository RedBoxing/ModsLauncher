#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGBulletEffectTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGBulletEffectTrigger"));
	}

	template <typename T = float> T& damageFactor() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _bullet() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& _bulletTrigger() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& isTemp() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& active() {
		return *(T*)((uintptr_t)this + 0x71);
	}
	template <typename T = uintptr_t> T& destroyState() {
		return *(T*)((uintptr_t)this + 0x74);
	}

	template <typename T = uintptr_t> T get_carrier() {
		return ((T (*)(RGBulletEffectTrigger*))(Il2CppBase() + 0x19D1894))(this);
	}
	template <typename T = uintptr_t> T get_bulletTrigger() {
		return ((T (*)(RGBulletEffectTrigger*))(Il2CppBase() + 0x19D1980))(this);
	}
	template <typename T = uintptr_t> T get_destroyState() {
		return ((T (*)(RGBulletEffectTrigger*))(Il2CppBase() + 0x19D1A54))(this);
	}
	template <typename T = void> T set_destroyState(uintptr_t value) {
		return ((T (*)(RGBulletEffectTrigger*, uintptr_t))(Il2CppBase() + 0x19D1A5C))(this, value);
	}
	template <typename T = void> T Start() {
		return ((T (*)(RGBulletEffectTrigger*))(Il2CppBase() + 0x19D1A64))(this);
	}
	template <typename T = void> T Reactive() {
		return ((T (*)(RGBulletEffectTrigger*))(Il2CppBase() + 0x19D1B50))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(RGBulletEffectTrigger*))(Il2CppBase() + 0x19D1BB4))(this);
	}
	template <typename T = void> T TriggerWith(uintptr_t other, bool isCritic, bool canThrough) {
		return ((T (*)(RGBulletEffectTrigger*, uintptr_t, bool, bool))(Il2CppBase() + 0x19D1C1C))(this, other, isCritic, canThrough);
	}
	template <typename T = uintptr_t> T GetBulletSourceObject() {
		return ((T (*)(RGBulletEffectTrigger*))(Il2CppBase() + 0x19D1CA8))(this);
	}
	template <typename T = void> T OnBulletDestroy() {
		return ((T (*)(RGBulletEffectTrigger*))(Il2CppBase() + 0x19D1DA8))(this);
	}

};

}
