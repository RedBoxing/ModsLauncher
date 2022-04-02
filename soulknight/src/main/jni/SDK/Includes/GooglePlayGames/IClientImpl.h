#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames {

class IClientImpl
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames", "IClientImpl"));
	}


	template <typename T = uintptr_t> T CreatePlatformConfiguration(uintptr_t clientConfig) {
		return ((T (*)(IClientImpl*, uintptr_t))(Il2CppBase() + 0x0))(this, clientConfig);
	}
	template <typename T = uintptr_t> T CreateTokenClient(bool reset) {
		return ((T (*)(IClientImpl*, bool))(Il2CppBase() + 0x0))(this, reset);
	}
	template <typename T = void> T GetPlayerStats(uintptr_t apiClientPtr, void* callback) {
		return ((T (*)(IClientImpl*, uintptr_t, void*))(Il2CppBase() + 0x0))(this, apiClientPtr, callback);
	}
	template <typename T = void> T SetGravityForPopups(uintptr_t apiClient, uintptr_t gravity) {
		return ((T (*)(IClientImpl*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, apiClient, gravity);
	}

};

}
