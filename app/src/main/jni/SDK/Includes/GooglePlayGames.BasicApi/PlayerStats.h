#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.BasicApi {

class PlayerStats
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.BasicApi", "PlayerStats"));
	}

	template <typename T = float> static T& UNSET_VALUE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& Valid() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& NumberOfPurchases() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& AvgSessonLength() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& DaysSinceLastPlayed() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& NumberOfSessions() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& SessPercentile() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& SpendPercentile() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& SpendProbability() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& ChurnProbability() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& HighSpenderProbability() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& TotalSpendNext28Days() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = bool> T get_Valid() {
		return ((T (*)(PlayerStats*))(Il2CppBase() + 0x35C5F08))(this);
	}
	template <typename T = void> T set_Valid(bool value) {
		return ((T (*)(PlayerStats*, bool))(Il2CppBase() + 0x35C5F10))(this, value);
	}
	template <typename T = int32_t> T get_NumberOfPurchases() {
		return ((T (*)(PlayerStats*))(Il2CppBase() + 0x35C5F1C))(this);
	}
	template <typename T = void> T set_NumberOfPurchases(int32_t value) {
		return ((T (*)(PlayerStats*, int32_t))(Il2CppBase() + 0x35C5F24))(this, value);
	}
	template <typename T = float> T get_AvgSessonLength() {
		return ((T (*)(PlayerStats*))(Il2CppBase() + 0x35C5F2C))(this);
	}
	template <typename T = void> T set_AvgSessonLength(float value) {
		return ((T (*)(PlayerStats*, float))(Il2CppBase() + 0x35C5F34))(this, value);
	}
	template <typename T = int32_t> T get_DaysSinceLastPlayed() {
		return ((T (*)(PlayerStats*))(Il2CppBase() + 0x35C5F3C))(this);
	}
	template <typename T = void> T set_DaysSinceLastPlayed(int32_t value) {
		return ((T (*)(PlayerStats*, int32_t))(Il2CppBase() + 0x35C5F44))(this, value);
	}
	template <typename T = int32_t> T get_NumberOfSessions() {
		return ((T (*)(PlayerStats*))(Il2CppBase() + 0x35C5F4C))(this);
	}
	template <typename T = void> T set_NumberOfSessions(int32_t value) {
		return ((T (*)(PlayerStats*, int32_t))(Il2CppBase() + 0x35C5F54))(this, value);
	}
	template <typename T = float> T get_SessPercentile() {
		return ((T (*)(PlayerStats*))(Il2CppBase() + 0x35C5F5C))(this);
	}
	template <typename T = void> T set_SessPercentile(float value) {
		return ((T (*)(PlayerStats*, float))(Il2CppBase() + 0x35C5F64))(this, value);
	}
	template <typename T = float> T get_SpendPercentile() {
		return ((T (*)(PlayerStats*))(Il2CppBase() + 0x35C5F6C))(this);
	}
	template <typename T = void> T set_SpendPercentile(float value) {
		return ((T (*)(PlayerStats*, float))(Il2CppBase() + 0x35C5F74))(this, value);
	}
	template <typename T = float> T get_SpendProbability() {
		return ((T (*)(PlayerStats*))(Il2CppBase() + 0x35C5F7C))(this);
	}
	template <typename T = void> T set_SpendProbability(float value) {
		return ((T (*)(PlayerStats*, float))(Il2CppBase() + 0x35C5F84))(this, value);
	}
	template <typename T = float> T get_ChurnProbability() {
		return ((T (*)(PlayerStats*))(Il2CppBase() + 0x35C5F8C))(this);
	}
	template <typename T = void> T set_ChurnProbability(float value) {
		return ((T (*)(PlayerStats*, float))(Il2CppBase() + 0x35C5F94))(this, value);
	}
	template <typename T = float> T get_HighSpenderProbability() {
		return ((T (*)(PlayerStats*))(Il2CppBase() + 0x35C5F9C))(this);
	}
	template <typename T = void> T set_HighSpenderProbability(float value) {
		return ((T (*)(PlayerStats*, float))(Il2CppBase() + 0x35C5FA4))(this, value);
	}
	template <typename T = float> T get_TotalSpendNext28Days() {
		return ((T (*)(PlayerStats*))(Il2CppBase() + 0x35C5FAC))(this);
	}
	template <typename T = void> T set_TotalSpendNext28Days(float value) {
		return ((T (*)(PlayerStats*, float))(Il2CppBase() + 0x35C5FB4))(this, value);
	}
	template <typename T = bool> T HasNumberOfPurchases() {
		return ((T (*)(PlayerStats*))(Il2CppBase() + 0x35C5FBC))(this);
	}
	template <typename T = bool> T HasAvgSessonLength() {
		return ((T (*)(PlayerStats*))(Il2CppBase() + 0x35C6078))(this);
	}
	template <typename T = bool> T HasDaysSinceLastPlayed() {
		return ((T (*)(PlayerStats*))(Il2CppBase() + 0x35C613C))(this);
	}
	template <typename T = bool> T HasNumberOfSessions() {
		return ((T (*)(PlayerStats*))(Il2CppBase() + 0x35C61F8))(this);
	}
	template <typename T = bool> T HasSessPercentile() {
		return ((T (*)(PlayerStats*))(Il2CppBase() + 0x35C62B4))(this);
	}
	template <typename T = bool> T HasSpendPercentile() {
		return ((T (*)(PlayerStats*))(Il2CppBase() + 0x35C6378))(this);
	}
	template <typename T = bool> T HasChurnProbability() {
		return ((T (*)(PlayerStats*))(Il2CppBase() + 0x35C643C))(this);
	}
	template <typename T = bool> T HasHighSpenderProbability() {
		return ((T (*)(PlayerStats*))(Il2CppBase() + 0x35C6500))(this);
	}
	template <typename T = bool> T HasTotalSpendNext28Days() {
		return ((T (*)(PlayerStats*))(Il2CppBase() + 0x35C65C4))(this);
	}

};

}
