#pragma once
#include "Il2Cpp/Il2Cpp.h"

class FlyLoopd4
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<FlyLoop>d__4"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& fly_time5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(FlyLoopd4*))(Il2CppBase() + 0x4376AA0))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(FlyLoopd4*))(Il2CppBase() + 0x4376AA4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(FlyLoopd4*))(Il2CppBase() + 0x4376DD4))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(FlyLoopd4*))(Il2CppBase() + 0x4376DDC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(FlyLoopd4*))(Il2CppBase() + 0x4376E44))(this);
	}

};

}
