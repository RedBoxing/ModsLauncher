#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectMercenaryTraining
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectMercenaryTraining"));
	}

	template <typename T = int32_t> static T& MAX_LEVEL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& stateIndex() {
		return *(T*)((uintptr_t)this + 0xA8);
	}

	template <typename T = void> T Start() {
		return ((T (*)(ObjectMercenaryTraining*))(Il2CppBase() + 0x1DB4E98))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(ObjectMercenaryTraining*, uintptr_t))(Il2CppBase() + 0x1DB4F58))(this, other);
	}
	template <typename T = bool> T Triggerable(uintptr_t controller) {
		return ((T (*)(ObjectMercenaryTraining*, uintptr_t))(Il2CppBase() + 0x1DB5028))(this, controller);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(ObjectMercenaryTraining*, uintptr_t))(Il2CppBase() + 0x1DB5364))(this, controller);
	}
	template <typename T = void> T OnItemTriggerFail(uintptr_t controller) {
		return ((T (*)(ObjectMercenaryTraining*, uintptr_t))(Il2CppBase() + 0x1DB571C))(this, controller);
	}
	template <typename T = void> T TalkNoTarget() {
		return ((T (*)(ObjectMercenaryTraining*))(Il2CppBase() + 0x1DB5C94))(this);
	}
	template <typename T = void> T TalkMaxLevel() {
		return ((T (*)(ObjectMercenaryTraining*))(Il2CppBase() + 0x1DB5D7C))(this);
	}
	template <typename T = uintptr_t> T Train(uintptr_t controller) {
		return ((T (*)(ObjectMercenaryTraining*, uintptr_t))(Il2CppBase() + 0x1DB5654))(this, controller);
	}
	template <typename T = void> T Train_1() {
		return ((T (*)(ObjectMercenaryTraining*))(Il2CppBase() + 0x1DB5E90))(this);
	}
	template <typename T = bool> T CanTrain(uintptr_t mercenary) {
		return ((T (*)(ObjectMercenaryTraining*, uintptr_t))(Il2CppBase() + 0x1DB60D0))(this, mercenary);
	}
	template <typename T = bool> T IsAllDead() {
		return ((T (*)(ObjectMercenaryTraining*))(Il2CppBase() + 0x1DB5A94))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetTrainableMercenaries() {
		return ((T (*)(ObjectMercenaryTraining*))(Il2CppBase() + 0x1DB5178))(this);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(ObjectMercenaryTraining*))(Il2CppBase() + 0x1DB6200))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(ObjectMercenaryTraining*))(Il2CppBase() + 0x1DB631C))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerEnter2D(uintptr_t P0) {
		return ((T (*)(ObjectMercenaryTraining*, uintptr_t))(Il2CppBase() + 0x1DB6324))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_Triggerable(uintptr_t P0) {
		return ((T (*)(ObjectMercenaryTraining*, uintptr_t))(Il2CppBase() + 0x1DB632C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(ObjectMercenaryTraining*, uintptr_t))(Il2CppBase() + 0x1DB6334))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerFail(uintptr_t P0) {
		return ((T (*)(ObjectMercenaryTraining*, uintptr_t))(Il2CppBase() + 0x1DB633C))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_CanUse() {
		return ((T (*)(ObjectMercenaryTraining*))(Il2CppBase() + 0x1DB6344))(this);
	}

};

}
