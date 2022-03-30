#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Com.LuisPedroFonseca.ProCamera2D {

class ProCamera2DPixelPerfect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Com.LuisPedroFonseca.ProCamera2D", "ProCamera2DPixelPerfect"));
	}

	template <typename T = Il2CppString*> static T& ExtensionName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& PixelsPerUnit() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& ViewportAutoScale() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppVector2> T& TargetViewportSizeInPixels() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& Zoom() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& SnapMovementToGrid() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = bool> T& SnapCameraToGrid() {
		return *(T*)((uintptr_t)this + 0x6D);
	}
	template <typename T = bool> T& DrawGrid() {
		return *(T*)((uintptr_t)this + 0x6E);
	}
	template <typename T = uintptr_t> T& GridColor() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& GridDensity() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& _pixelStep() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& _viewportScale() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& _parent() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& _poOrder() {
		return *(T*)((uintptr_t)this + 0x98);
	}

	template <typename T = float> T get_PixelStep() {
		return ((T (*)(ProCamera2DPixelPerfect*))(Il2CppBase() + 0x2C243CC))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ProCamera2DPixelPerfect*))(Il2CppBase() + 0x2C2442C))(this);
	}
	template <typename T = Il2CppVector3> T OverridePosition(float deltaTime, Il2CppVector3 originalPosition) {
		return ((T (*)(ProCamera2DPixelPerfect*, float, Il2CppVector3))(Il2CppBase() + 0x2C245FC))(this, deltaTime, originalPosition);
	}
	template <typename T = int32_t> T get_POOrder() {
		return ((T (*)(ProCamera2DPixelPerfect*))(Il2CppBase() + 0x2C24B38))(this);
	}
	template <typename T = void> T set_POOrder(int32_t value) {
		return ((T (*)(ProCamera2DPixelPerfect*, int32_t))(Il2CppBase() + 0x2C24B98))(this, value);
	}
	template <typename T = void> T ResizeCameraToPixelPerfect() {
		return ((T (*)(ProCamera2DPixelPerfect*))(Il2CppBase() + 0x2C24500))(this);
	}
	template <typename T = float> T CalculateViewportScale() {
		return ((T (*)(ProCamera2DPixelPerfect*))(Il2CppBase() + 0x2C24C0C))(this);
	}
	template <typename T = void> T CalculatePixelStep(float viewportScale) {
		return ((T (*)(ProCamera2DPixelPerfect*, float))(Il2CppBase() + 0x2C24DDC))(this, viewportScale);
	}
	template <typename T = void> T AlignPositionToPixelPerfect() {
		return ((T (*)(ProCamera2DPixelPerfect*))(Il2CppBase() + 0x2C24E74))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(ProCamera2DPixelPerfect*))(Il2CppBase() + 0x2C25428))(this);
	}

};

}
