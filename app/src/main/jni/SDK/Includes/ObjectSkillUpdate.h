#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectSkillUpdate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectSkillUpdate"));
	}

	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& stateIndex() {
		return *(T*)((uintptr_t)this + 0xA0);
	}

	template <typename T = void> T Start() {
		return ((T (*)(ObjectSkillUpdate*))(Il2CppBase() + 0x1DC0F58))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(ObjectSkillUpdate*, uintptr_t))(Il2CppBase() + 0x1DC0FC4))(this, other);
	}
	template <typename T = bool> T Triggerable(uintptr_t controller) {
		return ((T (*)(ObjectSkillUpdate*, uintptr_t))(Il2CppBase() + 0x1DC1094))(this, controller);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(ObjectSkillUpdate*, uintptr_t))(Il2CppBase() + 0x1DC1228))(this, controller);
	}
	template <typename T = void> T AddBuff(uintptr_t controller) {
		return ((T (*)(ObjectSkillUpdate*, uintptr_t))(Il2CppBase() + 0x1DC1544))(this, controller);
	}
	template <typename T = void> T TriggerSuccessTalk() {
		return ((T (*)(ObjectSkillUpdate*))(Il2CppBase() + 0x1DC14A4))(this);
	}
	template <typename T = void> static T Talk(Il2CppString* talkKey, uintptr_t talkTransform) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1DC1628))(0, talkKey, talkTransform);
	}
	template <typename T = void> T OnItemTriggerFail(uintptr_t controller) {
		return ((T (*)(ObjectSkillUpdate*, uintptr_t))(Il2CppBase() + 0x1DC173C))(this, controller);
	}
	template <typename T = void> T TriggerFailMoneyNotEnough(uintptr_t controller) {
		return ((T (*)(ObjectSkillUpdate*, uintptr_t))(Il2CppBase() + 0x1DC1AE0))(this, controller);
	}
	template <typename T = void> T TriggerFailShowCost(uintptr_t controller) {
		return ((T (*)(ObjectSkillUpdate*, uintptr_t))(Il2CppBase() + 0x1DC196C))(this, controller);
	}
	template <typename T = void> T TriggerFailAllReadyUpdated(uintptr_t controller) {
		return ((T (*)(ObjectSkillUpdate*, uintptr_t))(Il2CppBase() + 0x1DC18B8))(this, controller);
	}
	template <typename T = bool> static T IsControllerUpdated(uintptr_t controller) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1DC11AC))(0, controller);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(ObjectSkillUpdate*))(Il2CppBase() + 0x1DC1B94))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(ObjectSkillUpdate*))(Il2CppBase() + 0x1DC1C5C))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerEnter2D(uintptr_t P0) {
		return ((T (*)(ObjectSkillUpdate*, uintptr_t))(Il2CppBase() + 0x1DC1C64))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_Triggerable(uintptr_t P0) {
		return ((T (*)(ObjectSkillUpdate*, uintptr_t))(Il2CppBase() + 0x1DC1C6C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(ObjectSkillUpdate*, uintptr_t))(Il2CppBase() + 0x1DC1C74))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerFail(uintptr_t P0) {
		return ((T (*)(ObjectSkillUpdate*, uintptr_t))(Il2CppBase() + 0x1DC1C7C))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_CanUse() {
		return ((T (*)(ObjectSkillUpdate*))(Il2CppBase() + 0x1DC1C84))(this);
	}

};

}
