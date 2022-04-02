#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Com.LuisPedroFonseca.ProCamera2D {

class ProCamera2DZoomToFitTargets
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Com.LuisPedroFonseca.ProCamera2D", "ProCamera2DZoomToFitTargets"));
	}

	template <typename T = Il2CppString*> static T& ExtensionName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& ZoomOutBorder() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& ZoomInBorder() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& ZoomInSmoothness() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& ZoomOutSmoothness() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& MaxZoomInAmount() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& MaxZoomOutAmount() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = bool> T& DisableWhenOneTarget() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& _zoomVelocity() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = float> T& _initialCamSize() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& _previousCamSize() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> T& _targetCamSize() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& _targetCamSizeSmoothed() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& _minCameraSize() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& _maxCameraSize() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& _soOrder() {
		return *(T*)((uintptr_t)this + 0x90);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ProCamera2DZoomToFitTargets*))(Il2CppBase() + 0x2C325A0))(this);
	}
	template <typename T = float> T OverrideSize(float deltaTime, float originalSize) {
		return ((T (*)(ProCamera2DZoomToFitTargets*, float, float))(Il2CppBase() + 0x2C326B8))(this, deltaTime, originalSize);
	}
	template <typename T = int32_t> T get_SOOrder() {
		return ((T (*)(ProCamera2DZoomToFitTargets*))(Il2CppBase() + 0x2C32E0C))(this);
	}
	template <typename T = void> T set_SOOrder(int32_t value) {
		return ((T (*)(ProCamera2DZoomToFitTargets*, int32_t))(Il2CppBase() + 0x2C32E6C))(this, value);
	}
	template <typename T = void> T OnReset() {
		return ((T (*)(ProCamera2DZoomToFitTargets*))(Il2CppBase() + 0x2C32EE0))(this);
	}
	template <typename T = void> T UpdateTargetCamSize() {
		return ((T (*)(ProCamera2DZoomToFitTargets*))(Il2CppBase() + 0x2C328C0))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(ProCamera2DZoomToFitTargets*))(Il2CppBase() + 0x2C32FD0))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnReset() {
		return ((T (*)(ProCamera2DZoomToFitTargets*))(Il2CppBase() + 0x2C32FD8))(this);
	}

};

}
