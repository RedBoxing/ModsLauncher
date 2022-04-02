#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GoogleGameCenter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GoogleGameCenter"));
	}

	template <typename T = bool> T& mAuthenticating() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, bool>*> T& mUnlockedAchievements() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> T& mPendingIncrements() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& mHighestPostedScore() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& mSaving() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& mScreenImage() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& decliedToSignIn() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = bool> T get_decliedToSignIn() {
		return ((T (*)(GoogleGameCenter*))(Il2CppBase() + 0x443CBB4))(this);
	}
	template <typename T = void> T set_decliedToSignIn(bool value) {
		return ((T (*)(GoogleGameCenter*, bool))(Il2CppBase() + 0x443CBBC))(this, value);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GoogleGameCenter*))(Il2CppBase() + 0x443CBC8))(this);
	}
	template <typename T = void> T UnlockAchievement(Il2CppString* achId) {
		return ((T (*)(GoogleGameCenter*, Il2CppString*))(Il2CppBase() + 0x443CCF4))(this, achId);
	}
	template <typename T = void> T IncrementAchievement(Il2CppString* achId, int32_t steps) {
		return ((T (*)(GoogleGameCenter*, Il2CppString*, int32_t))(Il2CppBase() + 0x443CFB0))(this, achId, steps);
	}
	template <typename T = void> T FlushAchievements() {
		return ((T (*)(GoogleGameCenter*))(Il2CppBase() + 0x443D0CC))(this);
	}
	template <typename T = void> T Authenticate(void* onDone) {
		return ((T (*)(GoogleGameCenter*, void*))(Il2CppBase() + 0x443D3B8))(this, onDone);
	}
	template <typename T = bool> T get_Authenticating() {
		return ((T (*)(GoogleGameCenter*))(Il2CppBase() + 0x443D570))(this);
	}
	template <typename T = bool> T get_Authenticated() {
		return ((T (*)(GoogleGameCenter*))(Il2CppBase() + 0x443CEF4))(this);
	}
	template <typename T = void> T SignOut() {
		return ((T (*)(GoogleGameCenter*))(Il2CppBase() + 0x443D5D0))(this);
	}
	template <typename T = void> T _ShowLeaderboardUI() {
		return ((T (*)(GoogleGameCenter*))(Il2CppBase() + 0x443D68C))(this);
	}
	template <typename T = void> T ShowLeaderboardUI() {
		return ((T (*)(GoogleGameCenter*))(Il2CppBase() + 0x443D6E8))(this);
	}
	template <typename T = void> T ShowAchievementsUI() {
		return ((T (*)(GoogleGameCenter*))(Il2CppBase() + 0x443D7C0))(this);
	}
	template <typename T = void> T PostToLeaderboard(int32_t postScore) {
		return ((T (*)(GoogleGameCenter*, int32_t))(Il2CppBase() + 0x443D950))(this, postScore);
	}
	template <typename T = void> T ShowLeaderboardUIb__21_0(bool success) {
		return ((T (*)(GoogleGameCenter*, bool))(Il2CppBase() + 0x443DA80))(this, success);
	}

};

}
