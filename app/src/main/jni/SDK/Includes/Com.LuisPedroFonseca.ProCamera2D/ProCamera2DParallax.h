#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Com.LuisPedroFonseca.ProCamera2D {

class ProCamera2DParallax
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Com.LuisPedroFonseca.ProCamera2D", "ProCamera2DParallax"));
	}

	template <typename T = Il2CppString*> static T& ExtensionName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& ParallaxLayers() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& ParallaxHorizontal() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& ParallaxVertical() {
		return *(T*)((uintptr_t)this + 0x61);
	}
	template <typename T = Il2CppVector3> T& RootPosition() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& _initialOrtographicSize() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _initialSpeeds() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _animateCoroutine() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& _pmOrder() {
		return *(T*)((uintptr_t)this + 0x88);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ProCamera2DParallax*))(Il2CppBase() + 0x2C22D20))(this);
	}
	template <typename T = void> T PostMove(float deltaTime) {
		return ((T (*)(ProCamera2DParallax*, float))(Il2CppBase() + 0x2C2368C))(this, deltaTime);
	}
	template <typename T = int32_t> T get_PMOrder() {
		return ((T (*)(ProCamera2DParallax*))(Il2CppBase() + 0x2C23C18))(this);
	}
	template <typename T = void> T set_PMOrder(int32_t value) {
		return ((T (*)(ProCamera2DParallax*, int32_t))(Il2CppBase() + 0x2C23C78))(this, value);
	}
	template <typename T = void> T Move() {
		return ((T (*)(ProCamera2DParallax*))(Il2CppBase() + 0x2C23720))(this);
	}
	template <typename T = void> T ToggleParallax(bool value, float duration, uintptr_t easeType) {
		return ((T (*)(ProCamera2DParallax*, bool, float, uintptr_t))(Il2CppBase() + 0x2C23CEC))(this, value, duration, easeType);
	}
	template <typename T = uintptr_t> T Animate(bool value, float duration, uintptr_t easeType) {
		return ((T (*)(ProCamera2DParallax*, bool, float, uintptr_t))(Il2CppBase() + 0x2C23DBC))(this, value, duration, easeType);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(ProCamera2DParallax*))(Il2CppBase() + 0x2C2401C))(this);
	}

};

}
