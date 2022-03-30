#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Attackd26
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Attack>d__26"));
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
		return ((T (*)(Attackd26*))(Il2CppBase() + 0x1DF1B80))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(Attackd26*))(Il2CppBase() + 0x1DF1B84))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(Attackd26*))(Il2CppBase() + 0x1DF1DD4))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(Attackd26*))(Il2CppBase() + 0x1DF1DDC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(Attackd26*))(Il2CppBase() + 0x1DF1E44))(this);
	}

};

}
