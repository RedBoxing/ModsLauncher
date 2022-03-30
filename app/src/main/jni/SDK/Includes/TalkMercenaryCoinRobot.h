#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TalkMercenaryCoinRobot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TalkMercenaryCoinRobot"));
	}

	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppString*> T& talk_string() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppString*> T& talk_not_money() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& coinCount() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& master() {
		return *(T*)((uintptr_t)this + 0xB8);
	}

	template <typename T = bool> T Triggerable(uintptr_t controller) {
		return ((T (*)(TalkMercenaryCoinRobot*, uintptr_t))(Il2CppBase() + 0x43ADB40))(this, controller);
	}
	template <typename T = void> T OnItemTriggerFail(uintptr_t controller) {
		return ((T (*)(TalkMercenaryCoinRobot*, uintptr_t))(Il2CppBase() + 0x43ADC80))(this, controller);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(TalkMercenaryCoinRobot*, uintptr_t))(Il2CppBase() + 0x43ADF5C))(this, controller);
	}
	template <typename T = void> T NoMoney() {
		return ((T (*)(TalkMercenaryCoinRobot*))(Il2CppBase() + 0x43AE1C0))(this);
	}
	template <typename T = uintptr_t> T DelayGetMercenary() {
		return ((T (*)(TalkMercenaryCoinRobot*))(Il2CppBase() + 0x43AE27C))(this);
	}
	template <typename T = void> T GetMercenary() {
		return ((T (*)(TalkMercenaryCoinRobot*))(Il2CppBase() + 0x43AE35C))(this);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(TalkMercenaryCoinRobot*))(Il2CppBase() + 0x43AE738))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(TalkMercenaryCoinRobot*))(Il2CppBase() + 0x43AE884))(this);
	}
	template <typename T = bool> T iFixBaseProxy_Triggerable(uintptr_t P0) {
		return ((T (*)(TalkMercenaryCoinRobot*, uintptr_t))(Il2CppBase() + 0x43AE9F0))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerFail(uintptr_t P0) {
		return ((T (*)(TalkMercenaryCoinRobot*, uintptr_t))(Il2CppBase() + 0x43AE9F8))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(TalkMercenaryCoinRobot*, uintptr_t))(Il2CppBase() + 0x43AEA00))(this, P0);
	}
	template <typename T = int32_t> T iFixBaseProxy_GetItemValue() {
		return ((T (*)(TalkMercenaryCoinRobot*))(Il2CppBase() + 0x43AEA08))(this);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_GetItemName() {
		return ((T (*)(TalkMercenaryCoinRobot*))(Il2CppBase() + 0x43AEA10))(this);
	}

};

}
