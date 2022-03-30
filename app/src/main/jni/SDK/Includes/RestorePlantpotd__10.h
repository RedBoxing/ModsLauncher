#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RestorePlantpotd10
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<RestorePlantpot>d__10"));
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
	template <typename T = void*> T& 7__wrap1() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& plantpot_item5__3() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& test_scene5__4() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(RestorePlantpotd10*))(Il2CppBase() + 0x4560A48))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(RestorePlantpotd10*))(Il2CppBase() + 0x4560ACC))(this);
	}
	template <typename T = void> T m__Finally1() {
		return ((T (*)(RestorePlantpotd10*))(Il2CppBase() + 0x4560A74))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(RestorePlantpotd10*))(Il2CppBase() + 0x4560F44))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(RestorePlantpotd10*))(Il2CppBase() + 0x4560F4C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(RestorePlantpotd10*))(Il2CppBase() + 0x4560FB4))(this);
	}

};

}
