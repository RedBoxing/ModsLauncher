#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ChangingDefenced28
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ChangingDefence>d__28"));
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
	template <typename T = int32_t> T& defence() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(ChangingDefenced28*))(Il2CppBase() + 0x440A228))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(ChangingDefenced28*))(Il2CppBase() + 0x440A22C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(ChangingDefenced28*))(Il2CppBase() + 0x440A348))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(ChangingDefenced28*))(Il2CppBase() + 0x440A350))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(ChangingDefenced28*))(Il2CppBase() + 0x440A3B8))(this);
	}

};

}
