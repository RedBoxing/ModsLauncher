#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Atk1Released38
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Atk1Release>d__38"));
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
	template <typename T = uintptr_t> T& bullet5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(Atk1Released38*))(Il2CppBase() + 0x1FD54DC))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(Atk1Released38*))(Il2CppBase() + 0x1FD54E0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(Atk1Released38*))(Il2CppBase() + 0x1FD58D4))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(Atk1Released38*))(Il2CppBase() + 0x1FD58DC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(Atk1Released38*))(Il2CppBase() + 0x1FD5944))(this);
	}

};

}
