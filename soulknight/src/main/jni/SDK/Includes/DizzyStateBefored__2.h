#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DizzyStateBefored2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<DizzyStateBefore>d__2"));
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
	template <typename T = int32_t> T& i5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(DizzyStateBefored2*))(Il2CppBase() + 0x26F041C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(DizzyStateBefored2*))(Il2CppBase() + 0x26F0420))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(DizzyStateBefored2*))(Il2CppBase() + 0x26F0858))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(DizzyStateBefored2*))(Il2CppBase() + 0x26F0860))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(DizzyStateBefored2*))(Il2CppBase() + 0x26F08C8))(this);
	}

};

}
