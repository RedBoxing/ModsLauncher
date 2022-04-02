#pragma once
#include "Il2Cpp/Il2Cpp.h"

class KTLeaderboardCommon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "KTLeaderboardCommon"));
	}


	template <typename T = void> static T ReportScore(int64_t score, Il2CppString* leaderboardId, Il2CppString* scoreTag, uintptr_t obj, uintptr_t callbackMethod) {
		return ((T (*)(void *, int64_t, Il2CppString*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x21AEE18))(0, score, leaderboardId, scoreTag, obj, callbackMethod);
	}

};

}
