#pragma once
#include "Il2Cpp/Il2Cpp.h"

class FollowBulletSkill
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FollowBulletSkill"));
	}

	template <typename T = int32_t> T& _releaseCount() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _timeCounter() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T ReleaseSkill() {
		return ((T (*)(FollowBulletSkill*))(Il2CppBase() + 0x1B8A3C4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(FollowBulletSkill*))(Il2CppBase() + 0x1B8A494))(this);
	}
	template <typename T = void> T ReleaseBullet() {
		return ((T (*)(FollowBulletSkill*))(Il2CppBase() + 0x1B8A610))(this);
	}

};

}
