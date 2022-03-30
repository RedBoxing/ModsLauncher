#pragma once
#include "Il2Cpp/Il2Cpp.h"

class R1Boss4Testd9
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<R1Boss4Test>d__9"));
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

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(R1Boss4Testd9*))(Il2CppBase() + 0x26F689C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(R1Boss4Testd9*))(Il2CppBase() + 0x26F68A0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(R1Boss4Testd9*))(Il2CppBase() + 0x26F6950))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(R1Boss4Testd9*))(Il2CppBase() + 0x26F6958))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(R1Boss4Testd9*))(Il2CppBase() + 0x26F69C0))(this);
	}

};

}
