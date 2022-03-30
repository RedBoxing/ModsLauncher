#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.Cwrapper {

class RealTimeEventListenerHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.Cwrapper", "RealTimeEventListenerHelper"));
	}


	template <typename T = void> static T RealTimeEventListenerHelper_SetOnParticipantStatusChangedCallback(uintptr_t self, uintptr_t callback, uintptr_t callback_arg) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x35776F8))(0, self, callback, callback_arg);
	}
	template <typename T = uintptr_t> static T RealTimeEventListenerHelper_Construct() {
		return ((T (*)(void *))(Il2CppBase() + 0x35777B4))(0);
	}
	template <typename T = void> static T RealTimeEventListenerHelper_SetOnP2PDisconnectedCallback(uintptr_t self, uintptr_t callback, uintptr_t callback_arg) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3577840))(0, self, callback, callback_arg);
	}
	template <typename T = void> static T RealTimeEventListenerHelper_SetOnDataReceivedCallback(uintptr_t self, uintptr_t callback, uintptr_t callback_arg) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x35778FC))(0, self, callback, callback_arg);
	}
	template <typename T = void> static T RealTimeEventListenerHelper_SetOnRoomStatusChangedCallback(uintptr_t self, uintptr_t callback, uintptr_t callback_arg) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x35779B8))(0, self, callback, callback_arg);
	}
	template <typename T = void> static T RealTimeEventListenerHelper_SetOnP2PConnectedCallback(uintptr_t self, uintptr_t callback, uintptr_t callback_arg) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3577A74))(0, self, callback, callback_arg);
	}
	template <typename T = void> static T RealTimeEventListenerHelper_SetOnRoomConnectedSetChangedCallback(uintptr_t self, uintptr_t callback, uintptr_t callback_arg) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3577B30))(0, self, callback, callback_arg);
	}
	template <typename T = void> static T RealTimeEventListenerHelper_Dispose(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3577BEC))(0, self);
	}

};

}
