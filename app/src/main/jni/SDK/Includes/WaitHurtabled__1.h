#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WaitHurtabled1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<WaitHurtable>d__1"));
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
		return ((T (*)(WaitHurtabled1*))(Il2CppBase() + 0x26EDED8))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(WaitHurtabled1*))(Il2CppBase() + 0x26EDEDC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(WaitHurtabled1*))(Il2CppBase() + 0x26EDF44))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(WaitHurtabled1*))(Il2CppBase() + 0x26EDF4C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(WaitHurtabled1*))(Il2CppBase() + 0x26EDFB4))(this);
	}

};

}
