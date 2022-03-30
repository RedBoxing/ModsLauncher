#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Com.Google.Android.Gms.Games.Stats {

class StatsObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Com.Google.Android.Gms.Games.Stats", "StatsObject"));
	}

	template <typename T = Il2CppString*> static T& CLASS_NAME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void*> T loadPlayerStats(uintptr_t arg_GoogleApiClient_1, bool arg_bool_2) {
		return ((T (*)(StatsObject*, uintptr_t, bool))(Il2CppBase() + 0x2078308))(this, arg_GoogleApiClient_1, arg_bool_2);
	}

};

}
