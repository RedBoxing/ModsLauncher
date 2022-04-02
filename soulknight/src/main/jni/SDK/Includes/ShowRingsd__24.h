#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ShowRingsd24
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ShowRings>d__24"));
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
	template <typename T = Il2CppArray<uintptr_t>*> T& pos_arr5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(ShowRingsd24*))(Il2CppBase() + 0x1DBF070))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(ShowRingsd24*))(Il2CppBase() + 0x1DBF074))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(ShowRingsd24*))(Il2CppBase() + 0x1DBF474))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(ShowRingsd24*))(Il2CppBase() + 0x1DBF47C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(ShowRingsd24*))(Il2CppBase() + 0x1DBF4E4))(this);
	}

};

}
