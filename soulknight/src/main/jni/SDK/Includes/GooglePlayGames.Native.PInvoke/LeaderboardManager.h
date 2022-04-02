#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.PInvoke {

class LeaderboardManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.PInvoke", "LeaderboardManager"));
	}

	template <typename T = uintptr_t> T& mServices() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_LeaderboardMaxResults() {
		return ((T (*)(LeaderboardManager*))(Il2CppBase() + 0x2AEB1A4))(this);
	}
	template <typename T = void> T SubmitScore(Il2CppString* leaderboardId, int64_t score, Il2CppString* metadata) {
		return ((T (*)(LeaderboardManager*, Il2CppString*, int64_t, Il2CppString*))(Il2CppBase() + 0x2AEB204))(this, leaderboardId, score, metadata);
	}
	template <typename T = void> T ShowAllUI(void* callback) {
		return ((T (*)(LeaderboardManager*, void*))(Il2CppBase() + 0x2AEB568))(this, callback);
	}
	template <typename T = void> T ShowUI(Il2CppString* leaderboardId, uintptr_t span, void* callback) {
		return ((T (*)(LeaderboardManager*, Il2CppString*, uintptr_t, void*))(Il2CppBase() + 0x2AEB69C))(this, leaderboardId, span, callback);
	}
	template <typename T = void> T LoadLeaderboardData(Il2CppString* leaderboardId, uintptr_t start, int32_t rowCount, uintptr_t collection, uintptr_t timeSpan, Il2CppString* playerId, void* callback) {
		return ((T (*)(LeaderboardManager*, Il2CppString*, uintptr_t, int32_t, uintptr_t, uintptr_t, Il2CppString*, void*))(Il2CppBase() + 0x2AEB7F4))(this, leaderboardId, start, rowCount, collection, timeSpan, playerId, callback);
	}
	template <typename T = void> static T InternalFetchCallback(uintptr_t response, uintptr_t data) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AEAF34))(0, response, data);
	}
	template <typename T = void> T HandleFetch(uintptr_t token, uintptr_t response, Il2CppString* selfPlayerId, int32_t maxResults, void* callback) {
		return ((T (*)(LeaderboardManager*, uintptr_t, uintptr_t, Il2CppString*, int32_t, void*))(Il2CppBase() + 0x2AEBB60))(this, token, response, selfPlayerId, maxResults, callback);
	}
	template <typename T = void> static T InternalFetchSummaryCallback(uintptr_t response, uintptr_t data) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AEB004))(0, response, data);
	}
	template <typename T = void> T HandleFetchScoreSummary(uintptr_t data, uintptr_t response, Il2CppString* selfPlayerId, int32_t maxResults, uintptr_t token, void* callback) {
		return ((T (*)(LeaderboardManager*, uintptr_t, uintptr_t, Il2CppString*, int32_t, uintptr_t, void*))(Il2CppBase() + 0x2AEC108))(this, data, response, selfPlayerId, maxResults, token, callback);
	}
	template <typename T = void> T LoadScorePage(uintptr_t data, int32_t maxResults, uintptr_t token, void* callback) {
		return ((T (*)(LeaderboardManager*, uintptr_t, int32_t, uintptr_t, void*))(Il2CppBase() + 0x2AEC5FC))(this, data, maxResults, token, callback);
	}
	template <typename T = void> static T InternalFetchScorePage(uintptr_t response, uintptr_t data) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AEB0D4))(0, response, data);
	}
	template <typename T = void> T HandleFetchScorePage(uintptr_t data, uintptr_t token, uintptr_t rsp, void* callback) {
		return ((T (*)(LeaderboardManager*, uintptr_t, uintptr_t, uintptr_t, void*))(Il2CppBase() + 0x2AEC9A4))(this, data, token, rsp, callback);
	}

};

}
