#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectBossRushManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectBossRushManager"));
	}

	template <typename T = uintptr_t> T& tab_sr() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> static T& offset_y() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ObjectBossRushManager*))(Il2CppBase() + 0x1D4C014))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ObjectBossRushManager*))(Il2CppBase() + 0x1D4C0E8))(this);
	}
	template <typename T = void> T UpdateTab() {
		return ((T (*)(ObjectBossRushManager*))(Il2CppBase() + 0x1D4C148))(this);
	}
	template <typename T = void> T OnEnterShow(uintptr_t ctrl) {
		return ((T (*)(ObjectBossRushManager*, uintptr_t))(Il2CppBase() + 0x1D4C1C0))(this, ctrl);
	}
	template <typename T = void> T OnExitShow(uintptr_t ctrl) {
		return ((T (*)(ObjectBossRushManager*, uintptr_t))(Il2CppBase() + 0x1D4C2F0))(this, ctrl);
	}
	template <typename T = void> T OnItemTrigger(uintptr_t controller) {
		return ((T (*)(ObjectBossRushManager*, uintptr_t))(Il2CppBase() + 0x1D4C36C))(this, controller);
	}
	template <typename T = void> T GetBossRushTicket() {
		return ((T (*)(ObjectBossRushManager*))(Il2CppBase() + 0x1D4CDE4))(this);
	}
	template <typename T = void> T SetUsetTickFlag() {
		return ((T (*)(ObjectBossRushManager*))(Il2CppBase() + 0x1D4CBE4))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnEnterShow(uintptr_t P0) {
		return ((T (*)(ObjectBossRushManager*, uintptr_t))(Il2CppBase() + 0x1D4CF70))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnExitShow(uintptr_t P0) {
		return ((T (*)(ObjectBossRushManager*, uintptr_t))(Il2CppBase() + 0x1D4CF78))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTrigger(uintptr_t P0) {
		return ((T (*)(ObjectBossRushManager*, uintptr_t))(Il2CppBase() + 0x1D4CF80))(this, P0);
	}

};

}
