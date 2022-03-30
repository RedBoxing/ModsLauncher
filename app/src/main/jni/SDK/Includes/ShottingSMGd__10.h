#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ShottingSMGd10
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ShottingSMG>d__10"));
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
	template <typename T = uintptr_t> T& attackDuration5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& wait5__3() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(ShottingSMGd10*))(Il2CppBase() + 0x2A29D80))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(ShottingSMGd10*))(Il2CppBase() + 0x2A29D84))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(ShottingSMGd10*))(Il2CppBase() + 0x2A2A0D0))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(ShottingSMGd10*))(Il2CppBase() + 0x2A2A0D8))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(ShottingSMGd10*))(Il2CppBase() + 0x2A2A140))(this);
	}

};

}
