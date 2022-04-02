#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames {

class GameInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames", "GameInfo"));
	}

	template <typename T = Il2CppString*> static T& UnescapedApplicationId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& UnescapedWebClientId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& UnescapedNearbyServiceId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ApplicationId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& WebClientId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& NearbyConnectionServiceId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> static T ApplicationIdInitialized() {
		return ((T (*)(void *))(Il2CppBase() + 0x35C8534))(0);
	}
	template <typename T = bool> static T WebClientIdInitialized() {
		return ((T (*)(void *))(Il2CppBase() + 0x35C86A0))(0);
	}
	template <typename T = bool> static T NearbyConnectionsInitialized() {
		return ((T (*)(void *))(Il2CppBase() + 0x35C8778))(0);
	}
	template <typename T = Il2CppString*> static T ToEscapedToken(Il2CppString* token) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x35C860C))(0, token);
	}

};

}
