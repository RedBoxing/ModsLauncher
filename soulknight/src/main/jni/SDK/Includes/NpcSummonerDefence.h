#pragma once
#include "Il2Cpp/Il2Cpp.h"

class NpcSummonerDefence
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NpcSummonerDefence"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& objectDistribution() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& summonPoint() {
		return *(T*)((uintptr_t)this + 0xC0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(NpcSummonerDefence*))(Il2CppBase() + 0x45368A0))(this);
	}
	template <typename T = void> T OnWaveClear() {
		return ((T (*)(NpcSummonerDefence*))(Il2CppBase() + 0x45369B4))(this);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(NpcSummonerDefence*, uintptr_t))(Il2CppBase() + 0x4536CD8))(this, controller);
	}
	template <typename T = void> T OnItemTriggerState(uintptr_t controller, int32_t state) {
		return ((T (*)(NpcSummonerDefence*, uintptr_t, int32_t))(Il2CppBase() + 0x4536EB0))(this, controller, state);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(NpcSummonerDefence*, uintptr_t))(Il2CppBase() + 0x453717C))(this, controller);
	}
	template <typename T = void> T OnItemTriggerFail(uintptr_t controller) {
		return ((T (*)(NpcSummonerDefence*, uintptr_t))(Il2CppBase() + 0x45376E0))(this, controller);
	}
	template <typename T = bool> T Triggerable(uintptr_t controller) {
		return ((T (*)(NpcSummonerDefence*, uintptr_t))(Il2CppBase() + 0x4537808))(this, controller);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(NpcSummonerDefence*))(Il2CppBase() + 0x45378F8))(this);
	}
	template <typename T = void> T iFixBaseProxy_ItemTrigger(uintptr_t P0) {
		return ((T (*)(NpcSummonerDefence*, uintptr_t))(Il2CppBase() + 0x4537A14))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerState(uintptr_t P0, int32_t P1) {
		return ((T (*)(NpcSummonerDefence*, uintptr_t, int32_t))(Il2CppBase() + 0x4537A1C))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(NpcSummonerDefence*, uintptr_t))(Il2CppBase() + 0x4537A24))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerFail(uintptr_t P0) {
		return ((T (*)(NpcSummonerDefence*, uintptr_t))(Il2CppBase() + 0x4537A2C))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_Triggerable(uintptr_t P0) {
		return ((T (*)(NpcSummonerDefence*, uintptr_t))(Il2CppBase() + 0x4537A34))(this, P0);
	}
	template <typename T = int32_t> T iFixBaseProxy_GetItemValue() {
		return ((T (*)(NpcSummonerDefence*))(Il2CppBase() + 0x4537A3C))(this);
	}

};

}
