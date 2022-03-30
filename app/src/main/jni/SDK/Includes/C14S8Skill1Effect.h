#pragma once
#include "Il2Cpp/Il2Cpp.h"

class C14S8Skill1Effect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "C14S8Skill1Effect"));
	}

	template <typename T = uintptr_t> T& particle() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& startSpeed() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& initSize() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& _renderer() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& followTransform() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(C14S8Skill1Effect*))(Il2CppBase() + 0x1F3A10C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(C14S8Skill1Effect*))(Il2CppBase() + 0x1F3A1B4))(this);
	}
	template <typename T = void> T Init(uintptr_t controller, uintptr_t followTransform, uintptr_t followSprite) {
		return ((T (*)(C14S8Skill1Effect*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1F3A44C))(this, controller, followTransform, followSprite);
	}
	template <typename T = void> T FadeOut() {
		return ((T (*)(C14S8Skill1Effect*))(Il2CppBase() + 0x1F3A698))(this);
	}

};

}
