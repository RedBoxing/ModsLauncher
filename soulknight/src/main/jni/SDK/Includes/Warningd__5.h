#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Warningd5
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Warning>d__5"));
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
		return ((T (*)(Warningd5*))(Il2CppBase() + 0x21686FC))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(Warningd5*))(Il2CppBase() + 0x2168700))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(Warningd5*))(Il2CppBase() + 0x21687F0))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(Warningd5*))(Il2CppBase() + 0x21687F8))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(Warningd5*))(Il2CppBase() + 0x2168860))(this);
	}

};

}
