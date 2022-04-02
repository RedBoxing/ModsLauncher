#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGMaze
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGMaze"));
	}

	template <typename T = uintptr_t> T& maze_map() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& CloseList() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& OpenList() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& times() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = uintptr_t> T FindPath(uintptr_t start, uintptr_t end) {
		return ((T (*)(RGMaze*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1B6A4EC))(this, start, end);
	}
	template <typename T = void> T FoundPoint(uintptr_t tempStart, uintptr_t point) {
		return ((T (*)(RGMaze*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1B6B348))(this, tempStart, point);
	}
	template <typename T = void> T NotFoundPoint(uintptr_t tempStart, uintptr_t end, uintptr_t point) {
		return ((T (*)(RGMaze*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1B6B468))(this, tempStart, end, point);
	}
	template <typename T = int32_t> T CalcG(uintptr_t point) {
		return ((T (*)(RGMaze*, uintptr_t))(Il2CppBase() + 0x1B6B5DC))(this, point);
	}
	template <typename T = int32_t> T CalcH(uintptr_t end, uintptr_t point) {
		return ((T (*)(RGMaze*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1B6B6A4))(this, end, point);
	}
	template <typename T = uintptr_t> T FindMinFPoint() {
		return ((T (*)(RGMaze*))(Il2CppBase() + 0x1B6ABAC))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T SurrroundPoints(uintptr_t point) {
		return ((T (*)(RGMaze*, uintptr_t))(Il2CppBase() + 0x1B6AD54))(this, point);
	}

};

}
