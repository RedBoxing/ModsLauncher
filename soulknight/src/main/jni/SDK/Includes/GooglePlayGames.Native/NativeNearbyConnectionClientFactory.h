#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native {

class NativeNearbyConnectionClientFactory
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native", "NativeNearbyConnectionClientFactory"));
	}

	template <typename T = uintptr_t> static T& sManager() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& sCreationCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> static T GetManager() {
		return ((T (*)(void *))(Il2CppBase() + 0x35923E8))(0);
	}
	template <typename T = void> static T Create(void* callback) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x359247C))(0, callback);
	}
	template <typename T = void> static T InitializeFactory() {
		return ((T (*)(void *))(Il2CppBase() + 0x3592588))(0);
	}
	template <typename T = void> static T OnManagerInitialized(uintptr_t status) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3592840))(0, status);
	}

};

}
