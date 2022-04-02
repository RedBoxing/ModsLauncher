#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ScrollRectDontFadeAtTopOrBottomd25
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ScrollRectDontFadeAtTopOrBottom>d__25"));
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
		return ((T (*)(ScrollRectDontFadeAtTopOrBottomd25*))(Il2CppBase() + 0x43477C0))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(ScrollRectDontFadeAtTopOrBottomd25*))(Il2CppBase() + 0x43477C4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(ScrollRectDontFadeAtTopOrBottomd25*))(Il2CppBase() + 0x4347A34))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(ScrollRectDontFadeAtTopOrBottomd25*))(Il2CppBase() + 0x4347A3C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(ScrollRectDontFadeAtTopOrBottomd25*))(Il2CppBase() + 0x4347AA4))(this);
	}

};

}
