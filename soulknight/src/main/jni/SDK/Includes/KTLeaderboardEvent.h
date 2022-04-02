#pragma once
#include "Il2Cpp/Il2Cpp.h"

class KTLeaderboardEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "KTLeaderboardEvent"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& KTPlayLeaderboardEventFriendsLeaderboard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& KTPlayLeaderboardEventGlobalLeaderboard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& KTPlayLeaderboardEventReportScore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& KTPlayLeaderboardEventLastFriendsLeaderboard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& KTPlayLeaderboardEventLastGlobalLeaderboard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
