#pragma once
#include "Il2Cpp/Il2Cpp.h"

class IC14Skill1Effect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IC14Skill1Effect"));
	}


	template <typename T = void> T Init(uintptr_t controller, uintptr_t followTransform, uintptr_t followSprite) {
		return ((T (*)(IC14Skill1Effect*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, controller, followTransform, followSprite);
	}
	template <typename T = void> T FadeOut() {
		return ((T (*)(IC14Skill1Effect*))(Il2CppBase() + 0x0))(this);
	}

};

}
