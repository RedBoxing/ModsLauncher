#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RoomUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RoomUtil"));
	}


	template <typename T = uintptr_t> static T GetFloors(int32_t width, int32_t height, bool newParttern) {
		return ((T (*)(void *, int32_t, int32_t, bool))(Il2CppBase() + 0x18055A8))(0, width, height, newParttern);
	}
	template <typename T = int32_t> static T GetRepeatValue(int32_t x, int32_t y, int32_t width, int32_t height, uintptr_t floorsIndex) {
		return ((T (*)(void *, int32_t, int32_t, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x1805B08))(0, x, y, width, height, floorsIndex);
	}
	template <typename T = uintptr_t> static T GetFloorsWeighted(int32_t width, int32_t height, Il2CppArray<uintptr_t>* weightTable, int32_t changeNeedCount, float baseTileChangeRate) {
		return ((T (*)(void *, int32_t, int32_t, Il2CppArray<uintptr_t>*, int32_t, float))(Il2CppBase() + 0x1805DDC))(0, width, height, weightTable, changeNeedCount, baseTileChangeRate);
	}
	template <typename T = int32_t> static T GetRepeatValue_1(int32_t i, int32_t j, uintptr_t floorIndex) {
		return ((T (*)(void *, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x18062AC))(0, i, j, floorIndex);
	}

};

}
