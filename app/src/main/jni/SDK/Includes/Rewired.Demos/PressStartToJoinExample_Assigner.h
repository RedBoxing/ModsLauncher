#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Rewired.Demos {

class PressStartToJoinExampleAssigner
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Rewired.Demos", "PressStartToJoinExample_Assigner"));
	}

	template <typename T = uintptr_t> static T& instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& maxPlayers() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& playerMap() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& gamePlayerIdCounter() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = uintptr_t> static T GetRewiredPlayer(int32_t gamePlayerId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x267FCC4))(0, gamePlayerId);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(PressStartToJoinExampleAssigner*))(Il2CppBase() + 0x267FF5C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(PressStartToJoinExampleAssigner*))(Il2CppBase() + 0x2680018))(this);
	}
	template <typename T = void> T AssignNextPlayer(int32_t rewiredPlayerId) {
		return ((T (*)(PressStartToJoinExampleAssigner*, int32_t))(Il2CppBase() + 0x2680174))(this, rewiredPlayerId);
	}
	template <typename T = int32_t> T GetNextGamePlayerId() {
		return ((T (*)(PressStartToJoinExampleAssigner*))(Il2CppBase() + 0x268056C))(this);
	}

};

}
