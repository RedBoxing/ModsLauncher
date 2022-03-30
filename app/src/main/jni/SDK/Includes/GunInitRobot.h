#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunInitRobot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunInitRobot"));
	}

	template <typename T = int32_t> T& reflectCount() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = uintptr_t> T& fin_funnel2() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(GunInitRobot*))(Il2CppBase() + 0x2273B28))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunInitRobot*))(Il2CppBase() + 0x2273C08))(this);
	}
	template <typename T = void> T SetBackPosition(Il2CppVector3 local_position, float angle, int32_t target_layer) {
		return ((T (*)(GunInitRobot*, Il2CppVector3, float, int32_t))(Il2CppBase() + 0x2273E50))(this, local_position, angle, target_layer);
	}
	template <typename T = void> T ShowSelf() {
		return ((T (*)(GunInitRobot*))(Il2CppBase() + 0x2273F14))(this);
	}
	template <typename T = void> T HideSelf() {
		return ((T (*)(GunInitRobot*))(Il2CppBase() + 0x2273F94))(this);
	}
	template <typename T = void> T DeadBack() {
		return ((T (*)(GunInitRobot*))(Il2CppBase() + 0x2274060))(this);
	}
	template <typename T = void> T OnRebornBack() {
		return ((T (*)(GunInitRobot*))(Il2CppBase() + 0x22740CC))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(GunInitRobot*))(Il2CppBase() + 0x2274140))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetBackPosition(Il2CppVector3 P0, float P1, int32_t P2) {
		return ((T (*)(GunInitRobot*, Il2CppVector3, float, int32_t))(Il2CppBase() + 0x2274148))(this, P0, P1, P2);
	}
	template <typename T = void> T iFixBaseProxy_ShowSelf() {
		return ((T (*)(GunInitRobot*))(Il2CppBase() + 0x2274150))(this);
	}
	template <typename T = void> T iFixBaseProxy_HideSelf() {
		return ((T (*)(GunInitRobot*))(Il2CppBase() + 0x2274158))(this);
	}
	template <typename T = void> T iFixBaseProxy_DeadBack() {
		return ((T (*)(GunInitRobot*))(Il2CppBase() + 0x2274160))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnRebornBack() {
		return ((T (*)(GunInitRobot*))(Il2CppBase() + 0x2274168))(this);
	}

};

}
