#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnteringCellerd10
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<EnteringCeller>d__10"));
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
	template <typename T = uintptr_t> T& controller() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(EnteringCellerd10*))(Il2CppBase() + 0x1D51554))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(EnteringCellerd10*))(Il2CppBase() + 0x1D51558))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(EnteringCellerd10*))(Il2CppBase() + 0x1D517C8))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(EnteringCellerd10*))(Il2CppBase() + 0x1D517D0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(EnteringCellerd10*))(Il2CppBase() + 0x1D51838))(this);
	}

};

}
