#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TroopTalk
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TroopTalk"));
	}


	template <typename T = uintptr_t> T get_mercenary() {
		return ((T (*)(TroopTalk*))(Il2CppBase() + 0x4416DAC))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(TroopTalk*, uintptr_t))(Il2CppBase() + 0x4416E3C))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(TroopTalk*, uintptr_t))(Il2CppBase() + 0x4417878))(this, other);
	}
	template <typename T = void> T OnReady() {
		return ((T (*)(TroopTalk*))(Il2CppBase() + 0x4417A40))(this);
	}
	template <typename T = bool> T Triggerable(uintptr_t controller) {
		return ((T (*)(TroopTalk*, uintptr_t))(Il2CppBase() + 0x4417AA4))(this, controller);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(TroopTalk*, uintptr_t))(Il2CppBase() + 0x4417BE0))(this, controller);
	}
	template <typename T = void> T OnItemTriggerFail(uintptr_t controller) {
		return ((T (*)(TroopTalk*, uintptr_t))(Il2CppBase() + 0x4417EDC))(this, controller);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(TroopTalk*))(Il2CppBase() + 0x4418948))(this);
	}
	template <typename T = void> T ShowItemInfo() {
		return ((T (*)(TroopTalk*))(Il2CppBase() + 0x44170F8))(this);
	}
	template <typename T = void> T OnItemTriggerFailg__EndDialog|7_0(uintptr_t ) {
		return ((T (*)(TroopTalk*, uintptr_t))(Il2CppBase() + 0x44188FC))(this, );
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerEnter2D(uintptr_t P0) {
		return ((T (*)(TroopTalk*, uintptr_t))(Il2CppBase() + 0x4418B64))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerExit2D(uintptr_t P0) {
		return ((T (*)(TroopTalk*, uintptr_t))(Il2CppBase() + 0x4418B6C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnReady() {
		return ((T (*)(TroopTalk*))(Il2CppBase() + 0x4418B74))(this);
	}
	template <typename T = bool> T iFixBaseProxy_Triggerable(uintptr_t P0) {
		return ((T (*)(TroopTalk*, uintptr_t))(Il2CppBase() + 0x4418B7C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(TroopTalk*, uintptr_t))(Il2CppBase() + 0x4418B84))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerFail(uintptr_t P0) {
		return ((T (*)(TroopTalk*, uintptr_t))(Il2CppBase() + 0x4418B8C))(this, P0);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_GetItemName() {
		return ((T (*)(TroopTalk*))(Il2CppBase() + 0x4418B94))(this);
	}

};

}
