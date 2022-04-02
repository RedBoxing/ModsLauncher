#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Movingd10
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Moving>d__10"));
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
	template <typename T = float> T& angleSpeed5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& targetRadius5__3() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(Movingd10*))(Il2CppBase() + 0x45B2D38))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(Movingd10*))(Il2CppBase() + 0x45B2D3C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(Movingd10*))(Il2CppBase() + 0x45B2FB4))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(Movingd10*))(Il2CppBase() + 0x45B2FBC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(Movingd10*))(Il2CppBase() + 0x45B3024))(this);
	}

};

}
