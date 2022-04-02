#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace DefaultNamespace {

class ShakerTest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "DefaultNamespace", "ShakerTest"));
	}

	template <typename T = Il2CppVector2> T& xRange() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector2> T& yRange() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& shakeCount() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _shaker() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Shake() {
		return ((T (*)(ShakerTest*))(Il2CppBase() + 0x42E2E30))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ShakerTest*))(Il2CppBase() + 0x42E2F44))(this);
	}

};

}
