#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Initd17
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Init>d__17"));
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
	template <typename T = void*> T& 7__wrap1() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(Initd17*))(Il2CppBase() + 0x43BFBF4))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(Initd17*))(Il2CppBase() + 0x43BFC68))(this);
	}
	template <typename T = void> T m__Finally1() {
		return ((T (*)(Initd17*))(Il2CppBase() + 0x43BFC10))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(Initd17*))(Il2CppBase() + 0x43C00BC))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(Initd17*))(Il2CppBase() + 0x43C00C4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(Initd17*))(Il2CppBase() + 0x43C012C))(this);
	}

};

}
