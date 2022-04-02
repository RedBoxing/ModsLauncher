#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.Android {

class AndroidClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.Android", "AndroidClient"));
	}

	template <typename T = Il2CppString*> static T& BridgeActivityClass() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LaunchBridgeMethod() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LaunchBridgeSignature() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& tokenClient() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& invisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T CreatePlatformConfiguration(uintptr_t clientConfig) {
		return ((T (*)(AndroidClient*, uintptr_t))(Il2CppBase() + 0x35C8850))(this, clientConfig);
	}
	template <typename T = uintptr_t> T CreateTokenClient(bool reset) {
		return ((T (*)(AndroidClient*, bool))(Il2CppBase() + 0x35C8B44))(this, reset);
	}
	template <typename T = void> static T LaunchBridgeIntent(uintptr_t bridgedIntent) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35C8C7C))(0, bridgedIntent);
	}
	template <typename T = void> T Signout() {
		return ((T (*)(AndroidClient*))(Il2CppBase() + 0x35C923C))(this);
	}
	template <typename T = void> T GetPlayerStats(uintptr_t apiClient, void* callback) {
		return ((T (*)(AndroidClient*, uintptr_t, void*))(Il2CppBase() + 0x35C9338))(this, apiClient, callback);
	}
	template <typename T = void> T SetGravityForPopups(uintptr_t apiClient, uintptr_t gravity) {
		return ((T (*)(AndroidClient*, uintptr_t, uintptr_t))(Il2CppBase() + 0x35C9604))(this, apiClient, gravity);
	}

};

}
