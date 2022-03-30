#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FancyScrollView.InfiniteList {

class ScrollView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FancyScrollView.InfiniteList", "ScrollView"));
	}

	template <typename T = uintptr_t> T& scroller() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& cellPrefab() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = void*> T& onSelectionChanged() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = uintptr_t> T get_CellPrefab() {
		return ((T (*)(ScrollView*))(Il2CppBase() + 0x4474C58))(this);
	}
	template <typename T = int32_t> T get_index() {
		return ((T (*)(ScrollView*))(Il2CppBase() + 0x4474CB8))(this);
	}
	template <typename T = void> T Initialize() {
		return ((T (*)(ScrollView*))(Il2CppBase() + 0x4474D5C))(this);
	}
	template <typename T = void> T TestPrev(int32_t count) {
		return ((T (*)(ScrollView*, int32_t))(Il2CppBase() + 0x4474F08))(this, count);
	}
	template <typename T = void> T TestNext(int32_t count) {
		return ((T (*)(ScrollView*, int32_t))(Il2CppBase() + 0x4475170))(this, count);
	}
	template <typename T = void> T UpdateSelection(int32_t index) {
		return ((T (*)(ScrollView*, int32_t))(Il2CppBase() + 0x447534C))(this, index);
	}
	template <typename T = void> T UpdateData(void* items) {
		return ((T (*)(ScrollView*, void*))(Il2CppBase() + 0x4475460))(this, items);
	}
	template <typename T = void> T OnSelectionChanged(void* callback) {
		return ((T (*)(ScrollView*, void*))(Il2CppBase() + 0x447559C))(this, callback);
	}
	template <typename T = void> T SelectNextCell() {
		return ((T (*)(ScrollView*))(Il2CppBase() + 0x44751F8))(this);
	}
	template <typename T = void> T SelectPrevCell() {
		return ((T (*)(ScrollView*))(Il2CppBase() + 0x4474F90))(this);
	}
	template <typename T = void> T SelectCell(int32_t index) {
		return ((T (*)(ScrollView*, int32_t))(Il2CppBase() + 0x4475610))(this, index);
	}
	template <typename T = bool> T get_isDragging() {
		return ((T (*)(ScrollView*))(Il2CppBase() + 0x44757AC))(this);
	}
	template <typename T = void> T iFixBaseProxy_Initialize() {
		return ((T (*)(ScrollView*))(Il2CppBase() + 0x4475870))(this);
	}

};

}
