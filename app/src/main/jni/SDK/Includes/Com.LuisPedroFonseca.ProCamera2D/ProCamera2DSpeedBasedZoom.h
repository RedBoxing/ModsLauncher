#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Com.LuisPedroFonseca.ProCamera2D {

class ProCamera2DSpeedBasedZoom
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Com.LuisPedroFonseca.ProCamera2D", "ProCamera2DSpeedBasedZoom"));
	}

	template <typename T = Il2CppString*> static T& ExtensionName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& CamVelocityForZoomOut() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& CamVelocityForZoomIn() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& ZoomInSpeed() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& ZoomOutSpeed() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& ZoomInSmoothness() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& ZoomOutSmoothness() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& MaxZoomInAmount() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& MaxZoomOutAmount() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = float> T& _zoomVelocity() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& _initialCamSize() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> T& _previousCamSize() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppVector3> T& _previousCameraPosition() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& _prevZoomAmount() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& CurrentVelocity() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& _sdcOrder() {
		return *(T*)((uintptr_t)this + 0x98);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ProCamera2DSpeedBasedZoom*))(Il2CppBase() + 0x2C2C510))(this);
	}
	template <typename T = float> T AdjustSize(float deltaTime, float originalDelta) {
		return ((T (*)(ProCamera2DSpeedBasedZoom*, float, float))(Il2CppBase() + 0x2C2C748))(this, deltaTime, originalDelta);
	}
	template <typename T = int32_t> T get_SDCOrder() {
		return ((T (*)(ProCamera2DSpeedBasedZoom*))(Il2CppBase() + 0x2C2CBE4))(this);
	}
	template <typename T = void> T set_SDCOrder(int32_t value) {
		return ((T (*)(ProCamera2DSpeedBasedZoom*, int32_t))(Il2CppBase() + 0x2C2CC44))(this, value);
	}
	template <typename T = void> T OnReset() {
		return ((T (*)(ProCamera2DSpeedBasedZoom*))(Il2CppBase() + 0x2C2CCB8))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(ProCamera2DSpeedBasedZoom*))(Il2CppBase() + 0x2C2CEDC))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnReset() {
		return ((T (*)(ProCamera2DSpeedBasedZoom*))(Il2CppBase() + 0x2C2CEE4))(this);
	}

};

}
