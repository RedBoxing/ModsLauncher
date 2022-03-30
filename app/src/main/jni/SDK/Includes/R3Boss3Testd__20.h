#pragma once
#include "Il2Cpp/Il2Cpp.h"

class R3Boss3Testd20
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<R3Boss3Test>d__20"));
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
		return ((T (*)(R3Boss3Testd20*))(Il2CppBase() + 0x455BAB8))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(R3Boss3Testd20*))(Il2CppBase() + 0x455BABC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(R3Boss3Testd20*))(Il2CppBase() + 0x455BB74))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(R3Boss3Testd20*))(Il2CppBase() + 0x455BB7C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(R3Boss3Testd20*))(Il2CppBase() + 0x455BBE4))(this);
	}

};

}
