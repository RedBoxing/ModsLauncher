#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGInterceptBatteryController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGInterceptBatteryController"));
	}

	template <typename T = bool> T& intensify() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = int32_t> T& range() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = int32_t> T& _additionLevel() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = uintptr_t> T& hand_tf() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = uintptr_t> T& hand() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = uintptr_t> T& shadow_lock() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = uintptr_t> T& gunIntercept() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& circle() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = float> T& atkTimer() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = float> T& intervalFactor() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}

	template <typename T = int32_t> T get_additionLevel() {
		return ((T (*)(RGInterceptBatteryController*))(Il2CppBase() + 0x1C5EBCC))(this);
	}
	template <typename T = void> T set_additionLevel(int32_t value) {
		return ((T (*)(RGInterceptBatteryController*, int32_t))(Il2CppBase() + 0x1C5EC2C))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(RGInterceptBatteryController*))(Il2CppBase() + 0x1C5ECA0))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(RGInterceptBatteryController*))(Il2CppBase() + 0x1C5EE60))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(RGInterceptBatteryController*))(Il2CppBase() + 0x1C5F324))(this);
	}
	template <typename T = void> T Scout() {
		return ((T (*)(RGInterceptBatteryController*))(Il2CppBase() + 0x1C5F3CC))(this);
	}
	template <typename T = void> T EndCycle() {
		return ((T (*)(RGInterceptBatteryController*))(Il2CppBase() + 0x1C5F8E4))(this);
	}
	template <typename T = bool> T get_IsTargetValid() {
		return ((T (*)(RGInterceptBatteryController*))(Il2CppBase() + 0x1C5F4B8))(this);
	}
	template <typename T = void> T Intercept() {
		return ((T (*)(RGInterceptBatteryController*))(Il2CppBase() + 0x1C5F658))(this);
	}
	template <typename T = uintptr_t> T FindTarget() {
		return ((T (*)(RGInterceptBatteryController*))(Il2CppBase() + 0x1C5F9A4))(this);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(RGInterceptBatteryController*))(Il2CppBase() + 0x1C5FD0C))(this);
	}
	template <typename T = void> T GetHurt(int32_t damage) {
		return ((T (*)(RGInterceptBatteryController*, int32_t))(Il2CppBase() + 0x1C60078))(this, damage);
	}
	template <typename T = void> T Dead() {
		return ((T (*)(RGInterceptBatteryController*))(Il2CppBase() + 0x1C602E4))(this);
	}
	template <typename T = void> T AddInterceptCount(int32_t count) {
		return ((T (*)(RGInterceptBatteryController*, int32_t))(Il2CppBase() + 0x1C60520))(this, count);
	}
	template <typename T = void> T SetInterceptInterval(float interval) {
		return ((T (*)(RGInterceptBatteryController*, float))(Il2CppBase() + 0x1C60614))(this, interval);
	}
	template <typename T = void> T SetDamage(int32_t d) {
		return ((T (*)(RGInterceptBatteryController*, int32_t))(Il2CppBase() + 0x1C60690))(this, d);
	}
	template <typename T = bool> T Scoutg__FindNewTarget|15_0(bool interceptImmediately) {
		return ((T (*)(RGInterceptBatteryController*, bool))(Il2CppBase() + 0x1C5F7E4))(this, interceptImmediately);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(RGInterceptBatteryController*))(Il2CppBase() + 0x1C60790))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(RGInterceptBatteryController*))(Il2CppBase() + 0x1C60798))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedUpdate() {
		return ((T (*)(RGInterceptBatteryController*))(Il2CppBase() + 0x1C607A0))(this);
	}
	template <typename T = void> T iFixBaseProxy_Scout() {
		return ((T (*)(RGInterceptBatteryController*))(Il2CppBase() + 0x1C607A8))(this);
	}
	template <typename T = void> T iFixBaseProxy_EndCycle() {
		return ((T (*)(RGInterceptBatteryController*))(Il2CppBase() + 0x1C607B0))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_FindTarget() {
		return ((T (*)(RGInterceptBatteryController*))(Il2CppBase() + 0x1C607B8))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(RGInterceptBatteryController*))(Il2CppBase() + 0x1C607C0))(this);
	}
	template <typename T = void> T iFixBaseProxy_GetHurt(int32_t P0) {
		return ((T (*)(RGInterceptBatteryController*, int32_t))(Il2CppBase() + 0x1C607C8))(this, P0);
	}

};

}
