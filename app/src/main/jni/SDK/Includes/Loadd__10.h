#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Loadd10
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Load>d__10"));
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
	template <typename T = Il2CppArray<uintptr_t>*> T& 7__wrap1() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& 7__wrap2() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(Loadd10*))(Il2CppBase() + 0x43C2F70))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(Loadd10*))(Il2CppBase() + 0x43C2F74))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(Loadd10*))(Il2CppBase() + 0x43C3140))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(Loadd10*))(Il2CppBase() + 0x43C3148))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(Loadd10*))(Il2CppBase() + 0x43C31B0))(this);
	}

};

}
