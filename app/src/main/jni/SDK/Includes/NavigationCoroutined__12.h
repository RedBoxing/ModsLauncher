#pragma once
#include "Il2Cpp/Il2Cpp.h"

class NavigationCoroutined12
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<NavigationCoroutine>d__12"));
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
		return ((T (*)(NavigationCoroutined12*))(Il2CppBase() + 0x4326A0C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(NavigationCoroutined12*))(Il2CppBase() + 0x4326A10))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(NavigationCoroutined12*))(Il2CppBase() + 0x4326A78))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(NavigationCoroutined12*))(Il2CppBase() + 0x4326A80))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(NavigationCoroutined12*))(Il2CppBase() + 0x4326AE8))(this);
	}

};

}
