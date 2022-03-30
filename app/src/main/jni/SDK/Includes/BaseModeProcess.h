#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BaseModeProcess
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseModeProcess"));
	}


	template <typename T = bool> T NeedGotoStatement(int32_t levelIndex) {
		return ((T (*)(BaseModeProcess*, int32_t))(Il2CppBase() + 0x0))(this, levelIndex);
	}
	template <typename T = void> T ProcessLevelIndex(uintptr_t levelIndex) {
		return ((T (*)(BaseModeProcess*, uintptr_t))(Il2CppBase() + 0x418C330))(this, levelIndex);
	}
	template <typename T = void> T AfterProcessLevelIndex(uintptr_t levelIndex) {
		return ((T (*)(BaseModeProcess*, uintptr_t))(Il2CppBase() + 0x418C3BC))(this, levelIndex);
	}
	template <typename T = void> T GotoNextScene(Il2CppString* targetScene) {
		return ((T (*)(BaseModeProcess*, Il2CppString*))(Il2CppBase() + 0x418C42C))(this, targetScene);
	}
	template <typename T = void> T UpdateBattleTime(float add_battle_time) {
		return ((T (*)(BaseModeProcess*, float))(Il2CppBase() + 0x418C504))(this, add_battle_time);
	}

};

}
