#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CoroutineLocalizeAlld85
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Coroutine_LocalizeAll>d__85"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(CoroutineLocalizeAlld85*))(Il2CppBase() + 0x45E178C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(CoroutineLocalizeAlld85*))(Il2CppBase() + 0x45E1790))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(CoroutineLocalizeAlld85*))(Il2CppBase() + 0x45E186C))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(CoroutineLocalizeAlld85*))(Il2CppBase() + 0x45E1874))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(CoroutineLocalizeAlld85*))(Il2CppBase() + 0x45E18DC))(this);
	}

};

}
