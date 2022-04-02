#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ModeGate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ModeGate"));
	}

	template <typename T = uintptr_t> T& mode() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppString*> T& bundleName() {
		return *(T*)((uintptr_t)this + 0xC0);
	}

	template <typename T = bool> T get_isUnlock() {
		return ((T (*)(ModeGate*))(Il2CppBase() + 0x41F63FC))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ModeGate*))(Il2CppBase() + 0x41F64C0))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(ModeGate*, uintptr_t))(Il2CppBase() + 0x41F6524))(this, other);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(ModeGate*, uintptr_t))(Il2CppBase() + 0x41F65CC))(this, controller);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(ModeGate*, uintptr_t))(Il2CppBase() + 0x41F6668))(this, controller);
	}
	template <typename T = void> T MakeConsume() {
		return ((T (*)(ModeGate*))(Il2CppBase() + 0x41F6AC4))(this);
	}
	template <typename T = bool> T get_needPlot() {
		return ((T (*)(ModeGate*))(Il2CppBase() + 0x41F6F10))(this);
	}
	template <typename T = void> T EnterPlot() {
		return ((T (*)(ModeGate*))(Il2CppBase() + 0x41F6F90))(this);
	}
	template <typename T = void> T TryEnterMode() {
		return ((T (*)(ModeGate*))(Il2CppBase() + 0x41F6870))(this);
	}
	template <typename T = void> T EnterMode() {
		return ((T (*)(ModeGate*))(Il2CppBase() + 0x41F70B8))(this);
	}
	template <typename T = void> T OnItemTriggerFail(uintptr_t controller) {
		return ((T (*)(ModeGate*, uintptr_t))(Il2CppBase() + 0x41F75D0))(this, controller);
	}
	template <typename T = void> T OnItemTriggerState(uintptr_t controller, int32_t state) {
		return ((T (*)(ModeGate*, uintptr_t, int32_t))(Il2CppBase() + 0x41F7740))(this, controller, state);
	}
	template <typename T = void> T CreateModeData() {
		return ((T (*)(ModeGate*))(Il2CppBase() + 0x41F74D4))(this);
	}
	template <typename T = bool> T Triggerable(uintptr_t controller) {
		return ((T (*)(ModeGate*, uintptr_t))(Il2CppBase() + 0x41F7A5C))(this, controller);
	}
	template <typename T = void> T TryEnterModeb__13_0() {
		return ((T (*)(ModeGate*))(Il2CppBase() + 0x41F7C88))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(ModeGate*))(Il2CppBase() + 0x41F7C8C))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerEnter2D(uintptr_t P0) {
		return ((T (*)(ModeGate*, uintptr_t))(Il2CppBase() + 0x41F7C94))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_ItemTrigger(uintptr_t P0) {
		return ((T (*)(ModeGate*, uintptr_t))(Il2CppBase() + 0x41F7C9C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(ModeGate*, uintptr_t))(Il2CppBase() + 0x41F7CA4))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerFail(uintptr_t P0) {
		return ((T (*)(ModeGate*, uintptr_t))(Il2CppBase() + 0x41F7CAC))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerState(uintptr_t P0, int32_t P1) {
		return ((T (*)(ModeGate*, uintptr_t, int32_t))(Il2CppBase() + 0x41F7CB4))(this, P0, P1);
	}
	template <typename T = bool> T iFixBaseProxy_Triggerable(uintptr_t P0) {
		return ((T (*)(ModeGate*, uintptr_t))(Il2CppBase() + 0x41F7CBC))(this, P0);
	}

};

}
