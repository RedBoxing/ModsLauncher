#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SkipPlotd16
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SkipPlot>d__16"));
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
		return ((T (*)(SkipPlotd16*))(Il2CppBase() + 0x4238240))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(SkipPlotd16*))(Il2CppBase() + 0x4238244))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(SkipPlotd16*))(Il2CppBase() + 0x4238394))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(SkipPlotd16*))(Il2CppBase() + 0x423839C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(SkipPlotd16*))(Il2CppBase() + 0x4238404))(this);
	}

};

}
