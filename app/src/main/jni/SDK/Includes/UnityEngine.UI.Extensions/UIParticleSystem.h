#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace UnityEngine.UI.Extensions {

class UIParticleSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityEngine.UI.Extensions", "UIParticleSystem"));
	}

	template <typename T = bool> T& fixedTime() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& _transform() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& pSystem() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& particles() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _quad() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& imageUV() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& textureSheetAnimation() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = int32_t> T& textureSheetAnimationFrames() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = Il2CppVector2> T& textureSheetAnimationFrameSize() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& pRenderer() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& currentMaterial() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& currentTexture() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& mainModule() {
		return *(T*)((uintptr_t)this + 0x118);
	}

	template <typename T = uintptr_t> T get_mainTexture() {
		return ((T (*)(UIParticleSystem*))(Il2CppBase() + 0x43F2144))(this);
	}
	template <typename T = bool> T Initialize() {
		return ((T (*)(UIParticleSystem*))(Il2CppBase() + 0x43F21A4))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(UIParticleSystem*))(Il2CppBase() + 0x43F26F4))(this);
	}
	template <typename T = void> T OnPopulateMesh(uintptr_t vh) {
		return ((T (*)(UIParticleSystem*, uintptr_t))(Il2CppBase() + 0x43F2780))(this, vh);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIParticleSystem*))(Il2CppBase() + 0x43F3720))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(UIParticleSystem*))(Il2CppBase() + 0x43F39B4))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_mainTexture() {
		return ((T (*)(UIParticleSystem*))(Il2CppBase() + 0x43F3D58))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(UIParticleSystem*))(Il2CppBase() + 0x43F3D60))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnPopulateMesh(uintptr_t P0) {
		return ((T (*)(UIParticleSystem*, uintptr_t))(Il2CppBase() + 0x43F3D68))(this, P0);
	}

};

}
