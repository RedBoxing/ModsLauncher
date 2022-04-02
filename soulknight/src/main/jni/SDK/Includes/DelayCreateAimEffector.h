#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DelayCreateAimEffector
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DelayCreateAimEffector"));
	}

	template <typename T = uintptr_t> T& bullet() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& releaseDuration() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& initDelay() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& scanDuration() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& scanRadius() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& targetLayer() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& obstacleLayer() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& parentBullet() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppVector3> T& targetPositionOffset() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& releaseCount() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& angleInBetween() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _releaseCounter() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _scanCounter() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& _targetObject() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _colliders() {
		return *(T*)((uintptr_t)this + 0x70);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(DelayCreateAimEffector*))(Il2CppBase() + 0x42E62C0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(DelayCreateAimEffector*))(Il2CppBase() + 0x42E63D4))(this);
	}
	template <typename T = void> T ReleaseBullet() {
		return ((T (*)(DelayCreateAimEffector*))(Il2CppBase() + 0x42E64E0))(this);
	}
	template <typename T = void> T ScanTarget() {
		return ((T (*)(DelayCreateAimEffector*))(Il2CppBase() + 0x42E6950))(this);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(DelayCreateAimEffector*))(Il2CppBase() + 0x42E6320))(this);
	}

};

}
