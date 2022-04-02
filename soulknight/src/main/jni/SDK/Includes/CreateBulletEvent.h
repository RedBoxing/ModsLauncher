#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CreateBulletEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CreateBulletEvent"));
	}

	template <typename T = uintptr_t> static T& cachedEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& bullet() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& melee() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> static T UseCache(uintptr_t bullet, bool isMelee) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x427BCA8))(0, bullet, isMelee);
	}

};

}
