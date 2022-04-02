#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames {

class PlayGamesPlatform
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames", "PlayGamesPlatform"));
	}

	template <typename T = uintptr_t> static T& sInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& sNearbyInitializePending() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& sNearbyConnectionClient() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> T& mConfiguration() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& mLocalUser() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& mClient() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& mDefaultLbUi() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T& mIdMap() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = bool> static T get_DebugLogEnabled() {
		return ((T (*)(void *))(Il2CppBase() + 0x46160A8))(0);
	}
	template <typename T = void> static T set_DebugLogEnabled(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x4616140))(0, value);
	}
	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x46111E0))(0);
	}
	template <typename T = uintptr_t> static T get_Nearby() {
		return ((T (*)(void *))(Il2CppBase() + 0x4616360))(0);
	}
	template <typename T = uintptr_t> T get_RealTime() {
		return ((T (*)(PlayGamesPlatform*))(Il2CppBase() + 0x46166B0))(this);
	}
	template <typename T = uintptr_t> T get_TurnBased() {
		return ((T (*)(PlayGamesPlatform*))(Il2CppBase() + 0x46167A8))(this);
	}
	template <typename T = uintptr_t> T get_SavedGame() {
		return ((T (*)(PlayGamesPlatform*))(Il2CppBase() + 0x46168A0))(this);
	}
	template <typename T = uintptr_t> T get_Events() {
		return ((T (*)(PlayGamesPlatform*))(Il2CppBase() + 0x4616998))(this);
	}
	template <typename T = uintptr_t> T get_Video() {
		return ((T (*)(PlayGamesPlatform*))(Il2CppBase() + 0x4616A90))(this);
	}
	template <typename T = uintptr_t> T get_localUser() {
		return ((T (*)(PlayGamesPlatform*))(Il2CppBase() + 0x4616B88))(this);
	}
	template <typename T = void> static T InitializeInstance(uintptr_t configuration) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x46161E4))(0, configuration);
	}
	template <typename T = void> static T InitializeNearby(void* callback) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x4616498))(0, callback);
	}
	template <typename T = uintptr_t> static T Activate() {
		return ((T (*)(void *))(Il2CppBase() + 0x4616BF0))(0);
	}
	template <typename T = uintptr_t> T GetApiClient() {
		return ((T (*)(PlayGamesPlatform*))(Il2CppBase() + 0x4616CEC))(this);
	}
	template <typename T = void> T SetGravityForPopups(uintptr_t gravity) {
		return ((T (*)(PlayGamesPlatform*, uintptr_t))(Il2CppBase() + 0x4616DE4))(this, gravity);
	}
	template <typename T = void> T AddIdMapping(Il2CppString* fromId, Il2CppString* toId) {
		return ((T (*)(PlayGamesPlatform*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4616EF4))(this, fromId, toId);
	}
	template <typename T = void> T Authenticate(void* callback) {
		return ((T (*)(PlayGamesPlatform*, void*))(Il2CppBase() + 0x4614294))(this, callback);
	}
	template <typename T = void> T Authenticate_1(void* callback) {
		return ((T (*)(PlayGamesPlatform*, void*))(Il2CppBase() + 0x4614398))(this, callback);
	}
	template <typename T = void> T Authenticate_2(void* callback, bool silent) {
		return ((T (*)(PlayGamesPlatform*, void*, bool))(Il2CppBase() + 0x46144A8))(this, callback, silent);
	}
	template <typename T = void> T Authenticate_3(void* callback, bool silent) {
		return ((T (*)(PlayGamesPlatform*, void*, bool))(Il2CppBase() + 0x4614644))(this, callback, silent);
	}
	template <typename T = void> T Authenticate_4(uintptr_t unused, void* callback) {
		return ((T (*)(PlayGamesPlatform*, uintptr_t, void*))(Il2CppBase() + 0x4616FC0))(this, unused, callback);
	}
	template <typename T = void> T Authenticate_5(uintptr_t unused, void* callback) {
		return ((T (*)(PlayGamesPlatform*, uintptr_t, void*))(Il2CppBase() + 0x4617044))(this, unused, callback);
	}
	template <typename T = bool> T IsAuthenticated() {
		return ((T (*)(PlayGamesPlatform*))(Il2CppBase() + 0x4614DB0))(this);
	}
	template <typename T = void> T SignOut() {
		return ((T (*)(PlayGamesPlatform*))(Il2CppBase() + 0x46170C8))(this);
	}
	template <typename T = void> T LoadUsers(Il2CppArray<uintptr_t>* userIds, void* callback) {
		return ((T (*)(PlayGamesPlatform*, Il2CppArray<uintptr_t>*, void*))(Il2CppBase() + 0x46171DC))(this, userIds, callback);
	}
	template <typename T = Il2CppString*> T GetUserId() {
		return ((T (*)(PlayGamesPlatform*))(Il2CppBase() + 0x4615200))(this);
	}
	template <typename T = Il2CppString*> T GetIdToken() {
		return ((T (*)(PlayGamesPlatform*))(Il2CppBase() + 0x4614C10))(this);
	}
	template <typename T = Il2CppString*> T GetServerAuthCode() {
		return ((T (*)(PlayGamesPlatform*))(Il2CppBase() + 0x461737C))(this);
	}
	template <typename T = void> T GetAnotherServerAuthCode(bool reAuthenticateIfNeeded, void* callback) {
		return ((T (*)(PlayGamesPlatform*, bool, void*))(Il2CppBase() + 0x4617504))(this, reAuthenticateIfNeeded, callback);
	}
	template <typename T = Il2CppString*> T GetUserEmail() {
		return ((T (*)(PlayGamesPlatform*))(Il2CppBase() + 0x46159D8))(this);
	}
	template <typename T = void> T GetPlayerStats(void* callback) {
		return ((T (*)(PlayGamesPlatform*, void*))(Il2CppBase() + 0x4615C4C))(this, callback);
	}
	template <typename T = Il2CppString*> T GetUserDisplayName() {
		return ((T (*)(PlayGamesPlatform*))(Il2CppBase() + 0x461504C))(this);
	}
	template <typename T = Il2CppString*> T GetUserImageUrl() {
		return ((T (*)(PlayGamesPlatform*))(Il2CppBase() + 0x461534C))(this);
	}
	template <typename T = void> T ReportProgress(Il2CppString* achievementID, double progress, void* callback) {
		return ((T (*)(PlayGamesPlatform*, Il2CppString*, double, void*))(Il2CppBase() + 0x4617824))(this, achievementID, progress, callback);
	}
	template <typename T = void> T RevealAchievement(Il2CppString* achievementID, void* callback) {
		return ((T (*)(PlayGamesPlatform*, Il2CppString*, void*))(Il2CppBase() + 0x4617F60))(this, achievementID, callback);
	}
	template <typename T = void> T UnlockAchievement(Il2CppString* achievementID, void* callback) {
		return ((T (*)(PlayGamesPlatform*, Il2CppString*, void*))(Il2CppBase() + 0x4618148))(this, achievementID, callback);
	}
	template <typename T = void> T IncrementAchievement(Il2CppString* achievementID, int32_t steps, void* callback) {
		return ((T (*)(PlayGamesPlatform*, Il2CppString*, int32_t, void*))(Il2CppBase() + 0x4618330))(this, achievementID, steps, callback);
	}
	template <typename T = void> T SetStepsAtLeast(Il2CppString* achievementID, int32_t steps, void* callback) {
		return ((T (*)(PlayGamesPlatform*, Il2CppString*, int32_t, void*))(Il2CppBase() + 0x461869C))(this, achievementID, steps, callback);
	}
	template <typename T = void> T LoadAchievementDescriptions(void* callback) {
		return ((T (*)(PlayGamesPlatform*, void*))(Il2CppBase() + 0x4618A08))(this, callback);
	}
	template <typename T = void> T LoadAchievements(void* callback) {
		return ((T (*)(PlayGamesPlatform*, void*))(Il2CppBase() + 0x4618BF4))(this, callback);
	}
	template <typename T = uintptr_t> T CreateAchievement() {
		return ((T (*)(PlayGamesPlatform*))(Il2CppBase() + 0x4618DDC))(this);
	}
	template <typename T = void> T ReportScore(int64_t score, Il2CppString* board, void* callback) {
		return ((T (*)(PlayGamesPlatform*, int64_t, Il2CppString*, void*))(Il2CppBase() + 0x4618E78))(this, score, board, callback);
	}
	template <typename T = void> T ReportScore_1(int64_t score, Il2CppString* board, Il2CppString* metadata, void* callback) {
		return ((T (*)(PlayGamesPlatform*, int64_t, Il2CppString*, Il2CppString*, void*))(Il2CppBase() + 0x46191E4))(this, score, board, metadata, callback);
	}
	template <typename T = void> T LoadScores(Il2CppString* leaderboardId, void* callback) {
		return ((T (*)(PlayGamesPlatform*, Il2CppString*, void*))(Il2CppBase() + 0x46195F8))(this, leaderboardId, callback);
	}
	template <typename T = void> T LoadScores_1(Il2CppString* leaderboardId, uintptr_t start, int32_t rowCount, uintptr_t collection, uintptr_t timeSpan, void* callback) {
		return ((T (*)(PlayGamesPlatform*, Il2CppString*, uintptr_t, int32_t, uintptr_t, uintptr_t, void*))(Il2CppBase() + 0x46197A8))(this, leaderboardId, start, rowCount, collection, timeSpan, callback);
	}
	template <typename T = void> T LoadMoreScores(uintptr_t token, int32_t rowCount, void* callback) {
		return ((T (*)(PlayGamesPlatform*, uintptr_t, int32_t, void*))(Il2CppBase() + 0x46199B8))(this, token, rowCount, callback);
	}
	template <typename T = uintptr_t> T CreateLeaderboard() {
		return ((T (*)(PlayGamesPlatform*))(Il2CppBase() + 0x4619BA0))(this);
	}
	template <typename T = void> T ShowAchievementsUI() {
		return ((T (*)(PlayGamesPlatform*))(Il2CppBase() + 0x4619C44))(this);
	}
	template <typename T = void> T ShowAchievementsUI_1(void* callback) {
		return ((T (*)(PlayGamesPlatform*, void*))(Il2CppBase() + 0x4619CA8))(this, callback);
	}
	template <typename T = void> T ShowLeaderboardUI() {
		return ((T (*)(PlayGamesPlatform*))(Il2CppBase() + 0x4619E48))(this);
	}
	template <typename T = void> T ShowLeaderboardUI_1(Il2CppString* leaderboardId) {
		return ((T (*)(PlayGamesPlatform*, Il2CppString*))(Il2CppBase() + 0x4619F98))(this, leaderboardId);
	}
	template <typename T = void> T ShowLeaderboardUI_2(Il2CppString* leaderboardId, void* callback) {
		return ((T (*)(PlayGamesPlatform*, Il2CppString*, void*))(Il2CppBase() + 0x4619F10))(this, leaderboardId, callback);
	}
	template <typename T = void> T ShowLeaderboardUI_3(Il2CppString* leaderboardId, uintptr_t span, void* callback) {
		return ((T (*)(PlayGamesPlatform*, Il2CppString*, uintptr_t, void*))(Il2CppBase() + 0x461A0C4))(this, leaderboardId, span, callback);
	}
	template <typename T = void> T SetDefaultLeaderboardForUI(Il2CppString* lbid) {
		return ((T (*)(PlayGamesPlatform*, Il2CppString*))(Il2CppBase() + 0x461A404))(this, lbid);
	}
	template <typename T = void> T LoadFriends(uintptr_t user, void* callback) {
		return ((T (*)(PlayGamesPlatform*, uintptr_t, void*))(Il2CppBase() + 0x4614854))(this, user, callback);
	}
	template <typename T = void> T LoadScores_2(uintptr_t board, void* callback) {
		return ((T (*)(PlayGamesPlatform*, uintptr_t, void*))(Il2CppBase() + 0x4612A4C))(this, board, callback);
	}
	template <typename T = bool> T GetLoading(uintptr_t board) {
		return ((T (*)(PlayGamesPlatform*, uintptr_t))(Il2CppBase() + 0x461A504))(this, board);
	}
	template <typename T = void> T RegisterInvitationDelegate(uintptr_t deleg) {
		return ((T (*)(PlayGamesPlatform*, uintptr_t))(Il2CppBase() + 0x461A614))(this, deleg);
	}
	template <typename T = void> T HandleLoadingScores(uintptr_t board, uintptr_t scoreData, void* callback) {
		return ((T (*)(PlayGamesPlatform*, uintptr_t, uintptr_t, void*))(Il2CppBase() + 0x461A724))(this, board, scoreData, callback);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetFriends() {
		return ((T (*)(PlayGamesPlatform*))(Il2CppBase() + 0x4614A50))(this);
	}
	template <typename T = Il2CppString*> T MapId(Il2CppString* id) {
		return ((T (*)(PlayGamesPlatform*, Il2CppString*))(Il2CppBase() + 0x4617E0C))(this, id);
	}
	template <typename T = void*> static T ToOnGameThread(void* toConvert) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x0))(0, toConvert);
	}

};

}
