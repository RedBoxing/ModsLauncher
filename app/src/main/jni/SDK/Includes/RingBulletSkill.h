#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RingBulletSkill
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RingBulletSkill"));
	}

	template <typename T = int32_t> T& _releaseTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _timeCounter() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T ReleaseSkill() {
		return ((T (*)(RingBulletSkill*))(Il2CppBase() + 0x1B85818))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(RingBulletSkill*))(Il2CppBase() + 0x1B85964))(this);
	}

};

}
