#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Scand11
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Scan>d__11"));
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
	template <typename T = Il2CppList<Il2CppString*>*> T& addrList() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& key5__2() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& 7__wrap2() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(Scand11*))(Il2CppBase() + 0x441A2A4))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(Scand11*))(Il2CppBase() + 0x441A318))(this);
	}
	template <typename T = void> T m__Finally1() {
		return ((T (*)(Scand11*))(Il2CppBase() + 0x441A2C0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(Scand11*))(Il2CppBase() + 0x441A7B4))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(Scand11*))(Il2CppBase() + 0x441A7BC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(Scand11*))(Il2CppBase() + 0x441A824))(this);
	}

};

}
