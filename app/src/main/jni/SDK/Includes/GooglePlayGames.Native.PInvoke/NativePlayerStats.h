#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.PInvoke {

class NativePlayerStats
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.PInvoke", "NativePlayerStats"));
	}


	template <typename T = bool> T Valid() {
		return ((T (*)(NativePlayerStats*))(Il2CppBase() + 0x2AF30C8))(this);
	}
	template <typename T = bool> T HasAverageSessionLength() {
		return ((T (*)(NativePlayerStats*))(Il2CppBase() + 0x2AF3134))(this);
	}
	template <typename T = float> T AverageSessionLength() {
		return ((T (*)(NativePlayerStats*))(Il2CppBase() + 0x2AF31A0))(this);
	}
	template <typename T = bool> T HasChurnProbability() {
		return ((T (*)(NativePlayerStats*))(Il2CppBase() + 0x2AF320C))(this);
	}
	template <typename T = float> T ChurnProbability() {
		return ((T (*)(NativePlayerStats*))(Il2CppBase() + 0x2AF3278))(this);
	}
	template <typename T = bool> T HasDaysSinceLastPlayed() {
		return ((T (*)(NativePlayerStats*))(Il2CppBase() + 0x2AF32E4))(this);
	}
	template <typename T = int32_t> T DaysSinceLastPlayed() {
		return ((T (*)(NativePlayerStats*))(Il2CppBase() + 0x2AF3350))(this);
	}
	template <typename T = bool> T HasNumberOfPurchases() {
		return ((T (*)(NativePlayerStats*))(Il2CppBase() + 0x2AF33BC))(this);
	}
	template <typename T = int32_t> T NumberOfPurchases() {
		return ((T (*)(NativePlayerStats*))(Il2CppBase() + 0x2AF3428))(this);
	}
	template <typename T = bool> T HasNumberOfSessions() {
		return ((T (*)(NativePlayerStats*))(Il2CppBase() + 0x2AF3494))(this);
	}
	template <typename T = int32_t> T NumberOfSessions() {
		return ((T (*)(NativePlayerStats*))(Il2CppBase() + 0x2AF3500))(this);
	}
	template <typename T = bool> T HasSessionPercentile() {
		return ((T (*)(NativePlayerStats*))(Il2CppBase() + 0x2AF356C))(this);
	}
	template <typename T = float> T SessionPercentile() {
		return ((T (*)(NativePlayerStats*))(Il2CppBase() + 0x2AF35D8))(this);
	}
	template <typename T = bool> T HasSpendPercentile() {
		return ((T (*)(NativePlayerStats*))(Il2CppBase() + 0x2AF3644))(this);
	}
	template <typename T = float> T SpendPercentile() {
		return ((T (*)(NativePlayerStats*))(Il2CppBase() + 0x2AF36B0))(this);
	}
	template <typename T = void> T CallDispose(uintptr_t selfPointer) {
		return ((T (*)(NativePlayerStats*, uintptr_t))(Il2CppBase() + 0x2AF371C))(this, selfPointer);
	}
	template <typename T = uintptr_t> T AsPlayerStats() {
		return ((T (*)(NativePlayerStats*))(Il2CppBase() + 0x2AF37A0))(this);
	}

};

}
