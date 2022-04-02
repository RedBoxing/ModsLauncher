#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.Cwrapper {

class LeaderboardManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.Cwrapper", "LeaderboardManager"));
	}


	template <typename T = void> static T LeaderboardManager_FetchAll(uintptr_t self, uintptr_t data_source, uintptr_t callback, uintptr_t callback_arg) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x35D45D4))(0, self, data_source, callback, callback_arg);
	}
	template <typename T = void> static T LeaderboardManager_FetchScoreSummary(uintptr_t self, uintptr_t data_source, Il2CppString* leaderboard_id, uintptr_t time_span, uintptr_t collection, uintptr_t callback, uintptr_t callback_arg) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x35D46A0))(0, self, data_source, leaderboard_id, time_span, collection, callback, callback_arg);
	}
	template <typename T = uintptr_t> static T LeaderboardManager_ScorePageToken(uintptr_t self, Il2CppString* leaderboard_id, uintptr_t start, uintptr_t time_span, uintptr_t collection) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x35D47A0))(0, self, leaderboard_id, start, time_span, collection);
	}
	template <typename T = void> static T LeaderboardManager_ShowAllUI(uintptr_t self, uintptr_t callback, uintptr_t callback_arg) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x35D4888))(0, self, callback, callback_arg);
	}
	template <typename T = void> static T LeaderboardManager_FetchScorePage(uintptr_t self, uintptr_t data_source, uintptr_t token, uint32_t max_results, uintptr_t callback, uintptr_t callback_arg) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uint32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x35D4944))(0, self, data_source, token, max_results, callback, callback_arg);
	}
	template <typename T = void> static T LeaderboardManager_FetchAllScoreSummaries(uintptr_t self, uintptr_t data_source, Il2CppString* leaderboard_id, uintptr_t callback, uintptr_t callback_arg) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x35D4A28))(0, self, data_source, leaderboard_id, callback, callback_arg);
	}
	template <typename T = void> static T LeaderboardManager_ShowUI(uintptr_t self, Il2CppString* leaderboard_id, uintptr_t time_span, uintptr_t callback, uintptr_t callback_arg) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x35D4B10))(0, self, leaderboard_id, time_span, callback, callback_arg);
	}
	template <typename T = void> static T LeaderboardManager_Fetch(uintptr_t self, uintptr_t data_source, Il2CppString* leaderboard_id, uintptr_t callback, uintptr_t callback_arg) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x35D4BF8))(0, self, data_source, leaderboard_id, callback, callback_arg);
	}
	template <typename T = void> static T LeaderboardManager_SubmitScore(uintptr_t self, Il2CppString* leaderboard_id, uint64_t score, Il2CppString* metadata) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uint64_t, Il2CppString*))(Il2CppBase() + 0x35D4CE0))(0, self, leaderboard_id, score, metadata);
	}
	template <typename T = void> static T LeaderboardManager_FetchResponse_Dispose(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35D4DCC))(0, self);
	}
	template <typename T = uintptr_t> static T LeaderboardManager_FetchResponse_GetStatus(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35D4E68))(0, self);
	}
	template <typename T = uintptr_t> static T LeaderboardManager_FetchResponse_GetData(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35D4F04))(0, self);
	}
	template <typename T = void> static T LeaderboardManager_FetchAllResponse_Dispose(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35D4FA0))(0, self);
	}
	template <typename T = uintptr_t> static T LeaderboardManager_FetchAllResponse_GetStatus(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35D503C))(0, self);
	}
	template <typename T = uintptr_t> static T LeaderboardManager_FetchAllResponse_GetData_Length(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35D50D8))(0, self);
	}
	template <typename T = uintptr_t> static T LeaderboardManager_FetchAllResponse_GetData_GetElement(uintptr_t self, uintptr_t index) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x35D5174))(0, self, index);
	}
	template <typename T = void> static T LeaderboardManager_FetchScorePageResponse_Dispose(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35D5220))(0, self);
	}
	template <typename T = uintptr_t> static T LeaderboardManager_FetchScorePageResponse_GetStatus(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35D52BC))(0, self);
	}
	template <typename T = uintptr_t> static T LeaderboardManager_FetchScorePageResponse_GetData(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35D5358))(0, self);
	}
	template <typename T = void> static T LeaderboardManager_FetchScoreSummaryResponse_Dispose(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35D53F4))(0, self);
	}
	template <typename T = uintptr_t> static T LeaderboardManager_FetchScoreSummaryResponse_GetStatus(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35D5490))(0, self);
	}
	template <typename T = uintptr_t> static T LeaderboardManager_FetchScoreSummaryResponse_GetData(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35D552C))(0, self);
	}
	template <typename T = void> static T LeaderboardManager_FetchAllScoreSummariesResponse_Dispose(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35D55C8))(0, self);
	}
	template <typename T = uintptr_t> static T LeaderboardManager_FetchAllScoreSummariesResponse_GetStatus(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35D5664))(0, self);
	}
	template <typename T = uintptr_t> static T LeaderboardManager_FetchAllScoreSummariesResponse_GetData_Length(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35D5700))(0, self);
	}
	template <typename T = uintptr_t> static T LeaderboardManager_FetchAllScoreSummariesResponse_GetData_GetElement(uintptr_t self, uintptr_t index) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x35D579C))(0, self, index);
	}

};

}
