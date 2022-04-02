#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ShottingSMGd8
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ShottingSMG>d__8"));
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
		return ((T (*)(ShottingSMGd8*))(Il2CppBase() + 0x2A2776C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(ShottingSMGd8*))(Il2CppBase() + 0x2A27770))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(ShottingSMGd8*))(Il2CppBase() + 0x2A27A74))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(ShottingSMGd8*))(Il2CppBase() + 0x2A27A7C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(ShottingSMGd8*))(Il2CppBase() + 0x2A27AE4))(this);
	}

};

}
