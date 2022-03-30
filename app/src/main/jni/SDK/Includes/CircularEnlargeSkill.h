#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CircularEnlargeSkill
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CircularEnlargeSkill"));
	}

	template <typename T = uintptr_t> T& _timeCounter() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& _releaseTimes() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _waitForEndOfFrame() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _enemyController() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& _startAngle() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = void> T ReleaseSkill() {
		return ((T (*)(CircularEnlargeSkill*))(Il2CppBase() + 0x1B88C70))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(CircularEnlargeSkill*))(Il2CppBase() + 0x1B88E08))(this);
	}
	template <typename T = uintptr_t> T ReleaseBullet() {
		return ((T (*)(CircularEnlargeSkill*))(Il2CppBase() + 0x1B88FA8))(this);
	}

};

}
