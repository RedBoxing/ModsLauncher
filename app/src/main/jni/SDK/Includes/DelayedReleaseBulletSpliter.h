#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DelayedReleaseBulletSpliter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DelayedReleaseBulletSpliter"));
	}

	template <typename T = uintptr_t> T& rgWeapon() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& delayReleaseWeapon() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& defaultSpliter() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Start() {
		return ((T (*)(DelayedReleaseBulletSpliter*))(Il2CppBase() + 0x42EA394))(this);
	}
	template <typename T = void> T StartSplit(void* splitConfigGetter) {
		return ((T (*)(DelayedReleaseBulletSpliter*, void*))(Il2CppBase() + 0x42EA468))(this, splitConfigGetter);
	}
	template <typename T = void> T EndSplit() {
		return ((T (*)(DelayedReleaseBulletSpliter*))(Il2CppBase() + 0x42EA6C8))(this);
	}

};

}
