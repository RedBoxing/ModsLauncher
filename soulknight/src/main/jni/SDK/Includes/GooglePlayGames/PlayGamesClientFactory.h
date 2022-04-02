#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames {

class PlayGamesClientFactory
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames", "PlayGamesClientFactory"));
	}


	template <typename T = uintptr_t> static T GetPlatformPlayGamesClient(uintptr_t config) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x46126EC))(0, config);
	}

};

}
