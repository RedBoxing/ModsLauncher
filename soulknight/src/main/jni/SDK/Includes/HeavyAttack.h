#pragma once
#include "Il2Cpp/Il2Cpp.h"

class HeavyAttack
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HeavyAttack"));
	}

	template <typename T = uintptr_t> T& _timeCounter() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _shoutCounter() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& _releaseShoutEffect() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& _bulletReleaseCount() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _bulletEffects() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& _hasReleased() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = void> T ReleaseSkill() {
		return ((T (*)(HeavyAttack*))(Il2CppBase() + 0x1B9310C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(HeavyAttack*))(Il2CppBase() + 0x1B93274))(this);
	}
	template <typename T = void> T ReleaseBullets() {
		return ((T (*)(HeavyAttack*))(Il2CppBase() + 0x1B93618))(this);
	}
	template <typename T = void> T ShowBullet() {
		return ((T (*)(HeavyAttack*))(Il2CppBase() + 0x1B93CDC))(this);
	}

};

}
