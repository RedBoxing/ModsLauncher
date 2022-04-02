#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DelayBulletCreator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DelayBulletCreator"));
	}

	template <typename T = float> T& initDelay() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& sourceBullet() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& bullet() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& followTransform() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& onReleaseBullet() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& followAngle() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _timeCounter() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(DelayBulletCreator*))(Il2CppBase() + 0x42E55C4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(DelayBulletCreator*))(Il2CppBase() + 0x42E56AC))(this);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(DelayBulletCreator*))(Il2CppBase() + 0x42E5624))(this);
	}

};

}
