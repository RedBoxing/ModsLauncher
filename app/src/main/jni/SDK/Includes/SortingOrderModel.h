#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SortingOrderModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SortingOrderModel"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& sortingGroup() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& spriteRenderer() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& sortingPivot() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& hasGroupInit() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = float> T get_Y() {
		return ((T (*)(SortingOrderModel*))(Il2CppBase() + 0x18772FC))(this);
	}
	template <typename T = void> T set_sortingOrder(int32_t value) {
		return ((T (*)(SortingOrderModel*, int32_t))(Il2CppBase() + 0x1876A04))(this, value);
	}
	template <typename T = int32_t> T CompareTo(uintptr_t other) {
		return ((T (*)(SortingOrderModel*, uintptr_t))(Il2CppBase() + 0x1877520))(this, other);
	}

};

}
