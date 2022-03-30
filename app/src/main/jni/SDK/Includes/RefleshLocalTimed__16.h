#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RefleshLocalTimed16
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<RefleshLocalTime>d__16"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& waitForSeconds5__2() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(RefleshLocalTimed16*))(Il2CppBase() + 0x43CD7A0))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(RefleshLocalTimed16*))(Il2CppBase() + 0x43CD7A4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(RefleshLocalTimed16*))(Il2CppBase() + 0x43CD914))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(RefleshLocalTimed16*))(Il2CppBase() + 0x43CD91C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(RefleshLocalTimed16*))(Il2CppBase() + 0x43CD984))(this);
	}

};

}
