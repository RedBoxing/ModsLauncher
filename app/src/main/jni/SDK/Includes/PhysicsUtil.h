#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PhysicsUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PhysicsUtil"));
	}

	template <typename T = int32_t> static T& NotWalkableMask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AllObstacleMask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> static T& StaticWallMask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = int32_t> static T& WallEdgeMask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = int32_t> static T& ViewBlockerMask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = int32_t> static T& DoorEdgeMask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = int32_t> static T& MonsterMask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = int32_t> static T& PlayerMask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = int32_t> static T& FallMask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& raycastBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = uintptr_t> static T HitObstacle(Il2CppVector3 from, Il2CppVector3 to) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x439188C))(0, from, to);
	}
	template <typename T = bool> static T CollideWithEnemy(uintptr_t collider, int32_t camp) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4391A24))(0, collider, camp);
	}
	template <typename T = Il2CppVector3> static T GetEmptyPosition(Il2CppVector3 sourcePosition, Il2CppVector3 targetPosition, float targetRadius, int32_t colliderMask) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float, int32_t))(Il2CppBase() + 0x4391B00))(0, sourcePosition, targetPosition, targetRadius, colliderMask);
	}
	template <typename T = Il2CppVector3> static T PositionPrediction(uintptr_t target, float predictTime, float targetRadius, int32_t obstacleLayers) {
		return ((T (*)(void *, uintptr_t, float, float, int32_t))(Il2CppBase() + 0x4391F18))(0, target, predictTime, targetRadius, obstacleLayers);
	}
	template <typename T = bool> static T PositionPrediction_1(uintptr_t target, float moveSpeed, Il2CppVector2 sourcePosition, uintptr_t* position) {
		return ((T (*)(void *, uintptr_t, float, Il2CppVector2, uintptr_t*))(Il2CppBase() + 0x43921C0))(0, target, moveSpeed, sourcePosition, position);
	}

};

}
