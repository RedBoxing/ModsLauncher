#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PostOtherworldH5d4
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Post_OtherworldH5>d__4"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& request5__2() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(PostOtherworldH5d4*))(Il2CppBase() + 0x187F76C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(PostOtherworldH5d4*))(Il2CppBase() + 0x187F848))(this);
	}
	template <typename T = void> T m__Finally1() {
		return ((T (*)(PostOtherworldH5d4*))(Il2CppBase() + 0x187F788))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(PostOtherworldH5d4*))(Il2CppBase() + 0x187FA3C))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(PostOtherworldH5d4*))(Il2CppBase() + 0x187FA44))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(PostOtherworldH5d4*))(Il2CppBase() + 0x187FAAC))(this);
	}

};

}
