#pragma once
#include "Il2Cpp/Il2Cpp.h"

class KTLeaderboardCallbackParams
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "KTLeaderboardCallbackParams"));
	}

	template <typename T = Il2CppString*> static T& KEY_WHAT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& KEY_PARAMS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& KEY_REQINFO() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& leaderboardEventResult() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& reportScoreLeaderboardError() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& leaderboardId() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = double> T& score() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& scoreTag() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& playError() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T ParseFromString(Il2CppString* s) {
		return ((T (*)(KTLeaderboardCallbackParams*, Il2CppString*))(Il2CppBase() + 0x21AFB3C))(this, s);
	}

};

}
