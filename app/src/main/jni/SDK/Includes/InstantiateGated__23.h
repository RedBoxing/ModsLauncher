#pragma once
#include "Il2Cpp/Il2Cpp.h"

class InstantiateGated23
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<InstantiateGate>d__23"));
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
		return ((T (*)(InstantiateGated23*))(Il2CppBase() + 0x42B692C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(InstantiateGated23*))(Il2CppBase() + 0x42B6930))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(InstantiateGated23*))(Il2CppBase() + 0x42B6B10))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(InstantiateGated23*))(Il2CppBase() + 0x42B6B18))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(InstantiateGated23*))(Il2CppBase() + 0x42B6B80))(this);
	}

};

}
