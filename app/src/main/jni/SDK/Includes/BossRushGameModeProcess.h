#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BossRushGameModeProcess
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossRushGameModeProcess"));
	}


	template <typename T = bool> T NeedGotoStatement(int32_t nextLevelIndex) {
		return ((T (*)(BossRushGameModeProcess*, int32_t))(Il2CppBase() + 0x1DEBF44))(this, nextLevelIndex);
	}
	template <typename T = bool> T HasExtraFinalBoss(int32_t levelIndex) {
		return ((T (*)(BossRushGameModeProcess*, int32_t))(Il2CppBase() + 0x1DEC2C8))(this, levelIndex);
	}
	template <typename T = int32_t> static T CountdownRemain() {
		return ((T (*)(void *))(Il2CppBase() + 0x1DEC1BC))(0);
	}
	template <typename T = bool> static T IsPureMode() {
		return ((T (*)(void *))(Il2CppBase() + 0x1DEC020))(0);
	}
	template <typename T = int32_t> T NecessaryPassLevelCount() {
		return ((T (*)(BossRushGameModeProcess*))(Il2CppBase() + 0x1DEC35C))(this);
	}

};

}
