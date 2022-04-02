#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Resizingd11
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Resizing>d__11"));
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
		return ((T (*)(Resizingd11*))(Il2CppBase() + 0x1E71E60))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(Resizingd11*))(Il2CppBase() + 0x1E71E64))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(Resizingd11*))(Il2CppBase() + 0x1E7254C))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(Resizingd11*))(Il2CppBase() + 0x1E72554))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(Resizingd11*))(Il2CppBase() + 0x1E725BC))(this);
	}

};

}
