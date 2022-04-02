#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SandboxGameModeProcess
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SandboxGameModeProcess"));
	}


	template <typename T = bool> T NeedGotoStatement(int32_t levelIndex) {
		return ((T (*)(SandboxGameModeProcess*, int32_t))(Il2CppBase() + 0x18148A4))(this, levelIndex);
	}
	template <typename T = void> T AfterProcessLevelIndex(uintptr_t levelIndex) {
		return ((T (*)(SandboxGameModeProcess*, uintptr_t))(Il2CppBase() + 0x181493C))(this, levelIndex);
	}
	template <typename T = void> T GotoNextScene(Il2CppString* targetScene) {
		return ((T (*)(SandboxGameModeProcess*, Il2CppString*))(Il2CppBase() + 0x1814A08))(this, targetScene);
	}
	template <typename T = void> T iFixBaseProxy_AfterProcessLevelIndex(uintptr_t P0) {
		return ((T (*)(SandboxGameModeProcess*, uintptr_t))(Il2CppBase() + 0x1814BC0))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_GotoNextScene(Il2CppString* P0) {
		return ((T (*)(SandboxGameModeProcess*, Il2CppString*))(Il2CppBase() + 0x1814BC8))(this, P0);
	}

};

}
