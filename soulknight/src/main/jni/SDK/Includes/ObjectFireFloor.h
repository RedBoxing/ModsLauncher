#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectFireFloor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectFireFloor"));
	}

	template <typename T = int32_t> T& damage() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& cd() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ObjectFireFloor*))(Il2CppBase() + 0x1D57BC8))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(ObjectFireFloor*, uintptr_t))(Il2CppBase() + 0x1D57C74))(this, other);
	}

};

}
