#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.PInvoke {

class GameServices
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.PInvoke", "GameServices"));
	}


	template <typename T = bool> T IsAuthenticated() {
		return ((T (*)(GameServices*))(Il2CppBase() + 0x2AE7DD8))(this);
	}
	template <typename T = void> T SignOut() {
		return ((T (*)(GameServices*))(Il2CppBase() + 0x2AE7E44))(this);
	}
	template <typename T = void> T StartAuthorizationUI() {
		return ((T (*)(GameServices*))(Il2CppBase() + 0x2AE7EB0))(this);
	}
	template <typename T = uintptr_t> T AchievementManager() {
		return ((T (*)(GameServices*))(Il2CppBase() + 0x2AE7F1C))(this);
	}
	template <typename T = uintptr_t> T LeaderboardManager() {
		return ((T (*)(GameServices*))(Il2CppBase() + 0x2AE7FC0))(this);
	}
	template <typename T = uintptr_t> T PlayerManager() {
		return ((T (*)(GameServices*))(Il2CppBase() + 0x2AE80D0))(this);
	}
	template <typename T = uintptr_t> T StatsManager() {
		return ((T (*)(GameServices*))(Il2CppBase() + 0x2AE81E0))(this);
	}
	template <typename T = uintptr_t> T AsHandle() {
		return ((T (*)(GameServices*))(Il2CppBase() + 0x2AE8284))(this);
	}
	template <typename T = void> T CallDispose(uintptr_t selfPointer) {
		return ((T (*)(GameServices*, uintptr_t))(Il2CppBase() + 0x2AE82E8))(this, selfPointer);
	}

};

}
