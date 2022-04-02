#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Com.LuisPedroFonseca.ProCamera2D {

class ProCamera2DPanAndZoom
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Com.LuisPedroFonseca.ProCamera2D", "ProCamera2DPanAndZoom"));
	}

	template <typename T = Il2CppString*> static T& ExtensionName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& AllowZoom() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& MouseZoomSpeed() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& PinchZoomSpeed() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& ZoomSmoothness() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& MaxZoomInAmount() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& MaxZoomOutAmount() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = bool> T& ZoomToInputCenter() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& _zoomAmount() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = float> T& _initialCamSize() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& _zoomStarted() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> T& _origFollowSmoothnessX() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& _origFollowSmoothnessY() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& _prevZoomAmount() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& _zoomVelocity() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppVector3> T& _zoomPoint() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& _touchZoomTime() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = bool> T& AllowPan() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> T& UsePanByDrag() {
		return *(T*)((uintptr_t)this + 0xA1);
	}
	template <typename T = float> T& StopSpeedOnDragStart() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Il2CppRect> T& DraggableAreaRect() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppVector2> T& DragPanSpeed() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = bool> T& UsePanByMoveToEdges() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppVector2> T& EdgesPanSpeed() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = float> T& HorizontalPanEdges() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = float> T& VerticalPanEdges() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppVector2> T& _panDelta() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& _panTarget() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppVector2> T& _prevMousePosition() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = bool> T& _onMaxZoom() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = bool> T& _onMinZoom() {
		return *(T*)((uintptr_t)this + 0xF1);
	}
	template <typename T = int32_t> T& _prmOrder() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = int32_t> T& _sdcOrder() {
		return *(T*)((uintptr_t)this + 0xF8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ProCamera2DPanAndZoom*))(Il2CppBase() + 0x2C20DE4))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ProCamera2DPanAndZoom*))(Il2CppBase() + 0x2C20F94))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(ProCamera2DPanAndZoom*))(Il2CppBase() + 0x2C21018))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(ProCamera2DPanAndZoom*))(Il2CppBase() + 0x2C2136C))(this);
	}
	template <typename T = void> T PreMove(float deltaTime) {
		return ((T (*)(ProCamera2DPanAndZoom*, float))(Il2CppBase() + 0x2C213F8))(this, deltaTime);
	}
	template <typename T = int32_t> T get_PrMOrder() {
		return ((T (*)(ProCamera2DPanAndZoom*))(Il2CppBase() + 0x2C21EF4))(this);
	}
	template <typename T = void> T set_PrMOrder(int32_t value) {
		return ((T (*)(ProCamera2DPanAndZoom*, int32_t))(Il2CppBase() + 0x2C21F54))(this, value);
	}
	template <typename T = float> T AdjustSize(float deltaTime, float originalDelta) {
		return ((T (*)(ProCamera2DPanAndZoom*, float, float))(Il2CppBase() + 0x2C21FC8))(this, deltaTime, originalDelta);
	}
	template <typename T = int32_t> T get_SDCOrder() {
		return ((T (*)(ProCamera2DPanAndZoom*))(Il2CppBase() + 0x2C22784))(this);
	}
	template <typename T = void> T set_SDCOrder(int32_t value) {
		return ((T (*)(ProCamera2DPanAndZoom*, int32_t))(Il2CppBase() + 0x2C227E4))(this, value);
	}
	template <typename T = void> T Pan(float deltaTime) {
		return ((T (*)(ProCamera2DPanAndZoom*, float))(Il2CppBase() + 0x2C21498))(this, deltaTime);
	}
	template <typename T = float> T Zoom(float deltaTime) {
		return ((T (*)(ProCamera2DPanAndZoom*, float))(Il2CppBase() + 0x2C2206C))(this, deltaTime);
	}
	template <typename T = void> T UpdateCurrentFollowSmoothness() {
		return ((T (*)(ProCamera2DPanAndZoom*))(Il2CppBase() + 0x2C20EF8))(this);
	}
	template <typename T = void> T CenterPanTargetOnCamera(float interpolant) {
		return ((T (*)(ProCamera2DPanAndZoom*, float))(Il2CppBase() + 0x2C210C4))(this, interpolant);
	}
	template <typename T = void> T CancelZoom() {
		return ((T (*)(ProCamera2DPanAndZoom*))(Il2CppBase() + 0x2C22A3C))(this);
	}
	template <typename T = void> T RestoreFollowSmoothness() {
		return ((T (*)(ProCamera2DPanAndZoom*))(Il2CppBase() + 0x2C22AA0))(this);
	}
	template <typename T = void> T RemoveFollowSmoothness() {
		return ((T (*)(ProCamera2DPanAndZoom*))(Il2CppBase() + 0x2C22B38))(this);
	}
	template <typename T = bool> T InsideDraggableArea(Il2CppVector2 normalizedInput) {
		return ((T (*)(ProCamera2DPanAndZoom*, Il2CppVector2))(Il2CppBase() + 0x2C22858))(this, normalizedInput);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(ProCamera2DPanAndZoom*))(Il2CppBase() + 0x2C22D08))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnEnable() {
		return ((T (*)(ProCamera2DPanAndZoom*))(Il2CppBase() + 0x2C22D10))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnDisable() {
		return ((T (*)(ProCamera2DPanAndZoom*))(Il2CppBase() + 0x2C22D18))(this);
	}

};

}
