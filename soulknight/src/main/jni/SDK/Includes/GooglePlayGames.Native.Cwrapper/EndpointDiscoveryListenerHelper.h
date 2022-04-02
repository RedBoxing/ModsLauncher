#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.Cwrapper {

class EndpointDiscoveryListenerHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.Cwrapper", "EndpointDiscoveryListenerHelper"));
	}


	template <typename T = uintptr_t> static T EndpointDiscoveryListenerHelper_Construct() {
		return ((T (*)(void *))(Il2CppBase() + 0x35D115C))(0);
	}
	template <typename T = void> static T EndpointDiscoveryListenerHelper_SetOnEndpointLostCallback(uintptr_t self, uintptr_t callback, uintptr_t callback_arg) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x35D11E8))(0, self, callback, callback_arg);
	}
	template <typename T = void> static T EndpointDiscoveryListenerHelper_SetOnEndpointFoundCallback(uintptr_t self, uintptr_t callback, uintptr_t callback_arg) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x35D12A4))(0, self, callback, callback_arg);
	}
	template <typename T = void> static T EndpointDiscoveryListenerHelper_Dispose(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35D1360))(0, self);
	}

};

}
