#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GetEnumeratord15
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetEnumerator>d__15"));
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
		return ((T (*)(GetEnumeratord15*))(Il2CppBase() + 0x1733960))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(GetEnumeratord15*))(Il2CppBase() + 0x17339D4))(this);
	}
	template <typename T = void> T m__Finally1() {
		return ((T (*)(GetEnumeratord15*))(Il2CppBase() + 0x173397C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(GetEnumeratord15*))(Il2CppBase() + 0x1733B74))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(GetEnumeratord15*))(Il2CppBase() + 0x1733B7C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(GetEnumeratord15*))(Il2CppBase() + 0x1733BE4))(this);
	}

};

}
