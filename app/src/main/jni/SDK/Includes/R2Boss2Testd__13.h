#pragma once
#include "Il2Cpp/Il2Cpp.h"

class R2Boss2Testd13
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<R2Boss2Test>d__13"));
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
		return ((T (*)(R2Boss2Testd13*))(Il2CppBase() + 0x26F6D4C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(R2Boss2Testd13*))(Il2CppBase() + 0x26F6D50))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(R2Boss2Testd13*))(Il2CppBase() + 0x26F6E00))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(R2Boss2Testd13*))(Il2CppBase() + 0x26F6E08))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(R2Boss2Testd13*))(Il2CppBase() + 0x26F6E70))(this);
	}

};

}
