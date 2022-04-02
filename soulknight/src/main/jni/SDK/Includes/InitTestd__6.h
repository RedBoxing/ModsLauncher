#pragma once
#include "Il2Cpp/Il2Cpp.h"

class InitTestd6
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<InitTest>d__6"));
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
	template <typename T = uintptr_t> T& testScene5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(InitTestd6*))(Il2CppBase() + 0x26E3338))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(InitTestd6*))(Il2CppBase() + 0x26E333C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(InitTestd6*))(Il2CppBase() + 0x26E34D0))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(InitTestd6*))(Il2CppBase() + 0x26E34D8))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(InitTestd6*))(Il2CppBase() + 0x26E3540))(this);
	}

};

}
