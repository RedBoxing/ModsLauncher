#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ScalingRollingBall
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ScalingRollingBall"));
	}

	template <typename T = float> T& minScale() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& maxScale() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& explodeMinScale() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& _scaling() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& passedTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& enemyLayerMask() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& cachedHit() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& explode() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ScalingRollingBall*))(Il2CppBase() + 0x1817420))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ScalingRollingBall*))(Il2CppBase() + 0x181752C))(this);
	}
	template <typename T = void> T StartScale() {
		return ((T (*)(ScalingRollingBall*))(Il2CppBase() + 0x1817B38))(this);
	}
	template <typename T = void> T StopScale() {
		return ((T (*)(ScalingRollingBall*))(Il2CppBase() + 0x1817B9C))(this);
	}

};

}
