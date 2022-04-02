#pragma once
#include "Il2Cpp/Il2Cpp.h"

class StartShootLaserd14
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<StartShootLaser>d__14"));
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
	template <typename T = uintptr_t> T& wait5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(StartShootLaserd14*))(Il2CppBase() + 0x1DD1B90))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(StartShootLaserd14*))(Il2CppBase() + 0x1DD1B94))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(StartShootLaserd14*))(Il2CppBase() + 0x1DD1D0C))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(StartShootLaserd14*))(Il2CppBase() + 0x1DD1D14))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(StartShootLaserd14*))(Il2CppBase() + 0x1DD1D7C))(this);
	}

};

}
