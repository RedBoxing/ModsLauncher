#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PlayingPlotd6
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<PlayingPlot>d__6"));
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
		return ((T (*)(PlayingPlotd6*))(Il2CppBase() + 0x4238D58))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(PlayingPlotd6*))(Il2CppBase() + 0x4238D5C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(PlayingPlotd6*))(Il2CppBase() + 0x4238FE4))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(PlayingPlotd6*))(Il2CppBase() + 0x4238FEC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(PlayingPlotd6*))(Il2CppBase() + 0x4239054))(this);
	}

};

}
