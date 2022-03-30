#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Com.LuisPedroFonseca.ProCamera2D {

class MoveInColliderBoundaries
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Com.LuisPedroFonseca.ProCamera2D", "MoveInColliderBoundaries"));
	}

	template <typename T = void*> T& Vector3H() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& Vector3V() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& VectorHV() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> static T& Offset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& RaySizeCompensation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& CameraTransform() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector2> T& CameraSize() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& CameraCollisionMask() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& TotalHorizontalRays() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& TotalVerticalRays() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _raycastOrigins() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& _cameraCollisionState() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& _raycastHit() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> T& _verticalDistanceBetweenRays() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& _horizontalDistanceBetweenRays() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& _proCamera2D() {
		return *(T*)((uintptr_t)this + 0xB0);
	}

	template <typename T = uintptr_t> T get_RaycastOrigins() {
		return ((T (*)(MoveInColliderBoundaries*))(Il2CppBase() + 0x2082220))(this);
	}
	template <typename T = uintptr_t> T get_CameraCollisionState() {
		return ((T (*)(MoveInColliderBoundaries*))(Il2CppBase() + 0x20822A8))(this);
	}
	template <typename T = Il2CppVector3> T Move(Il2CppVector3 deltaMovement) {
		return ((T (*)(MoveInColliderBoundaries*, Il2CppVector3))(Il2CppBase() + 0x208287C))(this, deltaMovement);
	}
	template <typename T = void> T UpdateRaycastOrigins() {
		return ((T (*)(MoveInColliderBoundaries*))(Il2CppBase() + 0x2082B1C))(this);
	}
	template <typename T = void> T GetOffsetAndForceMovement(Il2CppVector3 rayTargetPos, uintptr_t deltaMovement, uintptr_t horizontalCheck, uintptr_t verticalCheck, float hSign, float vSign) {
		return ((T (*)(MoveInColliderBoundaries*, Il2CppVector3, uintptr_t, uintptr_t, uintptr_t, float, float))(Il2CppBase() + 0x2082F90))(this, rayTargetPos, deltaMovement, horizontalCheck, verticalCheck, hSign, vSign);
	}
	template <typename T = float> T MoveInAxis(float deltaMovement, bool isHorizontal) {
		return ((T (*)(MoveInColliderBoundaries*, float, bool))(Il2CppBase() + 0x2083630))(this, deltaMovement, isHorizontal);
	}
	template <typename T = void> T DrawRay(Il2CppVector3 start, Il2CppVector3 dir, uintptr_t color, float duration) {
		return ((T (*)(MoveInColliderBoundaries*, Il2CppVector3, Il2CppVector3, uintptr_t, float))(Il2CppBase() + 0x2083E44))(this, start, dir, color, duration);
	}

};

}
