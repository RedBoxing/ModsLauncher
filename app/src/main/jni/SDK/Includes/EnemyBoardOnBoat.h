#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyBoardOnBoat
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyBoardOnBoat"));
	}


	template <typename T = void> static T GetBoatLandArea(uintptr_t room, uintptr_t dir, uintptr_t* xMin, uintptr_t* xMax, uintptr_t* yMin, uintptr_t* yMax) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x1FE4480))(0, room, dir, xMin, xMax, yMin, yMax);
	}
	template <typename T = uintptr_t> static T CreateBoat(uintptr_t room, uintptr_t dir, uintptr_t verticalBoat, uintptr_t horizontalBoat, uintptr_t* moveDir) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x1FE4778))(0, room, dir, verticalBoat, horizontalBoat, moveDir);
	}
	template <typename T = void> static T Board(uintptr_t boatObj, uintptr_t enemy, int32_t idx) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1FE4A80))(0, boatObj, enemy, idx);
	}
	template <typename T = void> static T BoatStartLanding(uintptr_t boatObj, Il2CppVector3 finPos, Il2CppVector3 jumpDir, Il2CppList<uintptr_t>* enemies, float closeToLandDuration, float initWait, uintptr_t onLand) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, Il2CppVector3, Il2CppList<uintptr_t>*, float, float, uintptr_t))(Il2CppBase() + 0x1FE4E0C))(0, boatObj, finPos, jumpDir, enemies, closeToLandDuration, initWait, onLand);
	}

};

}
