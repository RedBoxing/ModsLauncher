#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.PInvoke {

class RealTimeEventListenerHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.PInvoke", "RealTimeEventListenerHelper"));
	}


	template <typename T = void> T CallDispose(uintptr_t selfPointer) {
		return ((T (*)(RealTimeEventListenerHelper*, uintptr_t))(Il2CppBase() + 0x2AFD698))(this, selfPointer);
	}
	template <typename T = uintptr_t> T SetOnRoomStatusChangedCallback(void* callback) {
		return ((T (*)(RealTimeEventListenerHelper*, void*))(Il2CppBase() + 0x2AFD71C))(this, callback);
	}
	template <typename T = void> static T InternalOnRoomStatusChangedCallback(uintptr_t response, uintptr_t data) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AFCD34))(0, response, data);
	}
	template <typename T = uintptr_t> T SetOnRoomConnectedSetChangedCallback(void* callback) {
		return ((T (*)(RealTimeEventListenerHelper*, void*))(Il2CppBase() + 0x2AFD928))(this, callback);
	}
	template <typename T = void> static T InternalOnRoomConnectedSetChangedCallback(uintptr_t response, uintptr_t data) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AFCE04))(0, response, data);
	}
	template <typename T = uintptr_t> T SetOnP2PConnectedCallback(void* callback) {
		return ((T (*)(RealTimeEventListenerHelper*, void*))(Il2CppBase() + 0x2AFDA2C))(this, callback);
	}
	template <typename T = void> static T InternalOnP2PConnectedCallback(uintptr_t room, uintptr_t participant, uintptr_t data) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AFCED4))(0, room, participant, data);
	}
	template <typename T = uintptr_t> T SetOnP2PDisconnectedCallback(void* callback) {
		return ((T (*)(RealTimeEventListenerHelper*, void*))(Il2CppBase() + 0x2AFDFF4))(this, callback);
	}
	template <typename T = void> static T InternalOnP2PDisconnectedCallback(uintptr_t room, uintptr_t participant, uintptr_t data) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AFCF88))(0, room, participant, data);
	}
	template <typename T = uintptr_t> T SetOnParticipantStatusChangedCallback(void* callback) {
		return ((T (*)(RealTimeEventListenerHelper*, void*))(Il2CppBase() + 0x2AFE11C))(this, callback);
	}
	template <typename T = void> static T InternalOnParticipantStatusChangedCallback(uintptr_t room, uintptr_t participant, uintptr_t data) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AFD03C))(0, room, participant, data);
	}
	template <typename T = void> static T PerformRoomAndParticipantCallback(Il2CppString* callbackName, uintptr_t room, uintptr_t participant, uintptr_t data) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AFDB54))(0, callbackName, room, participant, data);
	}
	template <typename T = uintptr_t> T SetOnDataReceivedCallback(void* callback) {
		return ((T (*)(RealTimeEventListenerHelper*, void*))(Il2CppBase() + 0x2AFE244))(this, callback);
	}
	template <typename T = void> static T InternalOnDataReceived(uintptr_t room, uintptr_t participant, uintptr_t data, uintptr_t dataLength, bool isReliable, uintptr_t userData) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, bool, uintptr_t))(Il2CppBase() + 0x2AFD0F0))(0, room, participant, data, dataLength, isReliable, userData);
	}
	template <typename T = uintptr_t> static T ToCallbackPointer(void* callback) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x2AFD820))(0, callback);
	}
	template <typename T = uintptr_t> static T Create() {
		return ((T (*)(void *))(Il2CppBase() + 0x2AFE3EC))(0);
	}

};

}
