#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectBossRushTimeCounter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectBossRushTimeCounter"));
	}

	template <typename T = int32_t> static T& normalTimeLimit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& badassTimeLimit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> T& soundFail() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = void*> T& updateUI() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> T& failed() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& uiBossInfo() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& findUIBossInfo() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& uiTimecounter() {
		return *(T*)((uintptr_t)this + 0xC0);
	}

	template <typename T = void> T Start() {
		return ((T (*)(ObjectBossRushTimeCounter*))(Il2CppBase() + 0x1D4D0AC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ObjectBossRushTimeCounter*))(Il2CppBase() + 0x1D4D954))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(ObjectBossRushTimeCounter*))(Il2CppBase() + 0x1D4DB54))(this);
	}
	template <typename T = void> T OnBattleStart(uintptr_t e) {
		return ((T (*)(ObjectBossRushTimeCounter*, uintptr_t))(Il2CppBase() + 0x1D4DC44))(this, e);
	}
	template <typename T = void> T UpdateTimeText() {
		return ((T (*)(ObjectBossRushTimeCounter*))(Il2CppBase() + 0x1D4D698))(this);
	}
	template <typename T = bool> T Triggerable(uintptr_t controller) {
		return ((T (*)(ObjectBossRushTimeCounter*, uintptr_t))(Il2CppBase() + 0x1D4DCBC))(this, controller);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(ObjectBossRushTimeCounter*, uintptr_t))(Il2CppBase() + 0x1D4DD30))(this, controller);
	}
	template <typename T = int32_t> static T GetTimeLimit(uintptr_t data) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1D4D5A0))(0, data);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(ObjectBossRushTimeCounter*))(Il2CppBase() + 0x1D4E068))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnDestroy() {
		return ((T (*)(ObjectBossRushTimeCounter*))(Il2CppBase() + 0x1D4E070))(this);
	}
	template <typename T = bool> T iFixBaseProxy_Triggerable(uintptr_t P0) {
		return ((T (*)(ObjectBossRushTimeCounter*, uintptr_t))(Il2CppBase() + 0x1D4E078))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(ObjectBossRushTimeCounter*, uintptr_t))(Il2CppBase() + 0x1D4E080))(this, P0);
	}

};

}
