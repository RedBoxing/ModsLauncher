#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.PInvoke {

class StatsManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.PInvoke", "StatsManager"));
	}

	template <typename T = uintptr_t> T& mServices() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T FetchForPlayer(void* callback) {
		return ((T (*)(StatsManager*, void*))(Il2CppBase() + 0x4609208))(this, callback);
	}
	template <typename T = void> static T InternalFetchForPlayerCallback(uintptr_t response, uintptr_t data) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x46090C8))(0, response, data);
	}

};

}
