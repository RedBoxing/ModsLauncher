#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Throwingd24
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Throwing>d__24"));
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
		return ((T (*)(Throwingd24*))(Il2CppBase() + 0x1A1F49C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(Throwingd24*))(Il2CppBase() + 0x1A1F4A0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(Throwingd24*))(Il2CppBase() + 0x1A1F5CC))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(Throwingd24*))(Il2CppBase() + 0x1A1F5D4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(Throwingd24*))(Il2CppBase() + 0x1A1F63C))(this);
	}

};

}
