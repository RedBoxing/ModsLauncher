#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Rewired.Demos {

class EightPlayersExamplePlayer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Rewired.Demos", "EightPlayersExample_Player"));
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
	template <typename T = uintptr_t> T& player() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& cc() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppVector3> T& moveVector() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& fire() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& initialized() {
		return *(T*)((uintptr_t)this + 0x4D);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(EightPlayersExamplePlayer*))(Il2CppBase() + 0x20660E4))(this);
	}
	template <typename T = void> T Initialize() {
		return ((T (*)(EightPlayersExamplePlayer*))(Il2CppBase() + 0x206617C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(EightPlayersExamplePlayer*))(Il2CppBase() + 0x206625C))(this);
	}
	template <typename T = void> T GetInput() {
		return ((T (*)(EightPlayersExamplePlayer*))(Il2CppBase() + 0x2066330))(this);
	}
	template <typename T = void> T ProcessInput() {
		return ((T (*)(EightPlayersExamplePlayer*))(Il2CppBase() + 0x2066438))(this);
	}

};

}
