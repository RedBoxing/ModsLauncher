#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UnlockCaged27
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<UnlockCage>d__27"));
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
	template <typename T = uintptr_t> T& wait5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& i5__3() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(UnlockCaged27*))(Il2CppBase() + 0x186786C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(UnlockCaged27*))(Il2CppBase() + 0x1867870))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(UnlockCaged27*))(Il2CppBase() + 0x18679A8))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(UnlockCaged27*))(Il2CppBase() + 0x18679B0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(UnlockCaged27*))(Il2CppBase() + 0x1867A18))(this);
	}

};

}
