#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ScrollRectDontFadeAtTopOrBottomd56
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ScrollRectDontFadeAtTopOrBottom>d__56"));
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
		return ((T (*)(ScrollRectDontFadeAtTopOrBottomd56*))(Il2CppBase() + 0x4578F50))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(ScrollRectDontFadeAtTopOrBottomd56*))(Il2CppBase() + 0x4578F54))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(ScrollRectDontFadeAtTopOrBottomd56*))(Il2CppBase() + 0x45791C4))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(ScrollRectDontFadeAtTopOrBottomd56*))(Il2CppBase() + 0x45791CC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(ScrollRectDontFadeAtTopOrBottomd56*))(Il2CppBase() + 0x4579234))(this);
	}

};

}
