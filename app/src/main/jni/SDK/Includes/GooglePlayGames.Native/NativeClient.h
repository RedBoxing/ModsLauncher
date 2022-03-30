#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native {

class NativeClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native", "NativeClient"));
	}

	template <typename T = uintptr_t> T& clientImpl() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& GameServicesLock() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& AuthStateLock() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& mConfiguration() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& mServices() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& mTurnBasedClient() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& mRealTimeClient() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& mSavedGameClient() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& mEventsClient() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& mVideoClient() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& mTokenClient() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = void*> T& mInvitationDelegate() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& mUser() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mFriends() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = void*> T& mPendingAuthCallbacks() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& mAuthState() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uint32_t> T& mAuthGeneration() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = bool> T& friendsLoading() {
		return *(T*)((uintptr_t)this + 0xB8);
	}

	template <typename T = uintptr_t> T GameServices() {
		return ((T (*)(NativeClient*))(Il2CppBase() + 0x358B9E4))(this);
	}
	template <typename T = void> T Authenticate(void* callback, bool silent) {
		return ((T (*)(NativeClient*, void*, bool))(Il2CppBase() + 0x358BAD0))(this, callback, silent);
	}
	template <typename T = void*> static T AsOnGameThreadCallback(void* callback) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x0))(0, callback);
	}
	template <typename T = void> static T InvokeCallbackOnGameThread(void* callback, uintptr_t data, uintptr_t msg) {
		return ((T (*)(void *, void*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(0, callback, data, msg);
	}
	template <typename T = void> static T InvokeCallbackOnGameThread_1(void* callback, uintptr_t data) {
		return ((T (*)(void *, void*, uintptr_t))(Il2CppBase() + 0x0))(0, callback, data);
	}
	template <typename T = void> T InitializeGameServices() {
		return ((T (*)(NativeClient*))(Il2CppBase() + 0x358C600))(this);
	}
	template <typename T = void> T InitializeTokenClient() {
		return ((T (*)(NativeClient*))(Il2CppBase() + 0x358BDA0))(this);
	}
	template <typename T = void> T HandleInvitation(uintptr_t eventType, Il2CppString* invitationId, uintptr_t invitation) {
		return ((T (*)(NativeClient*, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x358D150))(this, eventType, invitationId, invitation);
	}
	template <typename T = Il2CppString*> T GetUserEmail() {
		return ((T (*)(NativeClient*))(Il2CppBase() + 0x358D570))(this);
	}
	template <typename T = Il2CppString*> T GetIdToken() {
		return ((T (*)(NativeClient*))(Il2CppBase() + 0x358D7B4))(this);
	}
	template <typename T = Il2CppString*> T GetServerAuthCode() {
		return ((T (*)(NativeClient*))(Il2CppBase() + 0x358D900))(this);
	}
	template <typename T = void> T GetAnotherServerAuthCode(bool reAuthenticateIfNeeded, void* callback) {
		return ((T (*)(NativeClient*, bool, void*))(Il2CppBase() + 0x358DA4C))(this, reAuthenticateIfNeeded, callback);
	}
	template <typename T = bool> T IsAuthenticated() {
		return ((T (*)(NativeClient*))(Il2CppBase() + 0x358D6B8))(this);
	}
	template <typename T = void> T LoadFriends(void* callback) {
		return ((T (*)(NativeClient*, void*))(Il2CppBase() + 0x358DB6C))(this, callback);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetFriends() {
		return ((T (*)(NativeClient*))(Il2CppBase() + 0x358DD88))(this);
	}
	template <typename T = void> T MaybeFinishAuthentication() {
		return ((T (*)(NativeClient*))(Il2CppBase() + 0x358DEEC))(this);
	}
	template <typename T = void> T PopulateUser(uint32_t authGeneration, uintptr_t response) {
		return ((T (*)(NativeClient*, uint32_t, uintptr_t))(Il2CppBase() + 0x358E188))(this, authGeneration, response);
	}
	template <typename T = void> T HandleAuthTransition(uintptr_t operation, uintptr_t status) {
		return ((T (*)(NativeClient*, uintptr_t, uintptr_t))(Il2CppBase() + 0x358E608))(this, operation, status);
	}
	template <typename T = void> T ToUnauthenticated() {
		return ((T (*)(NativeClient*))(Il2CppBase() + 0x358EB2C))(this);
	}
	template <typename T = void> T SignOut() {
		return ((T (*)(NativeClient*))(Il2CppBase() + 0x358E4CC))(this);
	}
	template <typename T = Il2CppString*> T GetUserId() {
		return ((T (*)(NativeClient*))(Il2CppBase() + 0x358ECF0))(this);
	}
	template <typename T = Il2CppString*> T GetUserDisplayName() {
		return ((T (*)(NativeClient*))(Il2CppBase() + 0x358ED84))(this);
	}
	template <typename T = Il2CppString*> T GetUserImageUrl() {
		return ((T (*)(NativeClient*))(Il2CppBase() + 0x358EE18))(this);
	}
	template <typename T = void> T SetGravityForPopups(uintptr_t gravity) {
		return ((T (*)(NativeClient*, uintptr_t))(Il2CppBase() + 0x358EEAC))(this, gravity);
	}
	template <typename T = void> T GetPlayerStats(void* callback) {
		return ((T (*)(NativeClient*, void*))(Il2CppBase() + 0x358EFE0))(this, callback);
	}
	template <typename T = void> T LoadUsers(Il2CppArray<uintptr_t>* userIds, void* callback) {
		return ((T (*)(NativeClient*, Il2CppArray<uintptr_t>*, void*))(Il2CppBase() + 0x358F114))(this, userIds, callback);
	}
	template <typename T = void> T LoadAchievements(void* callback) {
		return ((T (*)(NativeClient*, void*))(Il2CppBase() + 0x358F258))(this, callback);
	}
	template <typename T = void> T UnlockAchievement(Il2CppString* achId, void* callback) {
		return ((T (*)(NativeClient*, Il2CppString*, void*))(Il2CppBase() + 0x358F430))(this, achId, callback);
	}
	template <typename T = void> T RevealAchievement(Il2CppString* achId, void* callback) {
		return ((T (*)(NativeClient*, Il2CppString*, void*))(Il2CppBase() + 0x358F55C))(this, achId, callback);
	}
	template <typename T = void> T IncrementAchievement(Il2CppString* achId, int32_t steps, void* callback) {
		return ((T (*)(NativeClient*, Il2CppString*, int32_t, void*))(Il2CppBase() + 0x358F688))(this, achId, steps, callback);
	}
	template <typename T = void> T SetStepsAtLeast(Il2CppString* achId, int32_t steps, void* callback) {
		return ((T (*)(NativeClient*, Il2CppString*, int32_t, void*))(Il2CppBase() + 0x358F85C))(this, achId, steps, callback);
	}
	template <typename T = void> T ShowAchievementsUI(void* cb) {
		return ((T (*)(NativeClient*, void*))(Il2CppBase() + 0x358FA30))(this, cb);
	}
	template <typename T = int32_t> T LeaderboardMaxResults() {
		return ((T (*)(NativeClient*))(Il2CppBase() + 0x358FBD0))(this);
	}
	template <typename T = void> T ShowLeaderboardUI(Il2CppString* leaderboardId, uintptr_t span, void* cb) {
		return ((T (*)(NativeClient*, Il2CppString*, uintptr_t, void*))(Il2CppBase() + 0x358FC60))(this, leaderboardId, span, cb);
	}
	template <typename T = void> T LoadScores(Il2CppString* leaderboardId, uintptr_t start, int32_t rowCount, uintptr_t collection, uintptr_t timeSpan, void* callback) {
		return ((T (*)(NativeClient*, Il2CppString*, uintptr_t, int32_t, uintptr_t, uintptr_t, void*))(Il2CppBase() + 0x358FE50))(this, leaderboardId, start, rowCount, collection, timeSpan, callback);
	}
	template <typename T = void> T LoadMoreScores(uintptr_t token, int32_t rowCount, void* callback) {
		return ((T (*)(NativeClient*, uintptr_t, int32_t, void*))(Il2CppBase() + 0x358FFB0))(this, token, rowCount, callback);
	}
	template <typename T = void> T SubmitScore(Il2CppString* leaderboardId, int64_t score, void* callback) {
		return ((T (*)(NativeClient*, Il2CppString*, int64_t, void*))(Il2CppBase() + 0x35900BC))(this, leaderboardId, score, callback);
	}
	template <typename T = void> T SubmitScore_1(Il2CppString* leaderboardId, int64_t score, Il2CppString* metadata, void* callback) {
		return ((T (*)(NativeClient*, Il2CppString*, int64_t, Il2CppString*, void*))(Il2CppBase() + 0x3590268))(this, leaderboardId, score, metadata, callback);
	}
	template <typename T = uintptr_t> T GetRtmpClient() {
		return ((T (*)(NativeClient*))(Il2CppBase() + 0x359041C))(this);
	}
	template <typename T = uintptr_t> T GetTbmpClient() {
		return ((T (*)(NativeClient*))(Il2CppBase() + 0x3590524))(this);
	}
	template <typename T = uintptr_t> T GetSavedGameClient() {
		return ((T (*)(NativeClient*))(Il2CppBase() + 0x3590618))(this);
	}
	template <typename T = uintptr_t> T GetEventsClient() {
		return ((T (*)(NativeClient*))(Il2CppBase() + 0x359070C))(this);
	}
	template <typename T = uintptr_t> T GetVideoClient() {
		return ((T (*)(NativeClient*))(Il2CppBase() + 0x3590800))(this);
	}
	template <typename T = void> T RegisterInvitationDelegate(uintptr_t invitationDelegate) {
		return ((T (*)(NativeClient*, uintptr_t))(Il2CppBase() + 0x358CF84))(this, invitationDelegate);
	}
	template <typename T = uintptr_t> T GetApiClient() {
		return ((T (*)(NativeClient*))(Il2CppBase() + 0x35908FC))(this);
	}
	template <typename T = void> T InitializeGameServicesb__25_0(uintptr_t eventType, Il2CppString* matchId, uintptr_t match) {
		return ((T (*)(NativeClient*, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3590978))(this, eventType, matchId, match);
	}
	template <typename T = void> T GetFriendsb__34_0(bool ok) {
		return ((T (*)(NativeClient*, bool))(Il2CppBase() + 0x35909CC))(this, ok);
	}

};

}
