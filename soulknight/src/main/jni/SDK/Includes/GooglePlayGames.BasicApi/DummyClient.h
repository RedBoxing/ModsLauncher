#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.BasicApi {

class DummyClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.BasicApi", "DummyClient"));
	}


	template <typename T = void> T Authenticate(void* callback, bool silent) {
		return ((T (*)(DummyClient*, void*, bool))(Il2CppBase() + 0x35BD99C))(this, callback, silent);
	}
	template <typename T = bool> T IsAuthenticated() {
		return ((T (*)(DummyClient*))(Il2CppBase() + 0x35BDB18))(this);
	}
	template <typename T = void> T SignOut() {
		return ((T (*)(DummyClient*))(Il2CppBase() + 0x35BDB7C))(this);
	}
	template <typename T = Il2CppString*> T GetIdToken() {
		return ((T (*)(DummyClient*))(Il2CppBase() + 0x35BDBD8))(this);
	}
	template <typename T = Il2CppString*> T GetUserId() {
		return ((T (*)(DummyClient*))(Il2CppBase() + 0x35BDC3C))(this);
	}
	template <typename T = Il2CppString*> T GetServerAuthCode() {
		return ((T (*)(DummyClient*))(Il2CppBase() + 0x35BDCCC))(this);
	}
	template <typename T = void> T GetAnotherServerAuthCode(bool reAuthenticateIfNeeded, void* callback) {
		return ((T (*)(DummyClient*, bool, void*))(Il2CppBase() + 0x35BDD30))(this, reAuthenticateIfNeeded, callback);
	}
	template <typename T = Il2CppString*> T GetUserEmail() {
		return ((T (*)(DummyClient*))(Il2CppBase() + 0x35BDDF0))(this);
	}
	template <typename T = void> T GetPlayerStats(void* callback) {
		return ((T (*)(DummyClient*, void*))(Il2CppBase() + 0x35BDE84))(this, callback);
	}
	template <typename T = Il2CppString*> T GetUserDisplayName() {
		return ((T (*)(DummyClient*))(Il2CppBase() + 0x35BDF88))(this);
	}
	template <typename T = Il2CppString*> T GetUserImageUrl() {
		return ((T (*)(DummyClient*))(Il2CppBase() + 0x35BE018))(this);
	}
	template <typename T = void> T LoadUsers(Il2CppArray<uintptr_t>* userIds, void* callback) {
		return ((T (*)(DummyClient*, Il2CppArray<uintptr_t>*, void*))(Il2CppBase() + 0x35BE07C))(this, userIds, callback);
	}
	template <typename T = void> T LoadAchievements(void* callback) {
		return ((T (*)(DummyClient*, void*))(Il2CppBase() + 0x35BE144))(this, callback);
	}
	template <typename T = void> T UnlockAchievement(Il2CppString* achId, void* callback) {
		return ((T (*)(DummyClient*, Il2CppString*, void*))(Il2CppBase() + 0x35BE204))(this, achId, callback);
	}
	template <typename T = void> T RevealAchievement(Il2CppString* achId, void* callback) {
		return ((T (*)(DummyClient*, Il2CppString*, void*))(Il2CppBase() + 0x35BE2CC))(this, achId, callback);
	}
	template <typename T = void> T IncrementAchievement(Il2CppString* achId, int32_t steps, void* callback) {
		return ((T (*)(DummyClient*, Il2CppString*, int32_t, void*))(Il2CppBase() + 0x35BE394))(this, achId, steps, callback);
	}
	template <typename T = void> T SetStepsAtLeast(Il2CppString* achId, int32_t steps, void* callback) {
		return ((T (*)(DummyClient*, Il2CppString*, int32_t, void*))(Il2CppBase() + 0x35BE474))(this, achId, steps, callback);
	}
	template <typename T = void> T ShowAchievementsUI(void* callback) {
		return ((T (*)(DummyClient*, void*))(Il2CppBase() + 0x35BE554))(this, callback);
	}
	template <typename T = void> T ShowLeaderboardUI(Il2CppString* leaderboardId, uintptr_t span, void* callback) {
		return ((T (*)(DummyClient*, Il2CppString*, uintptr_t, void*))(Il2CppBase() + 0x35BE614))(this, leaderboardId, span, callback);
	}
	template <typename T = int32_t> T LeaderboardMaxResults() {
		return ((T (*)(DummyClient*))(Il2CppBase() + 0x35BE6F4))(this);
	}
	template <typename T = void> T LoadScores(Il2CppString* leaderboardId, uintptr_t start, int32_t rowCount, uintptr_t collection, uintptr_t timeSpan, void* callback) {
		return ((T (*)(DummyClient*, Il2CppString*, uintptr_t, int32_t, uintptr_t, uintptr_t, void*))(Il2CppBase() + 0x35BE754))(this, leaderboardId, start, rowCount, collection, timeSpan, callback);
	}
	template <typename T = void> T LoadMoreScores(uintptr_t token, int32_t rowCount, void* callback) {
		return ((T (*)(DummyClient*, uintptr_t, int32_t, void*))(Il2CppBase() + 0x35BE904))(this, token, rowCount, callback);
	}
	template <typename T = void> T SubmitScore(Il2CppString* leaderboardId, int64_t score, void* callback) {
		return ((T (*)(DummyClient*, Il2CppString*, int64_t, void*))(Il2CppBase() + 0x35BEA80))(this, leaderboardId, score, callback);
	}
	template <typename T = void> T SubmitScore_1(Il2CppString* leaderboardId, int64_t score, Il2CppString* metadata, void* callback) {
		return ((T (*)(DummyClient*, Il2CppString*, int64_t, Il2CppString*, void*))(Il2CppBase() + 0x35BEB60))(this, leaderboardId, score, metadata, callback);
	}
	template <typename T = uintptr_t> T GetRtmpClient() {
		return ((T (*)(DummyClient*))(Il2CppBase() + 0x35BEC48))(this);
	}
	template <typename T = uintptr_t> T GetTbmpClient() {
		return ((T (*)(DummyClient*))(Il2CppBase() + 0x35BECAC))(this);
	}
	template <typename T = uintptr_t> T GetSavedGameClient() {
		return ((T (*)(DummyClient*))(Il2CppBase() + 0x35BED10))(this);
	}
	template <typename T = uintptr_t> T GetEventsClient() {
		return ((T (*)(DummyClient*))(Il2CppBase() + 0x35BED74))(this);
	}
	template <typename T = uintptr_t> T GetVideoClient() {
		return ((T (*)(DummyClient*))(Il2CppBase() + 0x35BEDD8))(this);
	}
	template <typename T = void> T RegisterInvitationDelegate(uintptr_t invitationDelegate) {
		return ((T (*)(DummyClient*, uintptr_t))(Il2CppBase() + 0x35BEE3C))(this, invitationDelegate);
	}
	template <typename T = uintptr_t> T GetInvitationFromNotification() {
		return ((T (*)(DummyClient*))(Il2CppBase() + 0x35BEEAC))(this);
	}
	template <typename T = bool> T HasInvitationFromNotification() {
		return ((T (*)(DummyClient*))(Il2CppBase() + 0x35BEF10))(this);
	}
	template <typename T = void> T LoadFriends(void* callback) {
		return ((T (*)(DummyClient*, void*))(Il2CppBase() + 0x35BEF74))(this, callback);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetFriends() {
		return ((T (*)(DummyClient*))(Il2CppBase() + 0x35BF02C))(this);
	}
	template <typename T = uintptr_t> T GetApiClient() {
		return ((T (*)(DummyClient*))(Il2CppBase() + 0x35BF0C0))(this);
	}
	template <typename T = void> T SetGravityForPopups(uintptr_t gravity) {
		return ((T (*)(DummyClient*, uintptr_t))(Il2CppBase() + 0x35BF148))(this, gravity);
	}
	template <typename T = void> static T LogUsage() {
		return ((T (*)(void *))(Il2CppBase() + 0x35BDA70))(0);
	}

};

}
