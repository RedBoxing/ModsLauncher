#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectCustomFactor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectCustomFactor"));
	}

	template <typename T = Il2CppString*> T& objectName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& multiGameTalkKey() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& factorAddAskKey() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& factorAddTalkKey() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& customFactorId() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& factorAddAskClip() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& factorAddTalkClip() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppVector3> T& talkOffset() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& _talkState() {
		return *(T*)((uintptr_t)this + 0x5C);
	}

	template <typename T = Il2CppVector3> T get_talkPosition() {
		return ((T (*)(ObjectCustomFactor*))(Il2CppBase() + 0x1D522D0))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ObjectCustomFactor*))(Il2CppBase() + 0x1D523E8))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(ObjectCustomFactor*, uintptr_t))(Il2CppBase() + 0x1D52444))(this, other);
	}
	template <typename T = void> T ControllerEnter(uintptr_t controller) {
		return ((T (*)(ObjectCustomFactor*, uintptr_t))(Il2CppBase() + 0x1D5257C))(this, controller);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(ObjectCustomFactor*, uintptr_t))(Il2CppBase() + 0x1D52694))(this, other);
	}
	template <typename T = void> T ControllerExit(uintptr_t controller) {
		return ((T (*)(ObjectCustomFactor*, uintptr_t))(Il2CppBase() + 0x1D527CC))(this, controller);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(ObjectCustomFactor*, uintptr_t))(Il2CppBase() + 0x1D528B8))(this, controller);
	}
	template <typename T = void> T FactorAddAsk() {
		return ((T (*)(ObjectCustomFactor*))(Il2CppBase() + 0x1D52A44))(this);
	}
	template <typename T = void> T FactorAddTalk(uintptr_t controller) {
		return ((T (*)(ObjectCustomFactor*, uintptr_t))(Il2CppBase() + 0x1D52B88))(this, controller);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(ObjectCustomFactor*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1D52D90))(this, controller, ext_info);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(ObjectCustomFactor*))(Il2CppBase() + 0x1D52E08))(this);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(ObjectCustomFactor*))(Il2CppBase() + 0x1D52EB8))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(ObjectCustomFactor*))(Il2CppBase() + 0x1D52F18))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(ObjectCustomFactor*))(Il2CppBase() + 0x1D52F78))(this);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(ObjectCustomFactor*))(Il2CppBase() + 0x1D52FD8))(this);
	}

};

}
