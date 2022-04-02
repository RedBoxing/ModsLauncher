#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Throwingd30
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Throwing>d__30"));
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
		return ((T (*)(Throwingd30*))(Il2CppBase() + 0x1A1B848))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(Throwingd30*))(Il2CppBase() + 0x1A1B84C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(Throwingd30*))(Il2CppBase() + 0x1A1BA80))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(Throwingd30*))(Il2CppBase() + 0x1A1BA88))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(Throwingd30*))(Il2CppBase() + 0x1A1BAF0))(this);
	}

};

}
