#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DelayShowObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DelayShowObject"));
	}

	template <typename T = uintptr_t> T& obj() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& delay() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& autoShow() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& scaleFromZeroToOne() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = float> T& scaleDuration() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& _invoking() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T Hide() {
		return ((T (*)(DelayShowObject*))(Il2CppBase() + 0x42E9CFC))(this);
	}
	template <typename T = void> T Hide_1(int32_t v) {
		return ((T (*)(DelayShowObject*, int32_t))(Il2CppBase() + 0x42E9DF4))(this, v);
	}
	template <typename T = void> T Show() {
		return ((T (*)(DelayShowObject*))(Il2CppBase() + 0x42E9E68))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(DelayShowObject*))(Il2CppBase() + 0x42EA024))(this);
	}

};

}
