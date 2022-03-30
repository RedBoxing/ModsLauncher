#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Com.Google.Android.Gms.Games.Stats {

class Stats
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Com.Google.Android.Gms.Games.Stats", "Stats"));
	}


	template <typename T = void*> T loadPlayerStats(uintptr_t arg_GoogleApiClient_1, bool arg_bool_2) {
		return ((T (*)(Stats*, uintptr_t, bool))(Il2CppBase() + 0x0))(this, arg_GoogleApiClient_1, arg_bool_2);
	}

};

}
