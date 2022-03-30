#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SwampBoxMushroom
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SwampBoxMushroom"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& targetMushrooms() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& generateMushroomRate() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& mapManagerLevel() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& mushRoomCount() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(SwampBoxMushroom*))(Il2CppBase() + 0x42AB22C))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(SwampBoxMushroom*))(Il2CppBase() + 0x42AB310))(this);
	}
	template <typename T = void> T OnInstantiateObstacle(uintptr_t obstacleInstance) {
		return ((T (*)(SwampBoxMushroom*, uintptr_t))(Il2CppBase() + 0x42AB3F4))(this, obstacleInstance);
	}
	template <typename T = void> T InstantiateMushroom(uintptr_t b) {
		return ((T (*)(SwampBoxMushroom*, uintptr_t))(Il2CppBase() + 0x42AB5A8))(this, b);
	}
	template <typename T = void> T OnSwampSpawnMushroom(uintptr_t eventBase) {
		return ((T (*)(SwampBoxMushroom*, uintptr_t))(Il2CppBase() + 0x42ABBFC))(this, eventBase);
	}
	template <typename T = void> T InstantiateMushroom_1(Il2CppVector3 mushroomPosition, int32_t mushroomIndex) {
		return ((T (*)(SwampBoxMushroom*, Il2CppVector3, int32_t))(Il2CppBase() + 0x42AB808))(this, mushroomPosition, mushroomIndex);
	}

};

}
