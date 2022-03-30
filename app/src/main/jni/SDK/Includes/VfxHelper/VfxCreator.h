#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace VfxHelper {

class VfxCreator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "VfxHelper", "VfxCreator"));
	}

	template <typename T = uintptr_t> T& prefab() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& destroyDelay() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& spriteRendererFadeFactor() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& vfxParentName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& noRotation() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& autoFadeOut() {
		return *(T*)((uintptr_t)this + 0x31);
	}
	template <typename T = uintptr_t> T& _obj() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(VfxCreator*))(Il2CppBase() + 0x4358D18))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(VfxCreator*))(Il2CppBase() + 0x43593F4))(this);
	}
	template <typename T = void> T UpdateTransform() {
		return ((T (*)(VfxCreator*))(Il2CppBase() + 0x4359140))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(VfxCreator*))(Il2CppBase() + 0x43598F8))(this);
	}
	template <typename T = void> static T DisableParticleEmission(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x43596B4))(0, obj);
	}
	template <typename T = void> static T SpriteFadeOut(uintptr_t obj, float duration) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x43597D8))(0, obj, duration);
	}
	template <typename T = void> static T DelayDestroy(uintptr_t obj, float delay) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x4359958))(0, obj, delay);
	}

};

}
