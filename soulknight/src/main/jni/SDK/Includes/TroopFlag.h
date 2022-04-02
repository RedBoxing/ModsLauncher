#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TroopFlag
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TroopFlag"));
	}

	template <typename T = int32_t> static T& maxFlagLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Start() {
		return ((T (*)(TroopFlag*))(Il2CppBase() + 0x440D8F0))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(TroopFlag*, uintptr_t))(Il2CppBase() + 0x440DA90))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(TroopFlag*, uintptr_t))(Il2CppBase() + 0x440DCB8))(this, other);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(TroopFlag*, uintptr_t))(Il2CppBase() + 0x440DE04))(this, controller);
	}
	template <typename T = void> T OnItemTriggerFail(uintptr_t controller) {
		return ((T (*)(TroopFlag*, uintptr_t))(Il2CppBase() + 0x440EA18))(this, controller);
	}
	template <typename T = bool> T Triggerable(uintptr_t controller) {
		return ((T (*)(TroopFlag*, uintptr_t))(Il2CppBase() + 0x440ED98))(this, controller);
	}
	template <typename T = void> T RefreshSprites() {
		return ((T (*)(TroopFlag*))(Il2CppBase() + 0x440D95C))(this);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(TroopFlag*))(Il2CppBase() + 0x440EED0))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(TroopFlag*))(Il2CppBase() + 0x440F018))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerEnter2D(uintptr_t P0) {
		return ((T (*)(TroopFlag*, uintptr_t))(Il2CppBase() + 0x440F020))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerExit2D(uintptr_t P0) {
		return ((T (*)(TroopFlag*, uintptr_t))(Il2CppBase() + 0x440F028))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(TroopFlag*, uintptr_t))(Il2CppBase() + 0x440F030))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerFail(uintptr_t P0) {
		return ((T (*)(TroopFlag*, uintptr_t))(Il2CppBase() + 0x440F038))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_Triggerable(uintptr_t P0) {
		return ((T (*)(TroopFlag*, uintptr_t))(Il2CppBase() + 0x440F040))(this, P0);
	}
	template <typename T = int32_t> T iFixBaseProxy_GetItemValue() {
		return ((T (*)(TroopFlag*))(Il2CppBase() + 0x440F048))(this);
	}

};

}
