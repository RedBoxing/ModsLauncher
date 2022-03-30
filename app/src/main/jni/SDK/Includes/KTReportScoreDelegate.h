#pragma once
#include "Il2Cpp/Il2Cpp.h"

class KTReportScoreDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "KTReportScoreDelegate"));
	}


	template <typename T = void> T Invoke(Il2CppString* leaderboardId, uintptr_t error) {
		return ((T (*)(KTReportScoreDelegate*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x21AEFE0))(this, leaderboardId, error);
	}
	template <typename T = uintptr_t> T BeginInvoke(Il2CppString* leaderboardId, uintptr_t error, uintptr_t callback, uintptr_t object) {
		return ((T (*)(KTReportScoreDelegate*, Il2CppString*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x21AF770))(this, leaderboardId, error, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(KTReportScoreDelegate*, uintptr_t))(Il2CppBase() + 0x21AF7A0))(this, result);
	}

};

}
