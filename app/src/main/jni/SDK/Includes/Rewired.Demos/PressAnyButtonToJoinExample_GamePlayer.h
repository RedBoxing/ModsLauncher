#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Rewired.Demos {

class PressAnyButtonToJoinExampleGamePlayer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Rewired.Demos", "PressAnyButtonToJoinExample_GamePlayer"));
	}

	template <typename T = int32_t> T& playerId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& moveSpeed() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& bulletSpeed() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& bulletPrefab() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& cc() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppVector3> T& moveVector() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& fire() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = uintptr_t> T get_player() {
		return ((T (*)(PressAnyButtonToJoinExampleGamePlayer*))(Il2CppBase() + 0x267F5EC))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(PressAnyButtonToJoinExampleGamePlayer*))(Il2CppBase() + 0x267F6E4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(PressAnyButtonToJoinExampleGamePlayer*))(Il2CppBase() + 0x267F77C))(this);
	}
	template <typename T = void> T GetInput() {
		return ((T (*)(PressAnyButtonToJoinExampleGamePlayer*))(Il2CppBase() + 0x267F84C))(this);
	}
	template <typename T = void> T ProcessInput() {
		return ((T (*)(PressAnyButtonToJoinExampleGamePlayer*))(Il2CppBase() + 0x267F960))(this);
	}

};

}
