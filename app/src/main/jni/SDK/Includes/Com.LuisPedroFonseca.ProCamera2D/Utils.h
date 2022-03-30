#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Com.LuisPedroFonseca.ProCamera2D {

class Utils
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Com.LuisPedroFonseca.ProCamera2D", "Utils"));
	}


	template <typename T = float> static T EaseFromTo(float start, float end, float value, uintptr_t type) {
		return ((T (*)(void *, float, float, float, uintptr_t))(Il2CppBase() + 0x2C1A0D0))(0, start, end, value, type);
	}
	template <typename T = float> static T SmoothApproach(float pastPosition, float pastTargetPosition, float targetPosition, float speed, float deltaTime) {
		return ((T (*)(void *, float, float, float, float, float))(Il2CppBase() + 0x2C32FE0))(0, pastPosition, pastTargetPosition, targetPosition, speed, deltaTime);
	}
	template <typename T = float> static T Remap(float value, float from1, float to1, float from2, float to2) {
		return ((T (*)(void *, float, float, float, float, float))(Il2CppBase() + 0x2C2638C))(0, value, from1, to1, from2, to2);
	}
	template <typename T = void> static T DrawArrowForGizmo(Il2CppVector3 pos, Il2CppVector3 direction, float arrowHeadLength, float arrowHeadAngle) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float, float))(Il2CppBase() + 0x2C330EC))(0, pos, direction, arrowHeadLength, arrowHeadAngle);
	}
	template <typename T = void> static T DrawArrowForGizmo_1(Il2CppVector3 pos, Il2CppVector3 direction, uintptr_t color, float arrowHeadLength, float arrowHeadAngle) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, uintptr_t, float, float))(Il2CppBase() + 0x2C33A78))(0, pos, direction, color, arrowHeadLength, arrowHeadAngle);
	}
	template <typename T = void> static T DrawArrowForDebug(Il2CppVector3 pos, Il2CppVector3 direction, float arrowHeadLength, float arrowHeadAngle) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float, float))(Il2CppBase() + 0x2C33BDC))(0, pos, direction, arrowHeadLength, arrowHeadAngle);
	}
	template <typename T = void> static T DrawArrowForDebug_1(Il2CppVector3 pos, Il2CppVector3 direction, uintptr_t color, float arrowHeadLength, float arrowHeadAngle) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, uintptr_t, float, float))(Il2CppBase() + 0x2C33D48))(0, pos, direction, color, arrowHeadLength, arrowHeadAngle);
	}
	template <typename T = void> static T DrawArrowEnd(bool gizmos, Il2CppVector3 pos, Il2CppVector3 direction, uintptr_t color, float arrowHeadLength, float arrowHeadAngle) {
		return ((T (*)(void *, bool, Il2CppVector3, Il2CppVector3, uintptr_t, float, float))(Il2CppBase() + 0x2C33214))(0, gizmos, pos, direction, color, arrowHeadLength, arrowHeadAngle);
	}
	template <typename T = bool> static T AreNearlyEqual(float a, float b, float tolerance) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x2C33EE0))(0, a, b, tolerance);
	}
	template <typename T = Il2CppVector2> static T GetScreenSizeInWorldCoords(uintptr_t gameCamera, float distance) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x2C28968))(0, gameCamera, distance);
	}
	template <typename T = Il2CppVector3> static T GetVectorsSum(void* input) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x2C29BA8))(0, input);
	}
	template <typename T = float> static T AlignToGrid(float input, float gridSize) {
		return ((T (*)(void *, float, float))(Il2CppBase() + 0x2C249FC))(0, input, gridSize);
	}

};

}
