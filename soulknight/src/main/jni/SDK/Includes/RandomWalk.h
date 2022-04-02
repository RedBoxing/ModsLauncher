#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RandomWalk
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RandomWalk"));
	}

	template <typename T = float> T& speed() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& currentNode() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(RandomWalk*))(Il2CppBase() + 0x44DD6CC))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(RandomWalk*))(Il2CppBase() + 0x44DD764))(this);
	}
	template <typename T = uintptr_t> T Walking() {
		return ((T (*)(RandomWalk*))(Il2CppBase() + 0x44DD7D4))(this);
	}
	template <typename T = void> T Walkingg__WalkToNextNode|5_0() {
		return ((T (*)(RandomWalk*))(Il2CppBase() + 0x44DD8C4))(this);
	}
	template <typename T = void> T Walkingb__5_1() {
		return ((T (*)(RandomWalk*))(Il2CppBase() + 0x44DDC78))(this);
	}

};

}
