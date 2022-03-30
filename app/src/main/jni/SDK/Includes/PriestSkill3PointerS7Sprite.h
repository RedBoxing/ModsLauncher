#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PriestSkill3PointerS7Sprite
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PriestSkill3PointerS7Sprite"));
	}

	template <typename T = uintptr_t> T& lightSpriteRenderer() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& shadowSpriteRenderer() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& inactiveSpriteRenderer() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> static T& fadeDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _tweeners() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T ToLight() {
		return ((T (*)(PriestSkill3PointerS7Sprite*))(Il2CppBase() + 0x43A6690))(this);
	}
	template <typename T = void> T ToShadow() {
		return ((T (*)(PriestSkill3PointerS7Sprite*))(Il2CppBase() + 0x43A67F8))(this);
	}
	template <typename T = void> T ToInActive() {
		return ((T (*)(PriestSkill3PointerS7Sprite*))(Il2CppBase() + 0x43A6960))(this);
	}
	template <typename T = void> T ClearTween() {
		return ((T (*)(PriestSkill3PointerS7Sprite*))(Il2CppBase() + 0x43A6AD0))(this);
	}

};

}
