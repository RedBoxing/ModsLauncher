#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CounterModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CounterModel"));
	}

	template <typename T = uintptr_t> T& stateItem() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& countItems() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T SetActive(bool isActive) {
		return ((T (*)(CounterModel*, bool))(Il2CppBase() + 0x43A6200))(this, isActive);
	}
	template <typename T = void> T FlushCount(int32_t count, bool isLight) {
		return ((T (*)(CounterModel*, int32_t, bool))(Il2CppBase() + 0x43A6348))(this, count, isLight);
	}

};

}
