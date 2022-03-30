#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Com.LuisPedroFonseca.ProCamera2D {

class ProCamera2DTransitionsFX
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Com.LuisPedroFonseca.ProCamera2D", "ProCamera2DTransitionsFX"));
	}

	template <typename T = Il2CppString*> static T& ExtensionName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& OnTransitionEnterStarted() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& OnTransitionEnterEnded() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& OnTransitionExitStarted() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& OnTransitionExitEnded() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& OnTransitionStarted() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& OnTransitionEnded() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> static T& _instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> T& TransitionShaderEnter() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& DurationEnter() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = float> T& DelayEnter() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& EaseTypeEnter() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& BackgroundColorEnter() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& SideEnter() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& DirectionEnter() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = int32_t> T& BlindsEnter() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& TransitionShaderExit() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = float> T& DurationExit() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = float> T& DelayExit() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& EaseTypeExit() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& BackgroundColorExit() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& SideExit() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& DirectionExit() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = int32_t> T& BlindsExit() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = bool> T& StartSceneOnEnterState() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& _transitionCoroutine() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = float> T& _step() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& _transitionEnterMaterial() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& _transitionExitMaterial() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& _currentMaterial() {
		return *(T*)((uintptr_t)this + 0x108);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x2C2CEEC))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ProCamera2DTransitionsFX*))(Il2CppBase() + 0x2C2D074))(this);
	}
	template <typename T = void> T OnRenderImage(uintptr_t sourceRenderTexture, uintptr_t destinationRenderTexture) {
		return ((T (*)(ProCamera2DTransitionsFX*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2C2D4BC))(this, sourceRenderTexture, destinationRenderTexture);
	}
	template <typename T = void> T TransitionEnter() {
		return ((T (*)(ProCamera2DTransitionsFX*))(Il2CppBase() + 0x2C2D614))(this);
	}
	template <typename T = void> T TransitionExit() {
		return ((T (*)(ProCamera2DTransitionsFX*))(Il2CppBase() + 0x2C2D830))(this);
	}
	template <typename T = void> T CreateMaterials() {
		return ((T (*)(ProCamera2DTransitionsFX*))(Il2CppBase() + 0x2C2D150))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(ProCamera2DTransitionsFX*))(Il2CppBase() + 0x2C2D8D0))(this);
	}
	template <typename T = uintptr_t> T TransitionRoutine(uintptr_t material, float duration, float delay, float startValue, float endValue, uintptr_t easeType) {
		return ((T (*)(ProCamera2DTransitionsFX*, uintptr_t, float, float, float, float, uintptr_t))(Il2CppBase() + 0x2C2D6B4))(this, material, duration, delay, startValue, endValue, easeType);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(ProCamera2DTransitionsFX*))(Il2CppBase() + 0x2C2DA2C))(this);
	}

};

}
