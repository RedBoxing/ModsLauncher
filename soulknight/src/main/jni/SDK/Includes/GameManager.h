#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GameManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GameManager"));
	}

	template <typename T = uintptr_t> T& sceneManager() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& IsInit() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = bool> T get_IsInit() {
		return ((T (*)(GameManager*))(Il2CppBase() + 0x442BE58))(this);
	}
	template <typename T = void> T set_IsInit(bool value) {
		return ((T (*)(GameManager*, bool))(Il2CppBase() + 0x442BE60))(this, value);
	}
	template <typename T = void> T Init() {
		return ((T (*)(GameManager*))(Il2CppBase() + 0x442BE6C))(this);
	}
	template <typename T = void> T PauseGame() {
		return ((T (*)(GameManager*))(Il2CppBase() + 0x442BF58))(this);
	}
	template <typename T = bool> T IsPaused() {
		return ((T (*)(GameManager*))(Il2CppBase() + 0x442C054))(this);
	}
	template <typename T = void> T ContinueGame() {
		return ((T (*)(GameManager*))(Il2CppBase() + 0x442C120))(this);
	}
	template <typename T = void> T NextLevel(bool isSpecificBranch, Il2CppString* branchIndex) {
		return ((T (*)(GameManager*, bool, Il2CppString*))(Il2CppBase() + 0x442C184))(this, isSpecificBranch, branchIndex);
	}
	template <typename T = void> T ProcessSleepFactor() {
		return ((T (*)(GameManager*))(Il2CppBase() + 0x442C328))(this);
	}
	template <typename T = void> T OnApplicationPause(bool pauseStatus) {
		return ((T (*)(GameManager*, bool))(Il2CppBase() + 0x442C634))(this, pauseStatus);
	}

};

}
