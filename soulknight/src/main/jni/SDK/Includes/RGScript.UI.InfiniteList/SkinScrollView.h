#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.UI.InfiniteList {

class SkinScrollView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.UI.InfiniteList", "SkinScrollView"));
	}

	template <typename T = uintptr_t> T& scroller() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& cellPrefab() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = void*> T& _onSelectionChanged() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = void*> T& _onValueChanged() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = uintptr_t> T get_CellPrefab() {
		return ((T (*)(SkinScrollView*))(Il2CppBase() + 0x44FBA2C))(this);
	}
	template <typename T = int32_t> T get_Index() {
		return ((T (*)(SkinScrollView*))(Il2CppBase() + 0x44F5CDC))(this);
	}
	template <typename T = void> T Initialize() {
		return ((T (*)(SkinScrollView*))(Il2CppBase() + 0x44FBA8C))(this);
	}
	template <typename T = void> T UpdateSelection(int32_t index) {
		return ((T (*)(SkinScrollView*, int32_t))(Il2CppBase() + 0x44FBC38))(this, index);
	}
	template <typename T = void> T UpdateData(void* items) {
		return ((T (*)(SkinScrollView*, void*))(Il2CppBase() + 0x44F439C))(this, items);
	}
	template <typename T = void> T UpdatePosition(float position) {
		return ((T (*)(SkinScrollView*, float))(Il2CppBase() + 0x44FBD4C))(this, position);
	}
	template <typename T = void> T OnSelectionChanged(void* callback) {
		return ((T (*)(SkinScrollView*, void*))(Il2CppBase() + 0x44EF1E0))(this, callback);
	}
	template <typename T = void> T OnValueChanged(void* callback) {
		return ((T (*)(SkinScrollView*, void*))(Il2CppBase() + 0x44EF254))(this, callback);
	}
	template <typename T = void> T SelectNextCell() {
		return ((T (*)(SkinScrollView*))(Il2CppBase() + 0x44FBE20))(this);
	}
	template <typename T = void> T SelectPrevCell() {
		return ((T (*)(SkinScrollView*))(Il2CppBase() + 0x44FBF74))(this);
	}
	template <typename T = void> T SelectCell(int32_t i) {
		return ((T (*)(SkinScrollView*, int32_t))(Il2CppBase() + 0x44F44D8))(this, i);
	}
	template <typename T = void> T ResetSelectedIndex() {
		return ((T (*)(SkinScrollView*))(Il2CppBase() + 0x44F42F4))(this);
	}
	template <typename T = bool> T get_IsDragging() {
		return ((T (*)(SkinScrollView*))(Il2CppBase() + 0x44ED280))(this);
	}
	template <typename T = void> T iFixBaseProxy_Initialize() {
		return ((T (*)(SkinScrollView*))(Il2CppBase() + 0x44FC1A4))(this);
	}
	template <typename T = void> T iFixBaseProxy_UpdatePosition(float P0) {
		return ((T (*)(SkinScrollView*, float))(Il2CppBase() + 0x44FC1A8))(this, P0);
	}

};

}
