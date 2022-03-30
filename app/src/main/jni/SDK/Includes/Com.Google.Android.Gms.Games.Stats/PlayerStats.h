#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Com.Google.Android.Gms.Games.Stats {

class PlayerStats
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Com.Google.Android.Gms.Games.Stats", "PlayerStats"));
	}


	template <typename T = float> T getAverageSessionLength() {
		return ((T (*)(PlayerStats*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = float> T getChurnProbability() {
		return ((T (*)(PlayerStats*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T getDaysSinceLastPlayed() {
		return ((T (*)(PlayerStats*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T getNumberOfPurchases() {
		return ((T (*)(PlayerStats*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T getNumberOfSessions() {
		return ((T (*)(PlayerStats*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = float> T getSessionPercentile() {
		return ((T (*)(PlayerStats*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = float> T getSpendPercentile() {
		return ((T (*)(PlayerStats*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = float> T getSpendProbability() {
		return ((T (*)(PlayerStats*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = float> T getHighSpenderProbability() {
		return ((T (*)(PlayerStats*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = float> T getTotalSpendNext28Days() {
		return ((T (*)(PlayerStats*))(Il2CppBase() + 0x0))(this);
	}

};

}
