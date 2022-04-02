#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Com.Google.Android.Gms.Games.Stats {

class PlayerStatsObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Com.Google.Android.Gms.Games.Stats", "PlayerStatsObject"));
	}

	template <typename T = Il2CppString*> static T& CLASS_NAME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = float> static T get_UNSET_VALUE() {
		return ((T (*)(void *))(Il2CppBase() + 0x20779EC))(0);
	}
	template <typename T = int32_t> static T get_CONTENTS_FILE_DESCRIPTOR() {
		return ((T (*)(void *))(Il2CppBase() + 0x2077A80))(0);
	}
	template <typename T = int32_t> static T get_PARCELABLE_WRITE_RETURN_VALUE() {
		return ((T (*)(void *))(Il2CppBase() + 0x2077B14))(0);
	}
	template <typename T = float> T getAverageSessionLength() {
		return ((T (*)(PlayerStatsObject*))(Il2CppBase() + 0x2077BA8))(this);
	}
	template <typename T = float> T getChurnProbability() {
		return ((T (*)(PlayerStatsObject*))(Il2CppBase() + 0x2077C64))(this);
	}
	template <typename T = int32_t> T getDaysSinceLastPlayed() {
		return ((T (*)(PlayerStatsObject*))(Il2CppBase() + 0x2077D20))(this);
	}
	template <typename T = int32_t> T getNumberOfPurchases() {
		return ((T (*)(PlayerStatsObject*))(Il2CppBase() + 0x2077DDC))(this);
	}
	template <typename T = int32_t> T getNumberOfSessions() {
		return ((T (*)(PlayerStatsObject*))(Il2CppBase() + 0x2077E98))(this);
	}
	template <typename T = float> T getSessionPercentile() {
		return ((T (*)(PlayerStatsObject*))(Il2CppBase() + 0x2077F54))(this);
	}
	template <typename T = float> T getSpendPercentile() {
		return ((T (*)(PlayerStatsObject*))(Il2CppBase() + 0x2078010))(this);
	}
	template <typename T = float> T getSpendProbability() {
		return ((T (*)(PlayerStatsObject*))(Il2CppBase() + 0x20780CC))(this);
	}
	template <typename T = float> T getHighSpenderProbability() {
		return ((T (*)(PlayerStatsObject*))(Il2CppBase() + 0x2078188))(this);
	}
	template <typename T = float> T getTotalSpendNext28Days() {
		return ((T (*)(PlayerStatsObject*))(Il2CppBase() + 0x2078244))(this);
	}

};

}
