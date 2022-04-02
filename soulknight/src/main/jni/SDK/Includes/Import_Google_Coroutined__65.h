#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ImportGoogleCoroutined65
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Import_Google_Coroutine>d__65"));
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
	template <typename T = bool> T& JustCheck() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& www5__2() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(ImportGoogleCoroutined65*))(Il2CppBase() + 0x45D6F24))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(ImportGoogleCoroutined65*))(Il2CppBase() + 0x45D6F28))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(ImportGoogleCoroutined65*))(Il2CppBase() + 0x45D7240))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(ImportGoogleCoroutined65*))(Il2CppBase() + 0x45D7248))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(ImportGoogleCoroutined65*))(Il2CppBase() + 0x45D72B0))(this);
	}

};

}
