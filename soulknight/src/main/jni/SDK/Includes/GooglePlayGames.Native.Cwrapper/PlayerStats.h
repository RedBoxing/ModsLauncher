#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.Cwrapper {

class PlayerStats
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.Cwrapper", "PlayerStats"));
	}


	template <typename T = bool> static T PlayerStats_Valid(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3576CF8))(0, self);
	}
	template <typename T = void> static T PlayerStats_Dispose(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3576D9C))(0, self);
	}
	template <typename T = bool> static T PlayerStats_HasAverageSessionLength(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3576E38))(0, self);
	}
	template <typename T = float> static T PlayerStats_AverageSessionLength(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3576EDC))(0, self);
	}
	template <typename T = bool> static T PlayerStats_HasChurnProbability(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3576F78))(0, self);
	}
	template <typename T = float> static T PlayerStats_ChurnProbability(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x357701C))(0, self);
	}
	template <typename T = bool> static T PlayerStats_HasDaysSinceLastPlayed(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35770B8))(0, self);
	}
	template <typename T = int32_t> static T PlayerStats_DaysSinceLastPlayed(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x357715C))(0, self);
	}
	template <typename T = bool> static T PlayerStats_HasNumberOfPurchases(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35771F8))(0, self);
	}
	template <typename T = int32_t> static T PlayerStats_NumberOfPurchases(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x357729C))(0, self);
	}
	template <typename T = bool> static T PlayerStats_HasNumberOfSessions(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3577338))(0, self);
	}
	template <typename T = int32_t> static T PlayerStats_NumberOfSessions(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35773DC))(0, self);
	}
	template <typename T = bool> static T PlayerStats_HasSessionPercentile(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3577478))(0, self);
	}
	template <typename T = float> static T PlayerStats_SessionPercentile(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x357751C))(0, self);
	}
	template <typename T = bool> static T PlayerStats_HasSpendPercentile(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35775B8))(0, self);
	}
	template <typename T = float> static T PlayerStats_SpendPercentile(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x357765C))(0, self);
	}

};

}
