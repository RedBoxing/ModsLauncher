#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Com.Google.Android.Gms.Games.Stats {

class StatsLoadPlayerStatsResult
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Com.Google.Android.Gms.Games.Stats", "Stats_LoadPlayerStatsResult"));
	}


	template <typename T = uintptr_t> T getPlayerStats() {
		return ((T (*)(StatsLoadPlayerStatsResult*))(Il2CppBase() + 0x0))(this);
	}

};

}
