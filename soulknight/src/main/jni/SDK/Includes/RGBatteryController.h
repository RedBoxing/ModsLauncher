#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGBatteryController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGBatteryController"));
	}

	template <typename T = bool> T& intensify() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = uintptr_t> T& missile() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& missiles() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = uintptr_t> T& extraUpdateMissle() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = float> T& bulletAngle() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = int32_t> T& bulletCount() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = bool> T& extraUpdate() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = void*> T& OnDead() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = int32_t> T& _additionLevel() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = uintptr_t> T& hand_tf() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = uintptr_t> T& hand() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = float> T& shoot_time() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = uintptr_t> T& shadow_lock() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = bool> T& shooting() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}

	template <typename T = void> T add_OnDead(void* value) {
		return ((T (*)(RGBatteryController*, void*))(Il2CppBase() + 0x1BBA320))(this, value);
	}
	template <typename T = void> T remove_OnDead(void* value) {
		return ((T (*)(RGBatteryController*, void*))(Il2CppBase() + 0x1BBA410))(this, value);
	}
	template <typename T = int32_t> T get_additionLevel() {
		return ((T (*)(RGBatteryController*))(Il2CppBase() + 0x1BBA500))(this);
	}
	template <typename T = void> T set_additionLevel(int32_t value) {
		return ((T (*)(RGBatteryController*, int32_t))(Il2CppBase() + 0x1BBA560))(this, value);
	}
	template <typename T = uintptr_t> T get_skin_missile() {
		return ((T (*)(RGBatteryController*))(Il2CppBase() + 0x1BBA5D4))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(RGBatteryController*))(Il2CppBase() + 0x1BBA7D0))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(RGBatteryController*))(Il2CppBase() + 0x1BBA95C))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(RGBatteryController*))(Il2CppBase() + 0x1BBAC70))(this);
	}
	template <typename T = void> T Scout() {
		return ((T (*)(RGBatteryController*))(Il2CppBase() + 0x1BBACF8))(this);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(RGBatteryController*))(Il2CppBase() + 0x1BBAE34))(this);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(RGBatteryController*))(Il2CppBase() + 0x1BBAEF0))(this);
	}
	template <typename T = void> T StopShooting() {
		return ((T (*)(RGBatteryController*))(Il2CppBase() + 0x1BBB408))(this);
	}
	template <typename T = void> T CreateRocket() {
		return ((T (*)(RGBatteryController*))(Il2CppBase() + 0x1BBB048))(this);
	}
	template <typename T = void> T EndCycle() {
		return ((T (*)(RGBatteryController*))(Il2CppBase() + 0x1BBB4DC))(this);
	}
	template <typename T = void> T GetHurt(int32_t damage) {
		return ((T (*)(RGBatteryController*, int32_t))(Il2CppBase() + 0x1BBB59C))(this, damage);
	}
	template <typename T = void> T Dead() {
		return ((T (*)(RGBatteryController*))(Il2CppBase() + 0x1BBB804))(this);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(RGBatteryController*))(Il2CppBase() + 0x1BBBA98))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(RGBatteryController*))(Il2CppBase() + 0x1BBBDDC))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(RGBatteryController*))(Il2CppBase() + 0x1BBBDE4))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedUpdate() {
		return ((T (*)(RGBatteryController*))(Il2CppBase() + 0x1BBBDEC))(this);
	}
	template <typename T = void> T iFixBaseProxy_Scout() {
		return ((T (*)(RGBatteryController*))(Il2CppBase() + 0x1BBBDF4))(this);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(RGBatteryController*))(Il2CppBase() + 0x1BBBDFC))(this);
	}
	template <typename T = void> T iFixBaseProxy_EndCycle() {
		return ((T (*)(RGBatteryController*))(Il2CppBase() + 0x1BBBE04))(this);
	}
	template <typename T = void> T iFixBaseProxy_GetHurt(int32_t P0) {
		return ((T (*)(RGBatteryController*, int32_t))(Il2CppBase() + 0x1BBBE0C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(RGBatteryController*))(Il2CppBase() + 0x1BBBE14))(this);
	}

};

}
