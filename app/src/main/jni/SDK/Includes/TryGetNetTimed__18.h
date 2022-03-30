#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TryGetNetTimed18
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<TryGetNetTime>d__18"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& waitForSeconds5__2() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(TryGetNetTimed18*))(Il2CppBase() + 0x43CD98C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(TryGetNetTimed18*))(Il2CppBase() + 0x43CD990))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(TryGetNetTimed18*))(Il2CppBase() + 0x43CDBB0))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(TryGetNetTimed18*))(Il2CppBase() + 0x43CDBB8))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(TryGetNetTimed18*))(Il2CppBase() + 0x43CDC20))(this);
	}

};

}
