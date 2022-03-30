#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Dashd8
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Dash>d__8"));
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
	template <typename T = Il2CppVector2> T& direction() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& i5__2() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(Dashd8*))(Il2CppBase() + 0x217BDE0))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(Dashd8*))(Il2CppBase() + 0x217BDE4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(Dashd8*))(Il2CppBase() + 0x217BF60))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(Dashd8*))(Il2CppBase() + 0x217BF68))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(Dashd8*))(Il2CppBase() + 0x217BFD0))(this);
	}

};

}
