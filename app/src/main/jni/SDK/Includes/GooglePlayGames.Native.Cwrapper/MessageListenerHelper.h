#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.Cwrapper {

class MessageListenerHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.Cwrapper", "MessageListenerHelper"));
	}


	template <typename T = void> static T MessageListenerHelper_SetOnMessageReceivedCallback(uintptr_t self, uintptr_t callback, uintptr_t callback_arg) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x35D7C5C))(0, self, callback, callback_arg);
	}
	template <typename T = void> static T MessageListenerHelper_SetOnDisconnectedCallback(uintptr_t self, uintptr_t callback, uintptr_t callback_arg) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x35D7D18))(0, self, callback, callback_arg);
	}
	template <typename T = uintptr_t> static T MessageListenerHelper_Construct() {
		return ((T (*)(void *))(Il2CppBase() + 0x35D7DD4))(0);
	}
	template <typename T = void> static T MessageListenerHelper_Dispose(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35D7E60))(0, self);
	}

};

}
