#pragma once
#include "Il2Cpp/Il2Cpp.h"

class C14Skill1Effect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "C14Skill1Effect"));
	}

	template <typename T = float> T& smoothTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& positionOffset() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& fadeOutTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& controller() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& followTransform() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& followSprite() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppVector3> T& currentVelocity() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& spriteCache() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& isAlive() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& initAlpha() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& fadeOutStartTime() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = bool> T get_isControllerExists() {
		return ((T (*)(C14Skill1Effect*))(Il2CppBase() + 0x1F3A714))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(C14Skill1Effect*))(Il2CppBase() + 0x1F3A844))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(C14Skill1Effect*))(Il2CppBase() + 0x1F3ADFC))(this);
	}
	template <typename T = void> T UpdateSprite() {
		return ((T (*)(C14Skill1Effect*))(Il2CppBase() + 0x1F3A934))(this);
	}
	template <typename T = void> T UpdateTransform() {
		return ((T (*)(C14Skill1Effect*))(Il2CppBase() + 0x1F3AEE8))(this);
	}
	template <typename T = void> T Init(uintptr_t controller, uintptr_t followTransform, uintptr_t followSprite) {
		return ((T (*)(C14Skill1Effect*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1F3B0EC))(this, controller, followTransform, followSprite);
	}
	template <typename T = void> T FadeOut() {
		return ((T (*)(C14Skill1Effect*))(Il2CppBase() + 0x1F3B184))(this);
	}
	template <typename T = void> T UpdateFadeOut() {
		return ((T (*)(C14Skill1Effect*))(Il2CppBase() + 0x1F3AC18))(this);
	}

};

}
