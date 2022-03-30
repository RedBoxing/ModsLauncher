#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TalkTroopMercenary
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TalkTroopMercenary"));
	}

	template <typename T = uintptr_t> T& mercenary() {
		return *(T*)((uintptr_t)this + 0x98);
	}

	template <typename T = int32_t> T get_price() {
		return ((T (*)(TalkTroopMercenary*))(Il2CppBase() + 0x43B1A50))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(TalkTroopMercenary*))(Il2CppBase() + 0x43B1AC4))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(TalkTroopMercenary*, uintptr_t))(Il2CppBase() + 0x43B1B5C))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(TalkTroopMercenary*, uintptr_t))(Il2CppBase() + 0x43B237C))(this, other);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(TalkTroopMercenary*, uintptr_t))(Il2CppBase() + 0x43B2510))(this, controller);
	}
	template <typename T = int32_t> T GetMercenaryIndex() {
		return ((T (*)(TalkTroopMercenary*))(Il2CppBase() + 0x43B28CC))(this);
	}
	template <typename T = void> T OnItemTriggerFail(uintptr_t controller) {
		return ((T (*)(TalkTroopMercenary*, uintptr_t))(Il2CppBase() + 0x43B2AFC))(this, controller);
	}
	template <typename T = bool> T Triggerable(uintptr_t controller) {
		return ((T (*)(TalkTroopMercenary*, uintptr_t))(Il2CppBase() + 0x43B2F94))(this, controller);
	}
	template <typename T = bool> T IsThird() {
		return ((T (*)(TalkTroopMercenary*))(Il2CppBase() + 0x43B30B0))(this);
	}
	template <typename T = void> T ShowItemInfo() {
		return ((T (*)(TalkTroopMercenary*))(Il2CppBase() + 0x43B1C90))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(TalkTroopMercenary*))(Il2CppBase() + 0x43B32F8))(this);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(TalkTroopMercenary*))(Il2CppBase() + 0x43B340C))(this);
	}
	template <typename T = int32_t> T get_troopCount() {
		return ((T (*)(TalkTroopMercenary*))(Il2CppBase() + 0x43B2DD8))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerEnter2D(uintptr_t P0) {
		return ((T (*)(TalkTroopMercenary*, uintptr_t))(Il2CppBase() + 0x43B3504))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerExit2D(uintptr_t P0) {
		return ((T (*)(TalkTroopMercenary*, uintptr_t))(Il2CppBase() + 0x43B350C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(TalkTroopMercenary*, uintptr_t))(Il2CppBase() + 0x43B3514))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerFail(uintptr_t P0) {
		return ((T (*)(TalkTroopMercenary*, uintptr_t))(Il2CppBase() + 0x43B351C))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_Triggerable(uintptr_t P0) {
		return ((T (*)(TalkTroopMercenary*, uintptr_t))(Il2CppBase() + 0x43B3524))(this, P0);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_GetItemName() {
		return ((T (*)(TalkTroopMercenary*))(Il2CppBase() + 0x43B352C))(this);
	}
	template <typename T = int32_t> T iFixBaseProxy_GetItemValue() {
		return ((T (*)(TalkTroopMercenary*))(Il2CppBase() + 0x43B3534))(this);
	}

};

}
