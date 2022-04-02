#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DefenceGameModeProcess
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DefenceGameModeProcess"));
	}


	template <typename T = bool> T NeedGotoStatement(int32_t levelIndex) {
		return ((T (*)(DefenceGameModeProcess*, int32_t))(Il2CppBase() + 0x42E4814))(this, levelIndex);
	}
	template <typename T = void> T ProcessLevelIndex(uintptr_t levelIndex) {
		return ((T (*)(DefenceGameModeProcess*, uintptr_t))(Il2CppBase() + 0x42E4888))(this, levelIndex);
	}
	template <typename T = void> T AfterProcessLevelIndex(uintptr_t levelIndex) {
		return ((T (*)(DefenceGameModeProcess*, uintptr_t))(Il2CppBase() + 0x42E4904))(this, levelIndex);
	}
	template <typename T = void> T GotoNextScene(Il2CppString* targetScene) {
		return ((T (*)(DefenceGameModeProcess*, Il2CppString*))(Il2CppBase() + 0x42E49D0))(this, targetScene);
	}
	template <typename T = void> T iFixBaseProxy_ProcessLevelIndex(uintptr_t P0) {
		return ((T (*)(DefenceGameModeProcess*, uintptr_t))(Il2CppBase() + 0x42E4B88))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_AfterProcessLevelIndex(uintptr_t P0) {
		return ((T (*)(DefenceGameModeProcess*, uintptr_t))(Il2CppBase() + 0x42E4B90))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_GotoNextScene(Il2CppString* P0) {
		return ((T (*)(DefenceGameModeProcess*, Il2CppString*))(Il2CppBase() + 0x42E4B98))(this, P0);
	}

};

}
