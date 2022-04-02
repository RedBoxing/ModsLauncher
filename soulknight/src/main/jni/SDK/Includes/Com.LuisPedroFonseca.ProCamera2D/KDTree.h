#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Com.LuisPedroFonseca.ProCamera2D {

class KDTree
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Com.LuisPedroFonseca.ProCamera2D", "KDTree"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& lr() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector3> T& pivot() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& pivotIndex() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& axis() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& numDims() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T MakeFromPoints(Il2CppArray<uintptr_t>* points) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2081194))(0, points);
	}
	template <typename T = uintptr_t> static T MakeFromPointsInner(int32_t depth, int32_t stIndex, int32_t enIndex, Il2CppArray<uintptr_t>* points, Il2CppArray<uintptr_t>* inds) {
		return ((T (*)(void *, int32_t, int32_t, int32_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2081320))(0, depth, stIndex, enIndex, points, inds);
	}
	template <typename T = void> static T SwapElements(Il2CppArray<uintptr_t>* arr, int32_t a, int32_t b) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x208184C))(0, arr, a, b);
	}
	template <typename T = int32_t> static T FindSplitPoint(Il2CppArray<uintptr_t>* points, Il2CppArray<uintptr_t>* inds, int32_t stIndex, int32_t enIndex, int32_t axis) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x2081978))(0, points, inds, stIndex, enIndex, axis);
	}
	template <typename T = int32_t> static T FindPivotIndex(Il2CppArray<uintptr_t>* points, Il2CppArray<uintptr_t>* inds, int32_t stIndex, int32_t enIndex, int32_t axis) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x208162C))(0, points, inds, stIndex, enIndex, axis);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T Iota(int32_t num) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x208122C))(0, num);
	}
	template <typename T = int32_t> T FindNearest(Il2CppVector3 pt) {
		return ((T (*)(KDTree*, Il2CppVector3))(Il2CppBase() + 0x2081B8C))(this, pt);
	}
	template <typename T = void> T Search(Il2CppVector3 pt, uintptr_t bestSqSoFar, uintptr_t bestIndex) {
		return ((T (*)(KDTree*, Il2CppVector3, uintptr_t, uintptr_t))(Il2CppBase() + 0x2081C40))(this, pt, bestSqSoFar, bestIndex);
	}
	template <typename T = float> T DistFromSplitPlane(Il2CppVector3 pt, Il2CppVector3 planePt, int32_t axis) {
		return ((T (*)(KDTree*, Il2CppVector3, Il2CppVector3, int32_t))(Il2CppBase() + 0x2081F20))(this, pt, planePt, axis);
	}
	template <typename T = Il2CppString*> T Dump(int32_t level) {
		return ((T (*)(KDTree*, int32_t))(Il2CppBase() + 0x2082028))(this, level);
	}

};

}
