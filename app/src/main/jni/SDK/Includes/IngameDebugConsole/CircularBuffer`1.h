#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace IngameDebugConsole {

class CircularBuffer1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "IngameDebugConsole", "CircularBuffer`1"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& arr() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& Count() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = uintptr_t> T get_Item(int32_t index) {
		return ((T (*)(CircularBuffer1*, int32_t))(Il2CppBase() + 0x0))(this, index);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(CircularBuffer1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_Count(int32_t value) {
		return ((T (*)(CircularBuffer1*, int32_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T Add(uintptr_t value) {
		return ((T (*)(CircularBuffer1*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}

};

}
