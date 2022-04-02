#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SnakeBulletSkill
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SnakeBulletSkill"));
	}

	template <typename T = uintptr_t> T& _state() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _timeCounter() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& _snakeReleaseCount() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& _circularReleaseTimes() {
		return *(T*)((uintptr_t)this + 0x4C);
	}

	template <typename T = void> T ReleaseSkill() {
		return ((T (*)(SnakeBulletSkill*))(Il2CppBase() + 0x1B8ABE4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(SnakeBulletSkill*))(Il2CppBase() + 0x1B8AD0C))(this);
	}
	template <typename T = void> T ReleaseSnakeBullet() {
		return ((T (*)(SnakeBulletSkill*))(Il2CppBase() + 0x1B8B034))(this);
	}
	template <typename T = void> T ReleaseCircularBullet() {
		return ((T (*)(SnakeBulletSkill*))(Il2CppBase() + 0x1B8889C))(this);
	}

};

}
