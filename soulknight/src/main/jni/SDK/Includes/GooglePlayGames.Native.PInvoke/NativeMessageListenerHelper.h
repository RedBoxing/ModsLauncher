#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.PInvoke {

class NativeMessageListenerHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.PInvoke", "NativeMessageListenerHelper"));
	}


	template <typename T = void> T CallDispose(uintptr_t selfPointer) {
		return ((T (*)(NativeMessageListenerHelper*, uintptr_t))(Il2CppBase() + 0x2AF2460))(this, selfPointer);
	}
	template <typename T = void> T SetOnMessageReceivedCallback(uintptr_t callback) {
		return ((T (*)(NativeMessageListenerHelper*, uintptr_t))(Il2CppBase() + 0x2AF24E4))(this, callback);
	}
	template <typename T = void> static T InternalOnMessageReceivedCallback(int64_t id, Il2CppString* name, uintptr_t data, uintptr_t dataLength, bool isReliable, uintptr_t userData) {
		return ((T (*)(void *, int64_t, Il2CppString*, uintptr_t, uintptr_t, bool, uintptr_t))(Il2CppBase() + 0x2AF201C))(0, id, name, data, dataLength, isReliable, userData);
	}
	template <typename T = void> T SetOnDisconnectedCallback(void* callback) {
		return ((T (*)(NativeMessageListenerHelper*, void*))(Il2CppBase() + 0x2AF2AC8))(this, callback);
	}
	template <typename T = void> static T InternalOnDisconnectedCallback(int64_t id, Il2CppString* lostEndpointId, uintptr_t userData) {
		return ((T (*)(void *, int64_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x2AF2234))(0, id, lostEndpointId, userData);
	}

};

}
