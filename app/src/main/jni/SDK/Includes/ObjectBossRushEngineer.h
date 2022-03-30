#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectBossRushEngineer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectBossRushEngineer"));
	}

	template <typename T = int32_t> static T& MAX_LEVEL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& stateIndex() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> T& unlock() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& effectParticle() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int32_t> static T& FinishedId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& _isUnlock() {
		return *(T*)((uintptr_t)this + 0xB8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ObjectBossRushEngineer*))(Il2CppBase() + 0x1D4AC5C))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(ObjectBossRushEngineer*, uintptr_t))(Il2CppBase() + 0x1D4ACF4))(this, other);
	}
	template <typename T = bool> T Triggerable(uintptr_t controller) {
		return ((T (*)(ObjectBossRushEngineer*, uintptr_t))(Il2CppBase() + 0x1D4ADC4))(this, controller);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(ObjectBossRushEngineer*, uintptr_t))(Il2CppBase() + 0x1D4AFE0))(this, controller);
	}
	template <typename T = void> T OnItemTriggerFail(uintptr_t controller) {
		return ((T (*)(ObjectBossRushEngineer*, uintptr_t))(Il2CppBase() + 0x1D4B4A0))(this, controller);
	}
	template <typename T = void> T TalkMaxLevel() {
		return ((T (*)(ObjectBossRushEngineer*))(Il2CppBase() + 0x1D4B8A0))(this);
	}
	template <typename T = uintptr_t> T GetMoney(uintptr_t controller) {
		return ((T (*)(ObjectBossRushEngineer*, uintptr_t))(Il2CppBase() + 0x1D4B3D8))(this, controller);
	}
	template <typename T = void> T GetMoney_1() {
		return ((T (*)(ObjectBossRushEngineer*))(Il2CppBase() + 0x1D4B9B4))(this);
	}
	template <typename T = bool> T CanTrain() {
		return ((T (*)(ObjectBossRushEngineer*))(Il2CppBase() + 0x1D4AEE0))(this);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(ObjectBossRushEngineer*))(Il2CppBase() + 0x1D4BCE8))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(ObjectBossRushEngineer*))(Il2CppBase() + 0x1D4BD48))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerEnter2D(uintptr_t P0) {
		return ((T (*)(ObjectBossRushEngineer*, uintptr_t))(Il2CppBase() + 0x1D4BEBC))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_Triggerable(uintptr_t P0) {
		return ((T (*)(ObjectBossRushEngineer*, uintptr_t))(Il2CppBase() + 0x1D4BEC4))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(ObjectBossRushEngineer*, uintptr_t))(Il2CppBase() + 0x1D4BECC))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerFail(uintptr_t P0) {
		return ((T (*)(ObjectBossRushEngineer*, uintptr_t))(Il2CppBase() + 0x1D4BED4))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_CanUse() {
		return ((T (*)(ObjectBossRushEngineer*))(Il2CppBase() + 0x1D4BEDC))(this);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_GetItemName() {
		return ((T (*)(ObjectBossRushEngineer*))(Il2CppBase() + 0x1D4BEE4))(this);
	}

};

}
