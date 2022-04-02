#pragma once
#include "Il2Cpp/Il2Cpp.h"

class VampireTalkd14
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<VampireTalk>d__14"));
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
	template <typename T = uintptr_t> T& controller() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(VampireTalkd14*))(Il2CppBase() + 0x1D9FBB4))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(VampireTalkd14*))(Il2CppBase() + 0x1D9FBB8))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(VampireTalkd14*))(Il2CppBase() + 0x1D9FCB8))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(VampireTalkd14*))(Il2CppBase() + 0x1D9FCC0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(VampireTalkd14*))(Il2CppBase() + 0x1D9FD28))(this);
	}

};

}
