#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CutBulletEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CutBulletEvent"));
	}

	template <typename T = bool> T& rebound() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& bullet() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& rgBulletTrigger() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& meleeBulletObj() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _cache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T UseCache(bool rebound, uintptr_t bullet, uintptr_t bulletTrigger, uintptr_t meleeBulletObj) {
		return ((T (*)(void *, bool, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4284D40))(0, rebound, bullet, bulletTrigger, meleeBulletObj);
	}

};

}
