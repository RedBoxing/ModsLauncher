#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.PInvoke {

class NativeEndpointDiscoveryListenerHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.PInvoke", "NativeEndpointDiscoveryListenerHelper"));
	}


	template <typename T = void> T CallDispose(uintptr_t selfPointer) {
		return ((T (*)(NativeEndpointDiscoveryListenerHelper*, uintptr_t))(Il2CppBase() + 0x2AF12A0))(this, selfPointer);
	}
	template <typename T = void> T SetOnEndpointFound(void* callback) {
		return ((T (*)(NativeEndpointDiscoveryListenerHelper*, void*))(Il2CppBase() + 0x2AF1324))(this, callback);
	}
	template <typename T = void> static T InternalOnEndpointFoundCallback(int64_t id, uintptr_t data, uintptr_t userData) {
		return ((T (*)(void *, int64_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AF0F90))(0, id, data, userData);
	}
	template <typename T = void> T SetOnEndpointLostCallback(void* callback) {
		return ((T (*)(NativeEndpointDiscoveryListenerHelper*, void*))(Il2CppBase() + 0x2AF1484))(this, callback);
	}
	template <typename T = void> static T InternalOnEndpointLostCallback(int64_t id, Il2CppString* lostEndpointId, uintptr_t userData) {
		return ((T (*)(void *, int64_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x2AF1074))(0, id, lostEndpointId, userData);
	}

};

}
