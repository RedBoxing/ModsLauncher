#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Rewired.Demos {

class PressStartToJoinExampleGamePlayer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Rewired.Demos", "PressStartToJoinExample_GamePlayer"));
	}

	template <typename T = int32_t> T& gamePlayerId() {
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
		return ((T (*)(PressStartToJoinExampleGamePlayer*))(Il2CppBase() + 0x268061C))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(PressStartToJoinExampleGamePlayer*))(Il2CppBase() + 0x268067C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(PressStartToJoinExampleGamePlayer*))(Il2CppBase() + 0x2680714))(this);
	}
	template <typename T = void> T GetInput() {
		return ((T (*)(PressStartToJoinExampleGamePlayer*))(Il2CppBase() + 0x26807E4))(this);
	}
	template <typename T = void> T ProcessInput() {
		return ((T (*)(PressStartToJoinExampleGamePlayer*))(Il2CppBase() + 0x26808F8))(this);
	}

};

}
