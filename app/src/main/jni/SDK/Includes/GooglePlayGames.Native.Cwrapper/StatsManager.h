#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.Cwrapper {

class StatsManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.Cwrapper", "StatsManager"));
	}


	template <typename T = void> static T StatsManager_FetchForPlayer(uintptr_t self, uintptr_t data_source, uintptr_t callback, uintptr_t callback_arg) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x35839B0))(0, self, data_source, callback, callback_arg);
	}
	template <typename T = void> static T StatsManager_FetchForPlayerResponse_Dispose(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3583A7C))(0, self);
	}
	template <typename T = uintptr_t> static T StatsManager_FetchForPlayerResponse_GetStatus(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3583B18))(0, self);
	}
	template <typename T = uintptr_t> static T StatsManager_FetchForPlayerResponse_GetData(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3583BB4))(0, self);
	}

};

}
