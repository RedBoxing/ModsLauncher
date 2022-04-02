#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemTokenMachine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemTokenMachine"));
	}

	template <typename T = uintptr_t> T& audioGiveTicket() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& audioWave() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& audioSendReward() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& ticketRecver() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& itemContainer() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& tickets() {
		return *(T*)((uintptr_t)this + 0xC0);
	}

	template <typename T = void> T SetRGRandomSeed(int32_t seed) {
		return ((T (*)(ItemTokenMachine*, int32_t))(Il2CppBase() + 0x1CE84CC))(this, seed);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(ItemTokenMachine*, uintptr_t))(Il2CppBase() + 0x1CE85B4))(this, other);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(ItemTokenMachine*, uintptr_t))(Il2CppBase() + 0x1CE8700))(this, controller);
	}
	template <typename T = void> T OnItemTriggerFail(uintptr_t controller) {
		return ((T (*)(ItemTokenMachine*, uintptr_t))(Il2CppBase() + 0x1CE8A9C))(this, controller);
	}
	template <typename T = bool> T Triggerable(uintptr_t controller) {
		return ((T (*)(ItemTokenMachine*, uintptr_t))(Il2CppBase() + 0x1CE8D2C))(this, controller);
	}
	template <typename T = bool> static T CheckHeroTokenUsable() {
		return ((T (*)(void *))(Il2CppBase() + 0x1CE8DF8))(0);
	}
	template <typename T = void> T CheckTicket(uintptr_t controller) {
		return ((T (*)(ItemTokenMachine*, uintptr_t))(Il2CppBase() + 0x1CE87A4))(this, controller);
	}
	template <typename T = bool> T get_isWorking() {
		return ((T (*)(ItemTokenMachine*))(Il2CppBase() + 0x1CE864C))(this);
	}
	template <typename T = void> T set_isWorking(bool value) {
		return ((T (*)(ItemTokenMachine*, bool))(Il2CppBase() + 0x1CE93C8))(this, value);
	}
	template <typename T = void> T ReceiveTicket(uintptr_t weapon, Il2CppString* ticketName, uintptr_t ticketType) {
		return ((T (*)(ItemTokenMachine*, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1CE9060))(this, weapon, ticketName, ticketType);
	}
	template <typename T = void> T CreateReward(Il2CppString* ticketName) {
		return ((T (*)(ItemTokenMachine*, Il2CppString*))(Il2CppBase() + 0x1CE9494))(this, ticketName);
	}
	template <typename T = void> T OnChestOpen() {
		return ((T (*)(ItemTokenMachine*))(Il2CppBase() + 0x1CE9B44))(this);
	}
	template <typename T = void> T OnChestClosed() {
		return ((T (*)(ItemTokenMachine*))(Il2CppBase() + 0x1CE9CD8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ItemTokenMachine*))(Il2CppBase() + 0x1CE9D74))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetRGRandomSeed(int32_t P0) {
		return ((T (*)(ItemTokenMachine*, int32_t))(Il2CppBase() + 0x1CE9EFC))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerEnter2D(uintptr_t P0) {
		return ((T (*)(ItemTokenMachine*, uintptr_t))(Il2CppBase() + 0x1CE9F04))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(ItemTokenMachine*, uintptr_t))(Il2CppBase() + 0x1CE9F0C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerFail(uintptr_t P0) {
		return ((T (*)(ItemTokenMachine*, uintptr_t))(Il2CppBase() + 0x1CE9F14))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_Triggerable(uintptr_t P0) {
		return ((T (*)(ItemTokenMachine*, uintptr_t))(Il2CppBase() + 0x1CE9F1C))(this, P0);
	}

};

}
