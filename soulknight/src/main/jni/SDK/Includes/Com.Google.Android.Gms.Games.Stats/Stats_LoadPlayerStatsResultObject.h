#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Com.Google.Android.Gms.Games.Stats {

class StatsLoadPlayerStatsResultObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Com.Google.Android.Gms.Games.Stats", "Stats_LoadPlayerStatsResultObject"));
	}

	template <typename T = Il2CppString*> static T& CLASS_NAME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T getPlayerStats() {
		return ((T (*)(StatsLoadPlayerStatsResultObject*))(Il2CppBase() + 0x20784E8))(this);
	}
	template <typename T = uintptr_t> T getStatus() {
		return ((T (*)(StatsLoadPlayerStatsResultObject*))(Il2CppBase() + 0x20785D4))(this);
	}

};

}
