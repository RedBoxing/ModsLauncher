#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DelayFlashAnimationd6
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<DelayFlashAnimation>d__6"));
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
		return ((T (*)(DelayFlashAnimationd6*))(Il2CppBase() + 0x4529018))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(DelayFlashAnimationd6*))(Il2CppBase() + 0x452901C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(DelayFlashAnimationd6*))(Il2CppBase() + 0x45291E8))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(DelayFlashAnimationd6*))(Il2CppBase() + 0x45291F0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(DelayFlashAnimationd6*))(Il2CppBase() + 0x4529258))(this);
	}

};

}
