#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace NextLevel {

class NextLevelPlayerInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "NextLevel", "NextLevelPlayerInfo"));
	}

	template <typename T = Il2CppDictionary<uint32_t, bool>*> T& playerStateDic() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T IsAllPlayerReady() {
		return ((T (*)(NextLevelPlayerInfo*))(Il2CppBase() + 0x4523B3C))(this);
	}
	template <typename T = void> T RemovePlayer(uint32_t netId) {
		return ((T (*)(NextLevelPlayerInfo*, uint32_t))(Il2CppBase() + 0x45234CC))(this, netId);
	}
	template <typename T = void> T AddPlayer(uint32_t netId) {
		return ((T (*)(NextLevelPlayerInfo*, uint32_t))(Il2CppBase() + 0x4522CF4))(this, netId);
	}
	template <typename T = void> T SetPlayerReadyState(uint32_t netId, bool isReady) {
		return ((T (*)(NextLevelPlayerInfo*, uint32_t, bool))(Il2CppBase() + 0x45239B4))(this, netId, isReady);
	}
	template <typename T = void> T SetAllPlayerReadyState(bool isReady) {
		return ((T (*)(NextLevelPlayerInfo*, bool))(Il2CppBase() + 0x45235C0))(this, isReady);
	}
	template <typename T = int32_t> T PlayerCount() {
		return ((T (*)(NextLevelPlayerInfo*))(Il2CppBase() + 0x4522F70))(this);
	}
	template <typename T = int32_t> T ReadyCount() {
		return ((T (*)(NextLevelPlayerInfo*))(Il2CppBase() + 0x4522DEC))(this);
	}

};

}
