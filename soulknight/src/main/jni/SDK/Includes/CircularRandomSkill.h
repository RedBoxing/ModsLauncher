#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CircularRandomSkill
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CircularRandomSkill"));
	}

	template <typename T = float> T& _currentLeftAngle() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& _currentRightAngle() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& _bulletCounter() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _releaseCounter() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _random() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T ReleaseSkill() {
		return ((T (*)(CircularRandomSkill*))(Il2CppBase() + 0x1B89C08))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(CircularRandomSkill*))(Il2CppBase() + 0x1B89FA4))(this);
	}
	template <typename T = void> T ReleaseBullet() {
		return ((T (*)(CircularRandomSkill*))(Il2CppBase() + 0x1B89DA8))(this);
	}
	template <typename T = void> T ReleaseBullet_1(Il2CppVector3 position, float angle) {
		return ((T (*)(CircularRandomSkill*, Il2CppVector3, float))(Il2CppBase() + 0x1B8A14C))(this, position, angle);
	}

};

}
