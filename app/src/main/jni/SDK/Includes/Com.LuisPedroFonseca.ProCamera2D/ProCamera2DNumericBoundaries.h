#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Com.LuisPedroFonseca.ProCamera2D {

class ProCamera2DNumericBoundaries
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Com.LuisPedroFonseca.ProCamera2D", "ProCamera2DNumericBoundaries"));
	}

	template <typename T = Il2CppString*> static T& ExtensionName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& OnBoundariesTransitionStarted() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& OnBoundariesTransitionFinished() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& UseNumericBoundaries() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& UseTopBoundary() {
		return *(T*)((uintptr_t)this + 0x69);
	}
	template <typename T = float> T& TopBoundary() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& TargetTopBoundary() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& UseBottomBoundary() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = float> T& BottomBoundary() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& TargetBottomBoundary() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = bool> T& UseLeftBoundary() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& LeftBoundary() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& TargetLeftBoundary() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& UseRightBoundary() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = float> T& RightBoundary() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& TargetRightBoundary() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = bool> T& IsCameraPositionHorizontallyBounded() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = bool> T& IsCameraPositionVerticallyBounded() {
		return *(T*)((uintptr_t)this + 0x99);
	}
	template <typename T = uintptr_t> T& BoundariesAnimRoutine() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& TopBoundaryAnimRoutine() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& BottomBoundaryAnimRoutine() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& LeftBoundaryAnimRoutine() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& RightBoundaryAnimRoutine() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& CurrentBoundariesTrigger() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& MoveCameraToTargetRoutine() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = bool> T& UseElasticBoundaries() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = float> T& HorizontalElasticityDuration() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = float> T& HorizontalElasticitySize() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = float> T& VerticalElasticityDuration() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = float> T& VerticalElasticitySize() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& ElasticityEaseType() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = float> T& _verticallyBoundedDuration() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = float> T& _horizontallyBoundedDuration() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = int32_t> T& _pdcOrder() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = int32_t> T& _soOrder() {
		return *(T*)((uintptr_t)this + 0xFC);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ProCamera2DNumericBoundaries*))(Il2CppBase() + 0x2C1FFA8))(this);
	}
	template <typename T = Il2CppVector3> T AdjustDelta(float deltaTime, Il2CppVector3 originalDelta) {
		return ((T (*)(ProCamera2DNumericBoundaries*, float, Il2CppVector3))(Il2CppBase() + 0x2C2004C))(this, deltaTime, originalDelta);
	}
	template <typename T = int32_t> T get_PDCOrder() {
		return ((T (*)(ProCamera2DNumericBoundaries*))(Il2CppBase() + 0x2C20A38))(this);
	}
	template <typename T = void> T set_PDCOrder(int32_t value) {
		return ((T (*)(ProCamera2DNumericBoundaries*, int32_t))(Il2CppBase() + 0x2C20A98))(this, value);
	}
	template <typename T = float> T OverrideSize(float deltaTime, float originalSize) {
		return ((T (*)(ProCamera2DNumericBoundaries*, float, float))(Il2CppBase() + 0x2C20B0C))(this, deltaTime, originalSize);
	}
	template <typename T = int32_t> T get_SOOrder() {
		return ((T (*)(ProCamera2DNumericBoundaries*))(Il2CppBase() + 0x2C20C68))(this);
	}
	template <typename T = void> T set_SOOrder(int32_t value) {
		return ((T (*)(ProCamera2DNumericBoundaries*, int32_t))(Il2CppBase() + 0x2C20CC8))(this, value);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(ProCamera2DNumericBoundaries*))(Il2CppBase() + 0x2C20DDC))(this);
	}

};

}
