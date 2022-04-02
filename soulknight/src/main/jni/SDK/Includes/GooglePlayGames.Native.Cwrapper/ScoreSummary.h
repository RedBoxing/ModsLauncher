#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.Cwrapper {

class ScoreSummary
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.Cwrapper", "ScoreSummary"));
	}


	template <typename T = uint64_t> static T ScoreSummary_ApproximateNumberOfScores(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x357F724))(0, self);
	}
	template <typename T = uintptr_t> static T ScoreSummary_TimeSpan(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x357F7C0))(0, self);
	}
	template <typename T = uintptr_t> static T ScoreSummary_LeaderboardId(uintptr_t self, Il2CppArray<uintptr_t>** out_arg, uintptr_t out_size) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>**, uintptr_t))(Il2CppBase() + 0x357F85C))(0, self, out_arg, out_size);
	}
	template <typename T = uintptr_t> static T ScoreSummary_Collection(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x357F9CC))(0, self);
	}
	template <typename T = bool> static T ScoreSummary_Valid(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x357FA68))(0, self);
	}
	template <typename T = uintptr_t> static T ScoreSummary_CurrentPlayerScore(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x357FB0C))(0, self);
	}
	template <typename T = void> static T ScoreSummary_Dispose(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x357FBA8))(0, self);
	}

};

}
