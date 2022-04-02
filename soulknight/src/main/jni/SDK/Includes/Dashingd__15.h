#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Dashingd15
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Dashing>d__15"));
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
	template <typename T = float> T& extraValue5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(Dashingd15*))(Il2CppBase() + 0x24965E8))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(Dashingd15*))(Il2CppBase() + 0x24965EC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(Dashingd15*))(Il2CppBase() + 0x2496AAC))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(Dashingd15*))(Il2CppBase() + 0x2496AB4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(Dashingd15*))(Il2CppBase() + 0x2496B1C))(this);
	}

};

}
