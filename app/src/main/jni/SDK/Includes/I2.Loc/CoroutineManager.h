#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace I2.Loc {

class CoroutineManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "I2.Loc", "CoroutineManager"));
	}

	template <typename T = uintptr_t> static T& mInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T get_pInstance() {
		return ((T (*)(void *))(Il2CppBase() + 0x4210720))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(CoroutineManager*))(Il2CppBase() + 0x42108B0))(this);
	}
	template <typename T = uintptr_t> static T Start(uintptr_t coroutine) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4210984))(0, coroutine);
	}

};

}
