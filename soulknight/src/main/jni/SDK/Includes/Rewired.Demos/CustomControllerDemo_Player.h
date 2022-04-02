#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Rewired.Demos {

class CustomControllerDemoPlayer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Rewired.Demos", "CustomControllerDemo_Player"));
	}

	template <typename T = int32_t> T& playerId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& speed() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& bulletSpeed() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& bulletPrefab() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _player() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& cc() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = uintptr_t> T get_player() {
		return ((T (*)(CustomControllerDemoPlayer*))(Il2CppBase() + 0x206381C))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(CustomControllerDemoPlayer*))(Il2CppBase() + 0x20638FC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(CustomControllerDemoPlayer*))(Il2CppBase() + 0x2063994))(this);
	}

};

}
