#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Weapon {

class CircularBulletCreator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Weapon", "CircularBulletCreator"));
	}

	template <typename T = int32_t> T& bulletCount() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& initAngleOffset() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& _circularPattern() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _weapon() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(CircularBulletCreator*))(Il2CppBase() + 0x4366B50))(this);
	}
	template <typename T = int32_t> T GetBulletCount() {
		return ((T (*)(CircularBulletCreator*))(Il2CppBase() + 0x4366CB0))(this);
	}
	template <typename T = float> T GetInitAngleOffset() {
		return ((T (*)(CircularBulletCreator*))(Il2CppBase() + 0x4366D10))(this);
	}
	template <typename T = void> T CreateBullet() {
		return ((T (*)(CircularBulletCreator*))(Il2CppBase() + 0x4366D70))(this);
	}
	template <typename T = void> T GenerateBullet(int32_t index, float currentAngle) {
		return ((T (*)(CircularBulletCreator*, int32_t, float))(Il2CppBase() + 0x4366DE4))(this, index, currentAngle);
	}

};

}
