#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.BasicApi {

class IPlayGamesClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.BasicApi", "IPlayGamesClient"));
	}


	template <typename T = void> T Authenticate(void* callback, bool silent) {
		return ((T (*)(IPlayGamesClient*, void*, bool))(Il2CppBase() + 0x0))(this, callback, silent);
	}
	template <typename T = bool> T IsAuthenticated() {
		return ((T (*)(IPlayGamesClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T SignOut() {
		return ((T (*)(IPlayGamesClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T GetUserId() {
		return ((T (*)(IPlayGamesClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T LoadFriends(void* callback) {
		return ((T (*)(IPlayGamesClient*, void*))(Il2CppBase() + 0x0))(this, callback);
	}
	template <typename T = Il2CppString*> T GetUserDisplayName() {
		return ((T (*)(IPlayGamesClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T GetIdToken() {
		return ((T (*)(IPlayGamesClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T GetServerAuthCode() {
		return ((T (*)(IPlayGamesClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T GetAnotherServerAuthCode(bool reAuthenticateIfNeeded, void* callback) {
		return ((T (*)(IPlayGamesClient*, bool, void*))(Il2CppBase() + 0x0))(this, reAuthenticateIfNeeded, callback);
	}
	template <typename T = Il2CppString*> T GetUserEmail() {
		return ((T (*)(IPlayGamesClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T GetUserImageUrl() {
		return ((T (*)(IPlayGamesClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T GetPlayerStats(void* callback) {
		return ((T (*)(IPlayGamesClient*, void*))(Il2CppBase() + 0x0))(this, callback);
	}
	template <typename T = void> T LoadUsers(Il2CppArray<uintptr_t>* userIds, void* callback) {
		return ((T (*)(IPlayGamesClient*, Il2CppArray<uintptr_t>*, void*))(Il2CppBase() + 0x0))(this, userIds, callback);
	}
	template <typename T = void> T LoadAchievements(void* callback) {
		return ((T (*)(IPlayGamesClient*, void*))(Il2CppBase() + 0x0))(this, callback);
	}
	template <typename T = void> T UnlockAchievement(Il2CppString* achievementId, void* successOrFailureCalllback) {
		return ((T (*)(IPlayGamesClient*, Il2CppString*, void*))(Il2CppBase() + 0x0))(this, achievementId, successOrFailureCalllback);
	}
	template <typename T = void> T RevealAchievement(Il2CppString* achievementId, void* successOrFailureCalllback) {
		return ((T (*)(IPlayGamesClient*, Il2CppString*, void*))(Il2CppBase() + 0x0))(this, achievementId, successOrFailureCalllback);
	}
	template <typename T = void> T IncrementAchievement(Il2CppString* achievementId, int32_t steps, void* successOrFailureCalllback) {
		return ((T (*)(IPlayGamesClient*, Il2CppString*, int32_t, void*))(Il2CppBase() + 0x0))(this, achievementId, steps, successOrFailureCalllback);
	}
	template <typename T = void> T SetStepsAtLeast(Il2CppString* achId, int32_t steps, void* callback) {
		return ((T (*)(IPlayGamesClient*, Il2CppString*, int32_t, void*))(Il2CppBase() + 0x0))(this, achId, steps, callback);
	}
	template <typename T = void> T ShowAchievementsUI(void* callback) {
		return ((T (*)(IPlayGamesClient*, void*))(Il2CppBase() + 0x0))(this, callback);
	}
	template <typename T = void> T ShowLeaderboardUI(Il2CppString* leaderboardId, uintptr_t span, void* callback) {
		return ((T (*)(IPlayGamesClient*, Il2CppString*, uintptr_t, void*))(Il2CppBase() + 0x0))(this, leaderboardId, span, callback);
	}
	template <typename T = void> T LoadScores(Il2CppString* leaderboardId, uintptr_t start, int32_t rowCount, uintptr_t collection, uintptr_t timeSpan, void* callback) {
		return ((T (*)(IPlayGamesClient*, Il2CppString*, uintptr_t, int32_t, uintptr_t, uintptr_t, void*))(Il2CppBase() + 0x0))(this, leaderboardId, start, rowCount, collection, timeSpan, callback);
	}
	template <typename T = void> T LoadMoreScores(uintptr_t token, int32_t rowCount, void* callback) {
		return ((T (*)(IPlayGamesClient*, uintptr_t, int32_t, void*))(Il2CppBase() + 0x0))(this, token, rowCount, callback);
	}
	template <typename T = int32_t> T LeaderboardMaxResults() {
		return ((T (*)(IPlayGamesClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T SubmitScore(Il2CppString* leaderboardId, int64_t score, void* successOrFailureCalllback) {
		return ((T (*)(IPlayGamesClient*, Il2CppString*, int64_t, void*))(Il2CppBase() + 0x0))(this, leaderboardId, score, successOrFailureCalllback);
	}
	template <typename T = void> T SubmitScore_1(Il2CppString* leaderboardId, int64_t score, Il2CppString* metadata, void* successOrFailureCalllback) {
		return ((T (*)(IPlayGamesClient*, Il2CppString*, int64_t, Il2CppString*, void*))(Il2CppBase() + 0x0))(this, leaderboardId, score, metadata, successOrFailureCalllback);
	}
	template <typename T = uintptr_t> T GetRtmpClient() {
		return ((T (*)(IPlayGamesClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T GetTbmpClient() {
		return ((T (*)(IPlayGamesClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T GetSavedGameClient() {
		return ((T (*)(IPlayGamesClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T GetEventsClient() {
		return ((T (*)(IPlayGamesClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T GetVideoClient() {
		return ((T (*)(IPlayGamesClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T RegisterInvitationDelegate(uintptr_t invitationDelegate) {
		return ((T (*)(IPlayGamesClient*, uintptr_t))(Il2CppBase() + 0x0))(this, invitationDelegate);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetFriends() {
		return ((T (*)(IPlayGamesClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T GetApiClient() {
		return ((T (*)(IPlayGamesClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T SetGravityForPopups(uintptr_t gravity) {
		return ((T (*)(IPlayGamesClient*, uintptr_t))(Il2CppBase() + 0x0))(this, gravity);
	}

};

}
