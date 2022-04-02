#pragma once
#include "Il2Cpp/Il2Cpp.h"

class KTLeaderboard
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "KTLeaderboard"));
	}

	template <typename T = uintptr_t> T& ktReportScoreDelegate() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& ktplayObj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> static T GetInstance() {
		return ((T (*)(void *))(Il2CppBase() + 0x21AEB00))(0);
	}
	template <typename T = void> static T ReportScore(int64_t score, Il2CppString* leaderboardId, Il2CppString* scoreTag, uintptr_t delegateMethod) {
		return ((T (*)(void *, int64_t, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x21AEC58))(0, score, leaderboardId, scoreTag, delegateMethod);
	}
	template <typename T = void> T ReportScoreCallback(int64_t score, Il2CppString* leaderboardId, Il2CppString* scoreTag, uintptr_t delegateMethod) {
		return ((T (*)(KTLeaderboard*, int64_t, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x21AED08))(this, score, leaderboardId, scoreTag, delegateMethod);
	}
	template <typename T = void> T OnLeaderboard(Il2CppString* param) {
		return ((T (*)(KTLeaderboard*, Il2CppString*))(Il2CppBase() + 0x21AEEC0))(this, param);
	}

};

}
