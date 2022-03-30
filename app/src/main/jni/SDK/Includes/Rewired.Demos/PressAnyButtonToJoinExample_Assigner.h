#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Rewired.Demos {

class PressAnyButtonToJoinExampleAssigner
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Rewired.Demos", "PressAnyButtonToJoinExample_Assigner"));
	}


	template <typename T = void> T Update() {
		return ((T (*)(PressAnyButtonToJoinExampleAssigner*))(Il2CppBase() + 0x267EEE0))(this);
	}
	template <typename T = void> T AssignJoysticksToPlayers() {
		return ((T (*)(PressAnyButtonToJoinExampleAssigner*))(Il2CppBase() + 0x267EF9C))(this);
	}
	template <typename T = uintptr_t> T FindPlayerWithoutJoystick() {
		return ((T (*)(PressAnyButtonToJoinExampleAssigner*))(Il2CppBase() + 0x267F2E8))(this);
	}
	template <typename T = bool> T DoAllPlayersHaveJoysticks() {
		return ((T (*)(PressAnyButtonToJoinExampleAssigner*))(Il2CppBase() + 0x267F578))(this);
	}

};

}
