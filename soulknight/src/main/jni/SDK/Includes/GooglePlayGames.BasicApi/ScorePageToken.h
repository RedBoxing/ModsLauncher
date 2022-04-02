#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.BasicApi {

class ScorePageToken
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.BasicApi", "ScorePageToken"));
	}

	template <typename T = Il2CppString*> T& mId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& mInternalObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& mCollection() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& mTimespan() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = uintptr_t> T get_Collection() {
		return ((T (*)(ScorePageToken*))(Il2CppBase() + 0x35C75C4))(this);
	}
	template <typename T = uintptr_t> T get_TimeSpan() {
		return ((T (*)(ScorePageToken*))(Il2CppBase() + 0x35C7624))(this);
	}
	template <typename T = Il2CppString*> T get_LeaderboardId() {
		return ((T (*)(ScorePageToken*))(Il2CppBase() + 0x35BEA20))(this);
	}
	template <typename T = uintptr_t> T get_InternalObject() {
		return ((T (*)(ScorePageToken*))(Il2CppBase() + 0x35C7684))(this);
	}

};

}
