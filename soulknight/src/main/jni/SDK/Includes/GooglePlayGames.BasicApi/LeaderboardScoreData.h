#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.BasicApi {

class LeaderboardScoreData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.BasicApi", "LeaderboardScoreData"));
	}

	template <typename T = Il2CppString*> T& mId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& mStatus() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint64_t> T& mApproxCount() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& mTitle() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& mPlayerScore() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& mPrevPage() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& mNextPage() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mScores() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = bool> T get_Valid() {
		return ((T (*)(LeaderboardScoreData*))(Il2CppBase() + 0x35BFA80))(this);
	}
	template <typename T = uintptr_t> T get_Status() {
		return ((T (*)(LeaderboardScoreData*))(Il2CppBase() + 0x35BFAEC))(this);
	}
	template <typename T = void> T set_Status(uintptr_t value) {
		return ((T (*)(LeaderboardScoreData*, uintptr_t))(Il2CppBase() + 0x35BFB4C))(this, value);
	}
	template <typename T = uint64_t> T get_ApproximateCount() {
		return ((T (*)(LeaderboardScoreData*))(Il2CppBase() + 0x35BFBC0))(this);
	}
	template <typename T = void> T set_ApproximateCount(uint64_t value) {
		return ((T (*)(LeaderboardScoreData*, uint64_t))(Il2CppBase() + 0x35BFC20))(this, value);
	}
	template <typename T = Il2CppString*> T get_Title() {
		return ((T (*)(LeaderboardScoreData*))(Il2CppBase() + 0x35BFC94))(this);
	}
	template <typename T = void> T set_Title(Il2CppString* value) {
		return ((T (*)(LeaderboardScoreData*, Il2CppString*))(Il2CppBase() + 0x35BFCF4))(this, value);
	}
	template <typename T = Il2CppString*> T get_Id() {
		return ((T (*)(LeaderboardScoreData*))(Il2CppBase() + 0x35BFD68))(this);
	}
	template <typename T = void> T set_Id(Il2CppString* value) {
		return ((T (*)(LeaderboardScoreData*, Il2CppString*))(Il2CppBase() + 0x35BFDC8))(this, value);
	}
	template <typename T = uintptr_t> T get_PlayerScore() {
		return ((T (*)(LeaderboardScoreData*))(Il2CppBase() + 0x35BFE3C))(this);
	}
	template <typename T = void> T set_PlayerScore(uintptr_t value) {
		return ((T (*)(LeaderboardScoreData*, uintptr_t))(Il2CppBase() + 0x35BFE9C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Scores() {
		return ((T (*)(LeaderboardScoreData*))(Il2CppBase() + 0x35BFF10))(this);
	}
	template <typename T = int32_t> T AddScore(uintptr_t score) {
		return ((T (*)(LeaderboardScoreData*, uintptr_t))(Il2CppBase() + 0x35BFFB0))(this, score);
	}
	template <typename T = uintptr_t> T get_PrevPageToken() {
		return ((T (*)(LeaderboardScoreData*))(Il2CppBase() + 0x35C008C))(this);
	}
	template <typename T = void> T set_PrevPageToken(uintptr_t value) {
		return ((T (*)(LeaderboardScoreData*, uintptr_t))(Il2CppBase() + 0x35C00EC))(this, value);
	}
	template <typename T = uintptr_t> T get_NextPageToken() {
		return ((T (*)(LeaderboardScoreData*))(Il2CppBase() + 0x35C0160))(this);
	}
	template <typename T = void> T set_NextPageToken(uintptr_t value) {
		return ((T (*)(LeaderboardScoreData*, uintptr_t))(Il2CppBase() + 0x35C01C0))(this, value);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(LeaderboardScoreData*))(Il2CppBase() + 0x35C0234))(this);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_ToString() {
		return ((T (*)(LeaderboardScoreData*))(Il2CppBase() + 0x35C0468))(this);
	}

};

}
