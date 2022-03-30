#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.BasicApi.Multiplayer {

class MatchDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.BasicApi.Multiplayer", "MatchDelegate"));
	}


	template <typename T = void> T Invoke(uintptr_t match, bool shouldAutoLaunch) {
		return ((T (*)(MatchDelegate*, uintptr_t, bool))(Il2CppBase() + 0x35C0A08))(this, match, shouldAutoLaunch);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t match, bool shouldAutoLaunch, uintptr_t callback, uintptr_t object) {
		return ((T (*)(MatchDelegate*, uintptr_t, bool, uintptr_t, uintptr_t))(Il2CppBase() + 0x35C1188))(this, match, shouldAutoLaunch, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(MatchDelegate*, uintptr_t))(Il2CppBase() + 0x35C1228))(this, result);
	}

};

}
