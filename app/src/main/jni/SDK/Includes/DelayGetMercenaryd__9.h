#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DelayGetMercenaryd9
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<DelayGetMercenary>d__9"));
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
		return ((T (*)(DelayGetMercenaryd9*))(Il2CppBase() + 0x43AEA18))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(DelayGetMercenaryd9*))(Il2CppBase() + 0x43AEA1C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(DelayGetMercenaryd9*))(Il2CppBase() + 0x43AEAFC))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(DelayGetMercenaryd9*))(Il2CppBase() + 0x43AEB04))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(DelayGetMercenaryd9*))(Il2CppBase() + 0x43AEB6C))(this);
	}

};

}
